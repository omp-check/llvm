/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*127 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 105|128,4/*617*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->658
/*41*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*42*/      OPC_MoveChild, 1,
/*44*/      OPC_Scope, 17, /*->63*/ // 21 children in Scope
/*46*/        OPC_CheckInteger, 71|128,12/*1607*/, 
/*49*/        OPC_MoveParent,
/*50*/        OPC_RecordChild2, // #1 = $dst
/*51*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*54*/        OPC_EmitMergeInputChains1_0,
/*55*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*63*/      /*Scope*/ 17, /*->81*/
/*64*/        OPC_CheckInteger, 72|128,12/*1608*/, 
/*67*/        OPC_MoveParent,
/*68*/        OPC_RecordChild2, // #1 = $dst
/*69*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*72*/        OPC_EmitMergeInputChains1_0,
/*73*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*81*/      /*Scope*/ 17, /*->99*/
/*82*/        OPC_CheckInteger, 73|128,12/*1609*/, 
/*85*/        OPC_MoveParent,
/*86*/        OPC_RecordChild2, // #1 = $dst
/*87*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*90*/        OPC_EmitMergeInputChains1_0,
/*91*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1609:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*99*/      /*Scope*/ 17, /*->117*/
/*100*/       OPC_CheckInteger, 74|128,12/*1610*/, 
/*103*/       OPC_MoveParent,
/*104*/       OPC_RecordChild2, // #1 = $dst
/*105*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*108*/       OPC_EmitMergeInputChains1_0,
/*109*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1610:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*117*/     /*Scope*/ 17, /*->135*/
/*118*/       OPC_CheckInteger, 75|128,12/*1611*/, 
/*121*/       OPC_MoveParent,
/*122*/       OPC_RecordChild2, // #1 = $dst
/*123*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*126*/       OPC_EmitMergeInputChains1_0,
/*127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1611:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*135*/     /*Scope*/ 17, /*->153*/
/*136*/       OPC_CheckInteger, 76|128,12/*1612*/, 
/*139*/       OPC_MoveParent,
/*140*/       OPC_RecordChild2, // #1 = $dst
/*141*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*144*/       OPC_EmitMergeInputChains1_0,
/*145*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1612:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*153*/     /*Scope*/ 17, /*->171*/
/*154*/       OPC_CheckInteger, 77|128,12/*1613*/, 
/*157*/       OPC_MoveParent,
/*158*/       OPC_RecordChild2, // #1 = $dst
/*159*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*162*/       OPC_EmitMergeInputChains1_0,
/*163*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1613:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*171*/     /*Scope*/ 17, /*->189*/
/*172*/       OPC_CheckInteger, 78|128,12/*1614*/, 
/*175*/       OPC_MoveParent,
/*176*/       OPC_RecordChild2, // #1 = $dst
/*177*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*180*/       OPC_EmitMergeInputChains1_0,
/*181*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1614:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*189*/     /*Scope*/ 21, /*->211*/
/*190*/       OPC_CheckInteger, 67|128,11/*1475*/, 
/*193*/       OPC_MoveParent,
/*194*/       OPC_RecordChild2, // #1 = $rS
/*195*/       OPC_RecordChild3, // #2 = $dst
/*196*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*198*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*201*/       OPC_EmitMergeInputChains1_0,
/*202*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1475:iPTR, v16i8:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX v16i8:v16i8:$rS, xoaddr:iPTR:$dst)
/*211*/     /*Scope*/ 21, /*->233*/
/*212*/       OPC_CheckInteger, 68|128,11/*1476*/, 
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #1 = $rS
/*217*/       OPC_RecordChild3, // #2 = $dst
/*218*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1476:iPTR, v8i16:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX v8i16:v8i16:$rS, xoaddr:iPTR:$dst)
/*233*/     /*Scope*/ 21, /*->255*/
/*234*/       OPC_CheckInteger, 69|128,11/*1477*/, 
/*237*/       OPC_MoveParent,
/*238*/       OPC_RecordChild2, // #1 = $rS
/*239*/       OPC_RecordChild3, // #2 = $dst
/*240*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*242*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*245*/       OPC_EmitMergeInputChains1_0,
/*246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1477:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*255*/     /*Scope*/ 21, /*->277*/
/*256*/       OPC_CheckInteger, 70|128,11/*1478*/, 
/*259*/       OPC_MoveParent,
/*260*/       OPC_RecordChild2, // #1 = $rS
/*261*/       OPC_RecordChild3, // #2 = $dst
/*262*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*264*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*267*/       OPC_EmitMergeInputChains1_0,
/*268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1478:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*277*/     /*Scope*/ 21, /*->299*/
/*278*/       OPC_CheckInteger, 71|128,11/*1479*/, 
/*281*/       OPC_MoveParent,
/*282*/       OPC_RecordChild2, // #1 = $rS
/*283*/       OPC_RecordChild3, // #2 = $dst
/*284*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*286*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*289*/       OPC_EmitMergeInputChains1_0,
/*290*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1479:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*299*/     /*Scope*/ 35, /*->335*/
/*300*/       OPC_CheckInteger, 52|128,11/*1460*/, 
/*303*/       OPC_MoveParent,
/*304*/       OPC_RecordChild2, // #1 = $STRM
/*305*/       OPC_MoveChild, 2,
/*307*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*310*/       OPC_MoveParent,
/*311*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*313*/       OPC_EmitMergeInputChains1_0,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitConvertToTarget, 1,
/*319*/       OPC_EmitInteger, MVT::i32, 0, 
/*322*/       OPC_EmitInteger, MVT::i32, 0, 
/*325*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1460:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*335*/     /*Scope*/ 65, /*->401*/
/*336*/       OPC_CheckInteger, 54|128,11/*1462*/, 
/*339*/       OPC_MoveParent,
/*340*/       OPC_RecordChild2, // #1 = $rA
/*341*/       OPC_Scope, 28, /*->371*/ // 2 children in Scope
/*343*/         OPC_CheckChild2Type, MVT::i32,
/*345*/         OPC_RecordChild3, // #2 = $rB
/*346*/         OPC_RecordChild4, // #3 = $STRM
/*347*/         OPC_MoveChild, 4,
/*349*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*352*/         OPC_MoveParent,
/*353*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*355*/         OPC_EmitMergeInputChains1_0,
/*356*/         OPC_EmitInteger, MVT::i32, 0, 
/*359*/         OPC_EmitConvertToTarget, 3,
/*361*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*371*/       /*Scope*/ 28, /*->400*/
/*372*/         OPC_CheckChild2Type, MVT::i64,
/*374*/         OPC_RecordChild3, // #2 = $rB
/*375*/         OPC_RecordChild4, // #3 = $STRM
/*376*/         OPC_MoveChild, 4,
/*378*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*381*/         OPC_MoveParent,
/*382*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*400*/       0, /*End of Scope*/
/*401*/     /*Scope*/ 65, /*->467*/
/*402*/       OPC_CheckInteger, 57|128,11/*1465*/, 
/*405*/       OPC_MoveParent,
/*406*/       OPC_RecordChild2, // #1 = $rA
/*407*/       OPC_Scope, 28, /*->437*/ // 2 children in Scope
/*409*/         OPC_CheckChild2Type, MVT::i32,
/*411*/         OPC_RecordChild3, // #2 = $rB
/*412*/         OPC_RecordChild4, // #3 = $STRM
/*413*/         OPC_MoveChild, 4,
/*415*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*418*/         OPC_MoveParent,
/*419*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*421*/         OPC_EmitMergeInputChains1_0,
/*422*/         OPC_EmitInteger, MVT::i32, 1, 
/*425*/         OPC_EmitConvertToTarget, 3,
/*427*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*437*/       /*Scope*/ 28, /*->466*/
/*438*/         OPC_CheckChild2Type, MVT::i64,
/*440*/         OPC_RecordChild3, // #2 = $rB
/*441*/         OPC_RecordChild4, // #3 = $STRM
/*442*/         OPC_MoveChild, 4,
/*444*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*447*/         OPC_MoveParent,
/*448*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*450*/         OPC_EmitMergeInputChains1_0,
/*451*/         OPC_EmitInteger, MVT::i32, 1, 
/*454*/         OPC_EmitConvertToTarget, 3,
/*456*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*466*/       0, /*End of Scope*/
/*467*/     /*Scope*/ 65, /*->533*/
/*468*/       OPC_CheckInteger, 55|128,11/*1463*/, 
/*471*/       OPC_MoveParent,
/*472*/       OPC_RecordChild2, // #1 = $rA
/*473*/       OPC_Scope, 28, /*->503*/ // 2 children in Scope
/*475*/         OPC_CheckChild2Type, MVT::i32,
/*477*/         OPC_RecordChild3, // #2 = $rB
/*478*/         OPC_RecordChild4, // #3 = $STRM
/*479*/         OPC_MoveChild, 4,
/*481*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/         OPC_MoveParent,
/*485*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*487*/         OPC_EmitMergeInputChains1_0,
/*488*/         OPC_EmitInteger, MVT::i32, 0, 
/*491*/         OPC_EmitConvertToTarget, 3,
/*493*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*503*/       /*Scope*/ 28, /*->532*/
/*504*/         OPC_CheckChild2Type, MVT::i64,
/*506*/         OPC_RecordChild3, // #2 = $rB
/*507*/         OPC_RecordChild4, // #3 = $STRM
/*508*/         OPC_MoveChild, 4,
/*510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*513*/         OPC_MoveParent,
/*514*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*516*/         OPC_EmitMergeInputChains1_0,
/*517*/         OPC_EmitInteger, MVT::i32, 0, 
/*520*/         OPC_EmitConvertToTarget, 3,
/*522*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*532*/       0, /*End of Scope*/
/*533*/     /*Scope*/ 65, /*->599*/
/*534*/       OPC_CheckInteger, 56|128,11/*1464*/, 
/*537*/       OPC_MoveParent,
/*538*/       OPC_RecordChild2, // #1 = $rA
/*539*/       OPC_Scope, 28, /*->569*/ // 2 children in Scope
/*541*/         OPC_CheckChild2Type, MVT::i32,
/*543*/         OPC_RecordChild3, // #2 = $rB
/*544*/         OPC_RecordChild4, // #3 = $STRM
/*545*/         OPC_MoveChild, 4,
/*547*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*550*/         OPC_MoveParent,
/*551*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*553*/         OPC_EmitMergeInputChains1_0,
/*554*/         OPC_EmitInteger, MVT::i32, 1, 
/*557*/         OPC_EmitConvertToTarget, 3,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*569*/       /*Scope*/ 28, /*->598*/
/*570*/         OPC_CheckChild2Type, MVT::i64,
/*572*/         OPC_RecordChild3, // #2 = $rB
/*573*/         OPC_RecordChild4, // #3 = $STRM
/*574*/         OPC_MoveChild, 4,
/*576*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*579*/         OPC_MoveParent,
/*580*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 1, 
/*586*/         OPC_EmitConvertToTarget, 3,
/*588*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*598*/       0, /*End of Scope*/
/*599*/     /*Scope*/ 11, /*->611*/
/*600*/       OPC_CheckInteger, 79|128,12/*1615*/, 
/*603*/       OPC_MoveParent,
/*604*/       OPC_EmitMergeInputChains1_0,
/*605*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1615:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*611*/     /*Scope*/ 15, /*->627*/
/*612*/       OPC_CheckInteger, 66|128,11/*1474*/, 
/*615*/       OPC_MoveParent,
/*616*/       OPC_RecordChild2, // #1 = $vB
/*617*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1474:iPTR, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR v4i32:v4i32:$vB)
/*627*/     /*Scope*/ 29, /*->657*/
/*628*/       OPC_CheckInteger, 53|128,11/*1461*/, 
/*631*/       OPC_MoveParent,
/*632*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*634*/       OPC_EmitMergeInputChains1_0,
/*635*/       OPC_EmitInteger, MVT::i32, 1, 
/*638*/       OPC_EmitInteger, MVT::i32, 0, 
/*641*/       OPC_EmitInteger, MVT::i32, 0, 
/*644*/       OPC_EmitInteger, MVT::i32, 0, 
/*647*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1461:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*657*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::ADD),// ->1257
/*662*/     OPC_Scope, 49|128,1/*177*/, /*->842*/ // 3 children in Scope
/*665*/       OPC_RecordChild0, // #0 = $rA
/*666*/       OPC_MoveChild, 1,
/*668*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->696
/*672*/         OPC_RecordChild0, // #1 = $sym
/*673*/         OPC_MoveChild, 0,
/*675*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*678*/         OPC_MoveParent,
/*679*/         OPC_MoveChild, 1,
/*681*/         OPC_CheckInteger, 0, 
/*683*/         OPC_MoveParent,
/*684*/         OPC_MoveParent,
/*685*/         OPC_CheckType, MVT::i32,
/*687*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->841
/*700*/         OPC_RecordChild0, // #1 = $g
/*701*/         OPC_MoveChild, 0,
/*703*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->738
/*707*/           OPC_MoveParent,
/*708*/           OPC_MoveChild, 1,
/*710*/           OPC_CheckInteger, 0, 
/*712*/           OPC_MoveParent,
/*713*/           OPC_MoveParent,
/*714*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->726
/*717*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->772
/*741*/           OPC_MoveParent,
/*742*/           OPC_MoveChild, 1,
/*744*/           OPC_CheckInteger, 0, 
/*746*/           OPC_MoveParent,
/*747*/           OPC_MoveParent,
/*748*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->760
/*751*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->806
/*775*/           OPC_MoveParent,
/*776*/           OPC_MoveChild, 1,
/*778*/           OPC_CheckInteger, 0, 
/*780*/           OPC_MoveParent,
/*781*/           OPC_MoveParent,
/*782*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->794
/*785*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->840
/*809*/           OPC_MoveParent,
/*810*/           OPC_MoveChild, 1,
/*812*/           OPC_CheckInteger, 0, 
/*814*/           OPC_MoveParent,
/*815*/           OPC_MoveParent,
/*816*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->828
/*819*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*842*/     /*Scope*/ 53|128,1/*181*/, /*->1025*/
/*844*/       OPC_MoveChild, 0,
/*846*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->875
/*850*/         OPC_RecordChild0, // #0 = $sym
/*851*/         OPC_MoveChild, 0,
/*853*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*856*/         OPC_MoveParent,
/*857*/         OPC_MoveChild, 1,
/*859*/         OPC_CheckInteger, 0, 
/*861*/         OPC_MoveParent,
/*862*/         OPC_MoveParent,
/*863*/         OPC_RecordChild1, // #1 = $rA
/*864*/         OPC_CheckType, MVT::i32,
/*866*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), i32:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1024
/*879*/         OPC_RecordChild0, // #0 = $g
/*880*/         OPC_MoveChild, 0,
/*882*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->918
/*886*/           OPC_MoveParent,
/*887*/           OPC_MoveChild, 1,
/*889*/           OPC_CheckInteger, 0, 
/*891*/           OPC_MoveParent,
/*892*/           OPC_MoveParent,
/*893*/           OPC_RecordChild1, // #1 = $in
/*894*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->906
/*897*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->953
/*921*/           OPC_MoveParent,
/*922*/           OPC_MoveChild, 1,
/*924*/           OPC_CheckInteger, 0, 
/*926*/           OPC_MoveParent,
/*927*/           OPC_MoveParent,
/*928*/           OPC_RecordChild1, // #1 = $in
/*929*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->941
/*932*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->988
/*956*/           OPC_MoveParent,
/*957*/           OPC_MoveChild, 1,
/*959*/           OPC_CheckInteger, 0, 
/*961*/           OPC_MoveParent,
/*962*/           OPC_MoveParent,
/*963*/           OPC_RecordChild1, // #1 = $in
/*964*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->976
/*967*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1023
/*991*/           OPC_MoveParent,
/*992*/           OPC_MoveChild, 1,
/*994*/           OPC_CheckInteger, 0, 
/*996*/           OPC_MoveParent,
/*997*/           OPC_MoveParent,
/*998*/           OPC_RecordChild1, // #1 = $in
/*999*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1011
/*1002*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1025*/    /*Scope*/ 101|128,1/*229*/, /*->1256*/
/*1027*/      OPC_RecordChild0, // #0 = $rA
/*1028*/      OPC_Scope, 99, /*->1129*/ // 3 children in Scope
/*1030*/        OPC_RecordChild1, // #1 = $imm
/*1031*/        OPC_MoveChild, 1,
/*1033*/        OPC_SwitchOpcode /*2 cases */, 76,  TARGET_VAL(ISD::Constant),// ->1113
/*1037*/          OPC_Scope, 16, /*->1055*/ // 4 children in Scope
/*1039*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1041*/            OPC_MoveParent,
/*1042*/            OPC_CheckType, MVT::i32,
/*1044*/            OPC_EmitConvertToTarget, 1,
/*1046*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 i32:i32:$rA, (imm:i32):$imm)
/*1055*/          /*Scope*/ 19, /*->1075*/
/*1056*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1058*/            OPC_MoveParent,
/*1059*/            OPC_CheckType, MVT::i32,
/*1061*/            OPC_EmitConvertToTarget, 1,
/*1063*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1066*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 i32:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1075*/          /*Scope*/ 16, /*->1092*/
/*1076*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1078*/            OPC_MoveParent,
/*1079*/            OPC_CheckType, MVT::i64,
/*1081*/            OPC_EmitConvertToTarget, 1,
/*1083*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*1092*/          /*Scope*/ 19, /*->1112*/
/*1093*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1095*/            OPC_MoveParent,
/*1096*/            OPC_CheckType, MVT::i64,
/*1098*/            OPC_EmitConvertToTarget, 1,
/*1100*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1103*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 i64:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1112*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1128
/*1116*/          OPC_MoveParent,
/*1117*/          OPC_CheckType, MVT::i64,
/*1119*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1129*/      /*Scope*/ 18, /*->1148*/
/*1130*/        OPC_MoveChild, 0,
/*1132*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1135*/        OPC_MoveParent,
/*1136*/        OPC_RecordChild1, // #1 = $rA
/*1137*/        OPC_CheckType, MVT::i64,
/*1139*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, i64:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1148*/      /*Scope*/ 106, /*->1255*/
/*1149*/        OPC_RecordChild1, // #1 = $imm
/*1150*/        OPC_Scope, 36, /*->1188*/ // 6 children in Scope
/*1152*/          OPC_MoveChild, 1,
/*1154*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1157*/          OPC_MoveParent,
/*1158*/          OPC_CheckType, MVT::i32,
/*1160*/          OPC_EmitConvertToTarget, 1,
/*1162*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1165*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1174*/          OPC_EmitConvertToTarget, 1,
/*1176*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1179*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1188*/        /*Scope*/ 11, /*->1200*/
/*1189*/          OPC_CheckType, MVT::i32,
/*1191*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 i32:i32:$rA, i32:i32:$rB)
/*1200*/        /*Scope*/ 11, /*->1212*/
/*1201*/          OPC_CheckType, MVT::i64,
/*1203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 i64:i64:$rA, i64:i64:$rB)
/*1212*/        /*Scope*/ 13, /*->1226*/
/*1213*/          OPC_CheckType, MVT::v16i8,
/*1215*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1217*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*1226*/        /*Scope*/ 13, /*->1240*/
/*1227*/          OPC_CheckType, MVT::v8i16,
/*1229*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1231*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*1240*/        /*Scope*/ 13, /*->1254*/
/*1241*/          OPC_CheckType, MVT::v4i32,
/*1243*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1245*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*1254*/        0, /*End of Scope*/
/*1255*/      0, /*End of Scope*/
/*1256*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117|128,6/*885*/,  TARGET_VAL(ISD::LOAD),// ->2146
/*1261*/    OPC_RecordMemRef,
/*1262*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1263*/    OPC_RecordChild1, // #1 = $src
/*1264*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1266*/    OPC_Scope, 19, /*->1287*/ // 19 children in Scope
/*1268*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1270*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1272*/      OPC_CheckType, MVT::i32,
/*1274*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1277*/      OPC_EmitMergeInputChains1_0,
/*1278*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1287*/    /*Scope*/ 19, /*->1307*/
/*1288*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1290*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1292*/      OPC_CheckType, MVT::i32,
/*1294*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1297*/      OPC_EmitMergeInputChains1_0,
/*1298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1307*/    /*Scope*/ 19, /*->1327*/
/*1308*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1310*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1312*/      OPC_CheckType, MVT::i32,
/*1314*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1317*/      OPC_EmitMergeInputChains1_0,
/*1318*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1327*/    /*Scope*/ 17, /*->1345*/
/*1328*/      OPC_CheckPredicate, 8, // Predicate_load
/*1330*/      OPC_CheckType, MVT::i32,
/*1332*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1335*/      OPC_EmitMergeInputChains1_0,
/*1336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1345*/    /*Scope*/ 19, /*->1365*/
/*1346*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1348*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1350*/      OPC_CheckType, MVT::i32,
/*1352*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1355*/      OPC_EmitMergeInputChains1_0,
/*1356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1365*/    /*Scope*/ 19, /*->1385*/
/*1366*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1368*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1370*/      OPC_CheckType, MVT::i32,
/*1372*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1375*/      OPC_EmitMergeInputChains1_0,
/*1376*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1385*/    /*Scope*/ 19, /*->1405*/
/*1386*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1388*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1390*/      OPC_CheckType, MVT::i32,
/*1392*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1395*/      OPC_EmitMergeInputChains1_0,
/*1396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1405*/    /*Scope*/ 17, /*->1423*/
/*1406*/      OPC_CheckPredicate, 8, // Predicate_load
/*1408*/      OPC_CheckType, MVT::i32,
/*1410*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1413*/      OPC_EmitMergeInputChains1_0,
/*1414*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1423*/    /*Scope*/ 36, /*->1460*/
/*1424*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1426*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1428*/      OPC_CheckType, MVT::i32,
/*1430*/      OPC_Scope, 13, /*->1445*/ // 2 children in Scope
/*1432*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1435*/        OPC_EmitMergeInputChains1_0,
/*1436*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1445*/      /*Scope*/ 13, /*->1459*/
/*1446*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1449*/        OPC_EmitMergeInputChains1_0,
/*1450*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1459*/      0, /*End of Scope*/
/*1460*/    /*Scope*/ 105, /*->1566*/
/*1461*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1463*/      OPC_CheckType, MVT::i32,
/*1465*/      OPC_Scope, 32, /*->1499*/ // 3 children in Scope
/*1467*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1469*/        OPC_Scope, 13, /*->1484*/ // 2 children in Scope
/*1471*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1474*/          OPC_EmitMergeInputChains1_0,
/*1475*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1484*/        /*Scope*/ 13, /*->1498*/
/*1485*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1488*/          OPC_EmitMergeInputChains1_0,
/*1489*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1498*/        0, /*End of Scope*/
/*1499*/      /*Scope*/ 32, /*->1532*/
/*1500*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1502*/        OPC_Scope, 13, /*->1517*/ // 2 children in Scope
/*1504*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1507*/          OPC_EmitMergeInputChains1_0,
/*1508*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1517*/        /*Scope*/ 13, /*->1531*/
/*1518*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1521*/          OPC_EmitMergeInputChains1_0,
/*1522*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1531*/        0, /*End of Scope*/
/*1532*/      /*Scope*/ 32, /*->1565*/
/*1533*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1535*/        OPC_Scope, 13, /*->1550*/ // 2 children in Scope
/*1537*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1540*/          OPC_EmitMergeInputChains1_0,
/*1541*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1550*/        /*Scope*/ 13, /*->1564*/
/*1551*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1554*/          OPC_EmitMergeInputChains1_0,
/*1555*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1564*/        0, /*End of Scope*/
/*1565*/      0, /*End of Scope*/
/*1566*/    /*Scope*/ 72, /*->1639*/
/*1567*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1569*/      OPC_CheckType, MVT::i64,
/*1571*/      OPC_Scope, 15, /*->1588*/ // 4 children in Scope
/*1573*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1575*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1578*/        OPC_EmitMergeInputChains1_0,
/*1579*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1588*/      /*Scope*/ 17, /*->1606*/
/*1589*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1591*/        OPC_CheckPredicate, 15, // Predicate_aligned4sextloadi32
/*1593*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1596*/        OPC_EmitMergeInputChains1_0,
/*1597*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned4sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1606*/      /*Scope*/ 15, /*->1622*/
/*1607*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1609*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1612*/        OPC_EmitMergeInputChains1_0,
/*1613*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1622*/      /*Scope*/ 15, /*->1638*/
/*1623*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1628*/        OPC_EmitMergeInputChains1_0,
/*1629*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1638*/      0, /*End of Scope*/
/*1639*/    /*Scope*/ 102, /*->1742*/
/*1640*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1642*/      OPC_CheckType, MVT::i64,
/*1644*/      OPC_Scope, 15, /*->1661*/ // 6 children in Scope
/*1646*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1648*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1651*/        OPC_EmitMergeInputChains1_0,
/*1652*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1661*/      /*Scope*/ 15, /*->1677*/
/*1662*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1664*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1667*/        OPC_EmitMergeInputChains1_0,
/*1668*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1677*/      /*Scope*/ 15, /*->1693*/
/*1678*/        OPC_CheckPredicate, 16, // Predicate_zextloadi32
/*1680*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1683*/        OPC_EmitMergeInputChains1_0,
/*1684*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1693*/      /*Scope*/ 15, /*->1709*/
/*1694*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1696*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1699*/        OPC_EmitMergeInputChains1_0,
/*1700*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1709*/      /*Scope*/ 15, /*->1725*/
/*1710*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1712*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1715*/        OPC_EmitMergeInputChains1_0,
/*1716*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1725*/      /*Scope*/ 15, /*->1741*/
/*1726*/        OPC_CheckPredicate, 16, // Predicate_zextloadi32
/*1728*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1731*/        OPC_EmitMergeInputChains1_0,
/*1732*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1741*/      0, /*End of Scope*/
/*1742*/    /*Scope*/ 36, /*->1779*/
/*1743*/      OPC_CheckPredicate, 8, // Predicate_load
/*1745*/      OPC_CheckType, MVT::i64,
/*1747*/      OPC_Scope, 15, /*->1764*/ // 2 children in Scope
/*1749*/        OPC_CheckPredicate, 17, // Predicate_aligned4load
/*1751*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1754*/        OPC_EmitMergeInputChains1_0,
/*1755*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned4load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1764*/      /*Scope*/ 13, /*->1778*/
/*1765*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1768*/        OPC_EmitMergeInputChains1_0,
/*1769*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1778*/      0, /*End of Scope*/
/*1779*/    /*Scope*/ 36, /*->1816*/
/*1780*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1782*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1784*/      OPC_CheckType, MVT::i64,
/*1786*/      OPC_Scope, 13, /*->1801*/ // 2 children in Scope
/*1788*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1791*/        OPC_EmitMergeInputChains1_0,
/*1792*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1801*/      /*Scope*/ 13, /*->1815*/
/*1802*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1805*/        OPC_EmitMergeInputChains1_0,
/*1806*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1815*/      0, /*End of Scope*/
/*1816*/    /*Scope*/ 10|128,1/*138*/, /*->1956*/
/*1818*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1820*/      OPC_CheckType, MVT::i64,
/*1822*/      OPC_Scope, 32, /*->1856*/ // 4 children in Scope
/*1824*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1826*/        OPC_Scope, 13, /*->1841*/ // 2 children in Scope
/*1828*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1831*/          OPC_EmitMergeInputChains1_0,
/*1832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1841*/        /*Scope*/ 13, /*->1855*/
/*1842*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1845*/          OPC_EmitMergeInputChains1_0,
/*1846*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1855*/        0, /*End of Scope*/
/*1856*/      /*Scope*/ 32, /*->1889*/
/*1857*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1859*/        OPC_Scope, 13, /*->1874*/ // 2 children in Scope
/*1861*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1874*/        /*Scope*/ 13, /*->1888*/
/*1875*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1878*/          OPC_EmitMergeInputChains1_0,
/*1879*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1888*/        0, /*End of Scope*/
/*1889*/      /*Scope*/ 32, /*->1922*/
/*1890*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1892*/        OPC_Scope, 13, /*->1907*/ // 2 children in Scope
/*1894*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1897*/          OPC_EmitMergeInputChains1_0,
/*1898*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1907*/        /*Scope*/ 13, /*->1921*/
/*1908*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1911*/          OPC_EmitMergeInputChains1_0,
/*1912*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1921*/        0, /*End of Scope*/
/*1922*/      /*Scope*/ 32, /*->1955*/
/*1923*/        OPC_CheckPredicate, 18, // Predicate_extloadi32
/*1925*/        OPC_Scope, 13, /*->1940*/ // 2 children in Scope
/*1927*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1930*/          OPC_EmitMergeInputChains1_0,
/*1931*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1940*/        /*Scope*/ 13, /*->1954*/
/*1941*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1944*/          OPC_EmitMergeInputChains1_0,
/*1945*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1954*/        0, /*End of Scope*/
/*1955*/      0, /*End of Scope*/
/*1956*/    /*Scope*/ 21, /*->1978*/
/*1957*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1959*/      OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1961*/      OPC_CheckPredicate, 19, // Predicate_unaligned4sextloadi32
/*1963*/      OPC_CheckType, MVT::i64,
/*1965*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*1968*/      OPC_EmitMergeInputChains1_0,
/*1969*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_unaligned4sextloadi32>> - Complexity = 13
              // Dst: (LWAX:i64 xoaddr:iPTR:$src)
/*1978*/    /*Scope*/ 85, /*->2064*/
/*1979*/      OPC_CheckPredicate, 8, // Predicate_load
/*1981*/      OPC_SwitchType /*3 cases */, 15,  MVT::i64,// ->1999
/*1984*/        OPC_CheckPredicate, 20, // Predicate_unaligned4load
/*1986*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*1989*/        OPC_EmitMergeInputChains1_0,
/*1990*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_unaligned4load>> - Complexity = 13
                // Dst: (LDX:i64 xoaddr:iPTR:$src)
              /*SwitchType*/ 30,  MVT::f32,// ->2031
