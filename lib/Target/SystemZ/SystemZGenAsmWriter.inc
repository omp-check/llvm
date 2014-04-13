/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Writer Source Fragment                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void SystemZInstPrinter::printInstruction(const MCInst *MI, raw_ostream &O) {
  static const uint32_t OpInfo[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// PROLOG_LABEL
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    1876U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    1869U,	// BUNDLE
    1886U,	// LIFETIME_START
    1856U,	// LIFETIME_END
    2050U,	// A
    2059U,	// ADB
    134176U,	// ADBR
    0U,	// ADJCALLSTACKDOWN
    0U,	// ADJCALLSTACKUP
    0U,	// ADJDYNALLOC
    2104U,	// AEB
    134272U,	// AEBR
    0U,	// AEXT128_64
    264779U,	// AFI
    2382U,	// AG
    2272U,	// AGF
    264789U,	// AGFI
    134551U,	// AGFR
    395935U,	// AGHI
    134606U,	// AGR
    21223U,	// AGSI
    2508U,	// AH
    395925U,	// AHI
    3764U,	// AHY
    2853U,	// AL
    2170U,	// ALC
    2399U,	// ALCG
    134618U,	// ALCGR
    134504U,	// ALCR
    526973U,	// ALFI
    2409U,	// ALG
    2282U,	// ALGF
    526945U,	// ALGFI
    134564U,	// ALGFR
    134631U,	// ALGR
    134710U,	// ALR
    3817U,	// ALY
    134171U,	// AR
    21218U,	// ASI
    0U,	// ATOMIC_CMP_SWAPW
    0U,	// ATOMIC_LOADW_AFI
    0U,	// ATOMIC_LOADW_AR
    0U,	// ATOMIC_LOADW_MAX
    0U,	// ATOMIC_LOADW_MIN
    0U,	// ATOMIC_LOADW_NILH
    0U,	// ATOMIC_LOADW_NILHi
    0U,	// ATOMIC_LOADW_NR
    0U,	// ATOMIC_LOADW_NRi
    0U,	// ATOMIC_LOADW_OILH
    0U,	// ATOMIC_LOADW_OR
    0U,	// ATOMIC_LOADW_SR
    0U,	// ATOMIC_LOADW_UMAX
    0U,	// ATOMIC_LOADW_UMIN
    0U,	// ATOMIC_LOADW_XILF
    0U,	// ATOMIC_LOADW_XR
    0U,	// ATOMIC_LOAD_AFI
    0U,	// ATOMIC_LOAD_AGFI
    0U,	// ATOMIC_LOAD_AGHI
    0U,	// ATOMIC_LOAD_AGR
    0U,	// ATOMIC_LOAD_AHI
    0U,	// ATOMIC_LOAD_AR
    0U,	// ATOMIC_LOAD_MAX_32
    0U,	// ATOMIC_LOAD_MAX_64
    0U,	// ATOMIC_LOAD_MIN_32
    0U,	// ATOMIC_LOAD_MIN_64
    0U,	// ATOMIC_LOAD_NGR
    0U,	// ATOMIC_LOAD_NGRi
    0U,	// ATOMIC_LOAD_NIHF
    0U,	// ATOMIC_LOAD_NIHFi
    0U,	// ATOMIC_LOAD_NIHH
    0U,	// ATOMIC_LOAD_NIHHi
    0U,	// ATOMIC_LOAD_NIHL
    0U,	// ATOMIC_LOAD_NIHLi
    0U,	// ATOMIC_LOAD_NILF
    0U,	// ATOMIC_LOAD_NILF32
    0U,	// ATOMIC_LOAD_NILF32i
    0U,	// ATOMIC_LOAD_NILFi
    0U,	// ATOMIC_LOAD_NILH
    0U,	// ATOMIC_LOAD_NILH32
    0U,	// ATOMIC_LOAD_NILH32i
    0U,	// ATOMIC_LOAD_NILHi
    0U,	// ATOMIC_LOAD_NILL
    0U,	// ATOMIC_LOAD_NILL32
    0U,	// ATOMIC_LOAD_NILL32i
    0U,	// ATOMIC_LOAD_NILLi
    0U,	// ATOMIC_LOAD_NR
    0U,	// ATOMIC_LOAD_NRi
    0U,	// ATOMIC_LOAD_OGR
    0U,	// ATOMIC_LOAD_OIHF
    0U,	// ATOMIC_LOAD_OIHH
    0U,	// ATOMIC_LOAD_OIHL
    0U,	// ATOMIC_LOAD_OILF
    0U,	// ATOMIC_LOAD_OILF32
    0U,	// ATOMIC_LOAD_OILH
    0U,	// ATOMIC_LOAD_OILH32
    0U,	// ATOMIC_LOAD_OILL
    0U,	// ATOMIC_LOAD_OILL32
    0U,	// ATOMIC_LOAD_OR
    0U,	// ATOMIC_LOAD_SGR
    0U,	// ATOMIC_LOAD_SR
    0U,	// ATOMIC_LOAD_UMAX_32
    0U,	// ATOMIC_LOAD_UMAX_64
    0U,	// ATOMIC_LOAD_UMIN_32
    0U,	// ATOMIC_LOAD_UMIN_64
    0U,	// ATOMIC_LOAD_XGR
    0U,	// ATOMIC_LOAD_XIHF
    0U,	// ATOMIC_LOAD_XILF
    0U,	// ATOMIC_LOAD_XILF32
    0U,	// ATOMIC_LOAD_XR
    0U,	// ATOMIC_SWAPW
    0U,	// ATOMIC_SWAP_32
    0U,	// ATOMIC_SWAP_64
    134416U,	// AXBR
    3727U,	// AY
    659026U,	// AsmBASR
    659054U,	// AsmBRAS
    658428U,	// AsmBRASL
    6276U,	// AsmBRC
    6953U,	// AsmBRCL
    35618U,	// AsmJ
    34996U,	// AsmJE
    34967U,	// AsmJEL
    35325U,	// AsmJH
    34978U,	// AsmJHE
    34972U,	// AsmJHEL
    35289U,	// AsmJHL
    35665U,	// AsmJL
    35006U,	// AsmJLE
    35000U,	// AsmJLEL
    35360U,	// AsmJLH
    35329U,	// AsmJLHL
    35635U,	// AsmJLL
    35030U,	// AsmJNE
    35024U,	// AsmJNEL
    35393U,	// AsmJNH
    34990U,	// AsmJNHE
    34983U,	// AsmJNHEL
    35387U,	// AsmJNHL
    35710U,	// AsmJNL
    35018U,	// AsmJNLE
    35011U,	// AsmJNLEL
    35377U,	// AsmJNLH
    35370U,	// AsmJNLHL
    35704U,	// AsmJNLL
    35861U,	// AsmJNO
    35855U,	// AsmJNOL
    35851U,	// AsmJO
    35846U,	// AsmJOL
    36640U,	// BASR
    35874U,	// BR
    10028U,	// BRAS
    10003U,	// BRASL
    12144U,	// BRC
    12141U,	// BRCL
    788595U,	// C
    788496U,	// CDB
    658471U,	// CDBR
    658650U,	// CDFBR
    658671U,	// CDGBR
    788541U,	// CEB
    658567U,	// CEBR
    658657U,	// CEFBR
    658678U,	// CEGBR
    920634U,	// CFDBR
    920738U,	// CFEBR
    1051216U,	// CFI
    920875U,	// CFXBR
    788833U,	// CG
    920641U,	// CGDBR
    920745U,	// CGEBR
    788709U,	// CGF
    1051227U,	// CGFI
    658846U,	// CGFR
    658318U,	// CGFRL
    788948U,	// CGH
    1182373U,	// CGHI
    658367U,	// CGHRL
    54011U,	// CGHSI
    658908U,	// CGR
    658341U,	// CGRL
    920882U,	// CGXBR
    788944U,	// CH
    54026U,	// CHHSI
    1182362U,	// CHI
    658361U,	// CHRL
    53997U,	// CHSI
    790201U,	// CHY
    789291U,	// CL
    70387U,	// CLFHSI
    1313411U,	// CLFI
    788846U,	// CLG
    788720U,	// CLGF
    1313384U,	// CLGFI
    658859U,	// CLGFR
    658325U,	// CLGFRL
    658374U,	// CLGHRL
    70402U,	// CLGHSI
    658925U,	// CLGR
    658347U,	// CLGRL
    70417U,	// CLHHSI
    658390U,	// CLHRL
    86741U,	// CLI
    87758U,	// CLIY
    659003U,	// CLR
    658411U,	// CLRL
    790254U,	// CLY
    2231679U,	// CPSDRdd
    2231679U,	// CPSDRds
    2231679U,	// CPSDRsd
    2231679U,	// CPSDRss
    658788U,	// CR
    658313U,	// CRL
    6426228U,	// CS
    6424999U,	// CSG
    6426368U,	// CSY
    658711U,	// CXBR
    658664U,	// CXFBR
    658691U,	// CXGBR
    790164U,	// CY
    2069U,	// DDB
    134189U,	// DDBR
    2115U,	// DEB
    134286U,	// DEBR
    2863U,	// DL
    2419U,	// DLG
    134643U,	// DLGR
    134720U,	// DLR
    2476U,	// DSG
    2306U,	// DSGF
    134592U,	// DSGFR
    134673U,	// DSGR
    134430U,	// DXBR
    1444890U,	// EAR
    920648U,	// FIDBR
    920752U,	// FIEBR
    920889U,	// FIXBR
    658954U,	// FLOGR
    2166U,	// IC
    2166U,	// IC32
    3731U,	// IC32Y
    3731U,	// ICY
    526606U,	// IIHF
    1575396U,	// IIHH
    1575736U,	// IIHL
    526637U,	// IILF
    1313069U,	// IILF32
    1575431U,	// IILH
    1575431U,	// IILH32
    1575765U,	// IILL
    1575765U,	// IILL32
    35618U,	// J
    35173U,	// JG
    789286U,	// L
    0U,	// L128
    788481U,	// LA
    658307U,	// LARL
    790158U,	// LAY
    788588U,	// LB
    658699U,	// LBR
    658470U,	// LCDBR
    658566U,	// LCEBR
    658845U,	// LCGFR
    658907U,	// LCGR
    658793U,	// LCR
    658710U,	// LCXBR
    788622U,	// LD
    788546U,	// LDEB
    658573U,	// LDEBR
    658913U,	// LDGR
    658810U,	// LDR
    658717U,	// LDXBR
    790174U,	// LDY
    788666U,	// LE
    658483U,	// LEDBR
    658828U,	// LER
    658724U,	// LEXBR
    790185U,	// LEY
    788842U,	// LG
    788582U,	// LGB
    658685U,	// LGBR
    658804U,	// LGDR
    788715U,	// LGF
    1051234U,	// LGFI
    658853U,	// LGFR
    658326U,	// LGFRL
    788959U,	// LGH
    1182379U,	// LGHI
    658986U,	// LGHR
    658375U,	// LGHRL
    658920U,	// LGR
    658348U,	// LGRL
    788995U,	// LH
    1182405U,	// LHI
    658993U,	// LHR
    658391U,	// LHRL
    790206U,	// LHY
    788607U,	// LLC
    658798U,	// LLCR
    788592U,	// LLGC
    658785U,	// LLGCR
    788726U,	// LLGF
    658866U,	// LLGFR
    658333U,	// LLGFRL
    788958U,	// LLGH
    658985U,	// LLGHR
    658382U,	// LLGHRL
    789029U,	// LLH
    658992U,	// LLHR
    658397U,	// LLHRL
    1313044U,	// LLIHF
    1706474U,	// LLIHH
    1706814U,	// LLIHL
    1313075U,	// LLILF
    1706509U,	// LLILH
    1706843U,	// LLILL
    11143572U,	// LMG
    658517U,	// LNDBR
    658615U,	// LNEBR
    658758U,	// LNXBR
    658524U,	// LPDBR
    658622U,	// LPEBR
    658765U,	// LPXBR
    658999U,	// LR
    658412U,	// LRL
    790144U,	// LRV
    788923U,	// LRVG
    658973U,	// LRVGR
    659037U,	// LRVR
    0U,	// LX
    788523U,	// LXDB
    658545U,	// LXDBR
    788576U,	// LXEB
    658643U,	// LXEBR
    659043U,	// LXR
    790250U,	// LY
    36230U,	// LZDR
    36241U,	// LZER
    36456U,	// LZXR
    14813194U,	// MADB
    19008543U,	// MADBR
    14813239U,	// MAEB
    19008639U,	// MAEBR
    2074U,	// MDB
    134223U,	// MDBR
    2120U,	// MDEB
    134292U,	// MDEBR
    2126U,	// MEEB
    134299U,	// MEEBR
    395953U,	// MGHI
    2615U,	// MH
    395978U,	// MHI
    3779U,	// MHY
    2436U,	// MLG
    134649U,	// MLGR
    3704U,	// MS
    14813221U,	// MSDB
    19008618U,	// MSDBR
    14813274U,	// MSEB
    19008716U,	// MSEBR
    264847U,	// MSFI
    2481U,	// MSG
    2312U,	// MSGF
    264822U,	// MSGFI
    134599U,	// MSGFR
    134679U,	// MSGR
    134744U,	// MSR
    3845U,	// MSY
    53943U,	// MVGHI
    53950U,	// MVHHI
    53967U,	// MVHI
    86809U,	// MVI
    87774U,	// MVIY
    134464U,	// MXBR
    2097U,	// MXDB
    134264U,	// MXDBR
    3075U,	// N
    2463U,	// NG
    134661U,	// NGR
    86746U,	// NI
    526619U,	// NIHF
    1575409U,	// NIHH
    1575749U,	// NIHL
    526650U,	// NILF
    526650U,	// NILF32
    1575444U,	// NILH
    1575444U,	// NILH32
    1575778U,	// NILL
    1575778U,	// NILL32
    87764U,	// NIY
    134730U,	// NR
    3832U,	// NY
    3080U,	// O
    2467U,	// OG
    134668U,	// OGR
    86750U,	// OI
    526625U,	// OIHF
    1575415U,	// OIHH
    1575755U,	// OIHL
    526656U,	// OILF
    526656U,	// OILF32
    1575450U,	// OILH
    1575450U,	// OILH32
    1575784U,	// OILL
    1575784U,	// OILL32
    87769U,	// OIY
    134734U,	// OR
    3836U,	// OY
    1848U,	// RET
    23202136U,	// RISBG
    23202136U,	// RISBG32
    11144046U,	// RLL
    11143544U,	// RLLG
    3697U,	// S
    2086U,	// SDB
    134251U,	// SDBR
    2139U,	// SEB
    134349U,	// SEBR
    2472U,	// SG
    2307U,	// SGF
    134593U,	// SGFR
    134674U,	// SGR
    3071U,	// SL
    2155U,	// SLB
    2386U,	// SLBG
    134410U,	// SLBR
    526985U,	// SLFI
    2447U,	// SLG
    134611U,	// SLGBR
    2300U,	// SLGF
    526959U,	// SLGFI
    134585U,	// SLGFR
    134655U,	// SLGR
    1837939U,	// SLL
    11143550U,	// SLLG
    134725U,	// SLR
    3827U,	// SLY
    788511U,	// SQDB
    658531U,	// SQDBR
    788564U,	// SQEB
    658629U,	// SQEBR
    658772U,	// SQXBR
    134740U,	// SR
    1837061U,	// SRA
    11143500U,	// SRAG
    1838065U,	// SRL
    11143561U,	// SRLG
    790140U,	// ST
    0U,	// ST128
    790140U,	// ST32
    790282U,	// ST32Y
    788617U,	// STC
    788617U,	// STC32
    790168U,	// STC32Y
    790168U,	// STCY
    788626U,	// STD
    790179U,	// STDY
    788699U,	// STE
    790190U,	// STEY
    788918U,	// STG
    658354U,	// STGRL
    789062U,	// STH
    789062U,	// STH32
    790216U,	// STH32Y
    658404U,	// STHRL
    658404U,	// STHRL32
    790216U,	// STHY
    11143577U,	// STMG
    658422U,	// STRL
    658422U,	// STRL32
    790149U,	// STRV
    788929U,	// STRVG
    0U,	// STX
    790282U,	// STY
    134491U,	// SXBR
    3841U,	// SY
    0U,	// Select32
    0U,	// Select64
    0U,	// SelectF128
    0U,	// SelectF32
    0U,	// SelectF64
    3723U,	// X
    2504U,	// XG
    134692U,	// XGR
    86814U,	// XI
    526631U,	// XIHF
    526662U,	// XILF
    526662U,	// XILF32
    87780U,	// XIY
    134756U,	// XR
    3855U,	// XY
    0U,	// ZEXT128_32
    0U,	// ZEXT128_64
    0U
  };

  const char AsmStrs[] = {
  /* 0 */ 'l', 'a', 9, 0,
  /* 4 */ 's', 'r', 'a', 9, 0,
  /* 9 */ 'm', 'a', 'd', 'b', 9, 0,
  /* 15 */ 'c', 'd', 'b', 9, 0,
  /* 20 */ 'd', 'd', 'b', 9, 0,
  /* 25 */ 'm', 'd', 'b', 9, 0,
  /* 30 */ 's', 'q', 'd', 'b', 9, 0,
  /* 36 */ 'm', 's', 'd', 'b', 9, 0,
  /* 42 */ 'l', 'x', 'd', 'b', 9, 0,
  /* 48 */ 'm', 'x', 'd', 'b', 9, 0,
  /* 54 */ 'm', 'a', 'e', 'b', 9, 0,
  /* 60 */ 'c', 'e', 'b', 9, 0,
  /* 65 */ 'l', 'd', 'e', 'b', 9, 0,
  /* 71 */ 'm', 'd', 'e', 'b', 9, 0,
  /* 77 */ 'm', 'e', 'e', 'b', 9, 0,
  /* 83 */ 's', 'q', 'e', 'b', 9, 0,
  /* 89 */ 'm', 's', 'e', 'b', 9, 0,
  /* 95 */ 'l', 'x', 'e', 'b', 9, 0,
  /* 101 */ 'l', 'g', 'b', 9, 0,
  /* 106 */ 's', 'l', 'b', 9, 0,
  /* 111 */ 'l', 'l', 'g', 'c', 9, 0,
  /* 117 */ 'i', 'c', 9, 0,
  /* 121 */ 'a', 'l', 'c', 9, 0,
  /* 126 */ 'l', 'l', 'c', 9, 0,
  /* 131 */ 'b', 'r', 'c', 9, 0,
  /* 136 */ 's', 't', 'c', 9, 0,
  /* 141 */ 'l', 'd', 9, 0,
  /* 145 */ 's', 't', 'd', 9, 0,
  /* 150 */ 'j', 'g', 'e', 9, 0,
  /* 155 */ 'j', 'g', 'h', 'e', 9, 0,
  /* 161 */ 'j', 'h', 'e', 9, 0,
  /* 166 */ 'j', 'g', 'n', 'h', 'e', 9, 0,
  /* 173 */ 'j', 'n', 'h', 'e', 9, 0,
  /* 179 */ 'j', 'e', 9, 0,
  /* 183 */ 'j', 'g', 'l', 'e', 9, 0,
  /* 189 */ 'j', 'l', 'e', 9, 0,
  /* 194 */ 'j', 'g', 'n', 'l', 'e', 9, 0,
  /* 201 */ 'j', 'n', 'l', 'e', 9, 0,
  /* 207 */ 'j', 'g', 'n', 'e', 9, 0,
  /* 213 */ 'j', 'n', 'e', 9, 0,
  /* 218 */ 's', 't', 'e', 9, 0,
  /* 223 */ 'a', 'g', 'f', 9, 0,
  /* 228 */ 'c', 'g', 'f', 9, 0,
  /* 233 */ 'a', 'l', 'g', 'f', 9, 0,
  /* 239 */ 'c', 'l', 'g', 'f', 9, 0,
  /* 245 */ 'l', 'l', 'g', 'f', 9, 0,
  /* 251 */ 's', 'l', 'g', 'f', 9, 0,
  /* 257 */ 'd', 's', 'g', 'f', 9, 0,
  /* 263 */ 'm', 's', 'g', 'f', 9, 0,
  /* 269 */ 'i', 'i', 'h', 'f', 9, 0,
  /* 275 */ 'l', 'l', 'i', 'h', 'f', 9, 0,
  /* 282 */ 'n', 'i', 'h', 'f', 9, 0,
  /* 288 */ 'o', 'i', 'h', 'f', 9, 0,
  /* 294 */ 'x', 'i', 'h', 'f', 9, 0,
  /* 300 */ 'i', 'i', 'l', 'f', 9, 0,
  /* 306 */ 'l', 'l', 'i', 'l', 'f', 9, 0,
  /* 313 */ 'n', 'i', 'l', 'f', 9, 0,
  /* 319 */ 'o', 'i', 'l', 'f', 9, 0,
  /* 325 */ 'x', 'i', 'l', 'f', 9, 0,
  /* 331 */ 's', 'r', 'a', 'g', 9, 0,
  /* 337 */ 's', 'l', 'b', 'g', 9, 0,
  /* 343 */ 'r', 'i', 's', 'b', 'g', 9, 0,
  /* 350 */ 'a', 'l', 'c', 'g', 9, 0,
  /* 356 */ 'j', 'g', 9, 0,
  /* 360 */ 'a', 'l', 'g', 9, 0,
  /* 365 */ 'c', 'l', 'g', 9, 0,
  /* 370 */ 'd', 'l', 'g', 9, 0,
  /* 375 */ 'r', 'l', 'l', 'g', 9, 0,
  /* 381 */ 's', 'l', 'l', 'g', 9, 0,
  /* 387 */ 'm', 'l', 'g', 9, 0,
  /* 392 */ 's', 'r', 'l', 'g', 9, 0,
  /* 398 */ 's', 'l', 'g', 9, 0,
  /* 403 */ 'l', 'm', 'g', 9, 0,
  /* 408 */ 's', 't', 'm', 'g', 9, 0,
  /* 414 */ 'n', 'g', 9, 0,
  /* 418 */ 'o', 'g', 9, 0,
  /* 422 */ 'c', 's', 'g', 9, 0,
  /* 427 */ 'd', 's', 'g', 9, 0,
  /* 432 */ 'm', 's', 'g', 9, 0,
  /* 437 */ 's', 't', 'g', 9, 0,
  /* 442 */ 'l', 'r', 'v', 'g', 9, 0,
  /* 448 */ 's', 't', 'r', 'v', 'g', 9, 0,
  /* 455 */ 'x', 'g', 9, 0,
  /* 459 */ 'a', 'h', 9, 0,
  /* 463 */ 'c', 'h', 9, 0,
  /* 467 */ 'c', 'g', 'h', 9, 0,
  /* 472 */ 'j', 'g', 'h', 9, 0,
  /* 477 */ 'l', 'l', 'g', 'h', 9, 0,
  /* 483 */ 'i', 'i', 'h', 'h', 9, 0,
  /* 489 */ 'l', 'l', 'i', 'h', 'h', 9, 0,
  /* 496 */ 'n', 'i', 'h', 'h', 9, 0,
  /* 502 */ 'o', 'i', 'h', 'h', 9, 0,
  /* 508 */ 'j', 'h', 9, 0,
  /* 512 */ 'j', 'g', 'l', 'h', 9, 0,
  /* 518 */ 'i', 'i', 'l', 'h', 9, 0,
  /* 524 */ 'l', 'l', 'i', 'l', 'h', 9, 0,
  /* 531 */ 'n', 'i', 'l', 'h', 9, 0,
  /* 537 */ 'o', 'i', 'l', 'h', 9, 0,
  /* 543 */ 'j', 'l', 'h', 9, 0,
  /* 548 */ 'l', 'l', 'h', 9, 0,
  /* 553 */ 'j', 'g', 'n', 'l', 'h', 9, 0,
  /* 560 */ 'j', 'n', 'l', 'h', 9, 0,
  /* 566 */ 'm', 'h', 9, 0,
  /* 570 */ 'j', 'g', 'n', 'h', 9, 0,
  /* 576 */ 'j', 'n', 'h', 9, 0,
  /* 581 */ 's', 't', 'h', 9, 0,
  /* 586 */ 'a', 'f', 'i', 9, 0,
  /* 591 */ 'c', 'f', 'i', 9, 0,
  /* 596 */ 'a', 'g', 'f', 'i', 9, 0,
  /* 602 */ 'c', 'g', 'f', 'i', 9, 0,
  /* 608 */ 'a', 'l', 'g', 'f', 'i', 9, 0,
  /* 615 */ 'c', 'l', 'g', 'f', 'i', 9, 0,
  /* 622 */ 's', 'l', 'g', 'f', 'i', 9, 0,
  /* 629 */ 'm', 's', 'g', 'f', 'i', 9, 0,
  /* 636 */ 'a', 'l', 'f', 'i', 9, 0,
  /* 642 */ 'c', 'l', 'f', 'i', 9, 0,
  /* 648 */ 's', 'l', 'f', 'i', 9, 0,
  /* 654 */ 'm', 's', 'f', 'i', 9, 0,
  /* 660 */ 'a', 'h', 'i', 9, 0,
  /* 665 */ 'c', 'h', 'i', 9, 0,
  /* 670 */ 'a', 'g', 'h', 'i', 9, 0,
  /* 676 */ 'c', 'g', 'h', 'i', 9, 0,
  /* 682 */ 'l', 'g', 'h', 'i', 9, 0,
  /* 688 */ 'm', 'g', 'h', 'i', 9, 0,
  /* 694 */ 'm', 'v', 'g', 'h', 'i', 9, 0,
  /* 701 */ 'm', 'v', 'h', 'h', 'i', 9, 0,
  /* 708 */ 'l', 'h', 'i', 9, 0,
  /* 713 */ 'm', 'h', 'i', 9, 0,
  /* 718 */ 'm', 'v', 'h', 'i', 9, 0,
  /* 724 */ 'c', 'l', 'i', 9, 0,
  /* 729 */ 'n', 'i', 9, 0,
  /* 733 */ 'o', 'i', 9, 0,
  /* 737 */ 'a', 's', 'i', 9, 0,
  /* 742 */ 'a', 'g', 's', 'i', 9, 0,
  /* 748 */ 'c', 'h', 's', 'i', 9, 0,
  /* 754 */ 'c', 'l', 'f', 'h', 's', 'i', 9, 0,
  /* 762 */ 'c', 'g', 'h', 's', 'i', 9, 0,
  /* 769 */ 'c', 'l', 'g', 'h', 's', 'i', 9, 0,
  /* 777 */ 'c', 'h', 'h', 's', 'i', 9, 0,
  /* 784 */ 'c', 'l', 'h', 'h', 's', 'i', 9, 0,
  /* 792 */ 'm', 'v', 'i', 9, 0,
  /* 797 */ 'x', 'i', 9, 0,
  /* 801 */ 'j', 9, 0,
  /* 804 */ 'a', 'l', 9, 0,
  /* 808 */ 'b', 'r', 'c', 'l', 9, 0,
  /* 814 */ 'd', 'l', 9, 0,
  /* 818 */ 'j', 'g', 'l', 9, 0,
  /* 823 */ 'i', 'i', 'h', 'l', 9, 0,
  /* 829 */ 'l', 'l', 'i', 'h', 'l', 9, 0,
  /* 836 */ 'n', 'i', 'h', 'l', 9, 0,
  /* 842 */ 'o', 'i', 'h', 'l', 9, 0,
  /* 848 */ 'j', 'l', 9, 0,
  /* 852 */ 'i', 'i', 'l', 'l', 9, 0,
  /* 858 */ 'l', 'l', 'i', 'l', 'l', 9, 0,
  /* 865 */ 'n', 'i', 'l', 'l', 9, 0,
  /* 871 */ 'o', 'i', 'l', 'l', 9, 0,
  /* 877 */ 'r', 'l', 'l', 9, 0,
  /* 882 */ 's', 'l', 'l', 9, 0,
  /* 887 */ 'j', 'g', 'n', 'l', 9, 0,
  /* 893 */ 'j', 'n', 'l', 9, 0,
  /* 898 */ 'l', 'a', 'r', 'l', 9, 0,
  /* 904 */ 'c', 'r', 'l', 9, 0,
  /* 909 */ 'c', 'g', 'f', 'r', 'l', 9, 0,
  /* 916 */ 'c', 'l', 'g', 'f', 'r', 'l', 9, 0,
  /* 924 */ 'l', 'l', 'g', 'f', 'r', 'l', 9, 0,
  /* 932 */ 'c', 'g', 'r', 'l', 9, 0,
  /* 938 */ 'c', 'l', 'g', 'r', 'l', 9, 0,
  /* 945 */ 's', 't', 'g', 'r', 'l', 9, 0,
  /* 952 */ 'c', 'h', 'r', 'l', 9, 0,
  /* 958 */ 'c', 'g', 'h', 'r', 'l', 9, 0,
  /* 965 */ 'c', 'l', 'g', 'h', 'r', 'l', 9, 0,
  /* 973 */ 'l', 'l', 'g', 'h', 'r', 'l', 9, 0,
  /* 981 */ 'c', 'l', 'h', 'r', 'l', 9, 0,
  /* 988 */ 'l', 'l', 'h', 'r', 'l', 9, 0,
  /* 995 */ 's', 't', 'h', 'r', 'l', 9, 0,
  /* 1002 */ 'c', 'l', 'r', 'l', 9, 0,
  /* 1008 */ 's', 'r', 'l', 9, 0,
  /* 1013 */ 's', 't', 'r', 'l', 9, 0,
  /* 1019 */ 'b', 'r', 'a', 's', 'l', 9, 0,
  /* 1026 */ 'n', 9, 0,
  /* 1029 */ 'j', 'g', 'o', 9, 0,
  /* 1034 */ 'j', 'o', 9, 0,
  /* 1038 */ 'j', 'g', 'n', 'o', 9, 0,
  /* 1044 */ 'j', 'n', 'o', 9, 0,
  /* 1049 */ 'e', 'a', 'r', 9, 0,
  /* 1054 */ 'm', 'a', 'd', 'b', 'r', 9, 0,
  /* 1061 */ 'l', 'c', 'd', 'b', 'r', 9, 0,
  /* 1068 */ 'd', 'd', 'b', 'r', 9, 0,
  /* 1074 */ 'l', 'e', 'd', 'b', 'r', 9, 0,
  /* 1081 */ 'c', 'f', 'd', 'b', 'r', 9, 0,
  /* 1088 */ 'c', 'g', 'd', 'b', 'r', 9, 0,
  /* 1095 */ 'f', 'i', 'd', 'b', 'r', 9, 0,
  /* 1102 */ 'm', 'd', 'b', 'r', 9, 0,
  /* 1108 */ 'l', 'n', 'd', 'b', 'r', 9, 0,
  /* 1115 */ 'l', 'p', 'd', 'b', 'r', 9, 0,
  /* 1122 */ 's', 'q', 'd', 'b', 'r', 9, 0,
  /* 1129 */ 'm', 's', 'd', 'b', 'r', 9, 0,
  /* 1136 */ 'l', 'x', 'd', 'b', 'r', 9, 0,
  /* 1143 */ 'm', 'x', 'd', 'b', 'r', 9, 0,
  /* 1150 */ 'm', 'a', 'e', 'b', 'r', 9, 0,
  /* 1157 */ 'l', 'c', 'e', 'b', 'r', 9, 0,
  /* 1164 */ 'l', 'd', 'e', 'b', 'r', 9, 0,
  /* 1171 */ 'm', 'd', 'e', 'b', 'r', 9, 0,
  /* 1178 */ 'm', 'e', 'e', 'b', 'r', 9, 0,
  /* 1185 */ 'c', 'f', 'e', 'b', 'r', 9, 0,
  /* 1192 */ 'c', 'g', 'e', 'b', 'r', 9, 0,
  /* 1199 */ 'f', 'i', 'e', 'b', 'r', 9, 0,
  /* 1206 */ 'l', 'n', 'e', 'b', 'r', 9, 0,
  /* 1213 */ 'l', 'p', 'e', 'b', 'r', 9, 0,
  /* 1220 */ 's', 'q', 'e', 'b', 'r', 9, 0,
  /* 1227 */ 'm', 's', 'e', 'b', 'r', 9, 0,
  /* 1234 */ 'l', 'x', 'e', 'b', 'r', 9, 0,
  /* 1241 */ 'c', 'd', 'f', 'b', 'r', 9, 0,
  /* 1248 */ 'c', 'e', 'f', 'b', 'r', 9, 0,
  /* 1255 */ 'c', 'x', 'f', 'b', 'r', 9, 0,
  /* 1262 */ 'c', 'd', 'g', 'b', 'r', 9, 0,
  /* 1269 */ 'c', 'e', 'g', 'b', 'r', 9, 0,
  /* 1276 */ 'l', 'g', 'b', 'r', 9, 0,
  /* 1282 */ 'c', 'x', 'g', 'b', 'r', 9, 0,
  /* 1289 */ 's', 'l', 'b', 'r', 9, 0,
  /* 1295 */ 'a', 'x', 'b', 'r', 9, 0,
  /* 1301 */ 'l', 'c', 'x', 'b', 'r', 9, 0,
  /* 1308 */ 'l', 'd', 'x', 'b', 'r', 9, 0,
  /* 1315 */ 'l', 'e', 'x', 'b', 'r', 9, 0,
  /* 1322 */ 'c', 'f', 'x', 'b', 'r', 9, 0,
  /* 1329 */ 'c', 'g', 'x', 'b', 'r', 9, 0,
  /* 1336 */ 'f', 'i', 'x', 'b', 'r', 9, 0,
  /* 1343 */ 'm', 'x', 'b', 'r', 9, 0,
  /* 1349 */ 'l', 'n', 'x', 'b', 'r', 9, 0,
  /* 1356 */ 'l', 'p', 'x', 'b', 'r', 9, 0,
  /* 1363 */ 's', 'q', 'x', 'b', 'r', 9, 0,
  /* 1370 */ 's', 'x', 'b', 'r', 9, 0,
  /* 1376 */ 'l', 'l', 'g', 'c', 'r', 9, 0,
  /* 1383 */ 'a', 'l', 'c', 'r', 9, 0,
  /* 1389 */ 'l', 'l', 'c', 'r', 9, 0,
  /* 1395 */ 'l', 'g', 'd', 'r', 9, 0,
  /* 1401 */ 'l', 'd', 'r', 9, 0,
  /* 1406 */ 'c', 'p', 's', 'd', 'r', 9, 0,
  /* 1413 */ 'l', 'z', 'd', 'r', 9, 0,
  /* 1419 */ 'l', 'e', 'r', 9, 0,
  /* 1424 */ 'l', 'z', 'e', 'r', 9, 0,
  /* 1430 */ 'a', 'g', 'f', 'r', 9, 0,
  /* 1436 */ 'l', 'c', 'g', 'f', 'r', 9, 0,
  /* 1443 */ 'a', 'l', 'g', 'f', 'r', 9, 0,
  /* 1450 */ 'c', 'l', 'g', 'f', 'r', 9, 0,
  /* 1457 */ 'l', 'l', 'g', 'f', 'r', 9, 0,
  /* 1464 */ 's', 'l', 'g', 'f', 'r', 9, 0,
  /* 1471 */ 'd', 's', 'g', 'f', 'r', 9, 0,
  /* 1478 */ 'm', 's', 'g', 'f', 'r', 9, 0,
  /* 1485 */ 'a', 'g', 'r', 9, 0,
  /* 1490 */ 's', 'l', 'b', 'g', 'r', 9, 0,
  /* 1497 */ 'a', 'l', 'c', 'g', 'r', 9, 0,
  /* 1504 */ 'l', 'd', 'g', 'r', 9, 0,
  /* 1510 */ 'a', 'l', 'g', 'r', 9, 0,
  /* 1516 */ 'c', 'l', 'g', 'r', 9, 0,
  /* 1522 */ 'd', 'l', 'g', 'r', 9, 0,
  /* 1528 */ 'm', 'l', 'g', 'r', 9, 0,
  /* 1534 */ 's', 'l', 'g', 'r', 9, 0,
  /* 1540 */ 'n', 'g', 'r', 9, 0,
  /* 1545 */ 'f', 'l', 'o', 'g', 'r', 9, 0,
  /* 1552 */ 'd', 's', 'g', 'r', 9, 0,
  /* 1558 */ 'm', 's', 'g', 'r', 9, 0,
  /* 1564 */ 'l', 'r', 'v', 'g', 'r', 9, 0,
  /* 1571 */ 'x', 'g', 'r', 9, 0,
  /* 1576 */ 'l', 'l', 'g', 'h', 'r', 9, 0,
  /* 1583 */ 'l', 'l', 'h', 'r', 9, 0,
  /* 1589 */ 'a', 'l', 'r', 9, 0,
  /* 1594 */ 'c', 'l', 'r', 9, 0,
  /* 1599 */ 'd', 'l', 'r', 9, 0,
  /* 1604 */ 's', 'l', 'r', 9, 0,
  /* 1609 */ 'n', 'r', 9, 0,
  /* 1613 */ 'o', 'r', 9, 0,
  /* 1617 */ 'b', 'a', 's', 'r', 9, 0,
  /* 1623 */ 'm', 's', 'r', 9, 0,
  /* 1628 */ 'l', 'r', 'v', 'r', 9, 0,
  /* 1634 */ 'l', 'x', 'r', 9, 0,
  /* 1639 */ 'l', 'z', 'x', 'r', 9, 0,
  /* 1645 */ 'b', 'r', 'a', 's', 9, 0,
  /* 1651 */ 'c', 's', 9, 0,
  /* 1655 */ 'm', 's', 9, 0,
  /* 1659 */ 's', 't', 9, 0,
  /* 1663 */ 'l', 'r', 'v', 9, 0,
  /* 1668 */ 's', 't', 'r', 'v', 9, 0,
  /* 1674 */ 'x', 9, 0,
  /* 1677 */ 'l', 'a', 'y', 9, 0,
  /* 1682 */ 'i', 'c', 'y', 9, 0,
  /* 1687 */ 's', 't', 'c', 'y', 9, 0,
  /* 1693 */ 'l', 'd', 'y', 9, 0,
  /* 1698 */ 's', 't', 'd', 'y', 9, 0,
  /* 1704 */ 'l', 'e', 'y', 9, 0,
  /* 1709 */ 's', 't', 'e', 'y', 9, 0,
  /* 1715 */ 'a', 'h', 'y', 9, 0,
  /* 1720 */ 'c', 'h', 'y', 9, 0,
  /* 1725 */ 'l', 'h', 'y', 9, 0,
  /* 1730 */ 'm', 'h', 'y', 9, 0,
  /* 1735 */ 's', 't', 'h', 'y', 9, 0,
  /* 1741 */ 'c', 'l', 'i', 'y', 9, 0,
  /* 1747 */ 'n', 'i', 'y', 9, 0,
  /* 1752 */ 'o', 'i', 'y', 9, 0,
  /* 1757 */ 'm', 'v', 'i', 'y', 9, 0,
  /* 1763 */ 'x', 'i', 'y', 9, 0,
  /* 1768 */ 'a', 'l', 'y', 9, 0,
  /* 1773 */ 'c', 'l', 'y', 9, 0,
  /* 1778 */ 's', 'l', 'y', 9, 0,
  /* 1783 */ 'n', 'y', 9, 0,
  /* 1787 */ 'o', 'y', 9, 0,
  /* 1791 */ 'c', 's', 'y', 9, 0,
  /* 1796 */ 'm', 's', 'y', 9, 0,
  /* 1801 */ 's', 't', 'y', 9, 0,
  /* 1806 */ 'x', 'y', 9, 0,
  /* 1810 */ 'b', 'r', 'a', 's', 'l', 9, '%', 'r', '1', '4', ',', 32, 0,
  /* 1823 */ 'b', 'a', 's', 'r', 9, '%', 'r', '1', '4', ',', 32, 0,
  /* 1835 */ 'b', 'r', 'a', 's', 9, '%', 'r', '1', '4', ',', 32, 0,
  /* 1847 */ 'b', 'r', 9, '%', 'r', '1', '4', 0,
  /* 1855 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1868 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1875 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1885 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1900 */ 'j', 'g', 0,
  /* 1903 */ 'j', 0,
  };

  O << "\t";

  // Emit the opcode for the instruction.
  uint32_t Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 2047)-1;


  // Fragment 0 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 11) & 7) {
  default:   // unreachable.
  case 0:
    // DBG_VALUE, BUNDLE, LIFETIME_START, LIFETIME_END, RET
    return;
    break;
  case 1:
    // A, ADB, ADBR, AEB, AEBR, AFI, AG, AGF, AGFI, AGFR, AGHI, AGR, AH, AHI,...
    printOperand(MI, 0, O); 
    break;
  case 2:
    // AGSI, ASI, CGHSI, CHHSI, CHSI, CLFHSI, CLGHSI, CLHHSI, CLI, CLIY, MVGH...
    printBDAddrOperand(MI, 0, O); 
    O << ", "; 
    break;
  case 3:
    // AsmBRC, AsmBRCL
    printU4ImmOperand(MI, 0, O); 
    O << ", "; 
    printOperand(MI, 1, O); 
    return;
    break;
  case 4:
    // BRAS, BRASL
    printCallOperand(MI, 0, O); 
    return;
    break;
  case 5:
    // BRC, BRCL
    printCond4Operand(MI, 0, O); 
    O << "\t"; 
    printOperand(MI, 1, O); 
    return;
    break;
  }


  // Fragment 1 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 14) & 7) {
  default:   // unreachable.
  case 0:
    // A, ADB, ADBR, AEB, AEBR, AFI, AG, AGF, AGFI, AGFR, AGHI, AGR, AH, AHI,...
    O << ", "; 
    break;
  case 1:
    // AGSI, ASI
    printS8ImmOperand(MI, 2, O); 
    return;
    break;
  case 2:
    // AsmJ, AsmJE, AsmJEL, AsmJH, AsmJHE, AsmJHEL, AsmJHL, AsmJL, AsmJLE, As...
    return;
    break;
  case 3:
    // CGHSI, CHHSI, CHSI, MVGHI, MVHHI, MVHI
    printS16ImmOperand(MI, 2, O); 
    return;
    break;
  case 4:
    // CLFHSI, CLGHSI, CLHHSI
    printU16ImmOperand(MI, 2, O); 
    return;
    break;
  case 5:
    // CLI, CLIY, MVI, MVIY, NI, NIY, OI, OIY, XI, XIY
    printU8ImmOperand(MI, 2, O); 
    return;
    break;
  }


  // Fragment 2 encoded into 4 bits for 15 unique commands.
  switch ((Bits >> 17) & 15) {
  default:   // unreachable.
  case 0:
    // A, ADB, AEB, AG, AGF, AH, AHY, AL, ALC, ALCG, ALG, ALGF, ALY, AY, DDB,...
    printBDXAddrOperand(MI, 2, O); 
    return;
    break;
  case 1:
    // ADBR, AEBR, AGFR, AGR, ALCGR, ALCR, ALGFR, ALGR, ALR, AR, AXBR, CPSDRd...
    printOperand(MI, 2, O); 
    break;
  case 2:
    // AFI, AGFI, MSFI, MSGFI
    printS32ImmOperand(MI, 2, O); 
    return;
    break;
  case 3:
    // AGHI, AHI, MGHI, MHI
    printS16ImmOperand(MI, 2, O); 
    return;
    break;
  case 4:
    // ALFI, ALGFI, IIHF, IILF, NIHF, NILF, NILF32, OIHF, OILF, OILF32, SLFI,...
    printU32ImmOperand(MI, 2, O); 
    return;
    break;
  case 5:
    // AsmBASR, AsmBRAS, AsmBRASL, CDBR, CDFBR, CDGBR, CEBR, CEFBR, CEGBR, CG...
    printOperand(MI, 1, O); 
    break;
  case 6:
    // C, CDB, CEB, CG, CGF, CGH, CH, CHY, CL, CLG, CLGF, CLY, CY, L, LA, LAY...
    printBDXAddrOperand(MI, 1, O); 
    return;
    break;
  case 7:
    // CFDBR, CFEBR, CFXBR, CGDBR, CGEBR, CGXBR, FIDBR, FIEBR, FIXBR
    printU4ImmOperand(MI, 2, O); 
    O << ", "; 
    printOperand(MI, 1, O); 
    return;
    break;
  case 8:
    // CFI, CGFI, LGFI
    printS32ImmOperand(MI, 1, O); 
    return;
    break;
  case 9:
    // CGHI, CHI, LGHI, LHI
    printS16ImmOperand(MI, 1, O); 
    return;
    break;
  case 10:
    // CLFI, CLGFI, IILF32, LLIHF, LLILF
    printU32ImmOperand(MI, 1, O); 
    return;
    break;
  case 11:
    // EAR
    printAccessRegOperand(MI, 1, O); 
    return;
    break;
  case 12:
    // IIHH, IIHL, IILH, IILH32, IILL, IILL32, NIHH, NIHL, NILH, NILH32, NILL...
    printU16ImmOperand(MI, 2, O); 
    return;
    break;
  case 13:
    // LLIHH, LLIHL, LLILH, LLILL
    printU16ImmOperand(MI, 1, O); 
    return;
    break;
  case 14:
    // SLL, SRA, SRL
    printBDAddrOperand(MI, 2, O); 
    return;
    break;
  }


  // Fragment 3 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 21) & 1) {
    // CPSDRdd, CPSDRds, CPSDRsd, CPSDRss, CS, CSG, CSY, LMG, MADB, MADBR, MA...
    O << ", "; 
  } else {
    // ADBR, AEBR, AGFR, AGR, ALCGR, ALCR, ALGFR, ALGR, ALR, AR, AXBR, AsmBAS...
    return;
  }


  // Fragment 4 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 22) & 7) {
  default:   // unreachable.
  case 0:
    // CPSDRdd, CPSDRds, CPSDRsd, CPSDRss
    printOperand(MI, 1, O); 
    return;
    break;
  case 1:
    // CS, CSG, CSY
    printBDAddrOperand(MI, 3, O); 
    return;
    break;
  case 2:
    // LMG, RLL, RLLG, SLLG, SRAG, SRLG, STMG
    printBDAddrOperand(MI, 2, O); 
    return;
    break;
  case 3:
    // MADB, MAEB, MSDB, MSEB
    printBDXAddrOperand(MI, 3, O); 
    return;
    break;
  case 4:
    // MADBR, MAEBR, MSDBR, MSEBR
    printOperand(MI, 3, O); 
    return;
    break;
  case 5:
    // RISBG, RISBG32
    printU6ImmOperand(MI, 3, O); 
    O << ", "; 
    printU6ImmOperand(MI, 4, O); 
    O << ", "; 
    printU6ImmOperand(MI, 5, O); 
    return;
    break;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *SystemZInstPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 82 && "Invalid register number!");

  static const char AsmStrs[] = {
  /* 0 */ 'f', '1', '0', 0,
  /* 4 */ 'r', '1', '0', 0,
  /* 8 */ 'f', '0', 0,
  /* 11 */ 'r', '0', 0,
  /* 14 */ 'f', '1', '1', 0,
  /* 18 */ 'r', '1', '1', 0,
  /* 22 */ 'f', '1', 0,
  /* 25 */ 'r', '1', 0,
  /* 28 */ 'f', '1', '2', 0,
  /* 32 */ 'r', '1', '2', 0,
  /* 36 */ 'f', '2', 0,
  /* 39 */ 'r', '2', 0,
  /* 42 */ 'f', '1', '3', 0,
  /* 46 */ 'r', '1', '3', 0,
  /* 50 */ 'f', '3', 0,
  /* 53 */ 'r', '3', 0,
  /* 56 */ 'f', '1', '4', 0,
  /* 60 */ 'r', '1', '4', 0,
  /* 64 */ 'f', '4', 0,
  /* 67 */ 'r', '4', 0,
  /* 70 */ 'f', '1', '5', 0,
  /* 74 */ 'r', '1', '5', 0,
  /* 78 */ 'f', '5', 0,
  /* 81 */ 'r', '5', 0,
  /* 84 */ 'f', '6', 0,
  /* 87 */ 'r', '6', 0,
  /* 90 */ 'f', '7', 0,
  /* 93 */ 'r', '7', 0,
  /* 96 */ 'f', '8', 0,
  /* 99 */ 'r', '8', 0,
  /* 102 */ 'f', '9', 0,
  /* 105 */ 'r', '9', 0,
  /* 108 */ 'p', 's', 'w', 0,
  };

  static const uint32_t RegAsmOffset[] = {
    8, 8, 8, 22, 22, 22, 36, 36, 50, 50, 64, 64, 64, 78, 
    78, 78, 84, 84, 90, 90, 96, 96, 96, 102, 102, 102, 0, 0, 
    14, 14, 28, 28, 28, 42, 42, 42, 56, 56, 70, 70, 108, 11, 
    11, 11, 25, 25, 39, 39, 39, 53, 53, 67, 67, 67, 81, 81, 
    87, 87, 87, 93, 93, 99, 99, 99, 105, 105, 4, 4, 4, 18, 
    18, 32, 32, 32, 46, 46, 60, 60, 60, 74, 74, 
  };

  assert (*(AsmStrs+RegAsmOffset[RegNo-1]) &&
          "Invalid alt name index for register!");
  return AsmStrs+RegAsmOffset[RegNo-1];
}

#ifdef PRINT_ALIAS_INSTR
#undef PRINT_ALIAS_INSTR

bool SystemZInstPrinter::printAliasInstr(const MCInst *MI, raw_ostream &OS) {
  return false;
}

#endif // PRINT_ALIAS_INSTR