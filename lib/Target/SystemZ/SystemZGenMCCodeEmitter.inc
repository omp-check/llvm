/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Machine Code Emitter                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t SystemZMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(1509949440),	// A
    UINT64_C(260584255782938),	// ADB
    UINT64_C(3004825600),	// ADBR
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(260584255782922),	// AEB
    UINT64_C(3003777024),	// AEBR
    UINT64_C(0),
    UINT64_C(213343910494208),	// AFI
    UINT64_C(249589139505160),	// AG
    UINT64_C(249589139505176),	// AGF
    UINT64_C(213339615526912),	// AGFI
    UINT64_C(3105357824),	// AGFR
    UINT64_C(2802515968),	// AGHI
    UINT64_C(3104309248),	// AGR
    UINT64_C(258385232527482),	// AGSI
    UINT64_C(1241513984),	// AH
    UINT64_C(2802450432),	// AHI
    UINT64_C(249589139505274),	// AHY
    UINT64_C(1577058304),	// AL
    UINT64_C(249589139505304),	// ALC
    UINT64_C(249589139505288),	// ALCG
    UINT64_C(3112697856),	// ALCGR
    UINT64_C(3113746432),	// ALCR
    UINT64_C(213352500428800),	// ALFI
    UINT64_C(249589139505162),	// ALG
    UINT64_C(249589139505178),	// ALGF
    UINT64_C(213348205461504),	// ALGFI
    UINT64_C(3105488896),	// ALGFR
    UINT64_C(3104440320),	// ALGR
    UINT64_C(7680),	// ALR
    UINT64_C(249589139505246),	// ALY
    UINT64_C(6656),	// AR
    UINT64_C(258385232527466),	// ASI
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(3007971328),	// AXBR
    UINT64_C(249589139505242),	// AY
    UINT64_C(3328),	// AsmBASR
    UINT64_C(2802122752),	// AsmBRAS
    UINT64_C(211127707369472),	// AsmBRASL
    UINT64_C(2802057216),	// AsmBRC
    UINT64_C(211123412402176),	// AsmBRCL
    UINT64_C(2817785856),	// AsmJ
    UINT64_C(2810445824),	// AsmJE
    UINT64_C(211673168216064),	// AsmJEL
    UINT64_C(2804154368),	// AsmJH
    UINT64_C(2812542976),	// AsmJHE
    UINT64_C(211810607169536),	// AsmJHEL
    UINT64_C(211260851355648),	// AsmJHL
    UINT64_C(2806251520),	// AsmJL
    UINT64_C(2814640128),	// AsmJLE
    UINT64_C(211948046123008),	// AsmJLEL
    UINT64_C(2808348672),	// AsmJLH
    UINT64_C(211535729262592),	// AsmJLHL
    UINT64_C(211398290309120),	// AsmJLL
    UINT64_C(2809397248),	// AsmJNE
    UINT64_C(211604448739328),	// AsmJNEL
    UINT64_C(2815688704),	// AsmJNH
    UINT64_C(2807300096),	// AsmJNHE
    UINT64_C(211467009785856),	// AsmJNHEL
    UINT64_C(212016765599744),	// AsmJNHL
    UINT64_C(2813591552),	// AsmJNL
    UINT64_C(2805202944),	// AsmJNLE
    UINT64_C(211329570832384),	// AsmJNLEL
    UINT64_C(2811494400),	// AsmJNLH
    UINT64_C(211741887692800),	// AsmJNLHL
    UINT64_C(211879326646272),	// AsmJNLL
    UINT64_C(2816737280),	// AsmJNO
    UINT64_C(212085485076480),	// AsmJNOL
    UINT64_C(2803105792),	// AsmJO
    UINT64_C(211192131878912),	// AsmJOL
    UINT64_C(3552),	// BASR
    UINT64_C(2032),	// BR
    UINT64_C(2816802816),	// BRAS
    UINT64_C(212089780043776),	// BRASL
    UINT64_C(2802057216),	// BRC
    UINT64_C(211123412402176),	// BRCL
    UINT64_C(1493172224),	// C
    UINT64_C(260584255782937),	// CDB
    UINT64_C(3004760064),	// CDBR
    UINT64_C(3012886528),	// CDFBR
    UINT64_C(3013935104),	// CDGBR
    UINT64_C(260584255782921),	// CEB
    UINT64_C(3003711488),	// CEBR
    UINT64_C(3012820992),	// CEFBR
    UINT64_C(3013869568),	// CEGBR
    UINT64_C(3013148672),	// CFDBR
    UINT64_C(3013083136),	// CFEBR
    UINT64_C(213361090363392),	// CFI
    UINT64_C(3013214208),	// CFXBR
    UINT64_C(249589139505184),	// CG
    UINT64_C(3014197248),	// CGDBR
    UINT64_C(3014131712),	// CGEBR
    UINT64_C(249589139505200),	// CGF
    UINT64_C(213356795396096),	// CGFI
    UINT64_C(3106930688),	// CGFR
    UINT64_C(217754841907200),	// CGFRL
    UINT64_C(249589139505204),	// CGH
    UINT64_C(2802778112),	// CGHI
    UINT64_C(217720482168832),	// CGHRL
    UINT64_C(252166119882752),	// CGHSI
    UINT64_C(3105882112),	// CGR
    UINT64_C(217737662038016),	// CGRL
    UINT64_C(3014262784),	// CGXBR
    UINT64_C(1224736768),	// CH
    UINT64_C(252148940013568),	// CHHSI
    UINT64_C(2802712576),	// CHI
    UINT64_C(217724777136128),	// CHRL
    UINT64_C(252183299751936),	// CHSI
    UINT64_C(249589139505273),	// CHY
    UINT64_C(1426063360),	// CL
    UINT64_C(252187594719232),	// CLFHSI
    UINT64_C(213369680297984),	// CLFI
    UINT64_C(249589139505185),	// CLG
    UINT64_C(249589139505201),	// CLGF
    UINT64_C(213365385330688),	// CLGFI
    UINT64_C(3106996224),	// CLGFR
    UINT64_C(217763431841792),	// CLGFRL
    UINT64_C(217729072103424),	// CLGHRL
    UINT64_C(252170414850048),	// CLGHSI
    UINT64_C(3105947648),	// CLGR
    UINT64_C(217746251972608),	// CLGRL
    UINT64_C(252153234980864),	// CLHHSI
    UINT64_C(217733367070720),	// CLHRL
    UINT64_C(2499805184),	// CLI
    UINT64_C(258385232527445),	// CLIY
    UINT64_C(5376),	// CLR
    UINT64_C(217767726809088),	// CLRL
    UINT64_C(249589139505237),	// CLY
    UINT64_C(3010592768),	// CPSDRdd
    UINT64_C(3010592768),	// CPSDRds
    UINT64_C(3010592768),	// CPSDRsd
    UINT64_C(3010592768),	// CPSDRss
    UINT64_C(6400),	// CR
    UINT64_C(217759136874496),	// CRL
    UINT64_C(3120562176),	// CS
    UINT64_C(258385232527408),	// CSG
    UINT64_C(258385232527380),	// CSY
    UINT64_C(3007905792),	// CXBR
    UINT64_C(3012952064),	// CXFBR
    UINT64_C(3014000640),	// CXGBR
    UINT64_C(249589139505241),	// CY
    UINT64_C(260584255782941),	// DDB
    UINT64_C(3005022208),	// DDBR
    UINT64_C(260584255782925),	// DEB
    UINT64_C(3003973632),	// DEBR
    UINT64_C(249589139505303),	// DL
    UINT64_C(249589139505287),	// DLG
    UINT64_C(3112632320),	// DLGR
    UINT64_C(3113680896),	// DLR
    UINT64_C(249589139505165),	// DSG
    UINT64_C(249589139505181),	// DSGF
    UINT64_C(3105685504),	// DSGFR
    UINT64_C(3104636928),	// DSGR
    UINT64_C(3008167936),	// DXBR
    UINT64_C(2991521792),	// EAR
    UINT64_C(3009347584),	// FIDBR
    UINT64_C(3008823296),	// FIEBR
    UINT64_C(3007774720),	// FIXBR
    UINT64_C(3112370176),	// FLOGR
    UINT64_C(1124073472),	// IC
    UINT64_C(1124073472),	// IC32
    UINT64_C(249589139505267),	// IC32Y
    UINT64_C(249589139505267),	// ICY
    UINT64_C(211140592271360),	// IIHF
    UINT64_C(2768240640),	// IIHH
    UINT64_C(2768306176),	// IIHL
    UINT64_C(211144887238656),	// IILF
    UINT64_C(211144887238656),	// IILF32
    UINT64_C(2768371712),	// IILH
    UINT64_C(2768371712),	// IILH32
    UINT64_C(2768437248),	// IILL
    UINT64_C(2768437248),	// IILL32
    UINT64_C(2817785856),	// J
    UINT64_C(212154204553216),	// JG
    UINT64_C(1476395008),	// L
    UINT64_C(0),
    UINT64_C(1090519040),	// LA
    UINT64_C(211106232532992),	// LARL
    UINT64_C(249589139505265),	// LAY
    UINT64_C(249589139505270),	// LB
    UINT64_C(3106275328),	// LBR
    UINT64_C(3004366848),	// LCDBR
    UINT64_C(3003318272),	// LCEBR
    UINT64_C(3105030144),	// LCGFR
    UINT64_C(3103981568),	// LCGR
    UINT64_C(4864),	// LCR
    UINT64_C(3007512576),	// LCXBR
    UINT64_C(1744830464),	// LD
    UINT64_C(260584255782916),	// LDEB
    UINT64_C(3003383808),	// LDEBR
    UINT64_C(3015770112),	// LDGR
    UINT64_C(10240),	// LDR
    UINT64_C(3007643648),	// LDXBR
    UINT64_C(260584255783013),	// LDY
    UINT64_C(2013265920),	// LE
    UINT64_C(3007578112),	// LEDBR
    UINT64_C(14336),	// LER
    UINT64_C(3007709184),	// LEXBR
    UINT64_C(260584255783012),	// LEY
    UINT64_C(249589139505156),	// LG
    UINT64_C(249589139505271),	// LGB
    UINT64_C(3104178176),	// LGBR
    UINT64_C(3016556544),	// LGDR
    UINT64_C(249589139505172),	// LGF
    UINT64_C(211110527500288),	// LGFI
    UINT64_C(3105095680),	// LGFR
    UINT64_C(215555818651648),	// LGFRL
    UINT64_C(249589139505173),	// LGH
    UINT64_C(2802384896),	// LGHI
    UINT64_C(3104243712),	// LGHR
    UINT64_C(215521458913280),	// LGHRL
    UINT64_C(3104047104),	// LGR
    UINT64_C(215538638782464),	// LGRL
    UINT64_C(1207959552),	// LH
    UINT64_C(2802319360),	// LHI
    UINT64_C(3106340864),	// LHR
    UINT64_C(215525753880576),	// LHRL
    UINT64_C(249589139505272),	// LHY
    UINT64_C(249589139505300),	// LLC
    UINT64_C(3113484288),	// LLCR
    UINT64_C(249589139505296),	// LLGC
    UINT64_C(3112435712),	// LLGCR
    UINT64_C(249589139505174),	// LLGF
    UINT64_C(3105226752),	// LLGFR
    UINT64_C(215564408586240),	// LLGFRL
    UINT64_C(249589139505297),	// LLGH
    UINT64_C(3112501248),	// LLGHR
    UINT64_C(215530048847872),	// LLGHRL
    UINT64_C(249589139505301),	// LLH
    UINT64_C(3113549824),	// LLHR
    UINT64_C(215512868978688),	// LLHRL
    UINT64_C(211166362075136),	// LLIHF
    UINT64_C(2769027072),	// LLIHH
    UINT64_C(2769092608),	// LLIHL
    UINT64_C(211170657042432),	// LLILF
    UINT64_C(2769158144),	// LLILH
    UINT64_C(2769223680),	// LLILL
    UINT64_C(258385232527364),	// LMG
    UINT64_C(3004235776),	// LNDBR
    UINT64_C(3003187200),	// LNEBR
    UINT64_C(3007381504),	// LNXBR
    UINT64_C(3004170240),	// LPDBR
    UINT64_C(3003121664),	// LPEBR
    UINT64_C(3007315968),	// LPXBR
    UINT64_C(6144),	// LR
    UINT64_C(215560113618944),	// LRL
    UINT64_C(249589139505182),	// LRV
    UINT64_C(249589139505167),	// LRVG
    UINT64_C(3104768000),	// LRVGR
    UINT64_C(3105816576),	// LRVR
    UINT64_C(0),
    UINT64_C(260584255782917),	// LXDB
    UINT64_C(3003449344),	// LXDBR
    UINT64_C(260584255782918),	// LXEB
    UINT64_C(3003514880),	// LXEBR
    UINT64_C(3009740800),	// LXR
    UINT64_C(249589139505240),	// LY
    UINT64_C(3010789376),	// LZDR
    UINT64_C(3010723840),	// LZER
    UINT64_C(3010854912),	// LZXR
    UINT64_C(260584255782942),	// MADB
    UINT64_C(3005087744),	// MADBR
    UINT64_C(260584255782926),	// MAEB
    UINT64_C(3004039168),	// MAEBR
    UINT64_C(260584255782940),	// MDB
    UINT64_C(3004956672),	// MDBR
    UINT64_C(260584255782924),	// MDEB
    UINT64_C(3003908096),	// MDEBR
    UINT64_C(260584255782935),	// MEEB
    UINT64_C(3004628992),	// MEEBR
    UINT64_C(2802647040),	// MGHI
    UINT64_C(1275068416),	// MH
    UINT64_C(2802581504),	// MHI
    UINT64_C(249589139505276),	// MHY
    UINT64_C(249589139505286),	// MLG
    UINT64_C(3112566784),	// MLGR
    UINT64_C(1895825408),	// MS
    UINT64_C(260584255782943),	// MSDB
    UINT64_C(3005153280),	// MSDBR
    UINT64_C(260584255782927),	// MSEB
    UINT64_C(3004104704),	// MSEBR
    UINT64_C(213309550755840),	// MSFI
    UINT64_C(249589139505164),	// MSG
    UINT64_C(249589139505180),	// MSGF
    UINT64_C(213305255788544),	// MSGFI
    UINT64_C(3105619968),	// MSGFR
    UINT64_C(3104571392),	// MSGR
    UINT64_C(2991718400),	// MSR
    UINT64_C(249589139505233),	// MSY
    UINT64_C(252097400406016),	// MVGHI
    UINT64_C(252080220536832),	// MVHHI
    UINT64_C(252114580275200),	// MVHI
    UINT64_C(2449473536),	// MVI
    UINT64_C(258385232527442),	// MVIY
    UINT64_C(3008102400),	// MXBR
    UINT64_C(260584255782919),	// MXDB
    UINT64_C(3003580416),	// MXDBR
    UINT64_C(1409286144),	// N
    UINT64_C(249589139505280),	// NG
    UINT64_C(3112173568),	// NGR
    UINT64_C(2483027968),	// NI
    UINT64_C(211149182205952),	// NIHF
    UINT64_C(2768502784),	// NIHH
    UINT64_C(2768568320),	// NIHL
    UINT64_C(211153477173248),	// NILF
    UINT64_C(211153477173248),	// NILF32
    UINT64_C(2768633856),	// NILH
    UINT64_C(2768633856),	// NILH32
    UINT64_C(2768699392),	// NILL
    UINT64_C(2768699392),	// NILL32
    UINT64_C(258385232527444),	// NIY
    UINT64_C(5120),	// NR
    UINT64_C(249589139505236),	// NY
    UINT64_C(1442840576),	// O
    UINT64_C(249589139505281),	// OG
    UINT64_C(3112239104),	// OGR
    UINT64_C(2516582400),	// OI
    UINT64_C(211157772140544),	// OIHF
    UINT64_C(2768764928),	// OIHH
    UINT64_C(2768830464),	// OIHL
    UINT64_C(211162067107840),	// OILF
    UINT64_C(211162067107840),	// OILF32
    UINT64_C(2768896000),	// OILH
    UINT64_C(2768896000),	// OILH32
    UINT64_C(2768961536),	// OILL
    UINT64_C(2768961536),	// OILL32
    UINT64_C(258385232527446),	// OIY
    UINT64_C(5632),	// OR
    UINT64_C(249589139505238),	// OY
    UINT64_C(2046),	// RET
    UINT64_C(259484744155221),	// RISBG
    UINT64_C(259484744155221),	// RISBG32
    UINT64_C(258385232527389),	// RLL
    UINT64_C(258385232527388),	// RLLG
    UINT64_C(1526726656),	// S
    UINT64_C(260584255782939),	// SDB
    UINT64_C(3004891136),	// SDBR
    UINT64_C(260584255782923),	// SEB
    UINT64_C(3003842560),	// SEBR
    UINT64_C(249589139505161),	// SG
    UINT64_C(249589139505177),	// SGF
    UINT64_C(3105423360),	// SGFR
    UINT64_C(3104374784),	// SGR
    UINT64_C(1593835520),	// SL
    UINT64_C(249589139505305),	// SLB
    UINT64_C(249589139505289),	// SLBG
    UINT64_C(3113811968),	// SLBR
    UINT64_C(213326730625024),	// SLFI
    UINT64_C(249589139505163),	// SLG
    UINT64_C(3112763392),	// SLGBR
    UINT64_C(249589139505179),	// SLGF
    UINT64_C(213322435657728),	// SLGFI
    UINT64_C(3105554432),	// SLGFR
    UINT64_C(3104505856),	// SLGR
    UINT64_C(2298478592),	// SLL
    UINT64_C(258385232527373),	// SLLG
    UINT64_C(7936),	// SLR
    UINT64_C(249589139505247),	// SLY
    UINT64_C(260584255782933),	// SQDB
    UINT64_C(3004497920),	// SQDBR
    UINT64_C(260584255782932),	// SQEB
    UINT64_C(3004432384),	// SQEBR
    UINT64_C(3004563456),	// SQXBR
    UINT64_C(6912),	// SR
    UINT64_C(2315255808),	// SRA
    UINT64_C(258385232527370),	// SRAG
    UINT64_C(2281701376),	// SRL
    UINT64_C(258385232527372),	// SRLG
    UINT64_C(1342177280),	// ST
    UINT64_C(0),
    UINT64_C(1342177280),	// ST32
    UINT64_C(249589139505232),	// ST32Y
    UINT64_C(1107296256),	// STC
    UINT64_C(1107296256),	// STC32
    UINT64_C(249589139505266),	// STC32Y
    UINT64_C(249589139505266),	// STCY
    UINT64_C(1610612736),	// STD
    UINT64_C(260584255783015),	// STDY
    UINT64_C(1879048192),	// STE
    UINT64_C(260584255783014),	// STEY
    UINT64_C(249589139505188),	// STG
    UINT64_C(215551523684352),	// STGRL
    UINT64_C(1073741824),	// STH
    UINT64_C(1073741824),	// STH32
    UINT64_C(249589139505264),	// STH32Y
    UINT64_C(215534343815168),	// STHRL
    UINT64_C(215534343815168),	// STHRL32
    UINT64_C(249589139505264),	// STHY
    UINT64_C(258385232527396),	// STMG
    UINT64_C(215568703553536),	// STRL
    UINT64_C(215568703553536),	// STRL32
    UINT64_C(249589139505214),	// STRV
    UINT64_C(249589139505199),	// STRVG
    UINT64_C(0),
    UINT64_C(249589139505232),	// STY
    UINT64_C(3008036864),	// SXBR
    UINT64_C(249589139505243),	// SY
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(1459617792),	// X
    UINT64_C(249589139505282),	// XG
    UINT64_C(3112304640),	// XGR
    UINT64_C(2533359616),	// XI
    UINT64_C(211132002336768),	// XIHF
    UINT64_C(211136297304064),	// XILF
    UINT64_C(211136297304064),	// XILF32
    UINT64_C(258385232527447),	// XIY
    UINT64_C(5888),	// XR
    UINT64_C(249589139505239),	// XY
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case SystemZ::RET: {
      break;
    }
    case SystemZ::CLI:
    case SystemZ::MVI:
    case SystemZ::NI:
    case SystemZ::OI:
    case SystemZ::XI: {
      // op: B1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: D1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(4095);
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(255)) << 16;
      break;
    }
    case SystemZ::CGHSI:
    case SystemZ::CHHSI:
    case SystemZ::CHSI:
    case SystemZ::CLFHSI:
    case SystemZ::CLGHSI:
    case SystemZ::CLHHSI:
    case SystemZ::MVGHI:
    case SystemZ::MVHHI:
    case SystemZ::MVHI: {
      // op: B1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(65535);
      break;
    }
    case SystemZ::AGSI:
    case SystemZ::ASI:
    case SystemZ::CLIY:
    case SystemZ::MVIY:
    case SystemZ::NIY:
    case SystemZ::OIY:
    case SystemZ::XIY: {
      // op: B1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      Value |= (op & UINT64_C(1044480)) >> 4;
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(255)) << 32;
      break;
    }
    case SystemZ::AsmJ:
    case SystemZ::AsmJE:
    case SystemZ::AsmJH:
    case SystemZ::AsmJHE:
    case SystemZ::AsmJL:
    case SystemZ::AsmJLE:
    case SystemZ::AsmJLH:
    case SystemZ::AsmJNE:
    case SystemZ::AsmJNH:
    case SystemZ::AsmJNHE:
    case SystemZ::AsmJNL:
    case SystemZ::AsmJNLE:
    case SystemZ::AsmJNLH:
    case SystemZ::AsmJNO:
    case SystemZ::AsmJO:
    case SystemZ::J: {
      // op: I2
      op = getPC16DBLEncoding(MI, 0, Fixups);
      Value |= op & UINT64_C(65535);
      break;
    }
    case SystemZ::AsmJEL:
    case SystemZ::AsmJHEL:
    case SystemZ::AsmJHL:
    case SystemZ::AsmJLEL:
    case SystemZ::AsmJLHL:
    case SystemZ::AsmJLL:
    case SystemZ::AsmJNEL:
    case SystemZ::AsmJNHEL:
    case SystemZ::AsmJNHL:
    case SystemZ::AsmJNLEL:
    case SystemZ::AsmJNLHL:
    case SystemZ::AsmJNLL:
    case SystemZ::AsmJNOL:
    case SystemZ::AsmJOL:
    case SystemZ::JG: {
      // op: I2
      op = getPC32DBLEncoding(MI, 0, Fixups);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case SystemZ::BRAS: {
      // op: I2
      op = getPLT16DBLEncoding(MI, 0, Fixups);
      Value |= op & UINT64_C(65535);
      break;
    }
    case SystemZ::BRASL: {
      // op: I2
      op = getPLT32DBLEncoding(MI, 0, Fixups);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case SystemZ::MADB:
    case SystemZ::MAEB:
    case SystemZ::MSDB:
    case SystemZ::MSEB: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: R3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      break;
    }
    case SystemZ::MADBR:
    case SystemZ::MAEBR:
    case SystemZ::MSDBR:
    case SystemZ::MSEBR: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: R3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 4;
      // op: R2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= op & UINT64_C(15);
      break;
    }
    case SystemZ::C:
    case SystemZ::CH:
    case SystemZ::CL:
    case SystemZ::L:
    case SystemZ::LA:
    case SystemZ::LD:
    case SystemZ::LE:
    case SystemZ::LH:
    case SystemZ::ST:
    case SystemZ::ST32:
    case SystemZ::STC:
    case SystemZ::STC32:
    case SystemZ::STD:
    case SystemZ::STE:
    case SystemZ::STH:
    case SystemZ::STH32: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(4095);
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 16;
      break;
    }
    case SystemZ::SLL:
    case SystemZ::SRA:
    case SystemZ::SRL: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= op & UINT64_C(4095);
      break;
    }
    case SystemZ::A:
    case SystemZ::AH:
    case SystemZ::AL:
    case SystemZ::IC:
    case SystemZ::IC32:
    case SystemZ::MH:
    case SystemZ::MS:
    case SystemZ::N:
    case SystemZ::O:
    case SystemZ::S:
    case SystemZ::SL:
    case SystemZ::X: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= op & UINT64_C(4095);
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(15)) << 16;
      break;
    }
    case SystemZ::CGHI:
    case SystemZ::CHI:
    case SystemZ::LGHI:
    case SystemZ::LHI:
    case SystemZ::LLIHH:
    case SystemZ::LLIHL:
    case SystemZ::LLILH:
    case SystemZ::LLILL: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(65535);
      break;
    }
    case SystemZ::AGHI:
    case SystemZ::AHI:
    case SystemZ::IIHH:
    case SystemZ::IIHL:
    case SystemZ::IILH:
    case SystemZ::IILH32:
    case SystemZ::IILL:
    case SystemZ::IILL32:
    case SystemZ::MGHI:
    case SystemZ::MHI:
    case SystemZ::NIHH:
    case SystemZ::NIHL:
    case SystemZ::NILH:
    case SystemZ::NILH32:
    case SystemZ::NILL:
    case SystemZ::NILL32:
    case SystemZ::OIHH:
    case SystemZ::OIHL:
    case SystemZ::OILH:
    case SystemZ::OILH32:
    case SystemZ::OILL:
    case SystemZ::OILL32: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(65535);
      break;
    }
    case SystemZ::AsmBRAS:
    case SystemZ::AsmBRC:
    case SystemZ::BRC: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: I2
      op = getPC16DBLEncoding(MI, 1, Fixups);
      Value |= op & UINT64_C(65535);
      break;
    }
    case SystemZ::CS: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 20;
      // op: R3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 16;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= op & UINT64_C(4095);
      break;
    }
    case SystemZ::CDB:
    case SystemZ::CEB:
    case SystemZ::LDEB:
    case SystemZ::LXDB:
    case SystemZ::LXEB:
    case SystemZ::SQDB:
    case SystemZ::SQEB: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      break;
    }
    case SystemZ::CG:
    case SystemZ::CGF:
    case SystemZ::CGH:
    case SystemZ::CHY:
    case SystemZ::CLG:
    case SystemZ::CLGF:
    case SystemZ::CLY:
    case SystemZ::CY:
    case SystemZ::LAY:
    case SystemZ::LB:
    case SystemZ::LDY:
    case SystemZ::LEY:
    case SystemZ::LG:
    case SystemZ::LGB:
    case SystemZ::LGF:
    case SystemZ::LGH:
    case SystemZ::LHY:
    case SystemZ::LLC:
    case SystemZ::LLGC:
    case SystemZ::LLGF:
    case SystemZ::LLGH:
    case SystemZ::LLH:
    case SystemZ::LRV:
    case SystemZ::LRVG:
    case SystemZ::LY:
    case SystemZ::ST32Y:
    case SystemZ::STC32Y:
    case SystemZ::STCY:
    case SystemZ::STDY:
    case SystemZ::STEY:
    case SystemZ::STG:
    case SystemZ::STH32Y:
    case SystemZ::STHY:
    case SystemZ::STRV:
    case SystemZ::STRVG:
    case SystemZ::STY: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      Value |= (op & UINT64_C(1044480)) >> 4;
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      break;
    }
    case SystemZ::ADB:
    case SystemZ::AEB:
    case SystemZ::DDB:
    case SystemZ::DEB:
    case SystemZ::MDB:
    case SystemZ::MDEB:
    case SystemZ::MEEB:
    case SystemZ::MXDB:
    case SystemZ::SDB:
    case SystemZ::SEB: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      break;
    }
    case SystemZ::AG:
    case SystemZ::AGF:
    case SystemZ::AHY:
    case SystemZ::ALC:
    case SystemZ::ALCG:
    case SystemZ::ALG:
    case SystemZ::ALGF:
    case SystemZ::ALY:
    case SystemZ::AY:
    case SystemZ::DL:
    case SystemZ::DLG:
    case SystemZ::DSG:
    case SystemZ::DSGF:
    case SystemZ::IC32Y:
    case SystemZ::ICY:
    case SystemZ::MHY:
    case SystemZ::MLG:
    case SystemZ::MSG:
    case SystemZ::MSGF:
    case SystemZ::MSY:
    case SystemZ::NG:
    case SystemZ::NY:
    case SystemZ::OG:
    case SystemZ::OY:
    case SystemZ::SG:
    case SystemZ::SGF:
    case SystemZ::SLB:
    case SystemZ::SLBG:
    case SystemZ::SLG:
    case SystemZ::SLGF:
    case SystemZ::SLY:
    case SystemZ::SY:
    case SystemZ::XG:
    case SystemZ::XY: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      Value |= (op & UINT64_C(1044480)) >> 4;
      // op: X2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      break;
    }
    case SystemZ::CFI:
    case SystemZ::CGFI:
    case SystemZ::CLFI:
    case SystemZ::CLGFI:
    case SystemZ::IILF32:
    case SystemZ::LGFI:
    case SystemZ::LLIHF:
    case SystemZ::LLILF: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case SystemZ::AFI:
    case SystemZ::AGFI:
    case SystemZ::ALFI:
    case SystemZ::ALGFI:
    case SystemZ::IIHF:
    case SystemZ::IILF:
    case SystemZ::MSFI:
    case SystemZ::MSGFI:
    case SystemZ::NIHF:
    case SystemZ::NILF:
    case SystemZ::NILF32:
    case SystemZ::OIHF:
    case SystemZ::OILF:
    case SystemZ::OILF32:
    case SystemZ::SLFI:
    case SystemZ::SLGFI:
    case SystemZ::XIHF:
    case SystemZ::XILF:
    case SystemZ::XILF32: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: I2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case SystemZ::AsmBRASL:
    case SystemZ::AsmBRCL:
    case SystemZ::BRCL:
    case SystemZ::CGFRL:
    case SystemZ::CGHRL:
    case SystemZ::CGRL:
    case SystemZ::CHRL:
    case SystemZ::CLGFRL:
    case SystemZ::CLGHRL:
    case SystemZ::CLGRL:
    case SystemZ::CLHRL:
    case SystemZ::CLRL:
    case SystemZ::CRL:
    case SystemZ::LARL:
    case SystemZ::LGFRL:
    case SystemZ::LGHRL:
    case SystemZ::LGRL:
    case SystemZ::LHRL:
    case SystemZ::LLGFRL:
    case SystemZ::LLGHRL:
    case SystemZ::LLHRL:
    case SystemZ::LRL:
    case SystemZ::STGRL:
    case SystemZ::STHRL:
    case SystemZ::STHRL32:
    case SystemZ::STRL:
    case SystemZ::STRL32: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: I2
      op = getPC32DBLEncoding(MI, 1, Fixups);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case SystemZ::RISBG:
    case SystemZ::RISBG32: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: R2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      // op: I3
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(255)) << 24;
      // op: I4
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(255)) << 16;
      // op: I5
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups);
      Value |= (op & UINT64_C(255)) << 8;
      break;
    }
    case SystemZ::LMG:
    case SystemZ::RLL:
    case SystemZ::RLLG:
    case SystemZ::SLLG:
    case SystemZ::SRAG:
    case SystemZ::SRLG:
    case SystemZ::STMG: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: R3
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      Value |= (op & UINT64_C(1044480)) >> 4;
      break;
    }
    case SystemZ::CSG:
    case SystemZ::CSY: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 36;
      // op: R3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 32;
      // op: B2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 28;
      // op: D2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(4095)) << 16;
      Value |= (op & UINT64_C(1044480)) >> 4;
      break;
    }
    case SystemZ::LZDR:
    case SystemZ::LZER:
    case SystemZ::LZXR: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 4;
      break;
    }
    case SystemZ::AsmBASR:
    case SystemZ::CDBR:
    case SystemZ::CDFBR:
    case SystemZ::CDGBR:
    case SystemZ::CEBR:
    case SystemZ::CEFBR:
    case SystemZ::CEGBR:
    case SystemZ::CGFR:
    case SystemZ::CGR:
    case SystemZ::CLGFR:
    case SystemZ::CLGR:
    case SystemZ::CLR:
    case SystemZ::CR:
    case SystemZ::CXBR:
    case SystemZ::CXFBR:
    case SystemZ::CXGBR:
    case SystemZ::EAR:
    case SystemZ::FLOGR:
    case SystemZ::LBR:
    case SystemZ::LCDBR:
    case SystemZ::LCEBR:
    case SystemZ::LCGFR:
    case SystemZ::LCGR:
    case SystemZ::LCR:
    case SystemZ::LCXBR:
    case SystemZ::LDEBR:
    case SystemZ::LDGR:
    case SystemZ::LDR:
    case SystemZ::LDXBR:
    case SystemZ::LEDBR:
    case SystemZ::LER:
    case SystemZ::LEXBR:
    case SystemZ::LGBR:
    case SystemZ::LGDR:
    case SystemZ::LGFR:
    case SystemZ::LGHR:
    case SystemZ::LGR:
    case SystemZ::LHR:
    case SystemZ::LLCR:
    case SystemZ::LLGCR:
    case SystemZ::LLGFR:
    case SystemZ::LLGHR:
    case SystemZ::LLHR:
    case SystemZ::LNDBR:
    case SystemZ::LNEBR:
    case SystemZ::LNXBR:
    case SystemZ::LPDBR:
    case SystemZ::LPEBR:
    case SystemZ::LPXBR:
    case SystemZ::LR:
    case SystemZ::LRVGR:
    case SystemZ::LRVR:
    case SystemZ::LXDBR:
    case SystemZ::LXEBR:
    case SystemZ::LXR:
    case SystemZ::SQDBR:
    case SystemZ::SQEBR:
    case SystemZ::SQXBR: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 4;
      // op: R2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(15);
      break;
    }
    case SystemZ::CFDBR:
    case SystemZ::CFEBR:
    case SystemZ::CFXBR:
    case SystemZ::CGDBR:
    case SystemZ::CGEBR:
    case SystemZ::CGXBR:
    case SystemZ::CPSDRdd:
    case SystemZ::CPSDRds:
    case SystemZ::CPSDRsd:
    case SystemZ::CPSDRss:
    case SystemZ::FIDBR:
    case SystemZ::FIEBR:
    case SystemZ::FIXBR: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 4;
      // op: R2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(15);
      // op: R3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      break;
    }
    case SystemZ::ADBR:
    case SystemZ::AEBR:
    case SystemZ::AGFR:
    case SystemZ::AGR:
    case SystemZ::ALCGR:
    case SystemZ::ALCR:
    case SystemZ::ALGFR:
    case SystemZ::ALGR:
    case SystemZ::ALR:
    case SystemZ::AR:
    case SystemZ::AXBR:
    case SystemZ::DDBR:
    case SystemZ::DEBR:
    case SystemZ::DLGR:
    case SystemZ::DLR:
    case SystemZ::DSGFR:
    case SystemZ::DSGR:
    case SystemZ::DXBR:
    case SystemZ::MDBR:
    case SystemZ::MDEBR:
    case SystemZ::MEEBR:
    case SystemZ::MLGR:
    case SystemZ::MSGFR:
    case SystemZ::MSGR:
    case SystemZ::MSR:
    case SystemZ::MXBR:
    case SystemZ::MXDBR:
    case SystemZ::NGR:
    case SystemZ::NR:
    case SystemZ::OGR:
    case SystemZ::OR:
    case SystemZ::SDBR:
    case SystemZ::SEBR:
    case SystemZ::SGFR:
    case SystemZ::SGR:
    case SystemZ::SLBR:
    case SystemZ::SLGBR:
    case SystemZ::SLGFR:
    case SystemZ::SLGR:
    case SystemZ::SLR:
    case SystemZ::SR:
    case SystemZ::SXBR:
    case SystemZ::XGR:
    case SystemZ::XR: {
      // op: R1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 4;
      // op: R2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(15);
      break;
    }
    case SystemZ::BASR:
    case SystemZ::BR: {
      // op: R2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(15);
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}