/*2001*/        OPC_Scope, 13, /*->2016*/ // 2 children in Scope
/*2003*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2006*/          OPC_EmitMergeInputChains1_0,
/*2007*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2016*/        /*Scope*/ 13, /*->2030*/
/*2017*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2020*/          OPC_EmitMergeInputChains1_0,
/*2021*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2030*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2063
/*2033*/        OPC_Scope, 13, /*->2048*/ // 2 children in Scope
/*2035*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2038*/          OPC_EmitMergeInputChains1_0,
/*2039*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2048*/        /*Scope*/ 13, /*->2062*/
/*2049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2052*/          OPC_EmitMergeInputChains1_0,
/*2053*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2062*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2064*/    /*Scope*/ 60, /*->2125*/
/*2065*/      OPC_CheckPredicate, 10, // Predicate_extload
/*2067*/      OPC_CheckPredicate, 21, // Predicate_extloadf32
/*2069*/      OPC_CheckType, MVT::f64,
/*2071*/      OPC_Scope, 25, /*->2098*/ // 2 children in Scope
/*2073*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2076*/        OPC_EmitMergeInputChains1_0,
/*2077*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2086*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2089*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:i32)
/*2098*/      /*Scope*/ 25, /*->2124*/
/*2099*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2102*/        OPC_EmitMergeInputChains1_0,
/*2103*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2112*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2115*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:i32)
/*2124*/      0, /*End of Scope*/
/*2125*/    /*Scope*/ 19, /*->2145*/
/*2126*/      OPC_CheckPredicate, 8, // Predicate_load
/*2128*/      OPC_CheckType, MVT::v4i32,
/*2130*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2132*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2135*/      OPC_EmitMergeInputChains1_0,
/*2136*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2145*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87|128,5/*727*/,  TARGET_VAL(ISD::STORE),// ->2877
/*2150*/    OPC_RecordMemRef,
/*2151*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2152*/    OPC_RecordChild1, // #1 = $rS
/*2153*/    OPC_Scope, 103|128,1/*231*/, /*->2387*/ // 5 children in Scope
/*2156*/      OPC_CheckChild1Type, MVT::i32,
/*2158*/      OPC_RecordChild2, // #2 = $src
/*2159*/      OPC_Scope, 110, /*->2271*/ // 2 children in Scope
/*2161*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2163*/        OPC_Scope, 36, /*->2201*/ // 4 children in Scope
/*2165*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2167*/          OPC_Scope, 15, /*->2184*/ // 2 children in Scope
/*2169*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2171*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2174*/            OPC_EmitMergeInputChains1_0,
/*2175*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i32:i32:$rS, iaddr:iPTR:$src)
/*2184*/          /*Scope*/ 15, /*->2200*/
/*2185*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2187*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2190*/            OPC_EmitMergeInputChains1_0,
/*2191*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i32:i32:$rS, iaddr:iPTR:$src)
/*2200*/          0, /*End of Scope*/
/*2201*/        /*Scope*/ 15, /*->2217*/
/*2202*/          OPC_CheckPredicate, 26, // Predicate_store
/*2204*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2207*/          OPC_EmitMergeInputChains1_0,
/*2208*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW i32:i32:$rS, iaddr:iPTR:$src)
/*2217*/        /*Scope*/ 36, /*->2254*/
/*2218*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2220*/          OPC_Scope, 15, /*->2237*/ // 2 children in Scope
/*2222*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2224*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2227*/            OPC_EmitMergeInputChains1_0,
/*2228*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX i32:i32:$rS, xaddr:iPTR:$dst)
/*2237*/          /*Scope*/ 15, /*->2253*/
/*2238*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2240*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2243*/            OPC_EmitMergeInputChains1_0,
/*2244*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX i32:i32:$rS, xaddr:iPTR:$dst)
/*2253*/          0, /*End of Scope*/
/*2254*/        /*Scope*/ 15, /*->2270*/
/*2255*/          OPC_CheckPredicate, 26, // Predicate_store
/*2257*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2260*/          OPC_EmitMergeInputChains1_0,
/*2261*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX i32:i32:$rS, xaddr:iPTR:$dst)
/*2270*/        0, /*End of Scope*/
/*2271*/      /*Scope*/ 114, /*->2386*/
/*2272*/        OPC_RecordChild3, // #3 = $ptroff
/*2273*/        OPC_Scope, 40, /*->2315*/ // 4 children in Scope
/*2275*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2277*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2279*/          OPC_Scope, 16, /*->2297*/ // 2 children in Scope
/*2281*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2283*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2286*/            OPC_EmitMergeInputChains1_0,
/*2287*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2297*/          /*Scope*/ 16, /*->2314*/
/*2298*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2300*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2303*/            OPC_EmitMergeInputChains1_0,
/*2304*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2314*/          0, /*End of Scope*/
/*2315*/        /*Scope*/ 18, /*->2334*/
/*2316*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2318*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2320*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2323*/          OPC_EmitMergeInputChains1_0,
/*2324*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2334*/        /*Scope*/ 34, /*->2369*/
/*2335*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2337*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2339*/          OPC_Scope, 13, /*->2354*/ // 2 children in Scope
/*2341*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2343*/            OPC_EmitMergeInputChains1_0,
/*2344*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2354*/          /*Scope*/ 13, /*->2368*/
/*2355*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2357*/            OPC_EmitMergeInputChains1_0,
/*2358*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2368*/          0, /*End of Scope*/
/*2369*/        /*Scope*/ 15, /*->2385*/
/*2370*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2372*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2374*/          OPC_EmitMergeInputChains1_0,
/*2375*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STWUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2385*/        0, /*End of Scope*/
/*2386*/      0, /*End of Scope*/
/*2387*/    /*Scope*/ 75, /*->2463*/
/*2388*/      OPC_CheckChild1Type, MVT::f32,
/*2390*/      OPC_RecordChild2, // #2 = $dst
/*2391*/      OPC_Scope, 34, /*->2427*/ // 2 children in Scope
/*2393*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2395*/        OPC_CheckPredicate, 26, // Predicate_store
/*2397*/        OPC_Scope, 13, /*->2412*/ // 2 children in Scope
/*2399*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2402*/          OPC_EmitMergeInputChains1_0,
/*2403*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS f32:f32:$rS, iaddr:iPTR:$dst)
/*2412*/        /*Scope*/ 13, /*->2426*/
/*2413*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2416*/          OPC_EmitMergeInputChains1_0,
/*2417*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX f32:f32:$frS, xaddr:iPTR:$dst)
/*2426*/        0, /*End of Scope*/
/*2427*/      /*Scope*/ 34, /*->2462*/
/*2428*/        OPC_RecordChild3, // #3 = $ptroff
/*2429*/        OPC_CheckPredicate, 31, // Predicate_istore
/*2431*/        OPC_CheckPredicate, 32, // Predicate_pre_store
/*2433*/        OPC_Scope, 14, /*->2449*/ // 2 children in Scope
/*2435*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2438*/          OPC_EmitMergeInputChains1_0,
/*2439*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR ?:f32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2449*/        /*Scope*/ 11, /*->2461*/
/*2450*/          OPC_EmitMergeInputChains1_0,
/*2451*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFSUX:iPTR ?:f32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2461*/        0, /*End of Scope*/
/*2462*/      0, /*End of Scope*/
/*2463*/    /*Scope*/ 75, /*->2539*/
/*2464*/      OPC_CheckChild1Type, MVT::f64,
/*2466*/      OPC_RecordChild2, // #2 = $dst
/*2467*/      OPC_Scope, 34, /*->2503*/ // 2 children in Scope
/*2469*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2471*/        OPC_CheckPredicate, 26, // Predicate_store
/*2473*/        OPC_Scope, 13, /*->2488*/ // 2 children in Scope
/*2475*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2478*/          OPC_EmitMergeInputChains1_0,
/*2479*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD f64:f64:$rS, iaddr:iPTR:$dst)
/*2488*/        /*Scope*/ 13, /*->2502*/
/*2489*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2492*/          OPC_EmitMergeInputChains1_0,
/*2493*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX f64:f64:$frS, xaddr:iPTR:$dst)
/*2502*/        0, /*End of Scope*/
/*2503*/      /*Scope*/ 34, /*->2538*/
/*2504*/        OPC_RecordChild3, // #3 = $ptroff
/*2505*/        OPC_CheckPredicate, 31, // Predicate_istore
/*2507*/        OPC_CheckPredicate, 32, // Predicate_pre_store
/*2509*/        OPC_Scope, 14, /*->2525*/ // 2 children in Scope
/*2511*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2514*/          OPC_EmitMergeInputChains1_0,
/*2515*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR ?:f64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2525*/        /*Scope*/ 11, /*->2537*/
/*2526*/          OPC_EmitMergeInputChains1_0,
/*2527*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFDUX:iPTR ?:f64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2537*/        0, /*End of Scope*/
/*2538*/      0, /*End of Scope*/
/*2539*/    /*Scope*/ 22, /*->2562*/
/*2540*/      OPC_CheckChild1Type, MVT::v4i32,
/*2542*/      OPC_RecordChild2, // #2 = $dst
/*2543*/      OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2545*/      OPC_CheckPredicate, 26, // Predicate_store
/*2547*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2549*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2552*/      OPC_EmitMergeInputChains1_0,
/*2553*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st v4i32:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX ?:v4i32:$rS, xoaddr:iPTR:$dst)
/*2562*/    /*Scope*/ 56|128,2/*312*/, /*->2876*/
/*2564*/      OPC_CheckChild1Type, MVT::i64,
/*2566*/      OPC_RecordChild2, // #2 = $src
/*2567*/      OPC_Scope, 28|128,1/*156*/, /*->2726*/ // 2 children in Scope
/*2570*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2572*/        OPC_Scope, 100, /*->2674*/ // 2 children in Scope
/*2574*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2576*/          OPC_Scope, 15, /*->2593*/ // 6 children in Scope
/*2578*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2580*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2583*/            OPC_EmitMergeInputChains1_0,
/*2584*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 i64:i64:$rS, iaddr:iPTR:$src)
/*2593*/          /*Scope*/ 15, /*->2609*/
/*2594*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2596*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2599*/            OPC_EmitMergeInputChains1_0,
/*2600*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 i64:i64:$rS, iaddr:iPTR:$src)
/*2609*/          /*Scope*/ 15, /*->2625*/
/*2610*/            OPC_CheckPredicate, 33, // Predicate_truncstorei32
/*2612*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2615*/            OPC_EmitMergeInputChains1_0,
/*2616*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 i64:i64:$rS, iaddr:iPTR:$src)
/*2625*/          /*Scope*/ 15, /*->2641*/
/*2626*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2628*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2631*/            OPC_EmitMergeInputChains1_0,
/*2632*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2641*/          /*Scope*/ 15, /*->2657*/
/*2642*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2644*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2647*/            OPC_EmitMergeInputChains1_0,
/*2648*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2657*/          /*Scope*/ 15, /*->2673*/
/*2658*/            OPC_CheckPredicate, 33, // Predicate_truncstorei32
/*2660*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2663*/            OPC_EmitMergeInputChains1_0,
/*2664*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2673*/          0, /*End of Scope*/
/*2674*/        /*Scope*/ 50, /*->2725*/
/*2675*/          OPC_CheckPredicate, 26, // Predicate_store
/*2677*/          OPC_Scope, 15, /*->2694*/ // 3 children in Scope
/*2679*/            OPC_CheckPredicate, 34, // Predicate_aligned4store
/*2681*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2684*/            OPC_EmitMergeInputChains1_0,
/*2685*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned4store>> - Complexity = 13
                    // Dst: (STD i64:i64:$rS, ixaddr:iPTR:$dst)
/*2694*/          /*Scope*/ 13, /*->2708*/
/*2695*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2698*/            OPC_EmitMergeInputChains1_0,
/*2699*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX i64:i64:$rS, xaddr:iPTR:$dst)
/*2708*/          /*Scope*/ 15, /*->2724*/
/*2709*/            OPC_CheckPredicate, 35, // Predicate_unaligned4store
/*2711*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2714*/            OPC_EmitMergeInputChains1_0,
/*2715*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_unaligned4store>> - Complexity = 13
                    // Dst: (STDX ?:i64:$rS, xoaddr:iPTR:$dst)
/*2724*/          0, /*End of Scope*/
/*2725*/        0, /*End of Scope*/
/*2726*/      /*Scope*/ 19|128,1/*147*/, /*->2875*/
/*2728*/        OPC_RecordChild3, // #3 = $ptroff
/*2729*/        OPC_Scope, 57, /*->2788*/ // 4 children in Scope
/*2731*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2733*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2735*/          OPC_Scope, 16, /*->2753*/ // 3 children in Scope
/*2737*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2739*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2742*/            OPC_EmitMergeInputChains1_0,
/*2743*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2753*/          /*Scope*/ 16, /*->2770*/
/*2754*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2756*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2759*/            OPC_EmitMergeInputChains1_0,
/*2760*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2770*/          /*Scope*/ 16, /*->2787*/
/*2771*/            OPC_CheckPredicate, 36, // Predicate_pre_truncsti32
/*2773*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2776*/            OPC_EmitMergeInputChains1_0,
/*2777*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2787*/          0, /*End of Scope*/
/*2788*/        /*Scope*/ 20, /*->2809*/
/*2789*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2791*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2793*/          OPC_CheckPredicate, 37, // Predicate_aligned4pre_store
/*2795*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2798*/          OPC_EmitMergeInputChains1_0,
/*2799*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>><<P:Predicate_aligned4pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2809*/        /*Scope*/ 48, /*->2858*/
/*2810*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2812*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2814*/          OPC_Scope, 13, /*->2829*/ // 3 children in Scope
/*2816*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2818*/            OPC_EmitMergeInputChains1_0,
/*2819*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2829*/          /*Scope*/ 13, /*->2843*/
/*2830*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2832*/            OPC_EmitMergeInputChains1_0,
/*2833*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2843*/          /*Scope*/ 13, /*->2857*/
/*2844*/            OPC_CheckPredicate, 36, // Predicate_pre_truncsti32
/*2846*/            OPC_EmitMergeInputChains1_0,
/*2847*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 4
                    // Dst: (STWUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2857*/          0, /*End of Scope*/
