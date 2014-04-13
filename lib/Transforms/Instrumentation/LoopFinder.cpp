#define DEBUG_TYPE "loop-finder-type"
#include "llvm/Transforms/Instrumentation.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/Analysis/Dominators.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Analysis/ScalarEvolution.h"
using namespace llvm;

STATISTIC(NumLoops, "Number of loops detected");
STATISTIC(NumParallelLoops, "Number of parallel loops detected");

namespace {
  class LoopFinder : public LoopPass {
  public:
    static char ID; // Pass ID, replacement for typeid
    LoopFinder() : LoopPass(ID) {
      initializeLoopFinderPass(*PassRegistry::getPassRegistry());
    }

    // Possibly eliminate loop L if it is dead.
    bool runOnLoop(Loop *L, LPPassManager &LPM);
  };
}

char LoopFinder::ID = 0;
INITIALIZE_PASS(LoopFinder, "loop-finder",
                "Luis & Juan - Finding loops and parallel loops", false, false)

LoopPass *llvm::createLoopFinderPass() {
  return new LoopFinder();
}

bool LoopFinder::runOnLoop(Loop *L, LPPassManager &LPM) {

	NumLoops++;
	if(L->isAnnotatedParallel())
		NumParallelLoops++;

	errs() << "The total number of loops: " << NumLoops << "\n";
	errs() << "The total number of parallel loops: " << NumParallelLoops << "\n";

	return true;
}
