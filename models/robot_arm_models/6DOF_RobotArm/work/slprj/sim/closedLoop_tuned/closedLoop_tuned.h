#include "__cf_closedLoop_tuned.h"
#ifndef RTW_HEADER_closedLoop_tuned_h_
#define RTW_HEADER_closedLoop_tuned_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef closedLoop_tuned_COMMON_INCLUDES_
#define closedLoop_tuned_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw.h"
#include "closedLoop_tuned_57a28c5_1_gateway.h"
#include "closedLoop_tuned_57a28c5_2_gateway.h"
#endif
#include "closedLoop_tuned_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { real_T jxrjelubpn [ 24 ] ; real_T k0xye32kow [ 12 ] ; real_T
jv20suu5kg [ 4 ] ; real_T mj4gjt33f3 [ 4 ] ; real_T hwk0u4eoqn [ 4 ] ; real_T
mrjmcb1eaq [ 4 ] ; real_T lhbimp5kmr [ 4 ] ; real_T idnqelgv01 [ 4 ] ; real_T
kbgonrof1r [ 2 ] ; real_T cpnsm5fki5 [ 2 ] ; real_T il2zdrdpzs ; real_T
a2ld4b11me ; real_T ofsiaytreh ; real_T n3ldelb453 ; real_T ngr10hc5m3 ;
real_T okzuauvitn [ 4 ] ; real_T pf4arwrhyx [ 2 ] ; real_T gs5wyjrzvf [ 2 ] ;
real_T d4klkeknc5 ; real_T ab2humyxjs ; real_T fpdxc0m2q5 ; real_T iik1ydfzer
; real_T bpvkri3q0b ; real_T hd5f3jh03c [ 4 ] ; real_T hpivumlrcc [ 2 ] ;
real_T ezyrayiasu [ 2 ] ; real_T hzrrdpmkic ; real_T igs4te5eut ; real_T
kfhz4kh3k1 ; real_T piuo4l0c3f ; real_T pvbgkev205 ; real_T eqathlbtwk [ 4 ]
; real_T iamzy5525o [ 2 ] ; real_T gkdm5dhsql [ 2 ] ; real_T jkyw0vhmte ;
real_T e1nynqow2s ; real_T kqn2kxb5sa ; real_T inzhtyivhd ; real_T ewb3tjnaav
; real_T o2jluiwonh [ 4 ] ; real_T gh0ba0iypp [ 2 ] ; real_T it2ouoy2lw [ 2 ]
; real_T c1cidqyaaz ; real_T mc5bjvku1h ; real_T jgdhfclmal ; real_T
kkjdrofzsj ; real_T m0qfxlppqp ; real_T e23ad5ihp4 [ 4 ] ; real_T ljdpmxc04v
[ 2 ] ; real_T gra4msiia2 [ 2 ] ; real_T knazmztaxp ; real_T hr1vg5j2or ;
real_T k5ii4pjkz3 ; real_T eap3iu1d2t ; real_T dhka03xnzo ; real_T ppj0cxlxco
[ 4 ] ; real_T acyhv10gdn [ 36 ] ; real_T asd4csvbcs [ 19 ] ; real_T
bs1e5cpoll [ 4 ] ; real_T k30tufukck [ 4 ] ; real_T a0iis2ayez [ 4 ] ; real_T
kzrjgwxloa [ 4 ] ; real_T h1mwn5bwbv [ 4 ] ; real_T dw2p0ylolg [ 4 ] ; real_T
ewtdk1a3wj ; real_T czgs54xlrn ; real_T ipcork0j5r ; real_T g2kdahdcll ;
real_T mvhqmddcdi ; real_T cbxpo1dgoh ; real_T mugze5h0np ; real_T i5soltjzbg
; real_T oqif5mozdt ; real_T a11ufkvxe2 ; real_T i5mqop40o4 ; real_T
dk3zxjazcl ; real_T e4gi0xz1up ; real_T nxl5q24yqw ; real_T dytu4lqdaz ;
real_T i3lazf1uup ; real_T oybzinbsjs ; real_T lqu4qa401r ; real_T iehotwguah
; real_T gdgkrl4bz4 ; real_T divng01nk2 ; real_T onfvjve2wy ; real_T
g4baubdyll ; real_T ds44fme4rr ; boolean_T jmr501ypmv ; boolean_T argkaov1kz
; boolean_T ghui4bi0m1 ; boolean_T mimrrzjvgj ; boolean_T ffbrr0m5qz ;
boolean_T l321nlx0ow ; boolean_T myyre2h0cb ; boolean_T bjgzy5rjw5 ;
boolean_T f12elwi2je ; boolean_T niapjx0yaa ; boolean_T fmhgxbzpod ;
boolean_T lj554lxonv ; } n4awau1raf2 ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { real_T owjdrnlrr5 ; real_T kt4uicyvx0 ; real_T lsxjomeomv ;
real_T kyfvye0kyh ; real_T k5tezogtje ; real_T mtrpzv3ygn ; real_T c33z0kxz40
; real_T czvkwuyek1 ; real_T fljztst5wo ; real_T muit3a3q1x ; real_T
fyyyxyhfe2 ; real_T luoxgto34c ; real_T lbcqusxymb ; real_T martnwreej ;
real_T axiqwbld0q ; real_T dlusidt5mu ; real_T ftka134rfi ; real_T mfarqvu45m
; real_T hylr2w3yna ; real_T nx1wrktxq2 ; real_T lnboystaxq ; real_T
kva2ijsjip ; real_T gohohcrj54 ; real_T mibsc4a2kt ; real_T jrb1kz3zlg ;
real_T fpo5oixhup ; real_T hmmcsmj0xw ; real_T eat1taflmt ; real_T akyzgxh1sj
; real_T im3cksdclx ; real_T ap5cqbvm1g ; real_T koqgz4rjix ; real_T
mymypzqmu0 ; real_T a5avu4h2ix ; real_T mdyqmzjrn0 ; real_T eicckovdtk ;
real_T jlvuwqbqtq ; real_T lau0kxrr3b ; real_T d00cvtrow5 ; real_T iioyhpmu2z
; real_T lqn4y02ryj ; real_T e1nkcmfeef ; real_T h2azwddpsi ; real_T
itkowzvhmy ; real_T aqhbkipuc1 ; real_T d2ihml4pca ; real_T ohubyvobgd ;
real_T jhkfvfo11l ; real_T ejngdjwvuh ; real_T dztpawf31l ; real_T msarqtw0ej
; real_T kc4smoweoa ; real_T psdk3h03r4 ; real_T pojlpslfax ; real_T
cmjntkjs5o [ 2 ] ; real_T dwblx5h40t [ 2 ] ; real_T a4oaoqzmvb [ 2 ] ; real_T
f2edgntbzl [ 2 ] ; real_T ml04raex0s [ 2 ] ; real_T d1gzuqoj4q [ 2 ] ; real_T
fu4515tfei ; real_T mcnyytj12g ; real_T g5juej3g4q ; real_T owpb4gqr4b ; void
* bl4aw00lkd ; void * fwekq1g4wz ; void * ntdusjysav ; void * pj2maxsxxw ;
void * mgufiylkg3 ; void * m3y2tcffef ; void * bxx3aunqbh ; void * nbnbmwp5ah
; void * o1vbqvykoo ; void * bhra0kbvk2 ; void * gqpntsbwxh ; void *
dojae3fabx ; void * eqhqru4bkb ; void * mdn4thoi0k ; void * bq112o4es5 ; void
* nbkxol04ay ; void * iacissyba2 ; void * jcs4deobwu ; void * dwwqzuviw3 ;
void * l0qtrieojp ; struct { void * AQHandles ; void * SlioLTF ; } ne4l15gebh
; struct { void * AQHandles [ 6 ] ; void * SlioLTF ; } h30jmamuoh ; struct {
void * AQHandles [ 6 ] ; void * SlioLTF ; } d1shbopr2m ; int_T dlhbeuzmaz ;
int_T emiegndpgn ; int_T beljpehthd [ 6 ] ; int_T jyeac3e5ko ; int32_T
f3vldgt55s ; int8_T hr3u05iedn ; int8_T fuwgakmpod ; int8_T cpjueliazg ;
int8_T j1flcekhiz ; int8_T gjsyon5lu1 ; int8_T gtdlxdr5hj ; int8_T ok503kfbwz
; int8_T nvuezdxtzi ; int8_T kpe2zccxxi ; int8_T imm0zy02qz ; int8_T
ogphl1wuml ; int8_T mzswpaogfa ; uint8_T lbikguphlp ; uint8_T he40254wch ;
uint8_T f01rjososq ; uint8_T jshht1u2q5 ; uint8_T m3ypcbfysw ; uint8_T
iltjdvd4vg ; uint8_T d3raebrh43 ; uint8_T i43yu5fsyu ; uint8_T phmwjirefk ;
uint8_T axj00twaij ; uint8_T h4yyh4nnql ; uint8_T jbclgbkabv ; boolean_T
baxue1nnnm ; boolean_T nwi1b1luuj ; boolean_T pojn0vmcuv ; boolean_T
auux5mhg5v ; } eilavowrwl4 ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { real_T lk3sdnwlk1 [ 24 ] ; real_T nanyzdwn3h ; real_T
fvut32tit4 ; real_T nu35g5ezne ; real_T n3zqzpztbu ; real_T gm135svjp2 ;
real_T nm2azj1trc ; real_T bpmqwncjfj [ 2 ] ; real_T nvdqtjs5r2 [ 2 ] ;
real_T or3kmp553n [ 2 ] ; real_T aij4dkucqh [ 2 ] ; real_T fpzb5mu1i2 [ 2 ] ;
real_T mctmaipokl [ 2 ] ; real_T kgvozz1pdk [ 30 ] ; } pu40142whda ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { real_T lk3sdnwlk1 [ 24 ] ; real_T nanyzdwn3h ; real_T
fvut32tit4 ; real_T nu35g5ezne ; real_T n3zqzpztbu ; real_T gm135svjp2 ;
real_T nm2azj1trc ; real_T bpmqwncjfj [ 2 ] ; real_T nvdqtjs5r2 [ 2 ] ;
real_T or3kmp553n [ 2 ] ; real_T aij4dkucqh [ 2 ] ; real_T fpzb5mu1i2 [ 2 ] ;
real_T mctmaipokl [ 2 ] ; real_T kgvozz1pdk [ 30 ] ; } id24jk0x2ms ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { boolean_T lk3sdnwlk1 [ 24 ] ; boolean_T nanyzdwn3h ;
boolean_T fvut32tit4 ; boolean_T nu35g5ezne ; boolean_T n3zqzpztbu ;
boolean_T gm135svjp2 ; boolean_T nm2azj1trc ; boolean_T bpmqwncjfj [ 2 ] ;
boolean_T nvdqtjs5r2 [ 2 ] ; boolean_T or3kmp553n [ 2 ] ; boolean_T
aij4dkucqh [ 2 ] ; boolean_T fpzb5mu1i2 [ 2 ] ; boolean_T mctmaipokl [ 2 ] ;
boolean_T kgvozz1pdk [ 30 ] ; } hiuxemmozll ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { int_T ir [ 60 ] ; int_T jc [ 73 ] ; real_T pr [ 60 ] ; }
dyxief5sea ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
struct pespwmvr2is_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ;
real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T
P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ;
real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T
P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ;
real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T
P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ;
real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T
P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ;
real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T
P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ;
real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T
P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ;
real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T
P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ;
real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102 ;
real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ;
real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ;
real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ;
real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ;
real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ;
real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ;
real_T P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ;
real_T P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ;
real_T P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ;
real_T P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ;
real_T P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ;
real_T P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ;
real_T P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ;
real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ;
real_T P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ;
real_T P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ;
real_T P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ;
real_T P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ;
real_T P_193 ; real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ;
real_T P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ;
real_T P_203 ; } ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
struct ldanydgdre { struct SimStruct_tag * _mdlRefSfcnS ; real_T *
massMatrixBasePr ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
132 ] ; int32_T * vardimsAddress [ 132 ] ; RTWLoggingFcnPtr loggingPtrs [ 132
] ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; }
;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
typedef struct { nbzsdh3gog rtm ; } elvjztouutq ;
#endif
extern void c1zon0qyu1 ( void ) ; extern void ghycukq2fb ( void ) ; extern
void h4fxpncuan ( void ) ; extern void cpsgcdfxop ( void ) ; extern void
ml0xqgpx3s ( real_T * localX_ ) ; extern void febppa0s54 ( real_T * localX_ ,
real_T * localXdot_ ) ; extern void gzlvoih4gg ( real_T * localX_ ) ; extern
void g3gadye0b3 ( real_T * localX_ , real_T * localXdot_ ) ; extern void
a1stgek52t ( real_T * localX_ ) ; extern void fh5akag4fo ( real_T * localX_ )
; extern void closedLoop_tuned ( const real_T * eftkqi2uqx , const real_T *
chelevjaju , const real_T * ed1wyjpuuh , const real_T * jrgsipw0bp , const
real_T * m5vh3hyppt , const real_T * kx0yhuedat , real_T * bwngodvth1 ,
real_T * gbdmtjn4mq , real_T * g0sjdawhsf , real_T * mx2sgp3e1r , real_T *
c2lqxtprfq , real_T * boerjqp35i , real_T * localX_ ) ; extern void
bsskyrygm1 ( void ) ; extern void mromvgiaby ( SimStruct * _mdlRefSfcnS ,
int_T mdlref_TID0 , int_T mdlref_TID1 , real_T * localX_ , real_T * localMM ,
void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI ,
const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_closedLoop_tuned_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_closedLoop_tuned_GetDWork ( ) ; extern void mr_closedLoop_tuned_SetDWork (
const mxArray * ssDW ) ; extern void
mr_closedLoop_tuned_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_closedLoop_tuned_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * closedLoop_tuned_GetCAPIStaticMap ( void ) ;
void mr_closedLoop_tuned_CreateInitRestoreData ( ) ; void
mr_closedLoop_tuned_CopyFromInitRestoreData ( ) ; void
mr_closedLoop_tuned_DestroyInitRestoreData ( ) ;
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
extern elvjztouutq elvjztouut ;
#endif
#ifndef closedLoop_tuned_MDLREF_HIDE_CHILD_
extern n4awau1raf2 lvuzhhuckmt ; extern eilavowrwl4 d1slopnfj2d ;
#endif
#endif
