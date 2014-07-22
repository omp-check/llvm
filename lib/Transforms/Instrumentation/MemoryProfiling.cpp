//===- EdgeProfiling.cpp - Insert counters for edge profiling -------------===//
//
//                      The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// 
//===----------------------------------------------------------------------===//
#define DEBUG_TYPE "insert-edge-profiling"

#include <stdio.h>
#include "llvm/Transforms/Instrumentation.h"
#include "ProfilingUtils.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include <set>
#include <iostream>
#include <vector>
using namespace llvm;

STATISTIC(NumCallsInserted, "The # of memory calls inserted");

namespace {
  class MemoryProfiler : public ModulePass {
    bool runOnModule(Module &M);
  public:
    static char ID; // Pass identification, replacement for typeid
    MemoryProfiler() : ModulePass(ID) {
      initializeMemoryProfilerPass(*PassRegistry::getPassRegistry());
    }

    virtual const char *getPassName() const {
      return "Memory Profiler";
    }
  };
}

char MemoryProfiler::ID = 0;
INITIALIZE_PASS(MemoryProfiler, "insert-memory-profiling",
                "Juan - Insert instrumentation for memory profiling", false, false)

ModulePass *llvm::createMemoryProfilerPass() { return new MemoryProfiler(); }

void InsertProfilingInitCall(Function *Fn, const char *FnName, Instruction *Inst) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);

  
  Module &M = *Fn->getParent();
  Constant *ProfFn = M.getOrInsertFunction(FnName,VoidTy,NULL);//M..getOrInsertFunction(new StringRef("hola"), VoidTy);
                        
  CallInst::Create(ProfFn, "", Inst);
}

void InsertProfilingCall(Function *Fn, const char *FnName, Value *Addr, unsigned CallNO, Instruction *Inst, unsigned tipo) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);
  Type *UIntTy = Type::getInt32Ty(Context);
  Module &M = *Fn->getParent();
  //Type *StrTy= Type::getInt8PtrTy(Context);
  
  Constant *ProfFn = M.getOrInsertFunction(FnName, VoidTy, Addr->getType(), UIntTy, UIntTy,NULL);

  std::vector<Value*> Args(3);
  Args[0] = Addr;
  Args[1] = ConstantInt::get(UIntTy, CallNO);
  Args[2] = ConstantInt::get(UIntTy, tipo);
  //Args[3] = ConstantInt::get(StrTy, Fn->getName().data());
  
  CallInst::Create(ProfFn, Args, "", Inst);
}


bool MemoryProfiler::runOnModule(Module &M) {
  Function *Main = M.getFunction("main");

	std::vector<Function *> v;

	FILE * f = fopen("temp_check_functions.log", "r");

	char str[50];
	while(!feof(f)) {
		fscanf(f, "%s\n", str);
		v.push_back(M.getFunction(str));
	}

	Value * iterador;
	Value * tID;
	bool instrumenta = false;
	unsigned NumCalls = 0;
	for (std::vector<Function *>::iterator it = v.begin(); it != v.end(); ++it) {
		for (Function::iterator BB = (*it)->begin(), E = (*it)->end(); BB != E; BB++) {
			if(BB->getName().compare("omp.loop.main") == 0) {
				iterador = BB->begin()->getOperand(1);
				errs() << " === ACHOU! : " << *(iterador) << "\n";

				LLVMContext &Context = (*it)->getContext();
				Type *UIntTy = Type::getInt32Ty(Context);

				Module &M = *(*it)->getParent();
				Constant *ProfFn = M.getOrInsertFunction("omp_get_thread_num", UIntTy, NULL);
				tID = CallInst::Create(ProfFn, "", BB->begin());
			}
			else if(BB->getName().compare("omp.check.start") == 0) {
				instrumenta = true;
				errs() << " === START!\n";
			}
			else if (BB->getName().compare("omp.check.end") == 0) {
				instrumenta = false;
				errs() << " === END!\n";
			}

			if(instrumenta) {
				errs() << " === INSTRUMENTANDO: " << BB->getName() << " em " << (*it)->getName() <<"\n";
				for (BasicBlock::iterator I=BB->begin(), E= BB->end(); I!=E; ) {
					Instruction *CurrentInst = I;
					Instruction *NextInst= ++I;
		
					if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst)) {
						++NumCalls;
						Value *Addr;
						if (isa<LoadInst>(CurrentInst)) {
							LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
							Addr = LI->getPointerOperand();
							errs() << "\tLOAD: " << *Addr << " - " << *iterador << " - " << *tID <<"\n";
//						     InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, NextInst,0);
						}
						else
						{
							StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
							Addr = SI->getPointerOperand();
							errs() << "\tSTORE: " << *Addr << " - " << *iterador << " - " << *tID <<"\n";
//						     InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, NextInst,1);
						}
			
			
						BB = SplitBlock(BB, NextInst, this);
						E=BB->end();
					}

					I=NextInst;
				}
			}
		}
	}
  
  if (Main == 0) {
    errs() << "WARNING: cannot insert memory profiling into a module"
           << " with no main function!\n";
    return false;  // No main, no instrumentation!
  }

/*
  std::set<BasicBlock*> BlocksToInstrument;
  unsigned NumCalls = 0;
  for (Module::iterator F = M.begin(), E = M.end(); F != E; ++F) {
    if (F->isDeclaration()) continue;
    //errs() << F->getName() << "\n";
    for (Function::iterator BB = F->begin(), E = F->end(); BB != E; ) {
	//errs() << "\t" << BB->getName() << "\n";
	BasicBlock *CurrentBB=BB;
	BasicBlock *NextBB=++BB;
	
	for (BasicBlock::iterator I=CurrentBB->begin(), E= CurrentBB->end(); I!=E; ){
		Instruction *CurrentInst = I;
		Instruction *NextInst= ++I;
                
                
                if (isa<CallInst>(CurrentInst))
                {
                    CallInst *CI=dyn_cast<CallInst>(CurrentInst);
                    
                    StringRef nombre=CI->getCalledFunction()->getName();
                    
                    //errs()<<nombre<<"\n";
                    
                    if (nombre.compare("iterCount")==0) errs()<<"Habilitado"<<"\n";        
                    if (nombre.compare("iterFinish")==0) errs()<<"Deshabilitado"<<"\n";
                    
                    
                    
                }
		
		if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst))
		{
			++NumCalls;
			Value *Addr;
			if (isa<LoadInst>(CurrentInst)) {
				LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
				Addr = LI->getPointerOperand();
                                
                                InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, NextInst,0);
			}
			else
			{
				StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
				Addr = SI->getPointerOperand();
                                InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, NextInst,1);
			}
			
			
			CurrentBB = SplitBlock(CurrentBB, NextInst, this);
			E=CurrentBB->end();
		}
		I=NextInst;

	}
	
	BB=NextBB;
     
    }
  }*/

  NumCallsInserted = 0;

  errs() << "The total number of load & store instructions: " << NumCallsInserted << "\n";

	
  
  // Add the initialization call to main.
//  InsertProfilingInitCall(Main, "llvm_start_memory_profiling");
  return true;
}

