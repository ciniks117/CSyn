#include "__cf_closedLoop_visual.h"
#ifndef RTW_HEADER_closedLoop_visual_h_
#define RTW_HEADER_closedLoop_visual_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef closedLoop_visual_COMMON_INCLUDES_
#define closedLoop_visual_COMMON_INCLUDES_
#include <stdlib.h>
#include <xpcimports.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "closedLoop_visual_2f6391d8_1_gateway.h"
#include "closedLoop_visual_2f6391d8_2_gateway.h"
#endif
#include "closedLoop_visual_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_matrixlib.h"
#include "rt_nonfinite.h"
#define MODEL_NAME closedLoop_visual
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (1)     
#define NBLOCKIO (300) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (72)   
#elif NCSTATES != 72
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
typedef struct { jointMotionBus ieawijwcsm ; real_T pk3fe41ded [ 24 ] ;
real_T j3nnkf33ca [ 12 ] ; real_T klh5xjdddk ; real_T gq3rvdqlb4 ; real_T
nove0333w1 ; real_T otwgtai0e3 ; real_T jst1wdleti ; real_T jittjyrdyi ;
real_T l4cp2r2na2 ; real_T ohmgnj5xqj ; real_T cf4a24iltw ; real_T ovijgdd4i5
; real_T mfkdageusw ; real_T h1qge1ihq1 ; real_T gmdx0gmqhr [ 2 ] ; real_T
ifmseoanq0 ; real_T oetqfd0pi1 ; real_T g4zpnhujpe ; real_T gtcchxvpps [ 6 ]
; real_T mobqz3bh01 ; real_T f3xrqr2bqr ; real_T j1dprpcdq2 ; real_T
gbzealeak2 ; real_T isgcnkp2g3 ; real_T blfe1jeuhj ; real_T hyv235hdhv ;
real_T guwewsy53e ; real_T hangcs5e4q ; real_T hcxw2v1h5q ; real_T hxcesrcaxs
; real_T jn3qzzjeuq ; real_T a2nda0rlib ; real_T lqhzivpz11 ; real_T
j5dyuksjnm ; real_T bplef3dxnq ; real_T erkqnit1wv ; real_T appycrz0rp [ 2 ]
; real_T jn5rmd4dvo ; real_T cauosez44j ; real_T gkqcyjdn00 ; real_T
ibjatfeerz ; real_T cpbkgwmthj ; real_T jnbqjzgywz ; real_T alj4dpbhob ;
real_T kqypmuwfo0 ; real_T kqtmnjsgam ; real_T j31fpylddv ; real_T gl1ivij0yb
; real_T m3jycwj4xz ; real_T hsggggwtm5 ; real_T c202fqhyxc ; real_T
c4dmfd3ngi ; real_T hbedvtrsnp ; real_T fvzicuhi4u ; real_T m1ps3yqjbz ;
real_T h4sewwbs22 ; real_T kl45z53n04 ; real_T fve542by3u [ 2 ] ; real_T
hongxggq3i ; real_T bbphhn30rs ; real_T lbccudm3ny ; real_T e0qjdcsht3 ;
real_T owvvmkpxl0 ; real_T biteowggfb ; real_T kgov5zqwtr ; real_T pjofez22sm
; real_T i2u0a1gwhd ; real_T lsz5cnktz4 ; real_T g0juyqsq32 ; real_T
cirtybmflb ; real_T mop4zig5wo ; real_T e3utpjlh4a ; real_T f2pnpawcdm ;
real_T oijqqlxvyg ; real_T psg2d3ulvi ; real_T o4k3u44nl4 ; real_T j21fe4hamr
; real_T cta4ely3va ; real_T nnvhvklxhr [ 2 ] ; real_T oxnawm14z4 ; real_T
hp3kdyuspp ; real_T gubbkenzxe ; real_T etk2wovvbv ; real_T f1ob31k1pi ;
real_T lszg3ivcf1 ; real_T ot5fmesjqg ; real_T naknctmcqx ; real_T p0evwnfym1
; real_T gorad2wziy ; real_T p5uqm4tulo ; real_T agyiw10lae ; real_T
lusldgarmx ; real_T fh55jet01v ; real_T ddcumew3cn ; real_T fau1h3urp2 ;
real_T miypggsa3e ; real_T hbhijaspkp ; real_T fsrrzmku3j ; real_T m1hwo11cjm
; real_T gqeml2pouw [ 2 ] ; real_T k5jw43vz3d ; real_T cxtkjg3ys4 ; real_T
hj0hmqrh4a ; real_T ntghirwfvx ; real_T exgkqo5cql ; real_T es4yz3gayy ;
real_T bgbmzzakwx ; real_T hnqricx3sj ; real_T l5v4lpwsc3 ; real_T czblalftv1
; real_T fvd32u41b3 ; real_T o1uizp3fbz ; real_T j2pimpbea4 ; real_T
d0ncuxtedw ; real_T fcted5fdfb ; real_T n3k1jwldyd ; real_T hu2rgr3hfe ;
real_T gglnc0muns ; real_T lb0m24ncij ; real_T krtkmxdgt1 ; real_T cck1e03vkh
[ 2 ] ; real_T o2nuwl00sr ; real_T ifhcacyg4u ; real_T h4e0tjjx5q ; real_T
odv3pfsoo3 ; real_T g2qbpw1u2y ; real_T k5wlkglx5b ; real_T ct3vjnkgwf ;
real_T kw3ti0ac3i ; real_T p4m03lz4zh ; real_T bjzkus33nv ; real_T izk2jsqvak
; real_T hccdqvuxr4 ; real_T o4oomwxpja ; real_T hhfq3iwysd ; real_T
iuontvn31z ; real_T cugbbnxpbn ; real_T oued3wu2st ; real_T bydx0yzmcq ;
real_T jstshn3squ ; real_T ft1d2ngzg4 ; real_T prvuto05ws [ 2 ] ; real_T
kc4hjl50id ; real_T pzhditorrc ; real_T gmfp3wn4he ; real_T j0ofeidlq4 ;
real_T ffs2yfpdwl ; real_T mfi0a5ivzy ; real_T ejomoi4p0y ; real_T d0vaq03wni
; real_T n1srrzcvqf ; real_T dfpgvlkj2f ; real_T beojsagteu ; real_T
flgkpytalf ; real_T cqcbggfyin ; real_T a02mtaqnbs ; real_T n4fa3h5blc ;
real_T kqgaourgku ; real_T bjlw0updzr ; real_T kpt0des132 [ 2 ] ; real_T
j2gvd10ake ; real_T bncp344e40 ; real_T amzvbarht0 ; real_T lmb4eckheu ;
real_T dsfn4nqkol ; real_T bxem2yp0nx ; real_T bca4tdsxvy ; real_T ptmdq2mkgh
; real_T csjc4ym4ir ; real_T nj2pffpsiu ; real_T hgyzugskjl ; real_T
krr2znhfx3 ; real_T idgel3ts4j ; real_T ivzbvvwgbn ; real_T eahexcxwyu ;
real_T hj4ejv1dkh ; real_T b10kyicgqg ; real_T jhdz2gcqsm ; real_T ajv0ck2p0k
; real_T j1zo0zth2q ; real_T msgq0a2jq0 ; real_T m4vz0qylqm ; real_T
iue0dcvznk ; real_T hssorlwf4h ; real_T nv1qketu4s ; real_T dvianjcb3b ;
real_T iu2q3ztt2v ; real_T edkl4fqdos ; real_T m34tv4o2q4 ; real_T k3jckrrgpv
; real_T amp02sxfjh ; real_T ie35z2hdow ; real_T ipiz0wbr2t ; real_T
i2nhy303vy [ 2 ] ; real_T dzlk0ptzql ; real_T kginuwp13t ; real_T knf0jcww13
; real_T ethxpaa4c3 ; real_T df1ow2uit1 ; real_T p2eczjfkkm ; real_T
kecojrxdhq ; real_T b24hv4z2vs ; real_T hskakeq1mj ; real_T dd5ie0ajbq ;
real_T f2pglahcji ; real_T c22z5c25yo ; real_T efupo3v3dn ; real_T fv50yqfc3m
[ 2 ] ; real_T lxtwqrxqs3 ; real_T fsrf3gmnjy ; real_T g4q0iyarn1 ; real_T
iqrs4lvoq4 ; real_T kdn0iimvo0 ; real_T htdxbjpvte ; real_T jl3dzj4kme ;
real_T ejhwcpty3j ; real_T fre4yqpfef ; real_T oo510d4zw4 ; real_T nngijcbhxp
; real_T psbnb2qkaq ; real_T oho1nr4zyb ; real_T cel0300ljr [ 2 ] ; real_T
mn5trbnavt ; real_T oldoahijz0 ; real_T hag3nww5j4 ; real_T psrgd4ccsi ;
real_T ljydzqytvi ; real_T boniifyd0i ; real_T fzxyftd4i0 ; real_T frpc4jznjz
; real_T ezl0agc1ub ; real_T iuvcixaj1u ; real_T acifvashpf ; real_T
g5jcddbtus ; real_T a12fn3eish ; real_T nqspu5lpuf [ 2 ] ; real_T a5kxdqcvdg
; real_T be0sk5wt1c ; real_T hqu3j44etp ; real_T mczuwr2djk ; real_T
hjfvmptswk ; real_T dkr2klyqik ; real_T dp4vbgasuh ; real_T lh4ky3tqcp ;
real_T nflabcywl5 ; real_T bx0hsvyjif ; real_T aag31ygyq2 ; real_T hg0p25ayja
; real_T obj4q050ww ; real_T lv3dk0vxjj [ 4 ] ; real_T fixkmettoc [ 4 ] ;
real_T asixhrrsif [ 4 ] ; real_T poqyqx1ybu [ 4 ] ; real_T e3jijk5hzs [ 4 ] ;
real_T kbokax0jy0 [ 4 ] ; real_T hdabgtjkhh ; real_T adplijeiu3 [ 4 ] ;
real_T k2vziqgdpi ; real_T fkmyqachua [ 4 ] ; real_T pr04rv033g ; real_T
jhnfskyafx [ 4 ] ; real_T a2py0rn10b ; real_T j132ytumpt [ 4 ] ; real_T
ine3qiqxwe ; real_T aya0m3v3i0 [ 4 ] ; real_T eww2mhxkm5 ; real_T jkh24e405z
[ 4 ] ; real_T lhnhzraedi [ 36 ] ; real_T ngr0xxfpft [ 18 ] ; real_T
acli4c4thv [ 4 ] ; real_T knzgt5pcsx [ 4 ] ; real_T orzbfuvelk [ 4 ] ; real_T
cvgkgbsato [ 4 ] ; real_T nfrqasfoje [ 4 ] ; real_T dvzsxsm21d [ 4 ] ; real_T
ng11s4vjyc ; real_T k3y4oqcihk ; real_T pigztqhtgk ; real_T exs0n10ysv ;
real_T k04c00gsa1 ; real_T pbzaxgmwaq ; real_T nqru1gad04 ; real_T f2os4pvb41
; real_T n55lwtabvy ; real_T o4ftyptaai ; real_T lspzt2bsxt ; real_T
nlxpxyr5sf ; boolean_T jdslzqjqun ; boolean_T phkrya1ay3 ; boolean_T
oom55hkhas ; boolean_T ffarlqqvec ; boolean_T jzdyk043zo ; boolean_T
jj1lgxwadp ; boolean_T f3gocd01pz ; boolean_T gog2qbskx2 ; boolean_T
l3pf5coce3 ; boolean_T kqpqdscv03 ; boolean_T lbqadsyant ; boolean_T
jqeseokzby ; } B ; typedef struct { real_T a5b2pf1ca1 ; real_T pmanv5vib4 ;
real_T a0jorff1ss ; real_T bxa45rw5vc ; real_T b3tylb2ldo ; real_T fufi0up1jf
; real_T nqxlzyezrj ; real_T msly0lvz1t ; real_T mc5mpe4xnm ; real_T
giau5bnyxy ; real_T lmbrjj1yo3 ; real_T fr123draxv ; real_T bxdnouemfh ;
real_T celnn5zc2p ; real_T isrvloycz1 ; real_T hnsejpj33e ; real_T jiah2uksw0
; real_T naiwehmog1 ; real_T ooo2af04bi ; real_T ocn5n2oria ; real_T
hxjqpdvr2h ; real_T nlstabwqbk ; real_T eja5dvqkvx ; real_T aryinoifit ;
real_T jww4ubou4q ; real_T ih51fkzbrp ; real_T cprte2otvn ; real_T ozwizziqkv
; real_T f34n5dy3xh ; real_T i1v5qjzuaj ; real_T hfbuq22el5 ; real_T
d3lfdhwsjw ; real_T jd4u0spqsv ; real_T f1v3bebsxz ; real_T ahajwvzqnu ;
real_T haj010meq5 ; real_T axhmkl11mv ; real_T hjd4dlpjpx ; real_T fdqcpdb3br
; real_T ianiojkna1 ; real_T nwgyu0nfcm ; real_T l4urcs2vqx ; real_T
cx3lhcr5hy ; real_T jvuzjfeloy ; real_T ed3jdhmuic ; real_T fhlkawvcxc ;
real_T iyutm2c4la ; real_T k5yzqucy20 ; real_T eufofduh2l ; real_T idbi3jnfkp
; real_T g3umqfw1p4 ; real_T hfofwehec0 ; real_T mlkhe43blf ; real_T
kgy31g3lpf ; real_T cgjfcelwsi [ 2 ] ; real_T jpbs3jsulr [ 2 ] ; real_T
oye5t2ga5w [ 2 ] ; real_T pwfr10qjji [ 2 ] ; real_T jfoy3lslhi [ 2 ] ; real_T
hu4bgelwvg [ 2 ] ; real_T mq0xsn5npj ; real_T ndyjoniux5 ; real_T cawjwjevhp
; real_T jcbre1riq4 ; void * oiaqjmfdle ; void * fh2yevo3ke ; void *
orvixz3xj4 ; void * d3jorcrerr ; void * ddnvu45s54 ; void * nplecvujsr ; void
* mnmdamtgkb ; void * cwe4k4yovf ; void * cdodfvy2hp ; void * ebhraao2pr ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nmmvz2iapr
; void * hoinjnpu05 ; void * fdriqx01pi ; void * fkez4vs1k0 ; void *
k2145vc3fw ; void * hdrpsidvfs ; void * pfsbl0alkz ; void * cacbslwxfv ; void
* mkukpfbnwo ; void * cp5t5e324y ; void * i03x4qxfxb ; int_T gntbh4nenu ;
int_T gsycnb1f2n ; struct { int_T PrevIndex ; } gwwo3yqkan ; struct { int_T
AcquireOK ; } e2yhe4nhkm ; struct { int_T AcquireOK ; } fvlncx4bnx ; struct {
int_T AcquireOK ; } p5p3d1ybah ; struct { int_T AcquireOK ; } byciun1ksb ;
struct { int_T AcquireOK ; } kbak3eiue3 ; struct { int_T AcquireOK ; }
ef1saldt45 ; int_T jlxuucsfm3 [ 6 ] ; int_T lujs0ibj0y ; int32_T fgqemyl0yo ;
int8_T em0fyfhvo3 ; int8_T klsm2newc5 ; int8_T ambny1b3cd ; int8_T axpxfydig1
; int8_T eu1vn25ayr ; int8_T ie2533k5zy ; int8_T i03sqzsz3t ; int8_T
a4uh1p4rvk ; int8_T bijsz2zuxo ; int8_T pwf2bkifeq ; int8_T px4tkgbjaa ;
int8_T ehsgo0dd2g ; uint8_T drj4xadjzp ; uint8_T ilqh1aaypb ; uint8_T
i0arhlwpkr ; uint8_T fd1b2b35qg ; uint8_T lbazymzajn ; uint8_T h1vxeb0scs ;
uint8_T lhb2tg0f4z ; uint8_T cv3ju4xxmy ; uint8_T anoo3rym4l ; uint8_T
azsb3bde3k ; uint8_T akfkxrbuhe ; uint8_T maqw1lhppg ; boolean_T ne4ixyvuq5 ;
boolean_T nd5ghoegof ; boolean_T l2ucevrhxd ; boolean_T cfc5djgsvc ; } DW ;
typedef struct { real_T gwgkdmwsw2 [ 24 ] ; real_T cumqqyz2cg ; real_T
fdcrlx4ud4 ; real_T kzwrxm4myr ; real_T lmvlun415q ; real_T l31pskqy5j ;
real_T eniv3pchxv ; real_T p2tpemdq0j [ 2 ] ; real_T oorunl2yew [ 2 ] ;
real_T gko3wp2kax [ 2 ] ; real_T igj4xzveyr [ 2 ] ; real_T d0wlpacimb [ 2 ] ;
real_T leswo0sava [ 2 ] ; real_T po2xstkzai [ 30 ] ; } X ; typedef struct {
real_T gwgkdmwsw2 [ 24 ] ; real_T cumqqyz2cg ; real_T fdcrlx4ud4 ; real_T
kzwrxm4myr ; real_T lmvlun415q ; real_T l31pskqy5j ; real_T eniv3pchxv ;
real_T p2tpemdq0j [ 2 ] ; real_T oorunl2yew [ 2 ] ; real_T gko3wp2kax [ 2 ] ;
real_T igj4xzveyr [ 2 ] ; real_T d0wlpacimb [ 2 ] ; real_T leswo0sava [ 2 ] ;
real_T po2xstkzai [ 30 ] ; } XDot ; typedef struct { boolean_T gwgkdmwsw2 [
24 ] ; boolean_T cumqqyz2cg ; boolean_T fdcrlx4ud4 ; boolean_T kzwrxm4myr ;
boolean_T lmvlun415q ; boolean_T l31pskqy5j ; boolean_T eniv3pchxv ;
boolean_T p2tpemdq0j [ 2 ] ; boolean_T oorunl2yew [ 2 ] ; boolean_T
gko3wp2kax [ 2 ] ; boolean_T igj4xzveyr [ 2 ] ; boolean_T d0wlpacimb [ 2 ] ;
boolean_T leswo0sava [ 2 ] ; boolean_T po2xstkzai [ 30 ] ; } XDis ; typedef
struct { int_T ir [ 60 ] ; int_T jc [ 73 ] ; real_T pr [ 60 ] ; } MassMatrix
; typedef struct { jointMotionBus nrsrysiyzh ; } ExtY ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
PIDController_InitialConditionForFilter ; real_T
PIDController_InitialConditionForFilter_bijcxd3biq ; real_T
PIDController_InitialConditionForFilter_l1xa4emaot ; real_T
PIDController_InitialConditionForFilter_mhpnjmh103 ; real_T
PIDController_InitialConditionForFilter_bdfusxafxj ; real_T
PIDController_InitialConditionForFilter_gqvtejr1kb ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator_ber5p0pasi ; real_T
PIDController_InitialConditionForIntegrator_iybb1ixf51 ; real_T
PIDController_InitialConditionForIntegrator_ityg02255r ; real_T
PIDController_InitialConditionForIntegrator_bvowefbi1b ; real_T
PIDController_InitialConditionForIntegrator_fu11ifn3yb ; real_T
PIDController_InitialConditionForIntegrator_hthxsrdqok ; real_T
PIDController_InitialConditionForIntegrator_eumty3ptkf ; real_T
PIDController_InitialConditionForIntegrator_lucwcnhkok ; real_T
PIDController_InitialConditionForIntegrator_ijjwn33l3l ; real_T
PIDController_InitialConditionForIntegrator_hhj2q0e3gi ; real_T
PIDController_InitialConditionForIntegrator_al35d1opha ; real_T
LowPassFilterDiscreteorContinuous_K ; real_T
LowPassFilterDiscreteorContinuous_K_dblmcrutuw ; real_T
LowPassFilterDiscreteorContinuous_K_cgk1ez4ty3 ; real_T
LowPassFilterDiscreteorContinuous_K_kyey52ep50 ; real_T
LowPassFilterDiscreteorContinuous_K_paeb1p5zo1 ; real_T
LowPassFilterDiscreteorContinuous_K_fbdarspjyq ; real_T
LowPassFilterDiscreteorContinuous_K_gk1e3ckbus ; real_T
LowPassFilterDiscreteorContinuous_K_azyftkzlmk ; real_T
LowPassFilterDiscreteorContinuous_K_i2ua0qelre ; real_T
LowPassFilterDiscreteorContinuous_K_jcls4yejjf ; real_T
LowPassFilterDiscreteorContinuous_K_i0guetzbzf ; real_T
LowPassFilterDiscreteorContinuous_K_kbnahp4pbf ; real_T
FADiscretePositioncontrol_Kd ; real_T GADiscretePositioncontrol_Kd ; real_T
LFADiscretePositioncontrol_Kd ; real_T RFADiscretePositioncontrol_Kd ; real_T
UADiscretePositioncontrol_Kd ; real_T WADiscretePositioncontrol_Kd ; real_T
FADiscretePositioncontrol_Ki ; real_T GADiscretePositioncontrol_Ki ; real_T
LFADiscretePositioncontrol_Ki ; real_T RFADiscretePositioncontrol_Ki ; real_T
UADiscretePositioncontrol_Ki ; real_T WADiscretePositioncontrol_Ki ; real_T
FADiscreteSpeedcontrol_Ki ; real_T GADiscreteSpeedcontrol_Ki ; real_T
LFADiscreteSpeedcontrol_Ki ; real_T RFADiscreteSpeedcontrol_Ki ; real_T
UADiscreteSpeedcontrol_Ki ; real_T WADiscreteSpeedcontrol_Ki ; real_T
FADiscretePositioncontrol_Kp ; real_T GADiscretePositioncontrol_Kp ; real_T
LFADiscretePositioncontrol_Kp ; real_T RFADiscretePositioncontrol_Kp ; real_T
UADiscretePositioncontrol_Kp ; real_T WADiscretePositioncontrol_Kp ; real_T
FADiscreteSpeedcontrol_Kp ; real_T GADiscreteSpeedcontrol_Kp ; real_T
LFADiscreteSpeedcontrol_Kp ; real_T RFADiscreteSpeedcontrol_Kp ; real_T
UADiscreteSpeedcontrol_Kp ; real_T WADiscreteSpeedcontrol_Kp ; real_T
FADiscretePositioncontrol_N ; real_T GADiscretePositioncontrol_N ; real_T
LFADiscretePositioncontrol_N ; real_T RFADiscretePositioncontrol_N ; real_T
UADiscretePositioncontrol_N ; real_T WADiscretePositioncontrol_N ; real_T
FADiscretePositioncontrol_sat ; real_T GADiscretePositioncontrol_sat ; real_T
LFADiscretePositioncontrol_sat ; real_T RFADiscretePositioncontrol_sat ;
real_T UADiscretePositioncontrol_sat ; real_T WADiscretePositioncontrol_sat ;
real_T FADiscretePositioncontrol_tc ; real_T GADiscretePositioncontrol_tc ;
real_T LFADiscretePositioncontrol_tc ; real_T RFADiscretePositioncontrol_tc ;
real_T UADiscretePositioncontrol_tc ; real_T WADiscretePositioncontrol_tc ;
real_T FADiscreteSpeedcontrol_tc ; real_T GADiscreteSpeedcontrol_tc ; real_T
LFADiscreteSpeedcontrol_tc ; real_T RFADiscreteSpeedcontrol_tc ; real_T
UADiscreteSpeedcontrol_tc ; real_T WADiscreteSpeedcontrol_tc ; real_T
GAIN_Gain ; real_T Gain_Gain ; real_T GAIN_Gain_ghcgkbkv3x ; real_T
Gain1_Gain ; real_T GAIN_Gain_bkr1j0bd3l ; real_T Gain2_Gain ; real_T
GAIN_Gain_lksnrktixr ; real_T Gain3_Gain ; real_T GAIN_Gain_iurldfivlm ;
real_T Gain4_Gain ; real_T GAIN_Gain_cegszobnvd ; real_T Gain5_Gain ; real_T
Constant_Value ; real_T FromWs_Time0 [ 20 ] ; real_T FromWs_Data0 [ 120 ] ;
real_T Integrator_gainval ; real_T Integrator_UpperSat ; real_T
Integrator_LowerSat ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat
; real_T Filter_gainval ; real_T Integrator_gainval_evxnoheart ; real_T
Constant_Value_lrixhn0dkj ; real_T Integrator_gainval_ixv0i24q4y ; real_T
Integrator_UpperSat_czguogaom1 ; real_T Integrator_LowerSat_fhhrbnlssc ;
real_T Saturation_UpperSat_b1wm32nmrw ; real_T Saturation_LowerSat_kngpvfh4ls
; real_T Filter_gainval_m3bozatxx4 ; real_T Integrator_gainval_phjczhiptn ;
real_T Constant_Value_angmd05wja ; real_T Integrator_gainval_lgbng1p1od ;
real_T Integrator_UpperSat_jilgocqigo ; real_T Integrator_LowerSat_meej1knsfc
; real_T Saturation_UpperSat_pkgoxl0lrf ; real_T
Saturation_LowerSat_ndevo5xjvz ; real_T Filter_gainval_dcpihimpte ; real_T
Integrator_gainval_fxz21rvcq2 ; real_T Constant_Value_fdkwrdxtu1 ; real_T
Integrator_gainval_e4yvg5h4je ; real_T Integrator_UpperSat_k3htidczg5 ;
real_T Integrator_LowerSat_ieq4zg3egn ; real_T Saturation_UpperSat_h1n4bbj4rg
; real_T Saturation_LowerSat_pnxjdliiid ; real_T Filter_gainval_czxjn1rlbf ;
real_T Integrator_gainval_bfghpclnjy ; real_T Constant_Value_gt3vzcqmtv ;
real_T Integrator_gainval_hw1oy5wzvu ; real_T Integrator_UpperSat_pm2laakorw
; real_T Integrator_LowerSat_dap2gqqil4 ; real_T
Saturation_UpperSat_j0pkmjhttf ; real_T Saturation_LowerSat_nciqxysdzy ;
real_T Filter_gainval_hd00yas04n ; real_T Integrator_gainval_lyxhkmrez3 ;
real_T Constant_Value_lseib3tlc0 ; real_T Integrator_gainval_fgcdlddvaj ;
real_T Integrator_UpperSat_kos2lis5jd ; real_T Integrator_LowerSat_gvexo5zn1g
; real_T Saturation_UpperSat_bfekxvwt24 ; real_T
Saturation_LowerSat_ixkztlf2ug ; real_T Filter_gainval_jvx230nbth ; real_T
Integrator_gainval_dfjgw4u3hp ; real_T Constant_Value_gpr0azxf2n ; real_T
Gain3_Gain_ddianwy5uo ; real_T Integrator_gainval_ax1qbi1zsf ; real_T
Integrator_UpperSat_pxoupp3bpy ; real_T Integrator_LowerSat_dxi0sl14if ;
real_T Saturation_UpperSat_ljcmvdtzmp ; real_T Saturation_LowerSat_bpwoq1jyyj
; real_T GAIN_Gain_gipujhulkf ; real_T Gain5_Gain_bdpfd5cloc ; real_T
Integrator_gainval_jh4ek35yra ; real_T Constant_Value_j0d24bmf2w ; real_T
Gain9_Gain ; real_T Integrator_gainval_ilq14saqfb ; real_T
Integrator_UpperSat_dyf31exjbb ; real_T Integrator_LowerSat_kf5ksuxrmw ;
real_T Saturation_UpperSat_ku4zfj1mgj ; real_T Saturation_LowerSat_piqabk5uwl
; real_T GAIN_Gain_d2bdwaaa5x ; real_T Gain10_Gain ; real_T
Integrator_gainval_ozrhkkjmsl ; real_T Gain12_Gain ; real_T
GAIN_Gain_fa3mxd0pxv ; real_T Gain13_Gain ; real_T Gain15_Gain ; real_T
GAIN_Gain_cbggud5v1h ; real_T Gain16_Gain ; real_T Gain2_Gain_lgcuhly1ij ;
real_T GAIN_Gain_ih3mthbt50 ; real_T Gain4_Gain_debj45fomz ; real_T
Gain6_Gain ; real_T GAIN_Gain_a3e3501pqa ; real_T Gain7_Gain ; real_T
Constant_Value_pqdzo2a0cn ; real_T Integrator_gainval_o1pkdugrbd ; real_T
Integrator_UpperSat_ft3uzmj1ph ; real_T Integrator_LowerSat_cfjq315toj ;
real_T Saturation_UpperSat_k12phj5ehi ; real_T Saturation_LowerSat_ffce0ibflx
; real_T Integrator_gainval_ivhv4zygdd ; real_T Constant_Value_btw4atao4i ;
real_T Integrator_gainval_majrlzonqu ; real_T Integrator_UpperSat_icgexzc3ek
; real_T Integrator_LowerSat_enhsd21rzi ; real_T
Saturation_UpperSat_ptlwne5dr3 ; real_T Saturation_LowerSat_bhgwypt52q ;
real_T Integrator_gainval_ly3ytcugg3 ; real_T Constant_Value_abhuanbusd ;
real_T Integrator_gainval_ie3iqjywto ; real_T Integrator_UpperSat_dh4d4fmkz3
; real_T Integrator_LowerSat_fyi041pxta ; real_T
Saturation_UpperSat_ormg3rfkdo ; real_T Saturation_LowerSat_muwyyeshhe ;
real_T Integrator_gainval_ai021icgbp ; real_T Constant_Value_exlhnub3yd ;
real_T Integrator_gainval_faaohscdc3 ; real_T Integrator_UpperSat_kidwxza1it
; real_T Integrator_LowerSat_g5j2kqgd1m ; real_T
Saturation_UpperSat_bj2nuqdj2t ; real_T Saturation_LowerSat_frbmey0f5g ;
real_T Integrator_gainval_agnx1rsywz ; real_T GAIN_Gain_lu5wfgtmm3 ; real_T
GAIN_Gain_lycms1qu4d ; real_T Gain_Gain_a3lqnjnaie ; real_T
Gain1_Gain_kv2drkc1jq ; real_T GAIN_Gain_esl4ijmu4b ; real_T Gain11_Gain ;
real_T GAIN_Gain_ngbovfpstx ; real_T Gain14_Gain ; real_T
GAIN_Gain_n5wmkwmtp0 ; real_T Gain17_Gain ; real_T GAIN_Gain_ocgf55rpfm ;
real_T Gain8_Gain ; } ; extern const jointMotionBus
closedLoop_visual_rtZjointMotionBus ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern ExtY rtY ; extern MassMatrix rtMassMatrix ; extern P rtP ; extern
const rtwCAPI_ModelMappingStaticInfo * closedLoop_visual_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