/*2858*/        /*Scope*/ 15, /*->2874*/
/*2859*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2861*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2863*/          OPC_EmitMergeInputChains1_0,
/*2864*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STDUX:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2874*/        0, /*End of Scope*/
/*2875*/      0, /*End of Scope*/
/*2876*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2963
/*2880*/    OPC_RecordMemRef,
/*2881*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2882*/    OPC_RecordChild1, // #1 = $ptr
/*2883*/    OPC_RecordChild2, // #2 = $incr
/*2884*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2943
/*2887*/      OPC_Scope, 17, /*->2906*/ // 3 children in Scope
/*2889*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_add_8
/*2891*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2894*/        OPC_EmitMergeInputChains1_0,
/*2895*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2906*/      /*Scope*/ 17, /*->2924*/
/*2907*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_add_16
/*2909*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2912*/        OPC_EmitMergeInputChains1_0,
/*2913*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2924*/      /*Scope*/ 17, /*->2942*/
/*2925*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_add_32
/*2927*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2930*/        OPC_EmitMergeInputChains1_0,
/*2931*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2942*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2962
/*2945*/      OPC_CheckPredicate, 41, // Predicate_atomic_load_add_64
/*2947*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2950*/      OPC_EmitMergeInputChains1_0,
/*2951*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3049
/*2966*/    OPC_RecordMemRef,
/*2967*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2968*/    OPC_RecordChild1, // #1 = $ptr
/*2969*/    OPC_RecordChild2, // #2 = $incr
/*2970*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3029
/*2973*/      OPC_Scope, 17, /*->2992*/ // 3 children in Scope
/*2975*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_sub_8
/*2977*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2980*/        OPC_EmitMergeInputChains1_0,
/*2981*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2992*/      /*Scope*/ 17, /*->3010*/
/*2993*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_sub_16
/*2995*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2998*/        OPC_EmitMergeInputChains1_0,
/*2999*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3010*/      /*Scope*/ 17, /*->3028*/
/*3011*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_sub_32
/*3013*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3016*/        OPC_EmitMergeInputChains1_0,
/*3017*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3028*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3048
/*3031*/      OPC_CheckPredicate, 45, // Predicate_atomic_load_sub_64
/*3033*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3036*/      OPC_EmitMergeInputChains1_0,
/*3037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3135
/*3052*/    OPC_RecordMemRef,
/*3053*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3054*/    OPC_RecordChild1, // #1 = $ptr
/*3055*/    OPC_RecordChild2, // #2 = $incr
/*3056*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3115
/*3059*/      OPC_Scope, 17, /*->3078*/ // 3 children in Scope
/*3061*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_and_8
/*3063*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3066*/        OPC_EmitMergeInputChains1_0,
/*3067*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3078*/      /*Scope*/ 17, /*->3096*/
/*3079*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_and_16
/*3081*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3084*/        OPC_EmitMergeInputChains1_0,
/*3085*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3096*/      /*Scope*/ 17, /*->3114*/
/*3097*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_and_32
/*3099*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3102*/        OPC_EmitMergeInputChains1_0,
/*3103*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3114*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3134
/*3117*/      OPC_CheckPredicate, 49, // Predicate_atomic_load_and_64
/*3119*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3122*/      OPC_EmitMergeInputChains1_0,
/*3123*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3221
/*3138*/    OPC_RecordMemRef,
/*3139*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3140*/    OPC_RecordChild1, // #1 = $ptr
/*3141*/    OPC_RecordChild2, // #2 = $incr
/*3142*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3201
/*3145*/      OPC_Scope, 17, /*->3164*/ // 3 children in Scope
/*3147*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_or_8
/*3149*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3152*/        OPC_EmitMergeInputChains1_0,
/*3153*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3164*/      /*Scope*/ 17, /*->3182*/
/*3165*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_or_16
/*3167*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3170*/        OPC_EmitMergeInputChains1_0,
/*3171*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3182*/      /*Scope*/ 17, /*->3200*/
/*3183*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_or_32
/*3185*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3188*/        OPC_EmitMergeInputChains1_0,
/*3189*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3200*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3220
/*3203*/      OPC_CheckPredicate, 53, // Predicate_atomic_load_or_64
/*3205*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3208*/      OPC_EmitMergeInputChains1_0,
/*3209*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3307
/*3224*/    OPC_RecordMemRef,
/*3225*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3226*/    OPC_RecordChild1, // #1 = $ptr
/*3227*/    OPC_RecordChild2, // #2 = $incr
/*3228*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3287
/*3231*/      OPC_Scope, 17, /*->3250*/ // 3 children in Scope
/*3233*/        OPC_CheckPredicate, 54, // Predicate_atomic_load_xor_8
/*3235*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3238*/        OPC_EmitMergeInputChains1_0,
/*3239*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3250*/      /*Scope*/ 17, /*->3268*/
/*3251*/        OPC_CheckPredicate, 55, // Predicate_atomic_load_xor_16
/*3253*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3256*/        OPC_EmitMergeInputChains1_0,
/*3257*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3268*/      /*Scope*/ 17, /*->3286*/
/*3269*/        OPC_CheckPredicate, 56, // Predicate_atomic_load_xor_32
/*3271*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3274*/        OPC_EmitMergeInputChains1_0,
/*3275*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3286*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3306
/*3289*/      OPC_CheckPredicate, 57, // Predicate_atomic_load_xor_64
/*3291*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3294*/      OPC_EmitMergeInputChains1_0,
/*3295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3393
/*3310*/    OPC_RecordMemRef,
/*3311*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3312*/    OPC_RecordChild1, // #1 = $ptr
/*3313*/    OPC_RecordChild2, // #2 = $incr
/*3314*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3373
/*3317*/      OPC_Scope, 17, /*->3336*/ // 3 children in Scope
/*3319*/        OPC_CheckPredicate, 58, // Predicate_atomic_load_nand_8
/*3321*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3324*/        OPC_EmitMergeInputChains1_0,
/*3325*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3336*/      /*Scope*/ 17, /*->3354*/
/*3337*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_nand_16
/*3339*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3342*/        OPC_EmitMergeInputChains1_0,
/*3343*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3354*/      /*Scope*/ 17, /*->3372*/
/*3355*/        OPC_CheckPredicate, 60, // Predicate_atomic_load_nand_32
/*3357*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3360*/        OPC_EmitMergeInputChains1_0,
/*3361*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3372*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3392
/*3375*/      OPC_CheckPredicate, 61, // Predicate_atomic_load_nand_64
/*3377*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3380*/      OPC_EmitMergeInputChains1_0,
/*3381*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3484
/*3396*/    OPC_RecordMemRef,
/*3397*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3398*/    OPC_RecordChild1, // #1 = $ptr
/*3399*/    OPC_RecordChild2, // #2 = $old
/*3400*/    OPC_RecordChild3, // #3 = $new
/*3401*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3463
/*3404*/      OPC_Scope, 18, /*->3424*/ // 3 children in Scope
/*3406*/        OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*3408*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3411*/        OPC_EmitMergeInputChains1_0,
/*3412*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3424*/      /*Scope*/ 18, /*->3443*/
/*3425*/        OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*3427*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3430*/        OPC_EmitMergeInputChains1_0,
/*3431*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3443*/      /*Scope*/ 18, /*->3462*/
/*3444*/        OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*3446*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3449*/        OPC_EmitMergeInputChains1_0,
/*3450*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3462*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3483
/*3465*/      OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*3467*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3470*/      OPC_EmitMergeInputChains1_0,
/*3471*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3570
/*3487*/    OPC_RecordMemRef,
/*3488*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3489*/    OPC_RecordChild1, // #1 = $ptr
/*3490*/    OPC_RecordChild2, // #2 = $new
/*3491*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3550
/*3494*/      OPC_Scope, 17, /*->3513*/ // 3 children in Scope
/*3496*/        OPC_CheckPredicate, 66, // Predicate_atomic_swap_8
/*3498*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3501*/        OPC_EmitMergeInputChains1_0,
/*3502*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3513*/      /*Scope*/ 17, /*->3531*/
/*3514*/        OPC_CheckPredicate, 67, // Predicate_atomic_swap_16
/*3516*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3519*/        OPC_EmitMergeInputChains1_0,
/*3520*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3531*/      /*Scope*/ 17, /*->3549*/
/*3532*/        OPC_CheckPredicate, 68, // Predicate_atomic_swap_32
/*3534*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3537*/        OPC_EmitMergeInputChains1_0,
/*3538*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3549*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3569
/*3552*/      OPC_CheckPredicate, 69, // Predicate_atomic_swap_64
/*3554*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3557*/      OPC_EmitMergeInputChains1_0,
/*3558*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3621
/*3573*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3574*/    OPC_RecordChild1, // #1 = $negsize
/*3575*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3598
/*3578*/      OPC_CheckChild1Type, MVT::i32,
/*3580*/      OPC_RecordChild2, // #2 = $fpsi
/*3581*/      OPC_CheckChild2Type, MVT::iPTR,
/*3583*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3586*/      OPC_EmitMergeInputChains1_0,
/*3587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3620
/*3600*/      OPC_CheckChild1Type, MVT::i64,
/*3602*/      OPC_RecordChild2, // #2 = $fpsi
/*3603*/      OPC_CheckChild2Type, MVT::iPTR,
/*3605*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3608*/      OPC_EmitMergeInputChains1_0,
/*3609*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3658
/*3624*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3625*/    OPC_RecordChild1, // #1 = $src
/*3626*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3642
/*3629*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3632*/      OPC_EmitMergeInputChains1_0,
/*3633*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3657
/*3644*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3647*/      OPC_EmitMergeInputChains1_0,
/*3648*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(PPCISD::LBRX),// ->3724
/*3661*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3662*/    OPC_RecordChild1, // #1 = $src
/*3663*/    OPC_MoveChild, 2,
/*3665*/    OPC_Scope, 18, /*->3685*/ // 3 children in Scope
/*3667*/      OPC_CheckValueType, MVT::i16,
/*3669*/      OPC_MoveParent,
/*3670*/      OPC_CheckType, MVT::i32,
/*3672*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3675*/      OPC_EmitMergeInputChains1_0,
/*3676*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3685*/    /*Scope*/ 18, /*->3704*/
/*3686*/      OPC_CheckValueType, MVT::i32,
/*3688*/      OPC_MoveParent,
/*3689*/      OPC_CheckType, MVT::i32,
/*3691*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3694*/      OPC_EmitMergeInputChains1_0,
/*3695*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3704*/    /*Scope*/ 18, /*->3723*/
/*3705*/      OPC_CheckValueType, MVT::i64,
/*3707*/      OPC_MoveParent,
/*3708*/      OPC_CheckType, MVT::i64,
/*3710*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3713*/      OPC_EmitMergeInputChains1_0,
/*3714*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i64 xoaddr:iPTR:$src, i64:Other) - Complexity = 12
              // Dst: (LDBRX:i64 xoaddr:iPTR:$src)
/*3723*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3764
/*3727*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3728*/    OPC_CaptureGlueInput,
/*3729*/    OPC_RecordChild1, // #1 = $src
/*3730*/    OPC_CheckChild1Type, MVT::iPTR,
/*3732*/    OPC_CheckType, MVT::i64,
/*3734*/    OPC_Scope, 13, /*->3749*/ // 2 children in Scope
/*3736*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3739*/      OPC_EmitMergeInputChains1_0,
/*3740*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3749*/    /*Scope*/ 13, /*->3763*/
/*3750*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3753*/      OPC_EmitMergeInputChains1_0,
/*3754*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3763*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,4/*604*/,  TARGET_VAL(ISD::XOR),// ->4372
/*3768*/    OPC_Scope, 39|128,1/*167*/, /*->3938*/ // 8 children in Scope
/*3771*/      OPC_MoveChild, 0,
/*3773*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3818
/*3777*/        OPC_RecordChild0, // #0 = $rS
/*3778*/        OPC_RecordChild1, // #1 = $rB
/*3779*/        OPC_MoveParent,
/*3780*/        OPC_MoveChild, 1,
/*3782*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3793*/        OPC_MoveParent,
/*3794*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3806
/*3797*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3817
/*3808*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3862
/*3821*/        OPC_RecordChild0, // #0 = $rS
/*3822*/        OPC_RecordChild1, // #1 = $rB
/*3823*/        OPC_MoveParent,
/*3824*/        OPC_MoveChild, 1,
/*3826*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3837*/        OPC_MoveParent,
/*3838*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3850
/*3841*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3861
/*3852*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3937
/*3865*/        OPC_RecordChild0, // #0 = $rS
/*3866*/        OPC_Scope, 40, /*->3908*/ // 2 children in Scope
/*3868*/          OPC_RecordChild1, // #1 = $rB
/*3869*/          OPC_MoveParent,
/*3870*/          OPC_MoveChild, 1,
/*3872*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3883*/          OPC_MoveParent,
/*3884*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3896
/*3887*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3907
/*3898*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
                  0, // EndSwitchType
/*3908*/        /*Scope*/ 27, /*->3936*/
/*3909*/          OPC_MoveChild, 1,
/*3911*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3922*/          OPC_MoveParent,
/*3923*/          OPC_MoveParent,
/*3924*/          OPC_RecordChild1, // #1 = $rB
/*3925*/          OPC_CheckType, MVT::i32,
/*3927*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 i32:i32:$rS, -1:i32), i32:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*3936*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3938*/    /*Scope*/ 33, /*->3972*/
/*3939*/      OPC_RecordChild0, // #0 = $rB
/*3940*/      OPC_MoveChild, 1,
/*3942*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3945*/      OPC_RecordChild0, // #1 = $rS
/*3946*/      OPC_MoveChild, 1,
/*3948*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3959*/      OPC_MoveParent,
/*3960*/      OPC_MoveParent,
/*3961*/      OPC_CheckType, MVT::i32,
/*3963*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$rB, (xor:i32 i32:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*3972*/    /*Scope*/ 33, /*->4006*/
/*3973*/      OPC_MoveChild, 0,
/*3975*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3978*/      OPC_RecordChild0, // #0 = $rS
/*3979*/      OPC_MoveChild, 1,
/*3981*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3992*/      OPC_MoveParent,
/*3993*/      OPC_MoveParent,
/*3994*/      OPC_RecordChild1, // #1 = $rB
/*3995*/      OPC_CheckType, MVT::i64,
/*3997*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$rS, -1:i64), i64:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4006*/    /*Scope*/ 33, /*->4040*/
/*4007*/      OPC_RecordChild0, // #0 = $rB
/*4008*/      OPC_MoveChild, 1,
/*4010*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4013*/      OPC_RecordChild0, // #1 = $rS
/*4014*/      OPC_MoveChild, 1,
/*4016*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4027*/      OPC_MoveParent,
/*4028*/      OPC_MoveParent,
/*4029*/      OPC_CheckType, MVT::i64,
/*4031*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i64 i64:i64:$rB, (xor:i64 i64:i64:$rS, -1:i64)) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4040*/    /*Scope*/ 74, /*->4115*/
/*4041*/      OPC_MoveChild, 0,
/*4043*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::OR),// ->4079
/*4047*/        OPC_RecordChild0, // #0 = $vA
/*4048*/        OPC_RecordChild1, // #1 = $vB
/*4049*/        OPC_MoveParent,
/*4050*/        OPC_MoveChild, 1,
/*4052*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4055*/        OPC_MoveChild, 0,
/*4057*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4060*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4062*/        OPC_CheckType, MVT::v16i8,
/*4064*/        OPC_MoveParent,
/*4065*/        OPC_MoveParent,
/*4066*/        OPC_CheckType, MVT::v4i32,
/*4068*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4070*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BITCAST),// ->4114
/*4082*/        OPC_MoveChild, 0,
/*4084*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4087*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4089*/        OPC_CheckType, MVT::v16i8,
/*4091*/        OPC_MoveParent,
/*4092*/        OPC_MoveParent,
/*4093*/        OPC_MoveChild, 1,
/*4095*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4098*/        OPC_RecordChild0, // #0 = $vA
/*4099*/        OPC_RecordChild1, // #1 = $vB
/*4100*/        OPC_MoveParent,
/*4101*/        OPC_CheckType, MVT::v4i32,
/*4103*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4105*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              0, // EndSwitchOpcode
/*4115*/    /*Scope*/ 30, /*->4146*/
/*4116*/      OPC_RecordChild0, // #0 = $vA
/*4117*/      OPC_MoveChild, 1,
/*4119*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4122*/      OPC_MoveChild, 0,
/*4124*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4127*/      OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4129*/      OPC_CheckType, MVT::v16i8,
/*4131*/      OPC_MoveParent,
/*4132*/      OPC_MoveParent,
/*4133*/      OPC_CheckType, MVT::v4i32,
/*4135*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4137*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4146*/    /*Scope*/ 30, /*->4177*/
/*4147*/      OPC_MoveChild, 0,
/*4149*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4152*/      OPC_MoveChild, 0,
/*4154*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4157*/      OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4159*/      OPC_CheckType, MVT::v16i8,
/*4161*/      OPC_MoveParent,
/*4162*/      OPC_MoveParent,
/*4163*/      OPC_RecordChild1, // #0 = $vA
/*4164*/      OPC_CheckType, MVT::v4i32,
/*4166*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4168*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4177*/    /*Scope*/ 64|128,1/*192*/, /*->4371*/
/*4179*/      OPC_RecordChild0, // #0 = $in
/*4180*/      OPC_Scope, 25, /*->4207*/ // 2 children in Scope
/*4182*/        OPC_MoveChild, 1,
/*4184*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4195*/        OPC_MoveParent,
/*4196*/        OPC_CheckType, MVT::i32,
/*4198*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (xor:i32 i32:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 ?:i32:$in, ?:i32:$in)
/*4207*/      /*Scope*/ 33|128,1/*161*/, /*->4370*/
/*4209*/        OPC_RecordChild1, // #1 = $src2
/*4210*/        OPC_Scope, 119, /*->4331*/ // 4 children in Scope
/*4212*/          OPC_MoveChild, 1,
/*4214*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4217*/          OPC_Scope, 19, /*->4238*/ // 5 children in Scope
/*4219*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4221*/            OPC_MoveParent,
/*4222*/            OPC_CheckType, MVT::i32,
/*4224*/            OPC_EmitConvertToTarget, 1,
/*4226*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4229*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4238*/          /*Scope*/ 19, /*->4258*/
/*4239*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4241*/            OPC_MoveParent,
/*4242*/            OPC_CheckType, MVT::i32,
/*4244*/            OPC_EmitConvertToTarget, 1,
/*4246*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4249*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4258*/          /*Scope*/ 19, /*->4278*/
/*4259*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4261*/            OPC_MoveParent,
/*4262*/            OPC_CheckType, MVT::i64,
/*4264*/            OPC_EmitConvertToTarget, 1,
/*4266*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4269*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4278*/          /*Scope*/ 19, /*->4298*/
/*4279*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4281*/            OPC_MoveParent,
/*4282*/            OPC_CheckType, MVT::i64,
/*4284*/            OPC_EmitConvertToTarget, 1,
/*4286*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4289*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4298*/          /*Scope*/ 31, /*->4330*/
/*4299*/            OPC_MoveParent,
/*4300*/            OPC_CheckType, MVT::i32,
/*4302*/            OPC_EmitConvertToTarget, 1,
/*4304*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4307*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4316*/            OPC_EmitConvertToTarget, 1,
/*4318*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4321*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4330*/          0, /*End of Scope*/
/*4331*/        /*Scope*/ 11, /*->4343*/
/*4332*/          OPC_CheckType, MVT::i32,
/*4334*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 i32:i32:$rS, i32:i32:$rB)
/*4343*/        /*Scope*/ 11, /*->4355*/
/*4344*/          OPC_CheckType, MVT::i64,
/*4346*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 i64:i64:$rS, i64:i64:$rB)
/*4355*/        /*Scope*/ 13, /*->4369*/
/*4356*/          OPC_CheckType, MVT::v4i32,
/*4358*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4360*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VXOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4369*/        0, /*End of Scope*/
/*4370*/      0, /*End of Scope*/
/*4371*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37|128,3/*421*/,  TARGET_VAL(ISD::AND),// ->4797
/*4376*/    OPC_Scope, 46, /*->4424*/ // 5 children in Scope
/*4378*/      OPC_RecordChild0, // #0 = $rS
/*4379*/      OPC_MoveChild, 1,
/*4381*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4384*/      OPC_RecordChild0, // #1 = $rB
/*4385*/      OPC_MoveChild, 1,
/*4387*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4398*/      OPC_MoveParent,
/*4399*/      OPC_MoveParent,
/*4400*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4412
/*4403*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4423
/*4414*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4424*/    /*Scope*/ 88, /*->4513*/
/*4425*/      OPC_MoveChild, 0,
/*4427*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4472
/*4431*/        OPC_RecordChild0, // #0 = $rB
/*4432*/        OPC_MoveChild, 1,
/*4434*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4445*/        OPC_MoveParent,
/*4446*/        OPC_MoveParent,
/*4447*/        OPC_RecordChild1, // #1 = $rS
/*4448*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4460
/*4451*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4471
/*4462*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4512
/*4475*/        OPC_RecordChild0, // #0 = $in
/*4476*/        OPC_RecordChild1, // #1 = $sh
/*4477*/        OPC_CheckChild1Type, MVT::i32,
/*4479*/        OPC_MoveParent,
/*4480*/        OPC_RecordChild1, // #2 = $imm
/*4481*/        OPC_MoveChild, 1,
/*4483*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4486*/        OPC_CheckPredicate, 73, // Predicate_maskimm32
/*4488*/        OPC_MoveParent,
/*4489*/        OPC_CheckType, MVT::i32,
/*4491*/        OPC_EmitConvertToTarget, 2,
/*4493*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4496*/        OPC_EmitConvertToTarget, 2,
/*4498*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4501*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 i32:i32:$in, i32:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4513*/    /*Scope*/ 72, /*->4586*/
/*4514*/      OPC_RecordChild0, // #0 = $vA
/*4515*/      OPC_MoveChild, 1,
/*4517*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4520*/      OPC_Scope, 31, /*->4553*/ // 2 children in Scope
/*4522*/        OPC_RecordChild0, // #1 = $vB
/*4523*/        OPC_MoveChild, 1,
/*4525*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4528*/        OPC_MoveChild, 0,
/*4530*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4533*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4535*/        OPC_CheckType, MVT::v16i8,
/*4537*/        OPC_MoveParent,
/*4538*/        OPC_MoveParent,
/*4539*/        OPC_MoveParent,
/*4540*/        OPC_CheckType, MVT::v4i32,
/*4542*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4544*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4553*/      /*Scope*/ 31, /*->4585*/
/*4554*/        OPC_MoveChild, 0,
/*4556*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4559*/        OPC_MoveChild, 0,
/*4561*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4564*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4566*/        OPC_CheckType, MVT::v16i8,
/*4568*/        OPC_MoveParent,
/*4569*/        OPC_MoveParent,
/*4570*/        OPC_RecordChild1, // #1 = $vB
/*4571*/        OPC_MoveParent,
/*4572*/        OPC_CheckType, MVT::v4i32,
/*4574*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4576*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4585*/      0, /*End of Scope*/
/*4586*/    /*Scope*/ 73, /*->4660*/
/*4587*/      OPC_MoveChild, 0,
/*4589*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4592*/      OPC_Scope, 32, /*->4626*/ // 2 children in Scope
/*4594*/        OPC_RecordChild0, // #0 = $vB
/*4595*/        OPC_MoveChild, 1,
/*4597*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4600*/        OPC_MoveChild, 0,
/*4602*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4605*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4607*/        OPC_CheckType, MVT::v16i8,
/*4609*/        OPC_MoveParent,
/*4610*/        OPC_MoveParent,
/*4611*/        OPC_MoveParent,
/*4612*/        OPC_RecordChild1, // #1 = $vA
/*4613*/        OPC_CheckType, MVT::v4i32,
/*4615*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4617*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4626*/      /*Scope*/ 32, /*->4659*/
/*4627*/        OPC_MoveChild, 0,
/*4629*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4632*/        OPC_MoveChild, 0,
/*4634*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4637*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4639*/        OPC_CheckType, MVT::v16i8,
/*4641*/        OPC_MoveParent,
/*4642*/        OPC_MoveParent,
/*4643*/        OPC_RecordChild1, // #0 = $vB
/*4644*/        OPC_MoveParent,
/*4645*/        OPC_RecordChild1, // #1 = $vA
/*4646*/        OPC_CheckType, MVT::v4i32,
/*4648*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4650*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4659*/      0, /*End of Scope*/
/*4660*/    /*Scope*/ 6|128,1/*134*/, /*->4796*/
/*4662*/      OPC_RecordChild0, // #0 = $src1
/*4663*/      OPC_RecordChild1, // #1 = $src2
/*4664*/      OPC_Scope, 91, /*->4757*/ // 4 children in Scope
/*4666*/        OPC_MoveChild, 1,
/*4668*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4671*/        OPC_Scope, 20, /*->4693*/ // 4 children in Scope
/*4673*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4675*/          OPC_MoveParent,
/*4676*/          OPC_CheckType, MVT::i32,
/*4678*/          OPC_EmitConvertToTarget, 1,
/*4680*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4683*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo:i32:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4693*/        /*Scope*/ 20, /*->4714*/
/*4694*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4696*/          OPC_MoveParent,
/*4697*/          OPC_CheckType, MVT::i32,
/*4699*/          OPC_EmitConvertToTarget, 1,
/*4701*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4704*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo:i32:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4714*/        /*Scope*/ 20, /*->4735*/
/*4715*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4717*/          OPC_MoveParent,
/*4718*/          OPC_CheckType, MVT::i64,
/*4720*/          OPC_EmitConvertToTarget, 1,
/*4722*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4725*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo8:i64:i32 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4735*/        /*Scope*/ 20, /*->4756*/
/*4736*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4738*/          OPC_MoveParent,
/*4739*/          OPC_CheckType, MVT::i64,
/*4741*/          OPC_EmitConvertToTarget, 1,
/*4743*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4746*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo8:i64:i32 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4756*/        0, /*End of Scope*/
/*4757*/      /*Scope*/ 11, /*->4769*/
/*4758*/        OPC_CheckType, MVT::i32,
/*4760*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (AND:i32 i32:i32:$rS, i32:i32:$rB)
/*4769*/      /*Scope*/ 11, /*->4781*/
/*4770*/        OPC_CheckType, MVT::i64,
/*4772*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (AND8:i64 i64:i64:$rS, i64:i64:$rB)
/*4781*/      /*Scope*/ 13, /*->4795*/
/*4782*/        OPC_CheckType, MVT::v4i32,
/*4784*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4786*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VAND:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4795*/      0, /*End of Scope*/
/*4796*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,2/*260*/,  TARGET_VAL(ISD::OR),// ->5061
/*4801*/    OPC_Scope, 46, /*->4849*/ // 3 children in Scope
/*4803*/      OPC_RecordChild0, // #0 = $rS
/*4804*/      OPC_MoveChild, 1,
/*4806*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4809*/      OPC_RecordChild0, // #1 = $rB
/*4810*/      OPC_MoveChild, 1,
/*4812*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4823*/      OPC_MoveParent,
/*4824*/      OPC_MoveParent,
/*4825*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4837
/*4828*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4848
/*4839*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4849*/    /*Scope*/ 46, /*->4896*/
/*4850*/      OPC_MoveChild, 0,
/*4852*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4855*/      OPC_RecordChild0, // #0 = $rB
/*4856*/      OPC_MoveChild, 1,
/*4858*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4869*/      OPC_MoveParent,
/*4870*/      OPC_MoveParent,
/*4871*/      OPC_RecordChild1, // #1 = $rS
/*4872*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4884
/*4875*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4895
/*4886*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4896*/    /*Scope*/ 34|128,1/*162*/, /*->5060*/
/*4898*/      OPC_RecordChild0, // #0 = $src1
/*4899*/      OPC_RecordChild1, // #1 = $src2
/*4900*/      OPC_Scope, 119, /*->5021*/ // 4 children in Scope
/*4902*/        OPC_MoveChild, 1,
/*4904*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4907*/        OPC_Scope, 19, /*->4928*/ // 5 children in Scope
/*4909*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4911*/          OPC_MoveParent,
/*4912*/          OPC_CheckType, MVT::i32,
/*4914*/          OPC_EmitConvertToTarget, 1,
/*4916*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4919*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4928*/        /*Scope*/ 19, /*->4948*/
/*4929*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4931*/          OPC_MoveParent,
/*4932*/          OPC_CheckType, MVT::i32,
/*4934*/          OPC_EmitConvertToTarget, 1,
/*4936*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4939*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4948*/        /*Scope*/ 19, /*->4968*/
/*4949*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4951*/          OPC_MoveParent,
/*4952*/          OPC_CheckType, MVT::i64,
/*4954*/          OPC_EmitConvertToTarget, 1,
/*4956*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4959*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4968*/        /*Scope*/ 19, /*->4988*/
/*4969*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4971*/          OPC_MoveParent,
/*4972*/          OPC_CheckType, MVT::i64,
/*4974*/          OPC_EmitConvertToTarget, 1,
/*4976*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4979*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4988*/        /*Scope*/ 31, /*->5020*/
/*4989*/          OPC_MoveParent,
/*4990*/          OPC_CheckType, MVT::i32,
/*4992*/          OPC_EmitConvertToTarget, 1,
/*4994*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4997*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5006*/          OPC_EmitConvertToTarget, 1,
/*5008*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5011*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5020*/        0, /*End of Scope*/
/*5021*/      /*Scope*/ 11, /*->5033*/
/*5022*/        OPC_CheckType, MVT::i32,
/*5024*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 i32:i32:$rS, i32:i32:$rB)
/*5033*/      /*Scope*/ 11, /*->5045*/
/*5034*/        OPC_CheckType, MVT::i64,
/*5036*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 i64:i64:$rS, i64:i64:$rB)
/*5045*/      /*Scope*/ 13, /*->5059*/
/*5046*/        OPC_CheckType, MVT::v4i32,
/*5048*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5050*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5059*/      0, /*End of Scope*/
/*5060*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5223
/*5065*/    OPC_RecordChild0, // #0 = $in
/*5066*/    OPC_MoveChild, 0,
/*5068*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5100
/*5072*/      OPC_MoveParent,
/*5073*/      OPC_MoveChild, 1,
/*5075*/      OPC_CheckInteger, 0, 
/*5077*/      OPC_MoveParent,
/*5078*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5089
/*5081*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5099
/*5091*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5131
/*5103*/      OPC_MoveParent,
/*5104*/      OPC_MoveChild, 1,
/*5106*/      OPC_CheckInteger, 0, 
/*5108*/      OPC_MoveParent,
/*5109*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5120
/*5112*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5130
/*5122*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5162
/*5134*/      OPC_MoveParent,
/*5135*/      OPC_MoveChild, 1,
/*5137*/      OPC_CheckInteger, 0, 
/*5139*/      OPC_MoveParent,
/*5140*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5151
/*5143*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5161
/*5153*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5193
/*5165*/      OPC_MoveParent,
/*5166*/      OPC_MoveChild, 1,
/*5168*/      OPC_CheckInteger, 0, 
/*5170*/      OPC_MoveParent,
/*5171*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5182
/*5174*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5192
/*5184*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5222
/*5196*/      OPC_MoveParent,
/*5197*/      OPC_RecordChild1, // #1 = $in
/*5198*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5210
/*5201*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5221
/*5212*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5385
/*5227*/    OPC_RecordChild0, // #0 = $in
/*5228*/    OPC_MoveChild, 0,
/*5230*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5262
/*5234*/      OPC_MoveParent,
/*5235*/      OPC_MoveChild, 1,
/*5237*/      OPC_CheckInteger, 0, 
/*5239*/      OPC_MoveParent,
/*5240*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5251
/*5243*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5261
/*5253*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5293
/*5265*/      OPC_MoveParent,
/*5266*/      OPC_MoveChild, 1,
/*5268*/      OPC_CheckInteger, 0, 
/*5270*/      OPC_MoveParent,
/*5271*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5282
/*5274*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5292
/*5284*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5324
/*5296*/      OPC_MoveParent,
/*5297*/      OPC_MoveChild, 1,
/*5299*/      OPC_CheckInteger, 0, 
/*5301*/      OPC_MoveParent,
/*5302*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5313
/*5305*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5323
/*5315*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5355
/*5327*/      OPC_MoveParent,
/*5328*/      OPC_MoveChild, 1,
/*5330*/      OPC_CheckInteger, 0, 
/*5332*/      OPC_MoveParent,
/*5333*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5344
/*5336*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5354
/*5346*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5384
/*5358*/      OPC_MoveParent,
/*5359*/      OPC_RecordChild1, // #1 = $in
/*5360*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5372
/*5363*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDI:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5383
/*5374*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDI8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWAX),// ->5403
/*5388*/    OPC_RecordNode,   // #0 = 'PPClfiwax' chained node
/*5389*/    OPC_RecordChild1, // #1 = $src
/*5390*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5393*/    OPC_EmitMergeInputChains1_0,
/*5394*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWAX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwax:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWAX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWZX),// ->5421
/*5406*/    OPC_RecordNode,   // #0 = 'PPClfiwzx' chained node
/*5407*/    OPC_RecordChild1, // #1 = $src
/*5408*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5411*/    OPC_EmitMergeInputChains1_0,
/*5412*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWZX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwzx:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWZX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 125,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->5549
/*5424*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*5425*/    OPC_MoveChild, 1,
/*5427*/    OPC_Scope, 20, /*->5449*/ // 6 children in Scope
/*5429*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*5432*/      OPC_MoveParent,
/*5433*/      OPC_RecordChild2, // #1 = $src
/*5434*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5436*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5439*/      OPC_EmitMergeInputChains1_0,
/*5440*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*5449*/    /*Scope*/ 20, /*->5470*/
/*5450*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*5453*/      OPC_MoveParent,
/*5454*/      OPC_RecordChild2, // #1 = $src
/*5455*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5457*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5460*/      OPC_EmitMergeInputChains1_0,
/*5461*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1467:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*5470*/    /*Scope*/ 20, /*->5491*/
/*5471*/      OPC_CheckInteger, 60|128,11/*1468*/, 
/*5474*/      OPC_MoveParent,
/*5475*/      OPC_RecordChild2, // #1 = $src
/*5476*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5478*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5481*/      OPC_EmitMergeInputChains1_0,
/*5482*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1468:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*5491*/    /*Scope*/ 20, /*->5512*/
/*5492*/      OPC_CheckInteger, 63|128,11/*1471*/, 
/*5495*/      OPC_MoveParent,
/*5496*/      OPC_RecordChild2, // #1 = $src
/*5497*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5499*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5502*/      OPC_EmitMergeInputChains1_0,
/*5503*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1471:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*5512*/    /*Scope*/ 20, /*->5533*/
/*5513*/      OPC_CheckInteger, 64|128,11/*1472*/, 
/*5516*/      OPC_MoveParent,
/*5517*/      OPC_RecordChild2, // #1 = $src
/*5518*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5520*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5523*/      OPC_EmitMergeInputChains1_0,
/*5524*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1472:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*5533*/    /*Scope*/ 14, /*->5548*/
/*5534*/      OPC_CheckInteger, 65|128,11/*1473*/, 
/*5537*/      OPC_MoveParent,
/*5538*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5540*/      OPC_EmitMergeInputChains1_0,
/*5541*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1473:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*5548*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48|128,15/*1968*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->7521
/*5553*/    OPC_MoveChild, 0,
/*5555*/    OPC_Scope, 19, /*->5576*/ // 103 children in Scope
/*5557*/      OPC_CheckInteger, 61|128,11/*1469*/, 
/*5560*/      OPC_MoveParent,
/*5561*/      OPC_RecordChild1, // #0 = $src
/*5562*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5564*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5567*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1469:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*5576*/    /*Scope*/ 19, /*->5596*/
/*5577*/      OPC_CheckInteger, 62|128,11/*1470*/, 
/*5580*/      OPC_MoveParent,
/*5581*/      OPC_RecordChild1, // #0 = $src
/*5582*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5584*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1470:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*5596*/    /*Scope*/ 44, /*->5641*/
/*5597*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*5600*/      OPC_MoveParent,
/*5601*/      OPC_RecordChild1, // #0 = $vB
/*5602*/      OPC_Scope, 15, /*->5619*/ // 2 children in Scope
/*5604*/        OPC_MoveChild, 2,
/*5606*/        OPC_CheckInteger, 0, 
/*5608*/        OPC_MoveParent,
/*5609*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5611*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 v4f32:v4f32:$vB)
/*5619*/      /*Scope*/ 20, /*->5640*/
/*5620*/        OPC_RecordChild2, // #1 = $UIMM
/*5621*/        OPC_MoveChild, 2,
/*5623*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5626*/        OPC_MoveParent,
/*5627*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5629*/        OPC_EmitConvertToTarget, 1,
/*5631*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5640*/      0, /*End of Scope*/
/*5641*/    /*Scope*/ 44, /*->5686*/
/*5642*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*5645*/      OPC_MoveParent,
/*5646*/      OPC_RecordChild1, // #0 = $vB
/*5647*/      OPC_Scope, 15, /*->5664*/ // 2 children in Scope
/*5649*/        OPC_MoveChild, 2,
/*5651*/        OPC_CheckInteger, 0, 
/*5653*/        OPC_MoveParent,
/*5654*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5656*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 v4f32:v4f32:$vB)
/*5664*/      /*Scope*/ 20, /*->5685*/
/*5665*/        OPC_RecordChild2, // #1 = $UIMM
/*5666*/        OPC_MoveChild, 2,
/*5668*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5671*/        OPC_MoveParent,
/*5672*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5674*/        OPC_EmitConvertToTarget, 1,
/*5676*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5685*/      0, /*End of Scope*/
/*5686*/    /*Scope*/ 44, /*->5731*/
/*5687*/      OPC_CheckInteger, 85|128,11/*1493*/, 
/*5690*/      OPC_MoveParent,
/*5691*/      OPC_RecordChild1, // #0 = $vB
/*5692*/      OPC_Scope, 15, /*->5709*/ // 2 children in Scope
/*5694*/        OPC_MoveChild, 2,
/*5696*/        OPC_CheckInteger, 0, 
/*5698*/        OPC_MoveParent,
/*5699*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5701*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 v4i32:v4i32:$vB)
/*5709*/      /*Scope*/ 20, /*->5730*/
/*5710*/        OPC_RecordChild2, // #1 = $UIMM
/*5711*/        OPC_MoveChild, 2,
/*5713*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5716*/        OPC_MoveParent,
/*5717*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5719*/        OPC_EmitConvertToTarget, 1,
/*5721*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5730*/      0, /*End of Scope*/
/*5731*/    /*Scope*/ 44, /*->5776*/
/*5732*/      OPC_CheckInteger, 86|128,11/*1494*/, 
/*5735*/      OPC_MoveParent,
/*5736*/      OPC_RecordChild1, // #0 = $vB
/*5737*/      OPC_Scope, 15, /*->5754*/ // 2 children in Scope
/*5739*/        OPC_MoveChild, 2,
/*5741*/        OPC_CheckInteger, 0, 
/*5743*/        OPC_MoveParent,
/*5744*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5746*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 v4i32:v4i32:$vB)
/*5754*/      /*Scope*/ 20, /*->5775*/
/*5755*/        OPC_RecordChild2, // #1 = $UIMM
/*5756*/        OPC_MoveChild, 2,
/*5758*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5761*/        OPC_MoveParent,
/*5762*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5764*/        OPC_EmitConvertToTarget, 1,
/*5766*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5775*/      0, /*End of Scope*/
/*5776*/    /*Scope*/ 19, /*->5796*/
/*5777*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*5780*/      OPC_MoveParent,
/*5781*/      OPC_RecordChild1, // #0 = $vA
/*5782*/      OPC_RecordChild2, // #1 = $vB
/*5783*/      OPC_RecordChild3, // #2 = $vC
/*5784*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5786*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1533:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5796*/    /*Scope*/ 19, /*->5816*/
/*5797*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*5800*/      OPC_MoveParent,
/*5801*/      OPC_RecordChild1, // #0 = $vA
/*5802*/      OPC_RecordChild2, // #1 = $vB
/*5803*/      OPC_RecordChild3, // #2 = $vC
/*5804*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5806*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1534:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5816*/    /*Scope*/ 19, /*->5836*/
/*5817*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*5820*/      OPC_MoveParent,
/*5821*/      OPC_RecordChild1, // #0 = $vA
/*5822*/      OPC_RecordChild2, // #1 = $vB
/*5823*/      OPC_RecordChild3, // #2 = $vC
/*5824*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5826*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1542:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5836*/    /*Scope*/ 19, /*->5856*/
/*5837*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*5840*/      OPC_MoveParent,
/*5841*/      OPC_RecordChild1, // #0 = $vA
/*5842*/      OPC_RecordChild2, // #1 = $vB
/*5843*/      OPC_RecordChild3, // #2 = $vC
/*5844*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5846*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1558:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC)
/*5856*/    /*Scope*/ 19, /*->5876*/
/*5857*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*5860*/      OPC_MoveParent,
/*5861*/      OPC_RecordChild1, // #0 = $vA
/*5862*/      OPC_RecordChild2, // #1 = $vB
/*5863*/      OPC_RecordChild3, // #2 = $vC
/*5864*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5866*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC)
/*5876*/    /*Scope*/ 17, /*->5894*/
/*5877*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*5880*/      OPC_MoveParent,
/*5881*/      OPC_RecordChild1, // #0 = $vA
/*5882*/      OPC_RecordChild2, // #1 = $vB
/*5883*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5885*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1480:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5894*/    /*Scope*/ 17, /*->5912*/
/*5895*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*5898*/      OPC_MoveParent,
/*5899*/      OPC_RecordChild1, // #0 = $vA
/*5900*/      OPC_RecordChild2, // #1 = $vB
/*5901*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5903*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1481:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*5912*/    /*Scope*/ 17, /*->5930*/
/*5913*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*5916*/      OPC_MoveParent,
/*5917*/      OPC_RecordChild1, // #0 = $vA
/*5918*/      OPC_RecordChild2, // #1 = $vB
/*5919*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5921*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1482:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*5930*/    /*Scope*/ 17, /*->5948*/
/*5931*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*5934*/      OPC_MoveParent,
/*5935*/      OPC_RecordChild1, // #0 = $vA
/*5936*/      OPC_RecordChild2, // #1 = $vB
/*5937*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5939*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1483:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5948*/    /*Scope*/ 17, /*->5966*/
/*5949*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*5952*/      OPC_MoveParent,
/*5953*/      OPC_RecordChild1, // #0 = $vA
/*5954*/      OPC_RecordChild2, // #1 = $vB
/*5955*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5957*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1484:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*5966*/    /*Scope*/ 17, /*->5984*/
/*5967*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*5970*/      OPC_MoveParent,
/*5971*/      OPC_RecordChild1, // #0 = $vA
/*5972*/      OPC_RecordChild2, // #1 = $vB
/*5973*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5975*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1485:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*5984*/    /*Scope*/ 17, /*->6002*/
/*5985*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*5988*/      OPC_MoveParent,
/*5989*/      OPC_RecordChild1, // #0 = $vA
/*5990*/      OPC_RecordChild2, // #1 = $vB
/*5991*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5993*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1486:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6002*/    /*Scope*/ 17, /*->6020*/
/*6003*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*6006*/      OPC_MoveParent,
/*6007*/      OPC_RecordChild1, // #0 = $vA
/*6008*/      OPC_RecordChild2, // #1 = $vB
/*6009*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6011*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1487:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6020*/    /*Scope*/ 17, /*->6038*/
/*6021*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*6024*/      OPC_MoveParent,
/*6025*/      OPC_RecordChild1, // #0 = $vA
/*6026*/      OPC_RecordChild2, // #1 = $vB
/*6027*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6029*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1488:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6038*/    /*Scope*/ 17, /*->6056*/
/*6039*/      OPC_CheckInteger, 81|128,11/*1489*/, 
/*6042*/      OPC_MoveParent,
/*6043*/      OPC_RecordChild1, // #0 = $vA
/*6044*/      OPC_RecordChild2, // #1 = $vB
/*6045*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6047*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1489:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6056*/    /*Scope*/ 17, /*->6074*/
/*6057*/      OPC_CheckInteger, 82|128,11/*1490*/, 
/*6060*/      OPC_MoveParent,
/*6061*/      OPC_RecordChild1, // #0 = $vA
/*6062*/      OPC_RecordChild2, // #1 = $vB
/*6063*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6065*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1490:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6074*/    /*Scope*/ 17, /*->6092*/
/*6075*/      OPC_CheckInteger, 83|128,11/*1491*/, 
/*6078*/      OPC_MoveParent,
/*6079*/      OPC_RecordChild1, // #0 = $vA
/*6080*/      OPC_RecordChild2, // #1 = $vB
/*6081*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6083*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1491:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6092*/    /*Scope*/ 17, /*->6110*/
/*6093*/      OPC_CheckInteger, 84|128,11/*1492*/, 
/*6096*/      OPC_MoveParent,
/*6097*/      OPC_RecordChild1, // #0 = $vA
/*6098*/      OPC_RecordChild2, // #1 = $vB
/*6099*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6101*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1492:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6110*/    /*Scope*/ 17, /*->6128*/
/*6111*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*6114*/      OPC_MoveParent,
/*6115*/      OPC_RecordChild1, // #0 = $vA
/*6116*/      OPC_RecordChild2, // #1 = $vB
/*6117*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6119*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1527:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6128*/    /*Scope*/ 17, /*->6146*/
/*6129*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*6132*/      OPC_MoveParent,
/*6133*/      OPC_RecordChild1, // #0 = $vA
/*6134*/      OPC_RecordChild2, // #1 = $vB
/*6135*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6137*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1528:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6146*/    /*Scope*/ 17, /*->6164*/
/*6147*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*6150*/      OPC_MoveParent,
/*6151*/      OPC_RecordChild1, // #0 = $vA
/*6152*/      OPC_RecordChild2, // #1 = $vB
/*6153*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6155*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1529:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6164*/    /*Scope*/ 17, /*->6182*/
/*6165*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*6168*/      OPC_MoveParent,
/*6169*/      OPC_RecordChild1, // #0 = $vA
/*6170*/      OPC_RecordChild2, // #1 = $vB
/*6171*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6173*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1530:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6182*/    /*Scope*/ 17, /*->6200*/
/*6183*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*6186*/      OPC_MoveParent,
/*6187*/      OPC_RecordChild1, // #0 = $vA
/*6188*/      OPC_RecordChild2, // #1 = $vB
/*6189*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6191*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1531:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6200*/    /*Scope*/ 17, /*->6218*/
/*6201*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*6204*/      OPC_MoveParent,
/*6205*/      OPC_RecordChild1, // #0 = $vA
/*6206*/      OPC_RecordChild2, // #1 = $vB
/*6207*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6209*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1532:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6218*/    /*Scope*/ 17, /*->6236*/
/*6219*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*6222*/      OPC_MoveParent,
/*6223*/      OPC_RecordChild1, // #0 = $vA
/*6224*/      OPC_RecordChild2, // #1 = $vB
/*6225*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6227*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1536:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6236*/    /*Scope*/ 17, /*->6254*/
/*6237*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*6240*/      OPC_MoveParent,
/*6241*/      OPC_RecordChild1, // #0 = $vA
/*6242*/      OPC_RecordChild2, // #1 = $vB
/*6243*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6245*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1537:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6254*/    /*Scope*/ 17, /*->6272*/
/*6255*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*6258*/      OPC_MoveParent,
/*6259*/      OPC_RecordChild1, // #0 = $vA
/*6260*/      OPC_RecordChild2, // #1 = $vB
/*6261*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6263*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1538:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6272*/    /*Scope*/ 17, /*->6290*/
/*6273*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*6276*/      OPC_MoveParent,
/*6277*/      OPC_RecordChild1, // #0 = $vA
/*6278*/      OPC_RecordChild2, // #1 = $vB
/*6279*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6281*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1539:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6290*/    /*Scope*/ 17, /*->6308*/
/*6291*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*6294*/      OPC_MoveParent,
/*6295*/      OPC_RecordChild1, // #0 = $vA
/*6296*/      OPC_RecordChild2, // #1 = $vB
/*6297*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6299*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1540:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6308*/    /*Scope*/ 17, /*->6326*/
/*6309*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*6312*/      OPC_MoveParent,
/*6313*/      OPC_RecordChild1, // #0 = $vA
/*6314*/      OPC_RecordChild2, // #1 = $vB
/*6315*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6317*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6326*/    /*Scope*/ 19, /*->6346*/
/*6327*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*6330*/      OPC_MoveParent,
/*6331*/      OPC_RecordChild1, // #0 = $vA
/*6332*/      OPC_RecordChild2, // #1 = $vB
/*6333*/      OPC_RecordChild3, // #2 = $vC
/*6334*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1543:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6346*/    /*Scope*/ 19, /*->6366*/
/*6347*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*6350*/      OPC_MoveParent,
/*6351*/      OPC_RecordChild1, // #0 = $vA
/*6352*/      OPC_RecordChild2, // #1 = $vB
/*6353*/      OPC_RecordChild3, // #2 = $vC
/*6354*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6366*/    /*Scope*/ 19, /*->6386*/
/*6367*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*6370*/      OPC_MoveParent,
/*6371*/      OPC_RecordChild1, // #0 = $vA
/*6372*/      OPC_RecordChild2, // #1 = $vB
/*6373*/      OPC_RecordChild3, // #2 = $vC
/*6374*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6376*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1545:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6386*/    /*Scope*/ 19, /*->6406*/
/*6387*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*6390*/      OPC_MoveParent,
/*6391*/      OPC_RecordChild1, // #0 = $vA
/*6392*/      OPC_RecordChild2, // #1 = $vB
/*6393*/      OPC_RecordChild3, // #2 = $vC
/*6394*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6406*/    /*Scope*/ 19, /*->6426*/
/*6407*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*6410*/      OPC_MoveParent,
/*6411*/      OPC_RecordChild1, // #0 = $vA
/*6412*/      OPC_RecordChild2, // #1 = $vB
/*6413*/      OPC_RecordChild3, // #2 = $vC
/*6414*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6416*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1547:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6426*/    /*Scope*/ 19, /*->6446*/
/*6427*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*6430*/      OPC_MoveParent,
/*6431*/      OPC_RecordChild1, // #0 = $vA
/*6432*/      OPC_RecordChild2, // #1 = $vB
/*6433*/      OPC_RecordChild3, // #2 = $vC
/*6434*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6436*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6446*/    /*Scope*/ 17, /*->6464*/
/*6447*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*6450*/      OPC_MoveParent,
/*6451*/      OPC_RecordChild1, // #0 = $vA
/*6452*/      OPC_RecordChild2, // #1 = $vB
/*6453*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6455*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6464*/    /*Scope*/ 17, /*->6482*/
/*6465*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*6468*/      OPC_MoveParent,
/*6469*/      OPC_RecordChild1, // #0 = $vA
/*6470*/      OPC_RecordChild2, // #1 = $vB
/*6471*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6473*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6482*/    /*Scope*/ 17, /*->6500*/
/*6483*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*6486*/      OPC_MoveParent,
/*6487*/      OPC_RecordChild1, // #0 = $vA
/*6488*/      OPC_RecordChild2, // #1 = $vB
/*6489*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6491*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1551:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6500*/    /*Scope*/ 17, /*->6518*/
/*6501*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*6504*/      OPC_MoveParent,
/*6505*/      OPC_RecordChild1, // #0 = $vA
/*6506*/      OPC_RecordChild2, // #1 = $vB
/*6507*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6509*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6518*/    /*Scope*/ 17, /*->6536*/
/*6519*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*6522*/      OPC_MoveParent,
/*6523*/      OPC_RecordChild1, // #0 = $vA
/*6524*/      OPC_RecordChild2, // #1 = $vB
/*6525*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6527*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6536*/    /*Scope*/ 17, /*->6554*/
/*6537*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*6540*/      OPC_MoveParent,
/*6541*/      OPC_RecordChild1, // #0 = $vA
/*6542*/      OPC_RecordChild2, // #1 = $vB
/*6543*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6545*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1554:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6554*/    /*Scope*/ 17, /*->6572*/
/*6555*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*6558*/      OPC_MoveParent,
/*6559*/      OPC_RecordChild1, // #0 = $vA
/*6560*/      OPC_RecordChild2, // #1 = $vB
/*6561*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6563*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1555:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6572*/    /*Scope*/ 17, /*->6590*/
/*6573*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*6576*/      OPC_MoveParent,
/*6577*/      OPC_RecordChild1, // #0 = $vA
/*6578*/      OPC_RecordChild2, // #1 = $vB
/*6579*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6581*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1556:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6590*/    /*Scope*/ 17, /*->6608*/
/*6591*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*6594*/      OPC_MoveParent,
/*6595*/      OPC_RecordChild1, // #0 = $vA
/*6596*/      OPC_RecordChild2, // #1 = $vB
/*6597*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6599*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1589:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6608*/    /*Scope*/ 17, /*->6626*/
/*6609*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*6612*/      OPC_MoveParent,
/*6613*/      OPC_RecordChild1, // #0 = $vA
/*6614*/      OPC_RecordChild2, // #1 = $vB
/*6615*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6617*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1590:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6626*/    /*Scope*/ 17, /*->6644*/
/*6627*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*6630*/      OPC_MoveParent,
/*6631*/      OPC_RecordChild1, // #0 = $vA
/*6632*/      OPC_RecordChild2, // #1 = $vB
/*6633*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6635*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1591:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6644*/    /*Scope*/ 17, /*->6662*/
/*6645*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*6648*/      OPC_MoveParent,
/*6649*/      OPC_RecordChild1, // #0 = $vA
/*6650*/      OPC_RecordChild2, // #1 = $vB
/*6651*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6653*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6662*/    /*Scope*/ 17, /*->6680*/
/*6663*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*6666*/      OPC_MoveParent,
/*6667*/      OPC_RecordChild1, // #0 = $vA
/*6668*/      OPC_RecordChild2, // #1 = $vB
/*6669*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6671*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1593:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6680*/    /*Scope*/ 17, /*->6698*/
/*6681*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*6684*/      OPC_MoveParent,
/*6685*/      OPC_RecordChild1, // #0 = $vA
/*6686*/      OPC_RecordChild2, // #1 = $vB
/*6687*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6689*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1594:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6698*/    /*Scope*/ 17, /*->6716*/
/*6699*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*6702*/      OPC_MoveParent,
/*6703*/      OPC_RecordChild1, // #0 = $vA
/*6704*/      OPC_RecordChild2, // #1 = $vB
/*6705*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6707*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6716*/    /*Scope*/ 17, /*->6734*/
/*6717*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*6720*/      OPC_MoveParent,
/*6721*/      OPC_RecordChild1, // #0 = $vA
/*6722*/      OPC_RecordChild2, // #1 = $vB
/*6723*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6734*/    /*Scope*/ 17, /*->6752*/
/*6735*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*6738*/      OPC_MoveParent,
/*6739*/      OPC_RecordChild1, // #0 = $vA
/*6740*/      OPC_RecordChild2, // #1 = $vB
/*6741*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1596:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6752*/    /*Scope*/ 17, /*->6770*/
/*6753*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*6756*/      OPC_MoveParent,
/*6757*/      OPC_RecordChild1, // #0 = $vA
/*6758*/      OPC_RecordChild2, // #1 = $vB
/*6759*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6761*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6770*/    /*Scope*/ 17, /*->6788*/
/*6771*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*6774*/      OPC_MoveParent,
/*6775*/      OPC_RecordChild1, // #0 = $vA
/*6776*/      OPC_RecordChild2, // #1 = $vB
/*6777*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6779*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, v8i16:v8i16:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 v8i16:v8i16:$vA, v4i32:v4i32:$vB)
/*6788*/    /*Scope*/ 17, /*->6806*/
/*6789*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*6792*/      OPC_MoveParent,
/*6793*/      OPC_RecordChild1, // #0 = $vA
/*6794*/      OPC_RecordChild2, // #1 = $vB
/*6795*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6797*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1599:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6806*/    /*Scope*/ 17, /*->6824*/
/*6807*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*6810*/      OPC_MoveParent,
/*6811*/      OPC_RecordChild1, // #0 = $vA
/*6812*/      OPC_RecordChild2, // #1 = $vB
/*6813*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6815*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1571:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6824*/    /*Scope*/ 17, /*->6842*/
/*6825*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*6828*/      OPC_MoveParent,
/*6829*/      OPC_RecordChild1, // #0 = $vA
/*6830*/      OPC_RecordChild2, // #1 = $vB
/*6831*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6833*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1572:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6842*/    /*Scope*/ 17, /*->6860*/
/*6843*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*6846*/      OPC_MoveParent,
/*6847*/      OPC_RecordChild1, // #0 = $vA
/*6848*/      OPC_RecordChild2, // #1 = $vB
/*6849*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6851*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6860*/    /*Scope*/ 17, /*->6878*/
/*6861*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*6864*/      OPC_MoveParent,
/*6865*/      OPC_RecordChild1, // #0 = $vA
/*6866*/      OPC_RecordChild2, // #1 = $vB
/*6867*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6869*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1576:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6878*/    /*Scope*/ 17, /*->6896*/
/*6879*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*6882*/      OPC_MoveParent,
/*6883*/      OPC_RecordChild1, // #0 = $vA
/*6884*/      OPC_RecordChild2, // #1 = $vB
/*6885*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1579:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6896*/    /*Scope*/ 17, /*->6914*/
/*6897*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*6900*/      OPC_MoveParent,
/*6901*/      OPC_RecordChild1, // #0 = $vA
/*6902*/      OPC_RecordChild2, // #1 = $vB
/*6903*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6905*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1577:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6914*/    /*Scope*/ 17, /*->6932*/
/*6915*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*6918*/      OPC_MoveParent,
/*6919*/      OPC_RecordChild1, // #0 = $vA
/*6920*/      OPC_RecordChild2, // #1 = $vB
/*6921*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6923*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1578:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6932*/    /*Scope*/ 17, /*->6950*/
/*6933*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*6936*/      OPC_MoveParent,
/*6937*/      OPC_RecordChild1, // #0 = $vA
/*6938*/      OPC_RecordChild2, // #1 = $vB
/*6939*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6941*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1580:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6950*/    /*Scope*/ 17, /*->6968*/
/*6951*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*6954*/      OPC_MoveParent,
/*6955*/      OPC_RecordChild1, // #0 = $vA
/*6956*/      OPC_RecordChild2, // #1 = $vB
/*6957*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6959*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6968*/    /*Scope*/ 17, /*->6986*/
/*6969*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*6972*/      OPC_MoveParent,
/*6973*/      OPC_RecordChild1, // #0 = $vA
/*6974*/      OPC_RecordChild2, // #1 = $vB
/*6975*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6977*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1587:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6986*/    /*Scope*/ 17, /*->7004*/
/*6987*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*6990*/      OPC_MoveParent,
/*6991*/      OPC_RecordChild1, // #0 = $vA
/*6992*/      OPC_RecordChild2, // #1 = $vB
/*6993*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6995*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1582:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7004*/    /*Scope*/ 17, /*->7022*/
/*7005*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*7008*/      OPC_MoveParent,
/*7009*/      OPC_RecordChild1, // #0 = $vA
/*7010*/      OPC_RecordChild2, // #1 = $vB
/*7011*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7013*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1583:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7022*/    /*Scope*/ 17, /*->7040*/
/*7023*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*7026*/      OPC_MoveParent,
/*7027*/      OPC_RecordChild1, // #0 = $vA
/*7028*/      OPC_RecordChild2, // #1 = $vB
/*7029*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7031*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1584:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7040*/    /*Scope*/ 17, /*->7058*/
/*7041*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*7044*/      OPC_MoveParent,
/*7045*/      OPC_RecordChild1, // #0 = $vA
/*7046*/      OPC_RecordChild2, // #1 = $vB
/*7047*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7049*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1585:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7058*/    /*Scope*/ 17, /*->7076*/
/*7059*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*7062*/      OPC_MoveParent,
/*7063*/      OPC_RecordChild1, // #0 = $vA
/*7064*/      OPC_RecordChild2, // #1 = $vB
/*7065*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7067*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1586:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7076*/    /*Scope*/ 17, /*->7094*/
/*7077*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*7080*/      OPC_MoveParent,
/*7081*/      OPC_RecordChild1, // #0 = $vA
/*7082*/      OPC_RecordChild2, // #1 = $vB
/*7083*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7085*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1588:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7094*/    /*Scope*/ 17, /*->7112*/
/*7095*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*7098*/      OPC_MoveParent,
/*7099*/      OPC_RecordChild1, // #0 = $vA
/*7100*/      OPC_RecordChild2, // #1 = $vB
/*7101*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7103*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7112*/    /*Scope*/ 17, /*->7130*/
/*7113*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*7116*/      OPC_MoveParent,
/*7117*/      OPC_RecordChild1, // #0 = $vA
/*7118*/      OPC_RecordChild2, // #1 = $vB
/*7119*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7121*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1560:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7130*/    /*Scope*/ 17, /*->7148*/
/*7131*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*7134*/      OPC_MoveParent,
/*7135*/      OPC_RecordChild1, // #0 = $vA
/*7136*/      OPC_RecordChild2, // #1 = $vB
/*7137*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7139*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1561:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7148*/    /*Scope*/ 17, /*->7166*/
/*7149*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*7152*/      OPC_MoveParent,
/*7153*/      OPC_RecordChild1, // #0 = $vA
/*7154*/      OPC_RecordChild2, // #1 = $vB
/*7155*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7157*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1562:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7166*/    /*Scope*/ 17, /*->7184*/
/*7167*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*7170*/      OPC_MoveParent,
/*7171*/      OPC_RecordChild1, // #0 = $vA
/*7172*/      OPC_RecordChild2, // #1 = $vB
/*7173*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7175*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1563:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7184*/    /*Scope*/ 17, /*->7202*/
/*7185*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*7188*/      OPC_MoveParent,
/*7189*/      OPC_RecordChild1, // #0 = $vA
/*7190*/      OPC_RecordChild2, // #1 = $vB
/*7191*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7193*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1564:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7202*/    /*Scope*/ 17, /*->7220*/
/*7203*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*7206*/      OPC_MoveParent,
/*7207*/      OPC_RecordChild1, // #0 = $vA
/*7208*/      OPC_RecordChild2, // #1 = $vB
/*7209*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7211*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1565:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7220*/    /*Scope*/ 15, /*->7236*/
/*7221*/      OPC_CheckInteger, 65|128,12/*1601*/, 
/*7224*/      OPC_MoveParent,
/*7225*/      OPC_RecordChild1, // #0 = $vB
/*7226*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7228*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1601:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 v8i16:v8i16:$vB)
/*7236*/    /*Scope*/ 15, /*->7252*/
/*7237*/      OPC_CheckInteger, 66|128,12/*1602*/, 
/*7240*/      OPC_MoveParent,
/*7241*/      OPC_RecordChild1, // #0 = $vB
/*7242*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7244*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1602:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 v16i8:v16i8:$vB)
/*7252*/    /*Scope*/ 15, /*->7268*/
/*7253*/      OPC_CheckInteger, 67|128,12/*1603*/, 
/*7256*/      OPC_MoveParent,
/*7257*/      OPC_RecordChild1, // #0 = $vB
/*7258*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7260*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1603:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 v8i16:v8i16:$vB)
/*7268*/    /*Scope*/ 15, /*->7284*/
/*7269*/      OPC_CheckInteger, 68|128,12/*1604*/, 
/*7272*/      OPC_MoveParent,
/*7273*/      OPC_RecordChild1, // #0 = $vB
/*7274*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7276*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1604:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 v8i16:v8i16:$vB)
/*7284*/    /*Scope*/ 15, /*->7300*/
/*7285*/      OPC_CheckInteger, 69|128,12/*1605*/, 
/*7288*/      OPC_MoveParent,
/*7289*/      OPC_RecordChild1, // #0 = $vB
/*7290*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7292*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1605:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 v16i8:v16i8:$vB)
/*7300*/    /*Scope*/ 15, /*->7316*/
/*7301*/      OPC_CheckInteger, 70|128,12/*1606*/, 
/*7304*/      OPC_MoveParent,
/*7305*/      OPC_RecordChild1, // #0 = $vB
/*7306*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7308*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1606:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 v8i16:v8i16:$vB)
/*7316*/    /*Scope*/ 15, /*->7332*/
/*7317*/      OPC_CheckInteger, 115|128,11/*1523*/, 
/*7320*/      OPC_MoveParent,
/*7321*/      OPC_RecordChild1, // #0 = $vB
/*7322*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7324*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1523:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 v4f32:v4f32:$vB)
/*7332*/    /*Scope*/ 15, /*->7348*/
/*7333*/      OPC_CheckInteger, 116|128,11/*1524*/, 
/*7336*/      OPC_MoveParent,
/*7337*/      OPC_RecordChild1, // #0 = $vB
/*7338*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7340*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1524:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 v4f32:v4f32:$vB)
/*7348*/    /*Scope*/ 17, /*->7366*/
/*7349*/      OPC_CheckInteger, 118|128,11/*1526*/, 
/*7352*/      OPC_MoveParent,
/*7353*/      OPC_RecordChild1, // #0 = $vA
/*7354*/      OPC_RecordChild2, // #1 = $vB
/*7355*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7357*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1526:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7366*/    /*Scope*/ 17, /*->7384*/
/*7367*/      OPC_CheckInteger, 127|128,11/*1535*/, 
/*7370*/      OPC_MoveParent,
/*7371*/      OPC_RecordChild1, // #0 = $vA
/*7372*/      OPC_RecordChild2, // #1 = $vB
/*7373*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7375*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1535:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7384*/    /*Scope*/ 15, /*->7400*/
/*7385*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*7388*/      OPC_MoveParent,
/*7389*/      OPC_RecordChild1, // #0 = $vB
/*7390*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7392*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1566:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 v4f32:v4f32:$vB)
/*7400*/    /*Scope*/ 15, /*->7416*/
/*7401*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*7404*/      OPC_MoveParent,
/*7405*/      OPC_RecordChild1, // #0 = $vB
/*7406*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7408*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1567:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 v4f32:v4f32:$vB)
/*7416*/    /*Scope*/ 15, /*->7432*/
/*7417*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*7420*/      OPC_MoveParent,
/*7421*/      OPC_RecordChild1, // #0 = $vB
/*7422*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7424*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1568:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 v4f32:v4f32:$vB)
/*7432*/    /*Scope*/ 15, /*->7448*/
/*7433*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*7436*/      OPC_MoveParent,
/*7437*/      OPC_RecordChild1, // #0 = $vB
/*7438*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7440*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1569:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 v4f32:v4f32:$vB)
/*7448*/    /*Scope*/ 15, /*->7464*/
/*7449*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*7452*/      OPC_MoveParent,
/*7453*/      OPC_RecordChild1, // #0 = $vB
/*7454*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7456*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1570:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 v4f32:v4f32:$vB)
/*7464*/    /*Scope*/ 15, /*->7480*/
/*7465*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*7468*/      OPC_MoveParent,
/*7469*/      OPC_RecordChild1, // #0 = $vB
/*7470*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7472*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1574:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 v4f32:v4f32:$vB)
/*7480*/    /*Scope*/ 19, /*->7500*/
/*7481*/      OPC_CheckInteger, 117|128,11/*1525*/, 
/*7484*/      OPC_MoveParent,
/*7485*/      OPC_RecordChild1, // #0 = $A
/*7486*/      OPC_RecordChild2, // #1 = $B
/*7487*/      OPC_RecordChild3, // #2 = $C
/*7488*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7490*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1525:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7500*/    /*Scope*/ 19, /*->7520*/
/*7501*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*7504*/      OPC_MoveParent,
/*7505*/      OPC_RecordChild1, // #0 = $A
/*7506*/      OPC_RecordChild2, // #1 = $B
/*7507*/      OPC_RecordChild3, // #2 = $C
/*7508*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7510*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1557:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7520*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->7564
/*7524*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*7525*/    OPC_RecordChild1, // #1 = $rS
/*7526*/    OPC_Scope, 17, /*->7545*/ // 2 children in Scope
/*7528*/      OPC_CheckChild1Type, MVT::i32,
/*7530*/      OPC_RecordChild2, // #2 = $dst
/*7531*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7534*/      OPC_EmitMergeInputChains1_0,
/*7535*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i32:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 i32:i32:$rS, xoaddr:iPTR:$dst)
/*7545*/    /*Scope*/ 17, /*->7563*/
/*7546*/      OPC_CheckChild1Type, MVT::i64,
/*7548*/      OPC_RecordChild2, // #2 = $dst
/*7549*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7552*/      OPC_EmitMergeInputChains1_0,
/*7553*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i64:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 i64:i64:$rS, xoaddr:iPTR:$dst)
/*7563*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(PPCISD::STBRX),// ->7635
/*7567*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*7568*/    OPC_RecordChild1, // #1 = $rS
/*7569*/    OPC_Scope, 41, /*->7612*/ // 2 children in Scope
/*7571*/      OPC_CheckChild1Type, MVT::i32,
/*7573*/      OPC_RecordChild2, // #2 = $dst
/*7574*/      OPC_MoveChild, 3,
/*7576*/      OPC_Scope, 16, /*->7594*/ // 2 children in Scope
/*7578*/        OPC_CheckValueType, MVT::i16,
/*7580*/        OPC_MoveParent,
/*7581*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7584*/        OPC_EmitMergeInputChains1_0,
/*7585*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
                // Dst: (STHBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7594*/      /*Scope*/ 16, /*->7611*/
