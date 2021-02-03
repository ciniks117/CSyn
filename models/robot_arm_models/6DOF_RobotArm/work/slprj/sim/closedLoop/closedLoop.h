#include "__cf_closedLoop.h"
#ifndef RTW_HEADER_closedLoop_h_
#define RTW_HEADER_closedLoop_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef closedLoop_COMMON_INCLUDES_
#define closedLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw.h"
#include "closedLoop_2f6391d8_1_gateway.h"
#include "closedLoop_2f6391d8_2_gateway.h"
#endif
#include "closedLoop_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { real_T ifpjipjhob [ 24 ] ; real_T inqhzhb0pg [ 12 ] ; real_T
k02mbhlw1t ; real_T pdhwu31m4v ; real_T dzzjhrmxmh ; real_T cndf4llhki ;
real_T fbdziutlst ; real_T g350wynvmb ; real_T dtgsdqgg0q ; real_T ia5oez2mak
; real_T mw0h41hol3 ; real_T heefjqovkk ; real_T iofmmprsur ; real_T
f2obljhlxv ; real_T ipmgvtmz0p ; real_T md1hwdfaw0 ; real_T f2poduj1se ;
real_T m2n4ar1n2i ; real_T gvju2sivxf ; real_T lqy11apf3e ; real_T dxindqk5ap
[ 4 ] ; real_T mxdpm2mgmf [ 4 ] ; real_T m4am5qqyxf [ 4 ] ; real_T jshfwrvsum
[ 4 ] ; real_T opwk0qcg1j [ 4 ] ; real_T kovkup1lbe [ 4 ] ; real_T dvdfpqupvw
[ 2 ] ; real_T jboflpmlgl ; real_T gvxqq2drkr [ 2 ] ; real_T e533on3dew ;
real_T oxxrcem11e ; real_T gsbroayuv4 ; real_T ex5jwcruri ; real_T nuophhg5zj
; real_T eaqsdmtsbk ; real_T ixesed2ean ; real_T d3mpqgab3u ; real_T
fprvc2pkb5 ; real_T jbqxn5zlnu ; real_T m4yl5vpts2 ; real_T a4ijmg00rn ;
real_T cqom2nhmk2 ; real_T lkxcfhia4s ; real_T ckpkttb0zm ; real_T iuco14ytiq
; real_T lb5otvwgy1 ; real_T j43t334fqb ; real_T aqqltp4gox ; real_T
bsso1gl4sz ; real_T ccvzquveq4 ; real_T ga313eveon ; real_T am5rwkyguj ;
real_T j2rqyakskv ; real_T f5elnixfao ; real_T asnfpaduo0 ; real_T mxwazunugj
[ 4 ] ; real_T ecllldohtk [ 2 ] ; real_T cs1qx4pkft ; real_T lglx1tyi3w [ 2 ]
; real_T jynkr5zc5k ; real_T dggq1ftd4d ; real_T cc1ikppcoe ; real_T
gup53f13wt ; real_T cjiwv41dtz ; real_T cyvfcuag0d ; real_T owxogzl3qh ;
real_T oj2hrval0l ; real_T lpkm4pkk2g ; real_T cpjebkyeqd ; real_T f5acbxbbxd
; real_T igwxrnhwvy ; real_T euxeitc2fq ; real_T iphsvwpxoz ; real_T
en3mr1o540 ; real_T jpx50ffdto ; real_T hihw2kx10l ; real_T ddtdb5154z ;
real_T lxk3aawz4t ; real_T eoirmu0eq4 ; real_T oguy5fkfpw ; real_T fw0cndgkar
; real_T c53gujuucy ; real_T ixxkxmji23 ; real_T amfuazduqp ; real_T
psaggqmu0j ; real_T l5ozfby1n1 [ 4 ] ; real_T ni2moweccg [ 2 ] ; real_T
cbn5w5msnc ; real_T gimccxcbis [ 2 ] ; real_T clczo1piy5 ; real_T pabuhk1ylg
; real_T m2w4u0arlu ; real_T ntwpnpylm1 ; real_T fs3dc0tbpl ; real_T
cjvyflecdr ; real_T mvmmo5i5vd ; real_T e5ie1xjwrq ; real_T nn2c4c4duw ;
real_T kktzaybug1 ; real_T ee11anycsp ; real_T jcjabgspcb ; real_T nzchhvzjwf
; real_T ob51ukz2bm ; real_T aoi5sx3qcq ; real_T kinhb41jtj ; real_T
kplrhafmh3 ; real_T nm0gzkykgc ; real_T d3bcnxa0ko ; real_T n3hickxmon ;
real_T nuvirjsljk ; real_T pqudmcvigc ; real_T cxtvdmho2w ; real_T pgojyqs2kb
; real_T jq2t1vws1o ; real_T mvuwiian3j ; real_T ppdvvvhxwt [ 4 ] ; real_T
laxrqi2iig [ 2 ] ; real_T evydgbi4vg ; real_T dfa1yu3sfp [ 2 ] ; real_T
dxksw5kbg2 ; real_T fhq2gw2vcg ; real_T nauwt2pif4 ; real_T bsoahlrjiv ;
real_T fb2s2obyf0 ; real_T j44l5nmvh1 ; real_T iqbavtlu0x ; real_T cugk41zl3m
; real_T h3sgdlsv1k ; real_T cy1ksr03v3 ; real_T eity53wqmz ; real_T
nv0ihfsqee ; real_T bmsqajkl3i ; real_T dkiwzssrrd ; real_T et1bih2zwh ;
real_T cg3hcg53ow ; real_T mz1mdyrpzb ; real_T eqlmw30r4b ; real_T gqofhs32zl
; real_T ewk2raypbg ; real_T n41gnetfgk ; real_T bcqlwdbs5s ; real_T
hulk0vkayl ; real_T gtb0t3ry1y ; real_T e3cqs5nhjw ; real_T hev050xsp2 ;
real_T gh10p1ptww [ 4 ] ; real_T bbvyttcgmj [ 2 ] ; real_T g3kokdjcok ;
real_T nd2k2c1rii [ 2 ] ; real_T ghuaibncue ; real_T pwp32mkxmp ; real_T
el0u4ptz3m ; real_T if2de54hzv ; real_T nmgje50msd ; real_T p0ws55j4kv ;
real_T my0xq3oeng ; real_T ijhvoblfqp ; real_T ichqtsmstf ; real_T lq2qrnvgbd
; real_T ltaelwvlfx ; real_T i35bda5fqu ; real_T euwsshzwsz ; real_T
euc1541upk ; real_T nwbgtuxij0 ; real_T p54vogxihi ; real_T ma3bvfapft ;
real_T eqzd1gajqp ; real_T pwrnqu13gx ; real_T o0f4tiqguw ; real_T buswlgzps3
; real_T osjyiqh0ob ; real_T bw05k0mpda ; real_T auykwk5il3 ; real_T
nfaiw5glsx ; real_T kneg4z3eqy ; real_T pwdpdq4j44 [ 4 ] ; real_T huiknpmeom
[ 2 ] ; real_T fef4xn2fp5 ; real_T mj5b4ytj5n [ 2 ] ; real_T lclhh42nxp ;
real_T hazyu5dee4 ; real_T bmymblppux ; real_T mtsky5ga42 ; real_T irzj1knv2x
; real_T b5cyprxpem ; real_T oqgie4xmek ; real_T fcda1empap ; real_T
pibccbzglq ; real_T mgwutfxaxu ; real_T apu1zqolri ; real_T pctkrqa5uw ;
real_T n31zxbxxwf ; real_T cdv3ygqxjn ; real_T hmdjfbj2px ; real_T bv43glsamx
; real_T bcpoonnq4a ; real_T pvnmppu5sq ; real_T nweukartad ; real_T
osk5s5rhdj ; real_T n531orgl43 ; real_T jdtpfzobve ; real_T ow0zitwej4 ;
real_T azh5omjcfp ; real_T natbjm3v0a ; real_T ehvgzznjj4 ; real_T g4fwetwo31
[ 4 ] ; real_T a3m0ks3p0y [ 36 ] ; real_T one4ycp0a5 [ 18 ] ; real_T
hhczjtzyj5 [ 4 ] ; real_T imtlp51aqd [ 4 ] ; real_T oe1dnrny2q [ 4 ] ; real_T
e3os4rwhiv [ 4 ] ; real_T bfaefzzyat [ 4 ] ; real_T b10z030dj4 [ 4 ] ; real_T
do2div5dmu ; real_T inbc5rmj0k ; real_T datlkjknld ; real_T ltqcojipph ;
real_T nlm325sgjs ; real_T ahkt3v2tkj ; real_T lnviaa3aja ; real_T pjmyemwyst
; real_T lvgwomq1ya ; real_T kwvx5icu52 ; real_T aklkh2iyp2 ; real_T
l00kscgz5x ; real_T p2jg50l41x ; real_T dzs221sche ; real_T om1dpdvyxj ;
real_T l24gr3t25r ; real_T fgqlt0352h ; real_T gsoejj5gry ; real_T ak2zdkdvjm
; real_T no0iooeye4 ; real_T cmfmx0kuqh ; real_T bqdylagldh ; real_T
cygpl2eh3n ; real_T eokjyir44v ; real_T dunjupvfq0 ; real_T jtqezz3n5v ;
real_T d4ckjpxf4d ; real_T jfrwhhaoxa ; real_T jwy0sllq0r ; real_T isxtmltnln
; real_T bi2q4i3qsl ; real_T bd4upxutxh ; real_T op3kzfupwu ; real_T
ac5tg4zqmv ; real_T o1p24pcmux ; real_T mmdwsrlci3 ; real_T hyezcvutd0 ;
real_T krazaowazm ; real_T h5dhbabhyc ; real_T gocnlro3ua ; real_T dr00wzmmfp
; real_T pllzd1yzu1 ; real_T goceextyjn ; real_T bsldqtkyrx ; real_T
m33loiozqp ; real_T dtzo3eih3h ; real_T by0cvwg5fo ; real_T grfgj4ibi4 ;
real_T o50nw3ugmm ; real_T fkurul1irj ; real_T ktj3bc45nf ; real_T ll2bp3mzb5
; real_T azkpe3xngh ; real_T bplheqo1n1 ; real_T iqorpfqvex ; real_T
dfhhva0f3s ; real_T bmjg0kms3r ; real_T nbvso2z4hg ; real_T itxq3inszm ;
real_T ijctsqavfk ; real_T hb4rbdqlcw ; real_T eiic0jvpln ; real_T eohyobbmek
; real_T m2kpw0vl0e ; real_T m0f3jhv5qh ; real_T jsrt3bznjs ; real_T
muix2l5juf ; real_T feo1305x5l ; real_T fdlp20qiat ; real_T hot10qhgpk ;
real_T hdtqbblv4p ; real_T ogguiilgfn ; boolean_T hwmhajtbh2 ; boolean_T
bwnjfsl54j ; boolean_T icvmqhdxij ; boolean_T bdsmqsg0a3 ; boolean_T
dfgizgbrra ; boolean_T aajfu1lxi5 ; boolean_T dkq3kdkhqf ; boolean_T
flladf3o4m ; boolean_T npzqjhst13 ; boolean_T kyctfbwiil ; boolean_T
jngqdlisiv ; boolean_T c2vlvnfzj2 ; } mrno05akddg ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { real_T hlha5jwilk ; real_T ct1fp3ytps ; real_T hbxvwhds10 ;
real_T jycpyvgbwk ; real_T pvzgszxw0h ; real_T ed0zskjjvf ; real_T kdbgqe1rl0
; real_T mkl1pjdrap ; real_T ckaxc2yuzj ; real_T nnm5ezmxoj ; real_T
icxmsd205h ; real_T petosikypy ; real_T mikve0glkh ; real_T ccquv3ehj4 ;
real_T pbidohzefw ; real_T lzgpy1pmbg ; real_T ndcz2pevdt ; real_T e2xmk045t3
; real_T ceeqqvhrmq ; real_T grtf40g3km ; real_T ipoqi0vxan ; real_T
h5eac0mibo ; real_T pa4czare1d ; real_T ckwjuadpca ; real_T eh1viw32xa ;
real_T froc5u33zh ; real_T ouygc4kcvb ; real_T kjml2jdhog ; real_T onzlg3sfc1
; real_T dsxwjihxvj ; real_T aqmkm5qp10 ; real_T mssfecnie3 ; real_T
g2b0tbo4r5 ; real_T kj4m4y1hwn ; real_T daodt1zxg3 ; real_T k2jw35opgq ;
real_T e0gmlv2sjn ; real_T limd3gdwcq ; real_T nngs2uucok ; real_T awmyjetxto
; real_T jjqy4wbyuk ; real_T lgzj3kmwmk ; real_T o32wlonvfn ; real_T
d5gswgg44w ; real_T cwuv444nvd ; real_T p2mtfvoju0 ; real_T au1qch111s ;
real_T eiqgdqqruu ; real_T arjxbzyxfd ; real_T iep3kan2rd ; real_T m42uoygnhd
; real_T ajirvaztbv ; real_T kt2l00xp53 ; real_T koqig0mkgk ; real_T
g2joetjd4n [ 2 ] ; real_T ajl2ukv15n [ 2 ] ; real_T byfchznm5b [ 2 ] ; real_T
di3hvnfgwf [ 2 ] ; real_T bu5ibyt3ar [ 2 ] ; real_T kxgtmxa2p2 [ 2 ] ; real_T
i3bqhqdooa ; real_T no0lkkst0o ; real_T ebgm2o4pem ; real_T bztbsebwen ; void
* es1n0xuy5w ; void * mtmd51jfqa ; void * pryqdadyrt ; void * nucourajot ;
void * ogj2mdkkag ; void * lbpm3d2oh5 ; void * kiq53exfqv ; void * hnzbntkygs
; void * mh2zjcwklq ; void * iflfwt5bmy ; void * gajog0hbzz ; void *
bilgsbrgvi ; void * hczaoupcph ; void * pccqwiwk4g ; void * n3gi5pt3iq ; void
* ew4t3cugld ; void * nia05kgprc ; void * mihmamakpr ; void * gq0zl1un0k ;
void * hsjtwsq4dl ; int_T psdfuxjdsv ; int_T kzyw5zlnoa ; int_T eiifcbyv3z ;
int_T e5wpgchixm ; int_T mifzmh1b42 ; int_T mmcfrrmcvl ; int_T cbrf0g0kcz ;
int_T la3j00tqdl ; int_T dvaxfxyujx [ 6 ] ; int_T krzcukqncn ; int32_T
kqn0icr3hm ; int8_T dyn5irgyjj ; int8_T kayrm3qjer ; int8_T h2jjjrmgpx ;
int8_T n1r0ywaznf ; int8_T alglf53p5h ; int8_T mmmkxfaf4h ; int8_T bmhe2rp2ug
; int8_T g5es2g4qos ; int8_T flp2r32tjj ; int8_T gyifh2fi2t ; int8_T
cct53vt3uw ; int8_T ithaa4tvwx ; uint8_T bepyqlw5qu ; uint8_T hritc1babc ;
uint8_T jpgsqiqfhq ; uint8_T n1umrqm4ou ; uint8_T akgp3l4qdu ; uint8_T
nw11erxd40 ; uint8_T dceylbyzbv ; uint8_T epxooln5rc ; uint8_T bbvyyfxxc2 ;
uint8_T etz51dx5fm ; uint8_T axinhpqqcc ; uint8_T h1d4piegmo ; boolean_T
gz005nfpps ; boolean_T oas3p1lfy5 ; boolean_T bevqx2fmne ; boolean_T
mfw21nyyvb ; } ar4cvowam3t ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { real_T kvq2o0kyuy [ 24 ] ; real_T isq3glw5ap ; real_T
jvjzsnn41x ; real_T aw5so3hvxw ; real_T h2c1iqll2l ; real_T gr0t541bm5 ;
real_T gbdjq0hbbl ; real_T jeypibejzj [ 2 ] ; real_T j2rvpdswec [ 2 ] ;
real_T j1sqmhdxq5 [ 2 ] ; real_T lwkodegk1s [ 2 ] ; real_T kq4hzt5vr1 [ 2 ] ;
real_T lijaeympzu [ 2 ] ; real_T lrmmgwl4ze [ 30 ] ; } pig3puin4o2 ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { real_T kvq2o0kyuy [ 24 ] ; real_T isq3glw5ap ; real_T
jvjzsnn41x ; real_T aw5so3hvxw ; real_T h2c1iqll2l ; real_T gr0t541bm5 ;
real_T gbdjq0hbbl ; real_T jeypibejzj [ 2 ] ; real_T j2rvpdswec [ 2 ] ;
real_T j1sqmhdxq5 [ 2 ] ; real_T lwkodegk1s [ 2 ] ; real_T kq4hzt5vr1 [ 2 ] ;
real_T lijaeympzu [ 2 ] ; real_T lrmmgwl4ze [ 30 ] ; } pvccj5rupnx ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { boolean_T kvq2o0kyuy [ 24 ] ; boolean_T isq3glw5ap ;
boolean_T jvjzsnn41x ; boolean_T aw5so3hvxw ; boolean_T h2c1iqll2l ;
boolean_T gr0t541bm5 ; boolean_T gbdjq0hbbl ; boolean_T jeypibejzj [ 2 ] ;
boolean_T j2rvpdswec [ 2 ] ; boolean_T j1sqmhdxq5 [ 2 ] ; boolean_T
lwkodegk1s [ 2 ] ; boolean_T kq4hzt5vr1 [ 2 ] ; boolean_T lijaeympzu [ 2 ] ;
boolean_T lrmmgwl4ze [ 30 ] ; } f0y1f4vpz3e ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { int_T ir [ 60 ] ; int_T jc [ 73 ] ; real_T pr [ 60 ] ; }
fjzbkpqmsm ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
struct gogtmvqwcmx_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
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
P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 [ 2 ] ; real_T
P_97 ; real_T P_98 [ 2 ] ; real_T P_99 ; real_T P_100 [ 2 ] ; real_T P_101 ;
real_T P_102 [ 2 ] ; real_T P_103 ; real_T P_104 [ 2 ] ; real_T P_105 [ 2 ] ;
real_T P_106 [ 2 ] ; real_T P_107 ; real_T P_108 [ 2 ] ; real_T P_109 ;
real_T P_110 [ 2 ] ; real_T P_111 ; real_T P_112 [ 2 ] ; real_T P_113 ;
real_T P_114 [ 2 ] ; real_T P_115 ; real_T P_116 [ 2 ] ; real_T P_117 ;
real_T P_118 [ 2 ] ; real_T P_119 ; real_T P_120 [ 2 ] ; real_T P_121 ;
real_T P_122 [ 2 ] ; real_T P_123 ; real_T P_124 [ 2 ] ; real_T P_125 ;
real_T P_126 [ 2 ] ; real_T P_127 [ 8 ] ; real_T P_128 [ 2 ] ; real_T P_129 [
4 ] ; real_T P_130 [ 2 ] ; real_T P_131 ; real_T P_132 [ 2 ] ; real_T P_133 ;
real_T P_134 [ 2 ] ; real_T P_135 [ 6 ] ; real_T P_136 [ 2 ] ; real_T P_137 ;
real_T P_138 [ 2 ] ; real_T P_139 ; real_T P_140 [ 2 ] ; real_T P_141 ;
real_T P_142 [ 2 ] ; real_T P_143 ; real_T P_144 [ 2 ] ; real_T P_145 ;
real_T P_146 [ 2 ] ; real_T P_147 ; real_T P_148 [ 2 ] ; real_T P_149 ;
real_T P_150 [ 2 ] ; real_T P_151 [ 2 ] ; real_T P_152 [ 2 ] ; real_T P_153 ;
real_T P_154 [ 2 ] ; real_T P_155 ; real_T P_156 [ 2 ] ; real_T P_157 ;
real_T P_158 [ 2 ] ; real_T P_159 ; real_T P_160 [ 2 ] ; real_T P_161 ;
real_T P_162 [ 2 ] ; real_T P_163 ; real_T P_164 [ 2 ] ; real_T P_165 ;
real_T P_166 [ 2 ] ; real_T P_167 ; real_T P_168 [ 2 ] ; real_T P_169 ;
real_T P_170 [ 2 ] ; real_T P_171 ; real_T P_172 [ 2 ] ; real_T P_173 [ 8 ] ;
real_T P_174 [ 2 ] ; real_T P_175 [ 4 ] ; real_T P_176 [ 2 ] ; real_T P_177 ;
real_T P_178 [ 2 ] ; real_T P_179 ; real_T P_180 [ 2 ] ; real_T P_181 [ 6 ] ;
real_T P_182 [ 2 ] ; real_T P_183 ; real_T P_184 [ 2 ] ; real_T P_185 ;
real_T P_186 [ 2 ] ; real_T P_187 ; real_T P_188 [ 2 ] ; real_T P_189 ;
real_T P_190 [ 2 ] ; real_T P_191 ; real_T P_192 [ 2 ] ; real_T P_193 ;
real_T P_194 [ 2 ] ; real_T P_195 ; real_T P_196 [ 2 ] ; real_T P_197 [ 2 ] ;
real_T P_198 [ 2 ] ; real_T P_199 ; real_T P_200 [ 2 ] ; real_T P_201 ;
real_T P_202 [ 2 ] ; real_T P_203 ; real_T P_204 [ 2 ] ; real_T P_205 ;
real_T P_206 [ 2 ] ; real_T P_207 ; real_T P_208 [ 2 ] ; real_T P_209 ;
real_T P_210 [ 2 ] ; real_T P_211 ; real_T P_212 [ 2 ] ; real_T P_213 ;
real_T P_214 [ 2 ] ; real_T P_215 ; real_T P_216 [ 2 ] ; real_T P_217 ;
real_T P_218 [ 2 ] ; real_T P_219 [ 8 ] ; real_T P_220 [ 2 ] ; real_T P_221 [
4 ] ; real_T P_222 [ 2 ] ; real_T P_223 ; real_T P_224 [ 2 ] ; real_T P_225 ;
real_T P_226 [ 2 ] ; real_T P_227 [ 6 ] ; real_T P_228 [ 2 ] ; real_T P_229 ;
real_T P_230 [ 2 ] ; real_T P_231 ; real_T P_232 [ 2 ] ; real_T P_233 ;
real_T P_234 [ 2 ] ; real_T P_235 ; real_T P_236 [ 2 ] ; real_T P_237 ;
real_T P_238 [ 2 ] ; real_T P_239 ; real_T P_240 [ 2 ] ; real_T P_241 ;
real_T P_242 [ 2 ] ; real_T P_243 [ 2 ] ; real_T P_244 [ 2 ] ; real_T P_245 ;
real_T P_246 [ 2 ] ; real_T P_247 ; real_T P_248 [ 2 ] ; real_T P_249 ;
real_T P_250 [ 2 ] ; real_T P_251 ; real_T P_252 [ 2 ] ; real_T P_253 ;
real_T P_254 [ 2 ] ; real_T P_255 ; real_T P_256 [ 2 ] ; real_T P_257 ;
real_T P_258 [ 2 ] ; real_T P_259 ; real_T P_260 [ 2 ] ; real_T P_261 ;
real_T P_262 [ 2 ] ; real_T P_263 ; real_T P_264 [ 2 ] ; real_T P_265 [ 8 ] ;
real_T P_266 [ 2 ] ; real_T P_267 [ 4 ] ; real_T P_268 [ 2 ] ; real_T P_269 ;
real_T P_270 [ 2 ] ; real_T P_271 ; real_T P_272 [ 2 ] ; real_T P_273 [ 6 ] ;
real_T P_274 [ 2 ] ; real_T P_275 ; real_T P_276 [ 2 ] ; real_T P_277 ;
real_T P_278 [ 2 ] ; real_T P_279 ; real_T P_280 [ 2 ] ; real_T P_281 ;
real_T P_282 [ 2 ] ; real_T P_283 ; real_T P_284 [ 2 ] ; real_T P_285 ;
real_T P_286 [ 2 ] ; real_T P_287 ; real_T P_288 [ 2 ] ; real_T P_289 [ 2 ] ;
real_T P_290 [ 2 ] ; real_T P_291 ; real_T P_292 [ 2 ] ; real_T P_293 ;
real_T P_294 [ 2 ] ; real_T P_295 ; real_T P_296 [ 2 ] ; real_T P_297 ;
real_T P_298 [ 2 ] ; real_T P_299 ; real_T P_300 [ 2 ] ; real_T P_301 ;
real_T P_302 [ 2 ] ; real_T P_303 ; real_T P_304 [ 2 ] ; real_T P_305 ;
real_T P_306 [ 2 ] ; real_T P_307 ; real_T P_308 [ 2 ] ; real_T P_309 ;
real_T P_310 [ 2 ] ; real_T P_311 [ 8 ] ; real_T P_312 [ 2 ] ; real_T P_313 [
4 ] ; real_T P_314 [ 2 ] ; real_T P_315 ; real_T P_316 [ 2 ] ; real_T P_317 ;
real_T P_318 [ 2 ] ; real_T P_319 [ 6 ] ; real_T P_320 [ 2 ] ; real_T P_321 ;
real_T P_322 [ 2 ] ; real_T P_323 ; real_T P_324 [ 2 ] ; real_T P_325 ;
real_T P_326 [ 2 ] ; real_T P_327 ; real_T P_328 [ 2 ] ; real_T P_329 ;
real_T P_330 [ 2 ] ; real_T P_331 ; real_T P_332 [ 2 ] ; real_T P_333 ;
real_T P_334 [ 2 ] ; real_T P_335 [ 2 ] ; real_T P_336 [ 2 ] ; real_T P_337 ;
real_T P_338 [ 2 ] ; real_T P_339 ; real_T P_340 [ 2 ] ; real_T P_341 ;
real_T P_342 [ 2 ] ; real_T P_343 ; real_T P_344 [ 2 ] ; real_T P_345 ;
real_T P_346 [ 2 ] ; real_T P_347 ; real_T P_348 [ 2 ] ; real_T P_349 ;
real_T P_350 [ 2 ] ; real_T P_351 ; real_T P_352 [ 2 ] ; real_T P_353 ;
real_T P_354 [ 2 ] ; real_T P_355 ; real_T P_356 [ 2 ] ; real_T P_357 [ 8 ] ;
real_T P_358 [ 2 ] ; real_T P_359 [ 4 ] ; real_T P_360 [ 2 ] ; real_T P_361 ;
real_T P_362 [ 2 ] ; real_T P_363 ; real_T P_364 [ 2 ] ; real_T P_365 [ 6 ] ;
real_T P_366 [ 2 ] ; real_T P_367 ; real_T P_368 [ 2 ] ; real_T P_369 ;
real_T P_370 [ 2 ] ; real_T P_371 ; real_T P_372 ; real_T P_373 ; real_T
P_374 ; real_T P_375 ; real_T P_376 ; real_T P_377 ; real_T P_378 ; real_T
P_379 ; real_T P_380 ; real_T P_381 ; real_T P_382 ; real_T P_383 ; real_T
P_384 ; real_T P_385 ; real_T P_386 ; real_T P_387 ; real_T P_388 ; real_T
P_389 ; real_T P_390 ; real_T P_391 ; real_T P_392 ; real_T P_393 ; real_T
P_394 ; real_T P_395 ; real_T P_396 ; real_T P_397 ; real_T P_398 ; real_T
P_399 ; real_T P_400 ; real_T P_401 ; real_T P_402 ; real_T P_403 ; real_T
P_404 ; real_T P_405 ; real_T P_406 ; real_T P_407 ; real_T P_408 ; real_T
P_409 ; real_T P_410 ; real_T P_411 ; real_T P_412 ; real_T P_413 ; real_T
P_414 ; real_T P_415 ; real_T P_416 ; real_T P_417 ; real_T P_418 ; real_T
P_419 ; real_T P_420 ; real_T P_421 ; real_T P_422 ; real_T P_423 ; real_T
P_424 ; real_T P_425 ; real_T P_426 ; real_T P_427 ; real_T P_428 ; real_T
P_429 ; real_T P_430 ; real_T P_431 ; real_T P_432 ; real_T P_433 ; real_T
P_434 ; real_T P_435 ; real_T P_436 ; real_T P_437 ; real_T P_438 ; real_T
P_439 ; real_T P_440 ; real_T P_441 ; real_T P_442 ; real_T P_443 ; real_T
P_444 ; real_T P_445 ; real_T P_446 ; real_T P_447 ; real_T P_448 ; real_T
P_449 ; real_T P_450 ; real_T P_451 ; real_T P_452 ; real_T P_453 ; real_T
P_454 ; real_T P_455 ; real_T P_456 ; real_T P_457 ; real_T P_458 ; real_T
P_459 ; real_T P_460 ; real_T P_461 ; real_T P_462 ; real_T P_463 ; real_T
P_464 ; real_T P_465 ; real_T P_466 ; real_T P_467 ; real_T P_468 ; real_T
P_469 ; real_T P_470 ; real_T P_471 ; real_T P_472 ; real_T P_473 ; real_T
P_474 ; real_T P_475 ; real_T P_476 ; real_T P_477 ; real_T P_478 ; real_T
P_479 ; real_T P_480 ; real_T P_481 ; real_T P_482 ; real_T P_483 ; real_T
P_484 ; real_T P_485 ; real_T P_486 ; real_T P_487 ; real_T P_488 ; real_T
P_489 ; real_T P_490 ; real_T P_491 ; } ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
struct orlpf30qtl { struct SimStruct_tag * * childSfunctions ; struct
SimStruct_tag * _mdlRefSfcnS ; real_T * massMatrixBasePr ; SS_SimMode simMode
; RTWSolverInfo solverInfo ; RTWSolverInfo * solverInfoPtr ; void * sfcnInfo
; struct { time_T * taskTimePtrs [ 2 ] ; SimStruct childSFunctions [ 6 ] ;
SimStruct * childSFunctionPtrs [ 6 ] ; struct _ssBlkInfo2 blkInfo2 [ 6 ] ;
struct _ssSFcnModelMethods2 methods2 [ 6 ] ; struct _ssSFcnModelMethods3
methods3 [ 6 ] ; struct _ssSFcnModelMethods4 methods4 [ 6 ] ; struct
_ssStatesInfo2 statesInfo2 [ 6 ] ; ssPeriodicStatesInfo periodicStatesInfo [
6 ] ; struct _ssPortInfo2 inputOutputPortInfo2 [ 6 ] ; struct { time_T
sfcnPeriod [ 1 ] ; time_T sfcnOffset [ 1 ] ; int_T sfcnTsMap [ 1 ] ; struct
_ssPortInputs inputPortInfo [ 1 ] ; struct _ssInPortUnit inputPortUnits [ 1 ]
; struct _ssInPortCoSimAttribute inputPortCoSimAttribute [ 1 ] ; real_T const
* UPtrs0 [ 1 ] ; uint_T attribs [ 23 ] ; mxArray * params [ 23 ] ; struct
_ssDWorkRecord dWork [ 1 ] ; struct _ssDWorkAuxRecord dWorkAux [ 1 ] ; }
Sfcn0 ; struct { time_T sfcnPeriod [ 1 ] ; time_T sfcnOffset [ 1 ] ; int_T
sfcnTsMap [ 1 ] ; struct _ssPortInputs inputPortInfo [ 1 ] ; struct
_ssInPortUnit inputPortUnits [ 1 ] ; struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 1 ] ; real_T const * UPtrs0 [ 1 ] ; uint_T attribs
[ 23 ] ; mxArray * params [ 23 ] ; struct _ssDWorkRecord dWork [ 1 ] ; struct
_ssDWorkAuxRecord dWorkAux [ 1 ] ; } Sfcn1 ; struct { time_T sfcnPeriod [ 1 ]
; time_T sfcnOffset [ 1 ] ; int_T sfcnTsMap [ 1 ] ; struct _ssPortInputs
inputPortInfo [ 1 ] ; struct _ssInPortUnit inputPortUnits [ 1 ] ; struct
_ssInPortCoSimAttribute inputPortCoSimAttribute [ 1 ] ; real_T const * UPtrs0
[ 1 ] ; uint_T attribs [ 23 ] ; mxArray * params [ 23 ] ; struct
_ssDWorkRecord dWork [ 1 ] ; struct _ssDWorkAuxRecord dWorkAux [ 1 ] ; }
Sfcn2 ; struct { time_T sfcnPeriod [ 1 ] ; time_T sfcnOffset [ 1 ] ; int_T
sfcnTsMap [ 1 ] ; struct _ssPortInputs inputPortInfo [ 1 ] ; struct
_ssInPortUnit inputPortUnits [ 1 ] ; struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 1 ] ; real_T const * UPtrs0 [ 1 ] ; uint_T attribs
[ 23 ] ; mxArray * params [ 23 ] ; struct _ssDWorkRecord dWork [ 1 ] ; struct
_ssDWorkAuxRecord dWorkAux [ 1 ] ; } Sfcn3 ; struct { time_T sfcnPeriod [ 1 ]
; time_T sfcnOffset [ 1 ] ; int_T sfcnTsMap [ 1 ] ; struct _ssPortInputs
inputPortInfo [ 1 ] ; struct _ssInPortUnit inputPortUnits [ 1 ] ; struct
_ssInPortCoSimAttribute inputPortCoSimAttribute [ 1 ] ; real_T const * UPtrs0
[ 1 ] ; uint_T attribs [ 23 ] ; mxArray * params [ 23 ] ; struct
_ssDWorkRecord dWork [ 1 ] ; struct _ssDWorkAuxRecord dWorkAux [ 1 ] ; }
Sfcn4 ; struct { time_T sfcnPeriod [ 1 ] ; time_T sfcnOffset [ 1 ] ; int_T
sfcnTsMap [ 1 ] ; struct _ssPortInputs inputPortInfo [ 1 ] ; struct
_ssInPortUnit inputPortUnits [ 1 ] ; struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 1 ] ; real_T const * UPtrs0 [ 1 ] ; uint_T attribs
[ 23 ] ; mxArray * params [ 23 ] ; struct _ssDWorkRecord dWork [ 1 ] ; struct
_ssDWorkAuxRecord dWorkAux [ 1 ] ; } Sfcn5 ; } NonInlinedSFcns ; boolean_T
zCCacheNeedsReset ; boolean_T derivCacheNeedsReset ; boolean_T
CTOutputIncnstWithState ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
132 ] ; int32_T * vardimsAddress [ 132 ] ; RTWLoggingFcnPtr loggingPtrs [ 132
] ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { uint32_T options ; int_T numContStates ; int_T numU ; int_T numY ;
int_T numSampTimes ; int_T numBlocks ; int_T numBlockIO ; int_T numBlockPrms
; int_T numDwork ; int_T numSFcnPrms ; int_T numSFcns ; int_T numIports ;
int_T numOports ; int_T numNonSampZCs ; int_T sysDirFeedThru ; int_T
rtwGenSfcn ; } Sizes ; struct { time_T stepSize ; time_T tStart ; time_T
tFinal ; time_T timeOfLastOutput ; time_T * sampleTimes ; time_T *
offsetTimes ; int_T * sampleTimeTaskIDPtr ; int_T * sampleHits ; int_T *
perTaskSampleHits ; time_T sampleTimesArray [ 2 ] ; time_T offsetTimesArray [
2 ] ; int_T sampleTimeTaskIDArray [ 2 ] ; int_T sampleHitArray [ 2 ] ; int_T
perTaskSampleHitsArray [ 4 ] ; } Timing ; } ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
typedef struct { k2snwiamgb rtm ; } ope1wg3cbz4 ;
#endif
extern void bmtszmiqmi ( void ) ; extern void ddc0t4t15d ( void ) ; extern
void i51jvolrrc ( void ) ; extern void lu22svnl5z ( real_T * localX_ ) ;
extern void o2iluetqck ( real_T * localX_ , real_T * localXdot_ ) ; extern
void ciavwlvtml ( real_T * localX_ ) ; extern void ci0rchb45g ( real_T *
localX_ , real_T * localXdot_ ) ; extern void kja25six4i ( real_T * localX_ )
; extern void a5w1dgbmqf ( real_T * localX_ ) ; extern void closedLoop (
const real_T * plr0vvmgxv , const real_T * aa5mtdip3u , const real_T *
juh3rnjpfo , const real_T * kmigltnqf0 , const real_T * ep31hvib5x , const
real_T * ialgy4wl0y , real_T * pboqsovn2d , real_T * lxemy5vpal , real_T *
d3in4i2zmt , real_T * e4bkxfm024 , real_T * pkowjhpjjk , real_T * elg5jbxlvv
, real_T * localX_ ) ; extern void cnzzkdsgp5 ( void ) ; extern void
iqau2xj2y1 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1
, real_T * localX_ , real_T * localMM , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_closedLoop_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_closedLoop_GetDWork ( ) ; extern void
mr_closedLoop_SetDWork ( const mxArray * ssDW ) ; extern void
mr_closedLoop_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_closedLoop_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * closedLoop_GetCAPIStaticMap ( void ) ; void
mr_closedLoop_CreateInitRestoreData ( ) ; void
mr_closedLoop_CopyFromInitRestoreData ( ) ; void
mr_closedLoop_DestroyInitRestoreData ( ) ;
#ifndef closedLoop_MDLREF_HIDE_CHILD_
extern ope1wg3cbz4 ope1wg3cbz ;
#endif
#ifndef closedLoop_MDLREF_HIDE_CHILD_
extern mrno05akddg iqd4nnjnc2n ; extern ar4cvowam3t l1kpu4wb4rx ;
#endif
#endif
