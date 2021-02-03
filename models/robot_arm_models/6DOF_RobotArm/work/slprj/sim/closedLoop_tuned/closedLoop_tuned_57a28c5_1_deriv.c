#include "__cf_closedLoop_tuned.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
PmfMessageId closedLoop_tuned_57a28c5_1_deriv ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 6 ] ; double xx [ 773 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 0.03504158251691365 ; xx [ 1
] = 0.9993858551604131 ; xx [ 2 ] = 9.258035449377644e-9 ; xx [ 3 ] = - xx [
0 ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = - xx [ 2 ] ; xx [ 6 ] = xx [ 0 ] *
state [ 1 ] ; xx [ 7 ] = xx [ 1 ] * state [ 1 ] ; xx [ 8 ] = xx [ 2 ] * state
[ 1 ] ; xx [ 9 ] = - xx [ 6 ] ; xx [ 10 ] = xx [ 7 ] ; xx [ 11 ] = - xx [ 8 ]
; xx [ 12 ] = 6.523245204659643e-4 ; xx [ 13 ] = 2.479367537855924e-3 ; xx [
14 ] = 2.357448869664163e-3 ; xx [ 15 ] = - ( xx [ 12 ] * xx [ 6 ] ) ; xx [
16 ] = xx [ 13 ] * xx [ 7 ] ; xx [ 17 ] = - ( xx [ 14 ] * xx [ 8 ] ) ;
pm_math_cross3 ( xx + 9 , xx + 15 , xx + 6 ) ; xx [ 15 ] = -
0.9998475545126857 ; xx [ 16 ] = 4.62807808743193e-9 ; xx [ 17 ] =
1.445651376386081e-10 ; xx [ 18 ] = - 0.01746046205007074 ; xx [ 19 ] = 0.5 ;
xx [ 20 ] = xx [ 19 ] * state [ 2 ] ; xx [ 21 ] = 1.260590941853934e-4 ; xx [
22 ] = sin ( xx [ 20 ] ) ; xx [ 23 ] = 0.9999999920545524 ; xx [ 24 ] =
1.774136393351e-12 ; xx [ 25 ] = cos ( xx [ 20 ] ) ; xx [ 26 ] = - ( xx [ 21
] * xx [ 22 ] ) ; xx [ 27 ] = xx [ 23 ] * xx [ 22 ] ; xx [ 28 ] = xx [ 24 ] *
xx [ 22 ] ; pm_math_quatCompose ( xx + 15 , xx + 25 , xx + 29 ) ;
pm_math_quatInverseXform ( xx + 29 , xx + 9 , xx + 15 ) ; xx [ 18 ] = xx [ 21
] * state [ 3 ] ; xx [ 20 ] = xx [ 15 ] - xx [ 18 ] ; xx [ 22 ] = xx [ 23 ] *
state [ 3 ] ; xx [ 25 ] = xx [ 16 ] + xx [ 22 ] ; xx [ 26 ] = xx [ 24 ] *
state [ 3 ] ; xx [ 27 ] = xx [ 17 ] + xx [ 26 ] ; xx [ 33 ] = xx [ 20 ] ; xx
[ 34 ] = xx [ 25 ] ; xx [ 35 ] = xx [ 27 ] ; xx [ 28 ] = 2.569466215527473e-4
; xx [ 36 ] = 1.173285990167339e-3 ; xx [ 37 ] = 1.08989429237583e-3 ; xx [
38 ] = xx [ 20 ] * xx [ 28 ] ; xx [ 39 ] = xx [ 25 ] * xx [ 36 ] ; xx [ 40 ]
= xx [ 27 ] * xx [ 37 ] ; pm_math_cross3 ( xx + 33 , xx + 38 , xx + 41 ) ; xx
[ 44 ] = - 0.9999999980191991 ; xx [ 45 ] = 2.23856606067822e-7 ; xx [ 46 ] =
- 3.321689057863772e-8 ; xx [ 47 ] = - 6.294084901737286e-5 ; xx [ 38 ] = xx
[ 19 ] * state [ 4 ] ; xx [ 39 ] = 6.646453320689627e-8 ; xx [ 40 ] = sin (
xx [ 38 ] ) ; xx [ 48 ] = 4.477090296885221e-7 ; xx [ 49 ] = cos ( xx [ 38 ]
) ; xx [ 50 ] = - ( xx [ 39 ] * xx [ 40 ] ) ; xx [ 51 ] = - ( xx [ 48 ] * xx
[ 40 ] ) ; xx [ 52 ] = xx [ 40 ] ; pm_math_quatCompose ( xx + 44 , xx + 49 ,
xx + 53 ) ; pm_math_quatInverseXform ( xx + 53 , xx + 33 , xx + 44 ) ; xx [
38 ] = xx [ 39 ] * state [ 5 ] ; xx [ 40 ] = xx [ 44 ] - xx [ 38 ] ; xx [ 47
] = xx [ 48 ] * state [ 5 ] ; xx [ 49 ] = xx [ 45 ] - xx [ 47 ] ; xx [ 50 ] =
xx [ 46 ] + state [ 5 ] ; xx [ 57 ] = xx [ 40 ] ; xx [ 58 ] = xx [ 49 ] ; xx
[ 59 ] = xx [ 50 ] ; xx [ 51 ] = 2.710685289829154e-5 ; xx [ 52 ] =
4.63033976639681e-5 ; xx [ 60 ] = 3.87938357019707e-5 ; xx [ 61 ] = xx [ 40 ]
* xx [ 51 ] ; xx [ 62 ] = xx [ 49 ] * xx [ 52 ] ; xx [ 63 ] = xx [ 50 ] * xx
[ 60 ] ; pm_math_cross3 ( xx + 57 , xx + 61 , xx + 64 ) ; xx [ 67 ] = -
0.999999999999855 ; xx [ 68 ] = - 2.870853866298734e-7 ; xx [ 69 ] =
4.297010822439871e-7 ; xx [ 70 ] = - 1.513696003818457e-7 ; xx [ 61 ] = xx [
19 ] * state [ 6 ] ; xx [ 62 ] = sin ( xx [ 61 ] ) ; xx [ 63 ] =
1.253430232384112e-7 ; xx [ 71 ] = 7.929375664961213e-7 ; xx [ 72 ] = cos (
xx [ 61 ] ) ; xx [ 73 ] = - xx [ 62 ] ; xx [ 74 ] = xx [ 63 ] * xx [ 62 ] ;
xx [ 75 ] = xx [ 71 ] * xx [ 62 ] ; pm_math_quatCompose ( xx + 67 , xx + 72 ,
xx + 76 ) ; pm_math_quatInverseXform ( xx + 76 , xx + 57 , xx + 67 ) ; xx [
61 ] = xx [ 67 ] - state [ 7 ] ; xx [ 62 ] = xx [ 63 ] * state [ 7 ] ; xx [
70 ] = xx [ 68 ] + xx [ 62 ] ; xx [ 72 ] = xx [ 71 ] * state [ 7 ] ; xx [ 73
] = xx [ 69 ] + xx [ 72 ] ; xx [ 80 ] = xx [ 61 ] ; xx [ 81 ] = xx [ 70 ] ;
xx [ 82 ] = xx [ 73 ] ; xx [ 74 ] = 7.871065344388438e-5 ; xx [ 75 ] =
8.555700395830742e-5 ; xx [ 83 ] = 7.050282165670266e-5 ; xx [ 84 ] = xx [ 74
] * xx [ 61 ] ; xx [ 85 ] = xx [ 70 ] * xx [ 75 ] ; xx [ 86 ] = xx [ 73 ] *
xx [ 83 ] ; pm_math_cross3 ( xx + 80 , xx + 84 , xx + 87 ) ; xx [ 84 ] =
3.964687873836087e-7 ; xx [ 85 ] = xx [ 19 ] * state [ 18 ] ; xx [ 86 ] = sin
( xx [ 85 ] ) ; xx [ 90 ] = 0.9999999999999174 ; xx [ 91 ] = cos ( xx [ 85 ]
) ; xx [ 85 ] = xx [ 84 ] * xx [ 86 ] - xx [ 90 ] * xx [ 91 ] ; xx [ 92 ] =
6.323084164593961e-8 ; xx [ 93 ] = 6.267148658367121e-8 ; xx [ 94 ] = xx [ 92
] * xx [ 91 ] - xx [ 93 ] * xx [ 86 ] ; xx [ 95 ] = xx [ 90 ] * xx [ 86 ] +
xx [ 84 ] * xx [ 91 ] ; xx [ 96 ] = - xx [ 95 ] ; xx [ 97 ] = xx [ 93 ] * xx
[ 91 ] + xx [ 92 ] * xx [ 86 ] ; xx [ 98 ] = xx [ 85 ] ; xx [ 99 ] = xx [ 94
] ; xx [ 100 ] = xx [ 96 ] ; xx [ 101 ] = xx [ 97 ] ;
pm_math_quatInverseXform ( xx + 98 , xx + 80 , xx + 102 ) ; xx [ 86 ] = xx [
103 ] + state [ 19 ] ; xx [ 105 ] = xx [ 102 ] ; xx [ 106 ] = xx [ 86 ] ; xx
[ 107 ] = xx [ 104 ] ; xx [ 91 ] = 6.263205080136261e-8 ; xx [ 108 ] =
4.24020450404316e-7 ; xx [ 109 ] = 4.449572411570304e-7 ; xx [ 110 ] = xx [
91 ] * xx [ 102 ] ; xx [ 111 ] = xx [ 86 ] * xx [ 108 ] ; xx [ 112 ] = xx [
109 ] * xx [ 104 ] ; pm_math_cross3 ( xx + 105 , xx + 110 , xx + 113 ) ; xx [
105 ] = xx [ 104 ] * state [ 19 ] ; xx [ 104 ] = xx [ 113 ] - xx [ 91 ] * xx
[ 105 ] ; xx [ 106 ] = 8.748612304055577e-3 ; xx [ 107 ] =
5.347817964666832e-3 ; xx [ 110 ] = 2.0 ; xx [ 116 ] = xx [ 94 ] ; xx [ 117 ]
= xx [ 96 ] ; xx [ 118 ] = xx [ 97 ] ; xx [ 96 ] = 9.180102448427653e-3 ; xx
[ 111 ] = xx [ 97 ] * xx [ 96 ] ; xx [ 112 ] = xx [ 97 ] * xx [ 106 ] ; xx [
119 ] = xx [ 95 ] * xx [ 106 ] ; xx [ 120 ] = xx [ 119 ] - xx [ 96 ] * xx [
94 ] ; xx [ 121 ] = xx [ 111 ] ; xx [ 122 ] = xx [ 112 ] ; xx [ 123 ] = xx [
120 ] ; pm_math_cross3 ( xx + 116 , xx + 121 , xx + 124 ) ; xx [ 116 ] = xx [
112 ] * xx [ 85 ] ; xx [ 121 ] = 0.03128971945123185 - ( xx [ 106 ] + xx [
110 ] * ( xx [ 124 ] + xx [ 111 ] * xx [ 85 ] ) ) ; xx [ 122 ] = - (
9.18010605007873e-3 + ( xx [ 116 ] + xx [ 125 ] ) * xx [ 110 ] - xx [ 96 ] )
; xx [ 123 ] = 5.488333747817018e-3 - ( xx [ 120 ] * xx [ 85 ] + xx [ 126 ] )
* xx [ 110 ] ; pm_math_cross3 ( xx + 80 , xx + 121 , xx + 124 ) ;
pm_math_cross3 ( xx + 80 , xx + 124 , xx + 127 ) ; pm_math_quatInverseXform (
xx + 98 , xx + 127 , xx + 124 ) ; xx [ 96 ] = xx [ 107 ] * xx [ 126 ] ; xx [
111 ] = input [ 1 ] - ( xx [ 114 ] + xx [ 106 ] * xx [ 96 ] ) ; xx [ 117 ] =
0.01309538769594443 ; xx [ 118 ] = xx [ 117 ] * xx [ 94 ] ; xx [ 120 ] = xx [
95 ] * xx [ 117 ] ; xx [ 127 ] = xx [ 106 ] * xx [ 94 ] ; xx [ 128 ] = xx [
119 ] * xx [ 85 ] ; xx [ 129 ] = ( xx [ 97 ] * xx [ 118 ] - xx [ 120 ] * xx [
85 ] ) * xx [ 110 ] + ( xx [ 97 ] * xx [ 127 ] - xx [ 128 ] ) * xx [ 110 ] ;
xx [ 130 ] = - 0.99302022896367 ; xx [ 131 ] = 0.1066412368322485 ; xx [ 132
] = - 0.03120900126866927 ; xx [ 133 ] = - 0.03955337805600653 ; xx [ 134 ] =
xx [ 19 ] * state [ 8 ] ; xx [ 135 ] = 0.07189840968753769 ; xx [ 136 ] = sin
( xx [ 134 ] ) ; xx [ 137 ] = 0.9741263695734882 ; xx [ 138 ] =
0.2142625370567126 ; xx [ 139 ] = cos ( xx [ 134 ] ) ; xx [ 140 ] = xx [ 135
] * xx [ 136 ] ; xx [ 141 ] = xx [ 137 ] * xx [ 136 ] ; xx [ 142 ] = xx [ 138
] * xx [ 136 ] ; pm_math_quatCompose ( xx + 130 , xx + 139 , xx + 143 ) ; xx
[ 130 ] = 0.05182593581663095 ; xx [ 131 ] = - 0.1519742715228705 ; xx [ 132
] = - 0.1034434723147636 ; xx [ 133 ] = 0.981589191671999 ; xx [ 134 ] = xx [
19 ] * state [ 10 ] ; xx [ 136 ] = 8.039551964383884e-5 ; xx [ 139 ] = sin (
xx [ 134 ] ) ; xx [ 140 ] = 0.9999878887291287 ; xx [ 141 ] =
4.920968565308881e-3 ; xx [ 147 ] = cos ( xx [ 134 ] ) ; xx [ 148 ] = - ( xx
[ 136 ] * xx [ 139 ] ) ; xx [ 149 ] = - ( xx [ 140 ] * xx [ 139 ] ) ; xx [
150 ] = - ( xx [ 141 ] * xx [ 139 ] ) ; pm_math_quatCompose ( xx + 130 , xx +
147 , xx + 151 ) ; pm_math_quatCompose ( xx + 143 , xx + 151 , xx + 130 ) ;
xx [ 147 ] = xx [ 135 ] ; xx [ 148 ] = xx [ 137 ] ; xx [ 149 ] = xx [ 138 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 147 , xx + 155 ) ; xx [ 158 ] = -
7.044490589730112e-3 ; xx [ 159 ] = - 6.108478301373796e-3 ; xx [ 160 ] = -
4.589550344615505e-3 ; pm_math_cross3 ( xx + 155 , xx + 158 , xx + 161 ) ;
pm_math_quatXform ( xx + 130 , xx + 161 , xx + 155 ) ; xx [ 161 ] = -
0.02929060823879809 ; xx [ 162 ] = 7.402384199146024e-3 ; xx [ 163 ] =
5.50599994432713e-4 ; pm_math_quatXform ( xx + 151 , xx + 161 , xx + 164 ) ;
xx [ 161 ] = 0.01141939320659117 - xx [ 164 ] ; xx [ 162 ] = - (
7.654873829231559e-3 + xx [ 165 ] ) ; xx [ 163 ] = - ( 5.163891526827933e-4 +
xx [ 166 ] ) ; pm_math_cross3 ( xx + 147 , xx + 161 , xx + 164 ) ;
pm_math_quatXform ( xx + 143 , xx + 164 , xx + 167 ) ; xx [ 134 ] =
3.67575678838696e-3 ; xx [ 139 ] = 1.562574744821344e-3 ; xx [ 142 ] =
5.870667887890738e-3 ; xx [ 164 ] = - xx [ 134 ] ; xx [ 165 ] = xx [ 139 ] ;
xx [ 166 ] = - xx [ 142 ] ; pm_math_quatXform ( xx + 143 , xx + 164 , xx +
170 ) ; xx [ 150 ] = xx [ 155 ] + xx [ 167 ] + xx [ 170 ] ; xx [ 173 ] =
3.138496625191092e-11 ; xx [ 174 ] = 4.559435129625171e-3 ; xx [ 175 ] =
3.429673746578918e-5 ; xx [ 176 ] = - 7.043914177709157e-3 ;
pm_math_quatXform ( xx + 130 , xx + 174 , xx + 177 ) ; xx [ 174 ] =
5.14166426014702e-4 ; xx [ 175 ] = 1.44182428174571e-4 ; xx [ 176 ] =
0.02929084861083201 ; xx [ 180 ] = xx [ 174 ] ; xx [ 181 ] = - xx [ 175 ] ;
xx [ 182 ] = xx [ 176 ] ; pm_math_quatXform ( xx + 151 , xx + 180 , xx + 183
) ; pm_math_quatXform ( xx + 143 , xx + 183 , xx + 186 ) ; xx [ 189 ] = xx [
177 ] + xx [ 186 ] ; xx [ 190 ] = 2.651035172894975e-5 ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 190 , 1 , xx + 191 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Gripper/Left Finger Revolute  A' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 191 ] = xx [ 189 ] / xx [ 190 ] ; xx [ 192 ] =
4.901445221546403e-6 ; xx [ 193 ] = 2.417904402501716e-8 ; xx [ 194 ] = - (
xx [ 173 ] * xx [ 191 ] ) ; xx [ 195 ] = - ( xx [ 192 ] * xx [ 191 ] ) ; xx [
196 ] = - ( xx [ 193 ] * xx [ 191 ] ) ; pm_math_quatXform ( xx + 151 , xx +
194 , xx + 197 ) ; xx [ 194 ] = 1.294574586586303e-5 ; xx [ 195 ] =
3.630243008939043e-6 ; xx [ 196 ] = 7.374886089906923e-4 ; xx [ 200 ] = xx [
194 ] * xx [ 191 ] ; xx [ 201 ] = - ( xx [ 195 ] * xx [ 191 ] ) ; xx [ 202 ]
= xx [ 196 ] * xx [ 191 ] ; pm_math_quatXform ( xx + 151 , xx + 200 , xx +
203 ) ; pm_math_cross3 ( xx + 161 , xx + 203 , xx + 200 ) ; xx [ 206 ] = xx [
197 ] + xx [ 200 ] ; xx [ 207 ] = xx [ 198 ] + xx [ 201 ] ; xx [ 197 ] = xx [
199 ] + xx [ 202 ] ; xx [ 198 ] = xx [ 206 ] ; xx [ 199 ] = xx [ 207 ] ; xx [
200 ] = xx [ 197 ] ; xx [ 201 ] = 1.345479266295241e-7 ; xx [ 202 ] = xx [
151 ] * xx [ 151 ] ; xx [ 208 ] = 1.0 ; xx [ 209 ] = ( xx [ 202 ] + xx [ 152
] * xx [ 152 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 210 ] = xx [ 152 ] * xx [
153 ] ; xx [ 211 ] = xx [ 151 ] * xx [ 154 ] ; xx [ 212 ] = xx [ 110 ] * ( xx
[ 210 ] - xx [ 211 ] ) ; xx [ 213 ] = xx [ 152 ] * xx [ 154 ] ; xx [ 214 ] =
xx [ 151 ] * xx [ 153 ] ; xx [ 215 ] = ( xx [ 213 ] + xx [ 214 ] ) * xx [ 110
] ; xx [ 216 ] = ( xx [ 210 ] + xx [ 211 ] ) * xx [ 110 ] ; xx [ 210 ] = ( xx
[ 202 ] + xx [ 153 ] * xx [ 153 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 211 ] =
xx [ 153 ] * xx [ 154 ] ; xx [ 217 ] = xx [ 151 ] * xx [ 152 ] ; xx [ 218 ] =
xx [ 110 ] * ( xx [ 211 ] - xx [ 217 ] ) ; xx [ 219 ] = xx [ 110 ] * ( xx [
213 ] - xx [ 214 ] ) ; xx [ 213 ] = ( xx [ 211 ] + xx [ 217 ] ) * xx [ 110 ]
; xx [ 211 ] = ( xx [ 202 ] + xx [ 154 ] * xx [ 154 ] ) * xx [ 110 ] - xx [
208 ] ; xx [ 220 ] = xx [ 209 ] ; xx [ 221 ] = xx [ 212 ] ; xx [ 222 ] = xx [
215 ] ; xx [ 223 ] = xx [ 216 ] ; xx [ 224 ] = xx [ 210 ] ; xx [ 225 ] = xx [
218 ] ; xx [ 226 ] = xx [ 219 ] ; xx [ 227 ] = xx [ 213 ] ; xx [ 228 ] = xx [
211 ] ; xx [ 202 ] = 3.90382031124991e-7 ; xx [ 214 ] = xx [ 173 ] / xx [ 190
] ; xx [ 217 ] = - ( xx [ 192 ] * xx [ 214 ] ) ; xx [ 229 ] = - ( xx [ 193 ]
* xx [ 214 ] ) ; xx [ 230 ] = 4.901504584996109e-6 ; xx [ 231 ] = xx [ 192 ]
/ xx [ 190 ] ; xx [ 232 ] = - ( xx [ 193 ] * xx [ 231 ] ) ; xx [ 233 ] =
4.913472562184409e-6 ; xx [ 234 ] = xx [ 202 ] - xx [ 173 ] * xx [ 214 ] ; xx
[ 235 ] = xx [ 217 ] ; xx [ 236 ] = xx [ 229 ] ; xx [ 237 ] = xx [ 217 ] ; xx
[ 238 ] = xx [ 230 ] - xx [ 192 ] * xx [ 231 ] ; xx [ 239 ] = xx [ 232 ] ; xx
[ 240 ] = xx [ 229 ] ; xx [ 241 ] = xx [ 232 ] ; xx [ 242 ] = xx [ 233 ] -
5.846261699637182e-16 / xx [ 190 ] ; pm_math_matrix3x3ComposeTranspose ( xx +
234 , xx + 220 , xx + 243 ) ; pm_math_matrix3x3Compose ( xx + 220 , xx + 243
, xx + 234 ) ; xx [ 217 ] = xx [ 194 ] / xx [ 190 ] ; xx [ 229 ] = xx [ 195 ]
/ xx [ 190 ] ; xx [ 232 ] = xx [ 196 ] / xx [ 190 ] ; xx [ 243 ] = xx [ 173 ]
* xx [ 217 ] ; xx [ 244 ] = - ( xx [ 173 ] * xx [ 229 ] ) ; xx [ 245 ] = xx [
173 ] * xx [ 232 ] ; xx [ 246 ] = xx [ 192 ] * xx [ 217 ] ; xx [ 247 ] = - (
xx [ 192 ] * xx [ 229 ] ) ; xx [ 248 ] = xx [ 192 ] * xx [ 232 ] ; xx [ 249 ]
= xx [ 193 ] * xx [ 217 ] ; xx [ 250 ] = - ( xx [ 193 ] * xx [ 229 ] ) ; xx [
251 ] = xx [ 193 ] * xx [ 232 ] ; pm_math_matrix3x3ComposeTranspose ( xx +
243 , xx + 220 , xx + 252 ) ; pm_math_matrix3x3Compose ( xx + 220 , xx + 252
, xx + 243 ) ; pm_math_matrix3x3PostCross ( xx + 243 , xx + 161 , xx + 252 )
; xx [ 261 ] = 0.02517812367914675 ; xx [ 262 ] = xx [ 195 ] * xx [ 217 ] ;
xx [ 263 ] = - ( xx [ 196 ] * xx [ 217 ] ) ; xx [ 264 ] = xx [ 196 ] * xx [
229 ] ; xx [ 265 ] = xx [ 261 ] - xx [ 194 ] * xx [ 217 ] ; xx [ 266 ] = xx [
262 ] ; xx [ 267 ] = xx [ 263 ] ; xx [ 268 ] = xx [ 262 ] ; xx [ 269 ] = xx [
261 ] - xx [ 195 ] * xx [ 229 ] ; xx [ 270 ] = xx [ 264 ] ; xx [ 271 ] = xx [
263 ] ; xx [ 272 ] = xx [ 264 ] ; xx [ 273 ] = xx [ 261 ] - xx [ 196 ] * xx [
232 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 265 , xx + 220 , xx + 274 )
; pm_math_matrix3x3Compose ( xx + 220 , xx + 274 , xx + 262 ) ;
pm_math_matrix3x3PostCross ( xx + 262 , xx + 161 , xx + 271 ) ;
pm_math_matrix3x3PreCross ( xx + 271 , xx + 161 , xx + 280 ) ; xx [ 289 ] =
xx [ 234 ] - xx [ 252 ] - xx [ 252 ] - xx [ 280 ] ; xx [ 290 ] = xx [ 235 ] -
xx [ 253 ] - xx [ 255 ] - xx [ 281 ] ; xx [ 291 ] = xx [ 236 ] - xx [ 254 ] -
xx [ 258 ] - xx [ 282 ] ; xx [ 292 ] = xx [ 237 ] - xx [ 255 ] - xx [ 253 ] -
xx [ 283 ] ; xx [ 293 ] = 5.433684224535815e-7 ; xx [ 294 ] = xx [ 238 ] - xx
[ 256 ] - xx [ 256 ] - xx [ 284 ] ; xx [ 295 ] = xx [ 239 ] - xx [ 257 ] - xx
[ 259 ] - xx [ 285 ] ; xx [ 296 ] = xx [ 240 ] - xx [ 258 ] - xx [ 254 ] - xx
[ 286 ] ; xx [ 297 ] = xx [ 241 ] - xx [ 259 ] - xx [ 257 ] - xx [ 287 ] ; xx
[ 298 ] = 5.798753203549617e-7 ; xx [ 234 ] = xx [ 242 ] - xx [ 260 ] - xx [
260 ] - xx [ 288 ] ; xx [ 252 ] = xx [ 201 ] + xx [ 289 ] ; xx [ 253 ] = xx [
290 ] ; xx [ 254 ] = xx [ 291 ] ; xx [ 255 ] = xx [ 292 ] ; xx [ 256 ] = xx [
293 ] + xx [ 294 ] ; xx [ 257 ] = xx [ 295 ] ; xx [ 258 ] = xx [ 296 ] ; xx [
259 ] = xx [ 297 ] ; xx [ 260 ] = xx [ 298 ] + xx [ 234 ] ;
pm_math_matrix3x3Xform ( xx + 252 , xx + 147 , xx + 235 ) ; xx [ 238 ] = xx [
243 ] - xx [ 271 ] ; xx [ 239 ] = xx [ 244 ] - xx [ 274 ] ; xx [ 240 ] = xx [
245 ] - xx [ 277 ] ; xx [ 241 ] = xx [ 246 ] - xx [ 272 ] ; xx [ 242 ] = xx [
247 ] - xx [ 275 ] ; xx [ 243 ] = xx [ 248 ] - xx [ 278 ] ; xx [ 244 ] = xx [
249 ] - xx [ 273 ] ; xx [ 245 ] = xx [ 250 ] - xx [ 276 ] ; xx [ 246 ] = xx [
251 ] - xx [ 279 ] ; pm_math_matrix3x3Xform ( xx + 238 , xx + 164 , xx + 247
) ; xx [ 250 ] = xx [ 235 ] + xx [ 247 ] ; xx [ 251 ] = xx [ 236 ] + xx [ 248
] ; xx [ 235 ] = xx [ 237 ] + xx [ 249 ] ; xx [ 247 ] = xx [ 250 ] ; xx [ 248
] = xx [ 251 ] ; xx [ 249 ] = xx [ 235 ] ; pm_math_matrix3x3TransposeXform (
xx + 238 , xx + 147 , xx + 271 ) ; xx [ 236 ] = 7.275337309136144e-3 ; xx [
274 ] = xx [ 236 ] + xx [ 262 ] ; xx [ 275 ] = xx [ 263 ] ; xx [ 276 ] = xx [
264 ] ; xx [ 277 ] = xx [ 265 ] ; xx [ 278 ] = xx [ 236 ] + xx [ 266 ] ; xx [
279 ] = xx [ 267 ] ; xx [ 280 ] = xx [ 268 ] ; xx [ 281 ] = xx [ 269 ] ; xx [
282 ] = xx [ 236 ] + xx [ 270 ] ; pm_math_matrix3x3Xform ( xx + 274 , xx +
164 , xx + 283 ) ; xx [ 237 ] = xx [ 271 ] + xx [ 283 ] ; xx [ 286 ] = xx [
272 ] + xx [ 284 ] ; xx [ 271 ] = xx [ 273 ] + xx [ 285 ] ; xx [ 283 ] = xx [
237 ] ; xx [ 284 ] = xx [ 286 ] ; xx [ 285 ] = xx [ 271 ] ; xx [ 272 ] =
pm_math_dot3 ( xx + 147 , xx + 247 ) + pm_math_dot3 ( xx + 164 , xx + 283 ) ;
ii [ 0 ] = factorSymmetricPosDef ( xx + 272 , 1 , xx + 247 ) ; if ( ii [ 0 ]
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Gripper/Left Revolute A' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 247 ] = ( xx [ 150 ] - ( pm_math_dot3 ( xx + 147 , xx
+ 198 ) + pm_math_dot3 ( xx + 164 , xx + 203 ) ) ) / xx [ 272 ] ; xx [ 198 ]
= xx [ 250 ] / xx [ 272 ] ; xx [ 199 ] = xx [ 251 ] / xx [ 272 ] ; xx [ 200 ]
= xx [ 235 ] / xx [ 272 ] ; xx [ 248 ] = xx [ 19 ] * state [ 12 ] ; xx [ 249
] = cos ( xx [ 248 ] ) ; xx [ 273 ] = sin ( xx [ 248 ] ) ; xx [ 248 ] = xx [
93 ] * xx [ 249 ] + xx [ 92 ] * xx [ 273 ] ; xx [ 283 ] = xx [ 92 ] * xx [
249 ] - xx [ 93 ] * xx [ 273 ] ; xx [ 92 ] = xx [ 117 ] * xx [ 283 ] ; xx [
93 ] = xx [ 90 ] * xx [ 273 ] + xx [ 84 ] * xx [ 249 ] ; xx [ 284 ] = xx [ 93
] * xx [ 117 ] ; xx [ 285 ] = xx [ 84 ] * xx [ 273 ] - xx [ 90 ] * xx [ 249 ]
; xx [ 84 ] = xx [ 106 ] * xx [ 283 ] ; xx [ 90 ] = xx [ 93 ] * xx [ 106 ] ;
xx [ 249 ] = xx [ 90 ] * xx [ 285 ] ; xx [ 273 ] = ( xx [ 248 ] * xx [ 92 ] -
xx [ 284 ] * xx [ 285 ] ) * xx [ 110 ] + ( xx [ 248 ] * xx [ 84 ] - xx [ 249
] ) * xx [ 110 ] ; xx [ 287 ] = 8.333329035796446e-7 ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 287 , 1 , xx + 288 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 288 , xx + 287 , 1 * sizeof ( double ) ) ; xx
[ 299 ] = xx [ 273 ] / xx [ 288 ] ; xx [ 300 ] = xx [ 108 ] * xx [ 299 ] ; xx
[ 301 ] = xx [ 248 ] * xx [ 300 ] ; xx [ 302 ] = xx [ 300 ] * xx [ 283 ] ; xx
[ 303 ] = - xx [ 93 ] ; xx [ 304 ] = xx [ 283 ] ; xx [ 305 ] = xx [ 303 ] ;
xx [ 306 ] = xx [ 248 ] ; xx [ 307 ] = 9.180102448427657e-3 ; xx [ 308 ] = xx
[ 248 ] * xx [ 307 ] ; xx [ 309 ] = xx [ 248 ] * xx [ 106 ] ; xx [ 310 ] = xx
[ 90 ] - xx [ 307 ] * xx [ 283 ] ; pm_math_cross3 ( xx + 304 , xx + 308 , xx
+ 311 ) ; xx [ 304 ] = xx [ 309 ] * xx [ 285 ] ; xx [ 314 ] =
0.03128971074738664 - ( xx [ 106 ] + xx [ 110 ] * ( xx [ 311 ] + xx [ 308 ] *
xx [ 285 ] ) ) ; xx [ 315 ] = - ( 9.1801074382113e-3 + ( xx [ 304 ] + xx [
312 ] ) * xx [ 110 ] - xx [ 307 ] ) ; xx [ 316 ] = - ( 5.488375390709461e-3 +
( xx [ 310 ] * xx [ 285 ] + xx [ 313 ] ) * xx [ 110 ] ) ; xx [ 305 ] =
4.67859860455337e-5 ; xx [ 306 ] = xx [ 305 ] * xx [ 299 ] ; xx [ 307 ] = xx
[ 306 ] * xx [ 283 ] ; xx [ 308 ] = xx [ 93 ] * xx [ 306 ] ; xx [ 310 ] = (
xx [ 248 ] * xx [ 307 ] - xx [ 308 ] * xx [ 285 ] ) * xx [ 110 ] ; xx [ 311 ]
= xx [ 110 ] * ( xx [ 307 ] * xx [ 285 ] + xx [ 248 ] * xx [ 308 ] ) ; xx [
312 ] = ( xx [ 307 ] * xx [ 283 ] + xx [ 93 ] * xx [ 308 ] ) * xx [ 110 ] -
xx [ 306 ] ; xx [ 306 ] = - xx [ 310 ] ; xx [ 307 ] = xx [ 311 ] ; xx [ 308 ]
= xx [ 312 ] ; pm_math_cross3 ( xx + 314 , xx + 306 , xx + 317 ) ; xx [ 306 ]
= xx [ 206 ] + xx [ 250 ] * xx [ 247 ] ; xx [ 307 ] = xx [ 207 ] + xx [ 251 ]
* xx [ 247 ] ; xx [ 308 ] = xx [ 197 ] + xx [ 235 ] * xx [ 247 ] ;
pm_math_quatXform ( xx + 143 , xx + 306 , xx + 320 ) ; xx [ 306 ] = -
6.666465945763514e-3 ; xx [ 307 ] = - 8.669348660839774e-3 ; xx [ 308 ] =
1.866534164845896e-3 ; pm_math_quatXform ( xx + 143 , xx + 306 , xx + 323 ) ;
xx [ 306 ] = 0.01083666099717944 - xx [ 323 ] ; xx [ 307 ] = - (
9.180105591304477e-3 + xx [ 324 ] ) ; xx [ 308 ] = - ( 0.01115600460345469 +
xx [ 325 ] ) ; xx [ 323 ] = xx [ 203 ] + xx [ 237 ] * xx [ 247 ] ; xx [ 324 ]
= xx [ 204 ] + xx [ 286 ] * xx [ 247 ] ; xx [ 325 ] = xx [ 205 ] + xx [ 271 ]
* xx [ 247 ] ; pm_math_quatXform ( xx + 143 , xx + 323 , xx + 203 ) ;
pm_math_cross3 ( xx + 306 , xx + 203 , xx + 323 ) ; xx [ 197 ] = xx [ 110 ] *
( xx [ 301 ] * xx [ 285 ] + xx [ 93 ] * xx [ 302 ] ) + xx [ 317 ] + xx [ 320
] + xx [ 323 ] ; xx [ 206 ] = xx [ 85 ] * xx [ 85 ] ; xx [ 207 ] = ( xx [ 206
] + xx [ 94 ] * xx [ 94 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 313 ] = xx [ 95
] * xx [ 94 ] ; xx [ 326 ] = xx [ 97 ] * xx [ 85 ] ; xx [ 327 ] = xx [ 110 ]
* ( xx [ 313 ] + xx [ 326 ] ) ; xx [ 328 ] = xx [ 97 ] * xx [ 94 ] ; xx [ 329
] = xx [ 95 ] * xx [ 85 ] ; xx [ 330 ] = ( xx [ 328 ] - xx [ 329 ] ) * xx [
110 ] ; xx [ 331 ] = xx [ 326 ] - xx [ 313 ] ; xx [ 313 ] = xx [ 331 ] * xx [
110 ] ; xx [ 326 ] = ( xx [ 206 ] + xx [ 95 ] * xx [ 95 ] ) * xx [ 110 ] - xx
[ 208 ] ; xx [ 332 ] = xx [ 97 ] * xx [ 95 ] ; xx [ 333 ] = xx [ 94 ] * xx [
85 ] ; xx [ 334 ] = xx [ 110 ] * ( xx [ 332 ] + xx [ 333 ] ) ; xx [ 335 ] =
xx [ 328 ] + xx [ 329 ] ; xx [ 328 ] = xx [ 110 ] * xx [ 335 ] ; xx [ 329 ] =
( xx [ 333 ] - xx [ 332 ] ) * xx [ 110 ] ; xx [ 332 ] = ( xx [ 206 ] + xx [
97 ] * xx [ 97 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 336 ] = xx [ 207 ] ; xx [
337 ] = - xx [ 327 ] ; xx [ 338 ] = xx [ 330 ] ; xx [ 339 ] = xx [ 313 ] ; xx
[ 340 ] = xx [ 326 ] ; xx [ 341 ] = - xx [ 334 ] ; xx [ 342 ] = xx [ 328 ] ;
xx [ 343 ] = xx [ 329 ] ; xx [ 344 ] = xx [ 332 ] ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 206 ] = xx [ 108 ] / xx [ 287 ] ; xx [ 333 ] = xx [
108 ] - xx [ 108 ] * xx [ 206 ] ; xx [ 345 ] = xx [ 91 ] * xx [ 207 ] ; xx [
346 ] = xx [ 91 ] * xx [ 313 ] ; xx [ 347 ] = xx [ 91 ] * xx [ 328 ] ; xx [
348 ] = - ( xx [ 327 ] * xx [ 333 ] ) ; xx [ 349 ] = xx [ 333 ] * xx [ 326 ]
; xx [ 350 ] = xx [ 329 ] * xx [ 333 ] ; xx [ 351 ] = xx [ 109 ] * xx [ 330 ]
; xx [ 352 ] = - ( xx [ 109 ] * xx [ 334 ] ) ; xx [ 353 ] = xx [ 109 ] * xx [
332 ] ; pm_math_matrix3x3Compose ( xx + 336 , xx + 345 , xx + 354 ) ; xx [
333 ] = xx [ 305 ] / xx [ 287 ] ; xx [ 345 ] = xx [ 108 ] * xx [ 333 ] ; xx [
346 ] = xx [ 330 ] * xx [ 345 ] ; xx [ 347 ] = xx [ 327 ] * xx [ 346 ] ; xx [
348 ] = xx [ 345 ] * xx [ 334 ] ; xx [ 349 ] = xx [ 327 ] * xx [ 348 ] ; xx [
350 ] = xx [ 345 ] * xx [ 332 ] ; xx [ 345 ] = xx [ 327 ] * xx [ 350 ] ; xx [
351 ] = xx [ 346 ] * xx [ 326 ] ; xx [ 352 ] = xx [ 348 ] * xx [ 326 ] ; xx [
353 ] = xx [ 350 ] * xx [ 326 ] ; xx [ 363 ] = xx [ 329 ] * xx [ 346 ] ; xx [
346 ] = xx [ 329 ] * xx [ 348 ] ; xx [ 348 ] = xx [ 329 ] * xx [ 350 ] ; xx [
364 ] = xx [ 347 ] ; xx [ 365 ] = - xx [ 349 ] ; xx [ 366 ] = xx [ 345 ] ; xx
[ 367 ] = - xx [ 351 ] ; xx [ 368 ] = xx [ 352 ] ; xx [ 369 ] = - xx [ 353 ]
; xx [ 370 ] = - xx [ 363 ] ; xx [ 371 ] = xx [ 346 ] ; xx [ 372 ] = - xx [
348 ] ; pm_math_matrix3x3PostCross ( xx + 364 , xx + 121 , xx + 373 ) ; xx [
350 ] = xx [ 107 ] - xx [ 305 ] * xx [ 333 ] ; xx [ 364 ] = xx [ 107 ] * xx [
207 ] ; xx [ 365 ] = xx [ 107 ] * xx [ 313 ] ; xx [ 366 ] = xx [ 107 ] * xx [
328 ] ; xx [ 367 ] = - ( xx [ 107 ] * xx [ 327 ] ) ; xx [ 368 ] = xx [ 107 ]
* xx [ 326 ] ; xx [ 369 ] = xx [ 107 ] * xx [ 329 ] ; xx [ 370 ] = xx [ 330 ]
* xx [ 350 ] ; xx [ 371 ] = - ( xx [ 334 ] * xx [ 350 ] ) ; xx [ 372 ] = xx [
350 ] * xx [ 332 ] ; pm_math_matrix3x3Compose ( xx + 336 , xx + 364 , xx +
382 ) ; pm_math_matrix3x3PostCross ( xx + 382 , xx + 121 , xx + 336 ) ;
pm_math_matrix3x3PreCross ( xx + 336 , xx + 121 , xx + 364 ) ; xx [ 326 ] = -
0.993020263593104 ; xx [ 327 ] = - 0.1066411692347894 ; xx [ 328 ] =
0.03120822428610398 ; xx [ 329 ] = - 0.03955330396602025 ; xx [ 313 ] = xx [
19 ] * state [ 14 ] ; xx [ 330 ] = 0.07189841740695141 ; xx [ 332 ] = sin (
xx [ 313 ] ) ; xx [ 334 ] = 0.9741263571870624 ; xx [ 350 ] =
0.2142625907801925 ; xx [ 391 ] = cos ( xx [ 313 ] ) ; xx [ 392 ] = xx [ 330
] * xx [ 332 ] ; xx [ 393 ] = xx [ 334 ] * xx [ 332 ] ; xx [ 394 ] = - ( xx [
350 ] * xx [ 332 ] ) ; pm_math_quatCompose ( xx + 326 , xx + 391 , xx + 395 )
; xx [ 313 ] = xx [ 395 ] * xx [ 395 ] ; xx [ 326 ] = ( xx [ 313 ] + xx [ 396
] * xx [ 396 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 327 ] = xx [ 396 ] * xx [
397 ] ; xx [ 328 ] = xx [ 395 ] * xx [ 398 ] ; xx [ 329 ] = xx [ 110 ] * ( xx
[ 327 ] - xx [ 328 ] ) ; xx [ 332 ] = xx [ 396 ] * xx [ 398 ] ; xx [ 391 ] =
xx [ 395 ] * xx [ 397 ] ; xx [ 392 ] = ( xx [ 332 ] + xx [ 391 ] ) * xx [ 110
] ; xx [ 393 ] = ( xx [ 327 ] + xx [ 328 ] ) * xx [ 110 ] ; xx [ 327 ] = ( xx
[ 313 ] + xx [ 397 ] * xx [ 397 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 328 ] =
xx [ 397 ] * xx [ 398 ] ; xx [ 394 ] = xx [ 395 ] * xx [ 396 ] ; xx [ 399 ] =
xx [ 110 ] * ( xx [ 328 ] - xx [ 394 ] ) ; xx [ 400 ] = xx [ 110 ] * ( xx [
332 ] - xx [ 391 ] ) ; xx [ 332 ] = ( xx [ 328 ] + xx [ 394 ] ) * xx [ 110 ]
; xx [ 328 ] = ( xx [ 313 ] + xx [ 398 ] * xx [ 398 ] ) * xx [ 110 ] - xx [
208 ] ; xx [ 401 ] = xx [ 326 ] ; xx [ 402 ] = xx [ 329 ] ; xx [ 403 ] = xx [
392 ] ; xx [ 404 ] = xx [ 393 ] ; xx [ 405 ] = xx [ 327 ] ; xx [ 406 ] = xx [
399 ] ; xx [ 407 ] = xx [ 400 ] ; xx [ 408 ] = xx [ 332 ] ; xx [ 409 ] = xx [
328 ] ; xx [ 410 ] = - 0.9815891861559222 ; xx [ 411 ] = 0.1034434979269754 ;
xx [ 412 ] = - 0.1519742864170317 ; xx [ 413 ] = 0.05182594549470909 ; xx [
313 ] = xx [ 19 ] * state [ 16 ] ; xx [ 391 ] = 8.039551964356129e-5 ; xx [
394 ] = sin ( xx [ 313 ] ) ; xx [ 414 ] = 0.9999878887291285 ; xx [ 415 ] =
4.920968565308659e-3 ; xx [ 416 ] = cos ( xx [ 313 ] ) ; xx [ 417 ] = xx [
391 ] * xx [ 394 ] ; xx [ 418 ] = xx [ 414 ] * xx [ 394 ] ; xx [ 419 ] = xx [
415 ] * xx [ 394 ] ; pm_math_quatCompose ( xx + 410 , xx + 416 , xx + 420 ) ;
xx [ 313 ] = xx [ 420 ] * xx [ 420 ] ; xx [ 394 ] = ( xx [ 313 ] + xx [ 421 ]
* xx [ 421 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 410 ] = xx [ 421 ] * xx [ 422
] ; xx [ 411 ] = xx [ 420 ] * xx [ 423 ] ; xx [ 412 ] = xx [ 110 ] * ( xx [
410 ] - xx [ 411 ] ) ; xx [ 413 ] = xx [ 421 ] * xx [ 423 ] ; xx [ 416 ] = xx
[ 420 ] * xx [ 422 ] ; xx [ 417 ] = ( xx [ 413 ] + xx [ 416 ] ) * xx [ 110 ]
; xx [ 418 ] = ( xx [ 410 ] + xx [ 411 ] ) * xx [ 110 ] ; xx [ 410 ] = ( xx [
313 ] + xx [ 422 ] * xx [ 422 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 411 ] = xx
[ 422 ] * xx [ 423 ] ; xx [ 419 ] = xx [ 420 ] * xx [ 421 ] ; xx [ 424 ] = xx
[ 110 ] * ( xx [ 411 ] - xx [ 419 ] ) ; xx [ 425 ] = xx [ 110 ] * ( xx [ 413
] - xx [ 416 ] ) ; xx [ 413 ] = ( xx [ 411 ] + xx [ 419 ] ) * xx [ 110 ] ; xx
[ 411 ] = ( xx [ 313 ] + xx [ 423 ] * xx [ 423 ] ) * xx [ 110 ] - xx [ 208 ]
; xx [ 426 ] = xx [ 394 ] ; xx [ 427 ] = xx [ 412 ] ; xx [ 428 ] = xx [ 417 ]
; xx [ 429 ] = xx [ 418 ] ; xx [ 430 ] = xx [ 410 ] ; xx [ 431 ] = xx [ 424 ]
; xx [ 432 ] = xx [ 425 ] ; xx [ 433 ] = xx [ 413 ] ; xx [ 434 ] = xx [ 411 ]
; xx [ 313 ] = 3.138496625180257e-11 ; xx [ 416 ] = 2.651035172894973e-5 ; ii
[ 0 ] = factorSymmetricPosDef ( xx + 416 , 1 , xx + 419 ) ; if ( ii [ 0 ] !=
0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Gripper/Right Finger Revolute A' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 419 ] = xx [ 313 ] / xx [ 416 ] ; xx [ 435 ] =
4.901445221546402e-6 ; xx [ 436 ] = - ( xx [ 435 ] * xx [ 419 ] ) ; xx [ 437
] = 2.417904402501607e-8 ; xx [ 438 ] = - ( xx [ 437 ] * xx [ 419 ] ) ; xx [
439 ] = xx [ 435 ] / xx [ 416 ] ; xx [ 440 ] = - ( xx [ 437 ] * xx [ 439 ] )
; xx [ 441 ] = xx [ 202 ] - xx [ 313 ] * xx [ 419 ] ; xx [ 442 ] = xx [ 436 ]
; xx [ 443 ] = xx [ 438 ] ; xx [ 444 ] = xx [ 436 ] ; xx [ 445 ] = xx [ 230 ]
- xx [ 435 ] * xx [ 439 ] ; xx [ 446 ] = xx [ 440 ] ; xx [ 447 ] = xx [ 438 ]
; xx [ 448 ] = xx [ 440 ] ; xx [ 449 ] = xx [ 233 ] - 5.846261699636654e-16 /
xx [ 416 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 441 , xx + 426 , xx +
450 ) ; pm_math_matrix3x3Compose ( xx + 426 , xx + 450 , xx + 440 ) ; xx [
436 ] = 1.29457458658629e-5 ; xx [ 438 ] = xx [ 436 ] / xx [ 416 ] ; xx [ 449
] = 3.630243008938874e-6 ; xx [ 450 ] = xx [ 449 ] / xx [ 416 ] ; xx [ 451 ]
= 7.37488608990692e-4 ; xx [ 452 ] = xx [ 451 ] / xx [ 416 ] ; xx [ 453 ] =
xx [ 313 ] * xx [ 438 ] ; xx [ 454 ] = - ( xx [ 313 ] * xx [ 450 ] ) ; xx [
455 ] = xx [ 313 ] * xx [ 452 ] ; xx [ 456 ] = xx [ 435 ] * xx [ 438 ] ; xx [
457 ] = - ( xx [ 435 ] * xx [ 450 ] ) ; xx [ 458 ] = xx [ 435 ] * xx [ 452 ]
; xx [ 459 ] = xx [ 437 ] * xx [ 438 ] ; xx [ 460 ] = - ( xx [ 437 ] * xx [
450 ] ) ; xx [ 461 ] = xx [ 437 ] * xx [ 452 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 453 , xx + 426 , xx + 462 ) ;
pm_math_matrix3x3Compose ( xx + 426 , xx + 462 , xx + 453 ) ; xx [ 462 ] = -
0.02929179843054367 ; xx [ 463 ] = - 7.401641399973765e-3 ; xx [ 464 ] =
4.777489675008928e-4 ; pm_math_quatXform ( xx + 420 , xx + 462 , xx + 465 ) ;
xx [ 462 ] = 0.01141939394132858 - xx [ 465 ] ; xx [ 463 ] = - (
7.654873922132995e-3 + xx [ 466 ] ) ; xx [ 464 ] = 5.163893604838405e-4 - xx
[ 467 ] ; pm_math_matrix3x3PostCross ( xx + 453 , xx + 462 , xx + 465 ) ; xx
[ 474 ] = xx [ 449 ] * xx [ 438 ] ; xx [ 475 ] = - ( xx [ 451 ] * xx [ 438 ]
) ; xx [ 476 ] = xx [ 451 ] * xx [ 450 ] ; xx [ 477 ] = xx [ 261 ] - xx [ 436
] * xx [ 438 ] ; xx [ 478 ] = xx [ 474 ] ; xx [ 479 ] = xx [ 475 ] ; xx [ 480
] = xx [ 474 ] ; xx [ 481 ] = xx [ 261 ] - xx [ 449 ] * xx [ 450 ] ; xx [ 482
] = xx [ 476 ] ; xx [ 483 ] = xx [ 475 ] ; xx [ 484 ] = xx [ 476 ] ; xx [ 485
] = xx [ 261 ] - xx [ 451 ] * xx [ 452 ] ; pm_math_matrix3x3ComposeTranspose
( xx + 477 , xx + 426 , xx + 486 ) ; pm_math_matrix3x3Compose ( xx + 426 , xx
+ 486 , xx + 474 ) ; pm_math_matrix3x3PostCross ( xx + 474 , xx + 462 , xx +
483 ) ; pm_math_matrix3x3PreCross ( xx + 483 , xx + 462 , xx + 492 ) ; xx [
501 ] = xx [ 440 ] - xx [ 465 ] - xx [ 465 ] - xx [ 492 ] ; xx [ 502 ] =
1.345484083765852e-7 ; xx [ 503 ] = xx [ 441 ] - xx [ 466 ] - xx [ 468 ] - xx
[ 493 ] ; xx [ 504 ] = xx [ 442 ] - xx [ 467 ] - xx [ 471 ] - xx [ 494 ] ; xx
[ 505 ] = xx [ 443 ] - xx [ 468 ] - xx [ 466 ] - xx [ 495 ] ; xx [ 506 ] =
5.433703832876786e-7 ; xx [ 507 ] = xx [ 444 ] - xx [ 469 ] - xx [ 469 ] - xx
[ 496 ] ; xx [ 508 ] = xx [ 445 ] - xx [ 470 ] - xx [ 472 ] - xx [ 497 ] ; xx
[ 509 ] = xx [ 446 ] - xx [ 471 ] - xx [ 467 ] - xx [ 498 ] ; xx [ 510 ] = xx
[ 447 ] - xx [ 472 ] - xx [ 470 ] - xx [ 499 ] ; xx [ 511 ] =
5.798774092306958e-7 ; xx [ 440 ] = xx [ 448 ] - xx [ 473 ] - xx [ 473 ] - xx
[ 500 ] ; xx [ 465 ] = xx [ 502 ] + xx [ 501 ] ; xx [ 466 ] = xx [ 503 ] ; xx
[ 467 ] = xx [ 504 ] ; xx [ 468 ] = xx [ 505 ] ; xx [ 469 ] = xx [ 506 ] + xx
[ 507 ] ; xx [ 470 ] = xx [ 508 ] ; xx [ 471 ] = xx [ 509 ] ; xx [ 472 ] = xx
[ 510 ] ; xx [ 473 ] = xx [ 511 ] + xx [ 440 ] ; xx [ 441 ] = xx [ 330 ] ; xx
[ 442 ] = xx [ 334 ] ; xx [ 443 ] = - xx [ 350 ] ; pm_math_matrix3x3Xform (
xx + 465 , xx + 441 , xx + 444 ) ; xx [ 447 ] = xx [ 453 ] - xx [ 483 ] ; xx
[ 448 ] = xx [ 454 ] - xx [ 486 ] ; xx [ 453 ] = xx [ 455 ] - xx [ 489 ] ; xx
[ 454 ] = xx [ 456 ] - xx [ 484 ] ; xx [ 455 ] = xx [ 457 ] - xx [ 487 ] ; xx
[ 456 ] = xx [ 458 ] - xx [ 490 ] ; xx [ 457 ] = xx [ 459 ] - xx [ 485 ] ; xx
[ 458 ] = xx [ 460 ] - xx [ 488 ] ; xx [ 459 ] = xx [ 461 ] - xx [ 491 ] ; xx
[ 483 ] = xx [ 447 ] ; xx [ 484 ] = xx [ 448 ] ; xx [ 485 ] = xx [ 453 ] ; xx
[ 486 ] = xx [ 454 ] ; xx [ 487 ] = xx [ 455 ] ; xx [ 488 ] = xx [ 456 ] ; xx
[ 489 ] = xx [ 457 ] ; xx [ 490 ] = xx [ 458 ] ; xx [ 491 ] = xx [ 459 ] ; xx
[ 460 ] = 3.6757564094702e-3 ; xx [ 461 ] = 1.562574919455121e-3 ; xx [ 492 ]
= 5.870667114245509e-3 ; xx [ 493 ] = xx [ 460 ] ; xx [ 494 ] = - xx [ 461 ]
; xx [ 495 ] = - xx [ 492 ] ; pm_math_matrix3x3Xform ( xx + 483 , xx + 493 ,
xx + 496 ) ; xx [ 499 ] = xx [ 444 ] + xx [ 496 ] ; xx [ 500 ] = xx [ 445 ] +
xx [ 497 ] ; xx [ 444 ] = xx [ 446 ] + xx [ 498 ] ; xx [ 496 ] = xx [ 499 ] ;
xx [ 497 ] = xx [ 500 ] ; xx [ 498 ] = xx [ 444 ] ;
pm_math_matrix3x3TransposeXform ( xx + 483 , xx + 441 , xx + 512 ) ; xx [ 445
] = 7.275363339504315e-3 ; xx [ 515 ] = xx [ 445 ] + xx [ 474 ] ; xx [ 516 ]
= xx [ 475 ] ; xx [ 517 ] = xx [ 476 ] ; xx [ 518 ] = xx [ 477 ] ; xx [ 519 ]
= xx [ 445 ] + xx [ 478 ] ; xx [ 520 ] = xx [ 479 ] ; xx [ 521 ] = xx [ 480 ]
; xx [ 522 ] = xx [ 481 ] ; xx [ 523 ] = xx [ 445 ] + xx [ 482 ] ;
pm_math_matrix3x3Xform ( xx + 515 , xx + 493 , xx + 524 ) ; xx [ 446 ] = xx [
512 ] + xx [ 524 ] ; xx [ 527 ] = xx [ 513 ] + xx [ 525 ] ; xx [ 512 ] = xx [
514 ] + xx [ 526 ] ; xx [ 524 ] = xx [ 446 ] ; xx [ 525 ] = xx [ 527 ] ; xx [
526 ] = xx [ 512 ] ; xx [ 513 ] = pm_math_dot3 ( xx + 441 , xx + 496 ) +
pm_math_dot3 ( xx + 493 , xx + 524 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx
+ 513 , 1 , xx + 496 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Gripper/Right Revolute A' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 496 ] = xx [ 499 ] / xx [ 513 ] ; xx [ 497 ] = xx [
500 ] * xx [ 496 ] ; xx [ 498 ] = xx [ 444 ] * xx [ 496 ] ; xx [ 514 ] = xx [
500 ] / xx [ 513 ] ; xx [ 524 ] = xx [ 444 ] * xx [ 514 ] ; xx [ 525 ] = xx [
444 ] / xx [ 513 ] ; xx [ 528 ] = xx [ 501 ] - xx [ 499 ] * xx [ 496 ] + xx [
502 ] ; xx [ 529 ] = xx [ 503 ] - xx [ 497 ] ; xx [ 530 ] = xx [ 504 ] - xx [
498 ] ; xx [ 531 ] = xx [ 505 ] - xx [ 497 ] ; xx [ 532 ] = xx [ 507 ] - xx [
500 ] * xx [ 514 ] + xx [ 506 ] ; xx [ 533 ] = xx [ 508 ] - xx [ 524 ] ; xx [
534 ] = xx [ 509 ] - xx [ 498 ] ; xx [ 535 ] = xx [ 510 ] - xx [ 524 ] ; xx [
536 ] = xx [ 440 ] - xx [ 444 ] * xx [ 525 ] + xx [ 511 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 528 , xx + 401 , xx + 537 ) ;
pm_math_matrix3x3Compose ( xx + 401 , xx + 537 , xx + 528 ) ; xx [ 440 ] = xx
[ 446 ] / xx [ 513 ] ; xx [ 497 ] = xx [ 527 ] / xx [ 513 ] ; xx [ 498 ] = xx
[ 512 ] / xx [ 513 ] ; xx [ 537 ] = xx [ 447 ] - xx [ 499 ] * xx [ 440 ] ; xx
[ 538 ] = xx [ 448 ] - xx [ 499 ] * xx [ 497 ] ; xx [ 539 ] = xx [ 453 ] - xx
[ 499 ] * xx [ 498 ] ; xx [ 540 ] = xx [ 454 ] - xx [ 500 ] * xx [ 440 ] ; xx
[ 541 ] = xx [ 455 ] - xx [ 500 ] * xx [ 497 ] ; xx [ 542 ] = xx [ 456 ] - xx
[ 500 ] * xx [ 498 ] ; xx [ 543 ] = xx [ 457 ] - xx [ 444 ] * xx [ 440 ] ; xx
[ 544 ] = xx [ 458 ] - xx [ 444 ] * xx [ 497 ] ; xx [ 545 ] = xx [ 459 ] - xx
[ 444 ] * xx [ 498 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 537 , xx +
401 , xx + 546 ) ; pm_math_matrix3x3Compose ( xx + 401 , xx + 546 , xx + 537
) ; xx [ 453 ] = - 6.666465301335936e-3 ; xx [ 454 ] = - 8.669348610704675e-3
; xx [ 455 ] = - 1.866533332507701e-3 ; pm_math_quatXform ( xx + 395 , xx +
453 , xx + 456 ) ; xx [ 453 ] = 0.01083667868920278 - xx [ 456 ] ; xx [ 454 ]
= - ( 9.180102769692503e-3 + xx [ 457 ] ) ; xx [ 455 ] = 0.01115599539653812
- xx [ 458 ] ; pm_math_matrix3x3PostCross ( xx + 537 , xx + 453 , xx + 546 )
; xx [ 447 ] = xx [ 527 ] * xx [ 440 ] ; xx [ 448 ] = xx [ 512 ] * xx [ 440 ]
; xx [ 456 ] = xx [ 512 ] * xx [ 497 ] ; xx [ 555 ] = xx [ 474 ] - xx [ 446 ]
* xx [ 440 ] + xx [ 445 ] ; xx [ 556 ] = xx [ 475 ] - xx [ 447 ] ; xx [ 557 ]
= xx [ 476 ] - xx [ 448 ] ; xx [ 558 ] = xx [ 477 ] - xx [ 447 ] ; xx [ 559 ]
= xx [ 478 ] - xx [ 527 ] * xx [ 497 ] + xx [ 445 ] ; xx [ 560 ] = xx [ 479 ]
- xx [ 456 ] ; xx [ 561 ] = xx [ 480 ] - xx [ 448 ] ; xx [ 562 ] = xx [ 481 ]
- xx [ 456 ] ; xx [ 563 ] = xx [ 482 ] - xx [ 512 ] * xx [ 498 ] + xx [ 445 ]
; pm_math_matrix3x3ComposeTranspose ( xx + 555 , xx + 401 , xx + 474 ) ;
pm_math_matrix3x3Compose ( xx + 401 , xx + 474 , xx + 555 ) ;
pm_math_matrix3x3PostCross ( xx + 555 , xx + 453 , xx + 474 ) ;
pm_math_matrix3x3PreCross ( xx + 474 , xx + 453 , xx + 564 ) ; xx [ 445 ] =
xx [ 285 ] * xx [ 285 ] ; xx [ 447 ] = ( xx [ 445 ] + xx [ 283 ] * xx [ 283 ]
) * xx [ 110 ] - xx [ 208 ] ; xx [ 448 ] = xx [ 93 ] * xx [ 283 ] ; xx [ 456
] = xx [ 248 ] * xx [ 285 ] ; xx [ 457 ] = xx [ 110 ] * ( xx [ 448 ] + xx [
456 ] ) ; xx [ 458 ] = xx [ 248 ] * xx [ 283 ] ; xx [ 459 ] = xx [ 93 ] * xx
[ 285 ] ; xx [ 501 ] = ( xx [ 458 ] - xx [ 459 ] ) * xx [ 110 ] ; xx [ 503 ]
= xx [ 456 ] - xx [ 448 ] ; xx [ 448 ] = xx [ 503 ] * xx [ 110 ] ; xx [ 456 ]
= ( xx [ 445 ] + xx [ 93 ] * xx [ 93 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 504
] = xx [ 248 ] * xx [ 93 ] ; xx [ 505 ] = xx [ 283 ] * xx [ 285 ] ; xx [ 507
] = xx [ 110 ] * ( xx [ 504 ] + xx [ 505 ] ) ; xx [ 508 ] = xx [ 458 ] + xx [
459 ] ; xx [ 458 ] = xx [ 110 ] * xx [ 508 ] ; xx [ 459 ] = ( xx [ 505 ] - xx
[ 504 ] ) * xx [ 110 ] ; xx [ 504 ] = ( xx [ 445 ] + xx [ 248 ] * xx [ 248 ]
) * xx [ 110 ] - xx [ 208 ] ; xx [ 573 ] = xx [ 447 ] ; xx [ 574 ] = - xx [
457 ] ; xx [ 575 ] = xx [ 501 ] ; xx [ 576 ] = xx [ 448 ] ; xx [ 577 ] = xx [
456 ] ; xx [ 578 ] = - xx [ 507 ] ; xx [ 579 ] = xx [ 458 ] ; xx [ 580 ] = xx
[ 459 ] ; xx [ 581 ] = xx [ 504 ] ; xx [ 445 ] = xx [ 108 ] / xx [ 288 ] ; xx
[ 505 ] = xx [ 108 ] - xx [ 108 ] * xx [ 445 ] ; xx [ 582 ] = xx [ 91 ] * xx
[ 447 ] ; xx [ 583 ] = xx [ 91 ] * xx [ 448 ] ; xx [ 584 ] = xx [ 91 ] * xx [
458 ] ; xx [ 585 ] = - ( xx [ 457 ] * xx [ 505 ] ) ; xx [ 586 ] = xx [ 505 ]
* xx [ 456 ] ; xx [ 587 ] = xx [ 459 ] * xx [ 505 ] ; xx [ 588 ] = xx [ 109 ]
* xx [ 501 ] ; xx [ 589 ] = - ( xx [ 109 ] * xx [ 507 ] ) ; xx [ 590 ] = xx [
109 ] * xx [ 504 ] ; pm_math_matrix3x3Compose ( xx + 573 , xx + 582 , xx +
591 ) ; xx [ 505 ] = xx [ 305 ] / xx [ 288 ] ; xx [ 509 ] = xx [ 108 ] * xx [
505 ] ; xx [ 510 ] = xx [ 501 ] * xx [ 509 ] ; xx [ 524 ] = xx [ 457 ] * xx [
510 ] ; xx [ 526 ] = xx [ 509 ] * xx [ 507 ] ; xx [ 582 ] = xx [ 457 ] * xx [
526 ] ; xx [ 583 ] = xx [ 509 ] * xx [ 504 ] ; xx [ 509 ] = xx [ 457 ] * xx [
583 ] ; xx [ 584 ] = xx [ 510 ] * xx [ 456 ] ; xx [ 585 ] = xx [ 526 ] * xx [
456 ] ; xx [ 586 ] = xx [ 583 ] * xx [ 456 ] ; xx [ 587 ] = xx [ 459 ] * xx [
510 ] ; xx [ 510 ] = xx [ 459 ] * xx [ 526 ] ; xx [ 526 ] = xx [ 459 ] * xx [
583 ] ; xx [ 600 ] = xx [ 524 ] ; xx [ 601 ] = - xx [ 582 ] ; xx [ 602 ] = xx
[ 509 ] ; xx [ 603 ] = - xx [ 584 ] ; xx [ 604 ] = xx [ 585 ] ; xx [ 605 ] =
- xx [ 586 ] ; xx [ 606 ] = - xx [ 587 ] ; xx [ 607 ] = xx [ 510 ] ; xx [ 608
] = - xx [ 526 ] ; pm_math_matrix3x3PostCross ( xx + 600 , xx + 314 , xx +
609 ) ; xx [ 583 ] = xx [ 107 ] - xx [ 305 ] * xx [ 505 ] ; xx [ 600 ] = xx [
107 ] * xx [ 447 ] ; xx [ 601 ] = xx [ 107 ] * xx [ 448 ] ; xx [ 602 ] = xx [
107 ] * xx [ 458 ] ; xx [ 603 ] = - ( xx [ 107 ] * xx [ 457 ] ) ; xx [ 604 ]
= xx [ 107 ] * xx [ 456 ] ; xx [ 605 ] = xx [ 107 ] * xx [ 459 ] ; xx [ 606 ]
= xx [ 501 ] * xx [ 583 ] ; xx [ 607 ] = - ( xx [ 507 ] * xx [ 583 ] ) ; xx [
608 ] = xx [ 583 ] * xx [ 504 ] ; pm_math_matrix3x3Compose ( xx + 573 , xx +
600 , xx + 618 ) ; pm_math_matrix3x3PostCross ( xx + 618 , xx + 314 , xx +
573 ) ; pm_math_matrix3x3PreCross ( xx + 573 , xx + 314 , xx + 600 ) ; xx [
448 ] = xx [ 143 ] * xx [ 143 ] ; xx [ 456 ] = ( xx [ 448 ] + xx [ 144 ] * xx
[ 144 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 457 ] = xx [ 144 ] * xx [ 145 ] ;
xx [ 458 ] = xx [ 143 ] * xx [ 146 ] ; xx [ 459 ] = xx [ 110 ] * ( xx [ 457 ]
- xx [ 458 ] ) ; xx [ 501 ] = xx [ 144 ] * xx [ 146 ] ; xx [ 504 ] = xx [ 143
] * xx [ 145 ] ; xx [ 507 ] = ( xx [ 501 ] + xx [ 504 ] ) * xx [ 110 ] ; xx [
583 ] = ( xx [ 457 ] + xx [ 458 ] ) * xx [ 110 ] ; xx [ 457 ] = ( xx [ 448 ]
+ xx [ 145 ] * xx [ 145 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 458 ] = xx [ 145
] * xx [ 146 ] ; xx [ 588 ] = xx [ 143 ] * xx [ 144 ] ; xx [ 589 ] = xx [ 110
] * ( xx [ 458 ] - xx [ 588 ] ) ; xx [ 590 ] = xx [ 110 ] * ( xx [ 501 ] - xx
[ 504 ] ) ; xx [ 501 ] = ( xx [ 458 ] + xx [ 588 ] ) * xx [ 110 ] ; xx [ 458
] = ( xx [ 448 ] + xx [ 146 ] * xx [ 146 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [
627 ] = xx [ 456 ] ; xx [ 628 ] = xx [ 459 ] ; xx [ 629 ] = xx [ 507 ] ; xx [
630 ] = xx [ 583 ] ; xx [ 631 ] = xx [ 457 ] ; xx [ 632 ] = xx [ 589 ] ; xx [
633 ] = xx [ 590 ] ; xx [ 634 ] = xx [ 501 ] ; xx [ 635 ] = xx [ 458 ] ; xx [
448 ] = xx [ 251 ] * xx [ 198 ] ; xx [ 504 ] = xx [ 235 ] * xx [ 198 ] ; xx [
588 ] = xx [ 235 ] * xx [ 199 ] ; xx [ 636 ] = xx [ 289 ] - xx [ 250 ] * xx [
198 ] + xx [ 201 ] ; xx [ 637 ] = xx [ 290 ] - xx [ 448 ] ; xx [ 638 ] = xx [
291 ] - xx [ 504 ] ; xx [ 639 ] = xx [ 292 ] - xx [ 448 ] ; xx [ 640 ] = xx [
294 ] - xx [ 251 ] * xx [ 199 ] + xx [ 293 ] ; xx [ 641 ] = xx [ 295 ] - xx [
588 ] ; xx [ 642 ] = xx [ 296 ] - xx [ 504 ] ; xx [ 643 ] = xx [ 297 ] - xx [
588 ] ; xx [ 644 ] = xx [ 234 ] - xx [ 235 ] * xx [ 200 ] + xx [ 298 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 636 , xx + 627 , xx + 645 ) ;
pm_math_matrix3x3Compose ( xx + 627 , xx + 645 , xx + 636 ) ; xx [ 234 ] = xx
[ 237 ] / xx [ 272 ] ; xx [ 289 ] = xx [ 286 ] / xx [ 272 ] ; xx [ 290 ] = xx
[ 271 ] / xx [ 272 ] ; xx [ 645 ] = xx [ 238 ] - xx [ 250 ] * xx [ 234 ] ; xx
[ 646 ] = xx [ 239 ] - xx [ 250 ] * xx [ 289 ] ; xx [ 647 ] = xx [ 240 ] - xx
[ 250 ] * xx [ 290 ] ; xx [ 648 ] = xx [ 241 ] - xx [ 251 ] * xx [ 234 ] ; xx
[ 649 ] = xx [ 242 ] - xx [ 251 ] * xx [ 289 ] ; xx [ 650 ] = xx [ 243 ] - xx
[ 251 ] * xx [ 290 ] ; xx [ 651 ] = xx [ 244 ] - xx [ 235 ] * xx [ 234 ] ; xx
[ 652 ] = xx [ 245 ] - xx [ 235 ] * xx [ 289 ] ; xx [ 653 ] = xx [ 246 ] - xx
[ 235 ] * xx [ 290 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 645 , xx +
627 , xx + 654 ) ; pm_math_matrix3x3Compose ( xx + 627 , xx + 654 , xx + 645
) ; pm_math_matrix3x3PostCross ( xx + 645 , xx + 306 , xx + 654 ) ; xx [ 291
] = xx [ 286 ] * xx [ 234 ] ; xx [ 292 ] = xx [ 271 ] * xx [ 234 ] ; xx [ 294
] = xx [ 271 ] * xx [ 289 ] ; xx [ 663 ] = xx [ 262 ] - xx [ 237 ] * xx [ 234
] + xx [ 236 ] ; xx [ 664 ] = xx [ 263 ] - xx [ 291 ] ; xx [ 665 ] = xx [ 264
] - xx [ 292 ] ; xx [ 666 ] = xx [ 265 ] - xx [ 291 ] ; xx [ 667 ] = xx [ 266
] - xx [ 286 ] * xx [ 289 ] + xx [ 236 ] ; xx [ 668 ] = xx [ 267 ] - xx [ 294
] ; xx [ 669 ] = xx [ 268 ] - xx [ 292 ] ; xx [ 670 ] = xx [ 269 ] - xx [ 294
] ; xx [ 671 ] = xx [ 270 ] - xx [ 271 ] * xx [ 290 ] + xx [ 236 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 663 , xx + 627 , xx + 262 ) ;
pm_math_matrix3x3Compose ( xx + 627 , xx + 262 , xx + 663 ) ;
pm_math_matrix3x3PostCross ( xx + 663 , xx + 306 , xx + 262 ) ;
pm_math_matrix3x3PreCross ( xx + 262 , xx + 306 , xx + 672 ) ; xx [ 236 ] =
xx [ 355 ] - xx [ 374 ] - xx [ 376 ] - xx [ 365 ] + xx [ 529 ] - xx [ 547 ] -
xx [ 549 ] - xx [ 565 ] + xx [ 592 ] - xx [ 610 ] - xx [ 612 ] - xx [ 601 ] +
xx [ 637 ] - xx [ 655 ] - xx [ 657 ] - xx [ 673 ] ; xx [ 291 ] = xx [ 354 ] -
xx [ 373 ] - xx [ 373 ] - xx [ 364 ] + xx [ 528 ] - xx [ 546 ] - xx [ 546 ] -
xx [ 564 ] + xx [ 591 ] - xx [ 609 ] - xx [ 609 ] - xx [ 600 ] + xx [ 74 ] +
xx [ 636 ] - xx [ 654 ] - xx [ 654 ] - xx [ 672 ] ; xx [ 74 ] = xx [ 356 ] -
xx [ 375 ] - xx [ 379 ] - xx [ 366 ] + xx [ 530 ] - xx [ 548 ] - xx [ 552 ] -
xx [ 566 ] + xx [ 593 ] - xx [ 611 ] - xx [ 615 ] - xx [ 602 ] + xx [ 638 ] -
xx [ 656 ] - xx [ 660 ] - xx [ 674 ] ; xx [ 292 ] = xx [ 537 ] - xx [ 474 ] -
( xx [ 336 ] - xx [ 347 ] ) - ( xx [ 573 ] - xx [ 524 ] ) + xx [ 645 ] - xx [
262 ] ; xx [ 262 ] = xx [ 538 ] - xx [ 477 ] - ( xx [ 349 ] + xx [ 339 ] ) -
( xx [ 582 ] + xx [ 576 ] ) + xx [ 646 ] - xx [ 265 ] ; xx [ 265 ] = xx [ 539
] - xx [ 480 ] - ( xx [ 342 ] - xx [ 345 ] ) - ( xx [ 579 ] - xx [ 509 ] ) +
xx [ 647 ] - xx [ 268 ] ; xx [ 268 ] = xx [ 540 ] - xx [ 475 ] - ( xx [ 351 ]
+ xx [ 337 ] ) - ( xx [ 584 ] + xx [ 574 ] ) + xx [ 648 ] - xx [ 263 ] ; xx [
263 ] = xx [ 541 ] - xx [ 478 ] - ( xx [ 340 ] - xx [ 352 ] ) - ( xx [ 577 ]
- xx [ 585 ] ) + xx [ 649 ] - xx [ 266 ] ; xx [ 266 ] = xx [ 542 ] - xx [ 481
] - ( xx [ 353 ] + xx [ 343 ] ) - ( xx [ 586 ] + xx [ 580 ] ) + xx [ 650 ] -
xx [ 269 ] ; xx [ 269 ] = xx [ 543 ] - xx [ 476 ] - ( xx [ 363 ] + xx [ 338 ]
) - ( xx [ 587 ] + xx [ 575 ] ) + xx [ 651 ] - xx [ 264 ] ; xx [ 264 ] = xx [
544 ] - xx [ 479 ] - ( xx [ 341 ] - xx [ 346 ] ) - ( xx [ 578 ] - xx [ 510 ]
) + xx [ 652 ] - xx [ 267 ] ; xx [ 267 ] = xx [ 545 ] - xx [ 482 ] - ( xx [
348 ] + xx [ 344 ] ) - ( xx [ 526 ] + xx [ 581 ] ) + xx [ 653 ] - xx [ 270 ]
; xx [ 336 ] = xx [ 292 ] ; xx [ 337 ] = xx [ 262 ] ; xx [ 338 ] = xx [ 265 ]
; xx [ 339 ] = xx [ 268 ] ; xx [ 340 ] = xx [ 263 ] ; xx [ 341 ] = xx [ 266 ]
; xx [ 342 ] = xx [ 269 ] ; xx [ 343 ] = xx [ 264 ] ; xx [ 344 ] = xx [ 267 ]
; xx [ 270 ] = 6.50898083880172e-16 ; xx [ 294 ] = 2.828413588501791e-9 ; xx
[ 295 ] = 3.737698732552031e-10 ; xx [ 345 ] = - xx [ 270 ] ; xx [ 346 ] = -
xx [ 294 ] ; xx [ 347 ] = - xx [ 295 ] ; pm_math_matrix3x3Xform ( xx + 336 ,
xx + 345 , xx + 351 ) ; xx [ 296 ] = xx [ 236 ] * xx [ 63 ] - xx [ 291 ] + xx
[ 74 ] * xx [ 71 ] + xx [ 351 ] ; xx [ 297 ] = ( xx [ 248 ] * xx [ 301 ] + xx
[ 302 ] * xx [ 283 ] ) * xx [ 110 ] - xx [ 300 ] + xx [ 318 ] + xx [ 321 ] +
xx [ 324 ] ; xx [ 300 ] = xx [ 319 ] - ( xx [ 302 ] * xx [ 285 ] - xx [ 93 ]
* xx [ 301 ] ) * xx [ 110 ] + xx [ 322 ] + xx [ 325 ] ; xx [ 301 ] = xx [ 203
] - xx [ 310 ] ; xx [ 203 ] = xx [ 311 ] + xx [ 204 ] ; xx [ 204 ] = xx [ 312
] + xx [ 205 ] ; xx [ 310 ] = xx [ 301 ] ; xx [ 311 ] = xx [ 203 ] ; xx [ 312
] = xx [ 204 ] ; xx [ 205 ] = xx [ 358 ] - xx [ 377 ] - xx [ 377 ] - xx [ 368
] + xx [ 532 ] - xx [ 550 ] - xx [ 550 ] - xx [ 568 ] + xx [ 595 ] - xx [ 613
] - xx [ 613 ] - xx [ 604 ] + xx [ 75 ] + xx [ 640 ] - xx [ 658 ] - xx [ 658
] - xx [ 676 ] ; xx [ 75 ] = xx [ 357 ] - xx [ 376 ] - xx [ 374 ] - xx [ 367
] + xx [ 531 ] - xx [ 549 ] - xx [ 547 ] - xx [ 567 ] + xx [ 594 ] - xx [ 612
] - xx [ 610 ] - xx [ 603 ] + xx [ 639 ] - xx [ 657 ] - xx [ 655 ] - xx [ 675
] ; xx [ 302 ] = xx [ 359 ] - xx [ 378 ] - xx [ 380 ] - xx [ 369 ] + xx [ 533
] - xx [ 551 ] - xx [ 553 ] - xx [ 569 ] + xx [ 596 ] - xx [ 614 ] - xx [ 616
] - xx [ 605 ] + xx [ 641 ] - xx [ 659 ] - xx [ 661 ] - xx [ 677 ] ; xx [ 317
] = xx [ 205 ] * xx [ 63 ] - xx [ 75 ] + xx [ 302 ] * xx [ 71 ] + xx [ 352 ]
; xx [ 318 ] = xx [ 361 ] - xx [ 380 ] - xx [ 378 ] - xx [ 371 ] + xx [ 535 ]
- xx [ 553 ] - xx [ 551 ] - xx [ 571 ] + xx [ 598 ] - xx [ 616 ] - xx [ 614 ]
- xx [ 607 ] + xx [ 643 ] - xx [ 661 ] - xx [ 659 ] - xx [ 679 ] ; xx [ 319 ]
= xx [ 360 ] - xx [ 379 ] - xx [ 375 ] - xx [ 370 ] + xx [ 534 ] - xx [ 552 ]
- xx [ 548 ] - xx [ 570 ] + xx [ 597 ] - xx [ 615 ] - xx [ 611 ] - xx [ 606 ]
+ xx [ 642 ] - xx [ 660 ] - xx [ 656 ] - xx [ 678 ] ; xx [ 320 ] = xx [ 362 ]
- xx [ 381 ] - xx [ 381 ] - xx [ 372 ] + xx [ 536 ] - xx [ 554 ] - xx [ 554 ]
- xx [ 572 ] + xx [ 599 ] - xx [ 617 ] - xx [ 617 ] - xx [ 608 ] + xx [ 83 ]
+ xx [ 644 ] - xx [ 662 ] - xx [ 662 ] - xx [ 680 ] ; xx [ 83 ] = xx [ 318 ]
* xx [ 63 ] - xx [ 319 ] + xx [ 320 ] * xx [ 71 ] + xx [ 353 ] ; xx [ 321 ] =
0.2949697962727843 ; xx [ 322 ] = xx [ 382 ] + xx [ 555 ] + xx [ 618 ] + xx [
321 ] + xx [ 663 ] ; xx [ 323 ] = xx [ 383 ] + xx [ 556 ] + xx [ 619 ] + xx [
664 ] ; xx [ 324 ] = xx [ 384 ] + xx [ 557 ] + xx [ 620 ] + xx [ 665 ] ; xx [
325 ] = xx [ 385 ] + xx [ 558 ] + xx [ 621 ] + xx [ 666 ] ; xx [ 348 ] = xx [
386 ] + xx [ 559 ] + xx [ 622 ] + xx [ 321 ] + xx [ 667 ] ; xx [ 349 ] = xx [
387 ] + xx [ 560 ] + xx [ 623 ] + xx [ 668 ] ; xx [ 351 ] = xx [ 388 ] + xx [
561 ] + xx [ 624 ] + xx [ 669 ] ; xx [ 352 ] = xx [ 389 ] + xx [ 562 ] + xx [
625 ] + xx [ 670 ] ; xx [ 353 ] = xx [ 390 ] + xx [ 563 ] + xx [ 626 ] + xx [
321 ] + xx [ 671 ] ; xx [ 354 ] = xx [ 322 ] ; xx [ 355 ] = xx [ 323 ] ; xx [
356 ] = xx [ 324 ] ; xx [ 357 ] = xx [ 325 ] ; xx [ 358 ] = xx [ 348 ] ; xx [
359 ] = xx [ 349 ] ; xx [ 360 ] = xx [ 351 ] ; xx [ 361 ] = xx [ 352 ] ; xx [
362 ] = xx [ 353 ] ; pm_math_matrix3x3Xform ( xx + 354 , xx + 345 , xx + 363
) ; xx [ 321 ] = xx [ 268 ] * xx [ 63 ] - xx [ 292 ] + xx [ 269 ] * xx [ 71 ]
+ xx [ 363 ] ; xx [ 366 ] = xx [ 263 ] * xx [ 63 ] - xx [ 262 ] + xx [ 264 ]
* xx [ 71 ] + xx [ 364 ] ; xx [ 363 ] = xx [ 266 ] * xx [ 63 ] - xx [ 265 ] +
xx [ 267 ] * xx [ 71 ] + xx [ 365 ] ; xx [ 367 ] = xx [ 321 ] ; xx [ 368 ] =
xx [ 366 ] ; xx [ 369 ] = xx [ 363 ] ; xx [ 364 ] = xx [ 317 ] * xx [ 63 ] -
xx [ 296 ] + xx [ 83 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 367 ) ;
ii [ 0 ] = factorSymmetricPosDef ( xx + 364 , 1 , xx + 365 ) ; if ( ii [ 0 ]
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 365 ] = ( xx [ 297 ] * xx [ 63 ] - xx [ 197 ] + xx [
300 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 310 ) ) / xx [ 364 ] ; xx
[ 310 ] = xx [ 197 ] - xx [ 296 ] * xx [ 365 ] ; xx [ 311 ] = xx [ 297 ] - xx
[ 317 ] * xx [ 365 ] ; xx [ 312 ] = xx [ 300 ] - xx [ 83 ] * xx [ 365 ] ;
pm_math_quatXform ( xx + 76 , xx + 310 , xx + 367 ) ; xx [ 310 ] = -
0.01788532900613876 ; xx [ 311 ] = 1.868031335988478e-9 ; xx [ 312 ] =
1.701036284661743e-8 ; pm_math_quatXform ( xx + 76 , xx + 310 , xx + 370 ) ;
xx [ 310 ] = 0.02616311280090799 - xx [ 370 ] ; xx [ 311 ] =
2.712688936742104e-9 - xx [ 371 ] ; xx [ 312 ] = 1.355023982453589e-9 - xx [
372 ] ; xx [ 370 ] = xx [ 301 ] - xx [ 321 ] * xx [ 365 ] ; xx [ 371 ] = xx [
203 ] - xx [ 366 ] * xx [ 365 ] ; xx [ 372 ] = xx [ 204 ] - xx [ 363 ] * xx [
365 ] ; pm_math_quatXform ( xx + 76 , xx + 370 , xx + 373 ) ; pm_math_cross3
( xx + 310 , xx + 373 , xx + 370 ) ; xx [ 197 ] = xx [ 367 ] + xx [ 370 ] ;
xx [ 203 ] = xx [ 76 ] * xx [ 76 ] ; xx [ 204 ] = xx [ 77 ] * xx [ 78 ] ; xx
[ 297 ] = xx [ 76 ] * xx [ 79 ] ; xx [ 300 ] = xx [ 77 ] * xx [ 79 ] ; xx [
301 ] = xx [ 76 ] * xx [ 78 ] ; xx [ 376 ] = xx [ 78 ] * xx [ 79 ] ; xx [ 377
] = xx [ 76 ] * xx [ 77 ] ; xx [ 378 ] = ( xx [ 203 ] + xx [ 77 ] * xx [ 77 ]
) * xx [ 110 ] - xx [ 208 ] ; xx [ 379 ] = xx [ 110 ] * ( xx [ 204 ] - xx [
297 ] ) ; xx [ 380 ] = ( xx [ 300 ] + xx [ 301 ] ) * xx [ 110 ] ; xx [ 381 ]
= ( xx [ 204 ] + xx [ 297 ] ) * xx [ 110 ] ; xx [ 382 ] = ( xx [ 203 ] + xx [
78 ] * xx [ 78 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 383 ] = xx [ 110 ] * ( xx
[ 376 ] - xx [ 377 ] ) ; xx [ 384 ] = xx [ 110 ] * ( xx [ 300 ] - xx [ 301 ]
) ; xx [ 385 ] = ( xx [ 376 ] + xx [ 377 ] ) * xx [ 110 ] ; xx [ 386 ] = ( xx
[ 203 ] + xx [ 79 ] * xx [ 79 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 203 ] = xx
[ 296 ] / xx [ 364 ] ; xx [ 204 ] = xx [ 317 ] * xx [ 203 ] ; xx [ 297 ] = xx
[ 83 ] * xx [ 203 ] ; xx [ 300 ] = xx [ 317 ] / xx [ 364 ] ; xx [ 301 ] = xx
[ 83 ] * xx [ 300 ] ; xx [ 376 ] = xx [ 83 ] / xx [ 364 ] ; xx [ 474 ] = xx [
291 ] - xx [ 296 ] * xx [ 203 ] ; xx [ 475 ] = xx [ 236 ] - xx [ 204 ] ; xx [
476 ] = xx [ 74 ] - xx [ 297 ] ; xx [ 477 ] = xx [ 75 ] - xx [ 204 ] ; xx [
478 ] = xx [ 205 ] - xx [ 317 ] * xx [ 300 ] ; xx [ 479 ] = xx [ 302 ] - xx [
301 ] ; xx [ 480 ] = xx [ 319 ] - xx [ 297 ] ; xx [ 481 ] = xx [ 318 ] - xx [
301 ] ; xx [ 482 ] = xx [ 320 ] - xx [ 83 ] * xx [ 376 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 474 , xx + 378 , xx + 528 ) ;
pm_math_matrix3x3Compose ( xx + 378 , xx + 528 , xx + 474 ) ; xx [ 204 ] = xx
[ 321 ] / xx [ 364 ] ; xx [ 297 ] = xx [ 366 ] / xx [ 364 ] ; xx [ 301 ] = xx
[ 363 ] / xx [ 364 ] ; xx [ 528 ] = xx [ 292 ] - xx [ 296 ] * xx [ 204 ] ; xx
[ 529 ] = xx [ 262 ] - xx [ 296 ] * xx [ 297 ] ; xx [ 530 ] = xx [ 265 ] - xx
[ 296 ] * xx [ 301 ] ; xx [ 531 ] = xx [ 268 ] - xx [ 317 ] * xx [ 204 ] ; xx
[ 532 ] = xx [ 263 ] - xx [ 317 ] * xx [ 297 ] ; xx [ 533 ] = xx [ 266 ] - xx
[ 317 ] * xx [ 301 ] ; xx [ 534 ] = xx [ 269 ] - xx [ 83 ] * xx [ 204 ] ; xx
[ 535 ] = xx [ 264 ] - xx [ 83 ] * xx [ 297 ] ; xx [ 536 ] = xx [ 267 ] - xx
[ 83 ] * xx [ 301 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 528 , xx + 378
, xx + 537 ) ; pm_math_matrix3x3Compose ( xx + 378 , xx + 537 , xx + 528 ) ;
pm_math_matrix3x3PostCross ( xx + 528 , xx + 310 , xx + 537 ) ; xx [ 262 ] =
xx [ 366 ] * xx [ 204 ] ; xx [ 263 ] = xx [ 363 ] * xx [ 204 ] ; xx [ 264 ] =
xx [ 363 ] * xx [ 297 ] ; xx [ 546 ] = xx [ 322 ] - xx [ 321 ] * xx [ 204 ] ;
xx [ 547 ] = xx [ 323 ] - xx [ 262 ] ; xx [ 548 ] = xx [ 324 ] - xx [ 263 ] ;
xx [ 549 ] = xx [ 325 ] - xx [ 262 ] ; xx [ 550 ] = xx [ 348 ] - xx [ 366 ] *
xx [ 297 ] ; xx [ 551 ] = xx [ 349 ] - xx [ 264 ] ; xx [ 552 ] = xx [ 351 ] -
xx [ 263 ] ; xx [ 553 ] = xx [ 352 ] - xx [ 264 ] ; xx [ 554 ] = xx [ 353 ] -
xx [ 363 ] * xx [ 301 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 546 , xx +
378 , xx + 555 ) ; pm_math_matrix3x3Compose ( xx + 378 , xx + 555 , xx + 546
) ; pm_math_matrix3x3PostCross ( xx + 546 , xx + 310 , xx + 377 ) ;
pm_math_matrix3x3PreCross ( xx + 377 , xx + 310 , xx + 555 ) ; xx [ 262 ] =
xx [ 476 ] - xx [ 539 ] - xx [ 543 ] - xx [ 557 ] ; xx [ 263 ] = xx [ 51 ] +
xx [ 474 ] - xx [ 537 ] - xx [ 537 ] - xx [ 555 ] ; xx [ 51 ] = xx [ 475 ] -
xx [ 538 ] - xx [ 540 ] - xx [ 556 ] ; xx [ 264 ] = xx [ 528 ] - xx [ 377 ] ;
xx [ 265 ] = xx [ 529 ] - xx [ 380 ] ; xx [ 266 ] = xx [ 530 ] - xx [ 383 ] ;
xx [ 267 ] = xx [ 531 ] - xx [ 378 ] ; xx [ 268 ] = xx [ 532 ] - xx [ 381 ] ;
xx [ 269 ] = xx [ 533 ] - xx [ 384 ] ; xx [ 292 ] = xx [ 534 ] - xx [ 379 ] ;
xx [ 322 ] = xx [ 535 ] - xx [ 382 ] ; xx [ 323 ] = xx [ 536 ] - xx [ 385 ] ;
xx [ 377 ] = xx [ 264 ] ; xx [ 378 ] = xx [ 265 ] ; xx [ 379 ] = xx [ 266 ] ;
xx [ 380 ] = xx [ 267 ] ; xx [ 381 ] = xx [ 268 ] ; xx [ 382 ] = xx [ 269 ] ;
xx [ 383 ] = xx [ 292 ] ; xx [ 384 ] = xx [ 322 ] ; xx [ 385 ] = xx [ 323 ] ;
xx [ 324 ] = 3.820820460222869e-9 ; xx [ 325 ] = 0.01066688719909032 ; xx [
348 ] = 4.775661463753087e-9 ; xx [ 351 ] = - xx [ 324 ] ; xx [ 352 ] = xx [
325 ] ; xx [ 353 ] = xx [ 348 ] ; pm_math_matrix3x3Xform ( xx + 377 , xx +
351 , xx + 386 ) ; xx [ 349 ] = xx [ 262 ] - ( xx [ 263 ] * xx [ 39 ] + xx [
48 ] * xx [ 51 ] ) + xx [ 386 ] ; xx [ 389 ] = xx [ 369 ] + xx [ 372 ] ; xx [
367 ] = xx [ 368 ] + xx [ 371 ] ; xx [ 368 ] = xx [ 60 ] + xx [ 482 ] - xx [
545 ] - xx [ 545 ] - xx [ 563 ] ; xx [ 60 ] = xx [ 480 ] - xx [ 543 ] - xx [
539 ] - xx [ 561 ] ; xx [ 369 ] = xx [ 481 ] - xx [ 544 ] - xx [ 542 ] - xx [
562 ] ; xx [ 370 ] = xx [ 368 ] - ( xx [ 39 ] * xx [ 60 ] + xx [ 48 ] * xx [
369 ] ) + xx [ 388 ] ; xx [ 371 ] = xx [ 479 ] - xx [ 542 ] - xx [ 544 ] - xx
[ 560 ] ; xx [ 372 ] = xx [ 477 ] - xx [ 540 ] - xx [ 538 ] - xx [ 558 ] ; xx
[ 390 ] = xx [ 52 ] + xx [ 478 ] - xx [ 541 ] - xx [ 541 ] - xx [ 559 ] ; xx
[ 52 ] = xx [ 371 ] - ( xx [ 39 ] * xx [ 372 ] + xx [ 390 ] * xx [ 48 ] ) +
xx [ 387 ] ; xx [ 386 ] = 0.1516819062971934 ; xx [ 474 ] = xx [ 386 ] + xx [
546 ] ; xx [ 475 ] = xx [ 547 ] ; xx [ 476 ] = xx [ 548 ] ; xx [ 477 ] = xx [
549 ] ; xx [ 478 ] = xx [ 386 ] + xx [ 550 ] ; xx [ 479 ] = xx [ 551 ] ; xx [
480 ] = xx [ 552 ] ; xx [ 481 ] = xx [ 553 ] ; xx [ 482 ] = xx [ 386 ] + xx [
554 ] ; pm_math_matrix3x3Xform ( xx + 474 , xx + 351 , xx + 528 ) ; xx [ 387
] = xx [ 292 ] - ( xx [ 39 ] * xx [ 264 ] + xx [ 48 ] * xx [ 267 ] ) + xx [
528 ] ; xx [ 388 ] = xx [ 322 ] - ( xx [ 39 ] * xx [ 265 ] + xx [ 48 ] * xx [
268 ] ) + xx [ 529 ] ; xx [ 448 ] = xx [ 323 ] - ( xx [ 39 ] * xx [ 266 ] +
xx [ 48 ] * xx [ 269 ] ) + xx [ 530 ] ; xx [ 528 ] = xx [ 387 ] ; xx [ 529 ]
= xx [ 388 ] ; xx [ 530 ] = xx [ 448 ] ; xx [ 504 ] = xx [ 370 ] - ( xx [ 349
] * xx [ 39 ] + xx [ 52 ] * xx [ 48 ] ) + pm_math_dot3 ( xx + 351 , xx + 528
) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 504 , 1 , xx + 509 ) ; if ( ii [
0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 509 ] = ( xx [ 389 ] - ( xx [ 197 ] * xx [ 39 ] + xx [
367 ] * xx [ 48 ] ) + pm_math_dot3 ( xx + 351 , xx + 373 ) ) / xx [ 504 ] ;
xx [ 528 ] = xx [ 197 ] - xx [ 349 ] * xx [ 509 ] ; xx [ 529 ] = xx [ 367 ] -
xx [ 52 ] * xx [ 509 ] ; xx [ 530 ] = xx [ 389 ] - xx [ 370 ] * xx [ 509 ] ;
pm_math_quatXform ( xx + 53 , xx + 528 , xx + 531 ) ; xx [ 528 ] = -
0.01066688412615721 ; xx [ 529 ] = 1.687864625317035e-8 ; xx [ 530 ] = -
0.04623419529374339 ; pm_math_quatXform ( xx + 53 , xx + 528 , xx + 534 ) ;
xx [ 528 ] = 0.05228786378974412 - xx [ 534 ] ; xx [ 529 ] = - (
1.712170543057558e-4 + xx [ 535 ] ) ; xx [ 530 ] = - ( 0.0462341942006417 +
xx [ 536 ] ) ; xx [ 534 ] = xx [ 373 ] - xx [ 387 ] * xx [ 509 ] ; xx [ 535 ]
= xx [ 374 ] - xx [ 388 ] * xx [ 509 ] ; xx [ 536 ] = xx [ 375 ] - xx [ 448 ]
* xx [ 509 ] ; pm_math_quatXform ( xx + 53 , xx + 534 , xx + 373 ) ;
pm_math_cross3 ( xx + 528 , xx + 373 , xx + 534 ) ; xx [ 197 ] = xx [ 531 ] +
xx [ 534 ] ; xx [ 367 ] = xx [ 53 ] * xx [ 53 ] ; xx [ 389 ] = xx [ 54 ] * xx
[ 55 ] ; xx [ 510 ] = xx [ 53 ] * xx [ 56 ] ; xx [ 524 ] = xx [ 54 ] * xx [
56 ] ; xx [ 526 ] = xx [ 53 ] * xx [ 55 ] ; xx [ 537 ] = xx [ 55 ] * xx [ 56
] ; xx [ 538 ] = xx [ 53 ] * xx [ 54 ] ; xx [ 555 ] = ( xx [ 367 ] + xx [ 54
] * xx [ 54 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 556 ] = xx [ 110 ] * ( xx [
389 ] - xx [ 510 ] ) ; xx [ 557 ] = ( xx [ 524 ] + xx [ 526 ] ) * xx [ 110 ]
; xx [ 558 ] = ( xx [ 389 ] + xx [ 510 ] ) * xx [ 110 ] ; xx [ 559 ] = ( xx [
367 ] + xx [ 55 ] * xx [ 55 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 560 ] = xx [
110 ] * ( xx [ 537 ] - xx [ 538 ] ) ; xx [ 561 ] = xx [ 110 ] * ( xx [ 524 ]
- xx [ 526 ] ) ; xx [ 562 ] = ( xx [ 537 ] + xx [ 538 ] ) * xx [ 110 ] ; xx [
563 ] = ( xx [ 367 ] + xx [ 56 ] * xx [ 56 ] ) * xx [ 110 ] - xx [ 208 ] ; xx
[ 367 ] = xx [ 349 ] / xx [ 504 ] ; xx [ 389 ] = xx [ 52 ] * xx [ 367 ] ; xx
[ 510 ] = xx [ 370 ] * xx [ 367 ] ; xx [ 524 ] = xx [ 52 ] / xx [ 504 ] ; xx
[ 526 ] = xx [ 370 ] * xx [ 524 ] ; xx [ 537 ] = xx [ 370 ] / xx [ 504 ] ; xx
[ 564 ] = xx [ 263 ] - xx [ 349 ] * xx [ 367 ] ; xx [ 565 ] = xx [ 51 ] - xx
[ 389 ] ; xx [ 566 ] = xx [ 262 ] - xx [ 510 ] ; xx [ 567 ] = xx [ 372 ] - xx
[ 389 ] ; xx [ 568 ] = xx [ 390 ] - xx [ 52 ] * xx [ 524 ] ; xx [ 569 ] = xx
[ 371 ] - xx [ 526 ] ; xx [ 570 ] = xx [ 60 ] - xx [ 510 ] ; xx [ 571 ] = xx
[ 369 ] - xx [ 526 ] ; xx [ 572 ] = xx [ 368 ] - xx [ 370 ] * xx [ 537 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 564 , xx + 555 , xx + 573 ) ;
pm_math_matrix3x3Compose ( xx + 555 , xx + 573 , xx + 564 ) ; xx [ 389 ] = xx
[ 387 ] / xx [ 504 ] ; xx [ 510 ] = xx [ 388 ] / xx [ 504 ] ; xx [ 526 ] = xx
[ 448 ] / xx [ 504 ] ; xx [ 573 ] = xx [ 264 ] - xx [ 349 ] * xx [ 389 ] ; xx
[ 574 ] = xx [ 265 ] - xx [ 349 ] * xx [ 510 ] ; xx [ 575 ] = xx [ 266 ] - xx
[ 349 ] * xx [ 526 ] ; xx [ 576 ] = xx [ 267 ] - xx [ 52 ] * xx [ 389 ] ; xx
[ 577 ] = xx [ 268 ] - xx [ 52 ] * xx [ 510 ] ; xx [ 578 ] = xx [ 269 ] - xx
[ 52 ] * xx [ 526 ] ; xx [ 579 ] = xx [ 292 ] - xx [ 370 ] * xx [ 389 ] ; xx
[ 580 ] = xx [ 322 ] - xx [ 370 ] * xx [ 510 ] ; xx [ 581 ] = xx [ 323 ] - xx
[ 370 ] * xx [ 526 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 573 , xx +
555 , xx + 591 ) ; pm_math_matrix3x3Compose ( xx + 555 , xx + 591 , xx + 573
) ; pm_math_matrix3x3PostCross ( xx + 573 , xx + 528 , xx + 591 ) ; xx [ 264
] = xx [ 388 ] * xx [ 389 ] ; xx [ 265 ] = xx [ 448 ] * xx [ 389 ] ; xx [ 266
] = xx [ 448 ] * xx [ 510 ] ; xx [ 600 ] = xx [ 546 ] - xx [ 387 ] * xx [ 389
] + xx [ 386 ] ; xx [ 601 ] = xx [ 547 ] - xx [ 264 ] ; xx [ 602 ] = xx [ 548
] - xx [ 265 ] ; xx [ 603 ] = xx [ 549 ] - xx [ 264 ] ; xx [ 604 ] = xx [ 550
] - xx [ 388 ] * xx [ 510 ] + xx [ 386 ] ; xx [ 605 ] = xx [ 551 ] - xx [ 266
] ; xx [ 606 ] = xx [ 552 ] - xx [ 265 ] ; xx [ 607 ] = xx [ 553 ] - xx [ 266
] ; xx [ 608 ] = xx [ 554 ] - xx [ 448 ] * xx [ 526 ] + xx [ 386 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 600 , xx + 555 , xx + 538 ) ;
pm_math_matrix3x3Compose ( xx + 555 , xx + 538 , xx + 600 ) ;
pm_math_matrix3x3PostCross ( xx + 600 , xx + 528 , xx + 538 ) ;
pm_math_matrix3x3PreCross ( xx + 538 , xx + 528 , xx + 547 ) ; xx [ 264 ] =
xx [ 564 ] - xx [ 591 ] - xx [ 591 ] - xx [ 547 ] ; xx [ 265 ] = xx [ 565 ] -
xx [ 592 ] - xx [ 594 ] - xx [ 548 ] ; xx [ 266 ] = xx [ 566 ] - xx [ 593 ] -
xx [ 597 ] - xx [ 549 ] ; xx [ 267 ] = xx [ 567 ] - xx [ 594 ] - xx [ 592 ] -
xx [ 550 ] ; xx [ 268 ] = xx [ 568 ] - xx [ 595 ] - xx [ 595 ] - xx [ 551 ] ;
xx [ 269 ] = xx [ 569 ] - xx [ 596 ] - xx [ 598 ] - xx [ 552 ] ; xx [ 292 ] =
xx [ 570 ] - xx [ 597 ] - xx [ 593 ] - xx [ 553 ] ; xx [ 322 ] = xx [ 571 ] -
xx [ 598 ] - xx [ 596 ] - xx [ 554 ] ; xx [ 323 ] = xx [ 572 ] - xx [ 599 ] -
xx [ 599 ] - xx [ 555 ] ; xx [ 547 ] = xx [ 28 ] + xx [ 264 ] ; xx [ 548 ] =
xx [ 265 ] ; xx [ 549 ] = xx [ 266 ] ; xx [ 550 ] = xx [ 267 ] ; xx [ 551 ] =
xx [ 36 ] + xx [ 268 ] ; xx [ 552 ] = xx [ 269 ] ; xx [ 553 ] = xx [ 292 ] ;
xx [ 554 ] = xx [ 322 ] ; xx [ 555 ] = xx [ 37 ] + xx [ 323 ] ; xx [ 556 ] =
- xx [ 21 ] ; xx [ 557 ] = xx [ 23 ] ; xx [ 558 ] = xx [ 24 ] ;
pm_math_matrix3x3Xform ( xx + 547 , xx + 556 , xx + 559 ) ; xx [ 386 ] =
1.010062787363613e-13 ; xx [ 562 ] = xx [ 574 ] - xx [ 541 ] ; xx [ 541 ] =
0.05693215820929211 ; xx [ 563 ] = xx [ 575 ] - xx [ 544 ] ; xx [ 544 ] = xx
[ 559 ] + xx [ 386 ] * xx [ 562 ] - xx [ 541 ] * xx [ 563 ] ; xx [ 564 ] = xx
[ 532 ] + xx [ 535 ] ; xx [ 531 ] = xx [ 533 ] + xx [ 536 ] ; xx [ 532 ] = xx
[ 197 ] ; xx [ 533 ] = xx [ 564 ] ; xx [ 534 ] = xx [ 531 ] ; xx [ 535 ] = xx
[ 577 ] - xx [ 542 ] ; xx [ 536 ] = xx [ 578 ] - xx [ 545 ] ; xx [ 542 ] = xx
[ 560 ] + xx [ 386 ] * xx [ 535 ] - xx [ 541 ] * xx [ 536 ] ; xx [ 545 ] = xx
[ 580 ] - xx [ 543 ] ; xx [ 543 ] = xx [ 581 ] - xx [ 546 ] ; xx [ 546 ] = xx
[ 561 ] + xx [ 386 ] * xx [ 545 ] - xx [ 541 ] * xx [ 543 ] ; xx [ 559 ] = xx
[ 544 ] ; xx [ 560 ] = xx [ 542 ] ; xx [ 561 ] = xx [ 546 ] ; xx [ 565 ] = xx
[ 573 ] - xx [ 538 ] ; xx [ 538 ] = xx [ 576 ] - xx [ 539 ] ; xx [ 539 ] = xx
[ 579 ] - xx [ 540 ] ; xx [ 566 ] = xx [ 565 ] ; xx [ 567 ] = xx [ 562 ] ; xx
[ 568 ] = xx [ 563 ] ; xx [ 569 ] = xx [ 538 ] ; xx [ 570 ] = xx [ 535 ] ; xx
[ 571 ] = xx [ 536 ] ; xx [ 572 ] = xx [ 539 ] ; xx [ 573 ] = xx [ 545 ] ; xx
[ 574 ] = xx [ 543 ] ; pm_math_matrix3x3TransposeXform ( xx + 566 , xx + 556
, xx + 575 ) ; xx [ 540 ] = 1.004510449513889 ; xx [ 578 ] = xx [ 540 ] + xx
[ 604 ] ; xx [ 579 ] = xx [ 576 ] + xx [ 578 ] * xx [ 386 ] - xx [ 541 ] * xx
[ 605 ] ; xx [ 580 ] = xx [ 540 ] + xx [ 608 ] ; xx [ 581 ] = xx [ 577 ] + xx
[ 386 ] * xx [ 607 ] - xx [ 580 ] * xx [ 541 ] ; xx [ 582 ] = pm_math_dot3 (
xx + 556 , xx + 559 ) + xx [ 579 ] * xx [ 386 ] - xx [ 581 ] * xx [ 541 ] ;
ii [ 0 ] = factorSymmetricPosDef ( xx + 582 , 1 , xx + 559 ) ; if ( ii [ 0 ]
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 559 ] = ( pm_math_dot3 ( xx + 556 , xx + 532 ) + xx [
386 ] * xx [ 374 ] - xx [ 541 ] * xx [ 375 ] ) / xx [ 582 ] ; xx [ 532 ] = xx
[ 197 ] - xx [ 544 ] * xx [ 559 ] ; xx [ 533 ] = xx [ 564 ] - xx [ 542 ] * xx
[ 559 ] ; xx [ 534 ] = xx [ 531 ] - xx [ 546 ] * xx [ 559 ] ;
pm_math_quatXform ( xx + 29 , xx + 532 , xx + 584 ) ; xx [ 531 ] = -
0.05692659527302101 ; xx [ 532 ] = - 0.04413317908031012 ; xx [ 533 ] = -
8.515302288232607e-14 ; pm_math_quatXform ( xx + 29 , xx + 531 , xx + 591 ) ;
xx [ 531 ] = 0.07547017254630675 - xx [ 591 ] ; xx [ 532 ] = - (
0.04502537774068344 + xx [ 592 ] ) ; xx [ 533 ] = 5.246701361570897e-10 - xx
[ 593 ] ; xx [ 197 ] = xx [ 575 ] + xx [ 386 ] * xx [ 601 ] - xx [ 541 ] * xx
[ 602 ] ; xx [ 575 ] = xx [ 373 ] - xx [ 197 ] * xx [ 559 ] ; xx [ 576 ] = xx
[ 374 ] - xx [ 579 ] * xx [ 559 ] ; xx [ 577 ] = xx [ 375 ] - xx [ 581 ] * xx
[ 559 ] ; pm_math_quatXform ( xx + 29 , xx + 575 , xx + 373 ) ;
pm_math_cross3 ( xx + 531 , xx + 373 , xx + 575 ) ; xx [ 591 ] = xx [ 584 ] +
xx [ 575 ] ; xx [ 592 ] = xx [ 585 ] + xx [ 576 ] ; xx [ 593 ] = xx [ 586 ] +
xx [ 577 ] ; xx [ 534 ] = 6.211067595671864e-11 ; xx [ 560 ] =
2.475177008664836e-10 ; xx [ 561 ] = 0.02648393756016065 ; xx [ 575 ] = - xx
[ 534 ] ; xx [ 576 ] = - xx [ 560 ] ; xx [ 577 ] = - xx [ 561 ] ; xx [ 564 ]
= xx [ 29 ] * xx [ 29 ] ; xx [ 584 ] = xx [ 30 ] * xx [ 31 ] ; xx [ 585 ] =
xx [ 29 ] * xx [ 32 ] ; xx [ 586 ] = xx [ 30 ] * xx [ 32 ] ; xx [ 587 ] = xx
[ 29 ] * xx [ 31 ] ; xx [ 588 ] = xx [ 31 ] * xx [ 32 ] ; xx [ 594 ] = xx [
29 ] * xx [ 30 ] ; xx [ 608 ] = ( xx [ 564 ] + xx [ 30 ] * xx [ 30 ] ) * xx [
110 ] - xx [ 208 ] ; xx [ 609 ] = xx [ 110 ] * ( xx [ 584 ] - xx [ 585 ] ) ;
xx [ 610 ] = ( xx [ 586 ] + xx [ 587 ] ) * xx [ 110 ] ; xx [ 611 ] = ( xx [
584 ] + xx [ 585 ] ) * xx [ 110 ] ; xx [ 612 ] = ( xx [ 564 ] + xx [ 31 ] *
xx [ 31 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 613 ] = xx [ 110 ] * ( xx [ 588
] - xx [ 594 ] ) ; xx [ 614 ] = xx [ 110 ] * ( xx [ 586 ] - xx [ 587 ] ) ; xx
[ 615 ] = ( xx [ 588 ] + xx [ 594 ] ) * xx [ 110 ] ; xx [ 616 ] = ( xx [ 564
] + xx [ 32 ] * xx [ 32 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 564 ] = xx [ 544
] / xx [ 582 ] ; xx [ 584 ] = xx [ 542 ] * xx [ 564 ] ; xx [ 585 ] = xx [ 546
] * xx [ 564 ] ; xx [ 586 ] = xx [ 542 ] / xx [ 582 ] ; xx [ 587 ] = xx [ 546
] * xx [ 586 ] ; xx [ 588 ] = xx [ 546 ] / xx [ 582 ] ; xx [ 617 ] = xx [ 264
] - xx [ 544 ] * xx [ 564 ] + xx [ 28 ] ; xx [ 618 ] = xx [ 265 ] - xx [ 584
] ; xx [ 619 ] = xx [ 266 ] - xx [ 585 ] ; xx [ 620 ] = xx [ 267 ] - xx [ 584
] ; xx [ 621 ] = xx [ 268 ] - xx [ 542 ] * xx [ 586 ] + xx [ 36 ] ; xx [ 622
] = xx [ 269 ] - xx [ 587 ] ; xx [ 623 ] = xx [ 292 ] - xx [ 585 ] ; xx [ 624
] = xx [ 322 ] - xx [ 587 ] ; xx [ 625 ] = xx [ 323 ] - xx [ 546 ] * xx [ 588
] + xx [ 37 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 617 , xx + 608 , xx
+ 636 ) ; pm_math_matrix3x3Compose ( xx + 608 , xx + 636 , xx + 617 ) ; xx [
28 ] = xx [ 197 ] / xx [ 582 ] ; xx [ 36 ] = xx [ 579 ] / xx [ 582 ] ; xx [
37 ] = xx [ 581 ] / xx [ 582 ] ; xx [ 636 ] = xx [ 565 ] - xx [ 544 ] * xx [
28 ] ; xx [ 637 ] = xx [ 562 ] - xx [ 544 ] * xx [ 36 ] ; xx [ 638 ] = xx [
563 ] - xx [ 544 ] * xx [ 37 ] ; xx [ 639 ] = xx [ 538 ] - xx [ 542 ] * xx [
28 ] ; xx [ 640 ] = xx [ 535 ] - xx [ 542 ] * xx [ 36 ] ; xx [ 641 ] = xx [
536 ] - xx [ 542 ] * xx [ 37 ] ; xx [ 642 ] = xx [ 539 ] - xx [ 546 ] * xx [
28 ] ; xx [ 643 ] = xx [ 545 ] - xx [ 546 ] * xx [ 36 ] ; xx [ 644 ] = xx [
543 ] - xx [ 546 ] * xx [ 37 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 636
, xx + 608 , xx + 645 ) ; pm_math_matrix3x3Compose ( xx + 608 , xx + 645 , xx
+ 636 ) ; pm_math_matrix3x3PostCross ( xx + 636 , xx + 531 , xx + 645 ) ; xx
[ 264 ] = xx [ 579 ] * xx [ 28 ] ; xx [ 265 ] = xx [ 581 ] * xx [ 28 ] ; xx [
266 ] = xx [ 581 ] * xx [ 36 ] ; xx [ 654 ] = xx [ 600 ] - xx [ 197 ] * xx [
28 ] + xx [ 540 ] ; xx [ 655 ] = xx [ 601 ] - xx [ 264 ] ; xx [ 656 ] = xx [
602 ] - xx [ 265 ] ; xx [ 657 ] = xx [ 603 ] - xx [ 264 ] ; xx [ 658 ] = xx [
578 ] - xx [ 579 ] * xx [ 36 ] ; xx [ 659 ] = xx [ 605 ] - xx [ 266 ] ; xx [
660 ] = xx [ 606 ] - xx [ 265 ] ; xx [ 661 ] = xx [ 607 ] - xx [ 266 ] ; xx [
662 ] = xx [ 580 ] - xx [ 581 ] * xx [ 37 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 654 , xx + 608 , xx + 663 ) ;
pm_math_matrix3x3Compose ( xx + 608 , xx + 663 , xx + 654 ) ;
pm_math_matrix3x3PostCross ( xx + 654 , xx + 531 , xx + 608 ) ;
pm_math_matrix3x3PreCross ( xx + 608 , xx + 531 , xx + 663 ) ; xx [ 672 ] =
xx [ 12 ] + xx [ 617 ] - xx [ 645 ] - xx [ 645 ] - xx [ 663 ] ; xx [ 673 ] =
xx [ 618 ] - xx [ 646 ] - xx [ 648 ] - xx [ 664 ] ; xx [ 674 ] = xx [ 619 ] -
xx [ 647 ] - xx [ 651 ] - xx [ 665 ] ; xx [ 675 ] = xx [ 620 ] - xx [ 648 ] -
xx [ 646 ] - xx [ 666 ] ; xx [ 676 ] = xx [ 13 ] + xx [ 621 ] - xx [ 649 ] -
xx [ 649 ] - xx [ 667 ] ; xx [ 677 ] = xx [ 622 ] - xx [ 650 ] - xx [ 652 ] -
xx [ 668 ] ; xx [ 678 ] = xx [ 623 ] - xx [ 651 ] - xx [ 647 ] - xx [ 669 ] ;
xx [ 679 ] = xx [ 624 ] - xx [ 652 ] - xx [ 650 ] - xx [ 670 ] ; xx [ 680 ] =
xx [ 14 ] + xx [ 625 ] - xx [ 653 ] - xx [ 653 ] - xx [ 671 ] ;
pm_math_matrix3x3Xform ( xx + 672 , xx + 3 , xx + 12 ) ; xx [ 617 ] = xx [
636 ] - xx [ 608 ] ; xx [ 618 ] = xx [ 637 ] - xx [ 611 ] ; xx [ 619 ] = xx [
638 ] - xx [ 614 ] ; xx [ 620 ] = xx [ 639 ] - xx [ 609 ] ; xx [ 621 ] = xx [
640 ] - xx [ 612 ] ; xx [ 622 ] = xx [ 641 ] - xx [ 615 ] ; xx [ 623 ] = xx [
642 ] - xx [ 610 ] ; xx [ 624 ] = xx [ 643 ] - xx [ 613 ] ; xx [ 625 ] = xx [
644 ] - xx [ 616 ] ; pm_math_matrix3x3Xform ( xx + 617 , xx + 575 , xx + 264
) ; xx [ 267 ] = xx [ 12 ] + xx [ 264 ] ; xx [ 268 ] = xx [ 13 ] + xx [ 265 ]
; xx [ 269 ] = xx [ 14 ] + xx [ 266 ] ; pm_math_matrix3x3TransposeXform ( xx
+ 617 , xx + 3 , xx + 12 ) ; xx [ 264 ] = 0.8015811996106847 ; xx [ 608 ] =
xx [ 264 ] + xx [ 654 ] ; xx [ 609 ] = xx [ 655 ] ; xx [ 610 ] = xx [ 656 ] ;
xx [ 611 ] = xx [ 657 ] ; xx [ 612 ] = xx [ 264 ] + xx [ 658 ] ; xx [ 613 ] =
xx [ 659 ] ; xx [ 614 ] = xx [ 660 ] ; xx [ 615 ] = xx [ 661 ] ; xx [ 616 ] =
xx [ 264 ] + xx [ 662 ] ; pm_math_matrix3x3Xform ( xx + 608 , xx + 575 , xx +
264 ) ; xx [ 292 ] = xx [ 12 ] + xx [ 264 ] ; xx [ 322 ] = xx [ 13 ] + xx [
265 ] ; xx [ 12 ] = xx [ 14 ] + xx [ 266 ] ; xx [ 264 ] = xx [ 292 ] ; xx [
265 ] = xx [ 322 ] ; xx [ 266 ] = xx [ 12 ] ; xx [ 13 ] = pm_math_dot3 ( xx +
3 , xx + 267 ) + pm_math_dot3 ( xx + 575 , xx + 264 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 13 , 1 , xx + 14 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 14 ] = ( pm_math_dot3 ( xx + 3 , xx + 591 ) +
pm_math_dot3 ( xx + 575 , xx + 373 ) ) / xx [ 13 ] ; xx [ 264 ] = xx [ 0 ] *
xx [ 14 ] ; xx [ 265 ] = - ( xx [ 1 ] * xx [ 14 ] ) ; xx [ 266 ] = xx [ 2 ] *
xx [ 14 ] ; pm_math_quatInverseXform ( xx + 29 , xx + 264 , xx + 267 ) ; xx [
373 ] = xx [ 564 ] ; xx [ 374 ] = xx [ 586 ] ; xx [ 375 ] = xx [ 588 ] ; xx [
562 ] = xx [ 28 ] ; xx [ 563 ] = xx [ 36 ] ; xx [ 564 ] = xx [ 37 ] ;
pm_math_cross3 ( xx + 264 , xx + 531 , xx + 584 ) ; xx [ 264 ] = xx [ 584 ] +
xx [ 534 ] * xx [ 14 ] ; xx [ 265 ] = xx [ 585 ] + xx [ 560 ] * xx [ 14 ] ;
xx [ 266 ] = xx [ 586 ] + xx [ 561 ] * xx [ 14 ] ; pm_math_quatInverseXform (
xx + 29 , xx + 264 , xx + 584 ) ; xx [ 14 ] = xx [ 559 ] + pm_math_dot3 ( xx
+ 373 , xx + 267 ) + pm_math_dot3 ( xx + 562 , xx + 584 ) ; xx [ 264 ] = xx [
267 ] + xx [ 14 ] * xx [ 21 ] ; xx [ 265 ] = xx [ 268 ] - xx [ 14 ] * xx [ 23
] ; xx [ 266 ] = xx [ 269 ] - xx [ 14 ] * xx [ 24 ] ;
pm_math_quatInverseXform ( xx + 53 , xx + 264 , xx + 267 ) ; xx [ 591 ] = xx
[ 367 ] ; xx [ 592 ] = xx [ 524 ] ; xx [ 593 ] = xx [ 537 ] ; xx [ 535 ] = xx
[ 389 ] ; xx [ 536 ] = xx [ 510 ] ; xx [ 537 ] = xx [ 526 ] ; pm_math_cross3
( xx + 264 , xx + 528 , xx + 594 ) ; xx [ 264 ] = xx [ 584 ] + xx [ 594 ] ;
xx [ 265 ] = xx [ 585 ] - xx [ 14 ] * xx [ 386 ] + xx [ 595 ] ; xx [ 266 ] =
xx [ 586 ] + xx [ 14 ] * xx [ 541 ] + xx [ 596 ] ; pm_math_quatInverseXform (
xx + 53 , xx + 264 , xx + 584 ) ; xx [ 14 ] = xx [ 509 ] + pm_math_dot3 ( xx
+ 591 , xx + 267 ) + pm_math_dot3 ( xx + 535 , xx + 584 ) ; xx [ 264 ] = xx [
267 ] + xx [ 14 ] * xx [ 39 ] ; xx [ 265 ] = xx [ 268 ] + xx [ 14 ] * xx [ 48
] ; xx [ 266 ] = xx [ 269 ] - xx [ 14 ] ; pm_math_quatInverseXform ( xx + 76
, xx + 264 , xx + 267 ) ; xx [ 594 ] = xx [ 203 ] ; xx [ 595 ] = xx [ 300 ] ;
xx [ 596 ] = xx [ 376 ] ; xx [ 597 ] = xx [ 204 ] ; xx [ 598 ] = xx [ 297 ] ;
xx [ 599 ] = xx [ 301 ] ; pm_math_cross3 ( xx + 264 , xx + 310 , xx + 636 ) ;
xx [ 264 ] = xx [ 584 ] + xx [ 14 ] * xx [ 324 ] + xx [ 636 ] ; xx [ 265 ] =
xx [ 585 ] - xx [ 14 ] * xx [ 325 ] + xx [ 637 ] ; xx [ 266 ] = xx [ 586 ] -
xx [ 14 ] * xx [ 348 ] + xx [ 638 ] ; pm_math_quatInverseXform ( xx + 76 , xx
+ 264 , xx + 584 ) ; xx [ 14 ] = xx [ 365 ] + pm_math_dot3 ( xx + 594 , xx +
267 ) + pm_math_dot3 ( xx + 597 , xx + 584 ) ; xx [ 264 ] = xx [ 267 ] + xx [
14 ] ; xx [ 265 ] = xx [ 268 ] - xx [ 14 ] * xx [ 63 ] ; xx [ 266 ] = xx [
269 ] - xx [ 14 ] * xx [ 71 ] ; pm_math_quatInverseXform ( xx + 143 , xx +
264 , xx + 267 ) ; xx [ 636 ] = xx [ 234 ] ; xx [ 637 ] = xx [ 289 ] ; xx [
638 ] = xx [ 290 ] ; xx [ 28 ] = xx [ 584 ] + xx [ 14 ] * xx [ 270 ] ;
pm_math_cross3 ( xx + 264 , xx + 306 , xx + 639 ) ; xx [ 36 ] = xx [ 585 ] +
xx [ 14 ] * xx [ 294 ] ; xx [ 37 ] = xx [ 586 ] + xx [ 14 ] * xx [ 295 ] ; xx
[ 584 ] = xx [ 28 ] + xx [ 639 ] ; xx [ 585 ] = xx [ 36 ] + xx [ 640 ] ; xx [
586 ] = xx [ 37 ] + xx [ 641 ] ; pm_math_quatInverseXform ( xx + 143 , xx +
584 , xx + 639 ) ; xx [ 14 ] = xx [ 247 ] - ( pm_math_dot3 ( xx + 198 , xx +
267 ) + pm_math_dot3 ( xx + 636 , xx + 639 ) ) ; xx [ 584 ] = - xx [ 214 ] ;
xx [ 585 ] = - xx [ 231 ] ; xx [ 586 ] = - ( xx [ 193 ] / xx [ 190 ] ) ; xx [
642 ] = xx [ 267 ] + xx [ 135 ] * xx [ 14 ] ; xx [ 643 ] = xx [ 268 ] + xx [
137 ] * xx [ 14 ] ; xx [ 644 ] = xx [ 269 ] + xx [ 138 ] * xx [ 14 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 642 , xx + 267 ) ; xx [ 645 ] = xx
[ 217 ] ; xx [ 646 ] = - xx [ 229 ] ; xx [ 647 ] = xx [ 232 ] ;
pm_math_cross3 ( xx + 642 , xx + 161 , xx + 648 ) ; xx [ 642 ] = xx [ 639 ] -
xx [ 134 ] * xx [ 14 ] + xx [ 648 ] ; xx [ 643 ] = xx [ 640 ] + xx [ 139 ] *
xx [ 14 ] + xx [ 649 ] ; xx [ 644 ] = xx [ 641 ] - xx [ 142 ] * xx [ 14 ] +
xx [ 650 ] ; pm_math_quatInverseXform ( xx + 151 , xx + 642 , xx + 639 ) ; xx
[ 648 ] = xx [ 285 ] ; xx [ 649 ] = xx [ 283 ] ; xx [ 650 ] = xx [ 303 ] ; xx
[ 651 ] = xx [ 248 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 264 , xx +
642 ) ; pm_math_cross3 ( xx + 264 , xx + 314 , xx + 652 ) ; xx [ 264 ] = xx [
28 ] + xx [ 652 ] ; xx [ 265 ] = xx [ 36 ] + xx [ 653 ] ; xx [ 266 ] = xx [
37 ] + xx [ 654 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 264 , xx + 652
) ; xx [ 28 ] = xx [ 156 ] + xx [ 168 ] + xx [ 171 ] ; xx [ 36 ] = xx [ 178 ]
+ xx [ 187 ] ; xx [ 37 ] = xx [ 36 ] / xx [ 190 ] ; xx [ 264 ] = - ( xx [ 173
] * xx [ 37 ] ) ; xx [ 265 ] = - ( xx [ 192 ] * xx [ 37 ] ) ; xx [ 266 ] = -
( xx [ 193 ] * xx [ 37 ] ) ; pm_math_quatXform ( xx + 151 , xx + 264 , xx +
655 ) ; xx [ 264 ] = xx [ 194 ] * xx [ 37 ] ; xx [ 265 ] = - ( xx [ 195 ] *
xx [ 37 ] ) ; xx [ 266 ] = xx [ 196 ] * xx [ 37 ] ; pm_math_quatXform ( xx +
151 , xx + 264 , xx + 658 ) ; pm_math_cross3 ( xx + 161 , xx + 658 , xx + 264
) ; xx [ 203 ] = xx [ 655 ] + xx [ 264 ] ; xx [ 204 ] = xx [ 656 ] + xx [ 265
] ; xx [ 214 ] = xx [ 657 ] + xx [ 266 ] ; xx [ 264 ] = xx [ 203 ] ; xx [ 265
] = xx [ 204 ] ; xx [ 266 ] = xx [ 214 ] ; xx [ 217 ] = ( xx [ 28 ] - (
pm_math_dot3 ( xx + 147 , xx + 264 ) + pm_math_dot3 ( xx + 164 , xx + 658 ) )
) / xx [ 272 ] ; xx [ 229 ] = xx [ 110 ] * ( xx [ 248 ] * xx [ 284 ] + xx [
92 ] * xx [ 285 ] ) + xx [ 110 ] * ( xx [ 248 ] * xx [ 90 ] + xx [ 84 ] * xx
[ 285 ] ) ; xx [ 231 ] = xx [ 229 ] / xx [ 288 ] ; xx [ 232 ] = xx [ 305 ] *
xx [ 231 ] ; xx [ 234 ] = xx [ 93 ] * xx [ 232 ] ; xx [ 247 ] = xx [ 232 ] *
xx [ 283 ] ; xx [ 264 ] = ( xx [ 234 ] * xx [ 285 ] - xx [ 248 ] * xx [ 247 ]
) * xx [ 110 ] ; xx [ 265 ] = xx [ 110 ] * ( xx [ 247 ] * xx [ 285 ] + xx [
248 ] * xx [ 234 ] ) ; xx [ 266 ] = xx [ 232 ] - ( xx [ 247 ] * xx [ 283 ] +
xx [ 93 ] * xx [ 234 ] ) * xx [ 110 ] ; xx [ 655 ] = - xx [ 264 ] ; xx [ 656
] = - xx [ 265 ] ; xx [ 657 ] = xx [ 266 ] ; pm_math_cross3 ( xx + 314 , xx +
655 , xx + 661 ) ; xx [ 232 ] = xx [ 108 ] * xx [ 231 ] ; xx [ 234 ] = xx [
248 ] * xx [ 232 ] ; xx [ 247 ] = xx [ 232 ] * xx [ 283 ] ; xx [ 655 ] = xx [
203 ] + xx [ 250 ] * xx [ 217 ] ; xx [ 656 ] = xx [ 204 ] + xx [ 251 ] * xx [
217 ] ; xx [ 657 ] = xx [ 214 ] + xx [ 235 ] * xx [ 217 ] ; pm_math_quatXform
( xx + 143 , xx + 655 , xx + 664 ) ; xx [ 655 ] = xx [ 658 ] + xx [ 237 ] *
xx [ 217 ] ; xx [ 656 ] = xx [ 659 ] + xx [ 286 ] * xx [ 217 ] ; xx [ 657 ] =
xx [ 660 ] + xx [ 271 ] * xx [ 217 ] ; pm_math_quatXform ( xx + 143 , xx +
655 , xx + 658 ) ; pm_math_cross3 ( xx + 306 , xx + 658 , xx + 655 ) ; xx [
203 ] = xx [ 661 ] - xx [ 110 ] * ( xx [ 234 ] * xx [ 285 ] + xx [ 93 ] * xx
[ 247 ] ) + xx [ 664 ] + xx [ 655 ] ; xx [ 204 ] = xx [ 232 ] - ( xx [ 248 ]
* xx [ 234 ] + xx [ 247 ] * xx [ 283 ] ) * xx [ 110 ] + xx [ 662 ] + xx [ 665
] + xx [ 656 ] ; xx [ 214 ] = xx [ 663 ] - ( xx [ 93 ] * xx [ 234 ] - xx [
247 ] * xx [ 285 ] ) * xx [ 110 ] + xx [ 666 ] + xx [ 657 ] ; xx [ 232 ] = xx
[ 658 ] - xx [ 264 ] ; xx [ 234 ] = xx [ 659 ] - xx [ 265 ] ; xx [ 247 ] = xx
[ 266 ] + xx [ 660 ] ; xx [ 264 ] = xx [ 232 ] ; xx [ 265 ] = xx [ 234 ] ; xx
[ 266 ] = xx [ 247 ] ; xx [ 289 ] = ( xx [ 204 ] * xx [ 63 ] - xx [ 203 ] +
xx [ 214 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 264 ) ) / xx [ 364 ]
; xx [ 264 ] = xx [ 203 ] - xx [ 296 ] * xx [ 289 ] ; xx [ 265 ] = xx [ 204 ]
- xx [ 317 ] * xx [ 289 ] ; xx [ 266 ] = xx [ 214 ] - xx [ 83 ] * xx [ 289 ]
; pm_math_quatXform ( xx + 76 , xx + 264 , xx + 655 ) ; xx [ 264 ] = xx [ 232
] - xx [ 321 ] * xx [ 289 ] ; xx [ 265 ] = xx [ 234 ] - xx [ 366 ] * xx [ 289
] ; xx [ 266 ] = xx [ 247 ] - xx [ 363 ] * xx [ 289 ] ; pm_math_quatXform (
xx + 76 , xx + 264 , xx + 658 ) ; pm_math_cross3 ( xx + 310 , xx + 658 , xx +
264 ) ; xx [ 203 ] = xx [ 655 ] + xx [ 264 ] ; xx [ 204 ] = xx [ 657 ] + xx [
266 ] ; xx [ 214 ] = xx [ 656 ] + xx [ 265 ] ; xx [ 232 ] = ( xx [ 204 ] - (
xx [ 203 ] * xx [ 39 ] + xx [ 214 ] * xx [ 48 ] ) + pm_math_dot3 ( xx + 351 ,
xx + 658 ) ) / xx [ 504 ] ; xx [ 264 ] = xx [ 203 ] - xx [ 349 ] * xx [ 232 ]
; xx [ 265 ] = xx [ 214 ] - xx [ 52 ] * xx [ 232 ] ; xx [ 266 ] = xx [ 204 ]
- xx [ 370 ] * xx [ 232 ] ; pm_math_quatXform ( xx + 53 , xx + 264 , xx + 655
) ; xx [ 264 ] = xx [ 658 ] - xx [ 387 ] * xx [ 232 ] ; xx [ 265 ] = xx [ 659
] - xx [ 388 ] * xx [ 232 ] ; xx [ 266 ] = xx [ 660 ] - xx [ 448 ] * xx [ 232
] ; pm_math_quatXform ( xx + 53 , xx + 264 , xx + 658 ) ; pm_math_cross3 ( xx
+ 528 , xx + 658 , xx + 264 ) ; xx [ 203 ] = xx [ 655 ] + xx [ 264 ] ; xx [
204 ] = xx [ 656 ] + xx [ 265 ] ; xx [ 214 ] = xx [ 657 ] + xx [ 266 ] ; xx [
264 ] = xx [ 203 ] ; xx [ 265 ] = xx [ 204 ] ; xx [ 266 ] = xx [ 214 ] ; xx [
234 ] = ( pm_math_dot3 ( xx + 556 , xx + 264 ) + xx [ 386 ] * xx [ 659 ] - xx
[ 541 ] * xx [ 660 ] ) / xx [ 582 ] ; xx [ 264 ] = xx [ 203 ] - xx [ 544 ] *
xx [ 234 ] ; xx [ 265 ] = xx [ 204 ] - xx [ 542 ] * xx [ 234 ] ; xx [ 266 ] =
xx [ 214 ] - xx [ 546 ] * xx [ 234 ] ; pm_math_quatXform ( xx + 29 , xx + 264
, xx + 655 ) ; xx [ 264 ] = xx [ 658 ] - xx [ 197 ] * xx [ 234 ] ; xx [ 265 ]
= xx [ 659 ] - xx [ 579 ] * xx [ 234 ] ; xx [ 266 ] = xx [ 660 ] - xx [ 581 ]
* xx [ 234 ] ; pm_math_quatXform ( xx + 29 , xx + 264 , xx + 658 ) ;
pm_math_cross3 ( xx + 531 , xx + 658 , xx + 264 ) ; xx [ 661 ] = xx [ 655 ] +
xx [ 264 ] ; xx [ 662 ] = xx [ 656 ] + xx [ 265 ] ; xx [ 663 ] = xx [ 657 ] +
xx [ 266 ] ; xx [ 203 ] = ( pm_math_dot3 ( xx + 3 , xx + 661 ) + pm_math_dot3
( xx + 575 , xx + 658 ) ) / xx [ 13 ] ; xx [ 264 ] = xx [ 0 ] * xx [ 203 ] ;
xx [ 265 ] = - ( xx [ 1 ] * xx [ 203 ] ) ; xx [ 266 ] = xx [ 2 ] * xx [ 203 ]
; pm_math_quatInverseXform ( xx + 29 , xx + 264 , xx + 655 ) ; pm_math_cross3
( xx + 264 , xx + 531 , xx + 658 ) ; xx [ 264 ] = xx [ 658 ] + xx [ 534 ] *
xx [ 203 ] ; xx [ 265 ] = xx [ 659 ] + xx [ 560 ] * xx [ 203 ] ; xx [ 266 ] =
xx [ 660 ] + xx [ 561 ] * xx [ 203 ] ; pm_math_quatInverseXform ( xx + 29 ,
xx + 264 , xx + 658 ) ; xx [ 203 ] = xx [ 234 ] + pm_math_dot3 ( xx + 373 ,
xx + 655 ) + pm_math_dot3 ( xx + 562 , xx + 658 ) ; xx [ 264 ] = xx [ 655 ] +
xx [ 203 ] * xx [ 21 ] ; xx [ 265 ] = xx [ 656 ] - xx [ 203 ] * xx [ 23 ] ;
xx [ 266 ] = xx [ 657 ] - xx [ 203 ] * xx [ 24 ] ; pm_math_quatInverseXform (
xx + 53 , xx + 264 , xx + 655 ) ; pm_math_cross3 ( xx + 264 , xx + 528 , xx +
661 ) ; xx [ 264 ] = xx [ 658 ] + xx [ 661 ] ; xx [ 265 ] = xx [ 659 ] - xx [
203 ] * xx [ 386 ] + xx [ 662 ] ; xx [ 266 ] = xx [ 660 ] + xx [ 203 ] * xx [
541 ] + xx [ 663 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 264 , xx + 658
) ; xx [ 203 ] = xx [ 232 ] + pm_math_dot3 ( xx + 591 , xx + 655 ) +
pm_math_dot3 ( xx + 535 , xx + 658 ) ; xx [ 264 ] = xx [ 655 ] + xx [ 203 ] *
xx [ 39 ] ; xx [ 265 ] = xx [ 656 ] + xx [ 203 ] * xx [ 48 ] ; xx [ 266 ] =
xx [ 657 ] - xx [ 203 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 264 , xx
+ 655 ) ; pm_math_cross3 ( xx + 264 , xx + 310 , xx + 661 ) ; xx [ 264 ] = xx
[ 658 ] + xx [ 203 ] * xx [ 324 ] + xx [ 661 ] ; xx [ 265 ] = xx [ 659 ] - xx
[ 203 ] * xx [ 325 ] + xx [ 662 ] ; xx [ 266 ] = xx [ 660 ] - xx [ 203 ] * xx
[ 348 ] + xx [ 663 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 264 , xx +
658 ) ; xx [ 203 ] = xx [ 289 ] + pm_math_dot3 ( xx + 594 , xx + 655 ) +
pm_math_dot3 ( xx + 597 , xx + 658 ) ; xx [ 264 ] = xx [ 655 ] + xx [ 203 ] ;
xx [ 265 ] = xx [ 656 ] - xx [ 203 ] * xx [ 63 ] ; xx [ 266 ] = xx [ 657 ] -
xx [ 203 ] * xx [ 71 ] ; pm_math_quatInverseXform ( xx + 143 , xx + 264 , xx
+ 655 ) ; xx [ 204 ] = xx [ 658 ] + xx [ 203 ] * xx [ 270 ] ; pm_math_cross3
( xx + 264 , xx + 306 , xx + 661 ) ; xx [ 214 ] = xx [ 659 ] + xx [ 203 ] *
xx [ 294 ] ; xx [ 232 ] = xx [ 660 ] + xx [ 203 ] * xx [ 295 ] ; xx [ 658 ] =
xx [ 204 ] + xx [ 661 ] ; xx [ 659 ] = xx [ 214 ] + xx [ 662 ] ; xx [ 660 ] =
xx [ 232 ] + xx [ 663 ] ; pm_math_quatInverseXform ( xx + 143 , xx + 658 , xx
+ 661 ) ; xx [ 203 ] = xx [ 217 ] - ( pm_math_dot3 ( xx + 198 , xx + 655 ) +
pm_math_dot3 ( xx + 636 , xx + 661 ) ) ; xx [ 658 ] = xx [ 655 ] + xx [ 135 ]
* xx [ 203 ] ; xx [ 659 ] = xx [ 656 ] + xx [ 137 ] * xx [ 203 ] ; xx [ 660 ]
= xx [ 657 ] + xx [ 138 ] * xx [ 203 ] ; pm_math_quatInverseXform ( xx + 151
, xx + 658 , xx + 655 ) ; pm_math_cross3 ( xx + 658 , xx + 161 , xx + 664 ) ;
xx [ 658 ] = xx [ 661 ] - xx [ 134 ] * xx [ 203 ] + xx [ 664 ] ; xx [ 659 ] =
xx [ 662 ] + xx [ 139 ] * xx [ 203 ] + xx [ 665 ] ; xx [ 660 ] = xx [ 663 ] -
xx [ 142 ] * xx [ 203 ] + xx [ 666 ] ; pm_math_quatInverseXform ( xx + 151 ,
xx + 658 , xx + 661 ) ; xx [ 217 ] = xx [ 37 ] - ( pm_math_dot3 ( xx + 584 ,
xx + 655 ) + pm_math_dot3 ( xx + 645 , xx + 661 ) ) ;
pm_math_quatInverseXform ( xx + 648 , xx + 264 , xx + 655 ) ; pm_math_cross3
( xx + 264 , xx + 314 , xx + 657 ) ; xx [ 264 ] = xx [ 204 ] + xx [ 657 ] ;
xx [ 265 ] = xx [ 214 ] + xx [ 658 ] ; xx [ 266 ] = xx [ 232 ] + xx [ 659 ] ;
pm_math_quatInverseXform ( xx + 648 , xx + 264 , xx + 657 ) ; xx [ 37 ] = xx
[ 445 ] * xx [ 656 ] + xx [ 505 ] * xx [ 659 ] - xx [ 231 ] ; xx [ 204 ] = xx
[ 150 ] * xx [ 203 ] + xx [ 189 ] * xx [ 217 ] + xx [ 37 ] * xx [ 273 ] ; xx
[ 155 ] = xx [ 157 ] + xx [ 169 ] + xx [ 172 ] ; xx [ 156 ] = xx [ 179 ] + xx
[ 188 ] ; xx [ 157 ] = xx [ 156 ] / xx [ 190 ] ; xx [ 167 ] = - ( xx [ 173 ]
* xx [ 157 ] ) ; xx [ 168 ] = - ( xx [ 192 ] * xx [ 157 ] ) ; xx [ 169 ] = -
( xx [ 193 ] * xx [ 157 ] ) ; pm_math_quatXform ( xx + 151 , xx + 167 , xx +
170 ) ; xx [ 167 ] = xx [ 194 ] * xx [ 157 ] ; xx [ 168 ] = - ( xx [ 195 ] *
xx [ 157 ] ) ; xx [ 169 ] = xx [ 196 ] * xx [ 157 ] ; pm_math_quatXform ( xx
+ 151 , xx + 167 , xx + 177 ) ; pm_math_cross3 ( xx + 161 , xx + 177 , xx +
167 ) ; xx [ 186 ] = xx [ 170 ] + xx [ 167 ] ; xx [ 187 ] = xx [ 171 ] + xx [
168 ] ; xx [ 167 ] = xx [ 172 ] + xx [ 169 ] ; xx [ 168 ] = xx [ 186 ] ; xx [
169 ] = xx [ 187 ] ; xx [ 170 ] = xx [ 167 ] ; xx [ 171 ] = ( xx [ 155 ] - (
pm_math_dot3 ( xx + 147 , xx + 168 ) + pm_math_dot3 ( xx + 164 , xx + 177 ) )
) / xx [ 272 ] ; xx [ 168 ] = 0.021844 ; xx [ 169 ] = xx [ 93 ] * xx [ 90 ] ;
xx [ 170 ] = xx [ 168 ] - ( ( xx [ 92 ] * xx [ 283 ] + xx [ 93 ] * xx [ 284 ]
) * xx [ 110 ] + ( xx [ 84 ] * xx [ 283 ] + xx [ 169 ] ) * xx [ 110 ] ) ; xx
[ 84 ] = xx [ 170 ] / xx [ 288 ] ; xx [ 92 ] = xx [ 108 ] * xx [ 84 ] ; xx [
172 ] = xx [ 248 ] * xx [ 92 ] ; xx [ 188 ] = xx [ 92 ] * xx [ 283 ] ; xx [
214 ] = xx [ 305 ] * xx [ 84 ] ; xx [ 231 ] = xx [ 214 ] * xx [ 283 ] ; xx [
232 ] = xx [ 93 ] * xx [ 214 ] ; xx [ 234 ] = ( xx [ 248 ] * xx [ 231 ] - xx
[ 232 ] * xx [ 285 ] ) * xx [ 110 ] ; xx [ 247 ] = xx [ 110 ] * ( xx [ 231 ]
* xx [ 285 ] + xx [ 248 ] * xx [ 232 ] ) ; xx [ 264 ] = ( xx [ 231 ] * xx [
283 ] + xx [ 93 ] * xx [ 232 ] ) * xx [ 110 ] - xx [ 214 ] ; xx [ 655 ] = -
xx [ 234 ] ; xx [ 656 ] = xx [ 247 ] ; xx [ 657 ] = xx [ 264 ] ;
pm_math_cross3 ( xx + 314 , xx + 655 , xx + 658 ) ; xx [ 655 ] = xx [ 186 ] +
xx [ 250 ] * xx [ 171 ] ; xx [ 656 ] = xx [ 187 ] + xx [ 251 ] * xx [ 171 ] ;
xx [ 657 ] = xx [ 167 ] + xx [ 235 ] * xx [ 171 ] ; pm_math_quatXform ( xx +
143 , xx + 655 , xx + 661 ) ; xx [ 655 ] = xx [ 177 ] + xx [ 237 ] * xx [ 171
] ; xx [ 656 ] = xx [ 178 ] + xx [ 286 ] * xx [ 171 ] ; xx [ 657 ] = xx [ 179
] + xx [ 271 ] * xx [ 171 ] ; pm_math_quatXform ( xx + 143 , xx + 655 , xx +
177 ) ; pm_math_cross3 ( xx + 306 , xx + 177 , xx + 655 ) ; xx [ 167 ] = xx [
110 ] * ( xx [ 172 ] * xx [ 285 ] + xx [ 93 ] * xx [ 188 ] ) + xx [ 658 ] +
xx [ 661 ] + xx [ 655 ] ; xx [ 186 ] = ( xx [ 248 ] * xx [ 172 ] + xx [ 188 ]
* xx [ 283 ] ) * xx [ 110 ] - xx [ 92 ] + xx [ 659 ] + xx [ 662 ] + xx [ 656
] ; xx [ 92 ] = xx [ 660 ] - ( xx [ 188 ] * xx [ 285 ] - xx [ 93 ] * xx [ 172
] ) * xx [ 110 ] + xx [ 663 ] + xx [ 657 ] ; xx [ 93 ] = xx [ 177 ] - xx [
234 ] ; xx [ 172 ] = xx [ 247 ] + xx [ 178 ] ; xx [ 177 ] = xx [ 264 ] + xx [
179 ] ; xx [ 264 ] = xx [ 93 ] ; xx [ 265 ] = xx [ 172 ] ; xx [ 266 ] = xx [
177 ] ; xx [ 178 ] = ( xx [ 186 ] * xx [ 63 ] - xx [ 167 ] + xx [ 92 ] * xx [
71 ] + pm_math_dot3 ( xx + 345 , xx + 264 ) ) / xx [ 364 ] ; xx [ 264 ] = xx
[ 167 ] - xx [ 296 ] * xx [ 178 ] ; xx [ 265 ] = xx [ 186 ] - xx [ 317 ] * xx
[ 178 ] ; xx [ 266 ] = xx [ 92 ] - xx [ 83 ] * xx [ 178 ] ; pm_math_quatXform
( xx + 76 , xx + 264 , xx + 186 ) ; xx [ 264 ] = xx [ 93 ] - xx [ 321 ] * xx
[ 178 ] ; xx [ 265 ] = xx [ 172 ] - xx [ 366 ] * xx [ 178 ] ; xx [ 266 ] = xx
[ 177 ] - xx [ 363 ] * xx [ 178 ] ; pm_math_quatXform ( xx + 76 , xx + 264 ,
xx + 655 ) ; pm_math_cross3 ( xx + 310 , xx + 655 , xx + 264 ) ; xx [ 92 ] =
xx [ 186 ] + xx [ 264 ] ; xx [ 93 ] = xx [ 188 ] + xx [ 266 ] ; xx [ 167 ] =
xx [ 187 ] + xx [ 265 ] ; xx [ 172 ] = ( xx [ 93 ] - ( xx [ 92 ] * xx [ 39 ]
+ xx [ 167 ] * xx [ 48 ] ) + pm_math_dot3 ( xx + 351 , xx + 655 ) ) / xx [
504 ] ; xx [ 186 ] = xx [ 92 ] - xx [ 349 ] * xx [ 172 ] ; xx [ 187 ] = xx [
167 ] - xx [ 52 ] * xx [ 172 ] ; xx [ 188 ] = xx [ 93 ] - xx [ 370 ] * xx [
172 ] ; pm_math_quatXform ( xx + 53 , xx + 186 , xx + 264 ) ; xx [ 186 ] = xx
[ 655 ] - xx [ 387 ] * xx [ 172 ] ; xx [ 187 ] = xx [ 656 ] - xx [ 388 ] * xx
[ 172 ] ; xx [ 188 ] = xx [ 657 ] - xx [ 448 ] * xx [ 172 ] ;
pm_math_quatXform ( xx + 53 , xx + 186 , xx + 655 ) ; pm_math_cross3 ( xx +
528 , xx + 655 , xx + 186 ) ; xx [ 92 ] = xx [ 264 ] + xx [ 186 ] ; xx [ 93 ]
= xx [ 265 ] + xx [ 187 ] ; xx [ 167 ] = xx [ 266 ] + xx [ 188 ] ; xx [ 186 ]
= xx [ 92 ] ; xx [ 187 ] = xx [ 93 ] ; xx [ 188 ] = xx [ 167 ] ; xx [ 177 ] =
( pm_math_dot3 ( xx + 556 , xx + 186 ) + xx [ 386 ] * xx [ 656 ] - xx [ 541 ]
* xx [ 657 ] ) / xx [ 582 ] ; xx [ 186 ] = xx [ 92 ] - xx [ 544 ] * xx [ 177
] ; xx [ 187 ] = xx [ 93 ] - xx [ 542 ] * xx [ 177 ] ; xx [ 188 ] = xx [ 167
] - xx [ 546 ] * xx [ 177 ] ; pm_math_quatXform ( xx + 29 , xx + 186 , xx +
264 ) ; xx [ 186 ] = xx [ 655 ] - xx [ 197 ] * xx [ 177 ] ; xx [ 187 ] = xx [
656 ] - xx [ 579 ] * xx [ 177 ] ; xx [ 188 ] = xx [ 657 ] - xx [ 581 ] * xx [
177 ] ; pm_math_quatXform ( xx + 29 , xx + 186 , xx + 655 ) ; pm_math_cross3
( xx + 531 , xx + 655 , xx + 186 ) ; xx [ 658 ] = xx [ 264 ] + xx [ 186 ] ;
xx [ 659 ] = xx [ 265 ] + xx [ 187 ] ; xx [ 660 ] = xx [ 266 ] + xx [ 188 ] ;
xx [ 92 ] = ( pm_math_dot3 ( xx + 3 , xx + 658 ) + pm_math_dot3 ( xx + 575 ,
xx + 655 ) ) / xx [ 13 ] ; xx [ 186 ] = xx [ 0 ] * xx [ 92 ] ; xx [ 187 ] = -
( xx [ 1 ] * xx [ 92 ] ) ; xx [ 188 ] = xx [ 2 ] * xx [ 92 ] ;
pm_math_quatInverseXform ( xx + 29 , xx + 186 , xx + 264 ) ; pm_math_cross3 (
xx + 186 , xx + 531 , xx + 655 ) ; xx [ 186 ] = xx [ 655 ] + xx [ 534 ] * xx
[ 92 ] ; xx [ 187 ] = xx [ 656 ] + xx [ 560 ] * xx [ 92 ] ; xx [ 188 ] = xx [
657 ] + xx [ 561 ] * xx [ 92 ] ; pm_math_quatInverseXform ( xx + 29 , xx +
186 , xx + 655 ) ; xx [ 92 ] = xx [ 177 ] + pm_math_dot3 ( xx + 373 , xx +
264 ) + pm_math_dot3 ( xx + 562 , xx + 655 ) ; xx [ 186 ] = xx [ 264 ] + xx [
92 ] * xx [ 21 ] ; xx [ 187 ] = xx [ 265 ] - xx [ 92 ] * xx [ 23 ] ; xx [ 188
] = xx [ 266 ] - xx [ 92 ] * xx [ 24 ] ; pm_math_quatInverseXform ( xx + 53 ,
xx + 186 , xx + 264 ) ; pm_math_cross3 ( xx + 186 , xx + 528 , xx + 658 ) ;
xx [ 186 ] = xx [ 655 ] + xx [ 658 ] ; xx [ 187 ] = xx [ 656 ] - xx [ 92 ] *
xx [ 386 ] + xx [ 659 ] ; xx [ 188 ] = xx [ 657 ] + xx [ 92 ] * xx [ 541 ] +
xx [ 660 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 186 , xx + 655 ) ; xx
[ 92 ] = xx [ 172 ] + pm_math_dot3 ( xx + 591 , xx + 264 ) + pm_math_dot3 (
xx + 535 , xx + 655 ) ; xx [ 186 ] = xx [ 264 ] + xx [ 92 ] * xx [ 39 ] ; xx
[ 187 ] = xx [ 265 ] + xx [ 92 ] * xx [ 48 ] ; xx [ 188 ] = xx [ 266 ] - xx [
92 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 186 , xx + 264 ) ;
pm_math_cross3 ( xx + 186 , xx + 310 , xx + 658 ) ; xx [ 186 ] = xx [ 655 ] +
xx [ 92 ] * xx [ 324 ] + xx [ 658 ] ; xx [ 187 ] = xx [ 656 ] - xx [ 92 ] *
xx [ 325 ] + xx [ 659 ] ; xx [ 188 ] = xx [ 657 ] - xx [ 92 ] * xx [ 348 ] +
xx [ 660 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 186 , xx + 655 ) ; xx
[ 92 ] = xx [ 178 ] + pm_math_dot3 ( xx + 594 , xx + 264 ) + pm_math_dot3 (
xx + 597 , xx + 655 ) ; xx [ 177 ] = xx [ 264 ] + xx [ 92 ] ; xx [ 178 ] = xx
[ 265 ] - xx [ 92 ] * xx [ 63 ] ; xx [ 179 ] = xx [ 266 ] - xx [ 92 ] * xx [
71 ] ; pm_math_quatInverseXform ( xx + 143 , xx + 177 , xx + 186 ) ; xx [ 93
] = xx [ 655 ] + xx [ 92 ] * xx [ 270 ] ; pm_math_cross3 ( xx + 177 , xx +
306 , xx + 264 ) ; xx [ 167 ] = xx [ 656 ] + xx [ 92 ] * xx [ 294 ] ; xx [
172 ] = xx [ 657 ] + xx [ 92 ] * xx [ 295 ] ; xx [ 655 ] = xx [ 93 ] + xx [
264 ] ; xx [ 656 ] = xx [ 167 ] + xx [ 265 ] ; xx [ 657 ] = xx [ 172 ] + xx [
266 ] ; pm_math_quatInverseXform ( xx + 143 , xx + 655 , xx + 264 ) ; xx [ 92
] = xx [ 171 ] - ( pm_math_dot3 ( xx + 198 , xx + 186 ) + pm_math_dot3 ( xx +
636 , xx + 264 ) ) ; xx [ 655 ] = xx [ 186 ] + xx [ 135 ] * xx [ 92 ] ; xx [
656 ] = xx [ 187 ] + xx [ 137 ] * xx [ 92 ] ; xx [ 657 ] = xx [ 188 ] + xx [
138 ] * xx [ 92 ] ; pm_math_quatInverseXform ( xx + 151 , xx + 655 , xx + 186
) ; pm_math_cross3 ( xx + 655 , xx + 161 , xx + 658 ) ; xx [ 655 ] = xx [ 264
] - xx [ 134 ] * xx [ 92 ] + xx [ 658 ] ; xx [ 656 ] = xx [ 265 ] + xx [ 139
] * xx [ 92 ] + xx [ 659 ] ; xx [ 657 ] = xx [ 266 ] - xx [ 142 ] * xx [ 92 ]
+ xx [ 660 ] ; pm_math_quatInverseXform ( xx + 151 , xx + 655 , xx + 264 ) ;
xx [ 171 ] = xx [ 157 ] - ( pm_math_dot3 ( xx + 584 , xx + 186 ) +
pm_math_dot3 ( xx + 645 , xx + 264 ) ) ; pm_math_quatInverseXform ( xx + 648
, xx + 177 , xx + 186 ) ; pm_math_cross3 ( xx + 177 , xx + 314 , xx + 264 ) ;
xx [ 177 ] = xx [ 93 ] + xx [ 264 ] ; xx [ 178 ] = xx [ 167 ] + xx [ 265 ] ;
xx [ 179 ] = xx [ 172 ] + xx [ 266 ] ; pm_math_quatInverseXform ( xx + 648 ,
xx + 177 , xx + 264 ) ; xx [ 93 ] = xx [ 84 ] + xx [ 445 ] * xx [ 187 ] + xx
[ 505 ] * xx [ 266 ] ; xx [ 84 ] = xx [ 150 ] * xx [ 92 ] + xx [ 189 ] * xx [
171 ] + xx [ 93 ] * xx [ 273 ] ; xx [ 157 ] = xx [ 129 ] / xx [ 287 ] ; xx [
167 ] = xx [ 108 ] * xx [ 157 ] ; xx [ 172 ] = xx [ 97 ] * xx [ 167 ] ; xx [
177 ] = xx [ 167 ] * xx [ 94 ] ; xx [ 178 ] = xx [ 305 ] * xx [ 157 ] ; xx [
179 ] = xx [ 178 ] * xx [ 94 ] ; xx [ 186 ] = xx [ 95 ] * xx [ 178 ] ; xx [
187 ] = ( xx [ 97 ] * xx [ 179 ] - xx [ 186 ] * xx [ 85 ] ) * xx [ 110 ] ; xx
[ 188 ] = xx [ 110 ] * ( xx [ 179 ] * xx [ 85 ] + xx [ 97 ] * xx [ 186 ] ) ;
xx [ 214 ] = ( xx [ 179 ] * xx [ 94 ] + xx [ 95 ] * xx [ 186 ] ) * xx [ 110 ]
- xx [ 178 ] ; xx [ 264 ] = - xx [ 187 ] ; xx [ 265 ] = xx [ 188 ] ; xx [ 266
] = xx [ 214 ] ; pm_math_cross3 ( xx + 121 , xx + 264 , xx + 655 ) ;
pm_math_quatCompose ( xx + 395 , xx + 420 , xx + 658 ) ; xx [ 264 ] = -
4.559435129625173e-3 ; xx [ 265 ] = - 3.429673746578889e-5 ; xx [ 266 ] =
7.043914177709156e-3 ; pm_math_quatXform ( xx + 658 , xx + 264 , xx + 662 ) ;
xx [ 178 ] = 5.141664260146969e-4 ; xx [ 179 ] = 1.441824281745643e-4 ; xx [
186 ] = 0.029290848610832 ; xx [ 264 ] = - xx [ 178 ] ; xx [ 265 ] = xx [ 179
] ; xx [ 266 ] = - xx [ 186 ] ; pm_math_quatXform ( xx + 420 , xx + 264 , xx
+ 665 ) ; pm_math_quatXform ( xx + 395 , xx + 665 , xx + 668 ) ; xx [ 231 ] =
xx [ 662 ] + xx [ 668 ] ; xx [ 232 ] = xx [ 231 ] / xx [ 416 ] ; xx [ 671 ] =
xx [ 313 ] * xx [ 232 ] ; xx [ 672 ] = xx [ 435 ] * xx [ 232 ] ; xx [ 673 ] =
xx [ 437 ] * xx [ 232 ] ; pm_math_quatXform ( xx + 420 , xx + 671 , xx + 674
) ; xx [ 671 ] = - ( xx [ 436 ] * xx [ 232 ] ) ; xx [ 672 ] = xx [ 449 ] * xx
[ 232 ] ; xx [ 673 ] = - ( xx [ 451 ] * xx [ 232 ] ) ; pm_math_quatXform ( xx
+ 420 , xx + 671 , xx + 677 ) ; pm_math_cross3 ( xx + 462 , xx + 677 , xx +
671 ) ; xx [ 234 ] = xx [ 674 ] + xx [ 671 ] ; pm_math_quatInverseXform ( xx
+ 420 , xx + 441 , xx + 680 ) ; xx [ 683 ] = - 7.043504602604413e-3 ; xx [
684 ] = 6.155578060373999e-3 ; xx [ 685 ] = - 4.529198577839576e-3 ;
pm_math_cross3 ( xx + 680 , xx + 683 , xx + 686 ) ; pm_math_quatXform ( xx +
658 , xx + 686 , xx + 680 ) ; pm_math_cross3 ( xx + 441 , xx + 462 , xx + 686
) ; pm_math_quatXform ( xx + 395 , xx + 686 , xx + 689 ) ; pm_math_quatXform
( xx + 395 , xx + 493 , xx + 686 ) ; xx [ 247 ] = xx [ 680 ] + xx [ 689 ] +
xx [ 686 ] ; xx [ 284 ] = xx [ 675 ] + xx [ 672 ] ; xx [ 285 ] = xx [ 676 ] +
xx [ 673 ] ; xx [ 671 ] = xx [ 234 ] ; xx [ 672 ] = xx [ 284 ] ; xx [ 673 ] =
xx [ 285 ] ; xx [ 289 ] = ( xx [ 247 ] - ( pm_math_dot3 ( xx + 441 , xx + 671
) + pm_math_dot3 ( xx + 493 , xx + 677 ) ) ) / xx [ 513 ] ; xx [ 671 ] = xx [
234 ] + xx [ 499 ] * xx [ 289 ] ; xx [ 672 ] = xx [ 284 ] + xx [ 500 ] * xx [
289 ] ; xx [ 673 ] = xx [ 285 ] + xx [ 444 ] * xx [ 289 ] ; pm_math_quatXform
( xx + 395 , xx + 671 , xx + 674 ) ; xx [ 671 ] = xx [ 677 ] + xx [ 446 ] *
xx [ 289 ] ; xx [ 672 ] = xx [ 678 ] + xx [ 527 ] * xx [ 289 ] ; xx [ 673 ] =
xx [ 679 ] + xx [ 512 ] * xx [ 289 ] ; pm_math_quatXform ( xx + 395 , xx +
671 , xx + 677 ) ; pm_math_cross3 ( xx + 453 , xx + 677 , xx + 671 ) ; xx [
234 ] = xx [ 110 ] * ( xx [ 172 ] * xx [ 85 ] + xx [ 95 ] * xx [ 177 ] ) + xx
[ 655 ] + xx [ 674 ] + xx [ 671 ] ; xx [ 284 ] = ( xx [ 97 ] * xx [ 172 ] +
xx [ 177 ] * xx [ 94 ] ) * xx [ 110 ] - xx [ 167 ] + xx [ 656 ] + xx [ 675 ]
+ xx [ 672 ] ; xx [ 167 ] = xx [ 657 ] - ( xx [ 177 ] * xx [ 85 ] - xx [ 95 ]
* xx [ 172 ] ) * xx [ 110 ] + xx [ 676 ] + xx [ 673 ] ; xx [ 172 ] = xx [ 677
] - xx [ 187 ] ; xx [ 177 ] = xx [ 188 ] + xx [ 678 ] ; xx [ 187 ] = xx [ 214
] + xx [ 679 ] ; xx [ 655 ] = xx [ 172 ] ; xx [ 656 ] = xx [ 177 ] ; xx [ 657
] = xx [ 187 ] ; xx [ 188 ] = ( xx [ 284 ] * xx [ 63 ] - xx [ 234 ] + xx [
167 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 655 ) ) / xx [ 364 ] ; xx
[ 655 ] = xx [ 234 ] - xx [ 296 ] * xx [ 188 ] ; xx [ 656 ] = xx [ 284 ] - xx
[ 317 ] * xx [ 188 ] ; xx [ 657 ] = xx [ 167 ] - xx [ 83 ] * xx [ 188 ] ;
pm_math_quatXform ( xx + 76 , xx + 655 , xx + 671 ) ; xx [ 655 ] = xx [ 172 ]
- xx [ 321 ] * xx [ 188 ] ; xx [ 656 ] = xx [ 177 ] - xx [ 366 ] * xx [ 188 ]
; xx [ 657 ] = xx [ 187 ] - xx [ 363 ] * xx [ 188 ] ; pm_math_quatXform ( xx
+ 76 , xx + 655 , xx + 674 ) ; pm_math_cross3 ( xx + 310 , xx + 674 , xx +
655 ) ; xx [ 167 ] = xx [ 671 ] + xx [ 655 ] ; xx [ 172 ] = xx [ 673 ] + xx [
657 ] ; xx [ 177 ] = xx [ 672 ] + xx [ 656 ] ; xx [ 187 ] = ( xx [ 172 ] - (
xx [ 167 ] * xx [ 39 ] + xx [ 177 ] * xx [ 48 ] ) + pm_math_dot3 ( xx + 351 ,
xx + 674 ) ) / xx [ 504 ] ; xx [ 655 ] = xx [ 167 ] - xx [ 349 ] * xx [ 187 ]
; xx [ 656 ] = xx [ 177 ] - xx [ 52 ] * xx [ 187 ] ; xx [ 657 ] = xx [ 172 ]
- xx [ 370 ] * xx [ 187 ] ; pm_math_quatXform ( xx + 53 , xx + 655 , xx + 671
) ; xx [ 655 ] = xx [ 674 ] - xx [ 387 ] * xx [ 187 ] ; xx [ 656 ] = xx [ 675
] - xx [ 388 ] * xx [ 187 ] ; xx [ 657 ] = xx [ 676 ] - xx [ 448 ] * xx [ 187
] ; pm_math_quatXform ( xx + 53 , xx + 655 , xx + 674 ) ; pm_math_cross3 ( xx
+ 528 , xx + 674 , xx + 655 ) ; xx [ 167 ] = xx [ 671 ] + xx [ 655 ] ; xx [
172 ] = xx [ 672 ] + xx [ 656 ] ; xx [ 177 ] = xx [ 673 ] + xx [ 657 ] ; xx [
655 ] = xx [ 167 ] ; xx [ 656 ] = xx [ 172 ] ; xx [ 657 ] = xx [ 177 ] ; xx [
214 ] = ( pm_math_dot3 ( xx + 556 , xx + 655 ) + xx [ 386 ] * xx [ 675 ] - xx
[ 541 ] * xx [ 676 ] ) / xx [ 582 ] ; xx [ 655 ] = xx [ 167 ] - xx [ 544 ] *
xx [ 214 ] ; xx [ 656 ] = xx [ 172 ] - xx [ 542 ] * xx [ 214 ] ; xx [ 657 ] =
xx [ 177 ] - xx [ 546 ] * xx [ 214 ] ; pm_math_quatXform ( xx + 29 , xx + 655
, xx + 671 ) ; xx [ 655 ] = xx [ 674 ] - xx [ 197 ] * xx [ 214 ] ; xx [ 656 ]
= xx [ 675 ] - xx [ 579 ] * xx [ 214 ] ; xx [ 657 ] = xx [ 676 ] - xx [ 581 ]
* xx [ 214 ] ; pm_math_quatXform ( xx + 29 , xx + 655 , xx + 674 ) ;
pm_math_cross3 ( xx + 531 , xx + 674 , xx + 655 ) ; xx [ 677 ] = xx [ 671 ] +
xx [ 655 ] ; xx [ 678 ] = xx [ 672 ] + xx [ 656 ] ; xx [ 679 ] = xx [ 673 ] +
xx [ 657 ] ; xx [ 167 ] = ( pm_math_dot3 ( xx + 3 , xx + 677 ) + pm_math_dot3
( xx + 575 , xx + 674 ) ) / xx [ 13 ] ; xx [ 655 ] = xx [ 0 ] * xx [ 167 ] ;
xx [ 656 ] = - ( xx [ 1 ] * xx [ 167 ] ) ; xx [ 657 ] = xx [ 2 ] * xx [ 167 ]
; pm_math_quatInverseXform ( xx + 29 , xx + 655 , xx + 671 ) ; pm_math_cross3
( xx + 655 , xx + 531 , xx + 674 ) ; xx [ 655 ] = xx [ 674 ] + xx [ 534 ] *
xx [ 167 ] ; xx [ 656 ] = xx [ 675 ] + xx [ 560 ] * xx [ 167 ] ; xx [ 657 ] =
xx [ 676 ] + xx [ 561 ] * xx [ 167 ] ; pm_math_quatInverseXform ( xx + 29 ,
xx + 655 , xx + 674 ) ; xx [ 167 ] = xx [ 214 ] + pm_math_dot3 ( xx + 373 ,
xx + 671 ) + pm_math_dot3 ( xx + 562 , xx + 674 ) ; xx [ 655 ] = xx [ 671 ] +
xx [ 167 ] * xx [ 21 ] ; xx [ 656 ] = xx [ 672 ] - xx [ 167 ] * xx [ 23 ] ;
xx [ 657 ] = xx [ 673 ] - xx [ 167 ] * xx [ 24 ] ; pm_math_quatInverseXform (
xx + 53 , xx + 655 , xx + 671 ) ; pm_math_cross3 ( xx + 655 , xx + 528 , xx +
677 ) ; xx [ 655 ] = xx [ 674 ] + xx [ 677 ] ; xx [ 656 ] = xx [ 675 ] - xx [
167 ] * xx [ 386 ] + xx [ 678 ] ; xx [ 657 ] = xx [ 676 ] + xx [ 167 ] * xx [
541 ] + xx [ 679 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 655 , xx + 674
) ; xx [ 167 ] = xx [ 187 ] + pm_math_dot3 ( xx + 591 , xx + 671 ) +
pm_math_dot3 ( xx + 535 , xx + 674 ) ; xx [ 655 ] = xx [ 671 ] + xx [ 167 ] *
xx [ 39 ] ; xx [ 656 ] = xx [ 672 ] + xx [ 167 ] * xx [ 48 ] ; xx [ 657 ] =
xx [ 673 ] - xx [ 167 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 655 , xx
+ 671 ) ; pm_math_cross3 ( xx + 655 , xx + 310 , xx + 677 ) ; xx [ 655 ] = xx
[ 674 ] + xx [ 167 ] * xx [ 324 ] + xx [ 677 ] ; xx [ 656 ] = xx [ 675 ] - xx
[ 167 ] * xx [ 325 ] + xx [ 678 ] ; xx [ 657 ] = xx [ 676 ] - xx [ 167 ] * xx
[ 348 ] + xx [ 679 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 655 , xx +
674 ) ; xx [ 167 ] = xx [ 188 ] + pm_math_dot3 ( xx + 594 , xx + 671 ) +
pm_math_dot3 ( xx + 597 , xx + 674 ) ; xx [ 655 ] = xx [ 671 ] + xx [ 167 ] ;
xx [ 656 ] = xx [ 672 ] - xx [ 167 ] * xx [ 63 ] ; xx [ 657 ] = xx [ 673 ] -
xx [ 167 ] * xx [ 71 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 655 , xx
+ 671 ) ; xx [ 172 ] = xx [ 674 ] + xx [ 167 ] * xx [ 270 ] ; pm_math_cross3
( xx + 655 , xx + 314 , xx + 677 ) ; xx [ 177 ] = xx [ 675 ] + xx [ 167 ] *
xx [ 294 ] ; xx [ 187 ] = xx [ 676 ] + xx [ 167 ] * xx [ 295 ] ; xx [ 673 ] =
xx [ 172 ] + xx [ 677 ] ; xx [ 674 ] = xx [ 177 ] + xx [ 678 ] ; xx [ 675 ] =
xx [ 187 ] + xx [ 679 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 673 , xx
+ 676 ) ; xx [ 167 ] = xx [ 445 ] * xx [ 672 ] + xx [ 505 ] * xx [ 678 ] ;
pm_math_quatInverseXform ( xx + 143 , xx + 655 , xx + 671 ) ; pm_math_cross3
( xx + 655 , xx + 306 , xx + 674 ) ; xx [ 677 ] = xx [ 172 ] + xx [ 674 ] ;
xx [ 678 ] = xx [ 177 ] + xx [ 675 ] ; xx [ 679 ] = xx [ 187 ] + xx [ 676 ] ;
pm_math_quatInverseXform ( xx + 143 , xx + 677 , xx + 674 ) ; xx [ 188 ] =
pm_math_dot3 ( xx + 198 , xx + 671 ) + pm_math_dot3 ( xx + 636 , xx + 674 ) ;
xx [ 677 ] = xx [ 671 ] - xx [ 188 ] * xx [ 135 ] ; xx [ 678 ] = xx [ 672 ] -
xx [ 188 ] * xx [ 137 ] ; xx [ 679 ] = xx [ 673 ] - xx [ 188 ] * xx [ 138 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 677 , xx + 671 ) ; pm_math_cross3
( xx + 677 , xx + 161 , xx + 692 ) ; xx [ 677 ] = xx [ 674 ] + xx [ 188 ] *
xx [ 134 ] + xx [ 692 ] ; xx [ 678 ] = xx [ 675 ] - xx [ 188 ] * xx [ 139 ] +
xx [ 693 ] ; xx [ 679 ] = xx [ 676 ] + xx [ 188 ] * xx [ 142 ] + xx [ 694 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 677 , xx + 674 ) ; xx [ 214 ] =
pm_math_dot3 ( xx + 584 , xx + 671 ) + pm_math_dot3 ( xx + 645 , xx + 674 ) ;
xx [ 234 ] = xx [ 273 ] * xx [ 167 ] - ( xx [ 188 ] * xx [ 150 ] + xx [ 214 ]
* xx [ 189 ] ) ; xx [ 284 ] = xx [ 110 ] * ( xx [ 97 ] * xx [ 120 ] + xx [
118 ] * xx [ 85 ] ) + xx [ 110 ] * ( xx [ 97 ] * xx [ 119 ] + xx [ 127 ] * xx
[ 85 ] ) ; xx [ 285 ] = xx [ 284 ] / xx [ 287 ] ; xx [ 290 ] = xx [ 305 ] *
xx [ 285 ] ; xx [ 297 ] = xx [ 95 ] * xx [ 290 ] ; xx [ 300 ] = xx [ 290 ] *
xx [ 94 ] ; xx [ 301 ] = ( xx [ 297 ] * xx [ 85 ] - xx [ 97 ] * xx [ 300 ] )
* xx [ 110 ] ; xx [ 303 ] = xx [ 110 ] * ( xx [ 300 ] * xx [ 85 ] + xx [ 97 ]
* xx [ 297 ] ) ; xx [ 323 ] = xx [ 290 ] - ( xx [ 300 ] * xx [ 94 ] + xx [ 95
] * xx [ 297 ] ) * xx [ 110 ] ; xx [ 671 ] = - xx [ 301 ] ; xx [ 672 ] = - xx
[ 303 ] ; xx [ 673 ] = xx [ 323 ] ; pm_math_cross3 ( xx + 121 , xx + 671 , xx
+ 674 ) ; xx [ 290 ] = xx [ 108 ] * xx [ 285 ] ; xx [ 297 ] = xx [ 97 ] * xx
[ 290 ] ; xx [ 300 ] = xx [ 290 ] * xx [ 94 ] ; xx [ 365 ] = xx [ 663 ] + xx
[ 669 ] ; xx [ 367 ] = xx [ 365 ] / xx [ 416 ] ; xx [ 671 ] = xx [ 313 ] * xx
[ 367 ] ; xx [ 672 ] = xx [ 435 ] * xx [ 367 ] ; xx [ 673 ] = xx [ 437 ] * xx
[ 367 ] ; pm_math_quatXform ( xx + 420 , xx + 671 , xx + 677 ) ; xx [ 671 ] =
- ( xx [ 436 ] * xx [ 367 ] ) ; xx [ 672 ] = xx [ 449 ] * xx [ 367 ] ; xx [
673 ] = - ( xx [ 451 ] * xx [ 367 ] ) ; pm_math_quatXform ( xx + 420 , xx +
671 , xx + 692 ) ; pm_math_cross3 ( xx + 462 , xx + 692 , xx + 671 ) ; xx [
376 ] = xx [ 677 ] + xx [ 671 ] ; xx [ 389 ] = xx [ 681 ] + xx [ 690 ] + xx [
687 ] ; xx [ 509 ] = xx [ 678 ] + xx [ 672 ] ; xx [ 510 ] = xx [ 679 ] + xx [
673 ] ; xx [ 671 ] = xx [ 376 ] ; xx [ 672 ] = xx [ 509 ] ; xx [ 673 ] = xx [
510 ] ; xx [ 524 ] = ( xx [ 389 ] - ( pm_math_dot3 ( xx + 441 , xx + 671 ) +
pm_math_dot3 ( xx + 493 , xx + 692 ) ) ) / xx [ 513 ] ; xx [ 671 ] = xx [ 376
] + xx [ 499 ] * xx [ 524 ] ; xx [ 672 ] = xx [ 509 ] + xx [ 500 ] * xx [ 524
] ; xx [ 673 ] = xx [ 510 ] + xx [ 444 ] * xx [ 524 ] ; pm_math_quatXform (
xx + 395 , xx + 671 , xx + 677 ) ; xx [ 671 ] = xx [ 692 ] + xx [ 446 ] * xx
[ 524 ] ; xx [ 672 ] = xx [ 693 ] + xx [ 527 ] * xx [ 524 ] ; xx [ 673 ] = xx
[ 694 ] + xx [ 512 ] * xx [ 524 ] ; pm_math_quatXform ( xx + 395 , xx + 671 ,
xx + 692 ) ; pm_math_cross3 ( xx + 453 , xx + 692 , xx + 671 ) ; xx [ 376 ] =
xx [ 674 ] - xx [ 110 ] * ( xx [ 297 ] * xx [ 85 ] + xx [ 95 ] * xx [ 300 ] )
+ xx [ 677 ] + xx [ 671 ] ; xx [ 509 ] = xx [ 290 ] - ( xx [ 97 ] * xx [ 297
] + xx [ 300 ] * xx [ 94 ] ) * xx [ 110 ] + xx [ 675 ] + xx [ 678 ] + xx [
672 ] ; xx [ 290 ] = xx [ 676 ] - ( xx [ 95 ] * xx [ 297 ] - xx [ 300 ] * xx
[ 85 ] ) * xx [ 110 ] + xx [ 679 ] + xx [ 673 ] ; xx [ 297 ] = xx [ 692 ] -
xx [ 301 ] ; xx [ 300 ] = xx [ 693 ] - xx [ 303 ] ; xx [ 301 ] = xx [ 323 ] +
xx [ 694 ] ; xx [ 671 ] = xx [ 297 ] ; xx [ 672 ] = xx [ 300 ] ; xx [ 673 ] =
xx [ 301 ] ; xx [ 303 ] = ( xx [ 509 ] * xx [ 63 ] - xx [ 376 ] + xx [ 290 ]
* xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 671 ) ) / xx [ 364 ] ; xx [ 671
] = xx [ 376 ] - xx [ 296 ] * xx [ 303 ] ; xx [ 672 ] = xx [ 509 ] - xx [ 317
] * xx [ 303 ] ; xx [ 673 ] = xx [ 290 ] - xx [ 83 ] * xx [ 303 ] ;
pm_math_quatXform ( xx + 76 , xx + 671 , xx + 674 ) ; xx [ 671 ] = xx [ 297 ]
- xx [ 321 ] * xx [ 303 ] ; xx [ 672 ] = xx [ 300 ] - xx [ 366 ] * xx [ 303 ]
; xx [ 673 ] = xx [ 301 ] - xx [ 363 ] * xx [ 303 ] ; pm_math_quatXform ( xx
+ 76 , xx + 671 , xx + 677 ) ; pm_math_cross3 ( xx + 310 , xx + 677 , xx +
671 ) ; xx [ 290 ] = xx [ 674 ] + xx [ 671 ] ; xx [ 297 ] = xx [ 676 ] + xx [
673 ] ; xx [ 300 ] = xx [ 675 ] + xx [ 672 ] ; xx [ 301 ] = ( xx [ 297 ] - (
xx [ 290 ] * xx [ 39 ] + xx [ 300 ] * xx [ 48 ] ) + pm_math_dot3 ( xx + 351 ,
xx + 677 ) ) / xx [ 504 ] ; xx [ 671 ] = xx [ 290 ] - xx [ 349 ] * xx [ 301 ]
; xx [ 672 ] = xx [ 300 ] - xx [ 52 ] * xx [ 301 ] ; xx [ 673 ] = xx [ 297 ]
- xx [ 370 ] * xx [ 301 ] ; pm_math_quatXform ( xx + 53 , xx + 671 , xx + 674
) ; xx [ 671 ] = xx [ 677 ] - xx [ 387 ] * xx [ 301 ] ; xx [ 672 ] = xx [ 678
] - xx [ 388 ] * xx [ 301 ] ; xx [ 673 ] = xx [ 679 ] - xx [ 448 ] * xx [ 301
] ; pm_math_quatXform ( xx + 53 , xx + 671 , xx + 677 ) ; pm_math_cross3 ( xx
+ 528 , xx + 677 , xx + 671 ) ; xx [ 290 ] = xx [ 674 ] + xx [ 671 ] ; xx [
297 ] = xx [ 675 ] + xx [ 672 ] ; xx [ 300 ] = xx [ 676 ] + xx [ 673 ] ; xx [
671 ] = xx [ 290 ] ; xx [ 672 ] = xx [ 297 ] ; xx [ 673 ] = xx [ 300 ] ; xx [
323 ] = ( pm_math_dot3 ( xx + 556 , xx + 671 ) + xx [ 386 ] * xx [ 678 ] - xx
[ 541 ] * xx [ 679 ] ) / xx [ 582 ] ; xx [ 671 ] = xx [ 290 ] - xx [ 544 ] *
xx [ 323 ] ; xx [ 672 ] = xx [ 297 ] - xx [ 542 ] * xx [ 323 ] ; xx [ 673 ] =
xx [ 300 ] - xx [ 546 ] * xx [ 323 ] ; pm_math_quatXform ( xx + 29 , xx + 671
, xx + 674 ) ; xx [ 671 ] = xx [ 677 ] - xx [ 197 ] * xx [ 323 ] ; xx [ 672 ]
= xx [ 678 ] - xx [ 579 ] * xx [ 323 ] ; xx [ 673 ] = xx [ 679 ] - xx [ 581 ]
* xx [ 323 ] ; pm_math_quatXform ( xx + 29 , xx + 671 , xx + 677 ) ;
pm_math_cross3 ( xx + 531 , xx + 677 , xx + 671 ) ; xx [ 692 ] = xx [ 674 ] +
xx [ 671 ] ; xx [ 693 ] = xx [ 675 ] + xx [ 672 ] ; xx [ 694 ] = xx [ 676 ] +
xx [ 673 ] ; xx [ 290 ] = ( pm_math_dot3 ( xx + 3 , xx + 692 ) + pm_math_dot3
( xx + 575 , xx + 677 ) ) / xx [ 13 ] ; xx [ 671 ] = xx [ 0 ] * xx [ 290 ] ;
xx [ 672 ] = - ( xx [ 1 ] * xx [ 290 ] ) ; xx [ 673 ] = xx [ 2 ] * xx [ 290 ]
; pm_math_quatInverseXform ( xx + 29 , xx + 671 , xx + 674 ) ; pm_math_cross3
( xx + 671 , xx + 531 , xx + 677 ) ; xx [ 671 ] = xx [ 677 ] + xx [ 534 ] *
xx [ 290 ] ; xx [ 672 ] = xx [ 678 ] + xx [ 560 ] * xx [ 290 ] ; xx [ 673 ] =
xx [ 679 ] + xx [ 561 ] * xx [ 290 ] ; pm_math_quatInverseXform ( xx + 29 ,
xx + 671 , xx + 677 ) ; xx [ 290 ] = xx [ 323 ] + pm_math_dot3 ( xx + 373 ,
xx + 674 ) + pm_math_dot3 ( xx + 562 , xx + 677 ) ; xx [ 671 ] = xx [ 674 ] +
xx [ 290 ] * xx [ 21 ] ; xx [ 672 ] = xx [ 675 ] - xx [ 290 ] * xx [ 23 ] ;
xx [ 673 ] = xx [ 676 ] - xx [ 290 ] * xx [ 24 ] ; pm_math_quatInverseXform (
xx + 53 , xx + 671 , xx + 674 ) ; pm_math_cross3 ( xx + 671 , xx + 528 , xx +
692 ) ; xx [ 671 ] = xx [ 677 ] + xx [ 692 ] ; xx [ 672 ] = xx [ 678 ] - xx [
290 ] * xx [ 386 ] + xx [ 693 ] ; xx [ 673 ] = xx [ 679 ] + xx [ 290 ] * xx [
541 ] + xx [ 694 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 671 , xx + 677
) ; xx [ 290 ] = xx [ 301 ] + pm_math_dot3 ( xx + 591 , xx + 674 ) +
pm_math_dot3 ( xx + 535 , xx + 677 ) ; xx [ 671 ] = xx [ 674 ] + xx [ 290 ] *
xx [ 39 ] ; xx [ 672 ] = xx [ 675 ] + xx [ 290 ] * xx [ 48 ] ; xx [ 673 ] =
xx [ 676 ] - xx [ 290 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 671 , xx
+ 674 ) ; pm_math_cross3 ( xx + 671 , xx + 310 , xx + 692 ) ; xx [ 671 ] = xx
[ 677 ] + xx [ 290 ] * xx [ 324 ] + xx [ 692 ] ; xx [ 672 ] = xx [ 678 ] - xx
[ 290 ] * xx [ 325 ] + xx [ 693 ] ; xx [ 673 ] = xx [ 679 ] - xx [ 290 ] * xx
[ 348 ] + xx [ 694 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 671 , xx +
677 ) ; xx [ 290 ] = xx [ 303 ] + pm_math_dot3 ( xx + 594 , xx + 674 ) +
pm_math_dot3 ( xx + 597 , xx + 677 ) ; xx [ 671 ] = xx [ 674 ] + xx [ 290 ] ;
xx [ 672 ] = xx [ 675 ] - xx [ 290 ] * xx [ 63 ] ; xx [ 673 ] = xx [ 676 ] -
xx [ 290 ] * xx [ 71 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 671 , xx
+ 674 ) ; xx [ 297 ] = xx [ 677 ] + xx [ 290 ] * xx [ 270 ] ; pm_math_cross3
( xx + 671 , xx + 314 , xx + 692 ) ; xx [ 300 ] = xx [ 678 ] + xx [ 290 ] *
xx [ 294 ] ; xx [ 301 ] = xx [ 679 ] + xx [ 290 ] * xx [ 295 ] ; xx [ 676 ] =
xx [ 297 ] + xx [ 692 ] ; xx [ 677 ] = xx [ 300 ] + xx [ 693 ] ; xx [ 678 ] =
xx [ 301 ] + xx [ 694 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 676 , xx
+ 692 ) ; xx [ 290 ] = xx [ 445 ] * xx [ 675 ] + xx [ 505 ] * xx [ 694 ] ;
pm_math_quatInverseXform ( xx + 143 , xx + 671 , xx + 674 ) ; pm_math_cross3
( xx + 671 , xx + 306 , xx + 677 ) ; xx [ 692 ] = xx [ 297 ] + xx [ 677 ] ;
xx [ 693 ] = xx [ 300 ] + xx [ 678 ] ; xx [ 694 ] = xx [ 301 ] + xx [ 679 ] ;
pm_math_quatInverseXform ( xx + 143 , xx + 692 , xx + 677 ) ; xx [ 303 ] =
pm_math_dot3 ( xx + 198 , xx + 674 ) + pm_math_dot3 ( xx + 636 , xx + 677 ) ;
xx [ 692 ] = xx [ 674 ] - xx [ 303 ] * xx [ 135 ] ; xx [ 693 ] = xx [ 675 ] -
xx [ 303 ] * xx [ 137 ] ; xx [ 694 ] = xx [ 676 ] - xx [ 303 ] * xx [ 138 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 692 , xx + 674 ) ; pm_math_cross3
( xx + 692 , xx + 161 , xx + 695 ) ; xx [ 692 ] = xx [ 677 ] + xx [ 303 ] *
xx [ 134 ] + xx [ 695 ] ; xx [ 693 ] = xx [ 678 ] - xx [ 303 ] * xx [ 139 ] +
xx [ 696 ] ; xx [ 694 ] = xx [ 679 ] + xx [ 303 ] * xx [ 142 ] + xx [ 697 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 692 , xx + 677 ) ; xx [ 323 ] =
pm_math_dot3 ( xx + 584 , xx + 674 ) + pm_math_dot3 ( xx + 645 , xx + 677 ) ;
xx [ 376 ] = xx [ 273 ] * xx [ 290 ] - ( xx [ 303 ] * xx [ 150 ] + xx [ 323 ]
* xx [ 189 ] ) ; xx [ 509 ] = xx [ 95 ] * xx [ 119 ] ; xx [ 510 ] = xx [ 168
] - ( ( xx [ 118 ] * xx [ 94 ] + xx [ 95 ] * xx [ 120 ] ) * xx [ 110 ] + ( xx
[ 127 ] * xx [ 94 ] + xx [ 509 ] ) * xx [ 110 ] ) ; xx [ 118 ] = xx [ 510 ] /
xx [ 287 ] ; xx [ 120 ] = xx [ 108 ] * xx [ 118 ] ; xx [ 127 ] = xx [ 97 ] *
xx [ 120 ] ; xx [ 168 ] = xx [ 120 ] * xx [ 94 ] ; xx [ 526 ] = xx [ 305 ] *
xx [ 118 ] ; xx [ 538 ] = xx [ 526 ] * xx [ 94 ] ; xx [ 539 ] = xx [ 95 ] *
xx [ 526 ] ; xx [ 543 ] = ( xx [ 97 ] * xx [ 538 ] - xx [ 539 ] * xx [ 85 ] )
* xx [ 110 ] ; xx [ 545 ] = xx [ 110 ] * ( xx [ 538 ] * xx [ 85 ] + xx [ 97 ]
* xx [ 539 ] ) ; xx [ 559 ] = ( xx [ 538 ] * xx [ 94 ] + xx [ 95 ] * xx [ 539
] ) * xx [ 110 ] - xx [ 526 ] ; xx [ 674 ] = - xx [ 543 ] ; xx [ 675 ] = xx [
545 ] ; xx [ 676 ] = xx [ 559 ] ; pm_math_cross3 ( xx + 121 , xx + 674 , xx +
677 ) ; xx [ 526 ] = xx [ 664 ] + xx [ 670 ] ; xx [ 538 ] = xx [ 526 ] / xx [
416 ] ; xx [ 662 ] = xx [ 313 ] * xx [ 538 ] ; xx [ 663 ] = xx [ 435 ] * xx [
538 ] ; xx [ 664 ] = xx [ 437 ] * xx [ 538 ] ; pm_math_quatXform ( xx + 420 ,
xx + 662 , xx + 668 ) ; xx [ 662 ] = - ( xx [ 436 ] * xx [ 538 ] ) ; xx [ 663
] = xx [ 449 ] * xx [ 538 ] ; xx [ 664 ] = - ( xx [ 451 ] * xx [ 538 ] ) ;
pm_math_quatXform ( xx + 420 , xx + 662 , xx + 674 ) ; pm_math_cross3 ( xx +
462 , xx + 674 , xx + 662 ) ; xx [ 539 ] = xx [ 668 ] + xx [ 662 ] ; xx [ 565
] = xx [ 682 ] + xx [ 691 ] + xx [ 688 ] ; xx [ 587 ] = xx [ 669 ] + xx [ 663
] ; xx [ 588 ] = xx [ 670 ] + xx [ 664 ] ; xx [ 662 ] = xx [ 539 ] ; xx [ 663
] = xx [ 587 ] ; xx [ 664 ] = xx [ 588 ] ; xx [ 604 ] = ( xx [ 565 ] - (
pm_math_dot3 ( xx + 441 , xx + 662 ) + pm_math_dot3 ( xx + 493 , xx + 674 ) )
) / xx [ 513 ] ; xx [ 662 ] = xx [ 539 ] + xx [ 499 ] * xx [ 604 ] ; xx [ 663
] = xx [ 587 ] + xx [ 500 ] * xx [ 604 ] ; xx [ 664 ] = xx [ 588 ] + xx [ 444
] * xx [ 604 ] ; pm_math_quatXform ( xx + 395 , xx + 662 , xx + 668 ) ; xx [
662 ] = xx [ 674 ] + xx [ 446 ] * xx [ 604 ] ; xx [ 663 ] = xx [ 675 ] + xx [
527 ] * xx [ 604 ] ; xx [ 664 ] = xx [ 676 ] + xx [ 512 ] * xx [ 604 ] ;
pm_math_quatXform ( xx + 395 , xx + 662 , xx + 674 ) ; pm_math_cross3 ( xx +
453 , xx + 674 , xx + 662 ) ; xx [ 539 ] = xx [ 110 ] * ( xx [ 127 ] * xx [
85 ] + xx [ 95 ] * xx [ 168 ] ) + xx [ 677 ] + xx [ 668 ] + xx [ 662 ] ; xx [
587 ] = ( xx [ 97 ] * xx [ 127 ] + xx [ 168 ] * xx [ 94 ] ) * xx [ 110 ] - xx
[ 120 ] + xx [ 678 ] + xx [ 669 ] + xx [ 663 ] ; xx [ 120 ] = xx [ 679 ] - (
xx [ 168 ] * xx [ 85 ] - xx [ 95 ] * xx [ 127 ] ) * xx [ 110 ] + xx [ 670 ] +
xx [ 664 ] ; xx [ 85 ] = xx [ 674 ] - xx [ 543 ] ; xx [ 95 ] = xx [ 545 ] +
xx [ 675 ] ; xx [ 127 ] = xx [ 559 ] + xx [ 676 ] ; xx [ 662 ] = xx [ 85 ] ;
xx [ 663 ] = xx [ 95 ] ; xx [ 664 ] = xx [ 127 ] ; xx [ 168 ] = ( xx [ 587 ]
* xx [ 63 ] - xx [ 539 ] + xx [ 120 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 ,
xx + 662 ) ) / xx [ 364 ] ; xx [ 662 ] = xx [ 539 ] - xx [ 296 ] * xx [ 168 ]
; xx [ 663 ] = xx [ 587 ] - xx [ 317 ] * xx [ 168 ] ; xx [ 664 ] = xx [ 120 ]
- xx [ 83 ] * xx [ 168 ] ; pm_math_quatXform ( xx + 76 , xx + 662 , xx + 668
) ; xx [ 662 ] = xx [ 85 ] - xx [ 321 ] * xx [ 168 ] ; xx [ 663 ] = xx [ 95 ]
- xx [ 366 ] * xx [ 168 ] ; xx [ 664 ] = xx [ 127 ] - xx [ 363 ] * xx [ 168 ]
; pm_math_quatXform ( xx + 76 , xx + 662 , xx + 674 ) ; pm_math_cross3 ( xx +
310 , xx + 674 , xx + 662 ) ; xx [ 85 ] = xx [ 668 ] + xx [ 662 ] ; xx [ 95 ]
= xx [ 670 ] + xx [ 664 ] ; xx [ 120 ] = xx [ 669 ] + xx [ 663 ] ; xx [ 127 ]
= ( xx [ 95 ] - ( xx [ 85 ] * xx [ 39 ] + xx [ 120 ] * xx [ 48 ] ) +
pm_math_dot3 ( xx + 351 , xx + 674 ) ) / xx [ 504 ] ; xx [ 662 ] = xx [ 85 ]
- xx [ 349 ] * xx [ 127 ] ; xx [ 663 ] = xx [ 120 ] - xx [ 52 ] * xx [ 127 ]
; xx [ 664 ] = xx [ 95 ] - xx [ 370 ] * xx [ 127 ] ; pm_math_quatXform ( xx +
53 , xx + 662 , xx + 668 ) ; xx [ 662 ] = xx [ 674 ] - xx [ 387 ] * xx [ 127
] ; xx [ 663 ] = xx [ 675 ] - xx [ 388 ] * xx [ 127 ] ; xx [ 664 ] = xx [ 676
] - xx [ 448 ] * xx [ 127 ] ; pm_math_quatXform ( xx + 53 , xx + 662 , xx +
674 ) ; pm_math_cross3 ( xx + 528 , xx + 674 , xx + 662 ) ; xx [ 85 ] = xx [
668 ] + xx [ 662 ] ; xx [ 95 ] = xx [ 669 ] + xx [ 663 ] ; xx [ 120 ] = xx [
670 ] + xx [ 664 ] ; xx [ 662 ] = xx [ 85 ] ; xx [ 663 ] = xx [ 95 ] ; xx [
664 ] = xx [ 120 ] ; xx [ 539 ] = ( pm_math_dot3 ( xx + 556 , xx + 662 ) + xx
[ 386 ] * xx [ 675 ] - xx [ 541 ] * xx [ 676 ] ) / xx [ 582 ] ; xx [ 662 ] =
xx [ 85 ] - xx [ 544 ] * xx [ 539 ] ; xx [ 663 ] = xx [ 95 ] - xx [ 542 ] *
xx [ 539 ] ; xx [ 664 ] = xx [ 120 ] - xx [ 546 ] * xx [ 539 ] ;
pm_math_quatXform ( xx + 29 , xx + 662 , xx + 668 ) ; xx [ 662 ] = xx [ 674 ]
- xx [ 197 ] * xx [ 539 ] ; xx [ 663 ] = xx [ 675 ] - xx [ 579 ] * xx [ 539 ]
; xx [ 664 ] = xx [ 676 ] - xx [ 581 ] * xx [ 539 ] ; pm_math_quatXform ( xx
+ 29 , xx + 662 , xx + 674 ) ; pm_math_cross3 ( xx + 531 , xx + 674 , xx +
662 ) ; xx [ 677 ] = xx [ 668 ] + xx [ 662 ] ; xx [ 678 ] = xx [ 669 ] + xx [
663 ] ; xx [ 679 ] = xx [ 670 ] + xx [ 664 ] ; xx [ 85 ] = ( pm_math_dot3 (
xx + 3 , xx + 677 ) + pm_math_dot3 ( xx + 575 , xx + 674 ) ) / xx [ 13 ] ; xx
[ 662 ] = xx [ 0 ] * xx [ 85 ] ; xx [ 663 ] = - ( xx [ 1 ] * xx [ 85 ] ) ; xx
[ 664 ] = xx [ 2 ] * xx [ 85 ] ; pm_math_quatInverseXform ( xx + 29 , xx +
662 , xx + 668 ) ; pm_math_cross3 ( xx + 662 , xx + 531 , xx + 674 ) ; xx [
662 ] = xx [ 674 ] + xx [ 534 ] * xx [ 85 ] ; xx [ 663 ] = xx [ 675 ] + xx [
560 ] * xx [ 85 ] ; xx [ 664 ] = xx [ 676 ] + xx [ 561 ] * xx [ 85 ] ;
pm_math_quatInverseXform ( xx + 29 , xx + 662 , xx + 674 ) ; xx [ 85 ] = xx [
539 ] + pm_math_dot3 ( xx + 373 , xx + 668 ) + pm_math_dot3 ( xx + 562 , xx +
674 ) ; xx [ 662 ] = xx [ 668 ] + xx [ 85 ] * xx [ 21 ] ; xx [ 663 ] = xx [
669 ] - xx [ 85 ] * xx [ 23 ] ; xx [ 664 ] = xx [ 670 ] - xx [ 85 ] * xx [ 24
] ; pm_math_quatInverseXform ( xx + 53 , xx + 662 , xx + 668 ) ;
pm_math_cross3 ( xx + 662 , xx + 528 , xx + 677 ) ; xx [ 662 ] = xx [ 674 ] +
xx [ 677 ] ; xx [ 663 ] = xx [ 675 ] - xx [ 85 ] * xx [ 386 ] + xx [ 678 ] ;
xx [ 664 ] = xx [ 676 ] + xx [ 85 ] * xx [ 541 ] + xx [ 679 ] ;
pm_math_quatInverseXform ( xx + 53 , xx + 662 , xx + 674 ) ; xx [ 85 ] = xx [
127 ] + pm_math_dot3 ( xx + 591 , xx + 668 ) + pm_math_dot3 ( xx + 535 , xx +
674 ) ; xx [ 662 ] = xx [ 668 ] + xx [ 85 ] * xx [ 39 ] ; xx [ 663 ] = xx [
669 ] + xx [ 85 ] * xx [ 48 ] ; xx [ 664 ] = xx [ 670 ] - xx [ 85 ] ;
pm_math_quatInverseXform ( xx + 76 , xx + 662 , xx + 668 ) ; pm_math_cross3 (
xx + 662 , xx + 310 , xx + 677 ) ; xx [ 662 ] = xx [ 674 ] + xx [ 85 ] * xx [
324 ] + xx [ 677 ] ; xx [ 663 ] = xx [ 675 ] - xx [ 85 ] * xx [ 325 ] + xx [
678 ] ; xx [ 664 ] = xx [ 676 ] - xx [ 85 ] * xx [ 348 ] + xx [ 679 ] ;
pm_math_quatInverseXform ( xx + 76 , xx + 662 , xx + 674 ) ; xx [ 85 ] = xx [
168 ] + pm_math_dot3 ( xx + 594 , xx + 668 ) + pm_math_dot3 ( xx + 597 , xx +
674 ) ; xx [ 662 ] = xx [ 668 ] + xx [ 85 ] ; xx [ 663 ] = xx [ 669 ] - xx [
85 ] * xx [ 63 ] ; xx [ 664 ] = xx [ 670 ] - xx [ 85 ] * xx [ 71 ] ;
pm_math_quatInverseXform ( xx + 648 , xx + 662 , xx + 668 ) ; xx [ 95 ] = xx
[ 674 ] + xx [ 85 ] * xx [ 270 ] ; pm_math_cross3 ( xx + 662 , xx + 314 , xx
+ 677 ) ; xx [ 120 ] = xx [ 675 ] + xx [ 85 ] * xx [ 294 ] ; xx [ 127 ] = xx
[ 676 ] + xx [ 85 ] * xx [ 295 ] ; xx [ 674 ] = xx [ 95 ] + xx [ 677 ] ; xx [
675 ] = xx [ 120 ] + xx [ 678 ] ; xx [ 676 ] = xx [ 127 ] + xx [ 679 ] ;
pm_math_quatInverseXform ( xx + 648 , xx + 674 , xx + 677 ) ; xx [ 85 ] = xx
[ 445 ] * xx [ 669 ] + xx [ 505 ] * xx [ 679 ] ; pm_math_quatInverseXform (
xx + 143 , xx + 662 , xx + 668 ) ; pm_math_cross3 ( xx + 662 , xx + 306 , xx
+ 674 ) ; xx [ 677 ] = xx [ 95 ] + xx [ 674 ] ; xx [ 678 ] = xx [ 120 ] + xx
[ 675 ] ; xx [ 679 ] = xx [ 127 ] + xx [ 676 ] ; pm_math_quatInverseXform (
xx + 143 , xx + 677 , xx + 674 ) ; xx [ 168 ] = pm_math_dot3 ( xx + 198 , xx
+ 668 ) + pm_math_dot3 ( xx + 636 , xx + 674 ) ; xx [ 677 ] = xx [ 668 ] - xx
[ 168 ] * xx [ 135 ] ; xx [ 678 ] = xx [ 669 ] - xx [ 168 ] * xx [ 137 ] ; xx
[ 679 ] = xx [ 670 ] - xx [ 168 ] * xx [ 138 ] ; pm_math_quatInverseXform (
xx + 151 , xx + 677 , xx + 668 ) ; pm_math_cross3 ( xx + 677 , xx + 161 , xx
+ 680 ) ; xx [ 677 ] = xx [ 674 ] + xx [ 168 ] * xx [ 134 ] + xx [ 680 ] ; xx
[ 678 ] = xx [ 675 ] - xx [ 168 ] * xx [ 139 ] + xx [ 681 ] ; xx [ 679 ] = xx
[ 676 ] + xx [ 168 ] * xx [ 142 ] + xx [ 682 ] ; pm_math_quatInverseXform (
xx + 151 , xx + 677 , xx + 674 ) ; xx [ 539 ] = pm_math_dot3 ( xx + 584 , xx
+ 668 ) + pm_math_dot3 ( xx + 645 , xx + 674 ) ; xx [ 543 ] = xx [ 273 ] * xx
[ 85 ] - ( xx [ 168 ] * xx [ 150 ] + xx [ 539 ] * xx [ 189 ] ) ; xx [ 545 ] =
xx [ 28 ] * xx [ 92 ] + xx [ 36 ] * xx [ 171 ] - xx [ 93 ] * xx [ 229 ] ; xx
[ 559 ] = - ( xx [ 229 ] * xx [ 167 ] + xx [ 188 ] * xx [ 28 ] + xx [ 214 ] *
xx [ 36 ] ) ; xx [ 587 ] = - ( xx [ 229 ] * xx [ 290 ] + xx [ 303 ] * xx [ 28
] + xx [ 323 ] * xx [ 36 ] ) ; xx [ 588 ] = - ( xx [ 229 ] * xx [ 85 ] + xx [
168 ] * xx [ 28 ] + xx [ 539 ] * xx [ 36 ] ) ; xx [ 626 ] = xx [ 167 ] * xx [
170 ] - ( xx [ 188 ] * xx [ 155 ] + xx [ 214 ] * xx [ 156 ] ) ; xx [ 167 ] =
xx [ 290 ] * xx [ 170 ] - ( xx [ 303 ] * xx [ 155 ] + xx [ 323 ] * xx [ 156 ]
) ; xx [ 188 ] = xx [ 85 ] * xx [ 170 ] - ( xx [ 168 ] * xx [ 155 ] + xx [
539 ] * xx [ 156 ] ) ; xx [ 668 ] = xx [ 496 ] ; xx [ 669 ] = xx [ 514 ] ; xx
[ 670 ] = xx [ 525 ] ; pm_math_quatInverseXform ( xx + 395 , xx + 655 , xx +
674 ) ; xx [ 677 ] = xx [ 440 ] ; xx [ 678 ] = xx [ 497 ] ; xx [ 679 ] = xx [
498 ] ; pm_math_cross3 ( xx + 655 , xx + 453 , xx + 496 ) ; xx [ 680 ] = xx [
172 ] + xx [ 496 ] ; xx [ 681 ] = xx [ 177 ] + xx [ 497 ] ; xx [ 682 ] = xx [
187 ] + xx [ 498 ] ; pm_math_quatInverseXform ( xx + 395 , xx + 680 , xx +
496 ) ; xx [ 85 ] = xx [ 289 ] - ( pm_math_dot3 ( xx + 668 , xx + 674 ) +
pm_math_dot3 ( xx + 677 , xx + 496 ) ) ; xx [ 680 ] = xx [ 419 ] ; xx [ 681 ]
= xx [ 439 ] ; xx [ 682 ] = xx [ 437 ] / xx [ 416 ] ; xx [ 686 ] = xx [ 674 ]
+ xx [ 330 ] * xx [ 85 ] ; xx [ 687 ] = xx [ 675 ] + xx [ 334 ] * xx [ 85 ] ;
xx [ 688 ] = xx [ 676 ] - xx [ 350 ] * xx [ 85 ] ; pm_math_quatInverseXform (
xx + 420 , xx + 686 , xx + 674 ) ; xx [ 689 ] = - xx [ 438 ] ; xx [ 690 ] =
xx [ 450 ] ; xx [ 691 ] = - xx [ 452 ] ; pm_math_cross3 ( xx + 686 , xx + 462
, xx + 438 ) ; xx [ 686 ] = xx [ 496 ] + xx [ 460 ] * xx [ 85 ] + xx [ 438 ]
; xx [ 687 ] = xx [ 497 ] - xx [ 461 ] * xx [ 85 ] + xx [ 439 ] ; xx [ 688 ]
= xx [ 498 ] - xx [ 492 ] * xx [ 85 ] + xx [ 440 ] ; pm_math_quatInverseXform
( xx + 420 , xx + 686 , xx + 438 ) ; pm_math_quatInverseXform ( xx + 98 , xx
+ 655 , xx + 496 ) ; pm_math_cross3 ( xx + 655 , xx + 121 , xx + 686 ) ; xx [
655 ] = xx [ 172 ] + xx [ 686 ] ; xx [ 656 ] = xx [ 177 ] + xx [ 687 ] ; xx [
657 ] = xx [ 187 ] + xx [ 688 ] ; pm_math_quatInverseXform ( xx + 98 , xx +
655 , xx + 686 ) ; pm_math_quatInverseXform ( xx + 395 , xx + 671 , xx + 655
) ; pm_math_cross3 ( xx + 671 , xx + 453 , xx + 692 ) ; xx [ 695 ] = xx [ 297
] + xx [ 692 ] ; xx [ 696 ] = xx [ 300 ] + xx [ 693 ] ; xx [ 697 ] = xx [ 301
] + xx [ 694 ] ; pm_math_quatInverseXform ( xx + 395 , xx + 695 , xx + 692 )
; xx [ 168 ] = xx [ 524 ] - ( pm_math_dot3 ( xx + 668 , xx + 655 ) +
pm_math_dot3 ( xx + 677 , xx + 692 ) ) ; xx [ 695 ] = xx [ 655 ] + xx [ 330 ]
* xx [ 168 ] ; xx [ 696 ] = xx [ 656 ] + xx [ 334 ] * xx [ 168 ] ; xx [ 697 ]
= xx [ 657 ] - xx [ 350 ] * xx [ 168 ] ; pm_math_quatInverseXform ( xx + 420
, xx + 695 , xx + 655 ) ; pm_math_cross3 ( xx + 695 , xx + 462 , xx + 698 ) ;
xx [ 695 ] = xx [ 692 ] + xx [ 460 ] * xx [ 168 ] + xx [ 698 ] ; xx [ 696 ] =
xx [ 693 ] - xx [ 461 ] * xx [ 168 ] + xx [ 699 ] ; xx [ 697 ] = xx [ 694 ] -
xx [ 492 ] * xx [ 168 ] + xx [ 700 ] ; pm_math_quatInverseXform ( xx + 420 ,
xx + 695 , xx + 692 ) ; xx [ 172 ] = xx [ 367 ] - ( pm_math_dot3 ( xx + 680 ,
xx + 655 ) + pm_math_dot3 ( xx + 689 , xx + 692 ) ) ;
pm_math_quatInverseXform ( xx + 98 , xx + 671 , xx + 655 ) ; pm_math_cross3 (
xx + 671 , xx + 121 , xx + 692 ) ; xx [ 671 ] = xx [ 297 ] + xx [ 692 ] ; xx
[ 672 ] = xx [ 300 ] + xx [ 693 ] ; xx [ 673 ] = xx [ 301 ] + xx [ 694 ] ;
pm_math_quatInverseXform ( xx + 98 , xx + 671 , xx + 692 ) ; xx [ 177 ] = xx
[ 206 ] * xx [ 656 ] + xx [ 333 ] * xx [ 694 ] - xx [ 285 ] ; xx [ 187 ] = xx
[ 247 ] * xx [ 168 ] + xx [ 231 ] * xx [ 172 ] + xx [ 177 ] * xx [ 129 ] ;
pm_math_quatInverseXform ( xx + 395 , xx + 662 , xx + 655 ) ; pm_math_cross3
( xx + 662 , xx + 453 , xx + 671 ) ; xx [ 692 ] = xx [ 95 ] + xx [ 671 ] ; xx
[ 693 ] = xx [ 120 ] + xx [ 672 ] ; xx [ 694 ] = xx [ 127 ] + xx [ 673 ] ;
pm_math_quatInverseXform ( xx + 395 , xx + 692 , xx + 671 ) ; xx [ 214 ] = xx
[ 604 ] - ( pm_math_dot3 ( xx + 668 , xx + 655 ) + pm_math_dot3 ( xx + 677 ,
xx + 671 ) ) ; xx [ 692 ] = xx [ 655 ] + xx [ 330 ] * xx [ 214 ] ; xx [ 693 ]
= xx [ 656 ] + xx [ 334 ] * xx [ 214 ] ; xx [ 694 ] = xx [ 657 ] - xx [ 350 ]
* xx [ 214 ] ; pm_math_quatInverseXform ( xx + 420 , xx + 692 , xx + 655 ) ;
pm_math_cross3 ( xx + 692 , xx + 462 , xx + 695 ) ; xx [ 692 ] = xx [ 671 ] +
xx [ 460 ] * xx [ 214 ] + xx [ 695 ] ; xx [ 693 ] = xx [ 672 ] - xx [ 461 ] *
xx [ 214 ] + xx [ 696 ] ; xx [ 694 ] = xx [ 673 ] - xx [ 492 ] * xx [ 214 ] +
xx [ 697 ] ; pm_math_quatInverseXform ( xx + 420 , xx + 692 , xx + 671 ) ; xx
[ 285 ] = xx [ 538 ] - ( pm_math_dot3 ( xx + 680 , xx + 655 ) + pm_math_dot3
( xx + 689 , xx + 671 ) ) ; pm_math_quatInverseXform ( xx + 98 , xx + 662 ,
xx + 655 ) ; pm_math_cross3 ( xx + 662 , xx + 121 , xx + 671 ) ; xx [ 662 ] =
xx [ 95 ] + xx [ 671 ] ; xx [ 663 ] = xx [ 120 ] + xx [ 672 ] ; xx [ 664 ] =
xx [ 127 ] + xx [ 673 ] ; pm_math_quatInverseXform ( xx + 98 , xx + 662 , xx
+ 671 ) ; xx [ 95 ] = xx [ 118 ] + xx [ 206 ] * xx [ 656 ] + xx [ 333 ] * xx
[ 673 ] ; xx [ 118 ] = xx [ 247 ] * xx [ 214 ] + xx [ 231 ] * xx [ 285 ] + xx
[ 95 ] * xx [ 129 ] ; xx [ 120 ] = xx [ 389 ] * xx [ 214 ] + xx [ 365 ] * xx
[ 285 ] - xx [ 95 ] * xx [ 284 ] ; xx [ 692 ] = xx [ 150 ] * xx [ 14 ] + xx [
189 ] * ( xx [ 191 ] - ( pm_math_dot3 ( xx + 584 , xx + 267 ) + pm_math_dot3
( xx + 645 , xx + 639 ) ) ) + ( xx [ 299 ] + xx [ 445 ] * xx [ 643 ] + xx [
505 ] * xx [ 654 ] ) * xx [ 273 ] ; xx [ 693 ] = xx [ 204 ] ; xx [ 694 ] = xx
[ 84 ] ; xx [ 695 ] = xx [ 234 ] ; xx [ 696 ] = xx [ 376 ] ; xx [ 697 ] = xx
[ 543 ] ; xx [ 698 ] = xx [ 204 ] ; xx [ 699 ] = xx [ 28 ] * xx [ 203 ] + xx
[ 36 ] * xx [ 217 ] - xx [ 37 ] * xx [ 229 ] ; xx [ 700 ] = xx [ 545 ] ; xx [
701 ] = xx [ 559 ] ; xx [ 702 ] = xx [ 587 ] ; xx [ 703 ] = xx [ 588 ] ; xx [
704 ] = xx [ 84 ] ; xx [ 705 ] = xx [ 545 ] ; xx [ 706 ] = xx [ 155 ] * xx [
92 ] + xx [ 156 ] * xx [ 171 ] + xx [ 93 ] * xx [ 170 ] ; xx [ 707 ] = xx [
626 ] ; xx [ 708 ] = xx [ 167 ] ; xx [ 709 ] = xx [ 188 ] ; xx [ 710 ] = xx [
234 ] ; xx [ 711 ] = xx [ 559 ] ; xx [ 712 ] = xx [ 626 ] ; xx [ 713 ] = xx [
247 ] * xx [ 85 ] + xx [ 231 ] * ( xx [ 232 ] - ( pm_math_dot3 ( xx + 680 ,
xx + 674 ) + pm_math_dot3 ( xx + 689 , xx + 438 ) ) ) + ( xx [ 157 ] + xx [
206 ] * xx [ 497 ] + xx [ 333 ] * xx [ 688 ] ) * xx [ 129 ] ; xx [ 714 ] = xx
[ 187 ] ; xx [ 715 ] = xx [ 118 ] ; xx [ 716 ] = xx [ 376 ] ; xx [ 717 ] = xx
[ 587 ] ; xx [ 718 ] = xx [ 167 ] ; xx [ 719 ] = xx [ 187 ] ; xx [ 720 ] = xx
[ 389 ] * xx [ 168 ] + xx [ 365 ] * xx [ 172 ] - xx [ 177 ] * xx [ 284 ] ; xx
[ 721 ] = xx [ 120 ] ; xx [ 722 ] = xx [ 543 ] ; xx [ 723 ] = xx [ 588 ] ; xx
[ 724 ] = xx [ 188 ] ; xx [ 725 ] = xx [ 118 ] ; xx [ 726 ] = xx [ 120 ] ; xx
[ 727 ] = xx [ 565 ] * xx [ 214 ] + xx [ 526 ] * xx [ 285 ] + xx [ 95 ] * xx
[ 510 ] ; pm_math_quatInverseXform ( xx + 143 , xx + 80 , xx + 267 ) ; xx [
14 ] = xx [ 135 ] * state [ 9 ] ; xx [ 37 ] = xx [ 267 ] + xx [ 14 ] ; xx [
84 ] = xx [ 137 ] * state [ 9 ] ; xx [ 85 ] = xx [ 268 ] + xx [ 84 ] ; xx [
92 ] = xx [ 138 ] * state [ 9 ] ; xx [ 93 ] = xx [ 269 ] + xx [ 92 ] ; xx [
299 ] = xx [ 37 ] ; xx [ 300 ] = xx [ 85 ] ; xx [ 301 ] = xx [ 93 ] ; xx [
438 ] = xx [ 37 ] * xx [ 201 ] ; xx [ 439 ] = xx [ 85 ] * xx [ 293 ] ; xx [
440 ] = xx [ 93 ] * xx [ 298 ] ; pm_math_cross3 ( xx + 299 , xx + 438 , xx +
496 ) ; pm_math_quatInverseXform ( xx + 151 , xx + 299 , xx + 438 ) ; xx [ 95
] = xx [ 136 ] * state [ 11 ] ; xx [ 118 ] = xx [ 438 ] - xx [ 95 ] ; xx [
120 ] = xx [ 140 ] * state [ 11 ] ; xx [ 127 ] = xx [ 439 ] - xx [ 120 ] ; xx
[ 157 ] = xx [ 141 ] * state [ 11 ] ; xx [ 167 ] = xx [ 440 ] - xx [ 157 ] ;
xx [ 639 ] = xx [ 118 ] ; xx [ 640 ] = xx [ 127 ] ; xx [ 641 ] = xx [ 167 ] ;
xx [ 642 ] = xx [ 118 ] * xx [ 202 ] ; xx [ 643 ] = xx [ 127 ] * xx [ 230 ] ;
xx [ 644 ] = xx [ 167 ] * xx [ 233 ] ; pm_math_cross3 ( xx + 639 , xx + 642 ,
xx + 652 ) ; xx [ 639 ] = - xx [ 95 ] ; xx [ 640 ] = - xx [ 120 ] ; xx [ 641
] = - xx [ 157 ] ; pm_math_cross3 ( xx + 438 , xx + 639 , xx + 642 ) ; xx [
168 ] = xx [ 652 ] + xx [ 202 ] * xx [ 642 ] ; xx [ 655 ] = - xx [ 136 ] ; xx
[ 656 ] = - xx [ 140 ] ; xx [ 657 ] = - xx [ 141 ] ; xx [ 171 ] = xx [ 653 ]
+ xx [ 230 ] * xx [ 643 ] ; xx [ 172 ] = xx [ 654 ] + xx [ 233 ] * xx [ 644 ]
; xx [ 652 ] = xx [ 168 ] ; xx [ 653 ] = xx [ 171 ] ; xx [ 654 ] = xx [ 172 ]
; xx [ 662 ] = xx [ 438 ] + xx [ 118 ] ; xx [ 663 ] = xx [ 439 ] + xx [ 127 ]
; xx [ 664 ] = xx [ 440 ] + xx [ 167 ] ; xx [ 438 ] = xx [ 174 ] * state [ 11
] ; xx [ 439 ] = - ( xx [ 175 ] * state [ 11 ] ) ; xx [ 440 ] = xx [ 176 ] *
state [ 11 ] ; pm_math_cross3 ( xx + 662 , xx + 438 , xx + 174 ) ;
pm_math_cross3 ( xx + 299 , xx + 161 , xx + 438 ) ; pm_math_cross3 ( xx + 299
, xx + 438 , xx + 662 ) ; pm_math_quatInverseXform ( xx + 151 , xx + 662 , xx
+ 297 ) ; xx [ 118 ] = ( xx [ 174 ] + xx [ 297 ] ) * xx [ 261 ] ; xx [ 127 ]
= ( xx [ 175 ] + xx [ 298 ] ) * xx [ 261 ] ; xx [ 167 ] = ( xx [ 176 ] + xx [
299 ] ) * xx [ 261 ] ; xx [ 174 ] = xx [ 118 ] ; xx [ 175 ] = xx [ 127 ] ; xx
[ 176 ] = xx [ 167 ] ; xx [ 177 ] = pm_math_dot3 ( xx + 655 , xx + 652 ) +
pm_math_dot3 ( xx + 180 , xx + 174 ) ; xx [ 174 ] = xx [ 177 ] / xx [ 190 ] ;
xx [ 180 ] = xx [ 168 ] + xx [ 173 ] * xx [ 174 ] ; xx [ 181 ] = xx [ 171 ] +
xx [ 192 ] * xx [ 174 ] ; xx [ 182 ] = xx [ 172 ] + xx [ 193 ] * xx [ 174 ] ;
pm_math_quatXform ( xx + 151 , xx + 180 , xx + 297 ) ; xx [ 180 ] = xx [ 118
] - xx [ 194 ] * xx [ 174 ] ; xx [ 181 ] = xx [ 127 ] + xx [ 195 ] * xx [ 174
] ; xx [ 182 ] = xx [ 167 ] - xx [ 196 ] * xx [ 174 ] ; pm_math_quatXform (
xx + 151 , xx + 180 , xx + 438 ) ; pm_math_cross3 ( xx + 161 , xx + 438 , xx
+ 180 ) ; xx [ 652 ] = xx [ 14 ] ; xx [ 653 ] = xx [ 84 ] ; xx [ 654 ] = xx [
92 ] ; pm_math_cross3 ( xx + 267 , xx + 652 , xx + 662 ) ;
pm_math_matrix3x3Xform ( xx + 252 , xx + 662 , xx + 671 ) ; xx [ 252 ] = xx [
267 ] + xx [ 37 ] ; xx [ 253 ] = xx [ 268 ] + xx [ 85 ] ; xx [ 254 ] = xx [
269 ] + xx [ 93 ] ; xx [ 255 ] = - ( xx [ 134 ] * state [ 9 ] ) ; xx [ 256 ]
= xx [ 139 ] * state [ 9 ] ; xx [ 257 ] = - ( xx [ 142 ] * state [ 9 ] ) ;
pm_math_cross3 ( xx + 252 , xx + 255 , xx + 258 ) ; pm_math_cross3 ( xx + 80
, xx + 306 , xx + 252 ) ; pm_math_cross3 ( xx + 80 , xx + 252 , xx + 255 ) ;
pm_math_quatInverseXform ( xx + 143 , xx + 255 , xx + 252 ) ; xx [ 37 ] = xx
[ 258 ] + xx [ 252 ] ; xx [ 85 ] = xx [ 259 ] + xx [ 253 ] ; xx [ 93 ] = xx [
260 ] + xx [ 254 ] ; xx [ 252 ] = xx [ 37 ] ; xx [ 253 ] = xx [ 85 ] ; xx [
254 ] = xx [ 93 ] ; pm_math_matrix3x3Xform ( xx + 238 , xx + 252 , xx + 255 )
; xx [ 175 ] = xx [ 671 ] + xx [ 255 ] ; xx [ 176 ] = xx [ 496 ] + xx [ 297 ]
+ xx [ 180 ] + xx [ 175 ] ; xx [ 187 ] = xx [ 672 ] + xx [ 256 ] ; xx [ 188 ]
= xx [ 497 ] + xx [ 298 ] + xx [ 181 ] + xx [ 187 ] ; xx [ 180 ] = xx [ 673 ]
+ xx [ 257 ] ; xx [ 181 ] = xx [ 498 ] + xx [ 299 ] + xx [ 182 ] + xx [ 180 ]
; xx [ 255 ] = xx [ 176 ] ; xx [ 256 ] = xx [ 188 ] ; xx [ 257 ] = xx [ 181 ]
; pm_math_matrix3x3TransposeXform ( xx + 238 , xx + 662 , xx + 258 ) ;
pm_math_matrix3x3Xform ( xx + 274 , xx + 252 , xx + 238 ) ; xx [ 182 ] = xx [
258 ] + xx [ 238 ] ; xx [ 191 ] = xx [ 438 ] + xx [ 182 ] ; xx [ 201 ] = xx [
259 ] + xx [ 239 ] ; xx [ 203 ] = xx [ 439 ] + xx [ 201 ] ; xx [ 204 ] = xx [
260 ] + xx [ 240 ] ; xx [ 214 ] = xx [ 440 ] + xx [ 204 ] ; xx [ 238 ] = xx [
191 ] ; xx [ 239 ] = xx [ 203 ] ; xx [ 240 ] = xx [ 214 ] ; xx [ 217 ] = (
pm_math_dot3 ( xx + 147 , xx + 255 ) + pm_math_dot3 ( xx + 164 , xx + 238 ) )
/ xx [ 272 ] ; xx [ 232 ] = xx [ 111 ] / xx [ 287 ] ; xx [ 113 ] = xx [ 102 ]
* state [ 19 ] ; xx [ 234 ] = xx [ 115 ] + xx [ 109 ] * xx [ 113 ] ; xx [ 238
] = xx [ 104 ] ; xx [ 239 ] = xx [ 114 ] + xx [ 108 ] * xx [ 232 ] ; xx [ 240
] = xx [ 234 ] ; pm_math_quatXform ( xx + 98 , xx + 238 , xx + 241 ) ; xx [
115 ] = xx [ 106 ] * state [ 19 ] ; xx [ 238 ] = ( ( xx [ 103 ] + xx [ 86 ] )
* xx [ 115 ] + xx [ 124 ] ) * xx [ 107 ] ; xx [ 86 ] = xx [ 107 ] * ( xx [
125 ] - ( xx [ 102 ] + xx [ 102 ] ) * xx [ 115 ] ) ; xx [ 124 ] = xx [ 238 ]
; xx [ 125 ] = xx [ 86 ] ; xx [ 126 ] = xx [ 96 ] + xx [ 305 ] * xx [ 232 ] ;
pm_math_quatXform ( xx + 98 , xx + 124 , xx + 244 ) ; pm_math_cross3 ( xx +
121 , xx + 244 , xx + 124 ) ; pm_math_quatInverseXform ( xx + 395 , xx + 80 ,
xx + 252 ) ; xx [ 102 ] = xx [ 330 ] * state [ 15 ] ; xx [ 103 ] = xx [ 252 ]
+ xx [ 102 ] ; xx [ 115 ] = xx [ 334 ] * state [ 15 ] ; xx [ 239 ] = xx [ 253
] + xx [ 115 ] ; xx [ 240 ] = xx [ 350 ] * state [ 15 ] ; xx [ 255 ] = xx [
254 ] - xx [ 240 ] ; xx [ 256 ] = xx [ 103 ] ; xx [ 257 ] = xx [ 239 ] ; xx [
258 ] = xx [ 255 ] ; xx [ 267 ] = xx [ 103 ] * xx [ 502 ] ; xx [ 268 ] = xx [
239 ] * xx [ 506 ] ; xx [ 269 ] = xx [ 255 ] * xx [ 511 ] ; pm_math_cross3 (
xx + 256 , xx + 267 , xx + 274 ) ; pm_math_quatInverseXform ( xx + 420 , xx +
256 , xx + 267 ) ; xx [ 259 ] = xx [ 391 ] * state [ 17 ] ; xx [ 260 ] = xx [
267 ] + xx [ 259 ] ; xx [ 277 ] = xx [ 414 ] * state [ 17 ] ; xx [ 278 ] = xx
[ 268 ] + xx [ 277 ] ; xx [ 279 ] = xx [ 415 ] * state [ 17 ] ; xx [ 280 ] =
xx [ 269 ] + xx [ 279 ] ; xx [ 297 ] = xx [ 260 ] ; xx [ 298 ] = xx [ 278 ] ;
xx [ 299 ] = xx [ 280 ] ; xx [ 438 ] = xx [ 260 ] * xx [ 202 ] ; xx [ 439 ] =
xx [ 278 ] * xx [ 230 ] ; xx [ 440 ] = xx [ 280 ] * xx [ 233 ] ;
pm_math_cross3 ( xx + 297 , xx + 438 , xx + 671 ) ; xx [ 297 ] = xx [ 259 ] ;
xx [ 298 ] = xx [ 277 ] ; xx [ 299 ] = xx [ 279 ] ; pm_math_cross3 ( xx + 267
, xx + 297 , xx + 438 ) ; xx [ 281 ] = xx [ 671 ] + xx [ 202 ] * xx [ 438 ] ;
xx [ 674 ] = xx [ 391 ] ; xx [ 675 ] = xx [ 414 ] ; xx [ 676 ] = xx [ 415 ] ;
xx [ 202 ] = xx [ 672 ] + xx [ 230 ] * xx [ 439 ] ; xx [ 230 ] = xx [ 673 ] +
xx [ 233 ] * xx [ 440 ] ; xx [ 671 ] = xx [ 281 ] ; xx [ 672 ] = xx [ 202 ] ;
xx [ 673 ] = xx [ 230 ] ; xx [ 686 ] = xx [ 267 ] + xx [ 260 ] ; xx [ 687 ] =
xx [ 268 ] + xx [ 278 ] ; xx [ 688 ] = xx [ 269 ] + xx [ 280 ] ; xx [ 267 ] =
- ( xx [ 178 ] * state [ 17 ] ) ; xx [ 268 ] = xx [ 179 ] * state [ 17 ] ; xx
[ 269 ] = - ( xx [ 186 ] * state [ 17 ] ) ; pm_math_cross3 ( xx + 686 , xx +
267 , xx + 728 ) ; pm_math_cross3 ( xx + 256 , xx + 462 , xx + 267 ) ;
pm_math_cross3 ( xx + 256 , xx + 267 , xx + 686 ) ; pm_math_quatInverseXform
( xx + 420 , xx + 686 , xx + 256 ) ; xx [ 178 ] = ( xx [ 728 ] + xx [ 256 ] )
* xx [ 261 ] ; xx [ 179 ] = ( xx [ 729 ] + xx [ 257 ] ) * xx [ 261 ] ; xx [
186 ] = ( xx [ 730 ] + xx [ 258 ] ) * xx [ 261 ] ; xx [ 256 ] = xx [ 178 ] ;
xx [ 257 ] = xx [ 179 ] ; xx [ 258 ] = xx [ 186 ] ; xx [ 233 ] = pm_math_dot3
( xx + 674 , xx + 671 ) + pm_math_dot3 ( xx + 264 , xx + 256 ) ; xx [ 256 ] =
xx [ 233 ] / xx [ 416 ] ; xx [ 264 ] = xx [ 281 ] - xx [ 313 ] * xx [ 256 ] ;
xx [ 265 ] = xx [ 202 ] - xx [ 435 ] * xx [ 256 ] ; xx [ 266 ] = xx [ 230 ] -
xx [ 437 ] * xx [ 256 ] ; pm_math_quatXform ( xx + 420 , xx + 264 , xx + 267
) ; xx [ 264 ] = xx [ 178 ] + xx [ 436 ] * xx [ 256 ] ; xx [ 265 ] = xx [ 179
] - xx [ 449 ] * xx [ 256 ] ; xx [ 266 ] = xx [ 186 ] + xx [ 451 ] * xx [ 256
] ; pm_math_quatXform ( xx + 420 , xx + 264 , xx + 671 ) ; pm_math_cross3 (
xx + 462 , xx + 671 , xx + 264 ) ; xx [ 686 ] = xx [ 102 ] ; xx [ 687 ] = xx
[ 115 ] ; xx [ 688 ] = - xx [ 240 ] ; pm_math_cross3 ( xx + 252 , xx + 686 ,
xx + 728 ) ; pm_math_matrix3x3Xform ( xx + 465 , xx + 728 , xx + 731 ) ; xx [
465 ] = xx [ 252 ] + xx [ 103 ] ; xx [ 466 ] = xx [ 253 ] + xx [ 239 ] ; xx [
467 ] = xx [ 254 ] + xx [ 255 ] ; xx [ 252 ] = xx [ 460 ] * state [ 15 ] ; xx
[ 253 ] = - ( xx [ 461 ] * state [ 15 ] ) ; xx [ 254 ] = - ( xx [ 492 ] *
state [ 15 ] ) ; pm_math_cross3 ( xx + 465 , xx + 252 , xx + 468 ) ;
pm_math_cross3 ( xx + 80 , xx + 453 , xx + 252 ) ; pm_math_cross3 ( xx + 80 ,
xx + 252 , xx + 465 ) ; pm_math_quatInverseXform ( xx + 395 , xx + 465 , xx +
252 ) ; xx [ 103 ] = xx [ 468 ] + xx [ 252 ] ; xx [ 239 ] = xx [ 469 ] + xx [
253 ] ; xx [ 252 ] = xx [ 470 ] + xx [ 254 ] ; xx [ 253 ] = xx [ 103 ] ; xx [
254 ] = xx [ 239 ] ; xx [ 255 ] = xx [ 252 ] ; pm_math_matrix3x3Xform ( xx +
483 , xx + 253 , xx + 465 ) ; xx [ 257 ] = xx [ 731 ] + xx [ 465 ] ; xx [ 258
] = xx [ 274 ] + xx [ 267 ] + xx [ 264 ] + xx [ 257 ] ; xx [ 260 ] = xx [ 732
] + xx [ 466 ] ; xx [ 261 ] = xx [ 275 ] + xx [ 268 ] + xx [ 265 ] + xx [ 260
] ; xx [ 264 ] = xx [ 733 ] + xx [ 467 ] ; xx [ 265 ] = xx [ 276 ] + xx [ 269
] + xx [ 266 ] + xx [ 264 ] ; xx [ 266 ] = xx [ 258 ] ; xx [ 267 ] = xx [ 261
] ; xx [ 268 ] = xx [ 265 ] ; pm_math_matrix3x3TransposeXform ( xx + 483 , xx
+ 728 , xx + 465 ) ; pm_math_matrix3x3Xform ( xx + 515 , xx + 253 , xx + 468
) ; xx [ 253 ] = xx [ 465 ] + xx [ 468 ] ; xx [ 254 ] = xx [ 671 ] + xx [ 253
] ; xx [ 255 ] = xx [ 466 ] + xx [ 469 ] ; xx [ 269 ] = xx [ 672 ] + xx [ 255
] ; xx [ 278 ] = xx [ 467 ] + xx [ 470 ] ; xx [ 280 ] = xx [ 673 ] + xx [ 278
] ; xx [ 465 ] = xx [ 254 ] ; xx [ 466 ] = xx [ 269 ] ; xx [ 467 ] = xx [ 280
] ; xx [ 282 ] = ( pm_math_dot3 ( xx + 441 , xx + 266 ) + pm_math_dot3 ( xx +
493 , xx + 465 ) ) / xx [ 513 ] ; xx [ 266 ] = xx [ 258 ] - xx [ 499 ] * xx [
282 ] ; xx [ 267 ] = xx [ 261 ] - xx [ 500 ] * xx [ 282 ] ; xx [ 268 ] = xx [
265 ] - xx [ 444 ] * xx [ 282 ] ; pm_math_quatXform ( xx + 395 , xx + 266 ,
xx + 465 ) ; xx [ 265 ] = xx [ 254 ] - xx [ 446 ] * xx [ 282 ] ; xx [ 266 ] =
xx [ 269 ] - xx [ 527 ] * xx [ 282 ] ; xx [ 267 ] = xx [ 280 ] - xx [ 512 ] *
xx [ 282 ] ; pm_math_quatXform ( xx + 395 , xx + 265 , xx + 468 ) ;
pm_math_cross3 ( xx + 453 , xx + 468 , xx + 265 ) ; pm_math_quatInverseXform
( xx + 648 , xx + 80 , xx + 471 ) ; xx [ 254 ] = xx [ 472 ] + state [ 13 ] ;
xx [ 483 ] = xx [ 471 ] ; xx [ 484 ] = xx [ 254 ] ; xx [ 485 ] = xx [ 473 ] ;
xx [ 486 ] = xx [ 91 ] * xx [ 471 ] ; xx [ 487 ] = xx [ 254 ] * xx [ 108 ] ;
xx [ 488 ] = xx [ 109 ] * xx [ 473 ] ; pm_math_cross3 ( xx + 483 , xx + 486 ,
xx + 489 ) ; xx [ 258 ] = xx [ 473 ] * state [ 13 ] ; xx [ 261 ] = xx [ 489 ]
- xx [ 91 ] * xx [ 258 ] ; pm_math_cross3 ( xx + 80 , xx + 314 , xx + 483 ) ;
pm_math_cross3 ( xx + 80 , xx + 483 , xx + 486 ) ; pm_math_quatInverseXform (
xx + 648 , xx + 486 , xx + 80 ) ; xx [ 91 ] = xx [ 107 ] * xx [ 82 ] ; xx [
268 ] = input [ 0 ] - ( xx [ 490 ] + xx [ 106 ] * xx [ 91 ] ) ; xx [ 269 ] =
xx [ 268 ] / xx [ 288 ] ; xx [ 280 ] = xx [ 471 ] * state [ 13 ] ; xx [ 285 ]
= xx [ 491 ] + xx [ 109 ] * xx [ 280 ] ; xx [ 483 ] = xx [ 261 ] ; xx [ 484 ]
= xx [ 490 ] + xx [ 108 ] * xx [ 269 ] ; xx [ 485 ] = xx [ 285 ] ;
pm_math_quatXform ( xx + 648 , xx + 483 , xx + 486 ) ; xx [ 109 ] = xx [ 106
] * state [ 13 ] ; xx [ 289 ] = ( ( xx [ 472 ] + xx [ 254 ] ) * xx [ 109 ] +
xx [ 80 ] ) * xx [ 107 ] ; xx [ 80 ] = xx [ 107 ] * ( xx [ 81 ] - ( xx [ 471
] + xx [ 471 ] ) * xx [ 109 ] ) ; xx [ 471 ] = xx [ 289 ] ; xx [ 472 ] = xx [
80 ] ; xx [ 473 ] = xx [ 91 ] + xx [ 305 ] * xx [ 269 ] ; pm_math_quatXform (
xx + 648 , xx + 471 , xx + 483 ) ; pm_math_cross3 ( xx + 314 , xx + 483 , xx
+ 471 ) ; xx [ 514 ] = xx [ 176 ] - xx [ 250 ] * xx [ 217 ] ; xx [ 515 ] = xx
[ 188 ] - xx [ 251 ] * xx [ 217 ] ; xx [ 516 ] = xx [ 181 ] - xx [ 235 ] * xx
[ 217 ] ; pm_math_quatXform ( xx + 143 , xx + 514 , xx + 517 ) ; xx [ 514 ] =
xx [ 191 ] - xx [ 237 ] * xx [ 217 ] ; xx [ 515 ] = xx [ 203 ] - xx [ 286 ] *
xx [ 217 ] ; xx [ 516 ] = xx [ 214 ] - xx [ 271 ] * xx [ 217 ] ;
pm_math_quatXform ( xx + 143 , xx + 514 , xx + 520 ) ; pm_math_cross3 ( xx +
306 , xx + 520 , xx + 514 ) ; xx [ 731 ] = xx [ 291 ] ; xx [ 732 ] = xx [ 236
] ; xx [ 733 ] = xx [ 74 ] ; xx [ 734 ] = xx [ 75 ] ; xx [ 735 ] = xx [ 205 ]
; xx [ 736 ] = xx [ 302 ] ; xx [ 737 ] = xx [ 319 ] ; xx [ 738 ] = xx [ 318 ]
; xx [ 739 ] = xx [ 320 ] ; xx [ 300 ] = - state [ 7 ] ; xx [ 301 ] = xx [ 62
] ; xx [ 302 ] = xx [ 72 ] ; pm_math_cross3 ( xx + 67 , xx + 300 , xx + 318 )
; pm_math_matrix3x3Xform ( xx + 731 , xx + 318 , xx + 300 ) ; xx [ 523 ] = xx
[ 67 ] + xx [ 61 ] ; xx [ 524 ] = xx [ 68 ] + xx [ 70 ] ; xx [ 525 ] = xx [
69 ] + xx [ 73 ] ; xx [ 67 ] = - ( xx [ 270 ] * state [ 7 ] ) ; xx [ 68 ] = -
( xx [ 294 ] * state [ 7 ] ) ; xx [ 69 ] = - ( xx [ 295 ] * state [ 7 ] ) ;
pm_math_cross3 ( xx + 523 , xx + 67 , xx + 72 ) ; pm_math_cross3 ( xx + 57 ,
xx + 310 , xx + 67 ) ; pm_math_cross3 ( xx + 57 , xx + 67 , xx + 523 ) ;
pm_math_quatInverseXform ( xx + 76 , xx + 523 , xx + 57 ) ; xx [ 61 ] = xx [
72 ] + xx [ 57 ] ; xx [ 62 ] = xx [ 73 ] + xx [ 58 ] ; xx [ 57 ] = xx [ 74 ]
+ xx [ 59 ] ; xx [ 67 ] = xx [ 61 ] ; xx [ 68 ] = xx [ 62 ] ; xx [ 69 ] = xx
[ 57 ] ; pm_math_matrix3x3Xform ( xx + 336 , xx + 67 , xx + 72 ) ; xx [ 58 ]
= xx [ 300 ] + xx [ 72 ] ; xx [ 59 ] = xx [ 87 ] + xx [ 241 ] + xx [ 124 ] +
xx [ 465 ] + xx [ 265 ] + xx [ 486 ] + xx [ 471 ] + xx [ 517 ] + xx [ 514 ] +
xx [ 58 ] ; xx [ 70 ] = xx [ 301 ] + xx [ 73 ] ; xx [ 75 ] = xx [ 88 ] + xx [
242 ] + xx [ 125 ] + xx [ 466 ] + xx [ 266 ] + xx [ 487 ] + xx [ 472 ] + xx [
518 ] + xx [ 515 ] + xx [ 70 ] ; xx [ 72 ] = xx [ 302 ] + xx [ 74 ] ; xx [ 73
] = xx [ 89 ] + xx [ 243 ] + xx [ 126 ] + xx [ 467 ] + xx [ 267 ] + xx [ 488
] + xx [ 473 ] + xx [ 519 ] + xx [ 516 ] + xx [ 72 ] ;
pm_math_matrix3x3TransposeXform ( xx + 336 , xx + 318 , xx + 124 ) ;
pm_math_matrix3x3Xform ( xx + 354 , xx + 67 , xx + 241 ) ; xx [ 67 ] = xx [
124 ] + xx [ 241 ] ; xx [ 68 ] = xx [ 244 ] + xx [ 468 ] + xx [ 483 ] + xx [
520 ] + xx [ 67 ] ; xx [ 69 ] = xx [ 125 ] + xx [ 242 ] ; xx [ 74 ] = xx [
245 ] + xx [ 469 ] + xx [ 484 ] + xx [ 521 ] + xx [ 69 ] ; xx [ 81 ] = xx [
126 ] + xx [ 243 ] ; xx [ 82 ] = xx [ 246 ] + xx [ 470 ] + xx [ 485 ] + xx [
522 ] + xx [ 81 ] ; xx [ 124 ] = xx [ 68 ] ; xx [ 125 ] = xx [ 74 ] ; xx [
126 ] = xx [ 82 ] ; xx [ 107 ] = ( input [ 5 ] - ( xx [ 75 ] * xx [ 63 ] - xx
[ 59 ] + xx [ 73 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 124 ) ) ) /
xx [ 364 ] ; xx [ 124 ] = xx [ 59 ] + xx [ 296 ] * xx [ 107 ] ; xx [ 125 ] =
xx [ 75 ] + xx [ 317 ] * xx [ 107 ] ; xx [ 126 ] = xx [ 73 ] + xx [ 83 ] * xx
[ 107 ] ; pm_math_quatXform ( xx + 76 , xx + 124 , xx + 241 ) ; xx [ 124 ] =
xx [ 68 ] + xx [ 321 ] * xx [ 107 ] ; xx [ 125 ] = xx [ 74 ] + xx [ 366 ] *
xx [ 107 ] ; xx [ 126 ] = xx [ 82 ] + xx [ 363 ] * xx [ 107 ] ;
pm_math_quatXform ( xx + 76 , xx + 124 , xx + 73 ) ; pm_math_cross3 ( xx +
310 , xx + 73 , xx + 124 ) ; xx [ 336 ] = xx [ 263 ] ; xx [ 337 ] = xx [ 51 ]
; xx [ 338 ] = xx [ 262 ] ; xx [ 339 ] = xx [ 372 ] ; xx [ 340 ] = xx [ 390 ]
; xx [ 341 ] = xx [ 371 ] ; xx [ 342 ] = xx [ 60 ] ; xx [ 343 ] = xx [ 369 ]
; xx [ 344 ] = xx [ 368 ] ; xx [ 244 ] = - xx [ 38 ] ; xx [ 245 ] = - xx [ 47
] ; xx [ 246 ] = state [ 5 ] ; pm_math_cross3 ( xx + 44 , xx + 244 , xx + 265
) ; pm_math_matrix3x3Xform ( xx + 336 , xx + 265 , xx + 244 ) ; xx [ 300 ] =
xx [ 44 ] + xx [ 40 ] ; xx [ 301 ] = xx [ 45 ] + xx [ 49 ] ; xx [ 302 ] = xx
[ 46 ] + xx [ 50 ] ; xx [ 44 ] = - ( xx [ 324 ] * state [ 5 ] ) ; xx [ 45 ] =
xx [ 325 ] * state [ 5 ] ; xx [ 46 ] = xx [ 348 ] * state [ 5 ] ;
pm_math_cross3 ( xx + 300 , xx + 44 , xx + 49 ) ; pm_math_cross3 ( xx + 33 ,
xx + 528 , xx + 44 ) ; pm_math_cross3 ( xx + 33 , xx + 44 , xx + 300 ) ;
pm_math_quatInverseXform ( xx + 53 , xx + 300 , xx + 33 ) ; xx [ 38 ] = xx [
49 ] + xx [ 33 ] ; xx [ 40 ] = xx [ 50 ] + xx [ 34 ] ; xx [ 33 ] = xx [ 51 ]
+ xx [ 35 ] ; xx [ 44 ] = xx [ 38 ] ; xx [ 45 ] = xx [ 40 ] ; xx [ 46 ] = xx
[ 33 ] ; pm_math_matrix3x3Xform ( xx + 377 , xx + 44 , xx + 49 ) ; xx [ 34 ]
= xx [ 244 ] + xx [ 49 ] ; xx [ 35 ] = xx [ 64 ] + xx [ 241 ] + xx [ 124 ] +
xx [ 34 ] ; xx [ 47 ] = xx [ 246 ] + xx [ 51 ] ; xx [ 59 ] = xx [ 66 ] + xx [
243 ] + xx [ 126 ] + xx [ 47 ] ; xx [ 49 ] = xx [ 245 ] + xx [ 50 ] ; xx [ 50
] = xx [ 65 ] + xx [ 242 ] + xx [ 125 ] + xx [ 49 ] ;
pm_math_matrix3x3TransposeXform ( xx + 377 , xx + 265 , xx + 124 ) ;
pm_math_matrix3x3Xform ( xx + 474 , xx + 44 , xx + 241 ) ; xx [ 44 ] = xx [
124 ] + xx [ 241 ] ; xx [ 45 ] = xx [ 73 ] + xx [ 44 ] ; xx [ 46 ] = xx [ 125
] + xx [ 242 ] ; xx [ 51 ] = xx [ 74 ] + xx [ 46 ] ; xx [ 60 ] = xx [ 126 ] +
xx [ 243 ] ; xx [ 68 ] = xx [ 75 ] + xx [ 60 ] ; xx [ 73 ] = xx [ 45 ] ; xx [
74 ] = xx [ 51 ] ; xx [ 75 ] = xx [ 68 ] ; xx [ 82 ] = ( input [ 4 ] - ( xx [
59 ] - ( xx [ 35 ] * xx [ 39 ] + xx [ 50 ] * xx [ 48 ] ) + pm_math_dot3 ( xx
+ 351 , xx + 73 ) ) ) / xx [ 504 ] ; xx [ 73 ] = xx [ 35 ] + xx [ 349 ] * xx
[ 82 ] ; xx [ 74 ] = xx [ 50 ] + xx [ 52 ] * xx [ 82 ] ; xx [ 75 ] = xx [ 59
] + xx [ 370 ] * xx [ 82 ] ; pm_math_quatXform ( xx + 53 , xx + 73 , xx + 124
) ; xx [ 73 ] = xx [ 45 ] + xx [ 387 ] * xx [ 82 ] ; xx [ 74 ] = xx [ 51 ] +
xx [ 388 ] * xx [ 82 ] ; xx [ 75 ] = xx [ 68 ] + xx [ 448 ] * xx [ 82 ] ;
pm_math_quatXform ( xx + 53 , xx + 73 , xx + 241 ) ; pm_math_cross3 ( xx +
528 , xx + 241 , xx + 73 ) ; xx [ 244 ] = - xx [ 18 ] ; xx [ 245 ] = xx [ 22
] ; xx [ 246 ] = xx [ 26 ] ; pm_math_cross3 ( xx + 15 , xx + 244 , xx + 300 )
; pm_math_matrix3x3Xform ( xx + 547 , xx + 300 , xx + 244 ) ; pm_math_cross3
( xx + 9 , xx + 531 , xx + 336 ) ; pm_math_cross3 ( xx + 9 , xx + 336 , xx +
339 ) ; pm_math_quatInverseXform ( xx + 29 , xx + 339 , xx + 336 ) ; xx [ 18
] = xx [ 541 ] * state [ 3 ] ; xx [ 22 ] = xx [ 386 ] * state [ 3 ] ; xx [ 26
] = xx [ 336 ] - ( ( xx [ 16 ] + xx [ 25 ] ) * xx [ 18 ] + ( xx [ 17 ] + xx [
27 ] ) * xx [ 22 ] ) ; xx [ 16 ] = xx [ 15 ] + xx [ 20 ] ; xx [ 15 ] = xx [
337 ] + xx [ 16 ] * xx [ 18 ] ; xx [ 17 ] = xx [ 16 ] * xx [ 22 ] + xx [ 338
] ; xx [ 336 ] = xx [ 26 ] ; xx [ 337 ] = xx [ 15 ] ; xx [ 338 ] = xx [ 17 ]
; pm_math_matrix3x3Xform ( xx + 566 , xx + 336 , xx + 339 ) ; xx [ 16 ] = xx
[ 244 ] + xx [ 339 ] ; xx [ 18 ] = xx [ 41 ] + xx [ 124 ] + xx [ 73 ] + xx [
16 ] ; xx [ 20 ] = xx [ 245 ] + xx [ 340 ] ; xx [ 22 ] = xx [ 42 ] + xx [ 125
] + xx [ 74 ] + xx [ 20 ] ; xx [ 25 ] = xx [ 246 ] + xx [ 341 ] ; xx [ 27 ] =
xx [ 43 ] + xx [ 126 ] + xx [ 75 ] + xx [ 25 ] ; xx [ 73 ] = xx [ 18 ] ; xx [
74 ] = xx [ 22 ] ; xx [ 75 ] = xx [ 27 ] ; pm_math_matrix3x3TransposeXform (
xx + 566 , xx + 300 , xx + 124 ) ; xx [ 354 ] = xx [ 540 ] + xx [ 600 ] ; xx
[ 355 ] = xx [ 601 ] ; xx [ 356 ] = xx [ 602 ] ; xx [ 357 ] = xx [ 603 ] ; xx
[ 358 ] = xx [ 578 ] ; xx [ 359 ] = xx [ 605 ] ; xx [ 360 ] = xx [ 606 ] ; xx
[ 361 ] = xx [ 607 ] ; xx [ 362 ] = xx [ 580 ] ; pm_math_matrix3x3Xform ( xx
+ 354 , xx + 336 , xx + 244 ) ; xx [ 35 ] = xx [ 125 ] + xx [ 245 ] ; xx [ 45
] = xx [ 242 ] + xx [ 35 ] ; xx [ 50 ] = xx [ 126 ] + xx [ 246 ] ; xx [ 51 ]
= xx [ 243 ] + xx [ 50 ] ; xx [ 59 ] = ( input [ 3 ] - ( pm_math_dot3 ( xx +
556 , xx + 73 ) + xx [ 45 ] * xx [ 386 ] - xx [ 51 ] * xx [ 541 ] ) ) / xx [
582 ] ; xx [ 73 ] = xx [ 18 ] + xx [ 544 ] * xx [ 59 ] ; xx [ 74 ] = xx [ 22
] + xx [ 542 ] * xx [ 59 ] ; xx [ 75 ] = xx [ 27 ] + xx [ 546 ] * xx [ 59 ] ;
pm_math_quatXform ( xx + 29 , xx + 73 , xx + 336 ) ; xx [ 18 ] = xx [ 124 ] +
xx [ 244 ] ; xx [ 73 ] = xx [ 241 ] + xx [ 18 ] + xx [ 197 ] * xx [ 59 ] ; xx
[ 74 ] = xx [ 45 ] + xx [ 579 ] * xx [ 59 ] ; xx [ 75 ] = xx [ 51 ] + xx [
581 ] * xx [ 59 ] ; pm_math_quatXform ( xx + 29 , xx + 73 , xx + 124 ) ;
pm_math_cross3 ( xx + 531 , xx + 124 , xx + 73 ) ; xx [ 241 ] = - ( xx [ 534
] * state [ 1 ] ) ; xx [ 242 ] = - ( xx [ 560 ] * state [ 1 ] ) ; xx [ 243 ]
= - ( xx [ 561 ] * state [ 1 ] ) ; pm_math_cross3 ( xx + 9 , xx + 241 , xx +
244 ) ; pm_math_matrix3x3Xform ( xx + 617 , xx + 244 , xx + 9 ) ; xx [ 241 ]
= xx [ 6 ] + xx [ 336 ] + xx [ 73 ] + xx [ 9 ] ; xx [ 242 ] = xx [ 7 ] + xx [
337 ] + xx [ 74 ] + xx [ 10 ] ; xx [ 243 ] = xx [ 8 ] + xx [ 338 ] + xx [ 75
] + xx [ 11 ] ; pm_math_matrix3x3Xform ( xx + 608 , xx + 244 , xx + 73 ) ; xx
[ 336 ] = xx [ 124 ] + xx [ 73 ] ; xx [ 337 ] = xx [ 125 ] + xx [ 74 ] ; xx [
338 ] = xx [ 126 ] + xx [ 75 ] ; xx [ 124 ] = xx [ 292 ] / xx [ 13 ] ; xx [
125 ] = xx [ 322 ] / xx [ 13 ] ; xx [ 126 ] = xx [ 12 ] / xx [ 13 ] ; xx [
290 ] = - 0.9998464520016095 ; xx [ 291 ] = - 4.627184746475166e-9 ; xx [ 292
] = - 1.4514488742845e-10 ; xx [ 293 ] = 0.01752348195403571 ; xx [ 12 ] = xx
[ 19 ] * state [ 0 ] ; xx [ 19 ] = sin ( xx [ 12 ] ) ; xx [ 339 ] = cos ( xx
[ 12 ] ) ; xx [ 340 ] = - ( xx [ 0 ] * xx [ 19 ] ) ; xx [ 341 ] = xx [ 1 ] *
xx [ 19 ] ; xx [ 342 ] = - ( xx [ 2 ] * xx [ 19 ] ) ; pm_math_quatCompose (
xx + 290 , xx + 339 , xx + 354 ) ; xx [ 12 ] = 9.81 ; xx [ 19 ] = xx [ 12 ] *
xx [ 357 ] ; xx [ 22 ] = xx [ 12 ] * xx [ 355 ] ; xx [ 27 ] = ( xx [ 354 ] *
xx [ 19 ] + xx [ 356 ] * xx [ 22 ] ) * xx [ 110 ] ; xx [ 45 ] = ( xx [ 357 ]
* xx [ 19 ] + xx [ 355 ] * xx [ 22 ] ) * xx [ 110 ] ; xx [ 51 ] = xx [ 110 ]
* ( xx [ 356 ] * xx [ 19 ] - xx [ 354 ] * xx [ 22 ] ) ; xx [ 290 ] = xx [ 27
] ; xx [ 291 ] = xx [ 12 ] - xx [ 45 ] ; xx [ 292 ] = xx [ 51 ] ; xx [ 19 ] =
pm_math_dot3 ( xx + 124 , xx + 290 ) ; xx [ 22 ] = ( input [ 2 ] - (
pm_math_dot3 ( xx + 3 , xx + 241 ) + pm_math_dot3 ( xx + 575 , xx + 336 ) ) )
/ xx [ 13 ] - xx [ 19 ] ; xx [ 124 ] = - ( xx [ 0 ] * xx [ 22 ] ) ; xx [ 125
] = xx [ 1 ] * xx [ 22 ] ; xx [ 126 ] = - ( xx [ 2 ] * xx [ 22 ] ) ;
pm_math_quatInverseXform ( xx + 29 , xx + 124 , xx + 241 ) ; pm_math_cross3 (
xx + 124 , xx + 531 , xx + 290 ) ; xx [ 124 ] = xx [ 27 ] - xx [ 534 ] * xx [
22 ] + xx [ 244 ] + xx [ 290 ] ; xx [ 125 ] = xx [ 245 ] - ( xx [ 560 ] * xx
[ 22 ] + xx [ 45 ] ) + xx [ 291 ] + xx [ 12 ] ; xx [ 126 ] = xx [ 51 ] - xx [
561 ] * xx [ 22 ] + xx [ 246 ] + xx [ 292 ] ; pm_math_quatInverseXform ( xx +
29 , xx + 124 , xx + 290 ) ; xx [ 22 ] = xx [ 59 ] - ( pm_math_dot3 ( xx +
373 , xx + 241 ) + pm_math_dot3 ( xx + 562 , xx + 290 ) ) ; xx [ 124 ] = xx [
241 ] - xx [ 21 ] * xx [ 22 ] + xx [ 300 ] ; xx [ 125 ] = xx [ 242 ] + xx [
23 ] * xx [ 22 ] + xx [ 301 ] ; xx [ 126 ] = xx [ 243 ] + xx [ 24 ] * xx [ 22
] + xx [ 302 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 124 , xx + 241 ) ;
pm_math_cross3 ( xx + 124 , xx + 528 , xx + 336 ) ; xx [ 124 ] = xx [ 290 ] +
xx [ 26 ] + xx [ 336 ] ; xx [ 125 ] = xx [ 291 ] + xx [ 386 ] * xx [ 22 ] +
xx [ 15 ] + xx [ 337 ] ; xx [ 126 ] = xx [ 292 ] - xx [ 541 ] * xx [ 22 ] +
xx [ 17 ] + xx [ 338 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 124 , xx +
290 ) ; xx [ 22 ] = xx [ 82 ] - ( pm_math_dot3 ( xx + 591 , xx + 241 ) +
pm_math_dot3 ( xx + 535 , xx + 290 ) ) ; xx [ 124 ] = xx [ 241 ] - xx [ 39 ]
* xx [ 22 ] + xx [ 265 ] ; xx [ 125 ] = xx [ 242 ] - xx [ 48 ] * xx [ 22 ] +
xx [ 266 ] ; xx [ 126 ] = xx [ 243 ] + xx [ 22 ] + xx [ 267 ] ;
pm_math_quatInverseXform ( xx + 76 , xx + 124 , xx + 241 ) ; pm_math_cross3 (
xx + 124 , xx + 310 , xx + 336 ) ; xx [ 124 ] = xx [ 290 ] - xx [ 324 ] * xx
[ 22 ] + xx [ 38 ] + xx [ 336 ] ; xx [ 125 ] = xx [ 291 ] + xx [ 325 ] * xx [
22 ] + xx [ 40 ] + xx [ 337 ] ; xx [ 126 ] = xx [ 292 ] + xx [ 348 ] * xx [
22 ] + xx [ 33 ] + xx [ 338 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 124
, xx + 290 ) ; xx [ 22 ] = xx [ 107 ] - ( pm_math_dot3 ( xx + 594 , xx + 241
) + pm_math_dot3 ( xx + 597 , xx + 290 ) ) ; xx [ 124 ] = xx [ 241 ] - xx [
22 ] + xx [ 318 ] ; xx [ 125 ] = xx [ 242 ] + xx [ 63 ] * xx [ 22 ] + xx [
319 ] ; xx [ 126 ] = xx [ 243 ] + xx [ 71 ] * xx [ 22 ] + xx [ 320 ] ;
pm_math_quatInverseXform ( xx + 143 , xx + 124 , xx + 241 ) ; xx [ 59 ] = xx
[ 290 ] - xx [ 270 ] * xx [ 22 ] + xx [ 61 ] ; pm_math_cross3 ( xx + 124 , xx
+ 306 , xx + 336 ) ; xx [ 68 ] = xx [ 291 ] - xx [ 294 ] * xx [ 22 ] + xx [
62 ] ; xx [ 82 ] = xx [ 292 ] - xx [ 295 ] * xx [ 22 ] + xx [ 57 ] ; xx [ 290
] = xx [ 59 ] + xx [ 336 ] ; xx [ 291 ] = xx [ 68 ] + xx [ 337 ] ; xx [ 292 ]
= xx [ 82 ] + xx [ 338 ] ; pm_math_quatInverseXform ( xx + 143 , xx + 290 ,
xx + 336 ) ; xx [ 22 ] = xx [ 217 ] + pm_math_dot3 ( xx + 198 , xx + 241 ) +
pm_math_dot3 ( xx + 636 , xx + 336 ) ; xx [ 107 ] = xx [ 507 ] * xx [ 14 ] -
xx [ 92 ] * xx [ 456 ] ; xx [ 109 ] = xx [ 84 ] * xx [ 456 ] - xx [ 14 ] * xx
[ 459 ] ; xx [ 176 ] = xx [ 92 ] * xx [ 459 ] - xx [ 507 ] * xx [ 84 ] ; xx [
181 ] = xx [ 14 ] * xx [ 589 ] - xx [ 583 ] * xx [ 92 ] ; xx [ 188 ] = xx [
583 ] * xx [ 84 ] - xx [ 14 ] * xx [ 457 ] ; xx [ 191 ] = xx [ 92 ] * xx [
457 ] - xx [ 84 ] * xx [ 589 ] ; xx [ 203 ] = xx [ 14 ] * xx [ 458 ] - xx [
92 ] * xx [ 590 ] ; xx [ 205 ] = xx [ 84 ] * xx [ 590 ] - xx [ 501 ] * xx [
14 ] ; xx [ 214 ] = xx [ 501 ] * xx [ 92 ] - xx [ 84 ] * xx [ 458 ] ; xx [
354 ] = xx [ 92 ] * xx [ 107 ] - xx [ 84 ] * xx [ 109 ] ; xx [ 355 ] = xx [
14 ] * xx [ 109 ] - xx [ 92 ] * xx [ 176 ] ; xx [ 356 ] = xx [ 84 ] * xx [
176 ] - xx [ 14 ] * xx [ 107 ] ; xx [ 357 ] = xx [ 92 ] * xx [ 181 ] - xx [
84 ] * xx [ 188 ] ; xx [ 358 ] = xx [ 14 ] * xx [ 188 ] - xx [ 92 ] * xx [
191 ] ; xx [ 359 ] = xx [ 84 ] * xx [ 191 ] - xx [ 14 ] * xx [ 181 ] ; xx [
360 ] = xx [ 92 ] * xx [ 203 ] - xx [ 84 ] * xx [ 205 ] ; xx [ 361 ] = xx [
14 ] * xx [ 205 ] - xx [ 92 ] * xx [ 214 ] ; xx [ 362 ] = xx [ 84 ] * xx [
214 ] - xx [ 14 ] * xx [ 203 ] ; pm_math_matrix3x3Compose ( xx + 354 , xx +
220 , xx + 376 ) ; xx [ 14 ] = xx [ 95 ] * xx [ 212 ] - xx [ 120 ] * xx [ 209
] ; xx [ 84 ] = xx [ 157 ] * xx [ 209 ] - xx [ 215 ] * xx [ 95 ] ; xx [ 92 ]
= xx [ 215 ] * xx [ 120 ] - xx [ 157 ] * xx [ 212 ] ; xx [ 107 ] = xx [ 95 ]
* xx [ 210 ] - xx [ 216 ] * xx [ 120 ] ; xx [ 109 ] = xx [ 216 ] * xx [ 157 ]
- xx [ 95 ] * xx [ 218 ] ; xx [ 176 ] = xx [ 120 ] * xx [ 218 ] - xx [ 157 ]
* xx [ 210 ] ; xx [ 181 ] = xx [ 213 ] * xx [ 95 ] - xx [ 120 ] * xx [ 219 ]
; xx [ 188 ] = xx [ 157 ] * xx [ 219 ] - xx [ 95 ] * xx [ 211 ] ; xx [ 191 ]
= xx [ 120 ] * xx [ 211 ] - xx [ 213 ] * xx [ 157 ] ; xx [ 209 ] = xx [ 120 ]
* xx [ 14 ] - xx [ 157 ] * xx [ 84 ] ; xx [ 210 ] = xx [ 157 ] * xx [ 92 ] -
xx [ 95 ] * xx [ 14 ] ; xx [ 211 ] = xx [ 95 ] * xx [ 84 ] - xx [ 120 ] * xx
[ 92 ] ; xx [ 212 ] = xx [ 120 ] * xx [ 107 ] - xx [ 157 ] * xx [ 109 ] ; xx
[ 213 ] = xx [ 157 ] * xx [ 176 ] - xx [ 95 ] * xx [ 107 ] ; xx [ 214 ] = xx
[ 95 ] * xx [ 109 ] - xx [ 120 ] * xx [ 176 ] ; xx [ 215 ] = xx [ 120 ] * xx
[ 181 ] - xx [ 157 ] * xx [ 188 ] ; xx [ 216 ] = xx [ 157 ] * xx [ 191 ] - xx
[ 95 ] * xx [ 181 ] ; xx [ 217 ] = xx [ 95 ] * xx [ 188 ] - xx [ 120 ] * xx [
191 ] ; pm_math_matrix3x3Compose ( xx + 627 , xx + 209 , xx + 218 ) ; xx [ 14
] = xx [ 130 ] * xx [ 130 ] ; xx [ 84 ] = xx [ 131 ] * xx [ 132 ] ; xx [ 92 ]
= xx [ 130 ] * xx [ 133 ] ; xx [ 95 ] = xx [ 131 ] * xx [ 133 ] ; xx [ 107 ]
= xx [ 130 ] * xx [ 132 ] ; xx [ 109 ] = xx [ 132 ] * xx [ 133 ] ; xx [ 120 ]
= xx [ 130 ] * xx [ 131 ] ; xx [ 209 ] = ( xx [ 14 ] + xx [ 131 ] * xx [ 131
] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 210 ] = xx [ 110 ] * ( xx [ 84 ] - xx [
92 ] ) ; xx [ 211 ] = ( xx [ 95 ] + xx [ 107 ] ) * xx [ 110 ] ; xx [ 212 ] =
( xx [ 84 ] + xx [ 92 ] ) * xx [ 110 ] ; xx [ 213 ] = ( xx [ 14 ] + xx [ 132
] * xx [ 132 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 214 ] = xx [ 110 ] * ( xx [
109 ] - xx [ 120 ] ) ; xx [ 215 ] = xx [ 110 ] * ( xx [ 95 ] - xx [ 107 ] ) ;
xx [ 216 ] = ( xx [ 109 ] + xx [ 120 ] ) * xx [ 110 ] ; xx [ 217 ] = ( xx [
14 ] + xx [ 133 ] * xx [ 133 ] ) * xx [ 110 ] - xx [ 208 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 652 , xx + 290 ) ;
pm_math_matrix3x3PostCross ( xx + 209 , xx + 290 , xx + 465 ) ;
pm_math_matrix3x3PostCross ( xx + 465 , xx + 639 , xx + 209 ) ; xx [ 465 ] =
xx [ 376 ] + xx [ 218 ] + xx [ 110 ] * xx [ 209 ] ; xx [ 466 ] = xx [ 377 ] +
xx [ 219 ] + xx [ 110 ] * xx [ 210 ] ; xx [ 467 ] = xx [ 378 ] + xx [ 220 ] +
xx [ 110 ] * xx [ 211 ] ; xx [ 468 ] = xx [ 379 ] + xx [ 221 ] + xx [ 110 ] *
xx [ 212 ] ; xx [ 469 ] = xx [ 380 ] + xx [ 222 ] + xx [ 110 ] * xx [ 213 ] ;
xx [ 470 ] = xx [ 381 ] + xx [ 223 ] + xx [ 110 ] * xx [ 214 ] ; xx [ 471 ] =
xx [ 382 ] + xx [ 224 ] + xx [ 110 ] * xx [ 215 ] ; xx [ 472 ] = xx [ 383 ] +
xx [ 225 ] + xx [ 110 ] * xx [ 216 ] ; xx [ 473 ] = xx [ 384 ] + xx [ 226 ] +
xx [ 110 ] * xx [ 217 ] ; pm_math_matrix3x3Xform ( xx + 465 , xx + 158 , xx +
209 ) ; pm_math_matrix3x3Xform ( xx + 354 , xx + 161 , xx + 157 ) ; xx [ 212
] = - 6.053573625768829e-3 ; xx [ 213 ] = - 3.654852901401839e-4 ; xx [ 214 ]
= 3.692998254877058e-3 ; pm_math_quatXform ( xx + 143 , xx + 212 , xx + 215 )
; xx [ 14 ] = state [ 9 ] * state [ 9 ] ; xx [ 212 ] = - 0.02929120337862716
; xx [ 213 ] = - 1.753438248787077e-7 ; xx [ 214 ] = 5.141717904270802e-4 ;
pm_math_quatXform ( xx + 151 , xx + 212 , xx + 218 ) ; xx [ 84 ] = state [ 11
] * state [ 11 ] ; xx [ 212 ] = xx [ 218 ] * xx [ 84 ] ; xx [ 213 ] = xx [
219 ] * xx [ 84 ] ; xx [ 214 ] = xx [ 220 ] * xx [ 84 ] ; pm_math_quatXform (
xx + 143 , xx + 212 , xx + 218 ) ; xx [ 212 ] = xx [ 183 ] * state [ 11 ] ;
xx [ 213 ] = xx [ 184 ] * state [ 11 ] ; xx [ 214 ] = xx [ 185 ] * state [ 11
] ; pm_math_cross3 ( xx + 652 , xx + 212 , xx + 183 ) ; pm_math_quatXform (
xx + 143 , xx + 183 , xx + 212 ) ; xx [ 84 ] = state [ 13 ] * state [ 13 ] ;
xx [ 183 ] = xx [ 241 ] - xx [ 22 ] * xx [ 135 ] + xx [ 662 ] ; xx [ 184 ] =
xx [ 242 ] - xx [ 22 ] * xx [ 137 ] + xx [ 663 ] ; xx [ 185 ] = xx [ 243 ] -
xx [ 22 ] * xx [ 138 ] + xx [ 664 ] ; pm_math_quatInverseXform ( xx + 151 ,
xx + 183 , xx + 221 ) ; pm_math_cross3 ( xx + 183 , xx + 161 , xx + 224 ) ;
xx [ 183 ] = xx [ 336 ] + xx [ 22 ] * xx [ 134 ] + xx [ 37 ] + xx [ 224 ] ;
xx [ 184 ] = xx [ 337 ] - xx [ 22 ] * xx [ 139 ] + xx [ 85 ] + xx [ 225 ] ;
xx [ 185 ] = xx [ 338 ] + xx [ 22 ] * xx [ 142 ] + xx [ 93 ] + xx [ 226 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 183 , xx + 224 ) ; xx [ 92 ] = xx
[ 174 ] + pm_math_dot3 ( xx + 584 , xx + 221 ) + pm_math_dot3 ( xx + 645 , xx
+ 224 ) ; pm_math_quatInverseXform ( xx + 648 , xx + 124 , xx + 183 ) ;
pm_math_cross3 ( xx + 124 , xx + 314 , xx + 221 ) ; xx [ 224 ] = xx [ 59 ] +
xx [ 221 ] ; xx [ 225 ] = xx [ 68 ] + xx [ 222 ] ; xx [ 226 ] = xx [ 82 ] +
xx [ 223 ] ; pm_math_quatInverseXform ( xx + 648 , xx + 224 , xx + 221 ) ; xx
[ 95 ] = xx [ 269 ] - ( xx [ 445 ] * xx [ 184 ] + xx [ 505 ] * xx [ 223 ] ) ;
xx [ 107 ] = 0.02619077539188885 ; pm_math_quatInverseXform ( xx + 395 , xx +
124 , xx + 183 ) ; pm_math_cross3 ( xx + 124 , xx + 453 , xx + 221 ) ; xx [
224 ] = xx [ 59 ] + xx [ 221 ] ; xx [ 225 ] = xx [ 68 ] + xx [ 222 ] ; xx [
226 ] = xx [ 82 ] + xx [ 223 ] ; pm_math_quatInverseXform ( xx + 395 , xx +
224 , xx + 221 ) ; xx [ 109 ] = xx [ 282 ] + pm_math_dot3 ( xx + 668 , xx +
183 ) + pm_math_dot3 ( xx + 677 , xx + 221 ) ; xx [ 120 ] = xx [ 392 ] * xx [
102 ] + xx [ 240 ] * xx [ 326 ] ; xx [ 160 ] = xx [ 115 ] * xx [ 326 ] - xx [
102 ] * xx [ 329 ] ; xx [ 174 ] = xx [ 240 ] * xx [ 329 ] + xx [ 392 ] * xx [
115 ] ; xx [ 176 ] = xx [ 102 ] * xx [ 399 ] + xx [ 393 ] * xx [ 240 ] ; xx [
181 ] = xx [ 393 ] * xx [ 115 ] - xx [ 102 ] * xx [ 327 ] ; xx [ 188 ] = xx [
240 ] * xx [ 327 ] + xx [ 115 ] * xx [ 399 ] ; xx [ 191 ] = xx [ 102 ] * xx [
328 ] + xx [ 240 ] * xx [ 400 ] ; xx [ 203 ] = xx [ 115 ] * xx [ 400 ] - xx [
332 ] * xx [ 102 ] ; xx [ 205 ] = xx [ 332 ] * xx [ 240 ] + xx [ 115 ] * xx [
328 ] ; xx [ 336 ] = - ( xx [ 240 ] * xx [ 120 ] + xx [ 115 ] * xx [ 160 ] )
; xx [ 337 ] = xx [ 102 ] * xx [ 160 ] - xx [ 240 ] * xx [ 174 ] ; xx [ 338 ]
= - ( xx [ 115 ] * xx [ 174 ] + xx [ 102 ] * xx [ 120 ] ) ; xx [ 339 ] = - (
xx [ 240 ] * xx [ 176 ] + xx [ 115 ] * xx [ 181 ] ) ; xx [ 340 ] = xx [ 102 ]
* xx [ 181 ] - xx [ 240 ] * xx [ 188 ] ; xx [ 341 ] = - ( xx [ 115 ] * xx [
188 ] + xx [ 102 ] * xx [ 176 ] ) ; xx [ 342 ] = - ( xx [ 240 ] * xx [ 191 ]
+ xx [ 115 ] * xx [ 203 ] ) ; xx [ 343 ] = xx [ 102 ] * xx [ 203 ] - xx [ 240
] * xx [ 205 ] ; xx [ 344 ] = - ( xx [ 115 ] * xx [ 205 ] + xx [ 102 ] * xx [
191 ] ) ; pm_math_matrix3x3Compose ( xx + 336 , xx + 426 , xx + 354 ) ; xx [
102 ] = xx [ 417 ] * xx [ 259 ] - xx [ 279 ] * xx [ 394 ] ; xx [ 115 ] = xx [
277 ] * xx [ 394 ] - xx [ 259 ] * xx [ 412 ] ; xx [ 120 ] = xx [ 279 ] * xx [
412 ] - xx [ 417 ] * xx [ 277 ] ; xx [ 160 ] = xx [ 259 ] * xx [ 424 ] - xx [
418 ] * xx [ 279 ] ; xx [ 174 ] = xx [ 418 ] * xx [ 277 ] - xx [ 259 ] * xx [
410 ] ; xx [ 176 ] = xx [ 279 ] * xx [ 410 ] - xx [ 277 ] * xx [ 424 ] ; xx [
181 ] = xx [ 259 ] * xx [ 411 ] - xx [ 279 ] * xx [ 425 ] ; xx [ 188 ] = xx [
277 ] * xx [ 425 ] - xx [ 413 ] * xx [ 259 ] ; xx [ 191 ] = xx [ 413 ] * xx [
279 ] - xx [ 277 ] * xx [ 411 ] ; xx [ 376 ] = xx [ 279 ] * xx [ 102 ] - xx [
277 ] * xx [ 115 ] ; xx [ 377 ] = xx [ 259 ] * xx [ 115 ] - xx [ 279 ] * xx [
120 ] ; xx [ 378 ] = xx [ 277 ] * xx [ 120 ] - xx [ 259 ] * xx [ 102 ] ; xx [
379 ] = xx [ 279 ] * xx [ 160 ] - xx [ 277 ] * xx [ 174 ] ; xx [ 380 ] = xx [
259 ] * xx [ 174 ] - xx [ 279 ] * xx [ 176 ] ; xx [ 381 ] = xx [ 277 ] * xx [
176 ] - xx [ 259 ] * xx [ 160 ] ; xx [ 382 ] = xx [ 279 ] * xx [ 181 ] - xx [
277 ] * xx [ 188 ] ; xx [ 383 ] = xx [ 259 ] * xx [ 188 ] - xx [ 279 ] * xx [
191 ] ; xx [ 384 ] = xx [ 277 ] * xx [ 191 ] - xx [ 259 ] * xx [ 181 ] ;
pm_math_matrix3x3Compose ( xx + 401 , xx + 376 , xx + 424 ) ; xx [ 102 ] = xx
[ 658 ] * xx [ 658 ] ; xx [ 115 ] = xx [ 659 ] * xx [ 660 ] ; xx [ 120 ] = xx
[ 658 ] * xx [ 661 ] ; xx [ 160 ] = xx [ 659 ] * xx [ 661 ] ; xx [ 174 ] = xx
[ 658 ] * xx [ 660 ] ; xx [ 176 ] = xx [ 660 ] * xx [ 661 ] ; xx [ 181 ] = xx
[ 658 ] * xx [ 659 ] ; xx [ 376 ] = ( xx [ 102 ] + xx [ 659 ] * xx [ 659 ] )
* xx [ 110 ] - xx [ 208 ] ; xx [ 377 ] = xx [ 110 ] * ( xx [ 115 ] - xx [ 120
] ) ; xx [ 378 ] = ( xx [ 160 ] + xx [ 174 ] ) * xx [ 110 ] ; xx [ 379 ] = (
xx [ 115 ] + xx [ 120 ] ) * xx [ 110 ] ; xx [ 380 ] = ( xx [ 102 ] + xx [ 660
] * xx [ 660 ] ) * xx [ 110 ] - xx [ 208 ] ; xx [ 381 ] = xx [ 110 ] * ( xx [
176 ] - xx [ 181 ] ) ; xx [ 382 ] = xx [ 110 ] * ( xx [ 160 ] - xx [ 174 ] )
; xx [ 383 ] = ( xx [ 176 ] + xx [ 181 ] ) * xx [ 110 ] ; xx [ 384 ] = ( xx [
102 ] + xx [ 661 ] * xx [ 661 ] ) * xx [ 110 ] - xx [ 208 ] ;
pm_math_quatInverseXform ( xx + 420 , xx + 686 , xx + 224 ) ;
pm_math_matrix3x3PostCross ( xx + 376 , xx + 224 , xx + 399 ) ;
pm_math_matrix3x3PostCross ( xx + 399 , xx + 297 , xx + 376 ) ; xx [ 399 ] =
xx [ 354 ] + xx [ 424 ] + xx [ 110 ] * xx [ 376 ] ; xx [ 400 ] = xx [ 355 ] +
xx [ 425 ] + xx [ 110 ] * xx [ 377 ] ; xx [ 401 ] = xx [ 356 ] + xx [ 426 ] +
xx [ 110 ] * xx [ 378 ] ; xx [ 402 ] = xx [ 357 ] + xx [ 427 ] + xx [ 110 ] *
xx [ 379 ] ; xx [ 403 ] = xx [ 358 ] + xx [ 428 ] + xx [ 110 ] * xx [ 380 ] ;
xx [ 404 ] = xx [ 359 ] + xx [ 429 ] + xx [ 110 ] * xx [ 381 ] ; xx [ 405 ] =
xx [ 360 ] + xx [ 430 ] + xx [ 110 ] * xx [ 382 ] ; xx [ 406 ] = xx [ 361 ] +
xx [ 431 ] + xx [ 110 ] * xx [ 383 ] ; xx [ 407 ] = xx [ 362 ] + xx [ 432 ] +
xx [ 110 ] * xx [ 384 ] ; pm_math_matrix3x3Xform ( xx + 399 , xx + 683 , xx +
224 ) ; pm_math_matrix3x3Xform ( xx + 336 , xx + 462 , xx + 240 ) ; xx [ 290
] = - 6.053572920788466e-3 ; xx [ 291 ] = - 3.654854167326967e-4 ; xx [ 292 ]
= - 3.69299786485282e-3 ; pm_math_quatXform ( xx + 395 , xx + 290 , xx + 297
) ; xx [ 102 ] = state [ 15 ] * state [ 15 ] ; xx [ 290 ] = -
0.02929120337862713 ; xx [ 291 ] = - 1.753438248866995e-7 ; xx [ 292 ] =
5.141717904270749e-4 ; pm_math_quatXform ( xx + 420 , xx + 290 , xx + 326 ) ;
xx [ 115 ] = state [ 17 ] * state [ 17 ] ; xx [ 290 ] = xx [ 326 ] * xx [ 115
] ; xx [ 291 ] = xx [ 327 ] * xx [ 115 ] ; xx [ 292 ] = xx [ 328 ] * xx [ 115
] ; pm_math_quatXform ( xx + 395 , xx + 290 , xx + 326 ) ; xx [ 290 ] = xx [
665 ] * state [ 17 ] ; xx [ 291 ] = xx [ 666 ] * state [ 17 ] ; xx [ 292 ] =
xx [ 667 ] * state [ 17 ] ; pm_math_cross3 ( xx + 686 , xx + 290 , xx + 336 )
; pm_math_quatXform ( xx + 395 , xx + 336 , xx + 290 ) ; xx [ 115 ] = state [
19 ] * state [ 19 ] ; xx [ 336 ] = xx [ 183 ] - xx [ 109 ] * xx [ 330 ] + xx
[ 728 ] ; xx [ 337 ] = xx [ 184 ] - xx [ 109 ] * xx [ 334 ] + xx [ 729 ] ; xx
[ 338 ] = xx [ 185 ] + xx [ 109 ] * xx [ 350 ] + xx [ 730 ] ;
pm_math_quatInverseXform ( xx + 420 , xx + 336 , xx + 183 ) ; pm_math_cross3
( xx + 336 , xx + 462 , xx + 339 ) ; xx [ 336 ] = xx [ 221 ] - xx [ 109 ] *
xx [ 460 ] + xx [ 103 ] + xx [ 339 ] ; xx [ 337 ] = xx [ 222 ] + xx [ 109 ] *
xx [ 461 ] + xx [ 239 ] + xx [ 340 ] ; xx [ 338 ] = xx [ 223 ] + xx [ 109 ] *
xx [ 492 ] + xx [ 252 ] + xx [ 341 ] ; pm_math_quatInverseXform ( xx + 420 ,
xx + 336 , xx + 221 ) ; xx [ 120 ] = xx [ 256 ] + pm_math_dot3 ( xx + 680 ,
xx + 183 ) + pm_math_dot3 ( xx + 689 , xx + 221 ) ; pm_math_quatInverseXform
( xx + 98 , xx + 124 , xx + 183 ) ; pm_math_cross3 ( xx + 124 , xx + 121 , xx
+ 221 ) ; xx [ 124 ] = xx [ 59 ] + xx [ 221 ] ; xx [ 125 ] = xx [ 68 ] + xx [
222 ] ; xx [ 126 ] = xx [ 82 ] + xx [ 223 ] ; pm_math_quatInverseXform ( xx +
98 , xx + 124 , xx + 221 ) ; xx [ 59 ] = xx [ 232 ] - ( xx [ 206 ] * xx [ 184
] + xx [ 333 ] * xx [ 223 ] ) ; xx [ 336 ] = xx [ 22 ] * xx [ 150 ] - ( xx [
209 ] + xx [ 157 ] + xx [ 215 ] * xx [ 14 ] + xx [ 218 ] + xx [ 110 ] * xx [
212 ] - ( xx [ 84 ] * ( xx [ 106 ] - ( xx [ 169 ] + xx [ 248 ] * xx [ 309 ] )
* xx [ 110 ] ) + xx [ 117 ] * xx [ 447 ] * state [ 13 ] * state [ 13 ] ) ) +
xx [ 92 ] * xx [ 189 ] + xx [ 273 ] * xx [ 95 ] ; xx [ 337 ] = xx [ 22 ] * xx
[ 28 ] - ( xx [ 210 ] + xx [ 158 ] + xx [ 216 ] * xx [ 14 ] + xx [ 219 ] + xx
[ 110 ] * xx [ 213 ] - ( ( xx [ 304 ] - xx [ 90 ] * xx [ 283 ] ) * xx [ 110 ]
* xx [ 84 ] + xx [ 107 ] * xx [ 503 ] * state [ 13 ] * state [ 13 ] ) ) + xx
[ 92 ] * xx [ 36 ] - xx [ 229 ] * xx [ 95 ] ; xx [ 338 ] = xx [ 22 ] * xx [
155 ] - ( xx [ 211 ] + xx [ 159 ] + xx [ 217 ] * xx [ 14 ] + xx [ 220 ] + xx
[ 110 ] * xx [ 214 ] - ( xx [ 110 ] * ( xx [ 309 ] * xx [ 283 ] + xx [ 249 ]
) * xx [ 84 ] + xx [ 107 ] * xx [ 508 ] * state [ 13 ] * state [ 13 ] ) ) +
xx [ 92 ] * xx [ 156 ] + xx [ 170 ] * xx [ 95 ] ; xx [ 339 ] = xx [ 109 ] *
xx [ 247 ] - ( xx [ 224 ] + xx [ 240 ] + xx [ 297 ] * xx [ 102 ] + xx [ 326 ]
+ xx [ 110 ] * xx [ 290 ] - ( xx [ 115 ] * ( xx [ 106 ] - ( xx [ 509 ] + xx [
97 ] * xx [ 112 ] ) * xx [ 110 ] ) + xx [ 117 ] * xx [ 207 ] * state [ 19 ] *
state [ 19 ] ) ) + xx [ 120 ] * xx [ 231 ] + xx [ 129 ] * xx [ 59 ] ; xx [
340 ] = xx [ 109 ] * xx [ 389 ] - ( xx [ 225 ] + xx [ 241 ] + xx [ 298 ] * xx
[ 102 ] + xx [ 327 ] + xx [ 110 ] * xx [ 291 ] - ( ( xx [ 116 ] - xx [ 119 ]
* xx [ 94 ] ) * xx [ 110 ] * xx [ 115 ] + xx [ 107 ] * xx [ 331 ] * state [
19 ] * state [ 19 ] ) ) + xx [ 120 ] * xx [ 365 ] - xx [ 284 ] * xx [ 59 ] ;
xx [ 341 ] = xx [ 109 ] * xx [ 565 ] - ( xx [ 226 ] + xx [ 242 ] + xx [ 299 ]
* xx [ 102 ] + xx [ 328 ] + xx [ 110 ] * xx [ 292 ] - ( xx [ 110 ] * ( xx [
112 ] * xx [ 94 ] + xx [ 128 ] ) * xx [ 115 ] + xx [ 107 ] * xx [ 335 ] *
state [ 19 ] * state [ 19 ] ) ) + xx [ 120 ] * xx [ 526 ] + xx [ 510 ] * xx [
59 ] ; memcpy ( xx + 600 , xx + 692 , 36 * sizeof ( double ) ) ;
factorAndSolveSymmetric ( xx + 600 , 6 , xx + 213 , ii + 0 , xx + 336 , xx +
207 , xx + 731 ) ; xx [ 14 ] = ( xx [ 111 ] - ( xx [ 129 ] * xx [ 210 ] - xx
[ 284 ] * xx [ 211 ] + xx [ 212 ] * xx [ 510 ] ) ) / xx [ 287 ] ; xx [ 109 ]
= xx [ 104 ] ; xx [ 110 ] = xx [ 114 ] + xx [ 108 ] * xx [ 14 ] ; xx [ 111 ]
= xx [ 234 ] ; pm_math_quatXform ( xx + 98 , xx + 109 , xx + 114 ) ; xx [ 109
] = xx [ 238 ] ; xx [ 110 ] = xx [ 86 ] ; xx [ 111 ] = xx [ 96 ] + xx [ 305 ]
* xx [ 14 ] ; pm_math_quatXform ( xx + 98 , xx + 109 , xx + 94 ) ;
pm_math_cross3 ( xx + 121 , xx + 94 , xx + 109 ) ; xx [ 22 ] = ( xx [ 231 ] *
xx [ 210 ] + xx [ 365 ] * xx [ 211 ] + xx [ 526 ] * xx [ 212 ] - xx [ 233 ] )
/ xx [ 416 ] ; xx [ 124 ] = xx [ 281 ] + xx [ 313 ] * xx [ 22 ] ; xx [ 125 ]
= xx [ 202 ] + xx [ 435 ] * xx [ 22 ] ; xx [ 126 ] = xx [ 230 ] + xx [ 437 ]
* xx [ 22 ] ; pm_math_quatXform ( xx + 420 , xx + 124 , xx + 157 ) ; xx [ 124
] = xx [ 178 ] - xx [ 436 ] * xx [ 22 ] ; xx [ 125 ] = xx [ 179 ] + xx [ 449
] * xx [ 22 ] ; xx [ 126 ] = xx [ 186 ] - xx [ 451 ] * xx [ 22 ] ;
pm_math_quatXform ( xx + 420 , xx + 124 , xx + 183 ) ; pm_math_cross3 ( xx +
462 , xx + 183 , xx + 124 ) ; xx [ 59 ] = xx [ 274 ] + xx [ 157 ] + xx [ 124
] + xx [ 257 ] ; xx [ 68 ] = xx [ 275 ] + xx [ 158 ] + xx [ 125 ] + xx [ 260
] ; xx [ 82 ] = xx [ 276 ] + xx [ 159 ] + xx [ 126 ] + xx [ 264 ] ; xx [ 124
] = xx [ 59 ] ; xx [ 125 ] = xx [ 68 ] ; xx [ 126 ] = xx [ 82 ] ; xx [ 84 ] =
xx [ 183 ] + xx [ 253 ] ; xx [ 86 ] = xx [ 184 ] + xx [ 255 ] ; xx [ 90 ] =
xx [ 185 ] + xx [ 278 ] ; xx [ 157 ] = xx [ 84 ] ; xx [ 158 ] = xx [ 86 ] ;
xx [ 159 ] = xx [ 90 ] ; xx [ 92 ] = ( xx [ 247 ] * xx [ 210 ] + xx [ 389 ] *
xx [ 211 ] + xx [ 565 ] * xx [ 212 ] - ( pm_math_dot3 ( xx + 441 , xx + 124 )
+ pm_math_dot3 ( xx + 493 , xx + 157 ) ) ) / xx [ 513 ] ; xx [ 124 ] = xx [
59 ] + xx [ 499 ] * xx [ 92 ] ; xx [ 125 ] = xx [ 68 ] + xx [ 500 ] * xx [ 92
] ; xx [ 126 ] = xx [ 82 ] + xx [ 444 ] * xx [ 92 ] ; pm_math_quatXform ( xx
+ 395 , xx + 124 , xx + 157 ) ; xx [ 124 ] = xx [ 84 ] + xx [ 446 ] * xx [ 92
] ; xx [ 125 ] = xx [ 86 ] + xx [ 527 ] * xx [ 92 ] ; xx [ 126 ] = xx [ 90 ]
+ xx [ 512 ] * xx [ 92 ] ; pm_math_quatXform ( xx + 395 , xx + 124 , xx + 183
) ; pm_math_cross3 ( xx + 453 , xx + 183 , xx + 124 ) ; xx [ 59 ] = ( xx [
268 ] - ( xx [ 273 ] * xx [ 207 ] - xx [ 229 ] * xx [ 208 ] + xx [ 209 ] * xx
[ 170 ] ) ) / xx [ 288 ] ; xx [ 210 ] = xx [ 261 ] ; xx [ 211 ] = xx [ 490 ]
+ xx [ 108 ] * xx [ 59 ] ; xx [ 212 ] = xx [ 285 ] ; pm_math_quatXform ( xx +
648 , xx + 210 , xx + 106 ) ; xx [ 210 ] = xx [ 289 ] ; xx [ 211 ] = xx [ 80
] ; xx [ 212 ] = xx [ 91 ] + xx [ 305 ] * xx [ 59 ] ; pm_math_quatXform ( xx
+ 648 , xx + 210 , xx + 213 ) ; pm_math_cross3 ( xx + 314 , xx + 213 , xx +
210 ) ; xx [ 68 ] = ( xx [ 189 ] * xx [ 207 ] + xx [ 36 ] * xx [ 208 ] + xx [
156 ] * xx [ 209 ] - xx [ 177 ] ) / xx [ 190 ] ; xx [ 176 ] = xx [ 168 ] - xx
[ 173 ] * xx [ 68 ] ; xx [ 177 ] = xx [ 171 ] - xx [ 192 ] * xx [ 68 ] ; xx [
178 ] = xx [ 172 ] - xx [ 193 ] * xx [ 68 ] ; pm_math_quatXform ( xx + 151 ,
xx + 176 , xx + 168 ) ; xx [ 171 ] = xx [ 118 ] + xx [ 194 ] * xx [ 68 ] ; xx
[ 172 ] = xx [ 127 ] - xx [ 195 ] * xx [ 68 ] ; xx [ 173 ] = xx [ 167 ] + xx
[ 196 ] * xx [ 68 ] ; pm_math_quatXform ( xx + 151 , xx + 171 , xx + 117 ) ;
pm_math_cross3 ( xx + 161 , xx + 117 , xx + 127 ) ; xx [ 36 ] = xx [ 496 ] +
xx [ 168 ] + xx [ 127 ] + xx [ 175 ] ; xx [ 80 ] = xx [ 497 ] + xx [ 169 ] +
xx [ 128 ] + xx [ 187 ] ; xx [ 82 ] = xx [ 498 ] + xx [ 170 ] + xx [ 129 ] +
xx [ 180 ] ; xx [ 127 ] = xx [ 36 ] ; xx [ 128 ] = xx [ 80 ] ; xx [ 129 ] =
xx [ 82 ] ; xx [ 84 ] = xx [ 117 ] + xx [ 182 ] ; xx [ 86 ] = xx [ 118 ] + xx
[ 201 ] ; xx [ 90 ] = xx [ 119 ] + xx [ 204 ] ; xx [ 117 ] = xx [ 84 ] ; xx [
118 ] = xx [ 86 ] ; xx [ 119 ] = xx [ 90 ] ; xx [ 91 ] = ( xx [ 150 ] * xx [
207 ] + xx [ 28 ] * xx [ 208 ] + xx [ 155 ] * xx [ 209 ] - ( pm_math_dot3 (
xx + 147 , xx + 127 ) + pm_math_dot3 ( xx + 164 , xx + 117 ) ) ) / xx [ 272 ]
; xx [ 117 ] = xx [ 36 ] + xx [ 250 ] * xx [ 91 ] ; xx [ 118 ] = xx [ 80 ] +
xx [ 251 ] * xx [ 91 ] ; xx [ 119 ] = xx [ 82 ] + xx [ 235 ] * xx [ 91 ] ;
pm_math_quatXform ( xx + 143 , xx + 117 , xx + 127 ) ; xx [ 117 ] = xx [ 84 ]
+ xx [ 237 ] * xx [ 91 ] ; xx [ 118 ] = xx [ 86 ] + xx [ 286 ] * xx [ 91 ] ;
xx [ 119 ] = xx [ 90 ] + xx [ 271 ] * xx [ 91 ] ; pm_math_quatXform ( xx +
143 , xx + 117 , xx + 147 ) ; pm_math_cross3 ( xx + 306 , xx + 147 , xx + 117
) ; xx [ 28 ] = xx [ 87 ] + xx [ 114 ] + xx [ 109 ] + xx [ 157 ] + xx [ 124 ]
+ xx [ 106 ] + xx [ 210 ] + xx [ 127 ] + xx [ 117 ] + xx [ 58 ] ; xx [ 36 ] =
xx [ 88 ] + xx [ 115 ] + xx [ 110 ] + xx [ 158 ] + xx [ 125 ] + xx [ 107 ] +
xx [ 211 ] + xx [ 128 ] + xx [ 118 ] + xx [ 70 ] ; xx [ 58 ] = xx [ 89 ] + xx
[ 116 ] + xx [ 111 ] + xx [ 159 ] + xx [ 126 ] + xx [ 108 ] + xx [ 212 ] + xx
[ 129 ] + xx [ 119 ] + xx [ 72 ] ; xx [ 70 ] = xx [ 94 ] + xx [ 183 ] + xx [
213 ] + xx [ 147 ] + xx [ 67 ] ; xx [ 67 ] = xx [ 95 ] + xx [ 184 ] + xx [
214 ] + xx [ 148 ] + xx [ 69 ] ; xx [ 69 ] = xx [ 96 ] + xx [ 185 ] + xx [
215 ] + xx [ 149 ] + xx [ 81 ] ; xx [ 80 ] = xx [ 70 ] ; xx [ 81 ] = xx [ 67
] ; xx [ 82 ] = xx [ 69 ] ; xx [ 72 ] = ( input [ 5 ] - ( xx [ 36 ] * xx [ 63
] - xx [ 28 ] + xx [ 58 ] * xx [ 71 ] + pm_math_dot3 ( xx + 345 , xx + 80 ) )
) / xx [ 364 ] ; xx [ 80 ] = xx [ 28 ] + xx [ 296 ] * xx [ 72 ] ; xx [ 81 ] =
xx [ 36 ] + xx [ 317 ] * xx [ 72 ] ; xx [ 82 ] = xx [ 58 ] + xx [ 83 ] * xx [
72 ] ; pm_math_quatXform ( xx + 76 , xx + 80 , xx + 86 ) ; xx [ 80 ] = xx [
70 ] + xx [ 321 ] * xx [ 72 ] ; xx [ 81 ] = xx [ 67 ] + xx [ 366 ] * xx [ 72
] ; xx [ 82 ] = xx [ 69 ] + xx [ 363 ] * xx [ 72 ] ; pm_math_quatXform ( xx +
76 , xx + 80 , xx + 94 ) ; pm_math_cross3 ( xx + 310 , xx + 94 , xx + 80 ) ;
xx [ 28 ] = xx [ 64 ] + xx [ 86 ] + xx [ 80 ] + xx [ 34 ] ; xx [ 34 ] = xx [
66 ] + xx [ 88 ] + xx [ 82 ] + xx [ 47 ] ; xx [ 36 ] = xx [ 65 ] + xx [ 87 ]
+ xx [ 81 ] + xx [ 49 ] ; xx [ 47 ] = xx [ 94 ] + xx [ 44 ] ; xx [ 44 ] = xx
[ 95 ] + xx [ 46 ] ; xx [ 46 ] = xx [ 96 ] + xx [ 60 ] ; xx [ 64 ] = xx [ 47
] ; xx [ 65 ] = xx [ 44 ] ; xx [ 66 ] = xx [ 46 ] ; xx [ 49 ] = ( input [ 4 ]
- ( xx [ 34 ] - ( xx [ 28 ] * xx [ 39 ] + xx [ 36 ] * xx [ 48 ] ) +
pm_math_dot3 ( xx + 351 , xx + 64 ) ) ) / xx [ 504 ] ; xx [ 64 ] = xx [ 28 ]
+ xx [ 349 ] * xx [ 49 ] ; xx [ 65 ] = xx [ 36 ] + xx [ 52 ] * xx [ 49 ] ; xx
[ 66 ] = xx [ 34 ] + xx [ 370 ] * xx [ 49 ] ; pm_math_quatXform ( xx + 53 ,
xx + 64 , xx + 80 ) ; xx [ 64 ] = xx [ 47 ] + xx [ 387 ] * xx [ 49 ] ; xx [
65 ] = xx [ 44 ] + xx [ 388 ] * xx [ 49 ] ; xx [ 66 ] = xx [ 46 ] + xx [ 448
] * xx [ 49 ] ; pm_math_quatXform ( xx + 53 , xx + 64 , xx + 86 ) ;
pm_math_cross3 ( xx + 528 , xx + 86 , xx + 64 ) ; xx [ 28 ] = xx [ 41 ] + xx
[ 80 ] + xx [ 64 ] + xx [ 16 ] ; xx [ 16 ] = xx [ 42 ] + xx [ 81 ] + xx [ 65
] + xx [ 20 ] ; xx [ 20 ] = xx [ 43 ] + xx [ 82 ] + xx [ 66 ] + xx [ 25 ] ;
xx [ 41 ] = xx [ 28 ] ; xx [ 42 ] = xx [ 16 ] ; xx [ 43 ] = xx [ 20 ] ; xx [
25 ] = xx [ 87 ] + xx [ 35 ] ; xx [ 34 ] = xx [ 88 ] + xx [ 50 ] ; xx [ 35 ]
= ( input [ 3 ] - ( pm_math_dot3 ( xx + 556 , xx + 41 ) + xx [ 25 ] * xx [
386 ] - xx [ 34 ] * xx [ 541 ] ) ) / xx [ 582 ] ; xx [ 41 ] = xx [ 28 ] + xx
[ 544 ] * xx [ 35 ] ; xx [ 42 ] = xx [ 16 ] + xx [ 542 ] * xx [ 35 ] ; xx [
43 ] = xx [ 20 ] + xx [ 546 ] * xx [ 35 ] ; pm_math_quatXform ( xx + 29 , xx
+ 41 , xx + 64 ) ; xx [ 41 ] = xx [ 86 ] + xx [ 18 ] + xx [ 197 ] * xx [ 35 ]
; xx [ 42 ] = xx [ 25 ] + xx [ 579 ] * xx [ 35 ] ; xx [ 43 ] = xx [ 34 ] + xx
[ 581 ] * xx [ 35 ] ; pm_math_quatXform ( xx + 29 , xx + 41 , xx + 80 ) ;
pm_math_cross3 ( xx + 531 , xx + 80 , xx + 41 ) ; xx [ 86 ] = xx [ 6 ] + xx [
64 ] + xx [ 41 ] + xx [ 9 ] ; xx [ 87 ] = xx [ 7 ] + xx [ 65 ] + xx [ 42 ] +
xx [ 10 ] ; xx [ 88 ] = xx [ 8 ] + xx [ 66 ] + xx [ 43 ] + xx [ 11 ] ; xx [ 6
] = xx [ 80 ] + xx [ 73 ] ; xx [ 7 ] = xx [ 81 ] + xx [ 74 ] ; xx [ 8 ] = xx
[ 82 ] + xx [ 75 ] ; xx [ 9 ] = ( input [ 2 ] - ( pm_math_dot3 ( xx + 3 , xx
+ 86 ) + pm_math_dot3 ( xx + 575 , xx + 6 ) ) ) / xx [ 13 ] - xx [ 19 ] ; xx
[ 3 ] = - ( xx [ 0 ] * xx [ 9 ] ) ; xx [ 4 ] = xx [ 1 ] * xx [ 9 ] ; xx [ 5 ]
= - ( xx [ 2 ] * xx [ 9 ] ) ; pm_math_quatInverseXform ( xx + 29 , xx + 3 ,
xx + 0 ) ; pm_math_cross3 ( xx + 3 , xx + 531 , xx + 6 ) ; xx [ 3 ] = xx [ 27
] - xx [ 534 ] * xx [ 9 ] + xx [ 244 ] + xx [ 6 ] ; xx [ 4 ] = xx [ 245 ] - (
xx [ 560 ] * xx [ 9 ] + xx [ 45 ] ) + xx [ 7 ] + xx [ 12 ] ; xx [ 5 ] = xx [
51 ] - xx [ 561 ] * xx [ 9 ] + xx [ 246 ] + xx [ 8 ] ;
pm_math_quatInverseXform ( xx + 29 , xx + 3 , xx + 6 ) ; xx [ 3 ] = xx [ 35 ]
- ( pm_math_dot3 ( xx + 373 , xx + 0 ) + pm_math_dot3 ( xx + 562 , xx + 6 ) )
; xx [ 10 ] = xx [ 0 ] - xx [ 21 ] * xx [ 3 ] + xx [ 300 ] ; xx [ 11 ] = xx [
1 ] + xx [ 23 ] * xx [ 3 ] + xx [ 301 ] ; xx [ 12 ] = xx [ 2 ] + xx [ 24 ] *
xx [ 3 ] + xx [ 302 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 10 , xx + 0
) ; pm_math_cross3 ( xx + 10 , xx + 528 , xx + 18 ) ; xx [ 10 ] = xx [ 6 ] +
xx [ 26 ] + xx [ 18 ] ; xx [ 11 ] = xx [ 7 ] + xx [ 386 ] * xx [ 3 ] + xx [
15 ] + xx [ 19 ] ; xx [ 12 ] = xx [ 8 ] - xx [ 541 ] * xx [ 3 ] + xx [ 17 ] +
xx [ 20 ] ; pm_math_quatInverseXform ( xx + 53 , xx + 10 , xx + 4 ) ; xx [ 7
] = xx [ 49 ] - ( pm_math_dot3 ( xx + 591 , xx + 0 ) + pm_math_dot3 ( xx +
535 , xx + 4 ) ) ; xx [ 10 ] = xx [ 0 ] - xx [ 39 ] * xx [ 7 ] + xx [ 265 ] ;
xx [ 11 ] = xx [ 1 ] - xx [ 48 ] * xx [ 7 ] + xx [ 266 ] ; xx [ 12 ] = xx [ 2
] + xx [ 7 ] + xx [ 267 ] ; pm_math_quatInverseXform ( xx + 76 , xx + 10 , xx
+ 0 ) ; pm_math_cross3 ( xx + 10 , xx + 310 , xx + 15 ) ; xx [ 10 ] = xx [ 4
] - xx [ 324 ] * xx [ 7 ] + xx [ 38 ] + xx [ 15 ] ; xx [ 11 ] = xx [ 5 ] + xx
[ 325 ] * xx [ 7 ] + xx [ 40 ] + xx [ 16 ] ; xx [ 12 ] = xx [ 6 ] + xx [ 348
] * xx [ 7 ] + xx [ 33 ] + xx [ 17 ] ; pm_math_quatInverseXform ( xx + 76 ,
xx + 10 , xx + 4 ) ; xx [ 8 ] = xx [ 72 ] - ( pm_math_dot3 ( xx + 594 , xx +
0 ) + pm_math_dot3 ( xx + 597 , xx + 4 ) ) ; xx [ 10 ] = xx [ 0 ] - xx [ 8 ]
+ xx [ 318 ] ; xx [ 11 ] = xx [ 1 ] + xx [ 63 ] * xx [ 8 ] + xx [ 319 ] ; xx
[ 12 ] = xx [ 2 ] + xx [ 71 ] * xx [ 8 ] + xx [ 320 ] ;
pm_math_quatInverseXform ( xx + 143 , xx + 10 , xx + 0 ) ; xx [ 13 ] = xx [ 4
] - xx [ 270 ] * xx [ 8 ] + xx [ 61 ] ; pm_math_cross3 ( xx + 10 , xx + 306 ,
xx + 15 ) ; xx [ 4 ] = xx [ 5 ] - xx [ 294 ] * xx [ 8 ] + xx [ 62 ] ; xx [ 5
] = xx [ 6 ] - xx [ 295 ] * xx [ 8 ] + xx [ 57 ] ; xx [ 18 ] = xx [ 13 ] + xx
[ 15 ] ; xx [ 19 ] = xx [ 4 ] + xx [ 16 ] ; xx [ 20 ] = xx [ 5 ] + xx [ 17 ]
; pm_math_quatInverseXform ( xx + 143 , xx + 18 , xx + 15 ) ; xx [ 6 ] = xx [
91 ] - ( pm_math_dot3 ( xx + 198 , xx + 0 ) + pm_math_dot3 ( xx + 636 , xx +
15 ) ) ; xx [ 18 ] = xx [ 0 ] + xx [ 135 ] * xx [ 6 ] + xx [ 662 ] ; xx [ 19
] = xx [ 1 ] + xx [ 137 ] * xx [ 6 ] + xx [ 663 ] ; xx [ 20 ] = xx [ 2 ] + xx
[ 138 ] * xx [ 6 ] + xx [ 664 ] ; pm_math_quatInverseXform ( xx + 151 , xx +
18 , xx + 0 ) ; pm_math_cross3 ( xx + 18 , xx + 161 , xx + 23 ) ; xx [ 18 ] =
xx [ 15 ] - xx [ 134 ] * xx [ 6 ] + xx [ 37 ] + xx [ 23 ] ; xx [ 19 ] = xx [
16 ] + xx [ 139 ] * xx [ 6 ] + xx [ 85 ] + xx [ 24 ] ; xx [ 20 ] = xx [ 17 ]
- xx [ 142 ] * xx [ 6 ] + xx [ 93 ] + xx [ 25 ] ; pm_math_quatInverseXform (
xx + 151 , xx + 18 , xx + 15 ) ; xx [ 18 ] = xx [ 68 ] - ( pm_math_dot3 ( xx
+ 584 , xx + 0 ) + pm_math_dot3 ( xx + 645 , xx + 15 ) ) ;
pm_math_quatInverseXform ( xx + 648 , xx + 10 , xx + 15 ) ; pm_math_cross3 (
xx + 10 , xx + 314 , xx + 19 ) ; xx [ 23 ] = xx [ 13 ] + xx [ 19 ] ; xx [ 24
] = xx [ 4 ] + xx [ 20 ] ; xx [ 25 ] = xx [ 5 ] + xx [ 21 ] ;
pm_math_quatInverseXform ( xx + 648 , xx + 23 , xx + 19 ) ; xx [ 19 ] = xx [
59 ] - ( xx [ 445 ] * xx [ 16 ] + xx [ 505 ] * xx [ 21 ] ) ;
pm_math_quatInverseXform ( xx + 395 , xx + 10 , xx + 23 ) ; pm_math_cross3 (
xx + 10 , xx + 453 , xx + 26 ) ; xx [ 29 ] = xx [ 13 ] + xx [ 26 ] ; xx [ 30
] = xx [ 4 ] + xx [ 27 ] ; xx [ 31 ] = xx [ 5 ] + xx [ 28 ] ;
pm_math_quatInverseXform ( xx + 395 , xx + 29 , xx + 26 ) ; xx [ 20 ] = xx [
92 ] - ( pm_math_dot3 ( xx + 668 , xx + 23 ) + pm_math_dot3 ( xx + 677 , xx +
26 ) ) ; xx [ 29 ] = xx [ 23 ] + xx [ 330 ] * xx [ 20 ] + xx [ 728 ] ; xx [
30 ] = xx [ 24 ] + xx [ 334 ] * xx [ 20 ] + xx [ 729 ] ; xx [ 31 ] = xx [ 25
] - xx [ 350 ] * xx [ 20 ] + xx [ 730 ] ; pm_math_quatInverseXform ( xx + 420
, xx + 29 , xx + 23 ) ; pm_math_cross3 ( xx + 29 , xx + 462 , xx + 32 ) ; xx
[ 29 ] = xx [ 26 ] + xx [ 460 ] * xx [ 20 ] + xx [ 103 ] + xx [ 32 ] ; xx [
30 ] = xx [ 27 ] - xx [ 461 ] * xx [ 20 ] + xx [ 239 ] + xx [ 33 ] ; xx [ 31
] = xx [ 28 ] - xx [ 492 ] * xx [ 20 ] + xx [ 252 ] + xx [ 34 ] ;
pm_math_quatInverseXform ( xx + 420 , xx + 29 , xx + 26 ) ; xx [ 21 ] = xx [
22 ] - ( pm_math_dot3 ( xx + 680 , xx + 23 ) + pm_math_dot3 ( xx + 689 , xx +
26 ) ) ; pm_math_quatInverseXform ( xx + 98 , xx + 10 , xx + 26 ) ;
pm_math_cross3 ( xx + 10 , xx + 121 , xx + 29 ) ; xx [ 10 ] = xx [ 13 ] + xx
[ 29 ] ; xx [ 11 ] = xx [ 4 ] + xx [ 30 ] ; xx [ 12 ] = xx [ 5 ] + xx [ 31 ]
; pm_math_quatInverseXform ( xx + 98 , xx + 10 , xx + 29 ) ; xx [ 4 ] = xx [
14 ] - ( xx [ 206 ] * xx [ 27 ] + xx [ 333 ] * xx [ 31 ] ) ;
pm_math_quatInverseCompose ( xx + 648 , xx + 130 , xx + 10 ) ; xx [ 29 ] = xx
[ 15 ] - xx [ 258 ] ; xx [ 30 ] = xx [ 16 ] + xx [ 19 ] ; xx [ 31 ] = xx [ 17
] + xx [ 280 ] ; pm_math_quatInverseXform ( xx + 10 , xx + 29 , xx + 14 ) ;
xx [ 10 ] = xx [ 0 ] - xx [ 136 ] * xx [ 18 ] + xx [ 642 ] - xx [ 14 ] ; xx [
11 ] = xx [ 1 ] - xx [ 140 ] * xx [ 18 ] + xx [ 643 ] - xx [ 15 ] ; xx [ 12 ]
= xx [ 2 ] - xx [ 141 ] * xx [ 18 ] + xx [ 644 ] - xx [ 16 ] ;
pm_math_quatInverseCompose ( xx + 98 , xx + 658 , xx + 13 ) ; xx [ 0 ] = xx [
26 ] - xx [ 105 ] ; xx [ 1 ] = xx [ 27 ] + xx [ 4 ] ; xx [ 2 ] = xx [ 28 ] +
xx [ 113 ] ; pm_math_quatInverseXform ( xx + 13 , xx + 0 , xx + 26 ) ; xx [ 0
] = xx [ 23 ] + xx [ 391 ] * xx [ 21 ] + xx [ 438 ] - xx [ 26 ] ; xx [ 1 ] =
xx [ 24 ] + xx [ 414 ] * xx [ 21 ] + xx [ 439 ] - xx [ 27 ] ; xx [ 2 ] = xx [
25 ] + xx [ 415 ] * xx [ 21 ] + xx [ 440 ] - xx [ 28 ] ; deriv [ 0 ] = state
[ 1 ] ; deriv [ 1 ] = xx [ 9 ] ; deriv [ 2 ] = state [ 3 ] ; deriv [ 3 ] = xx
[ 3 ] ; deriv [ 4 ] = state [ 5 ] ; deriv [ 5 ] = xx [ 7 ] ; deriv [ 6 ] =
state [ 7 ] ; deriv [ 7 ] = xx [ 8 ] ; deriv [ 8 ] = state [ 9 ] ; deriv [ 9
] = xx [ 6 ] ; deriv [ 10 ] = state [ 11 ] ; deriv [ 11 ] = xx [ 18 ] ; deriv
[ 12 ] = state [ 13 ] ; deriv [ 13 ] = xx [ 19 ] ; deriv [ 14 ] = state [ 15
] ; deriv [ 15 ] = xx [ 20 ] ; deriv [ 16 ] = state [ 17 ] ; deriv [ 17 ] =
xx [ 21 ] ; deriv [ 18 ] = state [ 19 ] ; deriv [ 19 ] = xx [ 4 ] ; deriv [
20 ] = state [ 21 ] ; deriv [ 21 ] = pm_math_dot3 ( xx + 10 , xx + 674 ) ;
deriv [ 22 ] = state [ 23 ] ; deriv [ 23 ] = pm_math_dot3 ( xx + 0 , xx + 655
) ; errorResult [ 0 ] = 0.0 ; return NULL ; }