/*7595*/        OPC_CheckValueType, MVT::i32,
/*7597*/        OPC_MoveParent,
/*7598*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7601*/        OPC_EmitMergeInputChains1_0,
/*7602*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
                // Dst: (STWBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7611*/      0, /*End of Scope*/
/*7612*/    /*Scope*/ 21, /*->7634*/
/*7613*/      OPC_CheckChild1Type, MVT::i64,
/*7615*/      OPC_RecordChild2, // #2 = $dst
/*7616*/      OPC_MoveChild, 3,
/*7618*/      OPC_CheckValueType, MVT::i64,
/*7620*/      OPC_MoveParent,
/*7621*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7624*/      OPC_EmitMergeInputChains1_0,
/*7625*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx i64:i64:$rS, xoaddr:iPTR:$dst, i64:Other) - Complexity = 12
              // Dst: (STDBRX i64:i64:$rS, xoaddr:iPTR:$dst)
/*7634*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->7654
/*7638*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*7639*/    OPC_RecordChild1, // #1 = $frS
/*7640*/    OPC_RecordChild2, // #2 = $dst
/*7641*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7644*/    OPC_EmitMergeInputChains1_0,
/*7645*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx f64:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX f64:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->7683
/*7657*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*7658*/    OPC_CaptureGlueInput,
/*7659*/    OPC_RecordChild1, // #1 = $amt1
/*7660*/    OPC_MoveChild, 1,
/*7662*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7665*/    OPC_MoveParent,
/*7666*/    OPC_RecordChild2, // #2 = $amt2
/*7667*/    OPC_MoveChild, 2,
/*7669*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7672*/    OPC_MoveParent,
/*7673*/    OPC_EmitMergeInputChains1_0,
/*7674*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->7885
/*7687*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*7688*/    OPC_CaptureGlueInput,
/*7689*/    OPC_RecordChild1, // #1 = $func
/*7690*/    OPC_Scope, 21|128,1/*149*/, /*->7842*/ // 3 children in Scope
/*7693*/      OPC_MoveChild, 1,
/*7695*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->7747
/*7699*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7723
/*7702*/          OPC_MoveParent,
/*7703*/          OPC_RecordChild2, // #2 = $offset
/*7704*/          OPC_MoveChild, 2,
/*7706*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7709*/          OPC_MoveParent,
/*7710*/          OPC_EmitMergeInputChains1_0,
/*7711*/          OPC_EmitConvertToTarget, 1,
/*7713*/          OPC_EmitConvertToTarget, 2,
/*7715*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->7746
/*7725*/          OPC_MoveParent,
/*7726*/          OPC_RecordChild2, // #2 = $offset
/*7727*/          OPC_MoveChild, 2,
/*7729*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7732*/          OPC_MoveParent,
/*7733*/          OPC_EmitMergeInputChains1_0,
/*7734*/          OPC_EmitConvertToTarget, 1,
/*7736*/          OPC_EmitConvertToTarget, 2,
/*7738*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7794
/*7750*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7772
/*7753*/          OPC_MoveParent,
/*7754*/          OPC_RecordChild2, // #2 = $imm
/*7755*/          OPC_MoveChild, 2,
/*7757*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7760*/          OPC_MoveParent,
/*7761*/          OPC_EmitMergeInputChains1_0,
/*7762*/          OPC_EmitConvertToTarget, 2,
/*7764*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7793
/*7774*/          OPC_MoveParent,
/*7775*/          OPC_RecordChild2, // #2 = $imm
/*7776*/          OPC_MoveChild, 2,
/*7778*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7781*/          OPC_MoveParent,
/*7782*/          OPC_EmitMergeInputChains1_0,
/*7783*/          OPC_EmitConvertToTarget, 2,
/*7785*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7841
/*7797*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7819
/*7800*/          OPC_MoveParent,
/*7801*/          OPC_RecordChild2, // #2 = $imm
/*7802*/          OPC_MoveChild, 2,
/*7804*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7807*/          OPC_MoveParent,
/*7808*/          OPC_EmitMergeInputChains1_0,
/*7809*/          OPC_EmitConvertToTarget, 2,
/*7811*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7840
/*7821*/          OPC_MoveParent,
/*7822*/          OPC_RecordChild2, // #2 = $imm
/*7823*/          OPC_MoveChild, 2,
/*7825*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7828*/          OPC_MoveParent,
/*7829*/          OPC_EmitMergeInputChains1_0,
/*7830*/          OPC_EmitConvertToTarget, 2,
/*7832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7842*/    /*Scope*/ 20, /*->7863*/
/*7843*/      OPC_CheckChild1Type, MVT::i32,
/*7845*/      OPC_RecordChild2, // #2 = $imm
/*7846*/      OPC_MoveChild, 2,
/*7848*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7851*/      OPC_MoveParent,
/*7852*/      OPC_EmitMergeInputChains1_0,
/*7853*/      OPC_EmitConvertToTarget, 2,
/*7855*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*7863*/    /*Scope*/ 20, /*->7884*/
/*7864*/      OPC_CheckChild1Type, MVT::i64,
/*7866*/      OPC_RecordChild2, // #2 = $imm
/*7867*/      OPC_MoveChild, 2,
/*7869*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7872*/      OPC_MoveParent,
/*7873*/      OPC_EmitMergeInputChains1_0,
/*7874*/      OPC_EmitConvertToTarget, 2,
/*7876*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*7884*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->7908
/*7888*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*7889*/    OPC_MoveChild, 1,
/*7891*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7894*/    OPC_MoveParent,
/*7895*/    OPC_MoveChild, 2,
/*7897*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7900*/    OPC_MoveParent,
/*7901*/    OPC_EmitMergeInputChains1_0,
/*7902*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 36,  TARGET_VAL(PPCISD::EH_SJLJ_SETJMP),// ->7947
/*7911*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_setjmp' chained node
/*7912*/    OPC_RecordChild1, // #1 = $buf
/*7913*/    OPC_CheckType, MVT::i32,
/*7915*/    OPC_Scope, 14, /*->7931*/ // 2 children in Scope
/*7917*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7919*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7922*/      OPC_EmitMergeInputChains1_0,
/*7923*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp32), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp32:i32 addr:iPTR:$buf)
/*7931*/    /*Scope*/ 14, /*->7946*/
/*7932*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*7934*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7937*/      OPC_EmitMergeInputChains1_0,
/*7938*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp64), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp64:i32 addr:iPTR:$buf)
/*7946*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(PPCISD::EH_SJLJ_LONGJMP),// ->7982
/*7950*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_longjmp' chained node
/*7951*/    OPC_RecordChild1, // #1 = $buf
/*7952*/    OPC_Scope, 13, /*->7967*/ // 2 children in Scope
/*7954*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7956*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7959*/      OPC_EmitMergeInputChains1_0,
/*7960*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp32), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp32 addr:iPTR:$buf)
/*7967*/    /*Scope*/ 13, /*->7981*/
/*7968*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*7970*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7973*/      OPC_EmitMergeInputChains1_0,
/*7974*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp64 addr:iPTR:$buf)
/*7981*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 124,  TARGET_VAL(ISD::SUB),// ->8109
/*7985*/    OPC_Scope, 28, /*->8015*/ // 2 children in Scope
/*7987*/      OPC_MoveChild, 0,
/*7989*/      OPC_CheckInteger, 0, 
/*7991*/      OPC_MoveParent,
/*7992*/      OPC_RecordChild1, // #0 = $rA
/*7993*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->8004
/*7996*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, i32:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 i32:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->8014
/*8006*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, i64:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 i64:i64:$rA)
              0, // EndSwitchType
/*8015*/    /*Scope*/ 92, /*->8108*/
/*8016*/      OPC_RecordChild0, // #0 = $imm
/*8017*/      OPC_Scope, 23, /*->8042*/ // 2 children in Scope
/*8019*/        OPC_MoveChild, 0,
/*8021*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8024*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8026*/        OPC_MoveParent,
/*8027*/        OPC_RecordChild1, // #1 = $in
/*8028*/        OPC_CheckType, MVT::i32,
/*8030*/        OPC_EmitConvertToTarget, 0,
/*8032*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, i32:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 ?:i32:$in, (imm:i32):$imm)
/*8042*/      /*Scope*/ 64, /*->8107*/
/*8043*/        OPC_RecordChild1, // #1 = $rA
/*8044*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->8056
/*8047*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 i32:i32:$rA, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->8067
/*8058*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 i64:i64:$rA, i64:i64:$rB)
                /*SwitchType*/ 11,  MVT::v16i8,// ->8080
