#ifndef RTW_HEADER_cst_robotarm_original_h_
#define RTW_HEADER_cst_robotarm_original_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef cst_robotarm_original_COMMON_INCLUDES_
#define cst_robotarm_original_COMMON_INCLUDES_
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
#include "cst_robotarm_original_6f156994_6_gateway.h"
#include "cst_robotarm_original_6f156994_2_gateway.h"
#include "cst_robotarm_original_6f156994_7_gateway.h"
#include "cst_robotarm_original_6f156994_5_gateway.h"
#include "cst_robotarm_original_6f156994_1_gateway.h"
#include "cst_robotarm_original_6f156994_3_gateway.h"
#include "cst_robotarm_original_6f156994_4_gateway.h"
#endif
#include "cst_robotarm_original_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#define MODEL_NAME cst_robotarm_original
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (6)     
#define NBLOCKIO (120) 
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
typedef struct { real_T m2jjwsrlbd [ 29 ] ; real_T gpydjo5krx [ 12 ] ; real_T
dwxdtflowp ; real_T gyd45yhrb0 ; real_T lbmqmf13sh ; real_T lxngnkv35z ;
real_T a0dbecbscz ; real_T p52igst3gi [ 4 ] ; real_T mgpqcthgau ; real_T
mexhqthd1u ; real_T cmq4ia5e5i ; real_T beactzcnhg ; real_T ew3qvg4htl ;
real_T iwabd3jvmn ; real_T fvblcfumvs ; real_T gq10553zct ; real_T fnu1t3c25e
; real_T gsf1wnk0dh [ 4 ] ; real_T cqfxofdy2x [ 4 ] ; real_T hcaj111zjs ;
real_T eho11whmzv [ 4 ] ; real_T ghf5k2qwns [ 9 ] ; real_T hcffmyavz3 ;
real_T aau4qscxqc [ 4 ] ; real_T hb1gynnbug [ 4 ] ; real_T jad123dllm ;
real_T gssxmsm1u4 ; real_T ahmlb2tpsn ; real_T pzzwd3lnfe ; real_T gvzfoeok20
; real_T miplivlyhr ; real_T d30jnvmibe ; real_T ed0x1weluj ; real_T
lerd3i21nu ; real_T mwza4ency5 ; real_T mqijg4lgem [ 4 ] ; real_T gl00bo33dy
[ 4 ] ; real_T gh1rrww104 [ 4 ] ; real_T fevlcvnz5r ; real_T malqpcsu2s [ 4 ]
; real_T kkeqotz05a [ 4 ] ; real_T ehret13uk4 [ 4 ] ; real_T abgvchli2i [ 18
] ; real_T amiwtetlxb ; real_T ms1z3tsizg [ 4 ] ; real_T gktoanyk4z [ 4 ] ;
real_T eua5qdpl0o ; real_T c5e4njud25 ; real_T orrj54i1aj ; real_T ek20cny3ez
; real_T hjapierqks ; real_T n0qv0hb2ss ; real_T g2u01f0n1g ; real_T
nusef2vdyd ; real_T bbxkrfmvko ; real_T oapizwvtjv [ 4 ] ; real_T clmozh0gh4
[ 4 ] ; real_T mjo0qmrl1w ; real_T jen3dngjzc [ 4 ] ; real_T awdmp3eigf [ 9 ]
; real_T kurkqa5zwd ; real_T hilglkudbg [ 4 ] ; real_T kfhppmeqms [ 4 ] ;
real_T igybt2peud ; real_T lnwu3wlfhg ; real_T pk4qwm0mut ; real_T crn43in4pr
; real_T kbicccj23s ; real_T lo0ojzlm13 ; real_T c0jld3eln1 ; real_T
i2btnrrmvd ; real_T bj5rgp4q21 ; real_T o04jj02qiz [ 4 ] ; real_T nwuia1pahi
[ 4 ] ; real_T kiueaykv5e ; real_T dqmw4fhx14 [ 4 ] ; real_T ohur23ysum [ 9 ]
; real_T aurpcbuhub ; real_T d4eu5sdm4t [ 4 ] ; real_T b5fzixuwzk [ 4 ] ;
real_T gvve0qid0c ; real_T i5sq4akk1c ; real_T hlvvjykzts ; real_T dvaiasoovm
; real_T bvsjetcrto ; real_T grzgi3w44a ; real_T k5pqt2ul41 ; real_T
n41mws5fmv ; real_T nc0gz0afr0 ; real_T kpvaut1f0z ; real_T ihc2fbedkz [ 4 ]
; real_T eppca1vjoc [ 4 ] ; real_T blkzncukfb ; real_T m5j42r4u0p [ 4 ] ;
real_T e3txp1wm1m [ 9 ] ; real_T opaiauq1gv ; real_T pb0sw1pbnm [ 4 ] ;
real_T mvicam42is [ 4 ] ; real_T bqsdzmrrnz ; real_T okp4jvlpid ; real_T
m2b0x0ugtl ; real_T mlg3v2vp41 ; real_T ksjphlyg4k ; real_T juquj3cpm2 ;
real_T apgokrv2pc ; real_T icwlygycrj ; real_T nhpl1zbtn1 ; real_T mz3s2zjmce
[ 4 ] ; real_T e5jutfqvzq [ 4 ] ; real_T gmoevf1lrx ; real_T d35bpuglcw [ 4 ]
; real_T lbft5jvmo4 [ 9 ] ; real_T mv2033hecj ; real_T fgvvgvfqb2 [ 4 ] ;
real_T kcogqti5lt ; real_T fuycbxh103 ; real_T ksi1jj2j2i ; real_T oopmuhnlga
; real_T ndqjgxllq1 ; real_T drceecbam2 ; } B ; typedef struct { real_T
datwzvdkzf ; real_T jsufpcm2h1 [ 2 ] ; real_T oteri1his1 ; real_T hm0fbffqcv
[ 2 ] ; real_T onotso1e4o [ 2 ] ; real_T mdwdn4mq5y [ 2 ] ; real_T nay0nx50aq
[ 2 ] ; real_T ijg51izxkl [ 2 ] ; real_T cqhilrskhq ; real_T b51bwduuqj [ 2 ]
; real_T cmmyis0zms [ 2 ] ; real_T bjdhfc5lhz [ 2 ] ; real_T fqcn0fobut [ 2 ]
; real_T i4yre5y4ym [ 2 ] ; real_T l4kasjhfye [ 2 ] ; real_T l0y1034bd5 [ 2 ]
; real_T kyvarcad3d [ 2 ] ; real_T o11cnuhibt ; real_T jafswfarp2 [ 2 ] ;
real_T lzxapb1icv [ 2 ] ; real_T bvsxd0r1dp [ 2 ] ; real_T azqlqnux04 [ 2 ] ;
real_T ny5kxgxak5 [ 2 ] ; real_T i5kbys15rw ; real_T dp5ayouabh [ 2 ] ;
real_T ojlmayfn5v [ 2 ] ; real_T av2yidzrx1 [ 2 ] ; real_T bfsrb41ojm [ 2 ] ;
real_T iziuo251lm [ 2 ] ; real_T hlednh44vj ; real_T ji4mf0t5wt [ 2 ] ;
real_T fdd414vrzu [ 2 ] ; real_T jftwl5tifw [ 2 ] ; real_T koirnrkaxf [ 2 ] ;
real_T j1sr35bzb5 [ 2 ] ; real_T gx3cfax52r ; real_T o0po5lhjyj [ 2 ] ;
real_T khqn4cuxu4 [ 2 ] ; real_T iuiv3zyr1f [ 2 ] ; real_T ff51t1byru [ 2 ] ;
real_T fl2m0qqpfg ; real_T jzsxvhcibg ; real_T heujebxouj ; real_T dirkxjwsro
; real_T pvucch4vyc ; real_T lm0tw5kdhe ; real_T bymgp30epy ; real_T
o4fzjza1u2 ; real_T jfxmq0tfqx ; real_T mq4uv2mjqx ; real_T pztqturi1b ;
real_T kbgbop14eq ; real_T jcz3rplte2 ; real_T igqahwaopd ; real_T fy1kz0sajb
; real_T ndfouz54yl ; real_T fb5swmqdt5 ; real_T bnfwdbxi2t ; real_T
llk4fj1ncu ; real_T cr1izahinw ; real_T dyznqu2x02 ; real_T peqv01wo33 ;
real_T nshioqabso ; real_T henb0ohgwy ; real_T mix0lfmbff ; real_T j3gsjqtsgp
; real_T aszjr4q3fo ; real_T av1vfdfdhf ; real_T j5y42qfywc ; real_T
gw1h2vmwt3 ; real_T p3obvvkwm4 ; real_T hm0epu1iul ; real_T ijbwqrc1eb ;
real_T nr3ar0p5mz ; real_T blamix54h1 ; real_T ksns5guy05 ; real_T fzrdocqyjw
; real_T gjwwzw0tqq ; real_T c2umyviniw ; real_T ipcmf1bcmr ; real_T
ihznmq1yfj ; real_T kqoo2vremt ; real_T oxhl02ezne ; void * hymu3nho1w ; void
* l4g30qb3cj ; void * npqncjuh4p ; void * ga2nkpqzkl ; void * pkgsm2ff5v ;
void * eth2ta0ixd ; void * lmer5zwzkb ; void * d5cfrz0sqv ; void * koovb0fnmu
; void * cys0autzjh ; struct { void * LoggedData [ 2 ] ; } gio0jbhtv1 ;
struct { void * AQHandles ; void * SlioLTF ; } o4rzjlwnp0 ; struct { void *
AQHandles ; void * SlioLTF ; } ess5xfw1cg ; struct { void * AQHandles ; void
* SlioLTF ; } juqvuixxqk ; struct { void * AQHandles ; void * SlioLTF ; }
p5riohe4an ; struct { void * AQHandles ; void * SlioLTF ; } kumdlxv2pj ;
struct { void * AQHandles ; void * SlioLTF ; } gxx4qdhgam ; struct { void *
AQHandles ; void * SlioLTF ; } grbxtmi4gy ; struct { void * AQHandles ; void
* SlioLTF ; } kf2l0bp4qf ; struct { void * AQHandles ; void * SlioLTF ; }
cbaon5wpyd ; struct { void * AQHandles ; void * SlioLTF ; } myfwmwkhyi ;
struct { void * AQHandles ; void * SlioLTF ; } mhxdgqlean ; void * lq5wns3dvy
; void * luqgty2sqr ; void * g34wywbvoq ; void * lsfasqabq3 ; void *
hbmi1lc3z3 ; void * pqcmol2drt ; void * oodgx5kilx ; void * eav1ttze4f ; void
* ivpcyqn3ul ; void * dmyokvey25 ; void * ipgckui03o ; void * gtngycvr1v ;
void * dau5zpxltv ; void * edbcntajjf ; void * jqjgsrcmx4 ; void * pifdwitl4p
; void * a2ojuitiri ; void * c42r12fxzd ; void * f4lbxhmbfn ; void *
ggcgxltge3 ; void * hfd2kdvhft ; void * dc0ikbgay5 ; void * bfzy1zqdrk ; void
* nq2flvb3sw ; void * mp4imkc1ci ; void * p1olpso2qf ; void * arv32tkm5f ;
void * odxr5jqq3h ; void * a3l0bzdtov ; void * nvdxrfwwjf ; void * ckf13aqezk
; void * kl0ddpmtll ; void * lx2smnavwa ; void * btcsxpr1e4 ; void *
pukzy5r4yz ; void * htibunu1u0 ; void * er43jccux2 ; void * ox542gociu ; void
* etigdemkn4 ; void * lmvverya33 ; void * b350mxxcd5 ; void * gew2edtgzk ;
void * j5jrcxb4qp ; void * hzbocz5msq ; void * oplcq4gapx ; void * k3rk53cctg
; void * gabyx120co ; void * klyw22x3a5 ; void * ems1vov11x ; void *
an2c1edyuy ; void * nl1dyr0lbo ; void * pjclqm00ip ; void * ps0145mupz ; void
* huffmdf0bh ; void * ehqwjnwps1 ; void * k31d01gzwi ; void * c14icyaj2t ;
void * kds0ednfxw ; void * oegvahtq2n ; void * prq00gknau ; struct { void *
AQHandles ; void * SlioLTF ; } iasjyosrf4 ; struct { void * AQHandles ; void
* SlioLTF ; } krymky00fw ; struct { void * AQHandles ; void * SlioLTF ; }
aty3pq5a3r ; struct { void * AQHandles ; void * SlioLTF ; } iasjyosrf4l ;
struct { void * AQHandles ; void * SlioLTF ; } krymky00fwv ; struct { void *
AQHandles ; void * SlioLTF ; } aty3pq5a3rd ; struct { void * AQHandles ; void
* SlioLTF ; } iasjyosrf4lj ; struct { void * AQHandles ; void * SlioLTF ; }
krymky00fwve ; struct { void * AQHandles ; void * SlioLTF ; } aty3pq5a3rdc ;
struct { void * AQHandles ; void * SlioLTF ; } iasjyosrf4ljd ; struct { void
* AQHandles ; void * SlioLTF ; } krymky00fwveg ; struct { void * AQHandles ;
void * SlioLTF ; } aty3pq5a3rdcg ; struct { void * AQHandles ; void * SlioLTF
; } iasjyosrf4ljd4 ; struct { void * AQHandles ; void * SlioLTF ; }
krymky00fwvegl ; struct { void * AQHandles ; void * SlioLTF ; }
aty3pq5a3rdcgn ; struct { void * AQHandles ; void * SlioLTF ; }
iasjyosrf4ljd4p ; struct { void * AQHandles ; void * SlioLTF ; }
krymky00fwvegln ; struct { void * AQHandles ; void * SlioLTF ; }
aty3pq5a3rdcgno ; int_T m04ffi3voe ; int_T hi321ofhgd ; int_T g5q2xfjrgx [ 5
] ; int_T fsbuyljt50 ; int_T lexhviy3rv [ 10 ] ; int_T cjsxeosjk2 ; int_T
nol4hxpj0x [ 5 ] ; int_T ejh5vaqytw ; int_T luhysk1n03 [ 5 ] ; int_T
k2fawuwm0d ; int_T icml34wspz [ 5 ] ; int_T ku5ahlmc4f ; int_T jud4hp33kc [ 5
] ; int_T ghzu5o14kj ; int_T pyqarul1xn ; int_T fkc3rip3zs ; int_T cogjmacv4u
; int_T jydlut0pwv ; int_T ehzmofotam ; int_T hql2bzxowu ; int_T juy3suewuj ;
int_T mq0a0ndtrk ; int_T ou532tpast ; int_T mzm23e00xt ; int_T iyoi2f4v52 ;
int_T cdiv2a04j3 ; int32_T gdocvflmcr ; int32_T bwyrw3acho ; int32_T
cyfqrvqkg4 ; int32_T p1xxvhgf3v ; int32_T iu2s2vbg4w ; int32_T juiuitfey0 ;
boolean_T mwqbybpzbm ; boolean_T jd0hmob0i2 ; boolean_T nlzyi5ptlo ;
boolean_T d0kezpx15z ; boolean_T bivnmvek33 ; boolean_T e0l4bcv3bo ;
boolean_T p4a2zeoo4u ; boolean_T id5ps042a5 ; boolean_T izq0ljwvwg ;
boolean_T onmzrckjm1 ; boolean_T dolp5gqqnu ; boolean_T l5d4wzhi0y ;
boolean_T ogtrao1rto ; boolean_T irp4xih23c ; } DW ; typedef struct { real_T
ce41paa4nx [ 28 ] ; real_T i5qlpo3uju ; real_T mcc3w3jrrs [ 4 ] ; real_T
mhwbc1sinq ; real_T p2hm1z5lwa [ 8 ] ; real_T h45mkuq5bv ; real_T gh2q4rwxqd
[ 4 ] ; real_T nxxszasjmi ; real_T cdzh5av0vj [ 4 ] ; real_T jx11onf5nn ;
real_T jeqh2re42y [ 4 ] ; real_T o3frtqftuu ; real_T are00on1hs [ 4 ] ; } X ;
typedef struct { real_T ce41paa4nx [ 28 ] ; real_T i5qlpo3uju ; real_T
mcc3w3jrrs [ 4 ] ; real_T mhwbc1sinq ; real_T p2hm1z5lwa [ 8 ] ; real_T
h45mkuq5bv ; real_T gh2q4rwxqd [ 4 ] ; real_T nxxszasjmi ; real_T cdzh5av0vj
[ 4 ] ; real_T jx11onf5nn ; real_T jeqh2re42y [ 4 ] ; real_T o3frtqftuu ;
real_T are00on1hs [ 4 ] ; } XDot ; typedef struct { boolean_T ce41paa4nx [ 28
] ; boolean_T i5qlpo3uju ; boolean_T mcc3w3jrrs [ 4 ] ; boolean_T mhwbc1sinq
; boolean_T p2hm1z5lwa [ 8 ] ; boolean_T h45mkuq5bv ; boolean_T gh2q4rwxqd [
4 ] ; boolean_T nxxszasjmi ; boolean_T cdzh5av0vj [ 4 ] ; boolean_T
jx11onf5nn ; boolean_T jeqh2re42y [ 4 ] ; boolean_T o3frtqftuu ; boolean_T
are00on1hs [ 4 ] ; } XDis ; typedef struct { real_T ce41paa4nx [ 28 ] ;
real_T i5qlpo3uju ; real_T mcc3w3jrrs [ 4 ] ; real_T mhwbc1sinq ; real_T
p2hm1z5lwa [ 8 ] ; real_T h45mkuq5bv ; real_T gh2q4rwxqd [ 4 ] ; real_T
nxxszasjmi ; real_T cdzh5av0vj [ 4 ] ; real_T jx11onf5nn ; real_T jeqh2re42y
[ 4 ] ; real_T o3frtqftuu ; real_T are00on1hs [ 4 ] ; } CStateAbsTol ;
typedef struct { real_T ce41paa4nx [ 28 ] ; real_T i5qlpo3uju ; real_T
mcc3w3jrrs [ 4 ] ; real_T mhwbc1sinq ; real_T p2hm1z5lwa [ 8 ] ; real_T
h45mkuq5bv ; real_T gh2q4rwxqd [ 4 ] ; real_T nxxszasjmi ; real_T cdzh5av0vj
[ 4 ] ; real_T jx11onf5nn ; real_T jeqh2re42y [ 4 ] ; real_T o3frtqftuu ;
real_T are00on1hs [ 4 ] ; } CXPtMin ; typedef struct { real_T ce41paa4nx [ 28
] ; real_T i5qlpo3uju ; real_T mcc3w3jrrs [ 4 ] ; real_T mhwbc1sinq ; real_T
p2hm1z5lwa [ 8 ] ; real_T h45mkuq5bv ; real_T gh2q4rwxqd [ 4 ] ; real_T
nxxszasjmi ; real_T cdzh5av0vj [ 4 ] ; real_T jx11onf5nn ; real_T jeqh2re42y
[ 4 ] ; real_T o3frtqftuu ; real_T are00on1hs [ 4 ] ; } CXPtMax ; typedef
struct { real_T frhkvosbyq ; real_T cz5jvjlsn2 ; real_T ngtlongzu2 ; real_T
lxrxd2rmbv ; real_T muiiz1etnd ; real_T p5tvrkuppg ; real_T i0dz4rnwx4 ;
real_T c4tqpolf52 ; real_T j4kmyagira ; real_T fv5dk0x3xx ; real_T l1hsjvlxrk
; real_T gzmeky2qui ; real_T omsbkf4flo ; real_T nasmtwsjni ; real_T
grev03amym ; real_T awpxcx2ftd ; real_T haop2ueyyt ; real_T jrs2hbncxb ;
real_T epvxsr5p5v ; real_T iqiuoeshox ; real_T h3x5xt2xmi ; real_T ihvral4etm
; real_T abwtv3ze30 ; real_T c5ybmt0dge ; real_T khz54xntbs ; real_T
ktapvv2jas ; real_T d3ctiw22nc ; real_T lx2c02mos1 ; real_T n0b03cu04l ;
real_T j0jnbvmwhl ; real_T fxjntilrks ; real_T nukgclftmm ; real_T p4gd1cfsm1
; real_T cmsfdcj1sz ; real_T errahrr5f3 ; real_T dhnbfhgzld ; real_T
fwtrv3jkco ; real_T ocvr54bo1b ; real_T lmk1pnyhgq ; real_T nejrmmhsdm ;
real_T iwpr3xta53 ; real_T k3jcnshi35 ; real_T ntvdenf5os ; real_T kwjccn5pc5
; real_T musxtxrzzg ; real_T hazxzl3amg ; real_T a1pse0pnsp ; real_T
bo01ncdf0a ; real_T d3ahaotrjg ; real_T jmj5n4owk5 ; real_T cmzfnzxmpo ;
real_T i1p0i3nwic ; real_T mu4ghoygpj ; } ZCV ; typedef struct { int_T ir [
48 ] ; int_T jc [ 63 ] ; real_T pr [ 48 ] ; } MassMatrix ; typedef struct {
real_T k2akfhivm3 ; real_T oii0nuh1ou ; real_T og5vdhwsfp ; real_T lia5vz21zn
; real_T n15as4u4l3 ; real_T povb5tbw2v ; } ExtY ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T dFilt [ 2 ]
; real_T nFilt [ 2 ] ; real_T Step1_Time ; real_T Step1_Y0 ; real_T
Step1_YFinal ; real_T Step2_Time ; real_T Step2_Y0 ; real_T Step2_YFinal ;
real_T Step4_Time ; real_T Step4_Y0 ; real_T Step4_YFinal ; real_T Step5_Time
; real_T Step5_Y0 ; real_T Step5_YFinal ; real_T Step6_Time ; real_T Step6_Y0
; real_T Step6_YFinal ; real_T Integrator_IC ; real_T Gain_Gain ; real_T
DiscreteTransferFcn_InitialStates ; real_T Gain1_Gain ; real_T Gain2_Gain ;
real_T u5_UpperSat ; real_T u5_LowerSat ; real_T Gain_Gain_jnwrxmpd2y ;
real_T Integrator_IC_ly0dldeo0z ; real_T Gain_Gain_jbpo1nzc5b ; real_T
DiscreteTransferFcn1_InitialStates ; real_T Gain1_Gain_kzkifunu2y ; real_T
Gain2_Gain_cehduakigf ; real_T u5_UpperSat_ayphnxvhak ; real_T
u5_LowerSat_ikcgllyxwz ; real_T Gain_Gain_g2liatxyxw ; real_T
Integrator_IC_ebg1cxvyio ; real_T Gain_Gain_bw45xj3upi ; real_T
DiscreteTransferFcn2_InitialStates ; real_T Gain1_Gain_eje3bhamkx ; real_T
Gain2_Gain_murtnwudat ; real_T u5_UpperSat_jmie0uoskq ; real_T
u5_LowerSat_frye4kwxrv ; real_T Gain_Gain_i4wlhlbj0o ; real_T
Integrator_IC_a0g2shfbse ; real_T Gain_Gain_oktz1catcm ; real_T
DiscreteTransferFcn3_InitialStates ; real_T Gain1_Gain_mqf5zikroh ; real_T
Gain2_Gain_c3ooikad3b ; real_T u5_UpperSat_hpv1lydza3 ; real_T
u5_LowerSat_aj1ncwmb4v ; real_T Gain_Gain_apzpwd2lcp ; real_T
Integrator_IC_l0arfvqiva ; real_T Gain_Gain_jkhmhhcb4y ; real_T Step3_Time ;
real_T Step3_Y0 ; real_T Step3_YFinal ; real_T
DiscreteTransferFcn4_InitialStates ; real_T Gain1_Gain_d1yaneumk3 ; real_T
Gain2_Gain_b1hf4hkty0 ; real_T u5_UpperSat_cb5dw4uucg ; real_T
u5_LowerSat_m5m10l40lw ; real_T Gain_Gain_flo45vukkm ; real_T
Integrator_IC_llwx032bli ; real_T Gain_Gain_fvfj1aitcg ; real_T
DiscreteTransferFcn5_InitialStates ; real_T Gain1_Gain_am5x3mjqzc ; real_T
Gain2_Gain_it3d3zrzjv ; real_T u5_UpperSat_iylwacoy4o ; real_T
u5_LowerSat_er1s3ovlcm ; real_T Gain_Gain_f23n0pwvi0 ; real_T Break_Value ;
real_T Break1_Value ; real_T Break2_Value ; real_T Break3_Value ; real_T
Break4_Value ; real_T Break5_Value ; real_T Constant1_Value ; real_T IC_Value
; real_T u5_UpperSat_ddogfqhdjr ; real_T u5_LowerSat_gld50iakmn ; real_T
u5_UpperSat_ilmzmabkef ; real_T u5_LowerSat_i23udsynjx ; real_T
u5_UpperSat_jkdd0lirs0 ; real_T u5_LowerSat_aqz04ismnb ; real_T
u5_UpperSat_jbj1vhkzdu ; real_T u5_LowerSat_ogs21iohyx ; real_T
u5_UpperSat_bbllqa54th ; real_T u5_LowerSat_kcwxpitudz ; real_T
u5_UpperSat_bxht0cl33x ; real_T u5_LowerSat_lva0v3mt5c ; } ; extern const
char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW
rtDW ; extern ExtY rtY ; extern MassMatrix rtMassMatrix ; extern P rtP ;
extern const rtwCAPI_ModelMappingStaticInfo *
cst_robotarm_original_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
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
