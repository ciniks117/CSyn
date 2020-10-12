#ifndef RTW_HEADER_cst_robotarm_h_
#define RTW_HEADER_cst_robotarm_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef cst_robotarm_COMMON_INCLUDES_
#define cst_robotarm_COMMON_INCLUDES_
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
#include "cst_robotarm_98bf360f_6_gateway.h"
#include "cst_robotarm_98bf360f_2_gateway.h"
#include "cst_robotarm_98bf360f_7_gateway.h"
#include "cst_robotarm_98bf360f_5_gateway.h"
#include "cst_robotarm_98bf360f_1_gateway.h"
#include "cst_robotarm_98bf360f_3_gateway.h"
#include "cst_robotarm_98bf360f_4_gateway.h"
#endif
#include "cst_robotarm_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#define MODEL_NAME cst_robotarm
#define NSAMPLE_TIMES (4) 
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
typedef struct { real_T kpuxbwdbqy [ 29 ] ; real_T e4jpommznb [ 12 ] ; real_T
dqejxyzqpz ; real_T bagwbwq1rt ; real_T hsnbhfvlji ; real_T grwuc0rtke ;
real_T ladvsqy4po ; real_T hsvhvzaitf ; real_T aayombost0 ; real_T nbg2no4kfn
; real_T polzbmpty5 ; real_T cavafntrgm ; real_T fht4xkh1ev ; real_T
m4nbz10psi ; real_T no42p5lqd0 ; real_T oqprhwxbtn ; real_T okawz4w12q ;
real_T fvsrxbfg4g ; real_T mn03pjitnu ; real_T fl2ljqidug ; real_T iztuma3owj
; real_T pfjse2trbp ; real_T erfi1h50vk ; real_T eqsuyearws ; real_T
bgkhkuq1uv ; real_T eackyyj2tp ; real_T eh2hjsaicu ; real_T k0jr3j5oxo ;
real_T buqdf1fc0l ; real_T lozfekbxyk ; real_T dlc4zw50uu ; real_T hsgnje4cmi
; real_T p2n0iwadpz ; real_T boum0gprkv ; real_T j25zwoocn5 ; real_T
aatxioghgk ; real_T hndwswnyoz ; real_T i53xrhehpp ; real_T oew5eo25ef ;
real_T iclarv42jt ; real_T btorth4vln ; real_T hfh4ccgrqw ; real_T cx2pgcpxmh
; real_T gcyzeyasy2 ; real_T hqaumiwlfi ; real_T omps0qn1bp ; real_T
a3xwdirkee ; real_T fqne33prwc ; real_T dxfnpqbkcb ; real_T jk5baceso4 ;
real_T bkvix0h45z ; real_T n5av2fk0n2 ; real_T hs52pyeuw2 ; real_T arsgpeonhl
; real_T imw2c4hmx0 ; real_T ht4gnbs14o ; real_T oaqctdd1z4 ; real_T
iktdwnifqy ; real_T cz1ppk0zx1 ; real_T f1s03qmtvz ; real_T aj2xvlnbau ;
real_T dnyn3lbtrv ; real_T ldiq5q5naa ; real_T b4uivev3hv ; real_T gmslp1xfld
; real_T n2cbzljwsr ; real_T kfizj0xxbp ; real_T l5vvo0nd3q ; real_T
asyj1ffrm5 ; real_T awwm15wr2b ; real_T m5tahxhn0f ; real_T on0z4zmhgg ;
real_T dvrimdcswm ; real_T onhuz22qes ; real_T ao5dn0t2uz ; real_T ayfkra0odz
; real_T lw1ku45fyz ; real_T lmpujrulyo ; real_T hw1ccwcgua ; real_T
gue5wmwueg ; real_T cyywu0nyp5 ; real_T nzuj0tkyis ; real_T nny34gtevo [ 4 ]
; real_T oawdzxyk1g [ 4 ] ; real_T go1xfp1pfe [ 4 ] ; real_T inipmccc32 [ 4 ]
; real_T efla2tgklq [ 9 ] ; real_T gcaq34maq5 ; real_T ggdoah4lpg [ 4 ] ;
real_T clw3kkg5lz [ 4 ] ; real_T o10dy052cl [ 4 ] ; real_T kwsufxstz0 [ 4 ] ;
real_T e5djqxbatk [ 4 ] ; real_T hg55o3nyo3 [ 4 ] ; real_T pnxfeg3myh [ 4 ] ;
real_T d432tayljp [ 4 ] ; real_T kvb4zpjzgq [ 18 ] ; real_T boj21qbs4q ;
real_T myut2kekff [ 4 ] ; real_T ji3vchq3tw [ 4 ] ; real_T h2xuzybx31 [ 4 ] ;
real_T aalhpeekcz [ 4 ] ; real_T n2nhbhgaoj [ 4 ] ; real_T an5wlueyqi [ 9 ] ;
real_T ccbyphkuvf ; real_T gloyjgyfuk [ 4 ] ; real_T pv1aefa4ak [ 4 ] ;
real_T j2hdft1opa [ 4 ] ; real_T lkp0ijlter [ 4 ] ; real_T c3sg5zcxif [ 4 ] ;
real_T hefgnl12g0 [ 9 ] ; real_T neow0ggyvd ; real_T oi2jfcurfm [ 4 ] ;
real_T kdsjhcimkb [ 4 ] ; real_T mmtghsbk5w [ 4 ] ; real_T cqr0wtwuy4 [ 4 ] ;
real_T dwr0nxvsbj [ 4 ] ; real_T edkd4wserg [ 9 ] ; real_T g0ribq2fff ;
real_T j5gqirfivu [ 4 ] ; real_T bezsqifqzd [ 4 ] ; real_T ovfjzuhpy1 [ 4 ] ;
real_T got3v1adxi [ 4 ] ; real_T dgpujci0nh [ 4 ] ; real_T krwjqqdwhs [ 9 ] ;
real_T bhsz3zdcal ; real_T ijej1daezt [ 4 ] ; real_T cg0peil0nn ; real_T
cjuzvphzfa ; real_T hqhclugji4 ; real_T bve50u2tic ; real_T ezre3gedwd ;
real_T bf4kcmzwgq ; } B ; typedef struct { real_T pw2pe5xudt ; real_T
osuwpyfhhy ; real_T n1egvt1ecq ; real_T fxsfevo34c ; real_T n0cpdtot23 ;
real_T dhnlnnkmax ; real_T g55yrwtthh ; real_T kzdsnvl0ni [ 2 ] ; real_T
e5pyhcmzqf [ 2 ] ; real_T nttssxfe10 [ 2 ] ; real_T nrfeeblrr2 [ 2 ] ; real_T
bcq0i32d1x [ 2 ] ; real_T iogo3cshur [ 2 ] ; real_T grxbe2l4yb [ 2 ] ; real_T
kdprvszesk [ 2 ] ; real_T oi5gacvc4f [ 2 ] ; real_T mxa34oudwo [ 2 ] ; real_T
onw2qwsiq3 [ 2 ] ; real_T cmhkhckkbw [ 2 ] ; real_T mbaklywx2p [ 2 ] ; real_T
ceopzbvdcs [ 2 ] ; real_T deyxx53lrn [ 2 ] ; real_T n5ciem0fnx [ 2 ] ; real_T
mdu2prkicz [ 2 ] ; real_T lzyv2sl2tx [ 2 ] ; real_T ohsmzxhpuz [ 2 ] ; real_T
f2lssqn4ys [ 2 ] ; real_T kt415tdana [ 2 ] ; real_T bkypudi3a1 [ 2 ] ; real_T
enulsbgyxv [ 2 ] ; real_T owkmmn2z4e [ 2 ] ; real_T lnedb1enyu [ 2 ] ; real_T
gjf2vc4lik [ 2 ] ; real_T ghhq4q11uc [ 2 ] ; real_T iir45l3sdw [ 2 ] ; real_T
n5l2mrc3v5 [ 2 ] ; real_T phevtdietv [ 2 ] ; real_T hrcshd2jnu [ 2 ] ; real_T
gxur1jxjle [ 2 ] ; real_T fdxk5h5nfb [ 2 ] ; real_T mompnqx50t ; real_T
nvsr3bfete ; real_T il1m24s12p ; real_T dkqlehltbl ; real_T kzugk1exec ;
real_T girpkbb0k4 ; real_T o1zzawxzxl ; real_T hf5ayypcbu ; real_T pc3l0jaikj
; real_T od5nlggen3 ; real_T h5kjdlwr41 ; real_T moyjmke4l3 ; real_T
ghph52rdce ; real_T lagmo53nka ; real_T cnn05julux ; real_T cwizofgkej ;
real_T ifix50azhp ; real_T ksz3qgvme2 ; real_T ahdgarqwel ; real_T dc2k3ryr1h
; real_T noevtlpdnr ; real_T mnro1vxwzd ; real_T lsnzpaafr0 ; real_T
jea0fzolcb ; real_T kecuqjxdts ; real_T iagl52grv4 ; real_T oltxmhvdjk ;
real_T btgoxpvg4h ; real_T opadpf4fq0 ; real_T nbytpsj5tm ; real_T gzyqtgku3f
; real_T pw3owok3vx ; real_T gluzokmfs1 ; real_T fcg5fdf0oq ; real_T
bzynygth0l ; real_T br0nvfzzdo ; real_T mgn4qmeh1w ; real_T oogtzxflgo ;
real_T lqkmp55gjx ; real_T fhsxv1yddz ; real_T pf5wglytiw ; real_T cwd4sm1def
; real_T j1rgpnrnqp ; void * bxxdhn0h2f ; void * mkeckqut4f ; void *
maabazmrfg ; void * e3tb1nphvp ; void * ke13cdwtxf ; void * pbavcelntb ; void
* jgihp3vmhr ; void * en1uoclqpn ; void * bfh4whyigp ; void * hugdnb4xw2 ;
struct { void * AQHandles ; void * SlioLTF ; } fkhju0d3rl ; struct { void *
AQHandles ; void * SlioLTF ; } nbjxrunoh4 ; struct { void * AQHandles ; void
* SlioLTF ; } ox2wjis5ak ; struct { void * AQHandles ; void * SlioLTF ; }
avhnfypyzw ; struct { void * AQHandles ; void * SlioLTF ; } h5ig2mnnp5 ;
struct { void * AQHandles ; void * SlioLTF ; } ju0hwcip3s ; struct { void *
AQHandles ; void * SlioLTF ; } h1wvgvd1h4 ; struct { void * AQHandles ; void
* SlioLTF ; } dcbtcmf10i ; struct { void * AQHandles ; void * SlioLTF ; }
jvokyr3vc0 ; struct { void * AQHandles ; void * SlioLTF ; } gvul0tg30e ;
struct { void * AQHandles ; void * SlioLTF ; } pluidmihey ; struct { void *
AQHandles ; void * SlioLTF ; } nqajuamynq ; struct { void * AQHandles ; void
* SlioLTF ; } dkygoqftlz ; struct { void * AQHandles ; void * SlioLTF ; }
d4ovmgffgs ; struct { void * AQHandles ; void * SlioLTF ; } bj5lql4lou ;
struct { void * AQHandles ; void * SlioLTF ; } ixg02n0kht ; struct { void *
AQHandles ; void * SlioLTF ; } akh35vbfzy ; struct { void * AQHandles ; void
* SlioLTF ; } c2qb0n32ss ; struct { void * AQHandles ; void * SlioLTF ; }
bx5yrpmeoz ; struct { void * AQHandles ; void * SlioLTF ; } oyj5nltrtm ;
struct { void * AQHandles ; void * SlioLTF ; } l1xqkb0uuj ; struct { void *
AQHandles ; void * SlioLTF ; } cqsrogmetz ; struct { void * AQHandles ; void
* SlioLTF ; } nuk5ajouhh ; struct { void * AQHandles ; void * SlioLTF ; }
difeoh0o3t ; struct { void * AQHandles ; void * SlioLTF ; } ijvorwciil ;
struct { void * AQHandles ; void * SlioLTF ; } ewswq3ixhs ; struct { void *
AQHandles ; void * SlioLTF ; } pd5b5eork3 ; struct { void * AQHandles ; void
* SlioLTF ; } lxuytvgznq ; struct { void * AQHandles ; void * SlioLTF ; }
crkalficod ; struct { void * AQHandles ; void * SlioLTF ; } ckmmj1b1a4 ;
struct { void * AQHandles ; void * SlioLTF ; } ejwlgw0b0w ; struct { void *
AQHandles ; void * SlioLTF ; } lkmtjgr4pk ; struct { void * AQHandles ; void
* SlioLTF ; } doxequ5ptr ; struct { void * AQHandles ; void * SlioLTF ; }
isfan0gc4x ; struct { void * AQHandles ; void * SlioLTF ; } bhw5fpwwrv ;
struct { void * AQHandles ; void * SlioLTF ; } ffbfzmbeso ; struct { void *
AQHandles ; void * SlioLTF ; } bdep3qr3ra ; struct { void * AQHandles ; void
* SlioLTF ; } p14ax2esvj ; struct { void * AQHandles ; void * SlioLTF ; }
d0f32oeoza ; struct { void * AQHandles ; void * SlioLTF ; } dksd5f0dzc ;
struct { void * AQHandles ; void * SlioLTF ; } amkx3ztxsb ; struct { void *
AQHandles ; void * SlioLTF ; } lc00gioize ; struct { void * AQHandles ; void
* SlioLTF ; } ld2f3yh3ph ; struct { void * AQHandles ; void * SlioLTF ; }
gio3iy02hl ; struct { void * AQHandles ; void * SlioLTF ; } mkxd2pc5z0 ;
struct { void * AQHandles ; void * SlioLTF ; } cc5bqxzmbs ; struct { void *
AQHandles ; void * SlioLTF ; } iyliuua3m1 ; struct { void * AQHandles ; void
* SlioLTF ; } k4edalu3p2 ; void * p3qsy4ac3i ; void * b2ulm0qurb ; void *
aoztfxt3k3 ; void * lrd5jpm3xr ; void * prmb43b2lg ; void * nl02lte1sn ; void
* d4hhejeuln ; void * m54odtvz3u ; void * ocfvci0ogv ; void * p03omiha1p ;
void * mtcob204rl ; void * ir5o5sem4f ; void * jspmsolpsx ; void * dp5qzyrocu
; void * nwqr5wmare ; void * alkigtb3eo ; void * jedewwpx2b ; void *
oxiddlwl0e ; void * ofxirgtbli ; void * gsusnlk2qm ; void * esgd45ifwg ; void
* mvbznvevad ; void * j0ckgxpmx5 ; void * dsdhwjplhg ; void * b3bjh45ijd ;
void * knwl0j21ex ; void * lxi10debkw ; void * o0t2zajdar ; void * f53d4xlhf3
; void * i1mfiref1s ; void * hsnnp23xx3 ; void * ehoo31suuw ; void *
eqaph1hnr4 ; void * lmypu1lxkh ; void * a0rjofmfib ; void * ltacaubgtq ; void
* ojep3hp3tz ; void * oofcw1u5oj ; void * f15fux53ym ; void * je3k2frne1 ;
void * pfajoqccjj ; void * hp2ndf5vf3 ; void * cq5hsabgd5 ; void * duaadggefk
; void * a5s5o05xbg ; void * otxi1ujsu5 ; void * onsxqbd1pr ; void *
mb03qpxir0 ; void * gyuopvy42y ; void * lt2lmcwoap ; void * o4y0j0g15n ; void
* onerx1yfb2 ; void * geu4q0xuqi ; void * e32c0o14uh ; void * h5gbvyn1wb ;
void * bdnu2nsumd ; void * gpyxtothik ; void * loqycrqsns ; void * ixblyekg32
; void * fykj1pdl3o ; int_T izcotr23dr ; int_T medbouh1bz ; int_T cjrqthhfyx
[ 5 ] ; int_T kzxyadr5jp ; int_T aha3ttluaz [ 10 ] ; int_T iyrt2vmhf4 ; int_T
huqf5ahxl5 [ 5 ] ; int_T o0gg5vcyvl ; int_T eofsatdfl4 [ 5 ] ; int_T
h4lvhpzsjg ; int_T l0sp34a5vt [ 5 ] ; int_T jo3q0ft4ok ; int_T iwcrwapmy1 [ 5
] ; int_T owfi3fj2gy ; int_T axbmdyzm4s ; int_T nqfxnpzhb1 ; int_T nk2cgiuqq4
; int_T bibznrlmwf ; int_T dd4ef3do3g ; int_T ji0h4d4wet ; int_T c4g1psscp2 ;
int_T m1ysjubrvj ; int_T hoht0lvf35 ; int_T a30y20nurj ; int_T genkbxgaug ;
int_T k2xrlwkxds ; int32_T a2nd5ads1x ; int32_T nimo41obeb ; int32_T
lyzikhn1qu ; int32_T okzl3d4upr ; int32_T mnfh0gsrkg ; int32_T oggkregolh ;
boolean_T md2scv0jlp ; boolean_T crekcq1kpz ; boolean_T cuh4s0nlhu ;
boolean_T impojcl0nu ; boolean_T hpkzoxodns ; boolean_T fnxjrk32mp ;
boolean_T k0rkpkziyh ; boolean_T dulztvghtj ; boolean_T gk2a44vhme ;
boolean_T dnnhghwnmd ; boolean_T m1abnhxlw1 ; boolean_T l2dh0gucv3 ;
boolean_T aich5dsmmb ; boolean_T djrwqz3mqp ; } DW ; typedef struct { real_T
hbu5otnenm [ 28 ] ; real_T k32vukczvp ; real_T cim0sdziv1 ; real_T jq40kv3kof
; real_T i0jaxz1ns1 ; real_T kpt4tgks43 ; real_T bgm2jlczsl ; real_T
josyacetrj [ 4 ] ; real_T en2pd5luhl [ 8 ] ; real_T hywdustkrw [ 4 ] ; real_T
l0e0xe2uy4 [ 4 ] ; real_T bp3pw3plbw [ 4 ] ; real_T fxz224311k [ 4 ] ; } X ;
typedef struct { real_T hbu5otnenm [ 28 ] ; real_T k32vukczvp ; real_T
cim0sdziv1 ; real_T jq40kv3kof ; real_T i0jaxz1ns1 ; real_T kpt4tgks43 ;
real_T bgm2jlczsl ; real_T josyacetrj [ 4 ] ; real_T en2pd5luhl [ 8 ] ;
real_T hywdustkrw [ 4 ] ; real_T l0e0xe2uy4 [ 4 ] ; real_T bp3pw3plbw [ 4 ] ;
real_T fxz224311k [ 4 ] ; } XDot ; typedef struct { boolean_T hbu5otnenm [ 28
] ; boolean_T k32vukczvp ; boolean_T cim0sdziv1 ; boolean_T jq40kv3kof ;
boolean_T i0jaxz1ns1 ; boolean_T kpt4tgks43 ; boolean_T bgm2jlczsl ;
boolean_T josyacetrj [ 4 ] ; boolean_T en2pd5luhl [ 8 ] ; boolean_T
hywdustkrw [ 4 ] ; boolean_T l0e0xe2uy4 [ 4 ] ; boolean_T bp3pw3plbw [ 4 ] ;
boolean_T fxz224311k [ 4 ] ; } XDis ; typedef struct { real_T hbu5otnenm [ 28
] ; real_T k32vukczvp ; real_T cim0sdziv1 ; real_T jq40kv3kof ; real_T
i0jaxz1ns1 ; real_T kpt4tgks43 ; real_T bgm2jlczsl ; real_T josyacetrj [ 4 ]
; real_T en2pd5luhl [ 8 ] ; real_T hywdustkrw [ 4 ] ; real_T l0e0xe2uy4 [ 4 ]
; real_T bp3pw3plbw [ 4 ] ; real_T fxz224311k [ 4 ] ; } CStateAbsTol ;
typedef struct { real_T hbu5otnenm [ 28 ] ; real_T k32vukczvp ; real_T
cim0sdziv1 ; real_T jq40kv3kof ; real_T i0jaxz1ns1 ; real_T kpt4tgks43 ;
real_T bgm2jlczsl ; real_T josyacetrj [ 4 ] ; real_T en2pd5luhl [ 8 ] ;
real_T hywdustkrw [ 4 ] ; real_T l0e0xe2uy4 [ 4 ] ; real_T bp3pw3plbw [ 4 ] ;
real_T fxz224311k [ 4 ] ; } CXPtMin ; typedef struct { real_T hbu5otnenm [ 28
] ; real_T k32vukczvp ; real_T cim0sdziv1 ; real_T jq40kv3kof ; real_T
i0jaxz1ns1 ; real_T kpt4tgks43 ; real_T bgm2jlczsl ; real_T josyacetrj [ 4 ]
; real_T en2pd5luhl [ 8 ] ; real_T hywdustkrw [ 4 ] ; real_T l0e0xe2uy4 [ 4 ]
; real_T bp3pw3plbw [ 4 ] ; real_T fxz224311k [ 4 ] ; } CXPtMax ; typedef
struct { real_T b4bnynrbwu ; real_T b1kp2eptxt ; real_T hm4y42m1s0 ; real_T
fgwvum4dm1 ; real_T f50mw2yttj ; real_T cejw0f4a24 ; real_T demoxsl1pj ;
real_T nhs2kimyri ; real_T przjmcjc4j ; real_T cjaaxpeiax ; real_T hy0w1y0grz
; real_T obzu144xuo ; real_T le0qltnypy ; real_T ns402oa5jx ; real_T
luoufj3fg2 ; real_T eow4c0liok ; real_T fq3dz0hjjb ; real_T gowtcpijum ;
real_T dxejivzs5p ; real_T mm1kve3hvz ; real_T m0k4syq1xw ; real_T ia2y54lxwu
; real_T ktljfqshol ; real_T fv5cxlggao ; real_T pjsgohu5a5 ; real_T
kiy1epe0jt ; real_T gphqitie3b ; real_T ocyarree5k ; real_T et5jclyh1i ;
real_T oujeb2kp2j ; real_T hvlchrp3vk ; real_T kch2u51bxq ; real_T lumrxxiqwc
; real_T ctxsq5kac3 ; real_T lpqfsgw1ne ; real_T b0lqozk32q ; real_T
cicrgjrqwd ; real_T p1jqilyvbo ; real_T f1bxp1i2xo ; real_T ola4jgwjxy ;
real_T mi5ynt05d3 ; real_T olk3gr3zt4 ; real_T fzwdwmtkti ; real_T ftyblwyig1
; real_T jy34kddhpu ; real_T iud20i0g13 ; real_T nhp1dmxyyh ; real_T
bk23w2tf4w ; real_T foljlmmtzp ; real_T lxkkptla01 ; real_T jdmstzxemr ;
real_T mzhngu1bx4 ; real_T kayin2m4bs ; } ZCV ; typedef struct { int_T ir [
48 ] ; int_T jc [ 63 ] ; real_T pr [ 48 ] ; } MassMatrix ; typedef struct {
real_T n1ogmfa4cp ; real_T fi3eog4bcj ; real_T meqjcbtglm ; real_T ptivu2pmk5
; real_T mitwhaapce ; real_T gfuy4k4wck ; } ExtU ; typedef struct { real_T
cfas0ohras ; real_T ii5aafmyuz ; real_T ownmemr1ra ; real_T mgphslt1nt ;
real_T izfs0fudc1 ; real_T o3szmiut1b ; } ExtY ; typedef struct {
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
cst_robotarm_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