/*8069*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8071*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
                /*SwitchType*/ 11,  MVT::v8i16,// ->8093
/*8082*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8084*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
                /*SwitchType*/ 11,  MVT::v4i32,// ->8106
/*8095*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8097*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
                0, // EndSwitchType
/*8107*/      0, /*End of Scope*/
/*8108*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->8214
/*8112*/    OPC_CaptureGlueInput,
/*8113*/    OPC_RecordChild0, // #0 = $rA
/*8114*/    OPC_Scope, 69, /*->8185*/ // 2 children in Scope
/*8116*/      OPC_MoveChild, 1,
/*8118*/      OPC_Scope, 36, /*->8156*/ // 2 children in Scope
/*8120*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8131*/        OPC_MoveParent,
/*8132*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8144
/*8135*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8155
/*8146*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8156*/      /*Scope*/ 27, /*->8184*/
/*8157*/        OPC_CheckInteger, 0, 
/*8159*/        OPC_MoveParent,
/*8160*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8172
/*8163*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8183
/*8174*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8184*/      0, /*End of Scope*/
/*8185*/    /*Scope*/ 27, /*->8213*/
/*8186*/      OPC_RecordChild1, // #1 = $rB
/*8187*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8200
/*8190*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8212
/*8202*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8213*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->8321
/*8217*/    OPC_CaptureGlueInput,
/*8218*/    OPC_Scope, 71, /*->8291*/ // 2 children in Scope
/*8220*/      OPC_MoveChild, 0,
/*8222*/      OPC_Scope, 37, /*->8261*/ // 2 children in Scope
/*8224*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8235*/        OPC_MoveParent,
/*8236*/        OPC_RecordChild1, // #0 = $rA
/*8237*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8249
/*8240*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8260
/*8251*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8261*/      /*Scope*/ 28, /*->8290*/
/*8262*/        OPC_CheckInteger, 0, 
/*8264*/        OPC_MoveParent,
/*8265*/        OPC_RecordChild1, // #0 = $rA
/*8266*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8278
/*8269*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8289
/*8280*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8290*/      0, /*End of Scope*/
/*8291*/    /*Scope*/ 28, /*->8320*/
/*8292*/      OPC_RecordChild0, // #0 = $rB
/*8293*/      OPC_RecordChild1, // #1 = $rA
/*8294*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8307
/*8297*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8319
/*8309*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8320*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->8393
/*8324*/    OPC_RecordChild0, // #0 = $rA
/*8325*/    OPC_RecordChild1, // #1 = $imm
/*8326*/    OPC_Scope, 38, /*->8366*/ // 3 children in Scope
/*8328*/      OPC_MoveChild, 1,
/*8330*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8333*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8335*/      OPC_MoveParent,
/*8336*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8351
/*8339*/        OPC_EmitConvertToTarget, 1,
/*8341*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->8365
/*8353*/        OPC_EmitConvertToTarget, 1,
/*8355*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*8366*/    /*Scope*/ 12, /*->8379*/
/*8367*/      OPC_CheckType, MVT::i32,
/*8369*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 i32:i32:$rA, i32:i32:$rB)
/*8379*/    /*Scope*/ 12, /*->8392*/
/*8380*/      OPC_CheckType, MVT::i64,
/*8382*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
/*8392*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->8446
/*8396*/    OPC_RecordChild0, // #0 = $rA
/*8397*/    OPC_RecordChild1, // #1 = $imm
/*8398*/    OPC_Scope, 21, /*->8421*/ // 3 children in Scope
/*8400*/      OPC_MoveChild, 1,
/*8402*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8405*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8407*/      OPC_MoveParent,
/*8408*/      OPC_CheckType, MVT::i32,
/*8410*/      OPC_EmitConvertToTarget, 1,
/*8412*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 i32:i32:$rA, (imm:i32):$imm)
/*8421*/    /*Scope*/ 11, /*->8433*/
/*8422*/      OPC_CheckType, MVT::i32,
/*8424*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 i32:i32:$rA, i32:i32:$rB)
/*8433*/    /*Scope*/ 11, /*->8445*/
/*8434*/      OPC_CheckType, MVT::i64,
/*8436*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 i64:i64:$rA, i64:i64:$rB)
/*8445*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->8520
/*8449*/    OPC_RecordChild0, // #0 = $imm
/*8450*/    OPC_Scope, 39, /*->8491*/ // 2 children in Scope
/*8452*/      OPC_MoveChild, 0,
/*8454*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8457*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8459*/      OPC_MoveParent,
/*8460*/      OPC_RecordChild1, // #1 = $rA
/*8461*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8476
/*8464*/        OPC_EmitConvertToTarget, 0,
/*8466*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, i32:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->8490
/*8478*/        OPC_EmitConvertToTarget, 0,
/*8480*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, i64:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*8491*/    /*Scope*/ 27, /*->8519*/
/*8492*/      OPC_RecordChild1, // #1 = $rA
/*8493*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8506
/*8496*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8518
/*8508*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8519*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SRA),// ->8643
/*8523*/    OPC_RecordChild0, // #0 = $rS
/*8524*/    OPC_RecordChild1, // #1 = $SH
/*8525*/    OPC_Scope, 38, /*->8565*/ // 5 children in Scope
/*8527*/      OPC_MoveChild, 1,
/*8529*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8532*/      OPC_CheckType, MVT::i32,
/*8534*/      OPC_MoveParent,
/*8535*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8550
/*8538*/        OPC_EmitConvertToTarget, 1,
/*8540*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 i32:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->8564
/*8552*/        OPC_EmitConvertToTarget, 1,
/*8554*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 i64:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*8565*/    /*Scope*/ 28, /*->8594*/
/*8566*/      OPC_CheckChild1Type, MVT::i32,
/*8568*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8581
/*8571*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8593
/*8583*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8594*/    /*Scope*/ 15, /*->8610*/
/*8595*/      OPC_CheckChild1Type, MVT::v16i8,
/*8597*/      OPC_CheckType, MVT::v16i8,
/*8599*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8601*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8610*/    /*Scope*/ 15, /*->8626*/
/*8611*/      OPC_CheckChild1Type, MVT::v8i16,
/*8613*/      OPC_CheckType, MVT::v8i16,
/*8615*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8617*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8626*/    /*Scope*/ 15, /*->8642*/
/*8627*/      OPC_CheckChild1Type, MVT::v4i32,
/*8629*/      OPC_CheckType, MVT::v4i32,
/*8631*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8633*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8642*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SHL),// ->8779
/*8647*/    OPC_RecordChild0, // #0 = $in
/*8648*/    OPC_RecordChild1, // #1 = $imm
/*8649*/    OPC_Scope, 52, /*->8703*/ // 5 children in Scope
/*8651*/      OPC_MoveChild, 1,
/*8653*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8656*/      OPC_CheckType, MVT::i32,
/*8658*/      OPC_MoveParent,
/*8659*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8683
/*8662*/        OPC_EmitConvertToTarget, 1,
/*8664*/        OPC_EmitInteger, MVT::i32, 0, 
/*8667*/        OPC_EmitConvertToTarget, 1,
/*8669*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*8672*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->8702
/*8685*/        OPC_EmitConvertToTarget, 1,
/*8687*/        OPC_EmitConvertToTarget, 1,
/*8689*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*8692*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 ?:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*8703*/    /*Scope*/ 26, /*->8730*/
/*8704*/      OPC_CheckChild1Type, MVT::i32,
/*8706*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8718
/*8709*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8729
/*8720*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8730*/    /*Scope*/ 15, /*->8746*/
/*8731*/      OPC_CheckChild1Type, MVT::v16i8,
/*8733*/      OPC_CheckType, MVT::v16i8,
/*8735*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8737*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8746*/    /*Scope*/ 15, /*->8762*/
/*8747*/      OPC_CheckChild1Type, MVT::v8i16,
/*8749*/      OPC_CheckType, MVT::v8i16,
/*8751*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8753*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8762*/    /*Scope*/ 15, /*->8778*/
/*8763*/      OPC_CheckChild1Type, MVT::v4i32,
/*8765*/      OPC_CheckType, MVT::v4i32,
/*8767*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8769*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8778*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SRL),// ->8915
/*8783*/    OPC_RecordChild0, // #0 = $in
/*8784*/    OPC_RecordChild1, // #1 = $imm
/*8785*/    OPC_Scope, 52, /*->8839*/ // 5 children in Scope
/*8787*/      OPC_MoveChild, 1,
/*8789*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8792*/      OPC_CheckType, MVT::i32,
/*8794*/      OPC_MoveParent,
/*8795*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8819
/*8798*/        OPC_EmitConvertToTarget, 1,
/*8800*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*8803*/        OPC_EmitConvertToTarget, 1,
/*8805*/        OPC_EmitInteger, MVT::i32, 31, 
/*8808*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->8838
/*8821*/        OPC_EmitConvertToTarget, 1,
/*8823*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*8826*/        OPC_EmitConvertToTarget, 1,
/*8828*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*8839*/    /*Scope*/ 26, /*->8866*/
/*8840*/      OPC_CheckChild1Type, MVT::i32,
/*8842*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8854
/*8845*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8865
/*8856*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8866*/    /*Scope*/ 15, /*->8882*/
/*8867*/      OPC_CheckChild1Type, MVT::v16i8,
/*8869*/      OPC_CheckType, MVT::v16i8,
/*8871*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8873*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8882*/    /*Scope*/ 15, /*->8898*/
/*8883*/      OPC_CheckChild1Type, MVT::v8i16,
/*8885*/      OPC_CheckType, MVT::v8i16,
/*8887*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8889*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8898*/    /*Scope*/ 15, /*->8914*/
/*8899*/      OPC_CheckChild1Type, MVT::v4i32,
/*8901*/      OPC_CheckType, MVT::v4i32,
/*8903*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8905*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8914*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->9010
/*8918*/    OPC_RecordChild0, // #0 = $in
/*8919*/    OPC_RecordChild1, // #1 = $imm
/*8920*/    OPC_Scope, 48, /*->8970*/ // 2 children in Scope
/*8922*/      OPC_MoveChild, 1,
/*8924*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8927*/      OPC_CheckType, MVT::i32,
/*8929*/      OPC_MoveParent,
/*8930*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->8952
/*8933*/        OPC_EmitConvertToTarget, 1,
/*8935*/        OPC_EmitInteger, MVT::i32, 0, 
/*8938*/        OPC_EmitInteger, MVT::i32, 31, 
/*8941*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->8969
/*8954*/        OPC_EmitConvertToTarget, 1,
/*8956*/        OPC_EmitInteger, MVT::i32, 0, 
/*8959*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*8970*/    /*Scope*/ 38, /*->9009*/
/*8971*/      OPC_CheckChild1Type, MVT::i32,
/*8973*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->8993
/*8976*/        OPC_EmitInteger, MVT::i32, 0, 
/*8979*/        OPC_EmitInteger, MVT::i32, 31, 
/*8982*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 i32:i32:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->9008
/*8995*/        OPC_EmitInteger, MVT::i32, 0, 
/*8998*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 i64:i64:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 ?:i64:$in, ?:i32:$sh, 0:i32)
              0, // EndSwitchType
/*9009*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->9066
/*9013*/    OPC_RecordChild0, // #0 = $disp
/*9014*/    OPC_MoveChild, 0,
/*9016*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9033
/*9020*/      OPC_MoveParent,
/*9021*/      OPC_RecordChild1, // #1 = $reg
/*9022*/      OPC_CheckType, MVT::i64,
/*9024*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->9049
/*9036*/      OPC_MoveParent,
/*9037*/      OPC_RecordChild1, // #1 = $reg
/*9038*/      OPC_CheckType, MVT::i64,
/*9040*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->9065
/*9052*/      OPC_MoveParent,
/*9053*/      OPC_RecordChild1, // #1 = $reg
/*9054*/      OPC_CheckType, MVT::i64,
/*9056*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, i64:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->9088
/*9069*/    OPC_RecordChild0, // #0 = $reg
/*9070*/    OPC_RecordChild1, // #1 = $disp
/*9071*/    OPC_MoveChild, 1,
/*9073*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9076*/    OPC_MoveParent,
/*9077*/    OPC_CheckType, MVT::i64,
/*9079*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->9110
/*9091*/    OPC_RecordChild0, // #0 = $disp
/*9092*/    OPC_MoveChild, 0,
/*9094*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9097*/    OPC_MoveParent,
/*9098*/    OPC_RecordChild1, // #1 = $reg
/*9099*/    OPC_CheckType, MVT::i64,
/*9101*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->9132
/*9113*/    OPC_RecordChild0, // #0 = $reg
/*9114*/    OPC_RecordChild1, // #1 = $disp
/*9115*/    OPC_MoveChild, 1,
/*9117*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9120*/    OPC_MoveParent,
/*9121*/    OPC_CheckType, MVT::i64,
/*9123*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->9154
/*9135*/    OPC_RecordChild0, // #0 = $reg
/*9136*/    OPC_RecordChild1, // #1 = $disp
/*9137*/    OPC_MoveChild, 1,
/*9139*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9142*/    OPC_MoveParent,
/*9143*/    OPC_CheckType, MVT::i64,
/*9145*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->9176
/*9157*/    OPC_RecordChild0, // #0 = $disp
/*9158*/    OPC_MoveChild, 0,
/*9160*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9163*/    OPC_MoveParent,
/*9164*/    OPC_RecordChild1, // #1 = $reg
/*9165*/    OPC_CheckType, MVT::i64,
/*9167*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->9198
/*9179*/    OPC_RecordChild0, // #0 = $in
/*9180*/    OPC_RecordChild1, // #1 = $g
/*9181*/    OPC_MoveChild, 1,
/*9183*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9186*/    OPC_MoveParent,
/*9187*/    OPC_CheckType, MVT::i64,
/*9189*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 i64:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->9220
/*9201*/    OPC_RecordChild0, // #0 = $reg
/*9202*/    OPC_RecordChild1, // #1 = $disp
/*9203*/    OPC_MoveChild, 1,
/*9205*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9208*/    OPC_MoveParent,
/*9209*/    OPC_CheckType, MVT::i64,
/*9211*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->9242
/*9223*/    OPC_RecordChild0, // #0 = $reg
/*9224*/    OPC_RecordChild1, // #1 = $disp
/*9225*/    OPC_MoveChild, 1,
/*9227*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9230*/    OPC_MoveParent,
/*9231*/    OPC_CheckType, MVT::i64,
/*9233*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->9264
/*9245*/    OPC_RecordChild0, // #0 = $reg
/*9246*/    OPC_RecordChild1, // #1 = $sym
/*9247*/    OPC_MoveChild, 1,
/*9249*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9252*/    OPC_MoveParent,
/*9253*/    OPC_CheckType, MVT::i64,
/*9255*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->9286
/*9267*/    OPC_RecordChild0, // #0 = $reg
/*9268*/    OPC_RecordChild1, // #1 = $disp
/*9269*/    OPC_MoveChild, 1,
/*9271*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9274*/    OPC_MoveParent,
/*9275*/    OPC_CheckType, MVT::i64,
/*9277*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->9308
/*9289*/    OPC_RecordChild0, // #0 = $reg
/*9290*/    OPC_RecordChild1, // #1 = $disp
/*9291*/    OPC_MoveChild, 1,
/*9293*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9296*/    OPC_MoveParent,
/*9297*/    OPC_CheckType, MVT::i64,
/*9299*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->9330
/*9311*/    OPC_RecordChild0, // #0 = $reg
/*9312*/    OPC_RecordChild1, // #1 = $sym
/*9313*/    OPC_MoveChild, 1,
/*9315*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9318*/    OPC_MoveParent,
/*9319*/    OPC_CheckType, MVT::i64,
/*9321*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->9354
/*9333*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*9334*/    OPC_RecordChild1, // #1 = $reg
/*9335*/    OPC_RecordChild2, // #2 = $disp
/*9336*/    OPC_MoveChild, 2,
/*9338*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9341*/    OPC_MoveParent,
/*9342*/    OPC_CheckType, MVT::i64,
/*9344*/    OPC_EmitMergeInputChains1_0,
/*9345*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->9376
/*9357*/    OPC_RecordChild0, // #0 = $reg
/*9358*/    OPC_RecordChild1, // #1 = $disp
/*9359*/    OPC_MoveChild, 1,
/*9361*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9364*/    OPC_MoveParent,
/*9365*/    OPC_CheckType, MVT::i64,
/*9367*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->9476
/*9379*/    OPC_RecordNode,   // #0 = $imm
/*9380*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->9442
/*9383*/      OPC_Scope, 12, /*->9397*/ // 3 children in Scope
/*9385*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9387*/        OPC_EmitConvertToTarget, 0,
/*9389*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*9397*/      /*Scope*/ 15, /*->9413*/
/*9398*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9400*/        OPC_EmitConvertToTarget, 0,
/*9402*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9405*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*9413*/      /*Scope*/ 27, /*->9441*/
/*9414*/        OPC_EmitConvertToTarget, 0,
/*9416*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9419*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*9427*/        OPC_EmitConvertToTarget, 0,
/*9429*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*9432*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9441*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->9475
/*9444*/      OPC_Scope, 12, /*->9458*/ // 2 children in Scope
/*9446*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9448*/        OPC_EmitConvertToTarget, 0,
/*9450*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*9458*/      /*Scope*/ 15, /*->9474*/
/*9459*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9461*/        OPC_EmitConvertToTarget, 0,
/*9463*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9466*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*9474*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->9507
/*9479*/    OPC_RecordChild0, // #0 = $rS
/*9480*/    OPC_RecordChild1, // #1 = $rB
/*9481*/    OPC_CheckChild1Type, MVT::i32,
/*9483*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9495
/*9486*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9506
/*9497*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->9538
/*9510*/    OPC_RecordChild0, // #0 = $rS
/*9511*/    OPC_RecordChild1, // #1 = $rB
/*9512*/    OPC_CheckChild1Type, MVT::i32,
/*9514*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9526
/*9517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9537
/*9528*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->9571
/*9541*/    OPC_RecordChild0, // #0 = $rS
/*9542*/    OPC_RecordChild1, // #1 = $rB
/*9543*/    OPC_CheckChild1Type, MVT::i32,
/*9545*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9558
/*9548*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->9570
/*9560*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->9597
/*9574*/    OPC_RecordChild0, // #0 = $rS
/*9575*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9586
/*9578*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 i32:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->9596
/*9588*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 i64:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9669
/*9600*/    OPC_RecordChild0, // #0 = $rS
/*9601*/    OPC_MoveChild, 1,
/*9603*/    OPC_Scope, 25, /*->9630*/ // 3 children in Scope
/*9605*/      OPC_CheckValueType, MVT::i8,
/*9607*/      OPC_MoveParent,
/*9608*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9619
/*9611*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9629
/*9621*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9630*/    /*Scope*/ 25, /*->9656*/
/*9631*/      OPC_CheckValueType, MVT::i16,
/*9633*/      OPC_MoveParent,
/*9634*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9645
/*9637*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9655
/*9647*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9656*/    /*Scope*/ 11, /*->9668*/
/*9657*/      OPC_CheckValueType, MVT::i32,
/*9659*/      OPC_MoveParent,
/*9660*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 i64:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 i64:i64:$rS)
/*9668*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->9698
/*9672*/    OPC_RecordChild0, // #0 = $rA
/*9673*/    OPC_RecordChild1, // #1 = $rB
/*9674*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9686
/*9677*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9697
/*9688*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->9727
/*9701*/    OPC_RecordChild0, // #0 = $rA
/*9702*/    OPC_RecordChild1, // #1 = $rB
/*9703*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9715
/*9706*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9726
/*9717*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->9756
/*9730*/    OPC_RecordChild0, // #0 = $rA
/*9731*/    OPC_RecordChild1, // #1 = $rB
/*9732*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9744
/*9735*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9755
/*9746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->9785
/*9759*/    OPC_RecordChild0, // #0 = $rA
/*9760*/    OPC_RecordChild1, // #1 = $rB
/*9761*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9773
/*9764*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9784
/*9775*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->9799
/*9788*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*9789*/    OPC_CheckType, MVT::i64,
/*9791*/    OPC_EmitMergeInputChains1_0,
/*9792*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->9815
/*9802*/    OPC_RecordChild0, // #0 = $rS
/*9803*/    OPC_CheckChild0Type, MVT::i32,
/*9805*/    OPC_CheckType, MVT::i64,
/*9807*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 i32:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 i32:i32:$rS)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->9841
/*9818*/    OPC_RecordChild0, // #0 = $rS
/*9819*/    OPC_SwitchType /*2 cases */, 8,  MVT::i64,// ->9830
/*9822*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctpop:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (POPCNTD:i64 i64:i64:$rS)
            /*SwitchType*/ 8,  MVT::i32,// ->9840
