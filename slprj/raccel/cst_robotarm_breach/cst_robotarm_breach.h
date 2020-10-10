#ifndef RTW_HEADER_cst_robotarm_breach_h_
#define RTW_HEADER_cst_robotarm_breach_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef cst_robotarm_breach_COMMON_INCLUDES_
#define cst_robotarm_breach_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "cst_robotarm_breach_98bf360f_6_gateway.h"
#include "cst_robotarm_breach_98bf360f_2_gateway.h"
#include "cst_robotarm_breach_98bf360f_7_gateway.h"
#include "cst_robotarm_breach_98bf360f_5_gateway.h"
#include "cst_robotarm_breach_98bf360f_1_gateway.h"
#include "cst_robotarm_breach_98bf360f_3_gateway.h"
#include "cst_robotarm_breach_98bf360f_4_gateway.h"
#endif
#include "cst_robotarm_breach_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#define MODEL_NAME cst_robotarm_breach
#define NSAMPLE_TIMES (3) 
#define NINPUTS (6)       
#define NOUTPUTS (6)     
#define NBLOCKIO (133) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (62)   
#elif NCSTATES != 62
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T krcxplu3eq [ 29 ] ; real_T dlgzaqgmhc [ 12 ] ; real_T
h124qx1phd ; real_T kyvfepmlch ; real_T a4h4awrudh ; real_T d4qhj2qvox ;
real_T ff0xl0o0on ; real_T knyvewjxd3 ; real_T kzvnckcdot ; real_T k0xhr3lmo2
; real_T lnddeflvkv ; real_T cicsqsen0r ; real_T ncmezuqmmk ; real_T
fllne2ej2o ; real_T isqdcvco3p ; real_T mmfxcblztm ; real_T fnwiftiak2 ;
real_T fnevqel4sp ; real_T cxcsyd5d1c ; real_T jndeowmqg5 ; real_T fwfn0fe1sh
; real_T bs4ylghjgz ; real_T aidyoivzbo ; real_T daldi2mwjh ; real_T
atgk44qqef ; real_T kfkj44nk3p ; real_T cw0yilgxki ; real_T gc0ufezm40 ;
real_T gaax23jywc ; real_T php12pluqb ; real_T hqug0gb1in ; real_T ghuv4nrpe3
; real_T ddsxiam50k ; real_T h0ga0ulw4o ; real_T otiyf2ict4 ; real_T
jvcsgidigm ; real_T grmrgx0ato ; real_T jihi4nct2b ; real_T i3zdseytux ;
real_T pen2tlbuc2 ; real_T etclrumkes ; real_T ps1m5ri5j1 ; real_T ejgueusult
; real_T ljrewaf2lo ; real_T f2w1fqz5qt ; real_T iqi5uemowu ; real_T
ebkbzp4ifa ; real_T cd0jqvz3v1 ; real_T oiq4fammfn ; real_T nji1qqccll ;
real_T aqydko43rs ; real_T a52ganzccv ; real_T pwffmskdll ; real_T iz0c33tt3q
; real_T ltooszp1wf ; real_T jv05vc0wdl ; real_T fzulu4txkm ; real_T
ngc2vhkcvx ; real_T f5npikm4p2 ; real_T nyfblsqmlt ; real_T che1xa0shi ;
real_T c1p1nl5zha ; real_T cvhnksc212 ; real_T oavnyz4xex ; real_T lqbtlsqcxh
; real_T nqyjzjhqbz ; real_T jgvdzme2mo ; real_T okyvttk103 ; real_T
puv1ifcb43 ; real_T ctvpv2ept2 ; real_T hgdvmrnotw ; real_T eq4gdqwc1e ;
real_T amm0am250j ; real_T apuphxyrha ; real_T b11x1b5dds ; real_T kmphhlf0c0
; real_T jkyfhps0ke ; real_T f4mz34xjdw ; real_T b0nvbtvute ; real_T
kwvtqc24nn ; real_T bccvxfaqok ; real_T i1zzbavhbp ; real_T lgamsddxfw [ 4 ]
; real_T mmt4jv2djd [ 4 ] ; real_T pzylr3xzgl [ 4 ] ; real_T os31fqwjpr [ 4 ]
; real_T myphwxfnds [ 9 ] ; real_T gq0aoqqtfi ; real_T gsxwzsrgs3 [ 4 ] ;
real_T amckjsk01h [ 4 ] ; real_T cxyv2au2fy [ 4 ] ; real_T b0pjn0qe1a [ 4 ] ;
real_T l5pujcrulu [ 4 ] ; real_T b2vobw2amc [ 4 ] ; real_T c4ncjpj4p3 [ 4 ] ;
real_T hbxx3xyytn [ 4 ] ; real_T puxn2q3jes [ 18 ] ; real_T fbkymqjw15 ;
real_T o1ldcw3ssi [ 4 ] ; real_T n51jz3r5ms [ 4 ] ; real_T nedkaormew [ 4 ] ;
real_T aowtlt2xsx [ 4 ] ; real_T fltnebkpfo [ 4 ] ; real_T b4ms4hfc5c [ 9 ] ;
real_T hiiihp2k0u ; real_T ase3lj3apj [ 4 ] ; real_T mevfua5fda [ 4 ] ;
real_T dycz5qe5i2 [ 4 ] ; real_T ar342mtoyy [ 4 ] ; real_T fntgtrllob [ 4 ] ;
real_T pfaxquxlh0 [ 9 ] ; real_T no5mc1kht1 ; real_T jcohfzsgmt [ 4 ] ;
real_T ecbwmrxmul [ 4 ] ; real_T bkephdao5q [ 4 ] ; real_T ptr4jxtzru [ 4 ] ;
real_T d1bzzxr1py [ 4 ] ; real_T mzskvlpl4t [ 9 ] ; real_T bml3meflbj ;
real_T nwltqugjxl [ 4 ] ; real_T nvp0xnvq03 [ 4 ] ; real_T moqztnnjfy [ 4 ] ;
real_T e2oog2ldlk [ 4 ] ; real_T l3qlly0y24 [ 4 ] ; real_T mzifsmwue2 [ 9 ] ;
real_T oew42em5vf ; real_T l4n2e5pdle [ 4 ] ; real_T gudjnx4gli ; real_T
bxxre2130j ; real_T kkv31bku2h ; real_T i1gvwgou24 ; real_T kl5k5speeu ;
real_T ftcpietbbk ; } B ; typedef struct { real_T gmlwc0qame ; real_T
c1yhchtyrr ; real_T b5meobzewc ; real_T phjhcjadmq ; real_T ea2ghjrony ;
real_T o3hjuvp5p4 ; real_T mfo0m5mdmb ; real_T aeyyeaotfv [ 2 ] ; real_T
pam2hwcmgh [ 2 ] ; real_T moim2kzboo [ 2 ] ; real_T or531t5xhw [ 2 ] ; real_T
b5a1f4pnjy [ 2 ] ; real_T npbefpr1fd [ 2 ] ; real_T f3meayyzxo [ 2 ] ; real_T
luph5aup2b [ 2 ] ; real_T ckldk5epkp [ 2 ] ; real_T d1vbkut3et [ 2 ] ; real_T
at2tnnhgl4 [ 2 ] ; real_T csi3mq51hx [ 2 ] ; real_T kbbzzmma32 [ 2 ] ; real_T
dfmbkkblmm [ 2 ] ; real_T islrfvewdp [ 2 ] ; real_T auu2gmyygn [ 2 ] ; real_T
mwifnouukc [ 2 ] ; real_T m4zzd3ud3d [ 2 ] ; real_T algewdgvo3 [ 2 ] ; real_T
b2yskfuawk [ 2 ] ; real_T kr1ntmuvlq [ 2 ] ; real_T ljqwv2uj1y [ 2 ] ; real_T
ogke1gvqz5 [ 2 ] ; real_T hf340lsch3 [ 2 ] ; real_T oxhptxmnuv [ 2 ] ; real_T
pncbg0ft22 [ 2 ] ; real_T pjngd0vx0n [ 2 ] ; real_T gpqot4g4wt [ 2 ] ; real_T
krzcgnqi1u [ 2 ] ; real_T ixpnfrhln1 [ 2 ] ; real_T jmjufyutkh [ 2 ] ; real_T
mfkpdyx02s [ 2 ] ; real_T on2e1zo2kz [ 2 ] ; real_T kqufqx0tu5 ; real_T
el1lpuw5zq ; real_T ez5xo4m5re ; real_T gawt3eqo1w ; real_T btzzvjv32s ;
real_T a4ncrv0q4x ; real_T cujerjqnlc ; real_T etc2elb4q0 ; real_T ix5mp3senf
; real_T ka3q1qehwh ; real_T iyz54pfzbq ; real_T lhens4aog5 ; real_T
njuj213ft1 ; real_T hgs1s5cbrg ; real_T lzapf4uzyf ; real_T jnseaklp1y ;
real_T f4jjebddb5 ; real_T lwhxhj0cgm ; real_T ospktyrmu3 ; real_T jz4witzby0
; real_T ku4umw2hdw ; real_T eh4fvnrcpe ; real_T lhvgthtwgl ; real_T
hahir0y4uj ; real_T hqk0upav5k ; real_T pneozxjlkn ; real_T oep4q2a05l ;
real_T adymbo4t3h ; real_T ir1daw3liz ; real_T axlsmtzflm ; real_T bhpq141ewe
; real_T lz0ilv4wwe ; real_T bmklrdesul ; real_T dxsqzsmbnr ; real_T
itz0oanntq ; real_T e5jo5xbtad ; real_T dwtgertbzd ; real_T pyaa30hu1l ;
real_T dqh2udag13 ; real_T ei5jzybccv ; real_T csbbxlyjz3 ; real_T lwufoxa2ik
; real_T bk0lalbjqp ; void * gykjnl45ou ; void * nm1pedohdu ; void *
i2d1fpfnkr ; void * do23rw15bt ; void * c3cajcxxop ; void * nkfuqn44a2 ; void
* g1iq3vbocm ; void * al2khf0zpj ; void * iursawrbar ; void * ngfigwji41 ;
struct { void * AQHandles ; void * SlioLTF ; } apdjv21fm3 ; struct { void *
AQHandles ; void * SlioLTF ; } mh2lzbnvyc ; struct { void * AQHandles ; void
* SlioLTF ; } kjrs0t1nm4 ; struct { void * AQHandles ; void * SlioLTF ; }
dautlnn30u ; struct { void * AQHandles ; void * SlioLTF ; } kvbjdddl4n ;
struct { void * AQHandles ; void * SlioLTF ; } ava0ojyjuv ; struct { void *
AQHandles ; void * SlioLTF ; } ps3yjeqnel ; struct { void * AQHandles ; void
* SlioLTF ; } gl0wpxzu2q ; struct { void * AQHandles ; void * SlioLTF ; }
oicd0ngvav ; struct { void * AQHandles ; void * SlioLTF ; } ptm21fclna ;
struct { void * AQHandles ; void * SlioLTF ; } oqhwzcjbbx ; struct { void *
AQHandles ; void * SlioLTF ; } mkhdp3gdkd ; struct { void * AQHandles ; void
* SlioLTF ; } e2gcoq4oqe ; struct { void * AQHandles ; void * SlioLTF ; }
h22loax0ke ; struct { void * AQHandles ; void * SlioLTF ; } as0djmc41t ;
struct { void * AQHandles ; void * SlioLTF ; } ejymxznzxh ; struct { void *
AQHandles ; void * SlioLTF ; } o1kxnuxpyj ; struct { void * AQHandles ; void
* SlioLTF ; } bxxgxkrr2c ; struct { void * AQHandles ; void * SlioLTF ; }
kfd3qrvgfd ; struct { void * AQHandles ; void * SlioLTF ; } igwari5mqz ;
struct { void * AQHandles ; void * SlioLTF ; } ewqrtgdvx2 ; struct { void *
AQHandles ; void * SlioLTF ; } dsgwphpbza ; struct { void * AQHandles ; void
* SlioLTF ; } aw4efzdd4c ; struct { void * AQHandles ; void * SlioLTF ; }
be53dny0c5 ; struct { void * AQHandles ; void * SlioLTF ; } kq3yodl2bt ;
struct { void * AQHandles ; void * SlioLTF ; } ebjpqr4c4g ; struct { void *
AQHandles ; void * SlioLTF ; } ptu5jdgl35 ; struct { void * AQHandles ; void
* SlioLTF ; } ilijwxnun0 ; struct { void * AQHandles ; void * SlioLTF ; }
odqw4yty3p ; struct { void * AQHandles ; void * SlioLTF ; } kzjcgmt1r3 ;
struct { void * AQHandles ; void * SlioLTF ; } f2efmur0hp ; struct { void *
AQHandles ; void * SlioLTF ; } mskhnw4qrr ; struct { void * AQHandles ; void
* SlioLTF ; } d3ef2qdubj ; struct { void * AQHandles ; void * SlioLTF ; }
dg12hpmswq ; struct { void * AQHandles ; void * SlioLTF ; } kx25qhu3r4 ;
struct { void * AQHandles ; void * SlioLTF ; } monl4eukr3 ; struct { void *
AQHandles ; void * SlioLTF ; } ngtywitjou ; struct { void * AQHandles ; void
* SlioLTF ; } l4k2ljdewv ; struct { void * AQHandles ; void * SlioLTF ; }
blegl3r340 ; struct { void * AQHandles ; void * SlioLTF ; } ppjxynpq1c ;
struct { void * AQHandles ; void * SlioLTF ; } erbnwcwrj1 ; struct { void *
AQHandles ; void * SlioLTF ; } kx4roesdqx ; struct { void * AQHandles ; void
* SlioLTF ; } ejuuwrge5c ; struct { void * AQHandles ; void * SlioLTF ; }
mtedhvdhqd ; struct { void * AQHandles ; void * SlioLTF ; } jg2vujfrzo ;
struct { void * AQHandles ; void * SlioLTF ; } g5kyzenj0k ; struct { void *
AQHandles ; void * SlioLTF ; } larmidhtrj ; struct { void * AQHandles ; void
* SlioLTF ; } co45xeckac ; void * ocpy12p22k ; void * hcrcwgbmvq ; void *
az1yo1muxe ; void * fjxbkklw4z ; void * bzp4psoihm ; void * esa01bvjvm ; void
* kwq3so20nv ; void * dw4pbexevd ; void * bnpaeznqz0 ; void * e5wsaqztdu ;
void * ajpv151fp2 ; void * dmsckoggfy ; void * bkxjnhwg4q ; void * mehrggalcc
; void * pmdtly2tim ; void * kdqcwt3oic ; void * gq1bwlllvx ; void *
d110twjzhx ; void * k0pzsmno02 ; void * l0tjrmchqd ; void * kcmwywlxl1 ; void
* pufhjztccr ; void * aqd3u0h4s2 ; void * bhfc4c1rg3 ; void * kiaglq3vqk ;
void * ei3pjfumgv ; void * ny31yfa2vw ; void * mwyq2uplon ; void * hgk3rufgjw
; void * n2i2jdgs4t ; void * ejmmacq22h ; void * hrkrw20ytk ; void *
b4ac4nh15p ; void * p1rlw4icxg ; void * iwuex0mfjx ; void * fdwlxsnzv1 ; void
* mm5rcdx55z ; void * l2qm1h0rd5 ; void * ckrv2h1vj2 ; void * odfcvqfzvj ;
void * mluequoe3f ; void * jtehowy45m ; void * ma153abo0u ; void * octvsy2oca
; void * dnnxvtha3r ; void * pelwuspvpm ; void * oapgvyjuop ; void *
mtf42ubwyf ; void * gzskxcmvxu ; void * lwdpq5zjjk ; void * lvrxzc3xbz ; void
* kxuuq5q1xq ; void * ctneexngj0 ; void * d4susot5ug ; void * o2qgzkksu5 ;
void * atywinawwy ; void * eq0pqdmgzx ; void * jaseroeq2i ; void * jq5aog1ruq
; void * okyxvhuh1i ; int_T eqfboolvki ; int_T joonqvsdqa ; int_T bqqyvce3il
[ 5 ] ; int_T bf15x1kmhl ; int_T glcb0crgzp [ 10 ] ; int_T haqsbpukj2 ; int_T
naozloifhf [ 5 ] ; int_T kaw3ejljvu ; int_T ena1m1tqgi [ 5 ] ; int_T
fsft1isk0m ; int_T oapkaomns3 [ 5 ] ; int_T a5smqjgxxe ; int_T aymgehdyan [ 5
] ; int_T ftg3rfhku0 ; int_T hsuxbusn10 ; int_T ky2erwn5c2 ; int_T gbfcuomzsu
; int_T lyge1xjidb ; int_T f2ti4rhiod ; int_T fqxwazsrki ; int_T frhwhsikv5 ;
int_T ojsecf1orb ; int_T ianxcwejev ; int_T nigubjutdn ; int_T cszj3qgv5l ;
int_T mrgke35tge ; int32_T jvlqksr05b ; int32_T mtqczrwkkn ; int32_T
jxqzqpx1f2 ; int32_T k1zspym0ms ; int32_T bewafdk0ul ; int32_T my5qkp4udk ;
boolean_T f2xradlusy ; boolean_T gawo34ll5o ; boolean_T mqz5cm5qxm ;
boolean_T nxzrdql5d4 ; boolean_T fk5fuxns4p ; boolean_T grvmqcekmn ;
boolean_T ocauagwkec ; boolean_T dljf4h0sju ; boolean_T fbnobjwcab ;
boolean_T jrbx2ydixp ; boolean_T hsyrbgvv0a ; boolean_T c1giqj4jql ;
boolean_T mdy50akwic ; boolean_T gdbkrwx2mt ; } DW ; typedef struct { real_T
lbl1bst0em [ 28 ] ; real_T hzgkjmkam3 ; real_T hgl1hrlhol ; real_T h5wdubnkbp
; real_T pdkkwspnr1 ; real_T l1zc10gh5a ; real_T kmsnf4jarc ; real_T
pziburvfat [ 4 ] ; real_T ixvwzsiq3g [ 8 ] ; real_T a3wszcfpqa [ 4 ] ; real_T
hgiqkf2r13 [ 4 ] ; real_T os2il0fse5 [ 4 ] ; real_T a4sfa3kge2 [ 4 ] ; } X ;
typedef struct { real_T lbl1bst0em [ 28 ] ; real_T hzgkjmkam3 ; real_T
hgl1hrlhol ; real_T h5wdubnkbp ; real_T pdkkwspnr1 ; real_T l1zc10gh5a ;
real_T kmsnf4jarc ; real_T pziburvfat [ 4 ] ; real_T ixvwzsiq3g [ 8 ] ;
real_T a3wszcfpqa [ 4 ] ; real_T hgiqkf2r13 [ 4 ] ; real_T os2il0fse5 [ 4 ] ;
real_T a4sfa3kge2 [ 4 ] ; } XDot ; typedef struct { boolean_T lbl1bst0em [ 28
] ; boolean_T hzgkjmkam3 ; boolean_T hgl1hrlhol ; boolean_T h5wdubnkbp ;
boolean_T pdkkwspnr1 ; boolean_T l1zc10gh5a ; boolean_T kmsnf4jarc ;
boolean_T pziburvfat [ 4 ] ; boolean_T ixvwzsiq3g [ 8 ] ; boolean_T
a3wszcfpqa [ 4 ] ; boolean_T hgiqkf2r13 [ 4 ] ; boolean_T os2il0fse5 [ 4 ] ;
boolean_T a4sfa3kge2 [ 4 ] ; } XDis ; typedef struct { real_T lbl1bst0em [ 28
] ; real_T hzgkjmkam3 ; real_T hgl1hrlhol ; real_T h5wdubnkbp ; real_T
pdkkwspnr1 ; real_T l1zc10gh5a ; real_T kmsnf4jarc ; real_T pziburvfat [ 4 ]
; real_T ixvwzsiq3g [ 8 ] ; real_T a3wszcfpqa [ 4 ] ; real_T hgiqkf2r13 [ 4 ]
; real_T os2il0fse5 [ 4 ] ; real_T a4sfa3kge2 [ 4 ] ; } CStateAbsTol ;
typedef struct { real_T lbl1bst0em [ 28 ] ; real_T hzgkjmkam3 ; real_T
hgl1hrlhol ; real_T h5wdubnkbp ; real_T pdkkwspnr1 ; real_T l1zc10gh5a ;
real_T kmsnf4jarc ; real_T pziburvfat [ 4 ] ; real_T ixvwzsiq3g [ 8 ] ;
real_T a3wszcfpqa [ 4 ] ; real_T hgiqkf2r13 [ 4 ] ; real_T os2il0fse5 [ 4 ] ;
real_T a4sfa3kge2 [ 4 ] ; } CXPtMin ; typedef struct { real_T lbl1bst0em [ 28
] ; real_T hzgkjmkam3 ; real_T hgl1hrlhol ; real_T h5wdubnkbp ; real_T
pdkkwspnr1 ; real_T l1zc10gh5a ; real_T kmsnf4jarc ; real_T pziburvfat [ 4 ]
; real_T ixvwzsiq3g [ 8 ] ; real_T a3wszcfpqa [ 4 ] ; real_T hgiqkf2r13 [ 4 ]
; real_T os2il0fse5 [ 4 ] ; real_T a4sfa3kge2 [ 4 ] ; } CXPtMax ; typedef
struct { real_T gzuszwt5jb ; real_T mdpyyamjp5 ; real_T fauogszbpi ; real_T
a24gog0xr2 ; real_T iunom5bxpn ; real_T bp5urmum4s ; real_T pkuki0xzck ;
real_T d5rzy4g1l4 ; real_T ha4fkrx4qe ; real_T jp4anatqt0 ; real_T cpolxnigof
; real_T ox35oemztn ; real_T kvmrm45omg ; real_T cdryi3b5gi ; real_T
p0zlmyaw3h ; real_T adhgylsgdk ; real_T f2u4c3h2rw ; real_T jqkc5r0usf ;
real_T h02unwobz1 ; real_T lo4lcjbolp ; real_T f32azmc0wk ; real_T onqtq4ioih
; real_T jxajyx53xw ; real_T nwqrqj10ub ; real_T imquojdpwy ; real_T
jae4ati2uh ; real_T oxtxcdmyjh ; real_T ono11k1df3 ; real_T gp1w0j2tji ;
real_T gieov54o0o ; real_T p0lttxuheu ; real_T gicqghykwh ; real_T mt0xbakdi1
; real_T mxozworjpr ; real_T awsv3jpxdy ; real_T dz3wnjr4x0 ; real_T
msz5lmp3i1 ; real_T ckrt1h03ts ; real_T orct0xpgcz ; real_T hs513il5yy ;
real_T lxk21cvrkx ; real_T mj3gjevq10 ; real_T mcu4t0iwcm ; real_T ifveck3l5t
; real_T pyb152pykl ; real_T kw2qaqqsue ; real_T adjnd50sbf ; real_T
ls0gkvzpfn ; real_T l23gqgx1li ; real_T bfjcltsn5k ; real_T owmtfmjw53 ;
real_T bbxnufyfbr ; real_T ppqb4zey3w ; } ZCV ; typedef struct { int_T ir [
48 ] ; int_T jc [ 63 ] ; real_T pr [ 48 ] ; } MassMatrix ; typedef struct {
real_T czzusp55mg ; real_T oaqp25vha4 ; real_T f01of5bdla ; real_T lnvmafogi2
; real_T b3tikeyk0u ; real_T jhowxmdxl0 ; } ExtU ; typedef struct { real_T
keyyckin41 ; real_T gpojpe3hlv ; real_T kv3guwywho ; real_T b1ehm1zurn ;
real_T fu4qp3lwyh ; real_T jfavcx5pxi ; } ExtY ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T dFilt [ 2 ]
; real_T nFilt [ 2 ] ; real_T Integrator_IC ; real_T Gi1_Gain ; real_T
Sp1_Gain ; real_T DiscreteTransferFcn_InitialStates ; real_T Gp1_Gain ;
real_T Gd1_Gain ; real_T D1_UpperSat ; real_T D1_LowerSat ; real_T
Integrator1_IC ; real_T Gi2_Gain ; real_T Sp2_Gain ; real_T
DiscreteTransferFcn1_InitialStates ; real_T Gp2_Gain ; real_T Gd2_Gain ;
real_T D2_UpperSat ; real_T D2_LowerSat ; real_T Integrator2_IC ; real_T
Gi3_Gain ; real_T Sp3_Gain ; real_T DiscreteTransferFcn2_InitialStates ;
real_T Gp3_Gain ; real_T Gd3_Gain ; real_T D3_UpperSat ; real_T D3_LowerSat ;
real_T Integrator3_IC ; real_T Gi4_Gain ; real_T Sp4_Gain ; real_T
DiscreteTransferFcn3_InitialStates ; real_T Gp4_Gain ; real_T Gd4_Gain ;
real_T D4_UpperSat ; real_T D4_LowerSat ; real_T Integrator4_IC ; real_T
Gi5_Gain ; real_T Sp5_Gain ; real_T DiscreteTransferFcn4_InitialStates ;
real_T Gp5_Gain ; real_T Gd5_Gain ; real_T D5_UpperSat ; real_T D5_LowerSat ;
real_T Integrator5_IC ; real_T Gi6_Gain ; real_T Sp6_Gain ; real_T
DiscreteTransferFcn5_InitialStates ; real_T Gp6_Gain ; real_T Gd6_Gain ;
real_T D6_UpperSat ; real_T D6_LowerSat ; real_T R1_Gain ; real_T R2_Gain ;
real_T R3_Gain ; real_T R4_Gain ; real_T R5_Gain ; real_T R6_Gain ; real_T
Break_Value ; real_T Break1_Value ; real_T Break2_Value ; real_T Break3_Value
; real_T Break4_Value ; real_T Break5_Value ; real_T Constant1_Value ; real_T
IC_Value ; real_T u5_UpperSat ; real_T u5_LowerSat ; real_T u51_UpperSat ;
real_T u51_LowerSat ; real_T u52_UpperSat ; real_T u52_LowerSat ; real_T
u53_UpperSat ; real_T u53_LowerSat ; real_T u54_UpperSat ; real_T
u54_LowerSat ; real_T u55_UpperSat ; real_T u55_LowerSat ; } ; extern const
char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW
rtDW ; extern ExtU rtU ; extern ExtY rtY ; extern MassMatrix rtMassMatrix ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
cst_robotarm_breach_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS
; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
