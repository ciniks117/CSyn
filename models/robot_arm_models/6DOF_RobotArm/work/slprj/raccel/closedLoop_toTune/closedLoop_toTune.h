#include "__cf_closedLoop_toTune.h"
#ifndef RTW_HEADER_closedLoop_toTune_h_
#define RTW_HEADER_closedLoop_toTune_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef closedLoop_toTune_COMMON_INCLUDES_
#define closedLoop_toTune_COMMON_INCLUDES_
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
#include "closedLoop_toTune_b924f1e8_1_gateway.h"
#include "closedLoop_toTune_b924f1e8_2_gateway.h"
#endif
#include "closedLoop_toTune_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_matrixlib.h"
#include "rt_nonfinite.h"
#define MODEL_NAME closedLoop_toTune
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (293) 
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
typedef struct { real_T jhflzht2mj [ 2 ] ; real_T ox013agrey ; real_T
g2zj4z3fcf [ 6 ] ; real_T kiyhgelsu1 ; real_T pn0xtm1qfs ; real_T ezhopqv52b
; real_T fqolhzt2ru ; real_T lrmydxoplg [ 24 ] ; real_T md32vri2gx [ 12 ] ;
real_T cz2gtbbcky ; real_T jvuvjolqwh ; real_T geukecwg0u ; real_T fbeayl3q3y
; real_T dqoim5n1jb ; real_T kx5pait0in ; real_T nknphymk3l ; real_T
dqauotsnvc ; real_T cg4ctkqhve ; real_T fmehcowgyi ; real_T gq1s2wme44 ;
real_T mrr4rjxmd5 ; real_T kscxrogtua [ 2 ] ; real_T dxeawvlvpe ; real_T
giazxg11vu ; real_T gw0rerd52a ; real_T ll25dgbfe2 ; real_T loqom214rl ;
real_T gohknt3zhv ; real_T l1bih2veee ; real_T i1v54eahu0 ; real_T ah33na0mde
; real_T mja1ugwxdu ; real_T bodksgvhlf ; real_T pgkgp0bijj ; real_T
ilet4fenmw ; real_T fhm3nn5d1b ; real_T h0nm5jgafs ; real_T gvs21fqhuk ;
real_T mo23g4pnrk ; real_T o3qvvpwmd3 [ 2 ] ; real_T m10kbud4ob ; real_T
mtgk0ff4be ; real_T h5wr1gji1b ; real_T cqwvwhr1jq ; real_T dclv2c3egj ;
real_T ii4qwz2ynt ; real_T cqmb4ean0h ; real_T kn52niorhw ; real_T l4uwl1uy0r
; real_T o0k0kwosqj ; real_T fpggvpdrmb ; real_T lcc15x1i4j ; real_T
frxbxzmcnw ; real_T oagwqvtorn ; real_T iqpo2uomij ; real_T i1jllhl2ro ;
real_T h3pb04vqfl ; real_T mi3hyl32jv [ 2 ] ; real_T hwwdionvx0 ; real_T
lkil0izc4t ; real_T d2mrurkchw ; real_T lokezzkpnq ; real_T etvjy1bchk ;
real_T dra2krvba4 ; real_T ibqzqe3oou ; real_T cviauid1d3 ; real_T bfdxinhtnw
; real_T nlg5uajt21 ; real_T mbum4xbd0e ; real_T pv3si0fkfr ; real_T
l4bvwu01j3 ; real_T brueov51ao ; real_T idhpkfnk0a ; real_T gpphxbqvy3 ;
real_T aamnmjm1yc ; real_T p5x1uibsfi [ 2 ] ; real_T j50fv2yw23 ; real_T
mfwdsafnjz ; real_T ebwtivil4o ; real_T pv3ytmgy52 ; real_T dnefh5theb ;
real_T cdt2p1s14w ; real_T c0qaqk5b53 ; real_T dw2bf5brbz ; real_T jkz1k1ztnc
; real_T egzy5dbwp0 ; real_T jspilqipin ; real_T npsucfyiyj ; real_T
h0svs1rpby ; real_T nsormta4tz ; real_T bb2tvjwhg5 ; real_T devyvktlbb ;
real_T euoedwiyxz ; real_T he3amknkw3 [ 2 ] ; real_T gfql04q11h ; real_T
lrrgqvyxev ; real_T mpdwhul4c3 ; real_T kib51taq3o ; real_T lzciuaakro ;
real_T hjxmaadmti ; real_T jm5mspklpa ; real_T bsd0rneemv ; real_T egqt5e4qc0
; real_T oqgrnwgpxv ; real_T der1hzp1xn ; real_T ge4nyhm1r3 ; real_T
e5v2koad5v ; real_T p2qcrjqxdh ; real_T fftrdajetv ; real_T a0dbybcqci ;
real_T jbsevw1lu1 ; real_T d5tlsdo253 ; real_T gqkd1ueiwi ; real_T fsmvwznsct
; real_T hwxfmqt0gr ; real_T deythrkt14 ; real_T fe1hwnkjzh ; real_T
n4qnpxnbuu ; real_T gwv4jfdhm1 ; real_T lebmhzg0mt ; real_T mgs2im4zap ;
real_T bsvezlusnl ; real_T gw1dmadrpe ; real_T cpjkmvluab ; real_T b2lkww2jyt
; real_T mq21afeej4 ; real_T mvgpkg11eh ; real_T o4cw4y3nry ; real_T
ltma5vi0g1 ; real_T bueu3wy0fh ; real_T mv3uo5px30 ; real_T meb4zbqjxi ;
real_T csxd24zgug ; real_T jk5kvepviq ; real_T pq0iqevv0y ; real_T jtp3uxrzli
; real_T ps1sa4yqwt ; real_T gj0ycrtj5t ; real_T cje00jsebg ; real_T
ehyt3ybvhy ; real_T c1crd40ka1 ; real_T bkvd0q0xbh ; real_T ov22k0lvp4 ;
real_T mddp40g3ij ; real_T atxuog4za1 ; real_T nn4ue0o2n1 ; real_T l0ovgbpw0v
; real_T a1acouxm22 ; real_T htz5ycylyf ; real_T ows41rmx5g ; real_T
mvs4yx5z0y ; real_T hlsy5izhcz ; real_T m3owjuhgvc ; real_T ablwxnz4t2 ;
real_T m13gwn2ern ; real_T gwx425b5rd ; real_T lfxlotm5a0 ; real_T lojqadga1m
; real_T plzvecy2ci ; real_T j1nlxlazhf [ 2 ] ; real_T nxxbgul0jm ; real_T
j2yatlqg4t ; real_T ashhku0ld2 ; real_T eu1wtgr3lr ; real_T ir55binbpc ;
real_T aaezvyca1i ; real_T fqdakf20fg ; real_T chrxx4xqzd ; real_T hut5ed5ncb
; real_T njkehyxd2c [ 2 ] ; real_T nwddfz0u4c ; real_T oyu3bdsl5p ; real_T
bwztrzbo3q ; real_T ivgngk3er1 ; real_T ffcbgxjkk2 ; real_T mekozqjtbe ;
real_T kuafjwwjj0 ; real_T fuw4y5ptc3 ; real_T fyv5sb3uga ; real_T hslnzetru2
[ 2 ] ; real_T oynr1ardse ; real_T mb4emfy1e1 ; real_T ifesd4uvi5 ; real_T
nqdhd25la3 ; real_T fugz5sg2sv ; real_T omdgfacbza ; real_T cshiufn5c5 ;
real_T lbwnjiuxsr ; real_T kz2wf5heu5 ; real_T p4rleumfzg [ 2 ] ; real_T
kqhgk1l5tm ; real_T beudjok0zo ; real_T hnkuut20k4 ; real_T cnnfzpjomf ;
real_T l4ihoo3otx ; real_T o4wxrlodfy ; real_T egnyznlrun ; real_T blode0dhl5
; real_T khcwqmpttq ; real_T p01y5fcekv [ 2 ] ; real_T azlkk5ukj5 ; real_T
mjipizwcde ; real_T bcs4zro1sc ; real_T fza5dbobgj ; real_T bbxfb2lt5i ;
real_T ou1hxpsbtc ; real_T d3y2k2c1cl ; real_T pdkvwktmkv ; real_T fbm3deed12
; real_T kirrpnesgo [ 2 ] ; real_T bjj2r2kqch ; real_T gimkhjafkq ; real_T
jdkd14gwno ; real_T om4ycpup2d ; real_T hiredmbfaq ; real_T bipz2gs2vb ;
real_T matyiq12y5 ; real_T grtyslbuut ; real_T g3uwu00l2j ; real_T mvrwthfshy
; real_T mdbjo22jfb ; real_T aoq52irvwi ; real_T d4il4jbr1v ; real_T
hhllbndska ; real_T htjuj5klu4 ; real_T nodycz41hd ; real_T obw1lciifs ;
real_T cktb0tkc0f ; real_T hprtfj5lqp ; real_T pji40g4vfw ; real_T ew1rj0v0ip
; real_T ozjpi5gmzi ; real_T l4jkzxpz40 ; real_T mrbmdp3mvq ; real_T
grxgbhmppu ; real_T iogfygqx3c ; real_T kwjnhm1rik ; real_T hyoixeg4fl ;
real_T lc3qdiuf3t ; real_T fxjrycxns1 ; real_T fueydjqllo ; real_T lud1nitdqz
; real_T fwqrljkgl5 ; real_T ih22bf4bis [ 4 ] ; real_T ey2x1plpfc [ 4 ] ;
real_T hiwi0ircf1 [ 4 ] ; real_T cyn5mhsbrs [ 4 ] ; real_T lkiqnu3azd [ 4 ] ;
real_T nvmxvdiax2 [ 4 ] ; real_T odaelk0hd5 ; real_T ar5quhe3n1 [ 4 ] ;
real_T jwsksleeja ; real_T au2eumcmnw [ 4 ] ; real_T mh22xyaypy ; real_T
hwnqfegtgf [ 4 ] ; real_T c11nptjhkq ; real_T pzpf3nd3va [ 4 ] ; real_T
f14l2fld1f ; real_T lcncbuna0k [ 4 ] ; real_T pdalytysiw ; real_T hstmkliglr
[ 4 ] ; real_T hhho25daxq [ 36 ] ; real_T b2caeksf4i [ 18 ] ; real_T
jrljlnvocq [ 4 ] ; real_T b2bp1tloeo [ 4 ] ; real_T lmsabjovac [ 4 ] ; real_T
n3klnoiklk [ 4 ] ; real_T o01lkeuvd1 [ 4 ] ; real_T ebfmf2wsfd [ 4 ] ; real_T
lvoipeofzz ; real_T nmoen0whma ; real_T dbgszugdvs ; real_T b0cqzuq31k ;
real_T krc4jb2phm ; real_T htvttv05oy ; real_T oj2z4dszqk ; real_T kpiwt1usty
; real_T onxt4mtv0n ; real_T pgmjibidt5 ; real_T ofr3o5n2gr ; real_T
i1yn4cbqfm ; boolean_T mvayvdtnfm ; boolean_T dfulmqk4uv ; boolean_T
kbuzw5x2iq ; boolean_T b2kt2bq2rg ; boolean_T jrzojgf3va ; boolean_T
pcez2gw042 ; boolean_T ffpw4qlmce ; boolean_T dpejr15fy5 ; boolean_T
ezdth4z4el ; boolean_T pj2cosrmgv ; boolean_T psxp5i3lg4 ; boolean_T
aw5fczldrp ; } B ; typedef struct { real_T liczzslnug ; real_T hbalfb24dh ;
real_T mcqxnh5qer ; real_T hri0uk1gw2 ; real_T bwjx1snxyl ; real_T mfo0ooprpe
; real_T c1jwwx42fx ; real_T mhha3stacp ; real_T lx1kthg2ak ; real_T
bsqva4pohk ; real_T lpwasbckyz ; real_T d4ohqbhzps ; real_T bfnpjdpcts ;
real_T bjypbkgsog ; real_T d0kf2aazrh ; real_T al0mzj21sg ; real_T ou3top1ox4
; real_T mmsgagixgx ; real_T c33j3xhn2h ; real_T nhkrizpina ; real_T
bgfsqdlzb2 ; real_T prb2fus1cf ; real_T oc01bukxc2 ; real_T d1olc5hqid ;
real_T ituhf3b0wr ; real_T k3i3dxp2ad ; real_T bpulvyc40u ; real_T e4gpd3p5q1
; real_T iwb0eino0x ; real_T o253susvy3 ; real_T ioeljr4qvu ; real_T
dduqiujiyo ; real_T loi2p44l5g ; real_T o15jwcclhk ; real_T m2gd3x52qg ;
real_T nkabqhmeiu ; real_T jjatyukdau ; real_T kdanylioto ; real_T krdgtk44dk
; real_T k4esgf3pin ; real_T cyacblwmwu ; real_T jxguvtxodm ; real_T
ml2zc01qz1 ; real_T j01x0sjof1 ; real_T fnn2jlfmi3 ; real_T iimmcuvdjs ;
real_T fox2nnpevw ; real_T lngpao5zhs ; real_T kswjrqpbnd ; real_T p1zvslcvk0
; real_T gwlc5gste3 ; real_T d03mkwdo2x ; real_T oem5mgthn3 ; real_T
cektosfijb ; real_T og0ns0accm [ 2 ] ; real_T ezn104xtfk [ 2 ] ; real_T
ezkcmaawd3 [ 2 ] ; real_T cg4btfqksn [ 2 ] ; real_T awm41kpugb [ 2 ] ; real_T
bqhavurmfx [ 2 ] ; real_T ocr2gtrnaz ; real_T e5l3gibvg4 ; real_T i1v2wl3m4b
; real_T bdwqisxww0 ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } f2qimf1l0g ; void * pcl5k34iwh ; void * eezcqf5nt4 ; void *
b2efndbc2b ; void * adad1xdxlk ; void * ibyrkkkvdk ; void * os1chhphe1 ; void
* lh0gnnaa5c ; void * ey4yt3c2wg ; void * lpofxorz55 ; void * drlwsxzbqr ;
void * hnxbpl1wx5 ; void * izfvfuof1b ; void * k0z433ri5i ; void * j2y3s4ejwx
; void * j3avufo4mj ; void * k22u2dj12d ; void * df4vdmnuwt ; void *
modeusfujc ; void * i1vjbzgyjh ; void * nz34jgwcsj ; struct { void *
LoggedData [ 6 ] ; } e4gobedwot ; struct { int_T PrevIndex ; } o535gad0gw ;
int_T iezvtdo4zq ; int_T iojrm1ldih ; struct { int_T AcquireOK ; } nvp3tswtih
; struct { int_T AcquireOK ; } j4znmhb1up ; struct { int_T AcquireOK ; }
njqnvhin1i ; struct { int_T AcquireOK ; } a4yiq2c5qz ; struct { int_T
AcquireOK ; } delwqzjfmb ; struct { int_T AcquireOK ; } kxwqlyfzql ; int_T
puciepvfhp [ 6 ] ; int_T anqxhpocun ; int32_T cy021mvipw ; int8_T ff1ypsbsry
; int8_T amkot2yy4d ; int8_T cwebk52hxz ; int8_T awuv0zqvac ; int8_T
jrc3tboejv ; int8_T kqwhwvmbo5 ; int8_T gcr0no5gxx ; int8_T dnpgzoukr4 ;
int8_T dcszolnjqw ; int8_T asudwslg1u ; int8_T ks2knrfwk4 ; int8_T lv2aww432q
; uint8_T luet2gj5du ; uint8_T dypi3mxxdf ; uint8_T n4syeszzv5 ; uint8_T
n21ig4q2la ; uint8_T f1fl5shvqt ; uint8_T ptqdowofkz ; uint8_T lfyvvh0sv5 ;
uint8_T iyvntabvlz ; uint8_T azfc3wig1a ; uint8_T pnmnijewrm ; uint8_T
eumkre2nza ; uint8_T fce4agh0zo ; boolean_T n2vle3a5kh ; boolean_T k4233ewp0g
; boolean_T dx1uzz32df ; boolean_T p2eqs0rgt4 ; } DW ; typedef struct {
real_T anlkrx3tc2 [ 24 ] ; real_T n212yfmu3n ; real_T mm14y0qob4 ; real_T
nyhtwgatpw ; real_T aunhsozkjd ; real_T bpjbkl34c1 ; real_T lm0fxpm1n1 ;
real_T opt4eui41m [ 2 ] ; real_T msharprh4q [ 2 ] ; real_T cnf2gqarr4 [ 2 ] ;
real_T dopllilgmw [ 2 ] ; real_T j2t2fcuhnz [ 2 ] ; real_T eyfhribqoa [ 2 ] ;
real_T fdlxnailwx [ 30 ] ; } X ; typedef struct { real_T anlkrx3tc2 [ 24 ] ;
real_T n212yfmu3n ; real_T mm14y0qob4 ; real_T nyhtwgatpw ; real_T aunhsozkjd
; real_T bpjbkl34c1 ; real_T lm0fxpm1n1 ; real_T opt4eui41m [ 2 ] ; real_T
msharprh4q [ 2 ] ; real_T cnf2gqarr4 [ 2 ] ; real_T dopllilgmw [ 2 ] ; real_T
j2t2fcuhnz [ 2 ] ; real_T eyfhribqoa [ 2 ] ; real_T fdlxnailwx [ 30 ] ; }
XDot ; typedef struct { boolean_T anlkrx3tc2 [ 24 ] ; boolean_T n212yfmu3n ;
boolean_T mm14y0qob4 ; boolean_T nyhtwgatpw ; boolean_T aunhsozkjd ;
boolean_T bpjbkl34c1 ; boolean_T lm0fxpm1n1 ; boolean_T opt4eui41m [ 2 ] ;
boolean_T msharprh4q [ 2 ] ; boolean_T cnf2gqarr4 [ 2 ] ; boolean_T
dopllilgmw [ 2 ] ; boolean_T j2t2fcuhnz [ 2 ] ; boolean_T eyfhribqoa [ 2 ] ;
boolean_T fdlxnailwx [ 30 ] ; } XDis ; typedef struct { int_T ir [ 60 ] ;
int_T jc [ 73 ] ; real_T pr [ 60 ] ; } MassMatrix ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
PIDController_D ; real_T PIDController1_D ; real_T PIDController2_D ; real_T
PIDController3_D ; real_T PIDController4_D ; real_T PIDController5_D ; real_T
PIDController_I ; real_T PIDController1_I ; real_T PIDController2_I ; real_T
PIDController3_I ; real_T PIDController4_I ; real_T PIDController5_I ; real_T
PIDController_I_a0r5e54zkz ; real_T PIDController1_I_jo4mb24iod ; real_T
PIDController2_I_gwszoiqkdx ; real_T PIDController3_I_bob1q1d43e ; real_T
PIDController4_I_lqglmmjoiy ; real_T PIDController5_I_mpy1uti4u1 ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForFilter ; real_T
PIDController2_InitialConditionForFilter ; real_T
PIDController3_InitialConditionForFilter ; real_T
PIDController4_InitialConditionForFilter ; real_T
PIDController5_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController2_InitialConditionForIntegrator ; real_T
PIDController3_InitialConditionForIntegrator ; real_T
PIDController4_InitialConditionForIntegrator ; real_T
PIDController5_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator_k0rtcmcmwi ; real_T
PIDController1_InitialConditionForIntegrator_dtdxu53dzy ; real_T
PIDController2_InitialConditionForIntegrator_oybt1x1ywj ; real_T
PIDController3_InitialConditionForIntegrator_grlnuwimvj ; real_T
PIDController4_InitialConditionForIntegrator_aq511wqjoh ; real_T
PIDController5_InitialConditionForIntegrator_pvky5nx2t5 ; real_T
LowPassFilterDiscreteorContinuous_K ; real_T
LowPassFilterDiscreteorContinuous_K_iadlz4dfqb ; real_T
LowPassFilterDiscreteorContinuous_K_dj2wq5ptg4 ; real_T
LowPassFilterDiscreteorContinuous_K_ix20lvg4ww ; real_T
LowPassFilterDiscreteorContinuous_K_dqv5icbpo4 ; real_T
LowPassFilterDiscreteorContinuous_K_jebkrx2q00 ; real_T
LowPassFilterDiscreteorContinuous_K_bvtursactz ; real_T
LowPassFilterDiscreteorContinuous_K_ldbi3kk5oi ; real_T
LowPassFilterDiscreteorContinuous_K_ijtsxy1si3 ; real_T
LowPassFilterDiscreteorContinuous_K_nfdjuhre1x ; real_T
LowPassFilterDiscreteorContinuous_K_kznnc2puht ; real_T
LowPassFilterDiscreteorContinuous_K_elbapaqm2w ; real_T PIDController_N ;
real_T PIDController1_N ; real_T PIDController2_N ; real_T PIDController3_N ;
real_T PIDController4_N ; real_T PIDController5_N ; real_T PIDController_P ;
real_T PIDController1_P ; real_T PIDController2_P ; real_T PIDController3_P ;
real_T PIDController4_P ; real_T PIDController5_P ; real_T
PIDController_P_mq1jsyv5uw ; real_T PIDController1_P_dbvxmh3exo ; real_T
PIDController2_P_b4eyl414uz ; real_T PIDController3_P_igsxoi0cjh ; real_T
PIDController4_P_a1czxzuwsb ; real_T PIDController5_P_dzwlsrlmqy ; real_T
filter_tc ; real_T filter1_tc ; real_T filter2_tc ; real_T filter3_tc ;
real_T filter4_tc ; real_T filter5_tc ; real_T filter_tc_kcv10akjdr ; real_T
filter1_tc_exm4toz5mi ; real_T filter2_tc_mwhxojqmwa ; real_T
filter3_tc_b0rftn00ld ; real_T filter4_tc_m5dsazuczp ; real_T
filter5_tc_cs0psgs55d ; real_T Constant_Value ; real_T FromWs_Time0 [ 20 ] ;
real_T FromWs_Data0 [ 120 ] ; real_T Integrator_gainval ; real_T
Integrator_UpperSat ; real_T Integrator_LowerSat ; real_T Saturation_UpperSat
; real_T Saturation_LowerSat ; real_T GAIN_Gain ; real_T Gain_Gain ; real_T
Filter_gainval ; real_T Integrator_gainval_npglpy4vwg ; real_T
Constant_Value_elzocfzv3z ; real_T Integrator_gainval_o3lqevhiv0 ; real_T
Integrator_UpperSat_lfmj5hqb2j ; real_T Integrator_LowerSat_k5sgxqrrjs ;
real_T Saturation_UpperSat_o5sqceaxad ; real_T Saturation_LowerSat_aqldnegvun
; real_T GAIN_Gain_bwl2tn4amr ; real_T Gain1_Gain ; real_T
Filter_gainval_ep02h3uqne ; real_T Integrator_gainval_fkgi2urzne ; real_T
Constant_Value_ccyvr50cmy ; real_T Integrator_gainval_m2kwfrohvf ; real_T
Integrator_UpperSat_mkchvcaeor ; real_T Integrator_LowerSat_al00fjl4v2 ;
real_T Saturation_UpperSat_drbu1b01ue ; real_T Saturation_LowerSat_e0wofzrvyc
; real_T GAIN_Gain_nohv0ojvel ; real_T Gain2_Gain ; real_T
Filter_gainval_jzpusmtczf ; real_T Integrator_gainval_ni1bbseuao ; real_T
Constant_Value_ltfu2n3aso ; real_T Integrator_gainval_axbx4gdp5p ; real_T
Integrator_UpperSat_bysv0peofj ; real_T Integrator_LowerSat_cxf0fnk0y4 ;
real_T Saturation_UpperSat_e0c2zptto2 ; real_T Saturation_LowerSat_cangmrc0kb
; real_T GAIN_Gain_ecfhfkgqbl ; real_T Gain3_Gain ; real_T
Filter_gainval_o0axdf1zsd ; real_T Integrator_gainval_aawupoadui ; real_T
Constant_Value_ioexv0z50z ; real_T Integrator_gainval_lxv2frdbtv ; real_T
Integrator_UpperSat_cwwfgeyo4e ; real_T Integrator_LowerSat_gjgwydu10i ;
real_T Saturation_UpperSat_eznfskdcrl ; real_T Saturation_LowerSat_esw3yahypq
; real_T GAIN_Gain_piwslcsoon ; real_T Gain4_Gain ; real_T
Filter_gainval_djvq3m5rlx ; real_T Integrator_gainval_mmczkrctnd ; real_T
Constant_Value_hhcejr3ea0 ; real_T Integrator_gainval_eohgzrg3vd ; real_T
Integrator_UpperSat_ebd22dx1d1 ; real_T Integrator_LowerSat_h5qrw1zwan ;
real_T Saturation_UpperSat_fp4onlvepw ; real_T Saturation_LowerSat_aku5h2443e
; real_T GAIN_Gain_jkkozojh3f ; real_T Gain5_Gain ; real_T
Filter_gainval_azvm5wbpik ; real_T Integrator_gainval_jrxbs0ybil ; real_T
GAIN_Gain_mulmeca5gq ; real_T Gain10_Gain ; real_T Gain12_Gain ; real_T
GAIN_Gain_l2gp1dcapi ; real_T Gain13_Gain ; real_T Gain15_Gain ; real_T
GAIN_Gain_eewbit12qx ; real_T Gain16_Gain ; real_T Gain2_Gain_iktjgimoln ;
real_T Gain3_Gain_hzczzgk3bt ; real_T GAIN_Gain_gj1zc25hs4 ; real_T
Gain4_Gain_gkiyqinsa1 ; real_T GAIN_Gain_e3s5mnjjuy ; real_T
Gain5_Gain_avuh005k0g ; real_T Gain6_Gain ; real_T GAIN_Gain_bka4fo5kzw ;
real_T Gain7_Gain ; real_T Gain9_Gain ; real_T Constant_Value_lm1lurr4hy ;
real_T Integrator_gainval_h3xna5sfll ; real_T Integrator_UpperSat_hxosttrbn1
; real_T Integrator_LowerSat_njt0zyqb4b ; real_T
Saturation_UpperSat_irbb5ee3qe ; real_T Saturation_LowerSat_avgaf5ds21 ;
real_T Integrator_gainval_otmviw4jih ; real_T Constant_Value_kzhoi3f11e ;
real_T Integrator_gainval_g1pivvolan ; real_T Integrator_UpperSat_pfwih5q0ig
; real_T Integrator_LowerSat_pbd52ykhos ; real_T
Saturation_UpperSat_jfp3gm1jww ; real_T Saturation_LowerSat_nkqwrbgzd1 ;
real_T Integrator_gainval_mgqsdlg1p3 ; real_T Constant_Value_dstjrw10qx ;
real_T Integrator_gainval_m0oovljwbz ; real_T Integrator_UpperSat_edcqyime1g
; real_T Integrator_LowerSat_kapqoyjcmn ; real_T
Saturation_UpperSat_cu3m2bizko ; real_T Saturation_LowerSat_acc4hmqzqd ;
real_T Integrator_gainval_ml0fjnpxz3 ; real_T Constant_Value_p51hfq4twj ;
real_T Integrator_gainval_enyfdvqy5k ; real_T Integrator_UpperSat_lkw0yc02po
; real_T Integrator_LowerSat_indtf15swa ; real_T
Saturation_UpperSat_aejz2ybmfq ; real_T Saturation_LowerSat_fbnlwwz3ni ;
real_T Integrator_gainval_kekw1rm401 ; real_T Constant_Value_bg1z0fnmqv ;
real_T Integrator_gainval_o2js2uvnfz ; real_T Integrator_UpperSat_lfd3uwwmqw
; real_T Integrator_LowerSat_ix4wayzgyy ; real_T
Saturation_UpperSat_izwihy1hdf ; real_T Saturation_LowerSat_gakz0d2xnn ;
real_T Integrator_gainval_lbry4slowr ; real_T Constant_Value_odca2fbdaq ;
real_T Integrator_gainval_i4ujstbkuh ; real_T Integrator_UpperSat_gjz1pvjay2
; real_T Integrator_LowerSat_hwnksdfkmv ; real_T
Saturation_UpperSat_i55r4kuqpb ; real_T Saturation_LowerSat_nssiijzpqc ;
real_T Integrator_gainval_m1aaboyqi5 ; real_T GAIN_Gain_lnpq3d2zgo ; real_T
GAIN_Gain_ajv2eupdqg ; real_T Gain_Gain_lqodkkl00f ; real_T
Gain1_Gain_mcme34rskr ; real_T GAIN_Gain_bjo5gzmoax ; real_T Gain11_Gain ;
real_T GAIN_Gain_hhtmm14nxk ; real_T Gain14_Gain ; real_T
GAIN_Gain_kxzwwrg2ad ; real_T Gain17_Gain ; real_T GAIN_Gain_pb2zwigstd ;
real_T Gain8_Gain ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern MassMatrix rtMassMatrix
; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
closedLoop_toTune_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
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