/*9832*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (POPCNTW:i32 i32:i32:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->9859
/*9844*/    OPC_RecordChild0, // #0 = $in
/*9845*/    OPC_CheckType, MVT::i32,
/*9847*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9850*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 ?:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->9887
/*9862*/    OPC_RecordChild0, // #0 = $in
/*9863*/    OPC_CheckChild0Type, MVT::i32,
/*9865*/    OPC_CheckType, MVT::i64,
/*9867*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9874*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9877*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->9931
/*9890*/    OPC_RecordChild0, // #0 = $in
/*9891*/    OPC_CheckChild0Type, MVT::i32,
/*9893*/    OPC_CheckType, MVT::i64,
/*9895*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9902*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9905*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*9915*/    OPC_EmitInteger, MVT::i32, 0, 
/*9918*/    OPC_EmitInteger, MVT::i32, 32, 
/*9921*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FNEG),// ->10094
/*9935*/    OPC_Scope, 102, /*->10039*/ // 3 children in Scope
/*9937*/      OPC_MoveChild, 0,
/*9939*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->10011
/*9943*/        OPC_RecordChild0, // #0 = $FRA
/*9944*/        OPC_RecordChild1, // #1 = $FRC
/*9945*/        OPC_Scope, 34, /*->9981*/ // 2 children in Scope
/*9947*/          OPC_MoveChild, 2,
/*9949*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*9952*/          OPC_RecordChild0, // #2 = $FRB
/*9953*/          OPC_MoveParent,
/*9954*/          OPC_MoveParent,
/*9955*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->9968
/*9958*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->9980
/*9970*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*9981*/        /*Scope*/ 28, /*->10010*/
/*9982*/          OPC_RecordChild2, // #2 = $FRB
/*9983*/          OPC_MoveParent,
/*9984*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->9997
/*9987*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->10009
/*9999*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*10010*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->10038
/*10014*/       OPC_RecordChild0, // #0 = $frB
/*10015*/       OPC_MoveParent,
/*10016*/       OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10027
/*10019*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 f32:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 f32:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->10037
/*10029*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 f64:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 f64:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*10039*/   /*Scope*/ 23, /*->10063*/
/*10040*/     OPC_RecordChild0, // #0 = $frB
/*10041*/     OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10052
/*10044*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->10062
/*10054*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$frB)
              0, // EndSwitchType
/*10063*/   /*Scope*/ 29, /*->10093*/
/*10064*/     OPC_MoveChild, 0,
/*10066*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*10069*/     OPC_RecordChild0, // #0 = $vA
/*10070*/     OPC_RecordChild1, // #1 = $vC
/*10071*/     OPC_MoveChild, 2,
/*10073*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10076*/     OPC_RecordChild0, // #2 = $vB
/*10077*/     OPC_MoveParent,
/*10078*/     OPC_MoveParent,
/*10079*/     OPC_CheckType, MVT::v4f32,
/*10081*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10083*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, (fneg:v4f32 v4f32:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
/*10093*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,1/*172*/,  TARGET_VAL(ISD::FMA),// ->10270
/*10098*/   OPC_Scope, 35, /*->10135*/ // 5 children in Scope
/*10100*/     OPC_RecordChild0, // #0 = $FRA
/*10101*/     OPC_RecordChild1, // #1 = $FRC
/*10102*/     OPC_MoveChild, 2,
/*10104*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10107*/     OPC_RecordChild0, // #2 = $FRB
/*10108*/     OPC_MoveParent,
/*10109*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10122
/*10112*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->10134
/*10124*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
              0, // EndSwitchType
/*10135*/   /*Scope*/ 21, /*->10157*/
/*10136*/     OPC_MoveChild, 0,
/*10138*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10141*/     OPC_RecordChild0, // #0 = $A
/*10142*/     OPC_MoveParent,
/*10143*/     OPC_RecordChild1, // #1 = $C
/*10144*/     OPC_RecordChild2, // #2 = $B
/*10145*/     OPC_CheckType, MVT::f64,
/*10147*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 (fneg:f64 f64:f64:$A), f64:f64:$C, f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10157*/   /*Scope*/ 21, /*->10179*/
/*10158*/     OPC_RecordChild0, // #0 = $A
/*10159*/     OPC_MoveChild, 1,
/*10161*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10164*/     OPC_RecordChild0, // #1 = $C
/*10165*/     OPC_MoveParent,
/*10166*/     OPC_RecordChild2, // #2 = $B
/*10167*/     OPC_CheckType, MVT::f64,
/*10169*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 f64:f64:$A, (fneg:f64 f64:f64:$C), f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10179*/   /*Scope*/ 21, /*->10201*/
/*10180*/     OPC_MoveChild, 0,
/*10182*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10185*/     OPC_RecordChild0, // #0 = $A
/*10186*/     OPC_MoveParent,
/*10187*/     OPC_RecordChild1, // #1 = $C
/*10188*/     OPC_RecordChild2, // #2 = $B
/*10189*/     OPC_CheckType, MVT::f32,
/*10191*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f32 (fneg:f32 f32:f32:$A), f32:f32:$C, f32:f32:$B) - Complexity = 6
              // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10201*/   /*Scope*/ 67, /*->10269*/
/*10202*/     OPC_RecordChild0, // #0 = $A
/*10203*/     OPC_Scope, 20, /*->10225*/ // 2 children in Scope
/*10205*/       OPC_MoveChild, 1,
/*10207*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10210*/       OPC_RecordChild0, // #1 = $C
/*10211*/       OPC_MoveParent,
/*10212*/       OPC_RecordChild2, // #2 = $B
/*10213*/       OPC_CheckType, MVT::f32,
/*10215*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$A, (fneg:f32 f32:f32:$C), f32:f32:$B) - Complexity = 6
                // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10225*/     /*Scope*/ 42, /*->10268*/
/*10226*/       OPC_RecordChild1, // #1 = $FRC
/*10227*/       OPC_RecordChild2, // #2 = $FRB
/*10228*/       OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->10241
/*10231*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
                  // Dst: (FMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                /*SwitchType*/ 10,  MVT::f32,// ->10253
/*10243*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
                  // Dst: (FMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                /*SwitchType*/ 12,  MVT::v4f32,// ->10267
/*10255*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10257*/         OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB) - Complexity = 3
                  // Dst: (VMADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
                0, // EndSwitchType
/*10268*/     0, /*End of Scope*/
/*10269*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->10284
/*10273*/   OPC_RecordChild0, // #0 = $frB
/*10274*/   OPC_CheckType, MVT::f64,
/*10276*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->10296
/*10287*/   OPC_RecordChild0, // #0 = $frB
/*10288*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FNEARBYINT),// ->10334
/*10299*/   OPC_RecordChild0, // #0 = $frB
/*10300*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10311
/*10303*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIND), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIND:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10321
/*10313*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10333
/*10323*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10325*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIN:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FCEIL),// ->10372
/*10337*/   OPC_RecordChild0, // #0 = $frB
/*10338*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10349
/*10341*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fceil:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIPD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10359
/*10351*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIPS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10371
/*10361*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10363*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fceil:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIP:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FTRUNC),// ->10410
/*10375*/   OPC_RecordChild0, // #0 = $frB
/*10376*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10387
/*10379*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIZD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10397
/*10389*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIZS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10409
/*10399*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10401*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIZ:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FFLOOR),// ->10448
/*10413*/   OPC_RecordChild0, // #0 = $frB
/*10414*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10425
/*10417*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ffloor:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIMD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10435
/*10427*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIMS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10447
/*10437*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10439*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIM:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->10474
/*10451*/   OPC_RecordChild0, // #0 = $frB
/*10452*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10463
/*10455*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10473
/*10465*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->10500
/*10477*/   OPC_RecordChild0, // #0 = $frB
/*10478*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10489
/*10481*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->10499
/*10491*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRE),// ->10538
/*10503*/   OPC_RecordChild0, // #0 = $frB
/*10504*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10515
/*10507*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10525
/*10517*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10537
/*10527*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10529*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VREFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRSQRTE),// ->10576
/*10541*/   OPC_RecordChild0, // #0 = $frB
/*10542*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10553
/*10545*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRSQRTE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10563
/*10555*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRSQRTES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10575
/*10565*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10567*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VRSQRTEFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->10586
/*10579*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->10618
/*10589*/   OPC_RecordChild0, // #0 = $FRA
/*10590*/   OPC_RecordChild1, // #1 = $FRC
/*10591*/   OPC_RecordChild2, // #2 = $FRB
/*10592*/   OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10605
/*10595*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->10617
/*10607*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->10660
/*10621*/   OPC_RecordChild0, // #0 = $FRA
/*10622*/   OPC_RecordChild1, // #1 = $FRB
/*10623*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10635
/*10626*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10646
/*10637*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10659
/*10648*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10650*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->10689
/*10663*/   OPC_RecordChild0, // #0 = $FRA
/*10664*/   OPC_RecordChild1, // #1 = $FRB
/*10665*/   OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10677
/*10668*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10688
/*10679*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$FRA, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FMUL),// ->10755
/*10692*/   OPC_RecordChild0, // #0 = $FRA
/*10693*/   OPC_RecordChild1, // #1 = $FRC
/*10694*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10706
/*10697*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 f64:f64:$FRA, f64:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 f64:f64:$FRA, f64:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->10717
/*10708*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$FRA, f32:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 f32:f32:$FRA, f32:f32:$FRC)
            /*SwitchType*/ 35,  MVT::v4f32,// ->10754
/*10719*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10721*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*10728*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*10735*/     OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*10744*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 ?:v4f32:$vA, ?:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->10797
/*10758*/   OPC_RecordChild0, // #0 = $FRA
/*10759*/   OPC_RecordChild1, // #1 = $FRB
/*10760*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10772
/*10763*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10783
/*10774*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10796
/*10785*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10787*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->10813
/*10800*/   OPC_RecordChild0, // #0 = $src
/*10801*/   OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*10804*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 ?:f32:$src, F8RC:i32)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->10827
/*10816*/   OPC_RecordChild0, // #0 = $frB
/*10817*/   OPC_CheckType, MVT::f64,
/*10819*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->10841
/*10830*/   OPC_RecordChild0, // #0 = $frB
/*10831*/   OPC_CheckType, MVT::f64,
/*10833*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFIDU),// ->10855
/*10844*/   OPC_RecordChild0, // #0 = $frB
/*10845*/   OPC_CheckType, MVT::f64,
/*10847*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDU), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidu:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDU:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDS),// ->10867
/*10858*/   OPC_RecordChild0, // #0 = $frB
/*10859*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfids:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDUS),// ->10879
/*10870*/   OPC_RecordChild0, // #0 = $frB
/*10871*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDUS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidus:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDUS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDUZ),// ->10893
/*10882*/   OPC_RecordChild0, // #0 = $frB
/*10883*/   OPC_CheckType, MVT::f64,
/*10885*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiduz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWUZ),// ->10907
/*10896*/   OPC_RecordChild0, // #0 = $frB
/*10897*/   OPC_CheckType, MVT::f64,
/*10899*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwuz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FRINT),// ->10933
/*10910*/   OPC_RecordChild0, // #0 = $frB
/*10911*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10922
/*10914*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINDrint), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (frint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRINDrint:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10932
/*10924*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINSrint), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINSrint:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::FADDRTZ),// ->10949
/*10936*/   OPC_RecordChild0, // #0 = $FRA
/*10937*/   OPC_RecordChild1, // #1 = $FRB
/*10938*/   OPC_CheckType, MVT::f64,
/*10940*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 f64:f64:$FRA, f64:f64:$FRB)
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(PPCISD::VCMP),// ->11191
/*10953*/   OPC_RecordChild0, // #0 = $vA
/*10954*/   OPC_RecordChild1, // #1 = $vB
/*10955*/   OPC_MoveChild, 2,
/*10957*/   OPC_Scope, 16, /*->10975*/ // 13 children in Scope
/*10959*/     OPC_CheckInteger, 6, 
/*10961*/     OPC_MoveParent,
/*10962*/     OPC_CheckType, MVT::v16i8,
/*10964*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10966*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10975*/   /*Scope*/ 17, /*->10993*/
/*10976*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*10979*/     OPC_MoveParent,
/*10980*/     OPC_CheckType, MVT::v16i8,
/*10982*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10984*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10993*/   /*Scope*/ 17, /*->11011*/
/*10994*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*10997*/     OPC_MoveParent,
/*10998*/     OPC_CheckType, MVT::v16i8,
/*11000*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11002*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11011*/   /*Scope*/ 16, /*->11028*/
/*11012*/     OPC_CheckInteger, 70, 
/*11014*/     OPC_MoveParent,
/*11015*/     OPC_CheckType, MVT::v8i16,
/*11017*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11019*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11028*/   /*Scope*/ 17, /*->11046*/
/*11029*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11032*/     OPC_MoveParent,
/*11033*/     OPC_CheckType, MVT::v8i16,
/*11035*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11037*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11046*/   /*Scope*/ 17, /*->11064*/
/*11047*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11050*/     OPC_MoveParent,
/*11051*/     OPC_CheckType, MVT::v8i16,
/*11053*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11055*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11064*/   /*Scope*/ 17, /*->11082*/
/*11065*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11068*/     OPC_MoveParent,
/*11069*/     OPC_CheckType, MVT::v4i32,
/*11071*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11073*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11082*/   /*Scope*/ 17, /*->11100*/
/*11083*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11086*/     OPC_MoveParent,
/*11087*/     OPC_CheckType, MVT::v4i32,
/*11089*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11091*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11100*/   /*Scope*/ 17, /*->11118*/
/*11101*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11104*/     OPC_MoveParent,
/*11105*/     OPC_CheckType, MVT::v4i32,
/*11107*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11109*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11118*/   /*Scope*/ 17, /*->11136*/
/*11119*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11122*/     OPC_MoveParent,
/*11123*/     OPC_CheckType, MVT::v4f32,
/*11125*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11127*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11136*/   /*Scope*/ 17, /*->11154*/
/*11137*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11140*/     OPC_MoveParent,
/*11141*/     OPC_CheckType, MVT::v4f32,
/*11143*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11145*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11154*/   /*Scope*/ 17, /*->11172*/
/*11155*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11158*/     OPC_MoveParent,
/*11159*/     OPC_CheckType, MVT::v4f32,
/*11161*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11163*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11172*/   /*Scope*/ 17, /*->11190*/
/*11173*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11176*/     OPC_MoveParent,
/*11177*/     OPC_CheckType, MVT::v4f32,
/*11179*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11181*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11190*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,1/*251*/,  TARGET_VAL(PPCISD::VCMPo),// ->11446
/*11195*/   OPC_RecordChild0, // #0 = $vA
/*11196*/   OPC_RecordChild1, // #1 = $vB
/*11197*/   OPC_MoveChild, 2,
/*11199*/   OPC_Scope, 17, /*->11218*/ // 13 children in Scope
/*11201*/     OPC_CheckInteger, 6, 
/*11203*/     OPC_MoveParent,
/*11204*/     OPC_CheckType, MVT::v16i8,
/*11206*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11208*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11218*/   /*Scope*/ 18, /*->11237*/
/*11219*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11222*/     OPC_MoveParent,
/*11223*/     OPC_CheckType, MVT::v16i8,
/*11225*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11227*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11237*/   /*Scope*/ 18, /*->11256*/
/*11238*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11241*/     OPC_MoveParent,
/*11242*/     OPC_CheckType, MVT::v16i8,
/*11244*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11246*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11256*/   /*Scope*/ 17, /*->11274*/
/*11257*/     OPC_CheckInteger, 70, 
/*11259*/     OPC_MoveParent,
/*11260*/     OPC_CheckType, MVT::v8i16,
/*11262*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11264*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11274*/   /*Scope*/ 18, /*->11293*/
/*11275*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11278*/     OPC_MoveParent,
/*11279*/     OPC_CheckType, MVT::v8i16,
/*11281*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11283*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11293*/   /*Scope*/ 18, /*->11312*/
/*11294*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11297*/     OPC_MoveParent,
/*11298*/     OPC_CheckType, MVT::v8i16,
/*11300*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11302*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11312*/   /*Scope*/ 18, /*->11331*/
/*11313*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11316*/     OPC_MoveParent,
/*11317*/     OPC_CheckType, MVT::v4i32,
/*11319*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11321*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11331*/   /*Scope*/ 18, /*->11350*/
/*11332*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11335*/     OPC_MoveParent,
/*11336*/     OPC_CheckType, MVT::v4i32,
/*11338*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11340*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11350*/   /*Scope*/ 18, /*->11369*/
/*11351*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11354*/     OPC_MoveParent,
/*11355*/     OPC_CheckType, MVT::v4i32,
/*11357*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11359*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11369*/   /*Scope*/ 18, /*->11388*/
/*11370*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11373*/     OPC_MoveParent,
/*11374*/     OPC_CheckType, MVT::v4f32,
/*11376*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11378*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11388*/   /*Scope*/ 18, /*->11407*/
/*11389*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11392*/     OPC_MoveParent,
/*11393*/     OPC_CheckType, MVT::v4f32,
/*11395*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11397*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11407*/   /*Scope*/ 18, /*->11426*/
/*11408*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11411*/     OPC_MoveParent,
/*11412*/     OPC_CheckType, MVT::v4f32,
/*11414*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11416*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11426*/   /*Scope*/ 18, /*->11445*/
/*11427*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11430*/     OPC_MoveParent,
/*11431*/     OPC_CheckType, MVT::v4f32,
/*11433*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11435*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11445*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->11800
/*11450*/   OPC_Scope, 81, /*->11533*/ // 4 children in Scope
/*11452*/     OPC_RecordNode, // #0 = $UIMM
/*11453*/     OPC_RecordChild0, // #1 = $vB
/*11454*/     OPC_MoveChild, 1,
/*11456*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11459*/     OPC_MoveParent,
/*11460*/     OPC_CheckType, MVT::v16i8,
/*11462*/     OPC_Scope, 16, /*->11480*/ // 4 children in Scope
/*11464*/       OPC_CheckPredicate, 74, // Predicate_vspltb_shuffle
/*11466*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11468*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*11471*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11480*/     /*Scope*/ 16, /*->11497*/
/*11481*/       OPC_CheckPredicate, 75, // Predicate_vsplth_shuffle
/*11483*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11485*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*11488*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11497*/     /*Scope*/ 16, /*->11514*/
/*11498*/       OPC_CheckPredicate, 76, // Predicate_vspltw_shuffle
/*11500*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11502*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*11505*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11514*/     /*Scope*/ 17, /*->11532*/
/*11515*/       OPC_CheckPredicate, 77, // Predicate_vsldoi_unary_shuffle
/*11517*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11519*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*11522*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 ?:v16i8:$vA, ?:v16i8:$vA, (VSLDOI_unary_get_imm:i32 ?:v16i8:$in))
/*11532*/     0, /*End of Scope*/
/*11533*/   /*Scope*/ 123, /*->11657*/
/*11534*/     OPC_RecordChild0, // #0 = $vA
/*11535*/     OPC_MoveChild, 1,
/*11537*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11540*/     OPC_MoveParent,
/*11541*/     OPC_CheckType, MVT::v16i8,
/*11543*/     OPC_Scope, 13, /*->11558*/ // 8 children in Scope
/*11545*/       OPC_CheckPredicate, 78, // Predicate_vpkuwum_unary_shuffle
/*11547*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11549*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11558*/     /*Scope*/ 13, /*->11572*/
/*11559*/       OPC_CheckPredicate, 79, // Predicate_vpkuhum_unary_shuffle
/*11561*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11563*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11572*/     /*Scope*/ 13, /*->11586*/
/*11573*/       OPC_CheckPredicate, 80, // Predicate_vmrglb_unary_shuffle
/*11575*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11577*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11586*/     /*Scope*/ 13, /*->11600*/
/*11587*/       OPC_CheckPredicate, 81, // Predicate_vmrglh_unary_shuffle
/*11589*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11591*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11600*/     /*Scope*/ 13, /*->11614*/
/*11601*/       OPC_CheckPredicate, 82, // Predicate_vmrglw_unary_shuffle
/*11603*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11605*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11614*/     /*Scope*/ 13, /*->11628*/
/*11615*/       OPC_CheckPredicate, 83, // Predicate_vmrghb_unary_shuffle
/*11617*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11619*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11628*/     /*Scope*/ 13, /*->11642*/
/*11629*/       OPC_CheckPredicate, 84, // Predicate_vmrghh_unary_shuffle
/*11631*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11633*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11642*/     /*Scope*/ 13, /*->11656*/
/*11643*/       OPC_CheckPredicate, 85, // Predicate_vmrghw_unary_shuffle
/*11645*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11647*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11656*/     0, /*End of Scope*/
/*11657*/   /*Scope*/ 22, /*->11680*/
/*11658*/     OPC_RecordNode, // #0 = $SH
/*11659*/     OPC_RecordChild0, // #1 = $vA
/*11660*/     OPC_RecordChild1, // #2 = $vB
/*11661*/     OPC_CheckPredicate, 86, // Predicate_vsldoi_shuffle
/*11663*/     OPC_CheckType, MVT::v16i8,
/*11665*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11667*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*11670*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB):$SH))
/*11680*/   /*Scope*/ 118, /*->11799*/
/*11681*/     OPC_RecordChild0, // #0 = $vA
/*11682*/     OPC_RecordChild1, // #1 = $vB
/*11683*/     OPC_CheckType, MVT::v16i8,
/*11685*/     OPC_Scope, 13, /*->11700*/ // 8 children in Scope
/*11687*/       OPC_CheckPredicate, 87, // Predicate_vmrghb_shuffle
/*11689*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11691*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11700*/     /*Scope*/ 13, /*->11714*/
/*11701*/       OPC_CheckPredicate, 88, // Predicate_vmrghh_shuffle
/*11703*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11705*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11714*/     /*Scope*/ 13, /*->11728*/
/*11715*/       OPC_CheckPredicate, 89, // Predicate_vmrghw_shuffle
/*11717*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11719*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11728*/     /*Scope*/ 13, /*->11742*/
/*11729*/       OPC_CheckPredicate, 90, // Predicate_vmrglb_shuffle
/*11731*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11733*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11742*/     /*Scope*/ 13, /*->11756*/
/*11743*/       OPC_CheckPredicate, 91, // Predicate_vmrglh_shuffle
/*11745*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11747*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11756*/     /*Scope*/ 13, /*->11770*/
/*11757*/       OPC_CheckPredicate, 92, // Predicate_vmrglw_shuffle
/*11759*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11761*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11770*/     /*Scope*/ 13, /*->11784*/
/*11771*/       OPC_CheckPredicate, 93, // Predicate_vpkuhum_shuffle
/*11773*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11775*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11784*/     /*Scope*/ 13, /*->11798*/
/*11785*/       OPC_CheckPredicate, 94, // Predicate_vpkuwum_shuffle
/*11787*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11789*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11798*/     0, /*End of Scope*/
/*11799*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->11820
/*11803*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*11804*/   OPC_RecordChild1, // #1 = $amt
/*11805*/   OPC_MoveChild, 1,
/*11807*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11810*/   OPC_MoveParent,
/*11811*/   OPC_EmitMergeInputChains1_0,
/*11812*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 92,  TARGET_VAL(PPCISD::CALL),// ->11915
/*11823*/   OPC_RecordNode,   // #0 = 'PPCcall' chained node
/*11824*/   OPC_CaptureGlueInput,
/*11825*/   OPC_RecordChild1, // #1 = $func
/*11826*/   OPC_MoveChild, 1,
/*11828*/   OPC_SwitchOpcode /*3 cases */, 28,  TARGET_VAL(ISD::Constant),// ->11860
/*11832*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11846
/*11835*/       OPC_MoveParent,
/*11836*/       OPC_EmitMergeInputChains1_0,
/*11837*/       OPC_EmitConvertToTarget, 1,
/*11839*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i32):$func) - Complexity = 6
                // Dst: (BLA (imm:i32):$func)
              /*SwitchType*/ 11,  MVT::i64,// ->11859
/*11848*/       OPC_MoveParent,
/*11849*/       OPC_EmitMergeInputChains1_0,
/*11850*/       OPC_EmitConvertToTarget, 1,
/*11852*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11887
/*11863*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11875
/*11866*/       OPC_MoveParent,
/*11867*/       OPC_EmitMergeInputChains1_0,
/*11868*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL (tglobaladdr:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11886
/*11877*/       OPC_MoveParent,
/*11878*/       OPC_EmitMergeInputChains1_0,
/*11879*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11914
/*11890*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11902
/*11893*/       OPC_MoveParent,
/*11894*/       OPC_EmitMergeInputChains1_0,
/*11895*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL (texternalsym:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11913
/*11904*/       OPC_MoveParent,
/*11905*/       OPC_EmitMergeInputChains1_0,
/*11906*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 51,  TARGET_VAL(PPCISD::CALL_NOP),// ->11969
/*11918*/   OPC_RecordNode,   // #0 = 'PPCcall_nop' chained node
/*11919*/   OPC_CaptureGlueInput,
/*11920*/   OPC_RecordChild1, // #1 = $func
/*11921*/   OPC_MoveChild, 1,
/*11923*/   OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->11940
/*11927*/     OPC_CheckType, MVT::i64,
/*11929*/     OPC_MoveParent,
/*11930*/     OPC_EmitMergeInputChains1_0,
/*11931*/     OPC_EmitConvertToTarget, 1,
/*11933*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP (imm:i64):$func)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11954
/*11943*/     OPC_CheckType, MVT::i64,
/*11945*/     OPC_MoveParent,
/*11946*/     OPC_EmitMergeInputChains1_0,
/*11947*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11968
/*11957*/     OPC_CheckType, MVT::i64,
/*11959*/     OPC_MoveParent,
/*11960*/     OPC_EmitMergeInputChains1_0,
/*11961*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::BUILD_VECTOR),// ->12057
/*11972*/   OPC_Scope, 54, /*->12028*/ // 3 children in Scope
/*11974*/     OPC_RecordNode, // #0 = $SIMM
/*11975*/     OPC_SwitchType /*3 cases */, 15,  MVT::v16i8,// ->11993
/*11978*/       OPC_CheckPredicate, 95, // Predicate_vecspltisb
/*11980*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11982*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*11985*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 15,  MVT::v8i16,// ->12010
/*11995*/       OPC_CheckPredicate, 96, // Predicate_vecspltish
/*11997*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11999*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*12002*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 15,  MVT::v4i32,// ->12027
/*12012*/       OPC_CheckPredicate, 97, // Predicate_vecspltisw
/*12014*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12016*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*12019*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*12028*/   /*Scope*/ 13, /*->12042*/
/*12029*/     OPC_CheckPredicate, 98, // Predicate_immAllZerosV
/*12031*/     OPC_CheckType, MVT::v4i32,
/*12033*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12035*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*12042*/   /*Scope*/ 13, /*->12056*/
/*12043*/     OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*12045*/     OPC_CheckType, MVT::v4i32,
/*12047*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12049*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
              // Dst: (V_SETALLONES:v4i32)
/*12056*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::BITCAST),// ->12167
/*12060*/   OPC_RecordChild0, // #0 = $src
/*12061*/   OPC_Scope, 25, /*->12088*/ // 4 children in Scope
/*12063*/     OPC_CheckChild0Type, MVT::v8i16,
/*12065*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12073
/*12068*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12070*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12080
/*12075*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12077*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12087
/*12082*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12084*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12088*/   /*Scope*/ 25, /*->12114*/
/*12089*/     OPC_CheckChild0Type, MVT::v4i32,
/*12091*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12099
/*12094*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12096*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12106
/*12101*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12103*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12113
/*12108*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12110*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12114*/   /*Scope*/ 25, /*->12140*/
/*12115*/     OPC_CheckChild0Type, MVT::v4f32,
/*12117*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12125
/*12120*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12122*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12132
/*12127*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12129*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12139
/*12134*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12136*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*12140*/   /*Scope*/ 25, /*->12166*/
/*12141*/     OPC_CheckChild0Type, MVT::v16i8,
/*12143*/     OPC_SwitchType /*3 cases */, 5,  MVT::v8i16,// ->12151
/*12146*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12148*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12158
/*12153*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12155*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12165
/*12160*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12162*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12166*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::RET_FLAG),// ->12179
/*12170*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*12171*/   OPC_CaptureGlueInput,
/*12172*/   OPC_EmitMergeInputChains1_0,
/*12173*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->12198
/*12182*/   OPC_RecordNode,   // #0 = 'br' chained node
/*12183*/   OPC_RecordChild1, // #1 = $dst
/*12184*/   OPC_MoveChild, 1,
/*12186*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12189*/   OPC_MoveParent,
/*12190*/   OPC_EmitMergeInputChains1_0,
/*12191*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::BCTRL),// ->12225
/*12201*/   OPC_RecordNode,   // #0 = 'PPCbctrl' chained node
/*12202*/   OPC_CaptureGlueInput,
/*12203*/   OPC_Scope, 9, /*->12214*/ // 2 children in Scope
/*12205*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*12207*/     OPC_EmitMergeInputChains1_0,
/*12208*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL)
/*12214*/   /*Scope*/ 9, /*->12224*/
/*12215*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*12217*/     OPC_EmitMergeInputChains1_0,
/*12218*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL8)
/*12224*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->12236
/*12228*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*12229*/   OPC_EmitMergeInputChains1_0,
/*12230*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->12249
/*12239*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*12240*/   OPC_CaptureGlueInput,
/*12241*/   OPC_EmitMergeInputChains1_0,
/*12242*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->12262
/*12252*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*12253*/   OPC_CaptureGlueInput,
/*12254*/   OPC_EmitMergeInputChains1_0,
/*12255*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->12294
/*12265*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*12266*/   OPC_CaptureGlueInput,
/*12267*/   OPC_RecordChild1, // #1 = $rS
/*12268*/   OPC_Scope, 11, /*->12281*/ // 2 children in Scope
/*12270*/     OPC_CheckChild1Type, MVT::i32,
/*12272*/     OPC_EmitMergeInputChains1_0,
/*12273*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i32:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 i32:i32:$rS)
/*12281*/   /*Scope*/ 11, /*->12293*/
/*12282*/     OPC_CheckChild1Type, MVT::i64,
/*12284*/     OPC_EmitMergeInputChains1_0,
/*12285*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i64:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 i64:i64:$rS)
/*12293*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VPERM),// ->12314
/*12297*/   OPC_RecordChild0, // #0 = $vA
/*12298*/   OPC_RecordChild1, // #1 = $vB
/*12299*/   OPC_RecordChild2, // #2 = $vC
/*12300*/   OPC_CheckType, MVT::v16i8,
/*12302*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12304*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v16i8:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 ?:v16i8:$vA, ?:v16i8:$vB, ?:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_SINT),// ->12332
/*12317*/   OPC_RecordChild0, // #0 = $vA
/*12318*/   OPC_CheckChild0Type, MVT::v4f32,
/*12320*/   OPC_CheckType, MVT::v4i32,
/*12322*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12324*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_UINT),// ->12350
/*12335*/   OPC_RecordChild0, // #0 = $vA
/*12336*/   OPC_CheckChild0Type, MVT::v4f32,
/*12338*/   OPC_CheckType, MVT::v4i32,
/*12340*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12342*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VMADDFP),// ->12370
/*12353*/   OPC_RecordChild0, // #0 = $A
/*12354*/   OPC_RecordChild1, // #1 = $B
/*12355*/   OPC_RecordChild2, // #2 = $C
/*12356*/   OPC_CheckType, MVT::v4f32,
/*12358*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12360*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VNMSUBFP),// ->12390
/*12373*/   OPC_RecordChild0, // #0 = $A
/*12374*/   OPC_RecordChild1, // #1 = $B
/*12375*/   OPC_RecordChild2, // #2 = $C
/*12376*/   OPC_CheckType, MVT::v4f32,
/*12378*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12380*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SINT_TO_FP),// ->12408
/*12393*/   OPC_RecordChild0, // #0 = $vA
/*12394*/   OPC_CheckChild0Type, MVT::v4i32,
/*12396*/   OPC_CheckType, MVT::v4f32,
/*12398*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12400*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::UINT_TO_FP),// ->12426
/*12411*/   OPC_RecordChild0, // #0 = $vA
/*12412*/   OPC_CheckChild0Type, MVT::v4i32,
/*12414*/   OPC_CheckType, MVT::v4f32,
/*12416*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12418*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->12442
/*12429*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*12430*/   OPC_CaptureGlueInput,
/*12431*/   OPC_RecordChild1, // #1 = $reg
/*12432*/   OPC_CheckChild1Type, MVT::i64,
/*12434*/   OPC_EmitMergeInputChains1_0,
/*12435*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc i64:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc i64:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->12454
/*12445*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*12446*/   OPC_CaptureGlueInput,
/*12447*/   OPC_EmitMergeInputChains1_0,
/*12448*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12456 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 113
  // #OPC_RecordNode                     = 45
  // #OPC_RecordChild                    = 533
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 155
  // #OPC_MoveParent                     = 373
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 245
  // #OPC_CheckPredicate                 = 199
  // #OPC_CheckOpcode                    = 92
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 178
  // #OPC_SwitchType                     = 98
  // #OPC_CheckChildType                 = 55
  // #OPC_CheckInteger                   = 197
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 9
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 74
  // #OPC_EmitMergeInputChains           = 203
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 12
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 641

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (PPCSubTarget.hasAltivec());
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_aligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 16: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_aligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 18: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 19: { // Predicate_unaligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 20: { // Predicate_unaligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 21: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 22: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 23: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 25: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 26: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 27: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 30: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 31: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 32: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 33: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 34: { // Predicate_aligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 35: { // Predicate_unaligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() < 4;

  }
  case 36: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 37: { // Predicate_aligned4pre_store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 38: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 63: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 64: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 65: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 66: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 67: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 68: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 69: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 70: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 71: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 72: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 73: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 74: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 75: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 76: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 77: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 78: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 79: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 80: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 81: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 82: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 83: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 84: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 85: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 86: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 87: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 88: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 89: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 90: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 91: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 92: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 93: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 94: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 95: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 96: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 97: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 98: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddr(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

