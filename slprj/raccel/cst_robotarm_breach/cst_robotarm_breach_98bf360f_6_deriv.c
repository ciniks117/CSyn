#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "cst_robotarm_breach_98bf360f_6_geometries.h"
PmfMessageId cst_robotarm_breach_98bf360f_6_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; int ii [ 5 ] ; double xx [ 947 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ;
( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
0.726474170332262 ; xx [ 1 ] = 0.3673297571223195 ; xx [ 2 ] =
0.5807788988698797 ; xx [ 3 ] = xx [ 0 ] * state [ 1 ] ; xx [ 4 ] = xx [ 1 ]
* state [ 1 ] ; xx [ 5 ] = xx [ 2 ] * state [ 1 ] ; xx [ 6 ] =
2.766712382438614e-4 ; xx [ 7 ] = 2.415859566367722e-4 ; xx [ 8 ] =
1.172082748513591e-4 ; xx [ 9 ] = xx [ 6 ] * xx [ 3 ] ; xx [ 10 ] = xx [ 7 ]
* xx [ 4 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 5 ] ; pm_math_Vector3_cross_ra ( xx
+ 3 , xx + 9 , xx + 12 ) ; xx [ 15 ] = 0.7159504556807283 ; xx [ 16 ] =
0.07585744831336452 ; xx [ 17 ] = 0.4515044164477732 ; xx [ 18 ] =
0.527071488959609 ; xx [ 9 ] = 0.5 ; xx [ 10 ] = xx [ 9 ] * state [ 2 ] ; xx
[ 11 ] = sin ( xx [ 10 ] ) ; xx [ 19 ] = 3.070998455534379e-9 ; xx [ 20 ] =
1.310006828569854e-7 ; xx [ 21 ] = cos ( xx [ 10 ] ) ; xx [ 22 ] = xx [ 11 ]
; xx [ 23 ] = xx [ 19 ] * xx [ 11 ] ; xx [ 24 ] = xx [ 20 ] * xx [ 11 ] ;
pm_math_Quaternion_compose_ra ( xx + 15 , xx + 21 , xx + 25 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 3 , xx + 15 ) ; xx [ 10 ]
= xx [ 15 ] + state [ 3 ] ; xx [ 11 ] = xx [ 19 ] * state [ 3 ] ; xx [ 18 ] =
xx [ 16 ] + xx [ 11 ] ; xx [ 21 ] = xx [ 20 ] * state [ 3 ] ; xx [ 22 ] = xx
[ 17 ] + xx [ 21 ] ; xx [ 29 ] = xx [ 10 ] ; xx [ 30 ] = xx [ 18 ] ; xx [ 31
] = xx [ 22 ] ; xx [ 23 ] = 1.017332637633588e-4 ; xx [ 24 ] =
1.936366299300206e-5 ; xx [ 32 ] = 1.171233704599053e-4 ; xx [ 33 ] = xx [ 23
] * xx [ 10 ] ; xx [ 34 ] = xx [ 24 ] * xx [ 18 ] ; xx [ 35 ] = xx [ 32 ] *
xx [ 22 ] ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 33 , xx + 36 ) ; xx [
39 ] = - 0.5306023599600851 ; xx [ 40 ] = 0.466893522841787 ; xx [ 41 ] = -
0.4674001539794631 ; xx [ 42 ] = 0.5310448851021436 ; xx [ 33 ] = xx [ 9 ] *
state [ 4 ] ; xx [ 34 ] = 9.431509536441641e-4 ; xx [ 35 ] = sin ( xx [ 33 ]
) ; xx [ 43 ] = 0.1270949996850012 ; xx [ 44 ] = 0.9918901005259344 ; xx [ 45
] = cos ( xx [ 33 ] ) ; xx [ 46 ] = - ( xx [ 34 ] * xx [ 35 ] ) ; xx [ 47 ] =
xx [ 43 ] * xx [ 35 ] ; xx [ 48 ] = xx [ 44 ] * xx [ 35 ] ;
pm_math_Quaternion_compose_ra ( xx + 39 , xx + 45 , xx + 49 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 29 , xx + 39 ) ; xx [ 33
] = xx [ 34 ] * state [ 5 ] ; xx [ 35 ] = xx [ 39 ] - xx [ 33 ] ; xx [ 42 ] =
xx [ 43 ] * state [ 5 ] ; xx [ 45 ] = xx [ 40 ] + xx [ 42 ] ; xx [ 46 ] = xx
[ 44 ] * state [ 5 ] ; xx [ 47 ] = xx [ 41 ] + xx [ 46 ] ; xx [ 53 ] = xx [
35 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = xx [ 47 ] ; xx [ 48 ] =
3.097477733212479e-5 ; xx [ 56 ] = 8.327558778049271e-4 ; xx [ 57 ] =
8.215381496527807e-4 ; xx [ 58 ] = xx [ 48 ] * xx [ 35 ] ; xx [ 59 ] = xx [
56 ] * xx [ 45 ] ; xx [ 60 ] = xx [ 57 ] * xx [ 47 ] ;
pm_math_Vector3_cross_ra ( xx + 53 , xx + 58 , xx + 61 ) ; xx [ 64 ] = -
0.3975057134756405 ; xx [ 65 ] = 0.5793752661493048 ; xx [ 66 ] =
0.6060569288980017 ; xx [ 67 ] = 0.3728384471367823 ; xx [ 58 ] = xx [ 9 ] *
state [ 6 ] ; xx [ 59 ] = 0.9580321368312195 ; xx [ 60 ] = sin ( xx [ 58 ] )
; xx [ 68 ] = 3.123739533989145e-3 ; xx [ 69 ] = 0.2866437982059469 ; xx [ 70
] = cos ( xx [ 58 ] ) ; xx [ 71 ] = xx [ 59 ] * xx [ 60 ] ; xx [ 72 ] = - (
xx [ 68 ] * xx [ 60 ] ) ; xx [ 73 ] = - ( xx [ 69 ] * xx [ 60 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 64 , xx + 70 , xx + 74 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 53 , xx + 64 ) ; xx [ 58
] = xx [ 59 ] * state [ 7 ] ; xx [ 60 ] = xx [ 64 ] + xx [ 58 ] ; xx [ 67 ] =
xx [ 68 ] * state [ 7 ] ; xx [ 70 ] = xx [ 65 ] - xx [ 67 ] ; xx [ 71 ] = xx
[ 69 ] * state [ 7 ] ; xx [ 72 ] = xx [ 66 ] - xx [ 71 ] ; xx [ 78 ] = xx [
60 ] ; xx [ 79 ] = xx [ 70 ] ; xx [ 80 ] = xx [ 72 ] ; xx [ 73 ] =
2.014645601427235e-5 ; xx [ 81 ] = 4.125470532812563e-5 ; xx [ 82 ] =
3.927345732036537e-5 ; xx [ 83 ] = xx [ 73 ] * xx [ 60 ] ; xx [ 84 ] = xx [
81 ] * xx [ 70 ] ; xx [ 85 ] = xx [ 82 ] * xx [ 72 ] ;
pm_math_Vector3_cross_ra ( xx + 78 , xx + 83 , xx + 86 ) ; xx [ 89 ] = -
0.215751709792892 ; xx [ 90 ] = - 0.2981849626920737 ; xx [ 91 ] = -
2.033832353854736e-3 ; xx [ 92 ] = - 0.929802554993116 ; xx [ 83 ] = xx [ 9 ]
* state [ 10 ] ; xx [ 84 ] = 0.3826804379272233 ; xx [ 85 ] = sin ( xx [ 83 ]
) ; xx [ 93 ] = 0.9076319526101237 ; xx [ 94 ] = 0.1725106403354957 ; xx [ 95
] = cos ( xx [ 83 ] ) ; xx [ 96 ] = - ( xx [ 84 ] * xx [ 85 ] ) ; xx [ 97 ] =
xx [ 93 ] * xx [ 85 ] ; xx [ 98 ] = xx [ 94 ] * xx [ 85 ] ;
pm_math_Quaternion_compose_ra ( xx + 89 , xx + 95 , xx + 99 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 78 , xx + 89 ) ; xx [ 83
] = xx [ 84 ] * state [ 11 ] ; xx [ 85 ] = xx [ 89 ] - xx [ 83 ] ; xx [ 92 ]
= xx [ 93 ] * state [ 11 ] ; xx [ 95 ] = xx [ 90 ] + xx [ 92 ] ; xx [ 96 ] =
xx [ 94 ] * state [ 11 ] ; xx [ 97 ] = xx [ 91 ] + xx [ 96 ] ; xx [ 103 ] =
xx [ 85 ] ; xx [ 104 ] = xx [ 95 ] ; xx [ 105 ] = xx [ 97 ] ; xx [ 98 ] =
2.847660648460735e-5 ; xx [ 106 ] = 3.364377476814123e-5 ; xx [ 107 ] =
1.81741742323045e-5 ; xx [ 108 ] = xx [ 98 ] * xx [ 85 ] ; xx [ 109 ] = xx [
106 ] * xx [ 95 ] ; xx [ 110 ] = xx [ 107 ] * xx [ 97 ] ;
pm_math_Vector3_cross_ra ( xx + 103 , xx + 108 , xx + 111 ) ; xx [ 108 ] =
0.5912864502323997 ; xx [ 109 ] = xx [ 9 ] * state [ 12 ] ; xx [ 110 ] = sin
( xx [ 109 ] ) ; xx [ 114 ] = 0.04451361391915684 ; xx [ 115 ] = cos ( xx [
109 ] ) ; xx [ 109 ] = xx [ 108 ] * xx [ 110 ] - xx [ 114 ] * xx [ 115 ] ; xx
[ 116 ] = 0.6953254828680254 ; xx [ 117 ] = 0.4061050908592153 ; xx [ 118 ] =
xx [ 116 ] * xx [ 115 ] + xx [ 117 ] * xx [ 110 ] ; xx [ 119 ] = - xx [ 118 ]
; xx [ 120 ] = xx [ 116 ] * xx [ 110 ] - xx [ 117 ] * xx [ 115 ] ; xx [ 116 ]
= xx [ 114 ] * xx [ 110 ] + xx [ 108 ] * xx [ 115 ] ; xx [ 108 ] = - xx [ 116
] ; xx [ 121 ] = xx [ 109 ] ; xx [ 122 ] = xx [ 119 ] ; xx [ 123 ] = xx [ 120
] ; xx [ 124 ] = xx [ 108 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 ,
xx + 103 , xx + 125 ) ; xx [ 110 ] = xx [ 127 ] + state [ 13 ] ; xx [ 128 ] =
xx [ 125 ] ; xx [ 129 ] = xx [ 126 ] ; xx [ 130 ] = xx [ 110 ] ; xx [ 114 ] =
5.619493611722928e-8 ; xx [ 115 ] = 5.820937372687287e-8 ; xx [ 117 ] =
9.0955775037427e-8 ; xx [ 131 ] = xx [ 114 ] * xx [ 125 ] ; xx [ 132 ] = xx [
115 ] * xx [ 126 ] ; xx [ 133 ] = xx [ 117 ] * xx [ 110 ] ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 131 , xx + 134 ) ; xx [ 131 ] =
2.0 ; xx [ 132 ] = xx [ 9 ] * state [ 18 ] ; xx [ 133 ] = cos ( xx [ 132 ] )
; xx [ 137 ] = sin ( xx [ 132 ] ) ; xx [ 132 ] = xx [ 133 ] * xx [ 126 ] - xx
[ 137 ] * xx [ 125 ] ; xx [ 138 ] = xx [ 125 ] + xx [ 131 ] * xx [ 132 ] * xx
[ 137 ] ; xx [ 139 ] = xx [ 126 ] - xx [ 131 ] * xx [ 132 ] * xx [ 133 ] ; xx
[ 132 ] = xx [ 110 ] - xx [ 131 ] * ( xx [ 110 ] * xx [ 133 ] * xx [ 133 ] +
xx [ 110 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 140 ] = xx [ 132 ] - state [ 19
] ; xx [ 141 ] = 1.089672117032557e-9 ; xx [ 142 ] = 1.562996140588988e-8 ;
xx [ 143 ] = 1.642066027552814e-8 ; xx [ 144 ] = xx [ 141 ] * xx [ 138 ] ; xx
[ 145 ] = xx [ 142 ] * xx [ 139 ] ; xx [ 146 ] = xx [ 143 ] * xx [ 140 ] ;
pm_math_Vector3_cross_ra ( xx + 138 , xx + 144 , xx + 147 ) ; xx [ 144 ] = -
0.9899003997337941 ; xx [ 150 ] = xx [ 144 ] ; xx [ 151 ] =
0.01994045583473794 ; xx [ 152 ] = 0.09771574456570448 ; xx [ 153 ] =
0.1007532138045611 ; xx [ 145 ] = xx [ 9 ] * state [ 20 ] ; xx [ 146 ] =
0.1974758392319079 ; xx [ 154 ] = sin ( xx [ 145 ] ) ; xx [ 155 ] =
0.0197877797947617 ; xx [ 156 ] = 0.9801080229701458 ; xx [ 157 ] = cos ( xx
[ 145 ] ) ; xx [ 158 ] = - ( xx [ 146 ] * xx [ 154 ] ) ; xx [ 159 ] = xx [
155 ] * xx [ 154 ] ; xx [ 160 ] = - ( xx [ 156 ] * xx [ 154 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 150 , xx + 157 , xx + 161 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 138 , xx + 150 ) ; xx [
145 ] = xx [ 146 ] * state [ 21 ] ; xx [ 153 ] = xx [ 150 ] - xx [ 145 ] ; xx
[ 154 ] = xx [ 155 ] * state [ 21 ] ; xx [ 157 ] = xx [ 151 ] + xx [ 154 ] ;
xx [ 158 ] = xx [ 156 ] * state [ 21 ] ; xx [ 159 ] = xx [ 152 ] - xx [ 158 ]
; xx [ 165 ] = xx [ 153 ] ; xx [ 166 ] = xx [ 157 ] ; xx [ 167 ] = xx [ 159 ]
; xx [ 160 ] = 3.113589328617407e-7 ; xx [ 168 ] = 1.145118244121267e-6 ; xx
[ 169 ] = 9.572231133423512e-7 ; xx [ 170 ] = xx [ 160 ] * xx [ 153 ] ; xx [
171 ] = xx [ 168 ] * xx [ 157 ] ; xx [ 172 ] = xx [ 169 ] * xx [ 159 ] ;
pm_math_Vector3_cross_ra ( xx + 165 , xx + 170 , xx + 173 ) ; xx [ 165 ] = -
xx [ 145 ] ; xx [ 166 ] = xx [ 154 ] ; xx [ 167 ] = - xx [ 158 ] ;
pm_math_Vector3_cross_ra ( xx + 150 , xx + 165 , xx + 170 ) ; xx [ 176 ] = xx
[ 173 ] + xx [ 160 ] * xx [ 170 ] ; xx [ 177 ] = 6.148586656922351e-8 ; xx [
178 ] = xx [ 120 ] * xx [ 137 ] - xx [ 118 ] * xx [ 133 ] ; xx [ 179 ] = xx [
109 ] * xx [ 133 ] + xx [ 116 ] * xx [ 137 ] ; xx [ 180 ] = xx [ 109 ] * xx [
137 ] - xx [ 116 ] * xx [ 133 ] ; xx [ 181 ] = xx [ 118 ] * xx [ 137 ] + xx [
120 ] * xx [ 133 ] ; xx [ 182 ] = - xx [ 181 ] ; xx [ 183 ] = - xx [ 178 ] ;
xx [ 184 ] = xx [ 179 ] ; xx [ 185 ] = xx [ 180 ] ; xx [ 186 ] = xx [ 182 ] ;
pm_math_Quaternion_compose_ra ( xx + 183 , xx + 161 , xx + 187 ) ; xx [ 191 ]
= 0.1955743002614654 ; xx [ 192 ] = - 0.9789023362583088 ; xx [ 193 ] = -
0.05916848101196455 ; pm_math_Quaternion_xform_ra ( xx + 187 , xx + 191 , xx
+ 194 ) ; xx [ 191 ] = 0.9392290339368587 ; xx [ 197 ] = 0.3415522478515933 ;
xx [ 198 ] = - 0.03450918424939525 ; xx [ 199 ] = xx [ 191 ] ; xx [ 192 ] =
pm_math_Vector3_dot_ra ( xx + 194 , xx + 197 ) ; xx [ 193 ] = xx [ 133 ] * xx
[ 162 ] + xx [ 137 ] * xx [ 163 ] ; xx [ 194 ] = xx [ 133 ] * xx [ 161 ] + xx
[ 137 ] * xx [ 164 ] ; xx [ 195 ] = xx [ 137 ] * xx [ 161 ] - xx [ 133 ] * xx
[ 164 ] ; xx [ 196 ] = xx [ 133 ] * xx [ 163 ] - xx [ 137 ] * xx [ 162 ] ; xx
[ 200 ] = - xx [ 193 ] ; xx [ 201 ] = xx [ 194 ] ; xx [ 202 ] = xx [ 195 ] ;
xx [ 203 ] = xx [ 196 ] ; pm_math_Quaternion_compose_ra ( xx + 121 , xx + 200
, xx + 204 ) ; xx [ 200 ] = 1.0 ; xx [ 201 ] = xx [ 131 ] * ( xx [ 195 ] * xx
[ 193 ] + xx [ 196 ] * xx [ 194 ] ) ; xx [ 202 ] = xx [ 131 ] * ( xx [ 196 ]
* xx [ 195 ] - xx [ 194 ] * xx [ 193 ] ) ; xx [ 203 ] = xx [ 200 ] - xx [ 131
] * ( xx [ 194 ] * xx [ 194 ] + xx [ 195 ] * xx [ 195 ] ) ; xx [ 193 ] =
0.9606008463440403 ; xx [ 194 ] = 0.2033682862169496 ; xx [ 208 ] = xx [ 193
] ; xx [ 209 ] = xx [ 194 ] ; xx [ 210 ] = - 0.1894395791916104 ;
pm_math_Vector3_cross_ra ( xx + 201 , xx + 208 , xx + 211 ) ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 211 , xx + 214 ) ; xx [ 195 ] =
pm_math_Vector3_dot_ra ( xx + 214 , xx + 197 ) ; xx [ 196 ] =
5.434643321992885e-6 ; ii [ 0 ] = factorSymmetricPosDef ( xx + 196 , 1 , xx +
211 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 211 ] = xx [ 192 ] / xx [ 196 ] ; xx [ 212 ] =
2.26593476536358e-8 ; xx [ 213 ] = 9.381820531592997e-7 ; xx [ 214 ] = - ( xx
[ 177 ] * xx [ 211 ] ) ; xx [ 215 ] = xx [ 212 ] * xx [ 211 ] ; xx [ 216 ] =
- ( xx [ 213 ] * xx [ 211 ] ) ; pm_math_Quaternion_xform_ra ( xx + 161 , xx +
214 , xx + 217 ) ; xx [ 214 ] = - 0.0265553585823144 ; xx [ 215 ] = -
1.235088037631146e-3 ; xx [ 216 ] = - 2.882515487549136e-3 ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 214 , xx + 220 ) ; xx [ 214 ] =
8.500000000000004e-3 + xx [ 220 ] ; xx [ 223 ] = - xx [ 214 ] ; xx [ 224 ] =
- xx [ 221 ] ; xx [ 225 ] = 9.999999999999992e-4 - xx [ 222 ] ; xx [ 215 ] =
8.776253114212809e-6 ; xx [ 216 ] = 1.762640151658535e-4 ; xx [ 220 ] =
5.326934730175448e-6 ; xx [ 226 ] = xx [ 215 ] * xx [ 211 ] ; xx [ 227 ] = -
( xx [ 216 ] * xx [ 211 ] ) ; xx [ 228 ] = - ( xx [ 220 ] * xx [ 211 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 226 , xx + 229 ) ;
pm_math_Vector3_cross_ra ( xx + 223 , xx + 229 , xx + 226 ) ; xx [ 222 ] = xx
[ 219 ] + xx [ 228 ] ; xx [ 232 ] = 8.500005402767106e-3 ; xx [ 233 ] = xx [
161 ] * xx [ 161 ] ; xx [ 234 ] = xx [ 162 ] * xx [ 162 ] ; xx [ 235 ] = xx [
131 ] * ( xx [ 233 ] + xx [ 234 ] ) - xx [ 200 ] ; xx [ 236 ] = xx [ 162 ] *
xx [ 163 ] ; xx [ 237 ] = xx [ 161 ] * xx [ 164 ] ; xx [ 238 ] = xx [ 131 ] *
( xx [ 236 ] - xx [ 237 ] ) ; xx [ 239 ] = xx [ 162 ] * xx [ 164 ] ; xx [ 240
] = xx [ 161 ] * xx [ 163 ] ; xx [ 241 ] = xx [ 131 ] * ( xx [ 239 ] + xx [
240 ] ) ; xx [ 242 ] = xx [ 131 ] * ( xx [ 236 ] + xx [ 237 ] ) ; xx [ 236 ]
= xx [ 163 ] * xx [ 163 ] ; xx [ 237 ] = xx [ 131 ] * ( xx [ 233 ] + xx [ 236
] ) - xx [ 200 ] ; xx [ 243 ] = xx [ 163 ] * xx [ 164 ] ; xx [ 244 ] = xx [
161 ] * xx [ 162 ] ; xx [ 245 ] = xx [ 131 ] * ( xx [ 243 ] - xx [ 244 ] ) ;
xx [ 246 ] = xx [ 131 ] * ( xx [ 239 ] - xx [ 240 ] ) ; xx [ 247 ] = xx [ 131
] * ( xx [ 243 ] + xx [ 244 ] ) ; xx [ 248 ] = xx [ 131 ] * ( xx [ 233 ] + xx
[ 164 ] * xx [ 164 ] ) - xx [ 200 ] ; xx [ 249 ] = xx [ 235 ] ; xx [ 250 ] =
xx [ 238 ] ; xx [ 251 ] = xx [ 241 ] ; xx [ 252 ] = xx [ 242 ] ; xx [ 253 ] =
xx [ 237 ] ; xx [ 254 ] = xx [ 245 ] ; xx [ 255 ] = xx [ 246 ] ; xx [ 256 ] =
xx [ 247 ] ; xx [ 257 ] = xx [ 248 ] ; xx [ 233 ] = xx [ 215 ] / xx [ 196 ] ;
xx [ 258 ] = xx [ 216 ] / xx [ 196 ] ; xx [ 259 ] = xx [ 220 ] / xx [ 196 ] ;
xx [ 260 ] = xx [ 177 ] * xx [ 233 ] ; xx [ 261 ] = - ( xx [ 177 ] * xx [ 258
] ) ; xx [ 262 ] = - ( xx [ 177 ] * xx [ 259 ] ) ; xx [ 263 ] = - ( xx [ 212
] * xx [ 233 ] ) ; xx [ 264 ] = xx [ 212 ] * xx [ 258 ] ; xx [ 265 ] = xx [
212 ] * xx [ 259 ] ; xx [ 266 ] = xx [ 213 ] * xx [ 233 ] ; xx [ 267 ] = - (
xx [ 213 ] * xx [ 258 ] ) ; xx [ 268 ] = - ( xx [ 213 ] * xx [ 259 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 260 , xx + 249 , xx + 269 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 249 , xx + 269 , xx + 260 ) ; xx [ 269 ]
= 6.923747236765231e-3 ; xx [ 270 ] = xx [ 216 ] * xx [ 233 ] ; xx [ 271 ] =
xx [ 220 ] * xx [ 233 ] ; xx [ 272 ] = - ( xx [ 220 ] * xx [ 258 ] ) ; xx [
273 ] = xx [ 269 ] - xx [ 215 ] * xx [ 233 ] ; xx [ 274 ] = xx [ 270 ] ; xx [
275 ] = xx [ 271 ] ; xx [ 276 ] = xx [ 270 ] ; xx [ 277 ] = xx [ 269 ] - xx [
216 ] * xx [ 258 ] ; xx [ 278 ] = xx [ 272 ] ; xx [ 279 ] = xx [ 271 ] ; xx [
280 ] = xx [ 272 ] ; xx [ 281 ] = xx [ 269 ] - xx [ 220 ] * xx [ 259 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 273 , xx + 249 , xx + 282 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 249 , xx + 282 , xx + 270 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 270 , xx + 223 , xx + 279 ) ; xx [ 288
] = xx [ 267 ] - xx [ 284 ] ; xx [ 289 ] = 2.534418181099341e-9 ; xx [ 290 ]
= xx [ 266 ] - xx [ 281 ] ; xx [ 291 ] = xx [ 177 ] / xx [ 196 ] ; xx [ 292 ]
= xx [ 212 ] * xx [ 291 ] ; xx [ 293 ] = - ( xx [ 213 ] * xx [ 291 ] ) ; xx [
294 ] = xx [ 212 ] / xx [ 196 ] ; xx [ 295 ] = xx [ 213 ] * xx [ 294 ] ; xx [
296 ] = xx [ 160 ] - xx [ 177 ] * xx [ 291 ] ; xx [ 297 ] = xx [ 292 ] ; xx [
298 ] = xx [ 293 ] ; xx [ 299 ] = xx [ 292 ] ; xx [ 300 ] = xx [ 168 ] - xx [
212 ] * xx [ 294 ] ; xx [ 301 ] = xx [ 295 ] ; xx [ 302 ] = xx [ 293 ] ; xx [
303 ] = xx [ 295 ] ; xx [ 304 ] = xx [ 169 ] - 8.80185564870199e-13 / xx [
196 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 296 , xx + 249 , xx +
305 ) ; pm_math_Matrix3x3_compose_ra ( xx + 249 , xx + 305 , xx + 295 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 260 , xx + 223 , xx + 249 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 279 , xx + 223 , xx + 304 ) ; xx [ 160 ]
= xx [ 143 ] + xx [ 303 ] - xx [ 257 ] - xx [ 257 ] - xx [ 312 ] ; xx [ 266 ]
= xx [ 232 ] * xx [ 288 ] - xx [ 289 ] * xx [ 290 ] - xx [ 160 ] ; xx [ 313 ]
= xx [ 131 ] * ( xx [ 240 ] - xx [ 239 ] ) ; xx [ 314 ] = - ( xx [ 131 ] * (
xx [ 244 ] + xx [ 243 ] ) ) ; xx [ 315 ] = xx [ 131 ] * ( xx [ 234 ] + xx [
236 ] ) - xx [ 200 ] ; pm_math_Vector3_cross_ra ( xx + 313 , xx + 208 , xx +
316 ) ; pm_math_Quaternion_xform_ra ( xx + 187 , xx + 316 , xx + 319 ) ; xx [
234 ] = pm_math_Vector3_dot_ra ( xx + 319 , xx + 197 ) ; xx [ 236 ] =
4.48459871091451e-4 ; xx [ 239 ] = xx [ 236 ] + xx [ 274 ] ; xx [ 240 ] = xx
[ 232 ] * xx [ 239 ] - xx [ 289 ] * xx [ 273 ] - xx [ 288 ] ; xx [ 243 ] = xx
[ 236 ] + xx [ 270 ] ; xx [ 244 ] = xx [ 232 ] * xx [ 271 ] - xx [ 289 ] * xx
[ 243 ] - xx [ 290 ] ; xx [ 267 ] = xx [ 232 ] * xx [ 240 ] - xx [ 289 ] * xx
[ 244 ] - xx [ 266 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 267 , 1 , xx +
270 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 270 ] = ( xx [ 234 ] - ( xx [ 232 ] * xx [ 230 ] - xx
[ 289 ] * xx [ 229 ] - xx [ 222 ] ) ) / xx [ 267 ] ; xx [ 274 ] = xx [ 222 ]
+ xx [ 266 ] * xx [ 270 ] ; xx [ 222 ] = xx [ 289 ] * xx [ 133 ] - xx [ 232 ]
* xx [ 137 ] ; xx [ 281 ] = xx [ 232 ] + xx [ 131 ] * xx [ 222 ] * xx [ 137 ]
; xx [ 284 ] = xx [ 289 ] - xx [ 131 ] * xx [ 222 ] * xx [ 133 ] ; xx [ 222 ]
= 7.500000000000001e-3 - xx [ 284 ] ; xx [ 292 ] = 6.499999983768677e-3 ; xx
[ 316 ] = - xx [ 281 ] ; xx [ 317 ] = xx [ 222 ] ; xx [ 318 ] = - (
7.707894736842105e-3 + xx [ 292 ] - xx [ 131 ] * ( xx [ 292 ] * xx [ 133 ] *
xx [ 133 ] + xx [ 292 ] * xx [ 137 ] * xx [ 137 ] ) ) ; xx [ 292 ] = xx [ 229
] + xx [ 244 ] * xx [ 270 ] ; xx [ 229 ] = xx [ 230 ] + xx [ 240 ] * xx [ 270
] ; xx [ 230 ] = xx [ 229 ] * xx [ 133 ] - xx [ 292 ] * xx [ 137 ] ; xx [ 293
] = xx [ 292 ] + xx [ 131 ] * xx [ 230 ] * xx [ 137 ] ; xx [ 292 ] = xx [ 229
] - xx [ 131 ] * xx [ 230 ] * xx [ 133 ] ; xx [ 229 ] = xx [ 268 ] - xx [ 287
] ; xx [ 230 ] = xx [ 232 ] * xx [ 277 ] - xx [ 289 ] * xx [ 276 ] - xx [ 229
] ; xx [ 268 ] = xx [ 231 ] + xx [ 230 ] * xx [ 270 ] ; xx [ 231 ] = xx [ 268
] - xx [ 131 ] * ( xx [ 268 ] * xx [ 133 ] * xx [ 133 ] + xx [ 268 ] * xx [
137 ] * xx [ 137 ] ) ; xx [ 319 ] = xx [ 293 ] ; xx [ 320 ] = xx [ 292 ] ; xx
[ 321 ] = xx [ 231 ] ; pm_math_Vector3_cross_ra ( xx + 316 , xx + 319 , xx +
322 ) ; xx [ 268 ] = xx [ 274 ] - xx [ 131 ] * ( xx [ 274 ] * xx [ 133 ] * xx
[ 133 ] + xx [ 274 ] * xx [ 137 ] * xx [ 137 ] ) + xx [ 324 ] ; xx [ 274 ] =
6.11133899174537e-11 ; xx [ 287 ] = 6.31742519402702e-9 ; xx [ 319 ] = xx [
266 ] / xx [ 267 ] ; xx [ 320 ] = xx [ 131 ] * xx [ 133 ] * xx [ 133 ] - xx [
200 ] ; xx [ 321 ] = xx [ 260 ] - xx [ 279 ] ; xx [ 260 ] = xx [ 261 ] - xx [
282 ] ; xx [ 261 ] = xx [ 297 ] - xx [ 251 ] - xx [ 255 ] - xx [ 306 ] ; xx [
279 ] = xx [ 232 ] * xx [ 260 ] - xx [ 289 ] * xx [ 321 ] - xx [ 261 ] ; xx [
282 ] = xx [ 244 ] / xx [ 267 ] ; xx [ 325 ] = xx [ 321 ] - xx [ 279 ] * xx [
282 ] ; xx [ 326 ] = xx [ 133 ] * xx [ 137 ] ; xx [ 327 ] = xx [ 131 ] * xx [
326 ] ; xx [ 328 ] = xx [ 240 ] / xx [ 267 ] ; xx [ 329 ] = xx [ 260 ] - xx [
279 ] * xx [ 328 ] ; xx [ 330 ] = xx [ 320 ] * xx [ 325 ] + xx [ 327 ] * xx [
329 ] ; xx [ 331 ] = xx [ 263 ] - xx [ 280 ] ; xx [ 263 ] = xx [ 264 ] - xx [
283 ] ; xx [ 264 ] = xx [ 300 ] - xx [ 254 ] - xx [ 256 ] - xx [ 309 ] ; xx [
280 ] = xx [ 232 ] * xx [ 263 ] - xx [ 289 ] * xx [ 331 ] - xx [ 264 ] ; xx [
283 ] = xx [ 331 ] - xx [ 280 ] * xx [ 282 ] ; xx [ 332 ] = xx [ 263 ] - xx [
280 ] * xx [ 328 ] ; xx [ 333 ] = xx [ 320 ] * xx [ 283 ] + xx [ 327 ] * xx [
332 ] ; xx [ 334 ] = xx [ 320 ] * xx [ 330 ] + xx [ 327 ] * xx [ 333 ] ; xx [
335 ] = xx [ 131 ] * xx [ 137 ] * xx [ 137 ] - xx [ 200 ] ; xx [ 336 ] = xx [
327 ] * xx [ 325 ] + xx [ 335 ] * xx [ 329 ] ; xx [ 325 ] = xx [ 327 ] * xx [
283 ] + xx [ 335 ] * xx [ 332 ] ; xx [ 283 ] = xx [ 320 ] * xx [ 336 ] + xx [
327 ] * xx [ 325 ] ; xx [ 329 ] = xx [ 262 ] - xx [ 285 ] ; xx [ 262 ] = xx [
230 ] / xx [ 267 ] ; xx [ 285 ] = xx [ 329 ] - xx [ 279 ] * xx [ 262 ] ; xx [
332 ] = xx [ 265 ] - xx [ 286 ] ; xx [ 265 ] = xx [ 332 ] - xx [ 280 ] * xx [
262 ] ; xx [ 286 ] = xx [ 320 ] * xx [ 285 ] + xx [ 327 ] * xx [ 265 ] ; xx [
337 ] = xx [ 327 ] * xx [ 330 ] + xx [ 335 ] * xx [ 333 ] ; xx [ 330 ] = xx [
327 ] * xx [ 336 ] + xx [ 335 ] * xx [ 325 ] ; xx [ 325 ] = xx [ 327 ] * xx [
285 ] + xx [ 335 ] * xx [ 265 ] ; xx [ 265 ] = xx [ 290 ] - xx [ 266 ] * xx [
282 ] ; xx [ 285 ] = xx [ 288 ] - xx [ 266 ] * xx [ 328 ] ; xx [ 333 ] = xx [
320 ] * xx [ 265 ] + xx [ 327 ] * xx [ 285 ] ; xx [ 336 ] = xx [ 327 ] * xx [
265 ] + xx [ 335 ] * xx [ 285 ] ; xx [ 265 ] = xx [ 229 ] - xx [ 266 ] * xx [
262 ] ; xx [ 338 ] = xx [ 334 ] ; xx [ 339 ] = xx [ 283 ] ; xx [ 340 ] = - xx
[ 286 ] ; xx [ 341 ] = xx [ 337 ] ; xx [ 342 ] = xx [ 330 ] ; xx [ 343 ] = -
xx [ 325 ] ; xx [ 344 ] = - xx [ 333 ] ; xx [ 345 ] = - xx [ 336 ] ; xx [ 346
] = xx [ 265 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 338 , xx + 316 , xx +
347 ) ; xx [ 285 ] = xx [ 243 ] - xx [ 244 ] * xx [ 282 ] ; xx [ 338 ] = xx [
240 ] * xx [ 282 ] ; xx [ 339 ] = xx [ 271 ] - xx [ 338 ] ; xx [ 340 ] = xx [
320 ] * xx [ 285 ] + xx [ 327 ] * xx [ 339 ] ; xx [ 341 ] = xx [ 273 ] - xx [
338 ] ; xx [ 338 ] = xx [ 239 ] - xx [ 240 ] * xx [ 328 ] ; xx [ 342 ] = xx [
320 ] * xx [ 341 ] + xx [ 327 ] * xx [ 338 ] ; xx [ 343 ] = xx [ 320 ] * xx [
340 ] + xx [ 327 ] * xx [ 342 ] ; xx [ 344 ] = xx [ 327 ] * xx [ 285 ] + xx [
335 ] * xx [ 339 ] ; xx [ 285 ] = xx [ 327 ] * xx [ 341 ] + xx [ 335 ] * xx [
338 ] ; xx [ 338 ] = xx [ 320 ] * xx [ 344 ] + xx [ 327 ] * xx [ 285 ] ; xx [
339 ] = xx [ 230 ] * xx [ 282 ] ; xx [ 341 ] = xx [ 272 ] - xx [ 339 ] ; xx [
345 ] = xx [ 230 ] * xx [ 328 ] ; xx [ 346 ] = xx [ 275 ] - xx [ 345 ] ; xx [
356 ] = xx [ 320 ] * xx [ 341 ] + xx [ 327 ] * xx [ 346 ] ; xx [ 357 ] = xx [
327 ] * xx [ 340 ] + xx [ 335 ] * xx [ 342 ] ; xx [ 340 ] = xx [ 327 ] * xx [
344 ] + xx [ 335 ] * xx [ 285 ] ; xx [ 285 ] = xx [ 327 ] * xx [ 341 ] + xx [
335 ] * xx [ 346 ] ; xx [ 341 ] = xx [ 276 ] - xx [ 339 ] ; xx [ 339 ] = xx [
277 ] - xx [ 345 ] ; xx [ 342 ] = xx [ 320 ] * xx [ 341 ] + xx [ 327 ] * xx [
339 ] ; xx [ 344 ] = xx [ 327 ] * xx [ 341 ] + xx [ 335 ] * xx [ 339 ] ; xx [
339 ] = xx [ 278 ] - xx [ 230 ] * xx [ 262 ] + xx [ 236 ] ; xx [ 358 ] = xx [
343 ] ; xx [ 359 ] = xx [ 338 ] ; xx [ 360 ] = - xx [ 356 ] ; xx [ 361 ] = xx
[ 357 ] ; xx [ 362 ] = xx [ 340 ] ; xx [ 363 ] = - xx [ 285 ] ; xx [ 364 ] =
- xx [ 342 ] ; xx [ 365 ] = - xx [ 344 ] ; xx [ 366 ] = xx [ 339 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 358 , xx + 316 , xx + 367 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 367 , xx + 316 , xx + 358 ) ; xx [ 341 ]
= xx [ 9 ] * state [ 14 ] ; xx [ 345 ] = cos ( xx [ 341 ] ) ; xx [ 346 ] = xx
[ 345 ] * xx [ 345 ] ; xx [ 376 ] = sin ( xx [ 341 ] ) ; xx [ 341 ] = xx [
131 ] * ( xx [ 346 ] + xx [ 376 ] * xx [ 376 ] ) - xx [ 200 ] ; xx [ 377 ] =
xx [ 144 ] ; xx [ 378 ] = - 0.01994045583473804 ; xx [ 379 ] = -
0.09771574456570453 ; xx [ 380 ] = 0.1007532138045611 ; xx [ 144 ] = xx [ 9 ]
* state [ 16 ] ; xx [ 381 ] = 0.197475839231908 ; xx [ 382 ] = sin ( xx [ 144
] ) ; xx [ 383 ] = 0.01978777979476189 ; xx [ 384 ] = cos ( xx [ 144 ] ) ; xx
[ 385 ] = xx [ 381 ] * xx [ 382 ] ; xx [ 386 ] = - ( xx [ 383 ] * xx [ 382 ]
) ; xx [ 387 ] = - ( xx [ 156 ] * xx [ 382 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 377 , xx + 384 , xx + 388 ) ; xx [ 144 ]
= xx [ 388 ] * xx [ 388 ] ; xx [ 377 ] = xx [ 389 ] * xx [ 389 ] ; xx [ 378 ]
= xx [ 131 ] * ( xx [ 144 ] + xx [ 377 ] ) - xx [ 200 ] ; xx [ 379 ] = xx [
389 ] * xx [ 390 ] ; xx [ 380 ] = xx [ 388 ] * xx [ 391 ] ; xx [ 382 ] = xx [
131 ] * ( xx [ 379 ] - xx [ 380 ] ) ; xx [ 384 ] = xx [ 389 ] * xx [ 391 ] ;
xx [ 385 ] = xx [ 388 ] * xx [ 390 ] ; xx [ 386 ] = xx [ 131 ] * ( xx [ 384 ]
+ xx [ 385 ] ) ; xx [ 387 ] = xx [ 131 ] * ( xx [ 379 ] + xx [ 380 ] ) ; xx [
379 ] = xx [ 390 ] * xx [ 390 ] ; xx [ 380 ] = xx [ 131 ] * ( xx [ 144 ] + xx
[ 379 ] ) - xx [ 200 ] ; xx [ 392 ] = xx [ 390 ] * xx [ 391 ] ; xx [ 393 ] =
xx [ 388 ] * xx [ 389 ] ; xx [ 394 ] = xx [ 131 ] * ( xx [ 392 ] - xx [ 393 ]
) ; xx [ 395 ] = xx [ 131 ] * ( xx [ 384 ] - xx [ 385 ] ) ; xx [ 384 ] = xx [
131 ] * ( xx [ 392 ] + xx [ 393 ] ) ; xx [ 385 ] = xx [ 131 ] * ( xx [ 144 ]
+ xx [ 391 ] * xx [ 391 ] ) - xx [ 200 ] ; xx [ 396 ] = xx [ 378 ] ; xx [ 397
] = xx [ 382 ] ; xx [ 398 ] = xx [ 386 ] ; xx [ 399 ] = xx [ 387 ] ; xx [ 400
] = xx [ 380 ] ; xx [ 401 ] = xx [ 394 ] ; xx [ 402 ] = xx [ 395 ] ; xx [ 403
] = xx [ 384 ] ; xx [ 404 ] = xx [ 385 ] ; xx [ 144 ] = 3.11358932861741e-7 ;
xx [ 405 ] = 6.148586656922361e-8 ; xx [ 406 ] = 5.434643238977428e-6 ; ii [
0 ] = factorSymmetricPosDef ( xx + 406 , 1 , xx + 407 ) ; if ( ii [ 0 ] != 0
) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 407 ] = xx [ 405 ] / xx [ 406 ] ; xx [ 408 ] =
2.265934765363602e-8 ; xx [ 409 ] = xx [ 408 ] * xx [ 407 ] ; xx [ 410 ] =
9.381820531592999e-7 ; xx [ 411 ] = xx [ 410 ] * xx [ 407 ] ; xx [ 412 ] =
1.145118244121267e-6 ; xx [ 413 ] = xx [ 408 ] / xx [ 406 ] ; xx [ 414 ] = -
( xx [ 410 ] * xx [ 413 ] ) ; xx [ 415 ] = 9.572231133423515e-7 ; xx [ 416 ]
= xx [ 144 ] - xx [ 405 ] * xx [ 407 ] ; xx [ 417 ] = xx [ 409 ] ; xx [ 418 ]
= xx [ 411 ] ; xx [ 419 ] = xx [ 409 ] ; xx [ 420 ] = xx [ 412 ] - xx [ 408 ]
* xx [ 413 ] ; xx [ 421 ] = xx [ 414 ] ; xx [ 422 ] = xx [ 411 ] ; xx [ 423 ]
= xx [ 414 ] ; xx [ 424 ] = xx [ 415 ] - 8.801855648701994e-13 / xx [ 406 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 416 , xx + 396 , xx + 425 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 396 , xx + 425 , xx + 416 ) ; xx [ 409 ]
= 8.776251305168258e-6 ; xx [ 411 ] = xx [ 409 ] / xx [ 406 ] ; xx [ 414 ] =
1.762640136374282e-4 ; xx [ 425 ] = xx [ 414 ] / xx [ 406 ] ; xx [ 426 ] =
5.326934334824436e-6 ; xx [ 427 ] = xx [ 426 ] / xx [ 406 ] ; xx [ 428 ] = -
( xx [ 405 ] * xx [ 411 ] ) ; xx [ 429 ] = xx [ 405 ] * xx [ 425 ] ; xx [ 430
] = - ( xx [ 405 ] * xx [ 427 ] ) ; xx [ 431 ] = xx [ 408 ] * xx [ 411 ] ; xx
[ 432 ] = - ( xx [ 408 ] * xx [ 425 ] ) ; xx [ 433 ] = xx [ 408 ] * xx [ 427
] ; xx [ 434 ] = xx [ 410 ] * xx [ 411 ] ; xx [ 435 ] = - ( xx [ 410 ] * xx [
425 ] ) ; xx [ 436 ] = xx [ 410 ] * xx [ 427 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 428 , xx + 396 , xx + 437 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 396 , xx + 437 , xx + 428 ) ; xx [ 437 ]
= - 0.02695031004471146 ; xx [ 438 ] = - 1.195512210539264e-3 ; xx [ 439 ] =
4.842731578975556e-3 ; pm_math_Quaternion_xform_ra ( xx + 388 , xx + 437 , xx
+ 440 ) ; xx [ 437 ] = 8.499999999999994e-3 - xx [ 440 ] ; xx [ 438 ] = xx [
437 ] ; xx [ 439 ] = - xx [ 441 ] ; xx [ 440 ] = 1.000000000000001e-3 - xx [
442 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 428 , xx + 438 , xx + 442 ) ;
xx [ 451 ] = 6.923747236765232e-3 ; xx [ 452 ] = xx [ 414 ] * xx [ 411 ] ; xx
[ 453 ] = - ( xx [ 426 ] * xx [ 411 ] ) ; xx [ 454 ] = xx [ 426 ] * xx [ 425
] ; xx [ 455 ] = xx [ 451 ] - xx [ 409 ] * xx [ 411 ] ; xx [ 456 ] = xx [ 452
] ; xx [ 457 ] = xx [ 453 ] ; xx [ 458 ] = xx [ 452 ] ; xx [ 459 ] = xx [ 451
] - xx [ 414 ] * xx [ 425 ] ; xx [ 460 ] = xx [ 454 ] ; xx [ 461 ] = xx [ 453
] ; xx [ 462 ] = xx [ 454 ] ; xx [ 463 ] = xx [ 451 ] - xx [ 426 ] * xx [ 427
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 455 , xx + 396 , xx + 464 )
; pm_math_Matrix3x3_compose_ra ( xx + 396 , xx + 464 , xx + 452 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 452 , xx + 438 , xx + 396 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 396 , xx + 438 , xx + 461 ) ; xx [ 470 ]
= xx [ 143 ] + xx [ 424 ] - xx [ 450 ] - xx [ 450 ] - xx [ 469 ] ; xx [ 471 ]
= 8.499995046130028e-3 ; xx [ 472 ] = xx [ 435 ] - xx [ 401 ] ; xx [ 401 ] =
3.566398367738088e-9 ; xx [ 435 ] = xx [ 434 ] - xx [ 398 ] ; xx [ 398 ] = xx
[ 470 ] + xx [ 471 ] * xx [ 472 ] - xx [ 401 ] * xx [ 435 ] ; xx [ 434 ] = xx
[ 236 ] + xx [ 456 ] ; xx [ 456 ] = xx [ 472 ] + xx [ 471 ] * xx [ 434 ] - xx
[ 401 ] * xx [ 455 ] ; xx [ 473 ] = xx [ 236 ] + xx [ 452 ] ; xx [ 452 ] = xx
[ 435 ] + xx [ 471 ] * xx [ 453 ] - xx [ 401 ] * xx [ 473 ] ; xx [ 474 ] = xx
[ 398 ] + xx [ 471 ] * xx [ 456 ] - xx [ 401 ] * xx [ 452 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 474 , 1 , xx + 475 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gripper/Revolute1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 475 ] = xx [ 398 ] / xx [ 474 ] ; xx [ 476 ] = xx [
131 ] * xx [ 346 ] - xx [ 200 ] ; xx [ 346 ] = xx [ 428 ] - xx [ 396 ] ; xx [
396 ] = xx [ 418 ] - xx [ 444 ] - xx [ 448 ] - xx [ 463 ] ; xx [ 428 ] = xx [
429 ] - xx [ 399 ] ; xx [ 399 ] = xx [ 396 ] + xx [ 471 ] * xx [ 428 ] - xx [
401 ] * xx [ 346 ] ; xx [ 429 ] = xx [ 452 ] / xx [ 474 ] ; xx [ 477 ] = xx [
346 ] - xx [ 399 ] * xx [ 429 ] ; xx [ 478 ] = xx [ 345 ] * xx [ 376 ] ; xx [
479 ] = xx [ 131 ] * xx [ 478 ] ; xx [ 480 ] = xx [ 456 ] / xx [ 474 ] ; xx [
481 ] = xx [ 428 ] - xx [ 399 ] * xx [ 480 ] ; xx [ 482 ] = xx [ 476 ] * xx [
477 ] - xx [ 479 ] * xx [ 481 ] ; xx [ 483 ] = xx [ 431 ] - xx [ 397 ] ; xx [
397 ] = xx [ 421 ] - xx [ 447 ] - xx [ 449 ] - xx [ 466 ] ; xx [ 431 ] = xx [
432 ] - xx [ 400 ] ; xx [ 400 ] = xx [ 397 ] + xx [ 471 ] * xx [ 431 ] - xx [
401 ] * xx [ 483 ] ; xx [ 432 ] = xx [ 483 ] - xx [ 400 ] * xx [ 429 ] ; xx [
484 ] = xx [ 431 ] - xx [ 400 ] * xx [ 480 ] ; xx [ 485 ] = xx [ 476 ] * xx [
432 ] - xx [ 479 ] * xx [ 484 ] ; xx [ 486 ] = xx [ 476 ] * xx [ 482 ] - xx [
479 ] * xx [ 485 ] ; xx [ 487 ] = xx [ 479 ] * xx [ 477 ] + xx [ 476 ] * xx [
481 ] ; xx [ 477 ] = xx [ 479 ] * xx [ 432 ] + xx [ 476 ] * xx [ 484 ] ; xx [
432 ] = xx [ 476 ] * xx [ 487 ] - xx [ 479 ] * xx [ 477 ] ; xx [ 481 ] = xx [
430 ] - xx [ 402 ] ; xx [ 402 ] = xx [ 436 ] - xx [ 404 ] ; xx [ 404 ] = xx [
402 ] + xx [ 471 ] * xx [ 459 ] - xx [ 401 ] * xx [ 458 ] ; xx [ 430 ] = xx [
404 ] / xx [ 474 ] ; xx [ 436 ] = xx [ 341 ] * ( xx [ 481 ] - xx [ 399 ] * xx
[ 430 ] ) ; xx [ 484 ] = xx [ 433 ] - xx [ 403 ] ; xx [ 403 ] = xx [ 341 ] *
( xx [ 484 ] - xx [ 400 ] * xx [ 430 ] ) ; xx [ 433 ] = xx [ 436 ] * xx [ 476
] - xx [ 479 ] * xx [ 403 ] ; xx [ 488 ] = xx [ 479 ] * xx [ 482 ] + xx [ 476
] * xx [ 485 ] ; xx [ 482 ] = xx [ 479 ] * xx [ 487 ] + xx [ 476 ] * xx [ 477
] ; xx [ 477 ] = xx [ 479 ] * xx [ 436 ] + xx [ 403 ] * xx [ 476 ] ; xx [ 403
] = xx [ 435 ] - xx [ 398 ] * xx [ 429 ] ; xx [ 436 ] = xx [ 472 ] - xx [ 398
] * xx [ 480 ] ; xx [ 485 ] = xx [ 341 ] * ( xx [ 476 ] * xx [ 403 ] - xx [
479 ] * xx [ 436 ] ) ; xx [ 487 ] = xx [ 341 ] * ( xx [ 479 ] * xx [ 403 ] +
xx [ 476 ] * xx [ 436 ] ) ; xx [ 403 ] = xx [ 341 ] * ( xx [ 402 ] - xx [ 398
] * xx [ 430 ] ) * xx [ 341 ] ; xx [ 489 ] = xx [ 486 ] ; xx [ 490 ] = xx [
432 ] ; xx [ 491 ] = xx [ 433 ] ; xx [ 492 ] = xx [ 488 ] ; xx [ 493 ] = xx [
482 ] ; xx [ 494 ] = xx [ 477 ] ; xx [ 495 ] = xx [ 485 ] ; xx [ 496 ] = xx [
487 ] ; xx [ 497 ] = xx [ 403 ] ; xx [ 436 ] = xx [ 401 ] * xx [ 376 ] ; xx [
498 ] = xx [ 436 ] * xx [ 345 ] ; xx [ 499 ] = xx [ 471 ] * xx [ 376 ] ; xx [
500 ] = xx [ 499 ] * xx [ 376 ] ; xx [ 501 ] = xx [ 131 ] * ( xx [ 498 ] + xx
[ 500 ] ) - xx [ 471 ] ; xx [ 502 ] = xx [ 436 ] * xx [ 376 ] ; xx [ 436 ] =
xx [ 499 ] * xx [ 345 ] ; xx [ 499 ] = xx [ 131 ] * ( xx [ 502 ] - xx [ 436 ]
) - xx [ 401 ] ; xx [ 503 ] = 7.499999999999995e-3 + xx [ 499 ] ; xx [ 504 ]
= - xx [ 501 ] ; xx [ 505 ] = - xx [ 503 ] ; xx [ 506 ] = -
1.207894729634444e-3 ; pm_math_Matrix3x3_postCross_ra ( xx + 489 , xx + 504 ,
xx + 507 ) ; xx [ 489 ] = xx [ 473 ] - xx [ 452 ] * xx [ 429 ] ; xx [ 490 ] =
xx [ 456 ] * xx [ 429 ] ; xx [ 491 ] = xx [ 453 ] - xx [ 490 ] ; xx [ 492 ] =
xx [ 476 ] * xx [ 489 ] - xx [ 479 ] * xx [ 491 ] ; xx [ 493 ] = xx [ 455 ] -
xx [ 490 ] ; xx [ 490 ] = xx [ 434 ] - xx [ 456 ] * xx [ 480 ] ; xx [ 494 ] =
xx [ 476 ] * xx [ 493 ] - xx [ 479 ] * xx [ 490 ] ; xx [ 495 ] = xx [ 476 ] *
xx [ 492 ] - xx [ 479 ] * xx [ 494 ] ; xx [ 496 ] = xx [ 479 ] * xx [ 489 ] +
xx [ 476 ] * xx [ 491 ] ; xx [ 489 ] = xx [ 479 ] * xx [ 493 ] + xx [ 476 ] *
xx [ 490 ] ; xx [ 490 ] = xx [ 476 ] * xx [ 496 ] - xx [ 479 ] * xx [ 489 ] ;
xx [ 491 ] = xx [ 404 ] * xx [ 429 ] ; xx [ 493 ] = xx [ 341 ] * ( xx [ 454 ]
- xx [ 491 ] ) ; xx [ 497 ] = xx [ 404 ] * xx [ 480 ] ; xx [ 516 ] = xx [ 341
] * ( xx [ 457 ] - xx [ 497 ] ) ; xx [ 517 ] = xx [ 493 ] * xx [ 476 ] - xx [
479 ] * xx [ 516 ] ; xx [ 518 ] = xx [ 479 ] * xx [ 492 ] + xx [ 476 ] * xx [
494 ] ; xx [ 492 ] = xx [ 479 ] * xx [ 496 ] + xx [ 476 ] * xx [ 489 ] ; xx [
489 ] = xx [ 479 ] * xx [ 493 ] + xx [ 516 ] * xx [ 476 ] ; xx [ 493 ] = xx [
458 ] - xx [ 491 ] ; xx [ 491 ] = xx [ 459 ] - xx [ 497 ] ; xx [ 494 ] = xx [
341 ] * ( xx [ 476 ] * xx [ 493 ] - xx [ 479 ] * xx [ 491 ] ) ; xx [ 496 ] =
xx [ 341 ] * ( xx [ 479 ] * xx [ 493 ] + xx [ 476 ] * xx [ 491 ] ) ; xx [ 491
] = xx [ 341 ] * ( xx [ 460 ] - xx [ 404 ] * xx [ 430 ] + xx [ 236 ] ) * xx [
341 ] ; xx [ 519 ] = xx [ 495 ] ; xx [ 520 ] = xx [ 490 ] ; xx [ 521 ] = xx [
517 ] ; xx [ 522 ] = xx [ 518 ] ; xx [ 523 ] = xx [ 492 ] ; xx [ 524 ] = xx [
489 ] ; xx [ 525 ] = xx [ 494 ] ; xx [ 526 ] = xx [ 496 ] ; xx [ 527 ] = xx [
491 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 519 , xx + 504 , xx + 528 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 528 , xx + 504 , xx + 519 ) ; xx [ 493 ]
= xx [ 160 ] - xx [ 266 ] * xx [ 319 ] - xx [ 355 ] - xx [ 355 ] - xx [ 366 ]
+ xx [ 341 ] * ( xx [ 470 ] - xx [ 398 ] * xx [ 475 ] ) * xx [ 341 ] - xx [
515 ] - xx [ 515 ] - xx [ 527 ] + xx [ 117 ] ; xx [ 117 ] = xx [ 485 ] - xx [
530 ] - ( xx [ 333 ] + xx [ 369 ] ) ; xx [ 160 ] = xx [ 487 ] - xx [ 533 ] -
( xx [ 336 ] + xx [ 372 ] ) ; xx [ 333 ] = xx [ 493 ] + xx [ 274 ] * xx [ 117
] + xx [ 287 ] * xx [ 160 ] ; xx [ 336 ] = 2.126350810179349e-3 ; xx [ 369 ]
= xx [ 336 ] + xx [ 343 ] + xx [ 495 ] ; xx [ 343 ] = xx [ 338 ] + xx [ 490 ]
; xx [ 338 ] = xx [ 117 ] + xx [ 274 ] * xx [ 369 ] + xx [ 287 ] * xx [ 343 ]
; xx [ 372 ] = xx [ 357 ] + xx [ 518 ] ; xx [ 357 ] = xx [ 336 ] + xx [ 340 ]
+ xx [ 492 ] ; xx [ 340 ] = xx [ 160 ] + xx [ 274 ] * xx [ 372 ] + xx [ 287 ]
* xx [ 357 ] ; xx [ 470 ] = xx [ 333 ] + xx [ 274 ] * xx [ 338 ] + xx [ 287 ]
* xx [ 340 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 470 , 1 , xx + 485 ) ;
if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R7' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 485 ] = ( xx [ 195 ] - ( xx [ 268 ] + xx [ 274 ] * xx
[ 293 ] + xx [ 287 ] * xx [ 292 ] ) ) / xx [ 470 ] ; xx [ 487 ] = xx [ 399 ]
/ xx [ 474 ] ; xx [ 490 ] = xx [ 398 ] * xx [ 487 ] ; xx [ 492 ] = xx [ 341 ]
* ( xx [ 396 ] - xx [ 490 ] ) ; xx [ 396 ] = xx [ 400 ] / xx [ 474 ] ; xx [
495 ] = xx [ 398 ] * xx [ 396 ] ; xx [ 497 ] = xx [ 341 ] * ( xx [ 397 ] - xx
[ 495 ] ) ; xx [ 397 ] = xx [ 279 ] / xx [ 267 ] ; xx [ 516 ] = xx [ 266 ] *
xx [ 397 ] ; xx [ 518 ] = xx [ 261 ] - xx [ 516 ] ; xx [ 261 ] = xx [ 280 ] /
xx [ 267 ] ; xx [ 530 ] = xx [ 266 ] * xx [ 261 ] ; xx [ 533 ] = xx [ 264 ] -
xx [ 530 ] ; xx [ 264 ] = xx [ 492 ] * xx [ 476 ] - xx [ 479 ] * xx [ 497 ] -
xx [ 509 ] - xx [ 513 ] - xx [ 521 ] - ( xx [ 320 ] * xx [ 518 ] + xx [ 327 ]
* xx [ 533 ] + xx [ 349 ] + xx [ 353 ] + xx [ 360 ] ) ; xx [ 537 ] = xx [ 334
] - xx [ 367 ] + xx [ 486 ] - xx [ 528 ] ; xx [ 334 ] = xx [ 283 ] - xx [ 370
] + xx [ 432 ] - xx [ 531 ] ; xx [ 283 ] = xx [ 264 ] + xx [ 274 ] * xx [ 537
] + xx [ 287 ] * xx [ 334 ] ; xx [ 367 ] = xx [ 283 ] / xx [ 470 ] ; xx [ 370
] = xx [ 479 ] * xx [ 492 ] + xx [ 497 ] * xx [ 476 ] - xx [ 512 ] - xx [ 514
] - xx [ 524 ] - ( xx [ 327 ] * xx [ 518 ] + xx [ 335 ] * xx [ 533 ] + xx [
352 ] + xx [ 354 ] + xx [ 363 ] ) ; xx [ 432 ] = xx [ 337 ] - xx [ 368 ] + xx
[ 488 ] - xx [ 529 ] ; xx [ 337 ] = xx [ 330 ] - xx [ 371 ] + xx [ 482 ] - xx
[ 532 ] ; xx [ 330 ] = xx [ 370 ] + xx [ 274 ] * xx [ 432 ] + xx [ 287 ] * xx
[ 337 ] ; xx [ 368 ] = xx [ 330 ] / xx [ 470 ] ; xx [ 371 ] = xx [ 333 ] / xx
[ 470 ] ; xx [ 531 ] = xx [ 367 ] ; xx [ 532 ] = xx [ 368 ] ; xx [ 533 ] = xx
[ 371 ] ; xx [ 482 ] = xx [ 217 ] + xx [ 226 ] + xx [ 279 ] * xx [ 270 ] ; xx
[ 217 ] = xx [ 218 ] + xx [ 227 ] + xx [ 280 ] * xx [ 270 ] ; xx [ 218 ] = xx
[ 217 ] * xx [ 133 ] - xx [ 482 ] * xx [ 137 ] ; xx [ 226 ] = xx [ 482 ] + xx
[ 131 ] * xx [ 218 ] * xx [ 137 ] + xx [ 322 ] + xx [ 283 ] * xx [ 485 ] ; xx
[ 227 ] = xx [ 217 ] - xx [ 131 ] * xx [ 218 ] * xx [ 133 ] + xx [ 323 ] + xx
[ 330 ] * xx [ 485 ] ; xx [ 228 ] = xx [ 268 ] + xx [ 333 ] * xx [ 485 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 226 , xx + 217 ) ; xx [ 226 ] =
- xx [ 287 ] ; xx [ 227 ] = xx [ 274 ] ; xx [ 228 ] = - 0.01723973036822852 ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 226 , xx + 322 ) ; xx [ 226 ] =
- ( 1.144603405378138e-3 + xx [ 322 ] ) ; xx [ 227 ] = 4.83817857357089e-3 -
xx [ 323 ] ; xx [ 228 ] = - ( 5.457891674323079e-3 + xx [ 324 ] ) ; xx [ 268
] = xx [ 265 ] - xx [ 375 ] + xx [ 403 ] - xx [ 536 ] ; xx [ 265 ] = xx [ 494
] - xx [ 342 ] ; xx [ 322 ] = xx [ 496 ] - xx [ 344 ] ; xx [ 323 ] = xx [ 268
] + xx [ 274 ] * xx [ 265 ] + xx [ 287 ] * xx [ 322 ] ; xx [ 538 ] = xx [ 293
] + xx [ 338 ] * xx [ 485 ] ; xx [ 539 ] = xx [ 292 ] + xx [ 340 ] * xx [ 485
] ; xx [ 540 ] = xx [ 231 ] + xx [ 323 ] * xx [ 485 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 538 , xx + 541 ) ;
pm_math_Vector3_cross_ra ( xx + 226 , xx + 541 , xx + 538 ) ; xx [ 231 ] = xx
[ 217 ] + xx [ 538 ] ; xx [ 292 ] = xx [ 109 ] * xx [ 109 ] ; xx [ 293 ] = xx
[ 131 ] * ( xx [ 292 ] + xx [ 118 ] * xx [ 118 ] ) - xx [ 200 ] ; xx [ 324 ]
= xx [ 109 ] * xx [ 116 ] ; xx [ 342 ] = xx [ 120 ] * xx [ 118 ] ; xx [ 344 ]
= xx [ 324 ] - xx [ 342 ] ; xx [ 375 ] = xx [ 131 ] * xx [ 344 ] ; xx [ 403 ]
= xx [ 116 ] * xx [ 118 ] ; xx [ 482 ] = xx [ 109 ] * xx [ 120 ] ; xx [ 486 ]
= xx [ 342 ] + xx [ 324 ] ; xx [ 324 ] = xx [ 131 ] * xx [ 486 ] ; xx [ 342 ]
= xx [ 131 ] * ( xx [ 292 ] + xx [ 120 ] * xx [ 120 ] ) - xx [ 200 ] ; xx [
488 ] = xx [ 109 ] * xx [ 118 ] ; xx [ 492 ] = xx [ 120 ] * xx [ 116 ] ; xx [
494 ] = xx [ 403 ] - xx [ 482 ] ; xx [ 496 ] = xx [ 131 ] * xx [ 494 ] ; xx [
497 ] = xx [ 492 ] + xx [ 488 ] ; xx [ 518 ] = xx [ 131 ] * xx [ 497 ] ; xx [
544 ] = xx [ 293 ] ; xx [ 545 ] = xx [ 375 ] ; xx [ 546 ] = xx [ 131 ] * ( xx
[ 403 ] + xx [ 482 ] ) ; xx [ 547 ] = - xx [ 324 ] ; xx [ 548 ] = xx [ 342 ]
; xx [ 549 ] = xx [ 131 ] * ( xx [ 488 ] - xx [ 492 ] ) ; xx [ 550 ] = xx [
496 ] ; xx [ 551 ] = - xx [ 518 ] ; xx [ 552 ] = xx [ 131 ] * ( xx [ 292 ] +
xx [ 116 ] * xx [ 116 ] ) - xx [ 200 ] ; xx [ 292 ] = xx [ 141 ] + xx [ 295 ]
- xx [ 249 ] - xx [ 249 ] - xx [ 304 ] ; xx [ 403 ] = xx [ 292 ] - xx [ 279 ]
* xx [ 397 ] ; xx [ 482 ] = xx [ 296 ] - xx [ 250 ] - xx [ 252 ] - xx [ 305 ]
; xx [ 488 ] = xx [ 280 ] * xx [ 397 ] ; xx [ 492 ] = xx [ 482 ] - xx [ 488 ]
; xx [ 528 ] = xx [ 320 ] * xx [ 403 ] + xx [ 327 ] * xx [ 492 ] ; xx [ 529 ]
= xx [ 298 ] - xx [ 252 ] - xx [ 250 ] - xx [ 307 ] ; xx [ 536 ] = xx [ 529 ]
- xx [ 488 ] ; xx [ 249 ] = xx [ 142 ] + xx [ 299 ] - xx [ 253 ] - xx [ 253 ]
- xx [ 308 ] ; xx [ 250 ] = xx [ 249 ] - xx [ 280 ] * xx [ 261 ] ; xx [ 252 ]
= xx [ 320 ] * xx [ 536 ] + xx [ 327 ] * xx [ 250 ] ; xx [ 253 ] = xx [ 141 ]
+ xx [ 416 ] - xx [ 442 ] - xx [ 442 ] - xx [ 461 ] ; xx [ 257 ] = xx [ 253 ]
- xx [ 399 ] * xx [ 487 ] ; xx [ 488 ] = xx [ 417 ] - xx [ 443 ] - xx [ 445 ]
- xx [ 462 ] ; xx [ 553 ] = xx [ 400 ] * xx [ 487 ] ; xx [ 554 ] = xx [ 488 ]
- xx [ 553 ] ; xx [ 555 ] = xx [ 476 ] * xx [ 257 ] - xx [ 479 ] * xx [ 554 ]
; xx [ 556 ] = xx [ 419 ] - xx [ 445 ] - xx [ 443 ] - xx [ 464 ] ; xx [ 557 ]
= xx [ 556 ] - xx [ 553 ] ; xx [ 442 ] = xx [ 142 ] + xx [ 420 ] - xx [ 446 ]
- xx [ 446 ] - xx [ 465 ] ; xx [ 443 ] = xx [ 442 ] - xx [ 400 ] * xx [ 396 ]
; xx [ 445 ] = xx [ 476 ] * xx [ 557 ] - xx [ 479 ] * xx [ 443 ] ; xx [ 446 ]
= xx [ 320 ] * xx [ 528 ] + xx [ 327 ] * xx [ 252 ] - xx [ 347 ] - xx [ 347 ]
- xx [ 358 ] + xx [ 476 ] * xx [ 555 ] - xx [ 479 ] * xx [ 445 ] - xx [ 507 ]
- xx [ 507 ] - xx [ 519 ] + xx [ 114 ] ; xx [ 114 ] = xx [ 327 ] * xx [ 403 ]
+ xx [ 335 ] * xx [ 492 ] ; xx [ 403 ] = xx [ 327 ] * xx [ 536 ] + xx [ 335 ]
* xx [ 250 ] ; xx [ 250 ] = xx [ 479 ] * xx [ 257 ] + xx [ 476 ] * xx [ 554 ]
; xx [ 257 ] = xx [ 479 ] * xx [ 557 ] + xx [ 476 ] * xx [ 443 ] ; xx [ 443 ]
= xx [ 320 ] * xx [ 114 ] + xx [ 327 ] * xx [ 403 ] - xx [ 348 ] - xx [ 350 ]
- xx [ 359 ] + xx [ 476 ] * xx [ 250 ] - xx [ 479 ] * xx [ 257 ] - xx [ 508 ]
- xx [ 510 ] - xx [ 520 ] ; xx [ 450 ] = xx [ 330 ] * xx [ 367 ] ; xx [ 492 ]
= xx [ 333 ] * xx [ 367 ] ; xx [ 536 ] = xx [ 327 ] * xx [ 528 ] + xx [ 335 ]
* xx [ 252 ] - xx [ 350 ] - xx [ 348 ] - xx [ 361 ] + xx [ 479 ] * xx [ 555 ]
+ xx [ 476 ] * xx [ 445 ] - xx [ 510 ] - xx [ 508 ] - xx [ 522 ] ; xx [ 252 ]
= xx [ 327 ] * xx [ 114 ] + xx [ 335 ] * xx [ 403 ] - xx [ 351 ] - xx [ 351 ]
- xx [ 362 ] + xx [ 479 ] * xx [ 250 ] + xx [ 476 ] * xx [ 257 ] - xx [ 511 ]
- xx [ 511 ] - xx [ 523 ] + xx [ 115 ] ; xx [ 114 ] = xx [ 333 ] * xx [ 368 ]
; xx [ 115 ] = xx [ 422 ] - xx [ 448 ] - xx [ 444 ] - xx [ 467 ] ; xx [ 250 ]
= xx [ 115 ] - xx [ 490 ] ; xx [ 257 ] = xx [ 423 ] - xx [ 449 ] - xx [ 447 ]
- xx [ 468 ] ; xx [ 347 ] = xx [ 257 ] - xx [ 495 ] ; xx [ 348 ] = xx [ 301 ]
- xx [ 255 ] - xx [ 251 ] - xx [ 310 ] ; xx [ 251 ] = xx [ 348 ] - xx [ 516 ]
; xx [ 255 ] = xx [ 302 ] - xx [ 256 ] - xx [ 254 ] - xx [ 311 ] ; xx [ 254 ]
= xx [ 255 ] - xx [ 530 ] ; xx [ 256 ] = xx [ 341 ] * ( xx [ 476 ] * xx [ 250
] - xx [ 479 ] * xx [ 347 ] ) - xx [ 513 ] - xx [ 509 ] - xx [ 525 ] - ( xx [
320 ] * xx [ 251 ] + xx [ 327 ] * xx [ 254 ] + xx [ 353 ] + xx [ 349 ] + xx [
364 ] ) ; xx [ 295 ] = xx [ 341 ] * ( xx [ 479 ] * xx [ 250 ] + xx [ 476 ] *
xx [ 347 ] ) - xx [ 514 ] - xx [ 512 ] - xx [ 526 ] - ( xx [ 327 ] * xx [ 251
] + xx [ 335 ] * xx [ 254 ] + xx [ 354 ] + xx [ 352 ] + xx [ 365 ] ) ; xx [
296 ] = xx [ 446 ] - xx [ 283 ] * xx [ 367 ] ; xx [ 297 ] = xx [ 443 ] - xx [
450 ] ; xx [ 298 ] = xx [ 264 ] - xx [ 492 ] ; xx [ 299 ] = xx [ 536 ] - xx [
450 ] ; xx [ 300 ] = xx [ 252 ] - xx [ 330 ] * xx [ 368 ] ; xx [ 301 ] = xx [
370 ] - xx [ 114 ] ; xx [ 302 ] = xx [ 256 ] - xx [ 492 ] ; xx [ 303 ] = xx [
295 ] - xx [ 114 ] ; xx [ 304 ] = xx [ 493 ] - xx [ 333 ] * xx [ 371 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 296 , xx + 544 , xx + 358 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 544 , xx + 358 , xx + 296 ) ; xx [ 114 ]
= xx [ 338 ] / xx [ 470 ] ; xx [ 250 ] = xx [ 340 ] / xx [ 470 ] ; xx [ 251 ]
= xx [ 433 ] - xx [ 534 ] - ( xx [ 286 ] + xx [ 373 ] ) ; xx [ 254 ] = xx [
323 ] / xx [ 470 ] ; xx [ 264 ] = xx [ 477 ] - xx [ 535 ] - ( xx [ 325 ] + xx
[ 374 ] ) ; xx [ 358 ] = xx [ 537 ] - xx [ 283 ] * xx [ 114 ] ; xx [ 359 ] =
xx [ 334 ] - xx [ 283 ] * xx [ 250 ] ; xx [ 360 ] = xx [ 251 ] - xx [ 283 ] *
xx [ 254 ] ; xx [ 361 ] = xx [ 432 ] - xx [ 330 ] * xx [ 114 ] ; xx [ 362 ] =
xx [ 337 ] - xx [ 330 ] * xx [ 250 ] ; xx [ 363 ] = xx [ 264 ] - xx [ 330 ] *
xx [ 254 ] ; xx [ 364 ] = xx [ 117 ] - xx [ 333 ] * xx [ 114 ] ; xx [ 365 ] =
xx [ 160 ] - xx [ 333 ] * xx [ 250 ] ; xx [ 366 ] = xx [ 268 ] - xx [ 333 ] *
xx [ 254 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 358 , xx + 544 , xx
+ 416 ) ; pm_math_Matrix3x3_compose_ra ( xx + 544 , xx + 416 , xx + 358 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 358 , xx + 226 , xx + 416 ) ; xx [ 286
] = xx [ 340 ] * xx [ 114 ] ; xx [ 305 ] = xx [ 517 ] - xx [ 356 ] ; xx [ 306
] = xx [ 323 ] * xx [ 114 ] ; xx [ 307 ] = xx [ 489 ] - xx [ 285 ] ; xx [ 285
] = xx [ 323 ] * xx [ 250 ] ; xx [ 308 ] = xx [ 336 ] + xx [ 339 ] + xx [ 491
] ; xx [ 461 ] = xx [ 369 ] - xx [ 338 ] * xx [ 114 ] ; xx [ 462 ] = xx [ 343
] - xx [ 286 ] ; xx [ 463 ] = xx [ 305 ] - xx [ 306 ] ; xx [ 464 ] = xx [ 372
] - xx [ 286 ] ; xx [ 465 ] = xx [ 357 ] - xx [ 340 ] * xx [ 250 ] ; xx [ 466
] = xx [ 307 ] - xx [ 285 ] ; xx [ 467 ] = xx [ 265 ] - xx [ 306 ] ; xx [ 468
] = xx [ 322 ] - xx [ 285 ] ; xx [ 469 ] = xx [ 308 ] - xx [ 323 ] * xx [ 254
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 461 , xx + 544 , xx + 507 )
; pm_math_Matrix3x3_compose_ra ( xx + 544 , xx + 507 , xx + 461 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 461 , xx + 226 , xx + 507 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 507 , xx + 226 , xx + 519 ) ; xx [ 285 ]
= xx [ 296 ] - xx [ 416 ] - xx [ 416 ] - xx [ 519 ] ; xx [ 286 ] = xx [ 297 ]
- xx [ 417 ] - xx [ 419 ] - xx [ 520 ] ; xx [ 306 ] = xx [ 298 ] - xx [ 418 ]
- xx [ 422 ] - xx [ 521 ] ; xx [ 309 ] = xx [ 299 ] - xx [ 419 ] - xx [ 417 ]
- xx [ 522 ] ; xx [ 310 ] = xx [ 300 ] - xx [ 420 ] - xx [ 420 ] - xx [ 523 ]
; xx [ 311 ] = xx [ 301 ] - xx [ 421 ] - xx [ 423 ] - xx [ 524 ] ; xx [ 312 ]
= xx [ 302 ] - xx [ 422 ] - xx [ 418 ] - xx [ 525 ] ; xx [ 325 ] = xx [ 303 ]
- xx [ 423 ] - xx [ 421 ] - xx [ 526 ] ; xx [ 296 ] = xx [ 304 ] - xx [ 424 ]
- xx [ 424 ] - xx [ 527 ] ; xx [ 416 ] = xx [ 98 ] + xx [ 285 ] ; xx [ 417 ]
= xx [ 286 ] ; xx [ 418 ] = xx [ 306 ] ; xx [ 419 ] = xx [ 309 ] ; xx [ 420 ]
= xx [ 106 ] + xx [ 310 ] ; xx [ 421 ] = xx [ 311 ] ; xx [ 422 ] = xx [ 312 ]
; xx [ 423 ] = xx [ 325 ] ; xx [ 424 ] = xx [ 107 ] + xx [ 296 ] ; xx [ 297 ]
= - xx [ 84 ] ; xx [ 298 ] = xx [ 93 ] ; xx [ 299 ] = xx [ 94 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 416 , xx + 297 , xx + 300 ) ; xx [ 303 ] =
xx [ 358 ] - xx [ 507 ] ; xx [ 304 ] = xx [ 359 ] - xx [ 510 ] ; xx [ 336 ] =
xx [ 360 ] - xx [ 513 ] ; xx [ 339 ] = xx [ 361 ] - xx [ 508 ] ; xx [ 341 ] =
xx [ 362 ] - xx [ 511 ] ; xx [ 347 ] = xx [ 363 ] - xx [ 514 ] ; xx [ 349 ] =
xx [ 364 ] - xx [ 509 ] ; xx [ 350 ] = xx [ 365 ] - xx [ 512 ] ; xx [ 351 ] =
xx [ 366 ] - xx [ 515 ] ; xx [ 358 ] = xx [ 303 ] ; xx [ 359 ] = xx [ 304 ] ;
xx [ 360 ] = xx [ 336 ] ; xx [ 361 ] = xx [ 339 ] ; xx [ 362 ] = xx [ 341 ] ;
xx [ 363 ] = xx [ 347 ] ; xx [ 364 ] = xx [ 349 ] ; xx [ 365 ] = xx [ 350 ] ;
xx [ 366 ] = xx [ 351 ] ; xx [ 352 ] = 7.507028932003423e-3 ; xx [ 353 ] =
2.112440099565195e-3 ; xx [ 354 ] = 5.538643790510151e-3 ;
pm_math_Matrix3x3_xform_ra ( xx + 358 , xx + 352 , xx + 447 ) ; xx [ 355 ] =
xx [ 300 ] + xx [ 447 ] ; xx [ 356 ] = xx [ 218 ] + xx [ 539 ] ; xx [ 217 ] =
xx [ 219 ] + xx [ 540 ] ; xx [ 489 ] = xx [ 231 ] ; xx [ 490 ] = xx [ 356 ] ;
xx [ 491 ] = xx [ 217 ] ; xx [ 218 ] = xx [ 301 ] + xx [ 448 ] ; xx [ 219 ] =
xx [ 302 ] + xx [ 449 ] ; xx [ 300 ] = xx [ 355 ] ; xx [ 301 ] = xx [ 218 ] ;
xx [ 302 ] = xx [ 219 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 358 , xx
+ 297 , xx + 447 ) ; xx [ 367 ] = 0.08274442446168806 ; xx [ 507 ] = xx [ 367
] + xx [ 461 ] ; xx [ 508 ] = xx [ 462 ] ; xx [ 509 ] = xx [ 463 ] ; xx [ 510
] = xx [ 464 ] ; xx [ 511 ] = xx [ 367 ] + xx [ 465 ] ; xx [ 512 ] = xx [ 466
] ; xx [ 513 ] = xx [ 467 ] ; xx [ 514 ] = xx [ 468 ] ; xx [ 515 ] = xx [ 367
] + xx [ 469 ] ; pm_math_Matrix3x3_xform_ra ( xx + 507 , xx + 352 , xx + 519
) ; xx [ 368 ] = xx [ 447 ] + xx [ 519 ] ; xx [ 370 ] = xx [ 448 ] + xx [ 520
] ; xx [ 371 ] = xx [ 449 ] + xx [ 521 ] ; xx [ 447 ] = xx [ 368 ] ; xx [ 448
] = xx [ 370 ] ; xx [ 449 ] = xx [ 371 ] ; xx [ 373 ] =
pm_math_Vector3_dot_ra ( xx + 297 , xx + 300 ) + pm_math_Vector3_dot_ra ( xx
+ 352 , xx + 447 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 373 , 1 , xx +
300 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R6' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 300 ] = ( pm_math_Vector3_dot_ra ( xx + 297 , xx + 489
) + pm_math_Vector3_dot_ra ( xx + 352 , xx + 541 ) ) / xx [ 373 ] ; xx [ 447
] = xx [ 231 ] - xx [ 355 ] * xx [ 300 ] ; xx [ 448 ] = xx [ 356 ] - xx [ 218
] * xx [ 300 ] ; xx [ 449 ] = xx [ 217 ] - xx [ 219 ] * xx [ 300 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 447 , xx + 489 ) ; xx [ 217 ] =
0.0308855674310194 ; xx [ 447 ] = 0.01409005672401682 ; xx [ 448 ] = -
0.01894515942744741 ; xx [ 449 ] = - 0.01187185013165681 ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 447 , xx + 519 ) ; xx [ 231 ] =
9.289825552270628e-3 ; xx [ 301 ] = 6.447531210979022e-4 ; xx [ 447 ] = xx [
217 ] - xx [ 519 ] ; xx [ 448 ] = - ( xx [ 231 ] + xx [ 520 ] ) ; xx [ 449 ]
= - ( xx [ 301 ] + xx [ 521 ] ) ; xx [ 522 ] = xx [ 541 ] - xx [ 368 ] * xx [
300 ] ; xx [ 523 ] = xx [ 542 ] - xx [ 370 ] * xx [ 300 ] ; xx [ 524 ] = xx [
543 ] - xx [ 371 ] * xx [ 300 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx
+ 522 , xx + 525 ) ; pm_math_Vector3_cross_ra ( xx + 447 , xx + 525 , xx +
522 ) ; xx [ 302 ] = xx [ 489 ] + xx [ 522 ] ; xx [ 356 ] = xx [ 99 ] * xx [
99 ] ; xx [ 374 ] = xx [ 131 ] * ( xx [ 356 ] + xx [ 100 ] * xx [ 100 ] ) -
xx [ 200 ] ; xx [ 403 ] = xx [ 100 ] * xx [ 101 ] ; xx [ 433 ] = xx [ 99 ] *
xx [ 102 ] ; xx [ 444 ] = xx [ 131 ] * ( xx [ 403 ] - xx [ 433 ] ) ; xx [ 445
] = xx [ 100 ] * xx [ 102 ] ; xx [ 450 ] = xx [ 99 ] * xx [ 101 ] ; xx [ 477
] = xx [ 131 ] * ( xx [ 445 ] + xx [ 450 ] ) ; xx [ 492 ] = xx [ 131 ] * ( xx
[ 403 ] + xx [ 433 ] ) ; xx [ 403 ] = xx [ 131 ] * ( xx [ 356 ] + xx [ 101 ]
* xx [ 101 ] ) - xx [ 200 ] ; xx [ 433 ] = xx [ 101 ] * xx [ 102 ] ; xx [ 493
] = xx [ 99 ] * xx [ 100 ] ; xx [ 495 ] = xx [ 131 ] * ( xx [ 433 ] - xx [
493 ] ) ; xx [ 516 ] = xx [ 131 ] * ( xx [ 445 ] - xx [ 450 ] ) ; xx [ 445 ]
= xx [ 131 ] * ( xx [ 433 ] + xx [ 493 ] ) ; xx [ 433 ] = xx [ 131 ] * ( xx [
356 ] + xx [ 102 ] * xx [ 102 ] ) - xx [ 200 ] ; xx [ 538 ] = xx [ 374 ] ; xx
[ 539 ] = xx [ 444 ] ; xx [ 540 ] = xx [ 477 ] ; xx [ 541 ] = xx [ 492 ] ; xx
[ 542 ] = xx [ 403 ] ; xx [ 543 ] = xx [ 495 ] ; xx [ 544 ] = xx [ 516 ] ; xx
[ 545 ] = xx [ 445 ] ; xx [ 546 ] = xx [ 433 ] ; xx [ 356 ] = xx [ 355 ] / xx
[ 373 ] ; xx [ 450 ] = xx [ 218 ] * xx [ 356 ] ; xx [ 493 ] = xx [ 219 ] * xx
[ 356 ] ; xx [ 517 ] = xx [ 218 ] / xx [ 373 ] ; xx [ 528 ] = xx [ 219 ] * xx
[ 517 ] ; xx [ 530 ] = xx [ 219 ] / xx [ 373 ] ; xx [ 547 ] = xx [ 285 ] - xx
[ 355 ] * xx [ 356 ] + xx [ 98 ] ; xx [ 548 ] = xx [ 286 ] - xx [ 450 ] ; xx
[ 549 ] = xx [ 306 ] - xx [ 493 ] ; xx [ 550 ] = xx [ 309 ] - xx [ 450 ] ; xx
[ 551 ] = xx [ 310 ] - xx [ 218 ] * xx [ 517 ] + xx [ 106 ] ; xx [ 552 ] = xx
[ 311 ] - xx [ 528 ] ; xx [ 553 ] = xx [ 312 ] - xx [ 493 ] ; xx [ 554 ] = xx
[ 325 ] - xx [ 528 ] ; xx [ 555 ] = xx [ 296 ] - xx [ 219 ] * xx [ 530 ] + xx
[ 107 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 547 , xx + 538 , xx +
557 ) ; pm_math_Matrix3x3_compose_ra ( xx + 538 , xx + 557 , xx + 547 ) ; xx
[ 98 ] = xx [ 368 ] / xx [ 373 ] ; xx [ 106 ] = xx [ 370 ] / xx [ 373 ] ; xx
[ 107 ] = xx [ 371 ] / xx [ 373 ] ; xx [ 557 ] = xx [ 303 ] - xx [ 355 ] * xx
[ 98 ] ; xx [ 558 ] = xx [ 304 ] - xx [ 355 ] * xx [ 106 ] ; xx [ 559 ] = xx
[ 336 ] - xx [ 355 ] * xx [ 107 ] ; xx [ 560 ] = xx [ 339 ] - xx [ 218 ] * xx
[ 98 ] ; xx [ 561 ] = xx [ 341 ] - xx [ 218 ] * xx [ 106 ] ; xx [ 562 ] = xx
[ 347 ] - xx [ 218 ] * xx [ 107 ] ; xx [ 563 ] = xx [ 349 ] - xx [ 219 ] * xx
[ 98 ] ; xx [ 564 ] = xx [ 350 ] - xx [ 219 ] * xx [ 106 ] ; xx [ 565 ] = xx
[ 351 ] - xx [ 219 ] * xx [ 107 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 557 , xx + 538 , xx + 566 ) ; pm_math_Matrix3x3_compose_ra ( xx + 538 ,
xx + 566 , xx + 557 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 557 , xx + 447
, xx + 566 ) ; xx [ 285 ] = xx [ 370 ] * xx [ 98 ] ; xx [ 286 ] = xx [ 371 ]
* xx [ 98 ] ; xx [ 296 ] = xx [ 371 ] * xx [ 106 ] ; xx [ 575 ] = xx [ 461 ]
- xx [ 368 ] * xx [ 98 ] + xx [ 367 ] ; xx [ 576 ] = xx [ 462 ] - xx [ 285 ]
; xx [ 577 ] = xx [ 463 ] - xx [ 286 ] ; xx [ 578 ] = xx [ 464 ] - xx [ 285 ]
; xx [ 579 ] = xx [ 465 ] - xx [ 370 ] * xx [ 106 ] + xx [ 367 ] ; xx [ 580 ]
= xx [ 466 ] - xx [ 296 ] ; xx [ 581 ] = xx [ 467 ] - xx [ 286 ] ; xx [ 582 ]
= xx [ 468 ] - xx [ 296 ] ; xx [ 583 ] = xx [ 469 ] - xx [ 371 ] * xx [ 107 ]
+ xx [ 367 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 575 , xx + 538 ,
xx + 461 ) ; pm_math_Matrix3x3_compose_ra ( xx + 538 , xx + 461 , xx + 575 )
; pm_math_Matrix3x3_postCross_ra ( xx + 575 , xx + 447 , xx + 461 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 461 , xx + 447 , xx + 538 ) ; xx [ 309 ]
= - 0.9890584029719356 ; xx [ 310 ] = 0.02451507747925197 ; xx [ 311 ] = -
0.1451159893451954 ; xx [ 312 ] = - 0.01019000113620927 ; xx [ 285 ] = xx [ 9
] * state [ 8 ] ; xx [ 286 ] = 0.01619418156754471 ; xx [ 296 ] = sin ( xx [
285 ] ) ; xx [ 303 ] = 0.9998688656410684 ; xx [ 304 ] = 2.236298900726297e-6
; xx [ 584 ] = cos ( xx [ 285 ] ) ; xx [ 585 ] = - ( xx [ 286 ] * xx [ 296 ]
) ; xx [ 586 ] = - ( xx [ 303 ] * xx [ 296 ] ) ; xx [ 587 ] = - ( xx [ 304 ]
* xx [ 296 ] ) ; pm_math_Quaternion_compose_ra ( xx + 309 , xx + 584 , xx +
588 ) ; xx [ 285 ] = xx [ 588 ] * xx [ 588 ] ; xx [ 296 ] = xx [ 131 ] * ( xx
[ 285 ] + xx [ 589 ] * xx [ 589 ] ) - xx [ 200 ] ; xx [ 306 ] = xx [ 589 ] *
xx [ 590 ] ; xx [ 309 ] = xx [ 588 ] * xx [ 591 ] ; xx [ 310 ] = xx [ 131 ] *
( xx [ 306 ] - xx [ 309 ] ) ; xx [ 311 ] = xx [ 589 ] * xx [ 591 ] ; xx [ 312
] = xx [ 588 ] * xx [ 590 ] ; xx [ 325 ] = xx [ 131 ] * ( xx [ 311 ] + xx [
312 ] ) ; xx [ 336 ] = xx [ 131 ] * ( xx [ 306 ] + xx [ 309 ] ) ; xx [ 306 ]
= xx [ 131 ] * ( xx [ 285 ] + xx [ 590 ] * xx [ 590 ] ) - xx [ 200 ] ; xx [
309 ] = xx [ 590 ] * xx [ 591 ] ; xx [ 339 ] = xx [ 588 ] * xx [ 589 ] ; xx [
341 ] = xx [ 131 ] * ( xx [ 309 ] - xx [ 339 ] ) ; xx [ 347 ] = xx [ 131 ] *
( xx [ 311 ] - xx [ 312 ] ) ; xx [ 311 ] = xx [ 131 ] * ( xx [ 309 ] + xx [
339 ] ) ; xx [ 309 ] = xx [ 131 ] * ( xx [ 285 ] + xx [ 591 ] * xx [ 591 ] )
- xx [ 200 ] ; xx [ 592 ] = xx [ 296 ] ; xx [ 593 ] = xx [ 310 ] ; xx [ 594 ]
= xx [ 325 ] ; xx [ 595 ] = xx [ 336 ] ; xx [ 596 ] = xx [ 306 ] ; xx [ 597 ]
= xx [ 341 ] ; xx [ 598 ] = xx [ 347 ] ; xx [ 599 ] = xx [ 311 ] ; xx [ 600 ]
= xx [ 309 ] ; xx [ 285 ] = 1.225746005611634e-7 ; xx [ 312 ] =
1.984995337056748e-9 ; xx [ 339 ] = 2.052057793482446e-7 ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 339 , 1 , xx + 349 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R5' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 349 ] = xx [ 312 ] / xx [ 339 ] ; xx [ 350 ] =
1.970110125747632e-7 ; xx [ 351 ] = - ( xx [ 350 ] * xx [ 349 ] ) ; xx [ 367
] = 1.768781645150334e-13 ; xx [ 450 ] = - ( xx [ 367 ] * xx [ 349 ] ) ; xx [
493 ] = 1.970368508758887e-7 ; xx [ 528 ] = xx [ 350 ] / xx [ 339 ] ; xx [
534 ] = - ( xx [ 367 ] * xx [ 528 ] ) ; xx [ 535 ] = 7.909415170645909e-8 ;
xx [ 601 ] = xx [ 285 ] - xx [ 312 ] * xx [ 349 ] ; xx [ 602 ] = xx [ 351 ] ;
xx [ 603 ] = xx [ 450 ] ; xx [ 604 ] = xx [ 351 ] ; xx [ 605 ] = xx [ 493 ] -
xx [ 350 ] * xx [ 528 ] ; xx [ 606 ] = xx [ 534 ] ; xx [ 607 ] = xx [ 450 ] ;
xx [ 608 ] = xx [ 534 ] ; xx [ 609 ] = xx [ 535 ] - 3.128588508220723e-26 /
xx [ 339 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 601 , xx + 592 , xx
+ 610 ) ; pm_math_Matrix3x3_compose_ra ( xx + 592 , xx + 610 , xx + 601 ) ;
xx [ 351 ] = 1.001334009837669e-9 ; xx [ 450 ] = xx [ 351 ] / xx [ 339 ] ; xx
[ 534 ] = 5.901037551903033e-12 ; xx [ 584 ] = xx [ 534 ] / xx [ 339 ] ; xx [
585 ] = 4.612764885137648e-6 ; xx [ 586 ] = xx [ 585 ] / xx [ 339 ] ; xx [
610 ] = - ( xx [ 312 ] * xx [ 450 ] ) ; xx [ 611 ] = xx [ 312 ] * xx [ 584 ]
; xx [ 612 ] = xx [ 312 ] * xx [ 586 ] ; xx [ 613 ] = - ( xx [ 350 ] * xx [
450 ] ) ; xx [ 614 ] = xx [ 350 ] * xx [ 584 ] ; xx [ 615 ] = xx [ 350 ] * xx
[ 586 ] ; xx [ 616 ] = - ( xx [ 367 ] * xx [ 450 ] ) ; xx [ 617 ] = xx [ 367
] * xx [ 584 ] ; xx [ 618 ] = xx [ 367 ] * xx [ 586 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 610 , xx + 592 , xx + 619 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 592 , xx + 619 , xx + 610 ) ; xx [ 587 ]
= 7.499921419650881e-3 ; xx [ 619 ] = - 1.734877756550734e-3 ; xx [ 620 ] =
2.502306067621761e-3 ; xx [ 621 ] = - 3.798065468850008e-7 ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 619 , xx + 622 ) ; xx [ 619 ] =
0.01644245306791676 ; xx [ 620 ] = 0.01026010879458929 ; xx [ 625 ] = - ( xx
[ 587 ] + xx [ 622 ] ) ; xx [ 626 ] = - ( xx [ 619 ] + xx [ 623 ] ) ; xx [
627 ] = xx [ 620 ] - xx [ 624 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 610 ,
xx + 625 , xx + 628 ) ; xx [ 621 ] = 2.598487441353249e-3 ; xx [ 637 ] = xx [
534 ] * xx [ 450 ] ; xx [ 638 ] = xx [ 585 ] * xx [ 450 ] ; xx [ 639 ] = - (
xx [ 585 ] * xx [ 584 ] ) ; xx [ 640 ] = xx [ 621 ] - xx [ 351 ] * xx [ 450 ]
; xx [ 641 ] = xx [ 637 ] ; xx [ 642 ] = xx [ 638 ] ; xx [ 643 ] = xx [ 637 ]
; xx [ 644 ] = xx [ 621 ] - xx [ 534 ] * xx [ 584 ] ; xx [ 645 ] = xx [ 639 ]
; xx [ 646 ] = xx [ 638 ] ; xx [ 647 ] = xx [ 639 ] ; xx [ 648 ] = xx [ 621 ]
- xx [ 585 ] * xx [ 586 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 640
, xx + 592 , xx + 649 ) ; pm_math_Matrix3x3_compose_ra ( xx + 592 , xx + 649
, xx + 637 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 637 , xx + 625 , xx +
592 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 592 , xx + 625 , xx + 646 ) ; xx
[ 655 ] = xx [ 73 ] + xx [ 547 ] - xx [ 566 ] - xx [ 566 ] - xx [ 538 ] + xx
[ 601 ] - xx [ 628 ] - xx [ 628 ] - xx [ 646 ] ; xx [ 73 ] = xx [ 548 ] - xx
[ 567 ] - xx [ 569 ] - xx [ 539 ] + xx [ 602 ] - xx [ 629 ] - xx [ 631 ] - xx
[ 647 ] ; xx [ 656 ] = xx [ 549 ] - xx [ 568 ] - xx [ 572 ] - xx [ 540 ] + xx
[ 603 ] - xx [ 630 ] - xx [ 634 ] - xx [ 648 ] ; xx [ 657 ] = xx [ 550 ] - xx
[ 569 ] - xx [ 567 ] - xx [ 541 ] + xx [ 604 ] - xx [ 631 ] - xx [ 629 ] - xx
[ 649 ] ; xx [ 658 ] = xx [ 81 ] + xx [ 551 ] - xx [ 570 ] - xx [ 570 ] - xx
[ 542 ] + xx [ 605 ] - xx [ 632 ] - xx [ 632 ] - xx [ 650 ] ; xx [ 81 ] = xx
[ 552 ] - xx [ 571 ] - xx [ 573 ] - xx [ 543 ] + xx [ 606 ] - xx [ 633 ] - xx
[ 635 ] - xx [ 651 ] ; xx [ 659 ] = xx [ 553 ] - xx [ 572 ] - xx [ 568 ] - xx
[ 544 ] + xx [ 607 ] - xx [ 634 ] - xx [ 630 ] - xx [ 652 ] ; xx [ 660 ] = xx
[ 554 ] - xx [ 573 ] - xx [ 571 ] - xx [ 545 ] + xx [ 608 ] - xx [ 635 ] - xx
[ 633 ] - xx [ 653 ] ; xx [ 538 ] = xx [ 82 ] + xx [ 555 ] - xx [ 574 ] - xx
[ 574 ] - xx [ 546 ] + xx [ 609 ] - xx [ 636 ] - xx [ 636 ] - xx [ 654 ] ; xx
[ 539 ] = xx [ 655 ] ; xx [ 540 ] = xx [ 73 ] ; xx [ 541 ] = xx [ 656 ] ; xx
[ 542 ] = xx [ 657 ] ; xx [ 543 ] = xx [ 658 ] ; xx [ 544 ] = xx [ 81 ] ; xx
[ 545 ] = xx [ 659 ] ; xx [ 546 ] = xx [ 660 ] ; xx [ 547 ] = xx [ 538 ] ; xx
[ 548 ] = xx [ 59 ] ; xx [ 549 ] = - xx [ 68 ] ; xx [ 550 ] = - xx [ 69 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 539 , xx + 548 , xx + 551 ) ; xx [ 82 ] =
xx [ 557 ] - xx [ 461 ] + xx [ 610 ] - xx [ 592 ] ; xx [ 461 ] = xx [ 558 ] -
xx [ 464 ] + xx [ 611 ] - xx [ 595 ] ; xx [ 464 ] = xx [ 559 ] - xx [ 467 ] +
xx [ 612 ] - xx [ 598 ] ; xx [ 467 ] = xx [ 560 ] - xx [ 462 ] + xx [ 613 ] -
xx [ 593 ] ; xx [ 462 ] = xx [ 561 ] - xx [ 465 ] + xx [ 614 ] - xx [ 596 ] ;
xx [ 465 ] = xx [ 562 ] - xx [ 468 ] + xx [ 615 ] - xx [ 599 ] ; xx [ 468 ] =
xx [ 563 ] - xx [ 463 ] + xx [ 616 ] - xx [ 594 ] ; xx [ 463 ] = xx [ 564 ] -
xx [ 466 ] + xx [ 617 ] - xx [ 597 ] ; xx [ 466 ] = xx [ 565 ] - xx [ 469 ] +
xx [ 618 ] - xx [ 600 ] ; xx [ 557 ] = xx [ 82 ] ; xx [ 558 ] = xx [ 461 ] ;
xx [ 559 ] = xx [ 464 ] ; xx [ 560 ] = xx [ 467 ] ; xx [ 561 ] = xx [ 462 ] ;
xx [ 562 ] = xx [ 465 ] ; xx [ 563 ] = xx [ 468 ] ; xx [ 564 ] = xx [ 463 ] ;
xx [ 565 ] = xx [ 466 ] ; xx [ 469 ] = 5.960084666834363e-3 ; xx [ 554 ] =
6.686887689882423e-3 ; xx [ 555 ] = 0.01999289983026623 ; xx [ 566 ] = - xx [
469 ] ; xx [ 567 ] = xx [ 554 ] ; xx [ 568 ] = - xx [ 555 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 557 , xx + 566 , xx + 569 ) ; xx [ 572 ] =
xx [ 551 ] + xx [ 569 ] ; xx [ 573 ] = xx [ 490 ] + xx [ 523 ] ; xx [ 489 ] =
xx [ 491 ] + xx [ 524 ] ; xx [ 522 ] = xx [ 302 ] ; xx [ 523 ] = xx [ 573 ] ;
xx [ 524 ] = xx [ 489 ] ; xx [ 490 ] = xx [ 552 ] + xx [ 570 ] ; xx [ 491 ] =
xx [ 553 ] + xx [ 571 ] ; xx [ 551 ] = xx [ 572 ] ; xx [ 552 ] = xx [ 490 ] ;
xx [ 553 ] = xx [ 491 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 557 , xx
+ 548 , xx + 569 ) ; xx [ 574 ] = 0.07093528422922364 ; xx [ 592 ] = xx [ 574
] + xx [ 575 ] + xx [ 637 ] ; xx [ 575 ] = xx [ 576 ] + xx [ 638 ] ; xx [ 576
] = xx [ 577 ] + xx [ 639 ] ; xx [ 577 ] = xx [ 578 ] + xx [ 640 ] ; xx [ 578
] = xx [ 574 ] + xx [ 579 ] + xx [ 641 ] ; xx [ 579 ] = xx [ 580 ] + xx [ 642
] ; xx [ 580 ] = xx [ 581 ] + xx [ 643 ] ; xx [ 581 ] = xx [ 582 ] + xx [ 644
] ; xx [ 582 ] = xx [ 574 ] + xx [ 583 ] + xx [ 645 ] ; xx [ 593 ] = xx [ 592
] ; xx [ 594 ] = xx [ 575 ] ; xx [ 595 ] = xx [ 576 ] ; xx [ 596 ] = xx [ 577
] ; xx [ 597 ] = xx [ 578 ] ; xx [ 598 ] = xx [ 579 ] ; xx [ 599 ] = xx [ 580
] ; xx [ 600 ] = xx [ 581 ] ; xx [ 601 ] = xx [ 582 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 593 , xx + 566 , xx + 602 ) ; xx [ 574 ] =
xx [ 569 ] + xx [ 602 ] ; xx [ 583 ] = xx [ 570 ] + xx [ 603 ] ; xx [ 569 ] =
xx [ 571 ] + xx [ 604 ] ; xx [ 602 ] = xx [ 574 ] ; xx [ 603 ] = xx [ 583 ] ;
xx [ 604 ] = xx [ 569 ] ; xx [ 570 ] = pm_math_Vector3_dot_ra ( xx + 548 , xx
+ 551 ) + pm_math_Vector3_dot_ra ( xx + 566 , xx + 602 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 570 , 1 , xx + 551 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R4' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 551 ] = ( pm_math_Vector3_dot_ra ( xx + 548 , xx + 522
) + pm_math_Vector3_dot_ra ( xx + 566 , xx + 525 ) ) / xx [ 570 ] ; xx [ 522
] = xx [ 302 ] - xx [ 572 ] * xx [ 551 ] ; xx [ 523 ] = xx [ 573 ] - xx [ 490
] * xx [ 551 ] ; xx [ 524 ] = xx [ 489 ] - xx [ 491 ] * xx [ 551 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 522 , xx + 602 ) ; xx [ 522 ] =
0.05362010922911457 ; xx [ 523 ] = 0.02069388260901643 ; xx [ 524 ] = -
9.063353666285667e-3 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 522 , xx
+ 605 ) ; xx [ 522 ] = - ( 0.08443361020844066 + xx [ 605 ] ) ; xx [ 523 ] =
4.246357609997923e-4 - xx [ 606 ] ; xx [ 524 ] = 0.02378691714157365 - xx [
607 ] ; xx [ 605 ] = xx [ 525 ] - xx [ 574 ] * xx [ 551 ] ; xx [ 606 ] = xx [
526 ] - xx [ 583 ] * xx [ 551 ] ; xx [ 607 ] = xx [ 527 ] - xx [ 569 ] * xx [
551 ] ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 605 , xx + 525 ) ;
pm_math_Vector3_cross_ra ( xx + 522 , xx + 525 , xx + 605 ) ; xx [ 302 ] = xx
[ 602 ] + xx [ 605 ] ; xx [ 489 ] = xx [ 74 ] * xx [ 74 ] ; xx [ 552 ] = xx [
75 ] * xx [ 76 ] ; xx [ 553 ] = xx [ 74 ] * xx [ 77 ] ; xx [ 571 ] = xx [ 75
] * xx [ 77 ] ; xx [ 573 ] = xx [ 74 ] * xx [ 76 ] ; xx [ 608 ] = xx [ 76 ] *
xx [ 77 ] ; xx [ 609 ] = xx [ 74 ] * xx [ 75 ] ; xx [ 610 ] = xx [ 131 ] * (
xx [ 489 ] + xx [ 75 ] * xx [ 75 ] ) - xx [ 200 ] ; xx [ 611 ] = xx [ 131 ] *
( xx [ 552 ] - xx [ 553 ] ) ; xx [ 612 ] = xx [ 131 ] * ( xx [ 571 ] + xx [
573 ] ) ; xx [ 613 ] = xx [ 131 ] * ( xx [ 552 ] + xx [ 553 ] ) ; xx [ 614 ]
= xx [ 131 ] * ( xx [ 489 ] + xx [ 76 ] * xx [ 76 ] ) - xx [ 200 ] ; xx [ 615
] = xx [ 131 ] * ( xx [ 608 ] - xx [ 609 ] ) ; xx [ 616 ] = xx [ 131 ] * ( xx
[ 571 ] - xx [ 573 ] ) ; xx [ 617 ] = xx [ 131 ] * ( xx [ 608 ] + xx [ 609 ]
) ; xx [ 618 ] = xx [ 131 ] * ( xx [ 489 ] + xx [ 77 ] * xx [ 77 ] ) - xx [
200 ] ; xx [ 489 ] = xx [ 572 ] / xx [ 570 ] ; xx [ 552 ] = xx [ 490 ] * xx [
489 ] ; xx [ 553 ] = xx [ 491 ] * xx [ 489 ] ; xx [ 571 ] = xx [ 490 ] / xx [
570 ] ; xx [ 573 ] = xx [ 491 ] * xx [ 571 ] ; xx [ 608 ] = xx [ 491 ] / xx [
570 ] ; xx [ 628 ] = xx [ 655 ] - xx [ 572 ] * xx [ 489 ] ; xx [ 629 ] = xx [
73 ] - xx [ 552 ] ; xx [ 630 ] = xx [ 656 ] - xx [ 553 ] ; xx [ 631 ] = xx [
657 ] - xx [ 552 ] ; xx [ 632 ] = xx [ 658 ] - xx [ 490 ] * xx [ 571 ] ; xx [
633 ] = xx [ 81 ] - xx [ 573 ] ; xx [ 634 ] = xx [ 659 ] - xx [ 553 ] ; xx [
635 ] = xx [ 660 ] - xx [ 573 ] ; xx [ 636 ] = xx [ 538 ] - xx [ 491 ] * xx [
608 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 628 , xx + 610 , xx +
637 ) ; pm_math_Matrix3x3_compose_ra ( xx + 610 , xx + 637 , xx + 628 ) ; xx
[ 73 ] = xx [ 574 ] / xx [ 570 ] ; xx [ 81 ] = xx [ 583 ] / xx [ 570 ] ; xx [
538 ] = xx [ 569 ] / xx [ 570 ] ; xx [ 637 ] = xx [ 82 ] - xx [ 572 ] * xx [
73 ] ; xx [ 638 ] = xx [ 461 ] - xx [ 572 ] * xx [ 81 ] ; xx [ 639 ] = xx [
464 ] - xx [ 572 ] * xx [ 538 ] ; xx [ 640 ] = xx [ 467 ] - xx [ 490 ] * xx [
73 ] ; xx [ 641 ] = xx [ 462 ] - xx [ 490 ] * xx [ 81 ] ; xx [ 642 ] = xx [
465 ] - xx [ 490 ] * xx [ 538 ] ; xx [ 643 ] = xx [ 468 ] - xx [ 491 ] * xx [
73 ] ; xx [ 644 ] = xx [ 463 ] - xx [ 491 ] * xx [ 81 ] ; xx [ 645 ] = xx [
466 ] - xx [ 491 ] * xx [ 538 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx
+ 637 , xx + 610 , xx + 646 ) ; pm_math_Matrix3x3_compose_ra ( xx + 610 , xx
+ 646 , xx + 637 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 637 , xx + 522 ,
xx + 646 ) ; xx [ 82 ] = xx [ 583 ] * xx [ 73 ] ; xx [ 461 ] = xx [ 569 ] *
xx [ 73 ] ; xx [ 462 ] = xx [ 569 ] * xx [ 81 ] ; xx [ 655 ] = xx [ 592 ] -
xx [ 574 ] * xx [ 73 ] ; xx [ 656 ] = xx [ 575 ] - xx [ 82 ] ; xx [ 657 ] =
xx [ 576 ] - xx [ 461 ] ; xx [ 658 ] = xx [ 577 ] - xx [ 82 ] ; xx [ 659 ] =
xx [ 578 ] - xx [ 583 ] * xx [ 81 ] ; xx [ 660 ] = xx [ 579 ] - xx [ 462 ] ;
xx [ 661 ] = xx [ 580 ] - xx [ 461 ] ; xx [ 662 ] = xx [ 581 ] - xx [ 462 ] ;
xx [ 663 ] = xx [ 582 ] - xx [ 569 ] * xx [ 538 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 655 , xx + 610 , xx + 664 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 610 , xx + 664 , xx + 655 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 655 , xx + 522 , xx + 609 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 609 , xx + 522 , xx + 664 ) ; xx [ 82 ]
= xx [ 628 ] - xx [ 646 ] - xx [ 646 ] - xx [ 664 ] ; xx [ 461 ] = xx [ 629 ]
- xx [ 647 ] - xx [ 649 ] - xx [ 665 ] ; xx [ 462 ] = xx [ 630 ] - xx [ 648 ]
- xx [ 652 ] - xx [ 666 ] ; xx [ 463 ] = xx [ 631 ] - xx [ 649 ] - xx [ 647 ]
- xx [ 667 ] ; xx [ 464 ] = xx [ 632 ] - xx [ 650 ] - xx [ 650 ] - xx [ 668 ]
; xx [ 465 ] = xx [ 633 ] - xx [ 651 ] - xx [ 653 ] - xx [ 669 ] ; xx [ 466 ]
= xx [ 634 ] - xx [ 652 ] - xx [ 648 ] - xx [ 670 ] ; xx [ 467 ] = xx [ 635 ]
- xx [ 653 ] - xx [ 651 ] - xx [ 671 ] ; xx [ 468 ] = xx [ 636 ] - xx [ 654 ]
- xx [ 654 ] - xx [ 672 ] ; xx [ 628 ] = xx [ 48 ] + xx [ 82 ] ; xx [ 629 ] =
xx [ 461 ] ; xx [ 630 ] = xx [ 462 ] ; xx [ 631 ] = xx [ 463 ] ; xx [ 632 ] =
xx [ 56 ] + xx [ 464 ] ; xx [ 633 ] = xx [ 465 ] ; xx [ 634 ] = xx [ 466 ] ;
xx [ 635 ] = xx [ 467 ] ; xx [ 636 ] = xx [ 57 ] + xx [ 468 ] ; xx [ 575 ] =
- xx [ 34 ] ; xx [ 576 ] = xx [ 43 ] ; xx [ 577 ] = xx [ 44 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 628 , xx + 575 , xx + 578 ) ; xx [ 552 ] =
xx [ 637 ] - xx [ 609 ] ; xx [ 553 ] = xx [ 638 ] - xx [ 612 ] ; xx [ 573 ] =
xx [ 639 ] - xx [ 615 ] ; xx [ 581 ] = xx [ 640 ] - xx [ 610 ] ; xx [ 582 ] =
xx [ 641 ] - xx [ 613 ] ; xx [ 592 ] = xx [ 642 ] - xx [ 616 ] ; xx [ 609 ] =
xx [ 643 ] - xx [ 611 ] ; xx [ 610 ] = xx [ 644 ] - xx [ 614 ] ; xx [ 611 ] =
xx [ 645 ] - xx [ 617 ] ; xx [ 637 ] = xx [ 552 ] ; xx [ 638 ] = xx [ 553 ] ;
xx [ 639 ] = xx [ 573 ] ; xx [ 640 ] = xx [ 581 ] ; xx [ 641 ] = xx [ 582 ] ;
xx [ 642 ] = xx [ 592 ] ; xx [ 643 ] = xx [ 609 ] ; xx [ 644 ] = xx [ 610 ] ;
xx [ 645 ] = xx [ 611 ] ; xx [ 612 ] = 2.620690117576402e-3 ; xx [ 613 ] =
0.06521803952163305 ; xx [ 614 ] = 8.354166456224339e-3 ; xx [ 615 ] = - xx [
612 ] ; xx [ 616 ] = - xx [ 613 ] ; xx [ 617 ] = xx [ 614 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 637 , xx + 615 , xx + 646 ) ; xx [ 618 ] =
xx [ 578 ] + xx [ 646 ] ; xx [ 649 ] = xx [ 603 ] + xx [ 606 ] ; xx [ 602 ] =
xx [ 604 ] + xx [ 607 ] ; xx [ 603 ] = xx [ 302 ] ; xx [ 604 ] = xx [ 649 ] ;
xx [ 605 ] = xx [ 602 ] ; xx [ 606 ] = xx [ 579 ] + xx [ 647 ] ; xx [ 578 ] =
xx [ 580 ] + xx [ 648 ] ; xx [ 646 ] = xx [ 618 ] ; xx [ 647 ] = xx [ 606 ] ;
xx [ 648 ] = xx [ 578 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 637 , xx
+ 575 , xx + 650 ) ; xx [ 579 ] = 0.1611742037109717 ; xx [ 664 ] = xx [ 579
] + xx [ 655 ] ; xx [ 665 ] = xx [ 656 ] ; xx [ 666 ] = xx [ 657 ] ; xx [ 667
] = xx [ 658 ] ; xx [ 668 ] = xx [ 579 ] + xx [ 659 ] ; xx [ 669 ] = xx [ 660
] ; xx [ 670 ] = xx [ 661 ] ; xx [ 671 ] = xx [ 662 ] ; xx [ 672 ] = xx [ 579
] + xx [ 663 ] ; pm_math_Matrix3x3_xform_ra ( xx + 664 , xx + 615 , xx + 673
) ; xx [ 580 ] = xx [ 650 ] + xx [ 673 ] ; xx [ 607 ] = xx [ 651 ] + xx [ 674
] ; xx [ 650 ] = xx [ 652 ] + xx [ 675 ] ; xx [ 651 ] = xx [ 580 ] ; xx [ 652
] = xx [ 607 ] ; xx [ 653 ] = xx [ 650 ] ; xx [ 654 ] =
pm_math_Vector3_dot_ra ( xx + 575 , xx + 646 ) + pm_math_Vector3_dot_ra ( xx
+ 615 , xx + 651 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 654 , 1 , xx +
646 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 646 ] = ( pm_math_Vector3_dot_ra ( xx + 575 , xx + 603
) + pm_math_Vector3_dot_ra ( xx + 615 , xx + 525 ) ) / xx [ 654 ] ; xx [ 603
] = xx [ 302 ] - xx [ 618 ] * xx [ 646 ] ; xx [ 604 ] = xx [ 649 ] - xx [ 606
] * xx [ 646 ] ; xx [ 605 ] = xx [ 602 ] - xx [ 578 ] * xx [ 646 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 603 , xx + 647 ) ; xx [ 602 ] =
0.0657897969447355 ; xx [ 603 ] = - 7.833068200340101e-3 ; xx [ 604 ] = -
0.04051184310827824 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 602 , xx +
651 ) ; xx [ 602 ] = - ( 0.040868600148552 + xx [ 651 ] ) ; xx [ 603 ] =
0.07621270854813512 - xx [ 652 ] ; xx [ 604 ] = - ( 6.185166645836258e-9 + xx
[ 653 ] ) ; xx [ 651 ] = xx [ 525 ] - xx [ 580 ] * xx [ 646 ] ; xx [ 652 ] =
xx [ 526 ] - xx [ 607 ] * xx [ 646 ] ; xx [ 653 ] = xx [ 527 ] - xx [ 650 ] *
xx [ 646 ] ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 651 , xx + 525 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 525 , xx + 651 ) ; xx [ 302 ] = xx
[ 647 ] + xx [ 651 ] ; xx [ 605 ] = xx [ 49 ] * xx [ 49 ] ; xx [ 673 ] = xx [
50 ] * xx [ 51 ] ; xx [ 674 ] = xx [ 49 ] * xx [ 52 ] ; xx [ 675 ] = xx [ 50
] * xx [ 52 ] ; xx [ 676 ] = xx [ 49 ] * xx [ 51 ] ; xx [ 677 ] = xx [ 51 ] *
xx [ 52 ] ; xx [ 678 ] = xx [ 49 ] * xx [ 50 ] ; xx [ 679 ] = xx [ 131 ] * (
xx [ 605 ] + xx [ 50 ] * xx [ 50 ] ) - xx [ 200 ] ; xx [ 680 ] = xx [ 131 ] *
( xx [ 673 ] - xx [ 674 ] ) ; xx [ 681 ] = xx [ 131 ] * ( xx [ 675 ] + xx [
676 ] ) ; xx [ 682 ] = xx [ 131 ] * ( xx [ 673 ] + xx [ 674 ] ) ; xx [ 683 ]
= xx [ 131 ] * ( xx [ 605 ] + xx [ 51 ] * xx [ 51 ] ) - xx [ 200 ] ; xx [ 684
] = xx [ 131 ] * ( xx [ 677 ] - xx [ 678 ] ) ; xx [ 685 ] = xx [ 131 ] * ( xx
[ 675 ] - xx [ 676 ] ) ; xx [ 686 ] = xx [ 131 ] * ( xx [ 677 ] + xx [ 678 ]
) ; xx [ 687 ] = xx [ 131 ] * ( xx [ 605 ] + xx [ 52 ] * xx [ 52 ] ) - xx [
200 ] ; xx [ 605 ] = xx [ 618 ] / xx [ 654 ] ; xx [ 673 ] = xx [ 606 ] * xx [
605 ] ; xx [ 674 ] = xx [ 578 ] * xx [ 605 ] ; xx [ 675 ] = xx [ 606 ] / xx [
654 ] ; xx [ 676 ] = xx [ 578 ] * xx [ 675 ] ; xx [ 677 ] = xx [ 578 ] / xx [
654 ] ; xx [ 688 ] = xx [ 82 ] - xx [ 618 ] * xx [ 605 ] + xx [ 48 ] ; xx [
689 ] = xx [ 461 ] - xx [ 673 ] ; xx [ 690 ] = xx [ 462 ] - xx [ 674 ] ; xx [
691 ] = xx [ 463 ] - xx [ 673 ] ; xx [ 692 ] = xx [ 464 ] - xx [ 606 ] * xx [
675 ] + xx [ 56 ] ; xx [ 693 ] = xx [ 465 ] - xx [ 676 ] ; xx [ 694 ] = xx [
466 ] - xx [ 674 ] ; xx [ 695 ] = xx [ 467 ] - xx [ 676 ] ; xx [ 696 ] = xx [
468 ] - xx [ 578 ] * xx [ 677 ] + xx [ 57 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 688 , xx + 679 , xx + 697 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 679 , xx + 697 , xx + 688 ) ; xx [ 48 ] =
xx [ 580 ] / xx [ 654 ] ; xx [ 56 ] = xx [ 607 ] / xx [ 654 ] ; xx [ 57 ] =
xx [ 650 ] / xx [ 654 ] ; xx [ 697 ] = xx [ 552 ] - xx [ 618 ] * xx [ 48 ] ;
xx [ 698 ] = xx [ 553 ] - xx [ 618 ] * xx [ 56 ] ; xx [ 699 ] = xx [ 573 ] -
xx [ 618 ] * xx [ 57 ] ; xx [ 700 ] = xx [ 581 ] - xx [ 606 ] * xx [ 48 ] ;
xx [ 701 ] = xx [ 582 ] - xx [ 606 ] * xx [ 56 ] ; xx [ 702 ] = xx [ 592 ] -
xx [ 606 ] * xx [ 57 ] ; xx [ 703 ] = xx [ 609 ] - xx [ 578 ] * xx [ 48 ] ;
xx [ 704 ] = xx [ 610 ] - xx [ 578 ] * xx [ 56 ] ; xx [ 705 ] = xx [ 611 ] -
xx [ 578 ] * xx [ 57 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 697 ,
xx + 679 , xx + 706 ) ; pm_math_Matrix3x3_compose_ra ( xx + 679 , xx + 706 ,
xx + 697 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 697 , xx + 602 , xx + 706
) ; xx [ 82 ] = xx [ 607 ] * xx [ 48 ] ; xx [ 461 ] = xx [ 650 ] * xx [ 48 ]
; xx [ 462 ] = xx [ 650 ] * xx [ 56 ] ; xx [ 715 ] = xx [ 655 ] - xx [ 580 ]
* xx [ 48 ] + xx [ 579 ] ; xx [ 716 ] = xx [ 656 ] - xx [ 82 ] ; xx [ 717 ] =
xx [ 657 ] - xx [ 461 ] ; xx [ 718 ] = xx [ 658 ] - xx [ 82 ] ; xx [ 719 ] =
xx [ 659 ] - xx [ 607 ] * xx [ 56 ] + xx [ 579 ] ; xx [ 720 ] = xx [ 660 ] -
xx [ 462 ] ; xx [ 721 ] = xx [ 661 ] - xx [ 461 ] ; xx [ 722 ] = xx [ 662 ] -
xx [ 462 ] ; xx [ 723 ] = xx [ 663 ] - xx [ 650 ] * xx [ 57 ] + xx [ 579 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 715 , xx + 679 , xx + 655 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 679 , xx + 655 , xx + 715 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 715 , xx + 602 , xx + 655 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 655 , xx + 602 , xx + 678 ) ; xx [ 82 ]
= xx [ 23 ] + xx [ 688 ] - xx [ 706 ] - xx [ 706 ] - xx [ 678 ] ; xx [ 23 ] =
xx [ 689 ] - xx [ 707 ] - xx [ 709 ] - xx [ 679 ] ; xx [ 461 ] = xx [ 690 ] -
xx [ 708 ] - xx [ 712 ] - xx [ 680 ] ; xx [ 462 ] = xx [ 697 ] - xx [ 655 ] ;
xx [ 463 ] = xx [ 698 ] - xx [ 658 ] ; xx [ 464 ] = xx [ 699 ] - xx [ 661 ] ;
xx [ 465 ] = xx [ 700 ] - xx [ 656 ] ; xx [ 466 ] = xx [ 701 ] - xx [ 659 ] ;
xx [ 467 ] = xx [ 702 ] - xx [ 662 ] ; xx [ 468 ] = xx [ 703 ] - xx [ 657 ] ;
xx [ 552 ] = xx [ 704 ] - xx [ 660 ] ; xx [ 553 ] = xx [ 705 ] - xx [ 663 ] ;
xx [ 655 ] = xx [ 462 ] ; xx [ 656 ] = xx [ 463 ] ; xx [ 657 ] = xx [ 464 ] ;
xx [ 658 ] = xx [ 465 ] ; xx [ 659 ] = xx [ 466 ] ; xx [ 660 ] = xx [ 467 ] ;
xx [ 661 ] = xx [ 468 ] ; xx [ 662 ] = xx [ 552 ] ; xx [ 663 ] = xx [ 553 ] ;
xx [ 573 ] = 9.985578316825407e-9 ; xx [ 579 ] = 6.615583532402706e-10 ; xx [
581 ] = 0.07622539132635685 ; xx [ 609 ] = - xx [ 573 ] ; xx [ 610 ] = xx [
579 ] ; xx [ 611 ] = xx [ 581 ] ; pm_math_Matrix3x3_xform_ra ( xx + 655 , xx
+ 609 , xx + 697 ) ; xx [ 582 ] = xx [ 82 ] + xx [ 19 ] * xx [ 23 ] + xx [ 20
] * xx [ 461 ] + xx [ 697 ] ; xx [ 592 ] = xx [ 648 ] + xx [ 652 ] ; xx [ 647
] = xx [ 649 ] + xx [ 653 ] ; xx [ 648 ] = xx [ 691 ] - xx [ 709 ] - xx [ 707
] - xx [ 681 ] ; xx [ 649 ] = xx [ 24 ] + xx [ 692 ] - xx [ 710 ] - xx [ 710
] - xx [ 682 ] ; xx [ 24 ] = xx [ 693 ] - xx [ 711 ] - xx [ 713 ] - xx [ 683
] ; xx [ 651 ] = xx [ 648 ] + xx [ 19 ] * xx [ 649 ] + xx [ 20 ] * xx [ 24 ]
+ xx [ 698 ] ; xx [ 652 ] = xx [ 694 ] - xx [ 712 ] - xx [ 708 ] - xx [ 684 ]
; xx [ 653 ] = xx [ 695 ] - xx [ 713 ] - xx [ 711 ] - xx [ 685 ] ; xx [ 673 ]
= xx [ 32 ] + xx [ 696 ] - xx [ 714 ] - xx [ 714 ] - xx [ 686 ] ; xx [ 32 ] =
xx [ 652 ] + xx [ 19 ] * xx [ 653 ] + xx [ 20 ] * xx [ 673 ] + xx [ 699 ] ;
xx [ 674 ] = 0.04860824614829451 ; xx [ 678 ] = xx [ 674 ] + xx [ 715 ] ; xx
[ 679 ] = xx [ 716 ] ; xx [ 680 ] = xx [ 717 ] ; xx [ 681 ] = xx [ 718 ] ; xx
[ 682 ] = xx [ 674 ] + xx [ 719 ] ; xx [ 683 ] = xx [ 720 ] ; xx [ 684 ] = xx
[ 721 ] ; xx [ 685 ] = xx [ 722 ] ; xx [ 686 ] = xx [ 674 ] + xx [ 723 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 678 , xx + 609 , xx + 687 ) ; xx [ 676 ] =
xx [ 462 ] + xx [ 19 ] * xx [ 465 ] + xx [ 20 ] * xx [ 468 ] + xx [ 687 ] ;
xx [ 690 ] = xx [ 463 ] + xx [ 19 ] * xx [ 466 ] + xx [ 20 ] * xx [ 552 ] +
xx [ 688 ] ; xx [ 687 ] = xx [ 464 ] + xx [ 19 ] * xx [ 467 ] + xx [ 20 ] *
xx [ 553 ] + xx [ 689 ] ; xx [ 691 ] = xx [ 676 ] ; xx [ 692 ] = xx [ 690 ] ;
xx [ 693 ] = xx [ 687 ] ; xx [ 688 ] = xx [ 582 ] + xx [ 19 ] * xx [ 651 ] +
xx [ 20 ] * xx [ 32 ] + pm_math_Vector3_dot_ra ( xx + 609 , xx + 691 ) ; ii [
0 ] = factorSymmetricPosDef ( xx + 688 , 1 , xx + 689 ) ; if ( ii [ 0 ] != 0
) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 689 ] = ( xx [ 302 ] + xx [ 19 ] * xx [ 592 ] + xx [
20 ] * xx [ 647 ] + pm_math_Vector3_dot_ra ( xx + 609 , xx + 525 ) ) / xx [
688 ] ; xx [ 691 ] = xx [ 302 ] - xx [ 582 ] * xx [ 689 ] ; xx [ 692 ] = xx [
592 ] - xx [ 651 ] * xx [ 689 ] ; xx [ 693 ] = xx [ 647 ] - xx [ 32 ] * xx [
689 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 691 , xx + 694 ) ; xx [
691 ] = 0.02468880031958475 ; xx [ 692 ] = - 0.0762253912505382 ; xx [ 693 ]
= 3.895808054025665e-9 ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 691 ,
xx + 697 ) ; xx [ 691 ] = 9.610261677013888e-3 - xx [ 697 ] ; xx [ 692 ] =
0.03773161350321224 - xx [ 698 ] ; xx [ 693 ] = - ( 0.01036879698058195 + xx
[ 699 ] ) ; xx [ 697 ] = xx [ 525 ] - xx [ 676 ] * xx [ 689 ] ; xx [ 698 ] =
xx [ 526 ] - xx [ 690 ] * xx [ 689 ] ; xx [ 699 ] = xx [ 527 ] - xx [ 687 ] *
xx [ 689 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 697 , xx + 525 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 525 , xx + 697 ) ; xx [ 700 ] = xx
[ 694 ] + xx [ 697 ] ; xx [ 701 ] = xx [ 695 ] + xx [ 698 ] ; xx [ 702 ] = xx
[ 696 ] + xx [ 699 ] ; xx [ 302 ] = 0.01166601649384806 ; xx [ 592 ] =
5.773204583593171e-3 ; xx [ 647 ] = 0.01094115131990303 ; xx [ 694 ] = xx [
302 ] ; xx [ 695 ] = - xx [ 592 ] ; xx [ 696 ] = - xx [ 647 ] ; xx [ 697 ] =
xx [ 25 ] * xx [ 25 ] ; xx [ 698 ] = xx [ 26 ] * xx [ 27 ] ; xx [ 699 ] = xx
[ 25 ] * xx [ 28 ] ; xx [ 703 ] = xx [ 26 ] * xx [ 28 ] ; xx [ 704 ] = xx [
25 ] * xx [ 27 ] ; xx [ 705 ] = xx [ 27 ] * xx [ 28 ] ; xx [ 706 ] = xx [ 25
] * xx [ 26 ] ; xx [ 724 ] = xx [ 131 ] * ( xx [ 697 ] + xx [ 26 ] * xx [ 26
] ) - xx [ 200 ] ; xx [ 725 ] = xx [ 131 ] * ( xx [ 698 ] - xx [ 699 ] ) ; xx
[ 726 ] = xx [ 131 ] * ( xx [ 703 ] + xx [ 704 ] ) ; xx [ 727 ] = xx [ 131 ]
* ( xx [ 698 ] + xx [ 699 ] ) ; xx [ 728 ] = xx [ 131 ] * ( xx [ 697 ] + xx [
27 ] * xx [ 27 ] ) - xx [ 200 ] ; xx [ 729 ] = xx [ 131 ] * ( xx [ 705 ] - xx
[ 706 ] ) ; xx [ 730 ] = xx [ 131 ] * ( xx [ 703 ] - xx [ 704 ] ) ; xx [ 731
] = xx [ 131 ] * ( xx [ 705 ] + xx [ 706 ] ) ; xx [ 732 ] = xx [ 131 ] * ( xx
[ 697 ] + xx [ 28 ] * xx [ 28 ] ) - xx [ 200 ] ; xx [ 697 ] = xx [ 582 ] / xx
[ 688 ] ; xx [ 698 ] = xx [ 651 ] * xx [ 697 ] ; xx [ 699 ] = xx [ 32 ] * xx
[ 697 ] ; xx [ 703 ] = xx [ 651 ] / xx [ 688 ] ; xx [ 704 ] = xx [ 32 ] * xx
[ 703 ] ; xx [ 705 ] = xx [ 32 ] / xx [ 688 ] ; xx [ 706 ] = xx [ 82 ] - xx [
582 ] * xx [ 697 ] ; xx [ 707 ] = xx [ 23 ] - xx [ 698 ] ; xx [ 708 ] = xx [
461 ] - xx [ 699 ] ; xx [ 709 ] = xx [ 648 ] - xx [ 698 ] ; xx [ 710 ] = xx [
649 ] - xx [ 651 ] * xx [ 703 ] ; xx [ 711 ] = xx [ 24 ] - xx [ 704 ] ; xx [
712 ] = xx [ 652 ] - xx [ 699 ] ; xx [ 713 ] = xx [ 653 ] - xx [ 704 ] ; xx [
714 ] = xx [ 673 ] - xx [ 32 ] * xx [ 705 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 706 , xx + 724 , xx + 733 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 724 , xx + 733 , xx + 706 ) ; xx [ 698 ]
= xx [ 676 ] / xx [ 688 ] ; xx [ 699 ] = xx [ 690 ] / xx [ 688 ] ; xx [ 704 ]
= xx [ 687 ] / xx [ 688 ] ; xx [ 733 ] = xx [ 462 ] - xx [ 582 ] * xx [ 698 ]
; xx [ 734 ] = xx [ 463 ] - xx [ 582 ] * xx [ 699 ] ; xx [ 735 ] = xx [ 464 ]
- xx [ 582 ] * xx [ 704 ] ; xx [ 736 ] = xx [ 465 ] - xx [ 651 ] * xx [ 698 ]
; xx [ 737 ] = xx [ 466 ] - xx [ 651 ] * xx [ 699 ] ; xx [ 738 ] = xx [ 467 ]
- xx [ 651 ] * xx [ 704 ] ; xx [ 739 ] = xx [ 468 ] - xx [ 32 ] * xx [ 698 ]
; xx [ 740 ] = xx [ 552 ] - xx [ 32 ] * xx [ 699 ] ; xx [ 741 ] = xx [ 553 ]
- xx [ 32 ] * xx [ 704 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 733 ,
xx + 724 , xx + 742 ) ; pm_math_Matrix3x3_compose_ra ( xx + 724 , xx + 742 ,
xx + 733 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 733 , xx + 691 , xx + 742
) ; xx [ 462 ] = xx [ 690 ] * xx [ 698 ] ; xx [ 463 ] = xx [ 687 ] * xx [ 698
] ; xx [ 464 ] = xx [ 687 ] * xx [ 699 ] ; xx [ 751 ] = xx [ 715 ] - xx [ 676
] * xx [ 698 ] + xx [ 674 ] ; xx [ 752 ] = xx [ 716 ] - xx [ 462 ] ; xx [ 753
] = xx [ 717 ] - xx [ 463 ] ; xx [ 754 ] = xx [ 718 ] - xx [ 462 ] ; xx [ 755
] = xx [ 719 ] - xx [ 690 ] * xx [ 699 ] + xx [ 674 ] ; xx [ 756 ] = xx [ 720
] - xx [ 464 ] ; xx [ 757 ] = xx [ 721 ] - xx [ 463 ] ; xx [ 758 ] = xx [ 722
] - xx [ 464 ] ; xx [ 759 ] = xx [ 723 ] - xx [ 687 ] * xx [ 704 ] + xx [ 674
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 751 , xx + 724 , xx + 715 )
; pm_math_Matrix3x3_compose_ra ( xx + 724 , xx + 715 , xx + 751 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 751 , xx + 691 , xx + 715 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 715 , xx + 691 , xx + 724 ) ; xx [ 760 ]
= xx [ 6 ] + xx [ 706 ] - xx [ 742 ] - xx [ 742 ] - xx [ 724 ] ; xx [ 761 ] =
xx [ 707 ] - xx [ 743 ] - xx [ 745 ] - xx [ 725 ] ; xx [ 762 ] = xx [ 708 ] -
xx [ 744 ] - xx [ 748 ] - xx [ 726 ] ; xx [ 763 ] = xx [ 709 ] - xx [ 745 ] -
xx [ 743 ] - xx [ 727 ] ; xx [ 764 ] = xx [ 7 ] + xx [ 710 ] - xx [ 746 ] -
xx [ 746 ] - xx [ 728 ] ; xx [ 765 ] = xx [ 711 ] - xx [ 747 ] - xx [ 749 ] -
xx [ 729 ] ; xx [ 766 ] = xx [ 712 ] - xx [ 748 ] - xx [ 744 ] - xx [ 730 ] ;
xx [ 767 ] = xx [ 713 ] - xx [ 749 ] - xx [ 747 ] - xx [ 731 ] ; xx [ 768 ] =
xx [ 8 ] + xx [ 714 ] - xx [ 750 ] - xx [ 750 ] - xx [ 732 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 760 , xx + 0 , xx + 6 ) ; xx [ 706 ] = xx [
733 ] - xx [ 715 ] ; xx [ 707 ] = xx [ 734 ] - xx [ 718 ] ; xx [ 708 ] = xx [
735 ] - xx [ 721 ] ; xx [ 709 ] = xx [ 736 ] - xx [ 716 ] ; xx [ 710 ] = xx [
737 ] - xx [ 719 ] ; xx [ 711 ] = xx [ 738 ] - xx [ 722 ] ; xx [ 712 ] = xx [
739 ] - xx [ 717 ] ; xx [ 713 ] = xx [ 740 ] - xx [ 720 ] ; xx [ 714 ] = xx [
741 ] - xx [ 723 ] ; pm_math_Matrix3x3_xform_ra ( xx + 706 , xx + 694 , xx +
462 ) ; xx [ 465 ] = xx [ 6 ] + xx [ 462 ] ; xx [ 466 ] = xx [ 7 ] + xx [ 463
] ; xx [ 467 ] = xx [ 8 ] + xx [ 464 ] ; pm_math_Matrix3x3_transposeXform_ra
( xx + 706 , xx + 0 , xx + 6 ) ; xx [ 462 ] = 0.1814378438981157 ; xx [ 715 ]
= xx [ 462 ] + xx [ 751 ] ; xx [ 716 ] = xx [ 752 ] ; xx [ 717 ] = xx [ 753 ]
; xx [ 718 ] = xx [ 754 ] ; xx [ 719 ] = xx [ 462 ] + xx [ 755 ] ; xx [ 720 ]
= xx [ 756 ] ; xx [ 721 ] = xx [ 757 ] ; xx [ 722 ] = xx [ 758 ] ; xx [ 723 ]
= xx [ 462 ] + xx [ 759 ] ; pm_math_Matrix3x3_xform_ra ( xx + 715 , xx + 694
, xx + 462 ) ; xx [ 468 ] = xx [ 6 ] + xx [ 462 ] ; xx [ 552 ] = xx [ 7 ] +
xx [ 463 ] ; xx [ 6 ] = xx [ 8 ] + xx [ 464 ] ; xx [ 462 ] = xx [ 468 ] ; xx
[ 463 ] = xx [ 552 ] ; xx [ 464 ] = xx [ 6 ] ; xx [ 7 ] =
pm_math_Vector3_dot_ra ( xx + 0 , xx + 465 ) + pm_math_Vector3_dot_ra ( xx +
694 , xx + 462 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 7 , 1 , xx + 8 ) ;
if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/R1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 8 ] = ( pm_math_Vector3_dot_ra ( xx + 0 , xx + 700 ) +
pm_math_Vector3_dot_ra ( xx + 694 , xx + 525 ) ) / xx [ 7 ] ; xx [ 462 ] = -
( xx [ 0 ] * xx [ 8 ] ) ; xx [ 463 ] = - ( xx [ 1 ] * xx [ 8 ] ) ; xx [ 464 ]
= - ( xx [ 2 ] * xx [ 8 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 25 ,
xx + 462 , xx + 465 ) ; xx [ 525 ] = xx [ 697 ] ; xx [ 526 ] = xx [ 703 ] ;
xx [ 527 ] = xx [ 705 ] ; xx [ 700 ] = xx [ 698 ] ; xx [ 701 ] = xx [ 699 ] ;
xx [ 702 ] = xx [ 704 ] ; pm_math_Vector3_cross_ra ( xx + 462 , xx + 691 , xx
+ 697 ) ; xx [ 462 ] = xx [ 697 ] - xx [ 302 ] * xx [ 8 ] ; xx [ 463 ] = xx [
698 ] + xx [ 592 ] * xx [ 8 ] ; xx [ 464 ] = xx [ 699 ] + xx [ 647 ] * xx [ 8
] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 462 , xx + 697 ) ; xx
[ 8 ] = xx [ 689 ] + pm_math_Vector3_dot_ra ( xx + 525 , xx + 465 ) +
pm_math_Vector3_dot_ra ( xx + 700 , xx + 697 ) ; xx [ 462 ] = xx [ 465 ] - xx
[ 8 ] ; xx [ 463 ] = xx [ 466 ] - xx [ 19 ] * xx [ 8 ] ; xx [ 464 ] = xx [
467 ] - xx [ 20 ] * xx [ 8 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 49 ,
xx + 462 , xx + 465 ) ; xx [ 703 ] = xx [ 605 ] ; xx [ 704 ] = xx [ 675 ] ;
xx [ 705 ] = xx [ 677 ] ; xx [ 724 ] = xx [ 48 ] ; xx [ 725 ] = xx [ 56 ] ;
xx [ 726 ] = xx [ 57 ] ; pm_math_Vector3_cross_ra ( xx + 462 , xx + 602 , xx
+ 727 ) ; xx [ 462 ] = xx [ 697 ] + xx [ 573 ] * xx [ 8 ] + xx [ 727 ] ; xx [
463 ] = xx [ 698 ] - xx [ 579 ] * xx [ 8 ] + xx [ 728 ] ; xx [ 464 ] = xx [
699 ] - xx [ 581 ] * xx [ 8 ] + xx [ 729 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 462 , xx + 697 ) ; xx [ 8
] = xx [ 646 ] + pm_math_Vector3_dot_ra ( xx + 703 , xx + 465 ) +
pm_math_Vector3_dot_ra ( xx + 724 , xx + 697 ) ; xx [ 462 ] = xx [ 465 ] + xx
[ 34 ] * xx [ 8 ] ; xx [ 463 ] = xx [ 466 ] - xx [ 43 ] * xx [ 8 ] ; xx [ 464
] = xx [ 467 ] - xx [ 44 ] * xx [ 8 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 74 , xx + 462 , xx + 465 ) ; xx [ 727 ] = xx [ 489 ] ; xx [ 728 ] = xx [
571 ] ; xx [ 729 ] = xx [ 608 ] ; xx [ 730 ] = xx [ 73 ] ; xx [ 731 ] = xx [
81 ] ; xx [ 732 ] = xx [ 538 ] ; pm_math_Vector3_cross_ra ( xx + 462 , xx +
522 , xx + 733 ) ; xx [ 462 ] = xx [ 697 ] + xx [ 612 ] * xx [ 8 ] + xx [ 733
] ; xx [ 463 ] = xx [ 698 ] + xx [ 613 ] * xx [ 8 ] + xx [ 734 ] ; xx [ 464 ]
= xx [ 699 ] - xx [ 614 ] * xx [ 8 ] + xx [ 735 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 462 , xx + 697 ) ; xx [ 8
] = xx [ 551 ] + pm_math_Vector3_dot_ra ( xx + 727 , xx + 465 ) +
pm_math_Vector3_dot_ra ( xx + 730 , xx + 697 ) ; xx [ 462 ] = xx [ 465 ] - xx
[ 59 ] * xx [ 8 ] ; xx [ 463 ] = xx [ 466 ] + xx [ 68 ] * xx [ 8 ] ; xx [ 464
] = xx [ 467 ] + xx [ 69 ] * xx [ 8 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 99 , xx + 462 , xx + 465 ) ; xx [ 733 ] = xx [ 356 ] ; xx [ 734 ] = xx [
517 ] ; xx [ 735 ] = xx [ 530 ] ; xx [ 736 ] = xx [ 98 ] ; xx [ 737 ] = xx [
106 ] ; xx [ 738 ] = xx [ 107 ] ; pm_math_Vector3_cross_ra ( xx + 462 , xx +
447 , xx + 739 ) ; xx [ 462 ] = xx [ 697 ] + xx [ 469 ] * xx [ 8 ] + xx [ 739
] ; xx [ 463 ] = xx [ 698 ] - xx [ 554 ] * xx [ 8 ] + xx [ 740 ] ; xx [ 464 ]
= xx [ 699 ] + xx [ 555 ] * xx [ 8 ] + xx [ 741 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 462 , xx + 697 ) ; xx [ 8
] = xx [ 300 ] + pm_math_Vector3_dot_ra ( xx + 733 , xx + 465 ) +
pm_math_Vector3_dot_ra ( xx + 736 , xx + 697 ) ; xx [ 462 ] = xx [ 465 ] + xx
[ 84 ] * xx [ 8 ] ; xx [ 463 ] = xx [ 466 ] - xx [ 93 ] * xx [ 8 ] ; xx [ 464
] = xx [ 467 ] - xx [ 94 ] * xx [ 8 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 121 , xx + 462 , xx + 465 ) ; xx [ 739 ] = xx [ 114 ] ; xx [ 740 ] = xx
[ 250 ] ; xx [ 741 ] = xx [ 254 ] ; pm_math_Vector3_cross_ra ( xx + 462 , xx
+ 226 , xx + 742 ) ; xx [ 462 ] = xx [ 697 ] - xx [ 352 ] * xx [ 8 ] + xx [
742 ] ; xx [ 463 ] = xx [ 698 ] - xx [ 353 ] * xx [ 8 ] + xx [ 743 ] ; xx [
464 ] = xx [ 699 ] - xx [ 354 ] * xx [ 8 ] + xx [ 744 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 462 , xx + 697 ) ; xx [
8 ] = xx [ 485 ] - ( pm_math_Vector3_dot_ra ( xx + 531 , xx + 465 ) +
pm_math_Vector3_dot_ra ( xx + 739 , xx + 697 ) ) ; xx [ 462 ] = xx [ 397 ] ;
xx [ 463 ] = xx [ 261 ] ; xx [ 464 ] = xx [ 319 ] ; xx [ 48 ] = xx [ 133 ] *
xx [ 466 ] - xx [ 137 ] * xx [ 465 ] ; xx [ 56 ] = xx [ 465 ] + xx [ 131 ] *
xx [ 48 ] * xx [ 137 ] ; xx [ 57 ] = xx [ 466 ] - xx [ 131 ] * xx [ 48 ] * xx
[ 133 ] ; xx [ 48 ] = xx [ 467 ] + xx [ 8 ] ; xx [ 73 ] = xx [ 48 ] - xx [
131 ] * ( xx [ 48 ] * xx [ 133 ] * xx [ 133 ] + xx [ 48 ] * xx [ 137 ] * xx [
137 ] ) ; xx [ 742 ] = xx [ 56 ] ; xx [ 743 ] = xx [ 57 ] ; xx [ 744 ] = xx [
73 ] ; xx [ 745 ] = xx [ 282 ] ; xx [ 746 ] = xx [ 328 ] ; xx [ 747 ] = xx [
262 ] ; xx [ 748 ] = xx [ 465 ] ; xx [ 749 ] = xx [ 466 ] ; xx [ 750 ] = xx [
48 ] ; pm_math_Vector3_cross_ra ( xx + 748 , xx + 316 , xx + 465 ) ; xx [ 48
] = xx [ 697 ] + xx [ 274 ] * xx [ 8 ] + xx [ 465 ] ; xx [ 81 ] = xx [ 698 ]
+ xx [ 287 ] * xx [ 8 ] + xx [ 466 ] ; xx [ 98 ] = xx [ 81 ] * xx [ 133 ] -
xx [ 48 ] * xx [ 137 ] ; xx [ 106 ] = xx [ 48 ] + xx [ 131 ] * xx [ 98 ] * xx
[ 137 ] ; xx [ 48 ] = xx [ 81 ] - xx [ 131 ] * xx [ 98 ] * xx [ 133 ] ; xx [
81 ] = xx [ 699 ] + xx [ 467 ] ; xx [ 98 ] = xx [ 81 ] - xx [ 131 ] * ( xx [
81 ] * xx [ 133 ] * xx [ 133 ] + xx [ 81 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [
465 ] = xx [ 106 ] ; xx [ 466 ] = xx [ 48 ] ; xx [ 467 ] = xx [ 98 ] ; xx [
81 ] = xx [ 270 ] - ( pm_math_Vector3_dot_ra ( xx + 462 , xx + 742 ) +
pm_math_Vector3_dot_ra ( xx + 745 , xx + 465 ) ) ; xx [ 465 ] = - xx [ 291 ]
; xx [ 466 ] = xx [ 294 ] ; xx [ 467 ] = - ( xx [ 213 ] / xx [ 196 ] ) ; xx [
697 ] = xx [ 56 ] ; xx [ 698 ] = xx [ 57 ] ; xx [ 699 ] = xx [ 73 ] - xx [ 81
] ; pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 697 , xx + 742 ) ;
xx [ 748 ] = xx [ 233 ] ; xx [ 749 ] = - xx [ 258 ] ; xx [ 750 ] = - xx [ 259
] ; pm_math_Vector3_cross_ra ( xx + 697 , xx + 223 , xx + 751 ) ; xx [ 697 ]
= xx [ 106 ] - xx [ 289 ] * xx [ 81 ] + xx [ 751 ] ; xx [ 698 ] = xx [ 48 ] +
xx [ 232 ] * xx [ 81 ] + xx [ 752 ] ; xx [ 699 ] = xx [ 98 ] + xx [ 753 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 697 , xx + 751 ) ; xx [
697 ] = 5.728444065062708e-4 ; xx [ 698 ] = - 0.0463662621131998 ; xx [ 699 ]
= 7.575300750045659e-3 ; pm_math_Vector3_cross_ra ( xx + 201 , xx + 697 , xx
+ 754 ) ; pm_math_Quaternion_xform_ra ( xx + 204 , xx + 754 , xx + 201 ) ; xx
[ 204 ] = xx [ 119 ] ; xx [ 205 ] = xx [ 120 ] ; xx [ 206 ] = xx [ 108 ] ; xx
[ 48 ] = xx [ 133 ] * xx [ 221 ] - xx [ 214 ] * xx [ 137 ] ; xx [ 56 ] = xx [
214 ] + xx [ 131 ] * xx [ 48 ] * xx [ 137 ] + xx [ 281 ] ; xx [ 57 ] = xx [
56 ] * xx [ 116 ] ; xx [ 73 ] = xx [ 131 ] * xx [ 48 ] * xx [ 133 ] - xx [
221 ] + xx [ 222 ] ; xx [ 48 ] = xx [ 73 ] * xx [ 116 ] ; xx [ 98 ] = xx [ 56
] * xx [ 118 ] + xx [ 120 ] * xx [ 73 ] ; xx [ 106 ] = - xx [ 57 ] ; xx [ 107
] = xx [ 48 ] ; xx [ 108 ] = xx [ 98 ] ; pm_math_Vector3_cross_ra ( xx + 204
, xx + 106 , xx + 754 ) ; xx [ 106 ] = xx [ 287 ] * xx [ 116 ] ; xx [ 107 ] =
xx [ 274 ] * xx [ 116 ] ; xx [ 108 ] = xx [ 287 ] * xx [ 118 ] + xx [ 274 ] *
xx [ 120 ] ; xx [ 757 ] = xx [ 106 ] ; xx [ 758 ] = - xx [ 107 ] ; xx [ 759 ]
= - xx [ 108 ] ; pm_math_Vector3_cross_ra ( xx + 204 , xx + 757 , xx + 760 )
; xx [ 114 ] = xx [ 106 ] * xx [ 109 ] ; xx [ 119 ] = xx [ 131 ] * ( xx [ 760
] + xx [ 114 ] ) ; xx [ 207 ] = xx [ 107 ] * xx [ 109 ] ; xx [ 233 ] = xx [
131 ] * ( xx [ 761 ] - xx [ 207 ] ) ; xx [ 250 ] = xx [ 131 ] * ( xx [ 762 ]
- xx [ 108 ] * xx [ 109 ] ) ; xx [ 757 ] = xx [ 201 ] + xx [ 131 ] * ( xx [
754 ] - xx [ 57 ] * xx [ 109 ] ) + xx [ 119 ] - xx [ 73 ] + xx [ 274 ] ; xx [
758 ] = xx [ 202 ] + xx [ 131 ] * ( xx [ 755 ] + xx [ 48 ] * xx [ 109 ] ) -
xx [ 56 ] + xx [ 233 ] + xx [ 287 ] ; xx [ 759 ] = xx [ 203 ] + xx [ 131 ] *
( xx [ 109 ] * xx [ 98 ] + xx [ 756 ] ) + xx [ 250 ] ; xx [ 201 ] = -
0.3826804379272111 ; xx [ 202 ] = 0.9076319526101295 ; xx [ 203 ] =
0.1725106403354915 ; xx [ 48 ] = pm_math_Vector3_dot_ra ( xx + 757 , xx + 201
) ; xx [ 754 ] = - 0.04529404710916283 ; xx [ 755 ] = 9.34489474319e-4 ; xx [
756 ] = 9.144881203878137e-3 ; pm_math_Quaternion_xform_ra ( xx + 187 , xx +
754 , xx + 757 ) ; xx [ 56 ] = 1.267558276479352e-3 ; xx [ 57 ] =
0.02545789283437272 ; xx [ 73 ] = 7.693716347542733e-4 ; xx [ 754 ] = xx [ 56
] ; xx [ 755 ] = - xx [ 57 ] ; xx [ 756 ] = - xx [ 73 ] ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 754 , xx + 760 ) ;
pm_math_Quaternion_xform_ra ( xx + 183 , xx + 760 , xx + 763 ) ; xx [ 766 ] =
xx [ 757 ] + xx [ 763 ] ; xx [ 767 ] = xx [ 758 ] + xx [ 764 ] ; xx [ 768 ] =
xx [ 759 ] + xx [ 765 ] ; xx [ 98 ] = pm_math_Vector3_dot_ra ( xx + 766 , xx
+ 201 ) ; xx [ 108 ] = xx [ 98 ] / xx [ 196 ] ; xx [ 757 ] = - ( xx [ 177 ] *
xx [ 108 ] ) ; xx [ 758 ] = xx [ 212 ] * xx [ 108 ] ; xx [ 759 ] = - ( xx [
213 ] * xx [ 108 ] ) ; pm_math_Quaternion_xform_ra ( xx + 161 , xx + 757 , xx
+ 762 ) ; xx [ 757 ] = xx [ 215 ] * xx [ 108 ] ; xx [ 758 ] = - ( xx [ 216 ]
* xx [ 108 ] ) ; xx [ 759 ] = - ( xx [ 220 ] * xx [ 108 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 757 , xx + 765 ) ;
pm_math_Vector3_cross_ra ( xx + 223 , xx + 765 , xx + 757 ) ; xx [ 254 ] = xx
[ 764 ] + xx [ 759 ] ; pm_math_Vector3_cross_ra ( xx + 313 , xx + 697 , xx +
768 ) ; pm_math_Quaternion_xform_ra ( xx + 187 , xx + 768 , xx + 313 ) ; xx [
258 ] = xx [ 137 ] * xx [ 221 ] + xx [ 214 ] * xx [ 133 ] ; xx [ 259 ] = xx [
232 ] * xx [ 133 ] + xx [ 289 ] * xx [ 137 ] ; xx [ 261 ] = xx [ 131 ] * xx [
259 ] * xx [ 137 ] ; xx [ 262 ] = xx [ 131 ] * xx [ 258 ] * xx [ 137 ] + xx [
261 ] - xx [ 221 ] - xx [ 289 ] ; xx [ 270 ] = xx [ 131 ] * xx [ 259 ] * xx [
133 ] ; xx [ 259 ] = xx [ 232 ] - ( xx [ 270 ] - xx [ 214 ] + xx [ 131 ] * xx
[ 258 ] * xx [ 133 ] ) ; xx [ 258 ] = xx [ 259 ] * xx [ 116 ] ; xx [ 282 ] =
xx [ 262 ] * xx [ 116 ] ; xx [ 291 ] = xx [ 259 ] * xx [ 118 ] + xx [ 120 ] *
xx [ 262 ] ; xx [ 768 ] = xx [ 258 ] ; xx [ 769 ] = - xx [ 282 ] ; xx [ 770 ]
= - xx [ 291 ] ; pm_math_Vector3_cross_ra ( xx + 204 , xx + 768 , xx + 771 )
; xx [ 768 ] = xx [ 313 ] + xx [ 262 ] + xx [ 131 ] * ( xx [ 771 ] + xx [ 258
] * xx [ 109 ] ) ; xx [ 769 ] = xx [ 314 ] + xx [ 259 ] + xx [ 131 ] * ( xx [
772 ] - xx [ 282 ] * xx [ 109 ] ) ; xx [ 770 ] = xx [ 315 ] + xx [ 131 ] * (
xx [ 773 ] - xx [ 291 ] * xx [ 109 ] ) ; xx [ 258 ] = pm_math_Vector3_dot_ra
( xx + 768 , xx + 201 ) ; xx [ 259 ] = ( xx [ 258 ] - ( xx [ 232 ] * xx [ 766
] - xx [ 289 ] * xx [ 765 ] - xx [ 254 ] ) ) / xx [ 267 ] ; xx [ 262 ] = xx [
254 ] + xx [ 266 ] * xx [ 259 ] ; xx [ 254 ] = xx [ 765 ] + xx [ 244 ] * xx [
259 ] ; xx [ 282 ] = xx [ 766 ] + xx [ 240 ] * xx [ 259 ] ; xx [ 291 ] = xx [
282 ] * xx [ 133 ] - xx [ 254 ] * xx [ 137 ] ; xx [ 294 ] = xx [ 254 ] + xx [
131 ] * xx [ 291 ] * xx [ 137 ] ; xx [ 254 ] = xx [ 282 ] - xx [ 131 ] * xx [
291 ] * xx [ 133 ] ; xx [ 282 ] = xx [ 767 ] + xx [ 230 ] * xx [ 259 ] ; xx [
291 ] = xx [ 282 ] - xx [ 131 ] * ( xx [ 282 ] * xx [ 133 ] * xx [ 133 ] + xx
[ 282 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 313 ] = xx [ 294 ] ; xx [ 314 ] =
xx [ 254 ] ; xx [ 315 ] = xx [ 291 ] ; pm_math_Vector3_cross_ra ( xx + 316 ,
xx + 313 , xx + 765 ) ; xx [ 282 ] = xx [ 262 ] - xx [ 131 ] * ( xx [ 262 ] *
xx [ 133 ] * xx [ 133 ] + xx [ 262 ] * xx [ 137 ] * xx [ 137 ] ) + xx [ 767 ]
; xx [ 262 ] = ( xx [ 48 ] - ( xx [ 282 ] + xx [ 274 ] * xx [ 294 ] + xx [
287 ] * xx [ 254 ] ) ) / xx [ 470 ] ; xx [ 300 ] = xx [ 762 ] + xx [ 757 ] +
xx [ 279 ] * xx [ 259 ] ; xx [ 313 ] = xx [ 763 ] + xx [ 758 ] + xx [ 280 ] *
xx [ 259 ] ; xx [ 314 ] = xx [ 313 ] * xx [ 133 ] - xx [ 300 ] * xx [ 137 ] ;
xx [ 757 ] = xx [ 300 ] + xx [ 131 ] * xx [ 314 ] * xx [ 137 ] + xx [ 765 ] +
xx [ 283 ] * xx [ 262 ] ; xx [ 758 ] = xx [ 313 ] - xx [ 131 ] * xx [ 314 ] *
xx [ 133 ] + xx [ 766 ] + xx [ 330 ] * xx [ 262 ] ; xx [ 759 ] = xx [ 282 ] +
xx [ 333 ] * xx [ 262 ] ; pm_math_Quaternion_xform_ra ( xx + 121 , xx + 757 ,
xx + 313 ) ; xx [ 757 ] = xx [ 294 ] + xx [ 338 ] * xx [ 262 ] ; xx [ 758 ] =
xx [ 254 ] + xx [ 340 ] * xx [ 262 ] ; xx [ 759 ] = xx [ 291 ] + xx [ 323 ] *
xx [ 262 ] ; pm_math_Quaternion_xform_ra ( xx + 121 , xx + 757 , xx + 762 ) ;
pm_math_Vector3_cross_ra ( xx + 226 , xx + 762 , xx + 757 ) ; xx [ 254 ] = xx
[ 313 ] + xx [ 757 ] ; xx [ 282 ] = xx [ 314 ] + xx [ 758 ] ; xx [ 291 ] = xx
[ 315 ] + xx [ 759 ] ; xx [ 313 ] = xx [ 254 ] ; xx [ 314 ] = xx [ 282 ] ; xx
[ 315 ] = xx [ 291 ] ; xx [ 294 ] = ( pm_math_Vector3_dot_ra ( xx + 297 , xx
+ 313 ) + pm_math_Vector3_dot_ra ( xx + 352 , xx + 762 ) ) / xx [ 373 ] ; xx
[ 313 ] = xx [ 254 ] - xx [ 355 ] * xx [ 294 ] ; xx [ 314 ] = xx [ 282 ] - xx
[ 218 ] * xx [ 294 ] ; xx [ 315 ] = xx [ 291 ] - xx [ 219 ] * xx [ 294 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 313 , xx + 757 ) ; xx [ 313 ] =
xx [ 762 ] - xx [ 368 ] * xx [ 294 ] ; xx [ 314 ] = xx [ 763 ] - xx [ 370 ] *
xx [ 294 ] ; xx [ 315 ] = xx [ 764 ] - xx [ 371 ] * xx [ 294 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 313 , xx + 762 ) ;
pm_math_Vector3_cross_ra ( xx + 447 , xx + 762 , xx + 313 ) ; xx [ 254 ] = xx
[ 757 ] + xx [ 313 ] ; xx [ 282 ] = xx [ 758 ] + xx [ 314 ] ; xx [ 291 ] = xx
[ 759 ] + xx [ 315 ] ; xx [ 313 ] = xx [ 254 ] ; xx [ 314 ] = xx [ 282 ] ; xx
[ 315 ] = xx [ 291 ] ; xx [ 300 ] = ( pm_math_Vector3_dot_ra ( xx + 548 , xx
+ 313 ) + pm_math_Vector3_dot_ra ( xx + 566 , xx + 762 ) ) / xx [ 570 ] ; xx
[ 313 ] = xx [ 254 ] - xx [ 572 ] * xx [ 300 ] ; xx [ 314 ] = xx [ 282 ] - xx
[ 490 ] * xx [ 300 ] ; xx [ 315 ] = xx [ 291 ] - xx [ 491 ] * xx [ 300 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 313 , xx + 757 ) ; xx [ 313 ] =
xx [ 762 ] - xx [ 574 ] * xx [ 300 ] ; xx [ 314 ] = xx [ 763 ] - xx [ 583 ] *
xx [ 300 ] ; xx [ 315 ] = xx [ 764 ] - xx [ 569 ] * xx [ 300 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 313 , xx + 762 ) ;
pm_math_Vector3_cross_ra ( xx + 522 , xx + 762 , xx + 313 ) ; xx [ 254 ] = xx
[ 757 ] + xx [ 313 ] ; xx [ 282 ] = xx [ 758 ] + xx [ 314 ] ; xx [ 291 ] = xx
[ 759 ] + xx [ 315 ] ; xx [ 313 ] = xx [ 254 ] ; xx [ 314 ] = xx [ 282 ] ; xx
[ 315 ] = xx [ 291 ] ; xx [ 319 ] = ( pm_math_Vector3_dot_ra ( xx + 575 , xx
+ 313 ) + pm_math_Vector3_dot_ra ( xx + 615 , xx + 762 ) ) / xx [ 654 ] ; xx
[ 313 ] = xx [ 254 ] - xx [ 618 ] * xx [ 319 ] ; xx [ 314 ] = xx [ 282 ] - xx
[ 606 ] * xx [ 319 ] ; xx [ 315 ] = xx [ 291 ] - xx [ 578 ] * xx [ 319 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 313 , xx + 757 ) ; xx [ 313 ] =
xx [ 762 ] - xx [ 580 ] * xx [ 319 ] ; xx [ 314 ] = xx [ 763 ] - xx [ 607 ] *
xx [ 319 ] ; xx [ 315 ] = xx [ 764 ] - xx [ 650 ] * xx [ 319 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 313 , xx + 762 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 762 , xx + 313 ) ; xx [ 254 ] = xx
[ 757 ] + xx [ 313 ] ; xx [ 282 ] = xx [ 758 ] + xx [ 314 ] ; xx [ 291 ] = xx
[ 759 ] + xx [ 315 ] ; xx [ 313 ] = ( xx [ 254 ] + xx [ 19 ] * xx [ 282 ] +
xx [ 20 ] * xx [ 291 ] + pm_math_Vector3_dot_ra ( xx + 609 , xx + 762 ) ) /
xx [ 688 ] ; xx [ 757 ] = xx [ 254 ] - xx [ 582 ] * xx [ 313 ] ; xx [ 758 ] =
xx [ 282 ] - xx [ 651 ] * xx [ 313 ] ; xx [ 759 ] = xx [ 291 ] - xx [ 32 ] *
xx [ 313 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 757 , xx + 765 ) ;
xx [ 757 ] = xx [ 762 ] - xx [ 676 ] * xx [ 313 ] ; xx [ 758 ] = xx [ 763 ] -
xx [ 690 ] * xx [ 313 ] ; xx [ 759 ] = xx [ 764 ] - xx [ 687 ] * xx [ 313 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 757 , xx + 762 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 762 , xx + 757 ) ; xx [ 768 ] = xx
[ 765 ] + xx [ 757 ] ; xx [ 769 ] = xx [ 766 ] + xx [ 758 ] ; xx [ 770 ] = xx
[ 767 ] + xx [ 759 ] ; xx [ 254 ] = ( pm_math_Vector3_dot_ra ( xx + 0 , xx +
768 ) + pm_math_Vector3_dot_ra ( xx + 694 , xx + 762 ) ) / xx [ 7 ] ; xx [
757 ] = - ( xx [ 0 ] * xx [ 254 ] ) ; xx [ 758 ] = - ( xx [ 1 ] * xx [ 254 ]
) ; xx [ 759 ] = - ( xx [ 2 ] * xx [ 254 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 757 , xx + 762 ) ;
pm_math_Vector3_cross_ra ( xx + 757 , xx + 691 , xx + 765 ) ; xx [ 757 ] = xx
[ 765 ] - xx [ 302 ] * xx [ 254 ] ; xx [ 758 ] = xx [ 766 ] + xx [ 592 ] * xx
[ 254 ] ; xx [ 759 ] = xx [ 767 ] + xx [ 647 ] * xx [ 254 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 757 , xx + 765 ) ; xx [
254 ] = xx [ 313 ] + pm_math_Vector3_dot_ra ( xx + 525 , xx + 762 ) +
pm_math_Vector3_dot_ra ( xx + 700 , xx + 765 ) ; xx [ 313 ] = xx [ 762 ] - xx
[ 254 ] ; xx [ 314 ] = xx [ 763 ] - xx [ 19 ] * xx [ 254 ] ; xx [ 315 ] = xx
[ 764 ] - xx [ 20 ] * xx [ 254 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
49 , xx + 313 , xx + 757 ) ; pm_math_Vector3_cross_ra ( xx + 313 , xx + 602 ,
xx + 762 ) ; xx [ 313 ] = xx [ 765 ] + xx [ 573 ] * xx [ 254 ] + xx [ 762 ] ;
xx [ 314 ] = xx [ 766 ] - xx [ 579 ] * xx [ 254 ] + xx [ 763 ] ; xx [ 315 ] =
xx [ 767 ] - xx [ 581 ] * xx [ 254 ] + xx [ 764 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 313 , xx + 762 ) ; xx [
254 ] = xx [ 319 ] + pm_math_Vector3_dot_ra ( xx + 703 , xx + 757 ) +
pm_math_Vector3_dot_ra ( xx + 724 , xx + 762 ) ; xx [ 313 ] = xx [ 757 ] + xx
[ 34 ] * xx [ 254 ] ; xx [ 314 ] = xx [ 758 ] - xx [ 43 ] * xx [ 254 ] ; xx [
315 ] = xx [ 759 ] - xx [ 44 ] * xx [ 254 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 313 , xx + 757 ) ;
pm_math_Vector3_cross_ra ( xx + 313 , xx + 522 , xx + 765 ) ; xx [ 313 ] = xx
[ 762 ] + xx [ 612 ] * xx [ 254 ] + xx [ 765 ] ; xx [ 314 ] = xx [ 763 ] + xx
[ 613 ] * xx [ 254 ] + xx [ 766 ] ; xx [ 315 ] = xx [ 764 ] - xx [ 614 ] * xx
[ 254 ] + xx [ 767 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx +
313 , xx + 762 ) ; xx [ 254 ] = xx [ 300 ] + pm_math_Vector3_dot_ra ( xx +
727 , xx + 757 ) + pm_math_Vector3_dot_ra ( xx + 730 , xx + 762 ) ; xx [ 313
] = xx [ 757 ] - xx [ 59 ] * xx [ 254 ] ; xx [ 314 ] = xx [ 758 ] + xx [ 68 ]
* xx [ 254 ] ; xx [ 315 ] = xx [ 759 ] + xx [ 69 ] * xx [ 254 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 313 , xx + 757 ) ;
pm_math_Vector3_cross_ra ( xx + 313 , xx + 447 , xx + 765 ) ; xx [ 313 ] = xx
[ 762 ] + xx [ 469 ] * xx [ 254 ] + xx [ 765 ] ; xx [ 314 ] = xx [ 763 ] - xx
[ 554 ] * xx [ 254 ] + xx [ 766 ] ; xx [ 315 ] = xx [ 764 ] + xx [ 555 ] * xx
[ 254 ] + xx [ 767 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx +
313 , xx + 762 ) ; xx [ 254 ] = xx [ 294 ] + pm_math_Vector3_dot_ra ( xx +
733 , xx + 757 ) + pm_math_Vector3_dot_ra ( xx + 736 , xx + 762 ) ; xx [ 313
] = xx [ 757 ] + xx [ 84 ] * xx [ 254 ] ; xx [ 314 ] = xx [ 758 ] - xx [ 93 ]
* xx [ 254 ] ; xx [ 315 ] = xx [ 759 ] - xx [ 94 ] * xx [ 254 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 313 , xx + 757 ) ;
pm_math_Vector3_cross_ra ( xx + 313 , xx + 226 , xx + 765 ) ; xx [ 313 ] = xx
[ 762 ] - xx [ 352 ] * xx [ 254 ] + xx [ 765 ] ; xx [ 314 ] = xx [ 763 ] - xx
[ 353 ] * xx [ 254 ] + xx [ 766 ] ; xx [ 315 ] = xx [ 764 ] - xx [ 354 ] * xx
[ 254 ] + xx [ 767 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx +
313 , xx + 762 ) ; xx [ 254 ] = xx [ 262 ] - ( pm_math_Vector3_dot_ra ( xx +
531 , xx + 757 ) + pm_math_Vector3_dot_ra ( xx + 739 , xx + 762 ) ) ; xx [
262 ] = xx [ 133 ] * xx [ 758 ] - xx [ 137 ] * xx [ 757 ] ; xx [ 282 ] = xx [
757 ] + xx [ 131 ] * xx [ 262 ] * xx [ 137 ] ; xx [ 291 ] = xx [ 758 ] - xx [
131 ] * xx [ 262 ] * xx [ 133 ] ; xx [ 262 ] = xx [ 759 ] + xx [ 254 ] ; xx [
294 ] = xx [ 262 ] - xx [ 131 ] * ( xx [ 262 ] * xx [ 133 ] * xx [ 133 ] + xx
[ 262 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 313 ] = xx [ 282 ] ; xx [ 314 ] =
xx [ 291 ] ; xx [ 315 ] = xx [ 294 ] ; xx [ 765 ] = xx [ 757 ] ; xx [ 766 ] =
xx [ 758 ] ; xx [ 767 ] = xx [ 262 ] ; pm_math_Vector3_cross_ra ( xx + 765 ,
xx + 316 , xx + 757 ) ; xx [ 262 ] = xx [ 762 ] + xx [ 274 ] * xx [ 254 ] +
xx [ 757 ] ; xx [ 300 ] = xx [ 763 ] + xx [ 287 ] * xx [ 254 ] + xx [ 758 ] ;
xx [ 319 ] = xx [ 300 ] * xx [ 133 ] - xx [ 262 ] * xx [ 137 ] ; xx [ 328 ] =
xx [ 262 ] + xx [ 131 ] * xx [ 319 ] * xx [ 137 ] ; xx [ 262 ] = xx [ 300 ] -
xx [ 131 ] * xx [ 319 ] * xx [ 133 ] ; xx [ 300 ] = xx [ 764 ] + xx [ 759 ] ;
xx [ 319 ] = xx [ 300 ] - xx [ 131 ] * ( xx [ 300 ] * xx [ 133 ] * xx [ 133 ]
+ xx [ 300 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 757 ] = xx [ 328 ] ; xx [ 758
] = xx [ 262 ] ; xx [ 759 ] = xx [ 319 ] ; xx [ 300 ] = xx [ 259 ] - (
pm_math_Vector3_dot_ra ( xx + 462 , xx + 313 ) + pm_math_Vector3_dot_ra ( xx
+ 745 , xx + 757 ) ) ; xx [ 313 ] = xx [ 282 ] ; xx [ 314 ] = xx [ 291 ] ; xx
[ 315 ] = xx [ 294 ] - xx [ 300 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
161 , xx + 313 , xx + 757 ) ; pm_math_Vector3_cross_ra ( xx + 313 , xx + 223
, xx + 762 ) ; xx [ 313 ] = xx [ 328 ] - xx [ 289 ] * xx [ 300 ] + xx [ 762 ]
; xx [ 314 ] = xx [ 262 ] + xx [ 232 ] * xx [ 300 ] + xx [ 763 ] ; xx [ 315 ]
= xx [ 319 ] + xx [ 764 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 161 ,
xx + 313 , xx + 762 ) ; xx [ 259 ] = xx [ 108 ] - ( pm_math_Vector3_dot_ra (
xx + 465 , xx + 757 ) + pm_math_Vector3_dot_ra ( xx + 748 , xx + 762 ) ) ; xx
[ 108 ] = xx [ 195 ] * xx [ 254 ] + xx [ 234 ] * xx [ 300 ] + xx [ 192 ] * xx
[ 259 ] ; xx [ 262 ] = xx [ 345 ] * xx [ 388 ] - xx [ 376 ] * xx [ 391 ] ; xx
[ 282 ] = xx [ 345 ] * xx [ 389 ] - xx [ 376 ] * xx [ 390 ] ; xx [ 291 ] = xx
[ 345 ] * xx [ 390 ] + xx [ 376 ] * xx [ 389 ] ; xx [ 294 ] = xx [ 345 ] * xx
[ 391 ] + xx [ 376 ] * xx [ 388 ] ; xx [ 762 ] = xx [ 262 ] ; xx [ 763 ] = xx
[ 282 ] ; xx [ 764 ] = xx [ 291 ] ; xx [ 765 ] = xx [ 294 ] ;
pm_math_Quaternion_compose_ra ( xx + 121 , xx + 762 , xx + 766 ) ; xx [ 313 ]
= xx [ 131 ] * ( xx [ 282 ] * xx [ 294 ] - xx [ 262 ] * xx [ 291 ] ) ; xx [
314 ] = xx [ 131 ] * ( xx [ 262 ] * xx [ 282 ] + xx [ 291 ] * xx [ 294 ] ) ;
xx [ 315 ] = xx [ 200 ] - xx [ 131 ] * ( xx [ 282 ] * xx [ 282 ] + xx [ 291 ]
* xx [ 291 ] ) ; xx [ 262 ] = 0.9606008463440439 ; xx [ 282 ] =
0.2033682862169333 ; xx [ 291 ] = 0.1894395791916108 ; xx [ 757 ] = xx [ 262
] ; xx [ 758 ] = xx [ 282 ] ; xx [ 759 ] = xx [ 291 ] ;
pm_math_Vector3_cross_ra ( xx + 313 , xx + 757 , xx + 762 ) ;
pm_math_Quaternion_xform_ra ( xx + 766 , xx + 762 , xx + 770 ) ; xx [ 294 ] =
pm_math_Vector3_dot_ra ( xx + 770 , xx + 197 ) ; xx [ 319 ] = xx [ 109 ] * xx
[ 345 ] + xx [ 116 ] * xx [ 376 ] ; xx [ 328 ] = xx [ 120 ] * xx [ 376 ] - xx
[ 118 ] * xx [ 345 ] ; xx [ 356 ] = xx [ 120 ] * xx [ 345 ] + xx [ 118 ] * xx
[ 376 ] ; xx [ 397 ] = xx [ 109 ] * xx [ 376 ] - xx [ 116 ] * xx [ 345 ] ; xx
[ 762 ] = xx [ 319 ] ; xx [ 763 ] = xx [ 328 ] ; xx [ 764 ] = xx [ 356 ] ; xx
[ 765 ] = xx [ 397 ] ; pm_math_Quaternion_compose_ra ( xx + 762 , xx + 388 ,
xx + 770 ) ; xx [ 774 ] = 0.1955743002614493 ; xx [ 775 ] = -
0.9789023362583125 ; xx [ 776 ] = 0.0591684810119616 ;
pm_math_Quaternion_xform_ra ( xx + 770 , xx + 774 , xx + 777 ) ; xx [ 485 ] =
pm_math_Vector3_dot_ra ( xx + 777 , xx + 197 ) ; xx [ 489 ] = xx [ 485 ] / xx
[ 406 ] ; xx [ 774 ] = xx [ 405 ] * xx [ 489 ] ; xx [ 775 ] = - ( xx [ 408 ]
* xx [ 489 ] ) ; xx [ 776 ] = - ( xx [ 410 ] * xx [ 489 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 774 , xx + 777 ) ; xx [ 774 ] =
xx [ 409 ] * xx [ 489 ] ; xx [ 775 ] = - ( xx [ 414 ] * xx [ 489 ] ) ; xx [
776 ] = xx [ 426 ] * xx [ 489 ] ; pm_math_Quaternion_xform_ra ( xx + 388 , xx
+ 774 , xx + 780 ) ; pm_math_Vector3_cross_ra ( xx + 438 , xx + 780 , xx +
774 ) ; xx [ 517 ] = xx [ 779 ] + xx [ 776 ] ; xx [ 783 ] = xx [ 395 ] ; xx [
784 ] = xx [ 131 ] * ( xx [ 393 ] + xx [ 392 ] ) ; xx [ 785 ] = xx [ 200 ] -
xx [ 131 ] * ( xx [ 377 ] + xx [ 379 ] ) ; pm_math_Vector3_cross_ra ( xx +
783 , xx + 757 , xx + 786 ) ; pm_math_Quaternion_xform_ra ( xx + 770 , xx +
786 , xx + 789 ) ; xx [ 377 ] = pm_math_Vector3_dot_ra ( xx + 789 , xx + 197
) ; xx [ 379 ] = ( xx [ 377 ] - ( xx [ 517 ] + xx [ 471 ] * xx [ 781 ] - xx [
401 ] * xx [ 780 ] ) ) / xx [ 474 ] ; xx [ 392 ] = xx [ 780 ] + xx [ 452 ] *
xx [ 379 ] ; xx [ 393 ] = xx [ 781 ] + xx [ 456 ] * xx [ 379 ] ; xx [ 530 ] =
xx [ 393 ] * xx [ 376 ] ; xx [ 538 ] = xx [ 392 ] * xx [ 376 ] ; xx [ 551 ] =
xx [ 392 ] - xx [ 131 ] * ( xx [ 530 ] * xx [ 345 ] + xx [ 538 ] * xx [ 376 ]
) ; xx [ 392 ] = xx [ 393 ] + xx [ 131 ] * ( xx [ 538 ] * xx [ 345 ] - xx [
530 ] * xx [ 376 ] ) ; xx [ 393 ] = xx [ 782 ] + xx [ 404 ] * xx [ 379 ] ; xx
[ 780 ] = xx [ 551 ] ; xx [ 781 ] = xx [ 392 ] ; xx [ 782 ] = xx [ 393 ] ;
pm_math_Vector3_cross_ra ( xx + 504 , xx + 780 , xx + 786 ) ; xx [ 530 ] = xx
[ 517 ] + xx [ 398 ] * xx [ 379 ] + xx [ 788 ] ; xx [ 517 ] = ( xx [ 294 ] -
( xx [ 530 ] + xx [ 274 ] * xx [ 551 ] + xx [ 287 ] * xx [ 392 ] ) ) / xx [
470 ] ; xx [ 538 ] = xx [ 777 ] + xx [ 774 ] + xx [ 399 ] * xx [ 379 ] ; xx [
553 ] = xx [ 778 ] + xx [ 775 ] + xx [ 400 ] * xx [ 379 ] ; xx [ 571 ] = xx [
553 ] * xx [ 376 ] ; xx [ 605 ] = xx [ 538 ] * xx [ 376 ] ; xx [ 774 ] = xx [
538 ] - xx [ 131 ] * ( xx [ 571 ] * xx [ 345 ] + xx [ 605 ] * xx [ 376 ] ) +
xx [ 786 ] + xx [ 283 ] * xx [ 517 ] ; xx [ 775 ] = xx [ 553 ] + xx [ 131 ] *
( xx [ 605 ] * xx [ 345 ] - xx [ 571 ] * xx [ 376 ] ) + xx [ 787 ] + xx [ 330
] * xx [ 517 ] ; xx [ 776 ] = xx [ 530 ] + xx [ 333 ] * xx [ 517 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 774 , xx + 777 ) ; xx [ 774 ] =
xx [ 551 ] + xx [ 338 ] * xx [ 517 ] ; xx [ 775 ] = xx [ 392 ] + xx [ 340 ] *
xx [ 517 ] ; xx [ 776 ] = xx [ 393 ] + xx [ 323 ] * xx [ 517 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 774 , xx + 780 ) ;
pm_math_Vector3_cross_ra ( xx + 226 , xx + 780 , xx + 774 ) ; xx [ 392 ] = xx
[ 777 ] + xx [ 774 ] ; xx [ 393 ] = xx [ 778 ] + xx [ 775 ] ; xx [ 530 ] = xx
[ 779 ] + xx [ 776 ] ; xx [ 774 ] = xx [ 392 ] ; xx [ 775 ] = xx [ 393 ] ; xx
[ 776 ] = xx [ 530 ] ; xx [ 538 ] = ( pm_math_Vector3_dot_ra ( xx + 297 , xx
+ 774 ) + pm_math_Vector3_dot_ra ( xx + 352 , xx + 780 ) ) / xx [ 373 ] ; xx
[ 774 ] = xx [ 392 ] - xx [ 355 ] * xx [ 538 ] ; xx [ 775 ] = xx [ 393 ] - xx
[ 218 ] * xx [ 538 ] ; xx [ 776 ] = xx [ 530 ] - xx [ 219 ] * xx [ 538 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 774 , xx + 777 ) ; xx [ 774 ] =
xx [ 780 ] - xx [ 368 ] * xx [ 538 ] ; xx [ 775 ] = xx [ 781 ] - xx [ 370 ] *
xx [ 538 ] ; xx [ 776 ] = xx [ 782 ] - xx [ 371 ] * xx [ 538 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 774 , xx + 780 ) ;
pm_math_Vector3_cross_ra ( xx + 447 , xx + 780 , xx + 774 ) ; xx [ 392 ] = xx
[ 777 ] + xx [ 774 ] ; xx [ 393 ] = xx [ 778 ] + xx [ 775 ] ; xx [ 530 ] = xx
[ 779 ] + xx [ 776 ] ; xx [ 774 ] = xx [ 392 ] ; xx [ 775 ] = xx [ 393 ] ; xx
[ 776 ] = xx [ 530 ] ; xx [ 551 ] = ( pm_math_Vector3_dot_ra ( xx + 548 , xx
+ 774 ) + pm_math_Vector3_dot_ra ( xx + 566 , xx + 780 ) ) / xx [ 570 ] ; xx
[ 774 ] = xx [ 392 ] - xx [ 572 ] * xx [ 551 ] ; xx [ 775 ] = xx [ 393 ] - xx
[ 490 ] * xx [ 551 ] ; xx [ 776 ] = xx [ 530 ] - xx [ 491 ] * xx [ 551 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 774 , xx + 777 ) ; xx [ 774 ] =
xx [ 780 ] - xx [ 574 ] * xx [ 551 ] ; xx [ 775 ] = xx [ 781 ] - xx [ 583 ] *
xx [ 551 ] ; xx [ 776 ] = xx [ 782 ] - xx [ 569 ] * xx [ 551 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 774 , xx + 780 ) ;
pm_math_Vector3_cross_ra ( xx + 522 , xx + 780 , xx + 774 ) ; xx [ 392 ] = xx
[ 777 ] + xx [ 774 ] ; xx [ 393 ] = xx [ 778 ] + xx [ 775 ] ; xx [ 530 ] = xx
[ 779 ] + xx [ 776 ] ; xx [ 774 ] = xx [ 392 ] ; xx [ 775 ] = xx [ 393 ] ; xx
[ 776 ] = xx [ 530 ] ; xx [ 553 ] = ( pm_math_Vector3_dot_ra ( xx + 575 , xx
+ 774 ) + pm_math_Vector3_dot_ra ( xx + 615 , xx + 780 ) ) / xx [ 654 ] ; xx
[ 774 ] = xx [ 392 ] - xx [ 618 ] * xx [ 553 ] ; xx [ 775 ] = xx [ 393 ] - xx
[ 606 ] * xx [ 553 ] ; xx [ 776 ] = xx [ 530 ] - xx [ 578 ] * xx [ 553 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 774 , xx + 777 ) ; xx [ 774 ] =
xx [ 780 ] - xx [ 580 ] * xx [ 553 ] ; xx [ 775 ] = xx [ 781 ] - xx [ 607 ] *
xx [ 553 ] ; xx [ 776 ] = xx [ 782 ] - xx [ 650 ] * xx [ 553 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 774 , xx + 780 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 780 , xx + 774 ) ; xx [ 392 ] = xx
[ 777 ] + xx [ 774 ] ; xx [ 393 ] = xx [ 778 ] + xx [ 775 ] ; xx [ 530 ] = xx
[ 779 ] + xx [ 776 ] ; xx [ 571 ] = ( xx [ 392 ] + xx [ 19 ] * xx [ 393 ] +
xx [ 20 ] * xx [ 530 ] + pm_math_Vector3_dot_ra ( xx + 609 , xx + 780 ) ) /
xx [ 688 ] ; xx [ 774 ] = xx [ 392 ] - xx [ 582 ] * xx [ 571 ] ; xx [ 775 ] =
xx [ 393 ] - xx [ 651 ] * xx [ 571 ] ; xx [ 776 ] = xx [ 530 ] - xx [ 32 ] *
xx [ 571 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 774 , xx + 777 ) ;
xx [ 774 ] = xx [ 780 ] - xx [ 676 ] * xx [ 571 ] ; xx [ 775 ] = xx [ 781 ] -
xx [ 690 ] * xx [ 571 ] ; xx [ 776 ] = xx [ 782 ] - xx [ 687 ] * xx [ 571 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 774 , xx + 780 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 780 , xx + 774 ) ; xx [ 786 ] = xx
[ 777 ] + xx [ 774 ] ; xx [ 787 ] = xx [ 778 ] + xx [ 775 ] ; xx [ 788 ] = xx
[ 779 ] + xx [ 776 ] ; xx [ 392 ] = ( pm_math_Vector3_dot_ra ( xx + 0 , xx +
786 ) + pm_math_Vector3_dot_ra ( xx + 694 , xx + 780 ) ) / xx [ 7 ] ; xx [
774 ] = - ( xx [ 0 ] * xx [ 392 ] ) ; xx [ 775 ] = - ( xx [ 1 ] * xx [ 392 ]
) ; xx [ 776 ] = - ( xx [ 2 ] * xx [ 392 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 774 , xx + 777 ) ;
pm_math_Vector3_cross_ra ( xx + 774 , xx + 691 , xx + 780 ) ; xx [ 774 ] = xx
[ 780 ] - xx [ 302 ] * xx [ 392 ] ; xx [ 775 ] = xx [ 781 ] + xx [ 592 ] * xx
[ 392 ] ; xx [ 776 ] = xx [ 782 ] + xx [ 647 ] * xx [ 392 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 774 , xx + 780 ) ; xx [
392 ] = xx [ 571 ] + pm_math_Vector3_dot_ra ( xx + 525 , xx + 777 ) +
pm_math_Vector3_dot_ra ( xx + 700 , xx + 780 ) ; xx [ 774 ] = xx [ 777 ] - xx
[ 392 ] ; xx [ 775 ] = xx [ 778 ] - xx [ 19 ] * xx [ 392 ] ; xx [ 776 ] = xx
[ 779 ] - xx [ 20 ] * xx [ 392 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
49 , xx + 774 , xx + 777 ) ; pm_math_Vector3_cross_ra ( xx + 774 , xx + 602 ,
xx + 786 ) ; xx [ 774 ] = xx [ 780 ] + xx [ 573 ] * xx [ 392 ] + xx [ 786 ] ;
xx [ 775 ] = xx [ 781 ] - xx [ 579 ] * xx [ 392 ] + xx [ 787 ] ; xx [ 776 ] =
xx [ 782 ] - xx [ 581 ] * xx [ 392 ] + xx [ 788 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 774 , xx + 780 ) ; xx [
392 ] = xx [ 553 ] + pm_math_Vector3_dot_ra ( xx + 703 , xx + 777 ) +
pm_math_Vector3_dot_ra ( xx + 724 , xx + 780 ) ; xx [ 774 ] = xx [ 777 ] + xx
[ 34 ] * xx [ 392 ] ; xx [ 775 ] = xx [ 778 ] - xx [ 43 ] * xx [ 392 ] ; xx [
776 ] = xx [ 779 ] - xx [ 44 ] * xx [ 392 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 774 , xx + 777 ) ;
pm_math_Vector3_cross_ra ( xx + 774 , xx + 522 , xx + 786 ) ; xx [ 774 ] = xx
[ 780 ] + xx [ 612 ] * xx [ 392 ] + xx [ 786 ] ; xx [ 775 ] = xx [ 781 ] + xx
[ 613 ] * xx [ 392 ] + xx [ 787 ] ; xx [ 776 ] = xx [ 782 ] - xx [ 614 ] * xx
[ 392 ] + xx [ 788 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx +
774 , xx + 780 ) ; xx [ 392 ] = xx [ 551 ] + pm_math_Vector3_dot_ra ( xx +
727 , xx + 777 ) + pm_math_Vector3_dot_ra ( xx + 730 , xx + 780 ) ; xx [ 774
] = xx [ 777 ] - xx [ 59 ] * xx [ 392 ] ; xx [ 775 ] = xx [ 778 ] + xx [ 68 ]
* xx [ 392 ] ; xx [ 776 ] = xx [ 779 ] + xx [ 69 ] * xx [ 392 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 774 , xx + 777 ) ;
pm_math_Vector3_cross_ra ( xx + 774 , xx + 447 , xx + 786 ) ; xx [ 774 ] = xx
[ 780 ] + xx [ 469 ] * xx [ 392 ] + xx [ 786 ] ; xx [ 775 ] = xx [ 781 ] - xx
[ 554 ] * xx [ 392 ] + xx [ 787 ] ; xx [ 776 ] = xx [ 782 ] + xx [ 555 ] * xx
[ 392 ] + xx [ 788 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx +
774 , xx + 780 ) ; xx [ 392 ] = xx [ 538 ] + pm_math_Vector3_dot_ra ( xx +
733 , xx + 777 ) + pm_math_Vector3_dot_ra ( xx + 736 , xx + 780 ) ; xx [ 774
] = xx [ 777 ] + xx [ 84 ] * xx [ 392 ] ; xx [ 775 ] = xx [ 778 ] - xx [ 93 ]
* xx [ 392 ] ; xx [ 776 ] = xx [ 779 ] - xx [ 94 ] * xx [ 392 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 774 , xx + 777 ) ;
pm_math_Vector3_cross_ra ( xx + 774 , xx + 226 , xx + 786 ) ; xx [ 774 ] = xx
[ 780 ] - xx [ 352 ] * xx [ 392 ] + xx [ 786 ] ; xx [ 775 ] = xx [ 781 ] - xx
[ 353 ] * xx [ 392 ] + xx [ 787 ] ; xx [ 776 ] = xx [ 782 ] - xx [ 354 ] * xx
[ 392 ] + xx [ 788 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx +
774 , xx + 780 ) ; xx [ 392 ] = xx [ 517 ] - ( pm_math_Vector3_dot_ra ( xx +
531 , xx + 777 ) + pm_math_Vector3_dot_ra ( xx + 739 , xx + 780 ) ) ; xx [
393 ] = xx [ 133 ] * xx [ 778 ] - xx [ 137 ] * xx [ 777 ] ; xx [ 517 ] = xx [
777 ] + xx [ 131 ] * xx [ 393 ] * xx [ 137 ] ; xx [ 530 ] = xx [ 778 ] - xx [
131 ] * xx [ 393 ] * xx [ 133 ] ; xx [ 393 ] = xx [ 779 ] + xx [ 392 ] ; xx [
538 ] = xx [ 393 ] - xx [ 131 ] * ( xx [ 393 ] * xx [ 133 ] * xx [ 133 ] + xx
[ 393 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 774 ] = xx [ 517 ] ; xx [ 775 ] =
xx [ 530 ] ; xx [ 776 ] = xx [ 538 ] ; xx [ 551 ] = xx [ 780 ] + xx [ 274 ] *
xx [ 392 ] ; xx [ 786 ] = xx [ 777 ] ; xx [ 787 ] = xx [ 778 ] ; xx [ 788 ] =
xx [ 393 ] ; pm_math_Vector3_cross_ra ( xx + 786 , xx + 316 , xx + 789 ) ; xx
[ 553 ] = xx [ 551 ] + xx [ 789 ] ; xx [ 571 ] = xx [ 781 ] + xx [ 287 ] * xx
[ 392 ] ; xx [ 605 ] = xx [ 571 ] + xx [ 790 ] ; xx [ 608 ] = xx [ 605 ] * xx
[ 133 ] - xx [ 553 ] * xx [ 137 ] ; xx [ 646 ] = xx [ 553 ] + xx [ 131 ] * xx
[ 608 ] * xx [ 137 ] ; xx [ 553 ] = xx [ 605 ] - xx [ 131 ] * xx [ 608 ] * xx
[ 133 ] ; xx [ 605 ] = xx [ 782 ] + xx [ 791 ] ; xx [ 608 ] = xx [ 605 ] - xx
[ 131 ] * ( xx [ 605 ] * xx [ 133 ] * xx [ 133 ] + xx [ 605 ] * xx [ 137 ] *
xx [ 137 ] ) ; xx [ 779 ] = xx [ 646 ] ; xx [ 780 ] = xx [ 553 ] ; xx [ 781 ]
= xx [ 608 ] ; xx [ 605 ] = pm_math_Vector3_dot_ra ( xx + 462 , xx + 774 ) +
pm_math_Vector3_dot_ra ( xx + 745 , xx + 779 ) ; xx [ 774 ] = xx [ 517 ] ; xx
[ 775 ] = xx [ 530 ] ; xx [ 776 ] = xx [ 538 ] + xx [ 605 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 774 , xx + 779 ) ;
pm_math_Vector3_cross_ra ( xx + 774 , xx + 223 , xx + 789 ) ; xx [ 774 ] = xx
[ 646 ] + xx [ 289 ] * xx [ 605 ] + xx [ 789 ] ; xx [ 775 ] = xx [ 553 ] - xx
[ 232 ] * xx [ 605 ] + xx [ 790 ] ; xx [ 776 ] = xx [ 608 ] + xx [ 791 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 774 , xx + 789 ) ; xx [
517 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx + 779 ) +
pm_math_Vector3_dot_ra ( xx + 748 , xx + 789 ) ; xx [ 530 ] = xx [ 195 ] * xx
[ 392 ] - xx [ 234 ] * xx [ 605 ] - xx [ 192 ] * xx [ 517 ] ; xx [ 774 ] = -
0.01271019941645938 ; xx [ 775 ] = 0.02011896482120349 ; xx [ 776 ] = -
0.01159391418917814 ; pm_math_Vector3_cross_ra ( xx + 313 , xx + 774 , xx +
779 ) ; pm_math_Quaternion_xform_ra ( xx + 766 , xx + 779 , xx + 313 ) ; xx [
538 ] = xx [ 376 ] * xx [ 441 ] ; xx [ 553 ] = xx [ 437 ] * xx [ 376 ] ; xx [
608 ] = xx [ 437 ] + xx [ 131 ] * ( xx [ 538 ] * xx [ 345 ] - xx [ 553 ] * xx
[ 376 ] ) ; xx [ 646 ] = xx [ 608 ] - xx [ 501 ] ; xx [ 674 ] = xx [ 646 ] *
xx [ 116 ] ; xx [ 675 ] = xx [ 131 ] * ( xx [ 553 ] * xx [ 345 ] + xx [ 538 ]
* xx [ 376 ] ) ; xx [ 538 ] = xx [ 675 ] - xx [ 441 ] - xx [ 503 ] ; xx [ 553
] = xx [ 538 ] * xx [ 116 ] ; xx [ 677 ] = xx [ 120 ] * xx [ 538 ] - xx [ 646
] * xx [ 118 ] ; xx [ 766 ] = xx [ 674 ] ; xx [ 767 ] = xx [ 553 ] ; xx [ 768
] = xx [ 677 ] ; pm_math_Vector3_cross_ra ( xx + 204 , xx + 766 , xx + 779 )
; xx [ 766 ] = xx [ 313 ] + xx [ 131 ] * ( xx [ 779 ] + xx [ 674 ] * xx [ 109
] ) + xx [ 119 ] - xx [ 538 ] + xx [ 274 ] ; xx [ 767 ] = xx [ 314 ] + xx [
646 ] + xx [ 131 ] * ( xx [ 780 ] + xx [ 553 ] * xx [ 109 ] ) + xx [ 233 ] +
xx [ 287 ] ; xx [ 768 ] = xx [ 315 ] + xx [ 131 ] * ( xx [ 109 ] * xx [ 677 ]
+ xx [ 781 ] ) + xx [ 250 ] ; xx [ 119 ] = pm_math_Vector3_dot_ra ( xx + 766
, xx + 201 ) ; xx [ 313 ] = 0.01994817665605048 ; xx [ 314 ] =
0.01474688635611298 ; xx [ 315 ] = 3.721502835343984e-3 ;
pm_math_Quaternion_xform_ra ( xx + 770 , xx + 313 , xx + 766 ) ; xx [ 233 ] =
1.267558015198214e-3 ; xx [ 250 ] = 0.02545789261362155 ; xx [ 313 ] =
7.693715776535444e-4 ; xx [ 779 ] = xx [ 233 ] ; xx [ 780 ] = - xx [ 250 ] ;
xx [ 781 ] = xx [ 313 ] ; pm_math_Quaternion_xform_ra ( xx + 388 , xx + 779 ,
xx + 789 ) ; pm_math_Quaternion_xform_ra ( xx + 762 , xx + 789 , xx + 792 ) ;
xx [ 795 ] = xx [ 766 ] + xx [ 792 ] ; xx [ 796 ] = xx [ 767 ] + xx [ 793 ] ;
xx [ 797 ] = xx [ 768 ] + xx [ 794 ] ; xx [ 314 ] = pm_math_Vector3_dot_ra (
xx + 795 , xx + 201 ) ; xx [ 315 ] = xx [ 314 ] / xx [ 406 ] ; xx [ 766 ] =
xx [ 405 ] * xx [ 315 ] ; xx [ 767 ] = - ( xx [ 408 ] * xx [ 315 ] ) ; xx [
768 ] = - ( xx [ 410 ] * xx [ 315 ] ) ; pm_math_Quaternion_xform_ra ( xx +
388 , xx + 766 , xx + 791 ) ; xx [ 766 ] = xx [ 409 ] * xx [ 315 ] ; xx [ 767
] = - ( xx [ 414 ] * xx [ 315 ] ) ; xx [ 768 ] = xx [ 426 ] * xx [ 315 ] ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 766 , xx + 794 ) ;
pm_math_Vector3_cross_ra ( xx + 438 , xx + 794 , xx + 766 ) ; xx [ 538 ] = xx
[ 793 ] + xx [ 768 ] ; pm_math_Vector3_cross_ra ( xx + 783 , xx + 774 , xx +
797 ) ; pm_math_Quaternion_xform_ra ( xx + 770 , xx + 797 , xx + 783 ) ; xx [
553 ] = xx [ 131 ] * ( xx [ 436 ] - xx [ 502 ] ) ; xx [ 436 ] = xx [ 441 ] -
( xx [ 675 ] + xx [ 553 ] ) - xx [ 401 ] ; xx [ 502 ] = xx [ 131 ] * ( xx [
498 ] + xx [ 500 ] ) ; xx [ 498 ] = xx [ 608 ] - xx [ 502 ] + xx [ 471 ] ; xx
[ 500 ] = xx [ 498 ] * xx [ 116 ] ; xx [ 608 ] = xx [ 436 ] * xx [ 116 ] ; xx
[ 646 ] = xx [ 498 ] * xx [ 118 ] + xx [ 120 ] * xx [ 436 ] ; xx [ 797 ] = xx
[ 500 ] ; xx [ 798 ] = - xx [ 608 ] ; xx [ 799 ] = - xx [ 646 ] ;
pm_math_Vector3_cross_ra ( xx + 204 , xx + 797 , xx + 800 ) ; xx [ 797 ] = xx
[ 783 ] + xx [ 436 ] + xx [ 131 ] * ( xx [ 800 ] + xx [ 500 ] * xx [ 109 ] )
; xx [ 798 ] = xx [ 784 ] + xx [ 498 ] + xx [ 131 ] * ( xx [ 801 ] - xx [ 608
] * xx [ 109 ] ) ; xx [ 799 ] = xx [ 785 ] + xx [ 131 ] * ( xx [ 802 ] - xx [
646 ] * xx [ 109 ] ) ; xx [ 436 ] = pm_math_Vector3_dot_ra ( xx + 797 , xx +
201 ) ; xx [ 498 ] = ( xx [ 436 ] - ( xx [ 538 ] + xx [ 471 ] * xx [ 795 ] -
xx [ 401 ] * xx [ 794 ] ) ) / xx [ 474 ] ; xx [ 500 ] = xx [ 794 ] + xx [ 452
] * xx [ 498 ] ; xx [ 608 ] = xx [ 795 ] + xx [ 456 ] * xx [ 498 ] ; xx [ 646
] = xx [ 608 ] * xx [ 376 ] ; xx [ 674 ] = xx [ 500 ] * xx [ 376 ] ; xx [ 675
] = xx [ 500 ] - xx [ 131 ] * ( xx [ 646 ] * xx [ 345 ] + xx [ 674 ] * xx [
376 ] ) ; xx [ 500 ] = xx [ 608 ] + xx [ 131 ] * ( xx [ 674 ] * xx [ 345 ] -
xx [ 646 ] * xx [ 376 ] ) ; xx [ 608 ] = xx [ 796 ] + xx [ 404 ] * xx [ 498 ]
; xx [ 783 ] = xx [ 675 ] ; xx [ 784 ] = xx [ 500 ] ; xx [ 785 ] = xx [ 608 ]
; pm_math_Vector3_cross_ra ( xx + 504 , xx + 783 , xx + 794 ) ; xx [ 646 ] =
xx [ 538 ] + xx [ 398 ] * xx [ 498 ] + xx [ 796 ] ; xx [ 538 ] = ( xx [ 119 ]
- ( xx [ 646 ] + xx [ 274 ] * xx [ 675 ] + xx [ 287 ] * xx [ 500 ] ) ) / xx [
470 ] ; xx [ 674 ] = xx [ 791 ] + xx [ 766 ] + xx [ 399 ] * xx [ 498 ] ; xx [
677 ] = xx [ 792 ] + xx [ 767 ] + xx [ 400 ] * xx [ 498 ] ; xx [ 689 ] = xx [
677 ] * xx [ 376 ] ; xx [ 766 ] = xx [ 674 ] * xx [ 376 ] ; xx [ 767 ] = xx [
674 ] - xx [ 131 ] * ( xx [ 689 ] * xx [ 345 ] + xx [ 766 ] * xx [ 376 ] ) +
xx [ 794 ] + xx [ 283 ] * xx [ 538 ] ; xx [ 768 ] = xx [ 677 ] + xx [ 131 ] *
( xx [ 766 ] * xx [ 345 ] - xx [ 689 ] * xx [ 376 ] ) + xx [ 795 ] + xx [ 330
] * xx [ 538 ] ; xx [ 769 ] = xx [ 646 ] + xx [ 333 ] * xx [ 538 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 767 , xx + 783 ) ; xx [ 766 ] =
xx [ 675 ] + xx [ 338 ] * xx [ 538 ] ; xx [ 767 ] = xx [ 500 ] + xx [ 340 ] *
xx [ 538 ] ; xx [ 768 ] = xx [ 608 ] + xx [ 323 ] * xx [ 538 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 766 , xx + 791 ) ;
pm_math_Vector3_cross_ra ( xx + 226 , xx + 791 , xx + 766 ) ; xx [ 500 ] = xx
[ 783 ] + xx [ 766 ] ; xx [ 608 ] = xx [ 784 ] + xx [ 767 ] ; xx [ 646 ] = xx
[ 785 ] + xx [ 768 ] ; xx [ 766 ] = xx [ 500 ] ; xx [ 767 ] = xx [ 608 ] ; xx
[ 768 ] = xx [ 646 ] ; xx [ 674 ] = ( pm_math_Vector3_dot_ra ( xx + 297 , xx
+ 766 ) + pm_math_Vector3_dot_ra ( xx + 352 , xx + 791 ) ) / xx [ 373 ] ; xx
[ 766 ] = xx [ 500 ] - xx [ 355 ] * xx [ 674 ] ; xx [ 767 ] = xx [ 608 ] - xx
[ 218 ] * xx [ 674 ] ; xx [ 768 ] = xx [ 646 ] - xx [ 219 ] * xx [ 674 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 766 , xx + 783 ) ; xx [ 766 ] =
xx [ 791 ] - xx [ 368 ] * xx [ 674 ] ; xx [ 767 ] = xx [ 792 ] - xx [ 370 ] *
xx [ 674 ] ; xx [ 768 ] = xx [ 793 ] - xx [ 371 ] * xx [ 674 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 766 , xx + 791 ) ;
pm_math_Vector3_cross_ra ( xx + 447 , xx + 791 , xx + 766 ) ; xx [ 500 ] = xx
[ 783 ] + xx [ 766 ] ; xx [ 608 ] = xx [ 784 ] + xx [ 767 ] ; xx [ 646 ] = xx
[ 785 ] + xx [ 768 ] ; xx [ 766 ] = xx [ 500 ] ; xx [ 767 ] = xx [ 608 ] ; xx
[ 768 ] = xx [ 646 ] ; xx [ 675 ] = ( pm_math_Vector3_dot_ra ( xx + 548 , xx
+ 766 ) + pm_math_Vector3_dot_ra ( xx + 566 , xx + 791 ) ) / xx [ 570 ] ; xx
[ 766 ] = xx [ 500 ] - xx [ 572 ] * xx [ 675 ] ; xx [ 767 ] = xx [ 608 ] - xx
[ 490 ] * xx [ 675 ] ; xx [ 768 ] = xx [ 646 ] - xx [ 491 ] * xx [ 675 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 766 , xx + 783 ) ; xx [ 766 ] =
xx [ 791 ] - xx [ 574 ] * xx [ 675 ] ; xx [ 767 ] = xx [ 792 ] - xx [ 583 ] *
xx [ 675 ] ; xx [ 768 ] = xx [ 793 ] - xx [ 569 ] * xx [ 675 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 766 , xx + 791 ) ;
pm_math_Vector3_cross_ra ( xx + 522 , xx + 791 , xx + 766 ) ; xx [ 500 ] = xx
[ 783 ] + xx [ 766 ] ; xx [ 608 ] = xx [ 784 ] + xx [ 767 ] ; xx [ 646 ] = xx
[ 785 ] + xx [ 768 ] ; xx [ 766 ] = xx [ 500 ] ; xx [ 767 ] = xx [ 608 ] ; xx
[ 768 ] = xx [ 646 ] ; xx [ 677 ] = ( pm_math_Vector3_dot_ra ( xx + 575 , xx
+ 766 ) + pm_math_Vector3_dot_ra ( xx + 615 , xx + 791 ) ) / xx [ 654 ] ; xx
[ 766 ] = xx [ 500 ] - xx [ 618 ] * xx [ 677 ] ; xx [ 767 ] = xx [ 608 ] - xx
[ 606 ] * xx [ 677 ] ; xx [ 768 ] = xx [ 646 ] - xx [ 578 ] * xx [ 677 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 766 , xx + 783 ) ; xx [ 766 ] =
xx [ 791 ] - xx [ 580 ] * xx [ 677 ] ; xx [ 767 ] = xx [ 792 ] - xx [ 607 ] *
xx [ 677 ] ; xx [ 768 ] = xx [ 793 ] - xx [ 650 ] * xx [ 677 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 766 , xx + 791 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 791 , xx + 766 ) ; xx [ 500 ] = xx
[ 783 ] + xx [ 766 ] ; xx [ 608 ] = xx [ 784 ] + xx [ 767 ] ; xx [ 646 ] = xx
[ 785 ] + xx [ 768 ] ; xx [ 689 ] = ( xx [ 500 ] + xx [ 19 ] * xx [ 608 ] +
xx [ 20 ] * xx [ 646 ] + pm_math_Vector3_dot_ra ( xx + 609 , xx + 791 ) ) /
xx [ 688 ] ; xx [ 766 ] = xx [ 500 ] - xx [ 582 ] * xx [ 689 ] ; xx [ 767 ] =
xx [ 608 ] - xx [ 651 ] * xx [ 689 ] ; xx [ 768 ] = xx [ 646 ] - xx [ 32 ] *
xx [ 689 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 766 , xx + 783 ) ;
xx [ 766 ] = xx [ 791 ] - xx [ 676 ] * xx [ 689 ] ; xx [ 767 ] = xx [ 792 ] -
xx [ 690 ] * xx [ 689 ] ; xx [ 768 ] = xx [ 793 ] - xx [ 687 ] * xx [ 689 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 766 , xx + 791 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 791 , xx + 766 ) ; xx [ 794 ] = xx
[ 783 ] + xx [ 766 ] ; xx [ 795 ] = xx [ 784 ] + xx [ 767 ] ; xx [ 796 ] = xx
[ 785 ] + xx [ 768 ] ; xx [ 500 ] = ( pm_math_Vector3_dot_ra ( xx + 0 , xx +
794 ) + pm_math_Vector3_dot_ra ( xx + 694 , xx + 791 ) ) / xx [ 7 ] ; xx [
766 ] = - ( xx [ 0 ] * xx [ 500 ] ) ; xx [ 767 ] = - ( xx [ 1 ] * xx [ 500 ]
) ; xx [ 768 ] = - ( xx [ 2 ] * xx [ 500 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 766 , xx + 783 ) ;
pm_math_Vector3_cross_ra ( xx + 766 , xx + 691 , xx + 791 ) ; xx [ 766 ] = xx
[ 791 ] - xx [ 302 ] * xx [ 500 ] ; xx [ 767 ] = xx [ 792 ] + xx [ 592 ] * xx
[ 500 ] ; xx [ 768 ] = xx [ 793 ] + xx [ 647 ] * xx [ 500 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 766 , xx + 791 ) ; xx [
500 ] = xx [ 689 ] + pm_math_Vector3_dot_ra ( xx + 525 , xx + 783 ) +
pm_math_Vector3_dot_ra ( xx + 700 , xx + 791 ) ; xx [ 766 ] = xx [ 783 ] - xx
[ 500 ] ; xx [ 767 ] = xx [ 784 ] - xx [ 19 ] * xx [ 500 ] ; xx [ 768 ] = xx
[ 785 ] - xx [ 20 ] * xx [ 500 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
49 , xx + 766 , xx + 783 ) ; pm_math_Vector3_cross_ra ( xx + 766 , xx + 602 ,
xx + 794 ) ; xx [ 766 ] = xx [ 791 ] + xx [ 573 ] * xx [ 500 ] + xx [ 794 ] ;
xx [ 767 ] = xx [ 792 ] - xx [ 579 ] * xx [ 500 ] + xx [ 795 ] ; xx [ 768 ] =
xx [ 793 ] - xx [ 581 ] * xx [ 500 ] + xx [ 796 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 766 , xx + 791 ) ; xx [
500 ] = xx [ 677 ] + pm_math_Vector3_dot_ra ( xx + 703 , xx + 783 ) +
pm_math_Vector3_dot_ra ( xx + 724 , xx + 791 ) ; xx [ 766 ] = xx [ 783 ] + xx
[ 34 ] * xx [ 500 ] ; xx [ 767 ] = xx [ 784 ] - xx [ 43 ] * xx [ 500 ] ; xx [
768 ] = xx [ 785 ] - xx [ 44 ] * xx [ 500 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 766 , xx + 783 ) ;
pm_math_Vector3_cross_ra ( xx + 766 , xx + 522 , xx + 794 ) ; xx [ 766 ] = xx
[ 791 ] + xx [ 612 ] * xx [ 500 ] + xx [ 794 ] ; xx [ 767 ] = xx [ 792 ] + xx
[ 613 ] * xx [ 500 ] + xx [ 795 ] ; xx [ 768 ] = xx [ 793 ] - xx [ 614 ] * xx
[ 500 ] + xx [ 796 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx +
766 , xx + 791 ) ; xx [ 500 ] = xx [ 675 ] + pm_math_Vector3_dot_ra ( xx +
727 , xx + 783 ) + pm_math_Vector3_dot_ra ( xx + 730 , xx + 791 ) ; xx [ 766
] = xx [ 783 ] - xx [ 59 ] * xx [ 500 ] ; xx [ 767 ] = xx [ 784 ] + xx [ 68 ]
* xx [ 500 ] ; xx [ 768 ] = xx [ 785 ] + xx [ 69 ] * xx [ 500 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 766 , xx + 783 ) ;
pm_math_Vector3_cross_ra ( xx + 766 , xx + 447 , xx + 794 ) ; xx [ 766 ] = xx
[ 791 ] + xx [ 469 ] * xx [ 500 ] + xx [ 794 ] ; xx [ 767 ] = xx [ 792 ] - xx
[ 554 ] * xx [ 500 ] + xx [ 795 ] ; xx [ 768 ] = xx [ 793 ] + xx [ 555 ] * xx
[ 500 ] + xx [ 796 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx +
766 , xx + 791 ) ; xx [ 500 ] = xx [ 674 ] + pm_math_Vector3_dot_ra ( xx +
733 , xx + 783 ) + pm_math_Vector3_dot_ra ( xx + 736 , xx + 791 ) ; xx [ 766
] = xx [ 783 ] + xx [ 84 ] * xx [ 500 ] ; xx [ 767 ] = xx [ 784 ] - xx [ 93 ]
* xx [ 500 ] ; xx [ 768 ] = xx [ 785 ] - xx [ 94 ] * xx [ 500 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 766 , xx + 783 ) ;
pm_math_Vector3_cross_ra ( xx + 766 , xx + 226 , xx + 794 ) ; xx [ 766 ] = xx
[ 791 ] - xx [ 352 ] * xx [ 500 ] + xx [ 794 ] ; xx [ 767 ] = xx [ 792 ] - xx
[ 353 ] * xx [ 500 ] + xx [ 795 ] ; xx [ 768 ] = xx [ 793 ] - xx [ 354 ] * xx
[ 500 ] + xx [ 796 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx +
766 , xx + 791 ) ; xx [ 500 ] = xx [ 538 ] - ( pm_math_Vector3_dot_ra ( xx +
531 , xx + 783 ) + pm_math_Vector3_dot_ra ( xx + 739 , xx + 791 ) ) ; xx [
538 ] = xx [ 133 ] * xx [ 784 ] - xx [ 137 ] * xx [ 783 ] ; xx [ 608 ] = xx [
783 ] + xx [ 131 ] * xx [ 538 ] * xx [ 137 ] ; xx [ 646 ] = xx [ 784 ] - xx [
131 ] * xx [ 538 ] * xx [ 133 ] ; xx [ 538 ] = xx [ 785 ] + xx [ 500 ] ; xx [
674 ] = xx [ 538 ] - xx [ 131 ] * ( xx [ 538 ] * xx [ 133 ] * xx [ 133 ] + xx
[ 538 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 766 ] = xx [ 608 ] ; xx [ 767 ] =
xx [ 646 ] ; xx [ 768 ] = xx [ 674 ] ; xx [ 675 ] = xx [ 791 ] + xx [ 274 ] *
xx [ 500 ] ; xx [ 794 ] = xx [ 783 ] ; xx [ 795 ] = xx [ 784 ] ; xx [ 796 ] =
xx [ 538 ] ; pm_math_Vector3_cross_ra ( xx + 794 , xx + 316 , xx + 797 ) ; xx
[ 677 ] = xx [ 675 ] + xx [ 797 ] ; xx [ 689 ] = xx [ 792 ] + xx [ 287 ] * xx
[ 500 ] ; xx [ 769 ] = xx [ 689 ] + xx [ 798 ] ; xx [ 785 ] = xx [ 769 ] * xx
[ 133 ] - xx [ 677 ] * xx [ 137 ] ; xx [ 791 ] = xx [ 677 ] + xx [ 131 ] * xx
[ 785 ] * xx [ 137 ] ; xx [ 677 ] = xx [ 769 ] - xx [ 131 ] * xx [ 785 ] * xx
[ 133 ] ; xx [ 769 ] = xx [ 793 ] + xx [ 799 ] ; xx [ 785 ] = xx [ 769 ] - xx
[ 131 ] * ( xx [ 769 ] * xx [ 133 ] * xx [ 133 ] + xx [ 769 ] * xx [ 137 ] *
xx [ 137 ] ) ; xx [ 797 ] = xx [ 791 ] ; xx [ 798 ] = xx [ 677 ] ; xx [ 799 ]
= xx [ 785 ] ; xx [ 769 ] = pm_math_Vector3_dot_ra ( xx + 462 , xx + 766 ) +
pm_math_Vector3_dot_ra ( xx + 745 , xx + 797 ) ; xx [ 766 ] = xx [ 608 ] ; xx
[ 767 ] = xx [ 646 ] ; xx [ 768 ] = xx [ 674 ] + xx [ 769 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 766 , xx + 797 ) ;
pm_math_Vector3_cross_ra ( xx + 766 , xx + 223 , xx + 800 ) ; xx [ 766 ] = xx
[ 791 ] + xx [ 289 ] * xx [ 769 ] + xx [ 800 ] ; xx [ 767 ] = xx [ 677 ] - xx
[ 232 ] * xx [ 769 ] + xx [ 801 ] ; xx [ 768 ] = xx [ 785 ] + xx [ 802 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 766 , xx + 800 ) ; xx [
608 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx + 797 ) +
pm_math_Vector3_dot_ra ( xx + 748 , xx + 800 ) ; xx [ 646 ] = xx [ 195 ] * xx
[ 500 ] - xx [ 234 ] * xx [ 769 ] - xx [ 192 ] * xx [ 608 ] ; xx [ 766 ] =
0.01025445069467229 ; xx [ 767 ] = - 9.847964366436174e-3 ; xx [ 768 ] = -
0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 766 , xx +
797 ) ; xx [ 800 ] = - 1.779962358034746e-3 ; xx [ 801 ] = -
2.813288543230789e-4 ; xx [ 802 ] = - 3.860324031167178e-7 ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 800 , xx + 803 ) ; xx [ 806 ] =
xx [ 797 ] - xx [ 519 ] + xx [ 217 ] - ( xx [ 803 ] - xx [ 622 ] - xx [ 587 ]
) ; xx [ 807 ] = xx [ 798 ] - xx [ 520 ] - xx [ 231 ] - ( xx [ 804 ] - xx [
623 ] - xx [ 619 ] ) ; xx [ 808 ] = xx [ 799 ] - xx [ 521 ] - xx [ 301 ] - (
xx [ 805 ] - xx [ 624 ] + xx [ 620 ] ) ; xx [ 809 ] = 0.7070832170269247 ; xx
[ 810 ] = 0.7070839779596056 ; xx [ 811 ] = - 5.77635371758612e-3 ; xx [ 812
] = - 5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 588 , xx +
809 , xx + 813 ) ; xx [ 217 ] = xx [ 816 ] * xx [ 816 ] ; xx [ 231 ] = xx [
813 ] * xx [ 816 ] ; xx [ 301 ] = xx [ 814 ] * xx [ 815 ] ; xx [ 519 ] = xx [
200 ] - xx [ 131 ] * ( xx [ 815 ] * xx [ 815 ] + xx [ 217 ] ) ; xx [ 520 ] =
xx [ 131 ] * ( xx [ 231 ] + xx [ 301 ] ) ; xx [ 521 ] = xx [ 131 ] * ( xx [
814 ] * xx [ 816 ] - xx [ 813 ] * xx [ 815 ] ) ; xx [ 587 ] =
pm_math_Vector3_dot_ra ( xx + 806 , xx + 519 ) ; xx [ 622 ] = -
0.9998688553766499 ; xx [ 623 ] = 0.01619418172173452 ; xx [ 624 ] = -
1.432695097203727e-4 ; pm_math_Quaternion_xform_ra ( xx + 588 , xx + 622 , xx
+ 797 ) ; xx [ 622 ] = 3.853526455973429e-7 ; xx [ 623 ] = -
2.270950962420449e-9 ; xx [ 624 ] = - 1.775173053264905e-3 ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 622 , xx + 803 ) ; xx [ 619 ] =
3.853526455052602e-7 ; xx [ 620 ] = 2.270950960928974e-9 ; xx [ 622 ] =
1.775173053264939e-3 ; xx [ 809 ] = - xx [ 619 ] ; xx [ 810 ] = xx [ 620 ] ;
xx [ 811 ] = xx [ 622 ] ; pm_math_Quaternion_xform_ra ( xx + 588 , xx + 809 ,
xx + 817 ) ; xx [ 820 ] = xx [ 803 ] + xx [ 817 ] ; xx [ 821 ] = xx [ 804 ] +
xx [ 818 ] ; xx [ 822 ] = xx [ 805 ] + xx [ 819 ] ; xx [ 803 ] = xx [ 131 ] *
( xx [ 301 ] - xx [ 231 ] ) ; xx [ 804 ] = xx [ 200 ] - xx [ 131 ] * ( xx [
217 ] + xx [ 814 ] * xx [ 814 ] ) ; xx [ 805 ] = xx [ 131 ] * ( xx [ 813 ] *
xx [ 814 ] + xx [ 815 ] * xx [ 816 ] ) ; xx [ 217 ] = pm_math_Vector3_dot_ra
( xx + 806 , xx + 803 ) ; xx [ 823 ] = - 1.432869371958337e-4 ; xx [ 824 ] =
8.412683135540379e-8 ; xx [ 825 ] = 0.9999999897344243 ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 823 , xx + 826 ) ; xx [ 231 ] =
xx [ 587 ] * xx [ 587 ] ; xx [ 301 ] = xx [ 217 ] * xx [ 217 ] ; xx [ 623 ] =
xx [ 231 ] + xx [ 301 ] ; xx [ 624 ] = xx [ 623 ] == 0.0 ? 0.0 : ( xx [ 587 ]
* ( pm_math_Vector3_dot_ra ( xx + 806 , xx + 797 ) - pm_math_Vector3_dot_ra (
xx + 820 , xx + 803 ) ) - xx [ 217 ] * ( pm_math_Vector3_dot_ra ( xx + 806 ,
xx + 826 ) - pm_math_Vector3_dot_ra ( xx + 820 , xx + 519 ) ) ) / xx [ 623 ]
; xx [ 823 ] = - 0.2643737754551072 ; xx [ 824 ] = - 0.029879175111395 ; xx [
825 ] = 0.6425355357697462 ; xx [ 826 ] = 0.7185832081390159 ;
pm_math_Quaternion_compose_ra ( xx + 99 , xx + 823 , xx + 827 ) ; xx [ 674 ]
= xx [ 828 ] * xx [ 829 ] ; xx [ 677 ] = xx [ 827 ] * xx [ 830 ] ; xx [ 785 ]
= xx [ 830 ] * xx [ 830 ] ; xx [ 797 ] = xx [ 131 ] * ( xx [ 674 ] - xx [ 677
] ) ; xx [ 798 ] = xx [ 200 ] - xx [ 131 ] * ( xx [ 785 ] + xx [ 828 ] * xx [
828 ] ) ; xx [ 799 ] = xx [ 131 ] * ( xx [ 827 ] * xx [ 828 ] + xx [ 829 ] *
xx [ 830 ] ) ; xx [ 791 ] = pm_math_Vector3_dot_ra ( xx + 806 , xx + 797 ) ;
xx [ 823 ] = xx [ 200 ] - xx [ 131 ] * ( xx [ 829 ] * xx [ 829 ] + xx [ 785 ]
) ; xx [ 824 ] = xx [ 131 ] * ( xx [ 677 ] + xx [ 674 ] ) ; xx [ 825 ] = xx [
131 ] * ( xx [ 828 ] * xx [ 830 ] - xx [ 827 ] * xx [ 829 ] ) ; xx [ 674 ] =
pm_math_Vector3_dot_ra ( xx + 806 , xx + 823 ) ; xx [ 677 ] = xx [ 674 ] * xx
[ 674 ] ; xx [ 785 ] = xx [ 791 ] * xx [ 791 ] ; xx [ 792 ] = xx [ 677 ] + xx
[ 785 ] ; xx [ 812 ] = xx [ 792 ] == 0.0 ? 0.0 : ( xx [ 791 ] *
pm_math_Vector3_dot_ra ( xx + 820 , xx + 823 ) - xx [ 674 ] *
pm_math_Vector3_dot_ra ( xx + 820 , xx + 797 ) ) / xx [ 792 ] ; xx [ 820 ] =
xx [ 624 ] + xx [ 812 ] ; xx [ 624 ] = xx [ 820 ] / xx [ 339 ] ; xx [ 826 ] =
- ( xx [ 312 ] * xx [ 624 ] ) ; xx [ 827 ] = - ( xx [ 350 ] * xx [ 624 ] ) ;
xx [ 828 ] = - ( xx [ 367 ] * xx [ 624 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 588 , xx + 826 , xx + 829 ) ; xx [ 826 ] = - ( xx [ 351 ] * xx [ 624 ] ) ;
xx [ 827 ] = xx [ 534 ] * xx [ 624 ] ; xx [ 828 ] = xx [ 585 ] * xx [ 624 ] ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 826 , xx + 832 ) ;
pm_math_Vector3_cross_ra ( xx + 625 , xx + 832 , xx + 826 ) ; xx [ 835 ] = -
7.507028932003404e-3 ; xx [ 836 ] = - 2.112440099565184e-3 ; xx [ 837 ] = -
5.538643790510167e-3 ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 835 , xx
+ 838 ) ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 352 , xx + 835 ) ; xx
[ 841 ] = xx [ 838 ] + xx [ 835 ] ; xx [ 842 ] = xx [ 839 ] + xx [ 836 ] ; xx
[ 843 ] = xx [ 840 ] + xx [ 837 ] ; xx [ 812 ] = xx [ 623 ] == 0.0 ? 0.0 : (
xx [ 587 ] * pm_math_Vector3_dot_ra ( xx + 841 , xx + 803 ) - xx [ 217 ] *
pm_math_Vector3_dot_ra ( xx + 841 , xx + 519 ) ) / xx [ 623 ] ; xx [ 838 ] =
0.8584274834925502 ; xx [ 839 ] = 0.4183459750058262 ; xx [ 840 ] = -
0.2967977438948484 ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 838 , xx +
844 ) ; xx [ 838 ] = 0.3415522478515931 ; xx [ 839 ] = - 0.03450918424939552
; xx [ 840 ] = 0.9392290339368589 ; pm_math_Quaternion_xform_ra ( xx + 99 ,
xx + 838 , xx + 847 ) ; xx [ 821 ] = xx [ 792 ] == 0.0 ? 0.0 : ( xx [ 674 ] *
( pm_math_Vector3_dot_ra ( xx + 841 , xx + 797 ) + pm_math_Vector3_dot_ra (
xx + 806 , xx + 844 ) ) - xx [ 791 ] * ( pm_math_Vector3_dot_ra ( xx + 841 ,
xx + 823 ) + pm_math_Vector3_dot_ra ( xx + 806 , xx + 847 ) ) ) / xx [ 792 ]
; xx [ 822 ] = xx [ 812 ] + xx [ 821 ] ; xx [ 812 ] = xx [ 822 ] / xx [ 373 ]
; xx [ 838 ] = xx [ 355 ] * xx [ 812 ] ; xx [ 839 ] = xx [ 218 ] * xx [ 812 ]
; xx [ 840 ] = xx [ 219 ] * xx [ 812 ] ; pm_math_Quaternion_xform_ra ( xx +
99 , xx + 838 , xx + 841 ) ; xx [ 838 ] = xx [ 368 ] * xx [ 812 ] ; xx [ 839
] = xx [ 370 ] * xx [ 812 ] ; xx [ 840 ] = xx [ 371 ] * xx [ 812 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 838 , xx + 844 ) ;
pm_math_Vector3_cross_ra ( xx + 447 , xx + 844 , xx + 838 ) ; xx [ 821 ] = xx
[ 829 ] + xx [ 826 ] + xx [ 841 ] + xx [ 838 ] ; xx [ 847 ] = xx [ 830 ] + xx
[ 827 ] + xx [ 842 ] + xx [ 839 ] ; xx [ 826 ] = xx [ 831 ] + xx [ 828 ] + xx
[ 843 ] + xx [ 840 ] ; xx [ 827 ] = xx [ 821 ] ; xx [ 828 ] = xx [ 847 ] ; xx
[ 829 ] = xx [ 826 ] ; xx [ 830 ] = xx [ 832 ] + xx [ 844 ] ; xx [ 831 ] = xx
[ 833 ] + xx [ 845 ] ; xx [ 832 ] = xx [ 834 ] + xx [ 846 ] ; xx [ 833 ] = (
pm_math_Vector3_dot_ra ( xx + 548 , xx + 827 ) + pm_math_Vector3_dot_ra ( xx
+ 566 , xx + 830 ) ) / xx [ 570 ] ; xx [ 827 ] = xx [ 821 ] - xx [ 572 ] * xx
[ 833 ] ; xx [ 828 ] = xx [ 847 ] - xx [ 490 ] * xx [ 833 ] ; xx [ 829 ] = xx
[ 826 ] - xx [ 491 ] * xx [ 833 ] ; pm_math_Quaternion_xform_ra ( xx + 74 ,
xx + 827 , xx + 838 ) ; xx [ 826 ] = xx [ 830 ] - xx [ 574 ] * xx [ 833 ] ;
xx [ 827 ] = xx [ 831 ] - xx [ 583 ] * xx [ 833 ] ; xx [ 828 ] = xx [ 832 ] -
xx [ 569 ] * xx [ 833 ] ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 826 ,
xx + 829 ) ; pm_math_Vector3_cross_ra ( xx + 522 , xx + 829 , xx + 826 ) ; xx
[ 821 ] = xx [ 838 ] + xx [ 826 ] ; xx [ 832 ] = xx [ 839 ] + xx [ 827 ] ; xx
[ 826 ] = xx [ 840 ] + xx [ 828 ] ; xx [ 838 ] = xx [ 821 ] ; xx [ 839 ] = xx
[ 832 ] ; xx [ 840 ] = xx [ 826 ] ; xx [ 827 ] = ( pm_math_Vector3_dot_ra (
xx + 575 , xx + 838 ) + pm_math_Vector3_dot_ra ( xx + 615 , xx + 829 ) ) / xx
[ 654 ] ; xx [ 838 ] = xx [ 821 ] - xx [ 618 ] * xx [ 827 ] ; xx [ 839 ] = xx
[ 832 ] - xx [ 606 ] * xx [ 827 ] ; xx [ 840 ] = xx [ 826 ] - xx [ 578 ] * xx
[ 827 ] ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 838 , xx + 841 ) ; xx
[ 838 ] = xx [ 829 ] - xx [ 580 ] * xx [ 827 ] ; xx [ 839 ] = xx [ 830 ] - xx
[ 607 ] * xx [ 827 ] ; xx [ 840 ] = xx [ 831 ] - xx [ 650 ] * xx [ 827 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 838 , xx + 828 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 828 , xx + 838 ) ; xx [ 821 ] = xx
[ 841 ] + xx [ 838 ] ; xx [ 826 ] = xx [ 842 ] + xx [ 839 ] ; xx [ 831 ] = xx
[ 843 ] + xx [ 840 ] ; xx [ 832 ] = ( xx [ 821 ] + xx [ 19 ] * xx [ 826 ] +
xx [ 20 ] * xx [ 831 ] + pm_math_Vector3_dot_ra ( xx + 609 , xx + 828 ) ) /
xx [ 688 ] ; xx [ 838 ] = xx [ 821 ] - xx [ 582 ] * xx [ 832 ] ; xx [ 839 ] =
xx [ 826 ] - xx [ 651 ] * xx [ 832 ] ; xx [ 840 ] = xx [ 831 ] - xx [ 32 ] *
xx [ 832 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 838 , xx + 841 ) ;
xx [ 838 ] = xx [ 828 ] - xx [ 676 ] * xx [ 832 ] ; xx [ 839 ] = xx [ 829 ] -
xx [ 690 ] * xx [ 832 ] ; xx [ 840 ] = xx [ 830 ] - xx [ 687 ] * xx [ 832 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 838 , xx + 828 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 828 , xx + 838 ) ; xx [ 844 ] = xx
[ 841 ] + xx [ 838 ] ; xx [ 845 ] = xx [ 842 ] + xx [ 839 ] ; xx [ 846 ] = xx
[ 843 ] + xx [ 840 ] ; xx [ 821 ] = ( pm_math_Vector3_dot_ra ( xx + 0 , xx +
844 ) + pm_math_Vector3_dot_ra ( xx + 694 , xx + 828 ) ) / xx [ 7 ] ; xx [
828 ] = - ( xx [ 0 ] * xx [ 821 ] ) ; xx [ 829 ] = - ( xx [ 1 ] * xx [ 821 ]
) ; xx [ 830 ] = - ( xx [ 2 ] * xx [ 821 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 828 , xx + 838 ) ;
pm_math_Vector3_cross_ra ( xx + 828 , xx + 691 , xx + 841 ) ; xx [ 828 ] = xx
[ 841 ] - xx [ 302 ] * xx [ 821 ] ; xx [ 829 ] = xx [ 842 ] + xx [ 592 ] * xx
[ 821 ] ; xx [ 830 ] = xx [ 843 ] + xx [ 647 ] * xx [ 821 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 828 , xx + 841 ) ; xx [
821 ] = xx [ 832 ] + pm_math_Vector3_dot_ra ( xx + 525 , xx + 838 ) +
pm_math_Vector3_dot_ra ( xx + 700 , xx + 841 ) ; xx [ 828 ] = xx [ 838 ] - xx
[ 821 ] ; xx [ 829 ] = xx [ 839 ] - xx [ 19 ] * xx [ 821 ] ; xx [ 830 ] = xx
[ 840 ] - xx [ 20 ] * xx [ 821 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
49 , xx + 828 , xx + 838 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx + 602 ,
xx + 844 ) ; xx [ 828 ] = xx [ 841 ] + xx [ 573 ] * xx [ 821 ] + xx [ 844 ] ;
xx [ 829 ] = xx [ 842 ] - xx [ 579 ] * xx [ 821 ] + xx [ 845 ] ; xx [ 830 ] =
xx [ 843 ] - xx [ 581 ] * xx [ 821 ] + xx [ 846 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 828 , xx + 841 ) ; xx [
821 ] = xx [ 827 ] + pm_math_Vector3_dot_ra ( xx + 703 , xx + 838 ) +
pm_math_Vector3_dot_ra ( xx + 724 , xx + 841 ) ; xx [ 826 ] = xx [ 838 ] + xx
[ 34 ] * xx [ 821 ] ; xx [ 827 ] = xx [ 839 ] - xx [ 43 ] * xx [ 821 ] ; xx [
828 ] = xx [ 840 ] - xx [ 44 ] * xx [ 821 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 826 , xx + 829 ) ;
pm_math_Vector3_cross_ra ( xx + 826 , xx + 522 , xx + 838 ) ; xx [ 826 ] = xx
[ 841 ] + xx [ 612 ] * xx [ 821 ] + xx [ 838 ] ; xx [ 827 ] = xx [ 842 ] + xx
[ 613 ] * xx [ 821 ] + xx [ 839 ] ; xx [ 828 ] = xx [ 843 ] - xx [ 614 ] * xx
[ 821 ] + xx [ 840 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx +
826 , xx + 838 ) ; xx [ 821 ] = xx [ 833 ] + pm_math_Vector3_dot_ra ( xx +
727 , xx + 829 ) + pm_math_Vector3_dot_ra ( xx + 730 , xx + 838 ) ; xx [ 826
] = xx [ 829 ] - xx [ 59 ] * xx [ 821 ] ; xx [ 827 ] = xx [ 830 ] + xx [ 68 ]
* xx [ 821 ] ; xx [ 828 ] = xx [ 831 ] + xx [ 69 ] * xx [ 821 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 826 , xx + 829 ) ; xx [
832 ] = xx [ 838 ] + xx [ 469 ] * xx [ 821 ] ; pm_math_Vector3_cross_ra ( xx
+ 826 , xx + 447 , xx + 841 ) ; xx [ 833 ] = xx [ 839 ] - xx [ 554 ] * xx [
821 ] ; xx [ 834 ] = xx [ 840 ] + xx [ 555 ] * xx [ 821 ] ; xx [ 838 ] = xx [
832 ] + xx [ 841 ] ; xx [ 839 ] = xx [ 833 ] + xx [ 842 ] ; xx [ 840 ] = xx [
834 ] + xx [ 843 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 838
, xx + 841 ) ; xx [ 821 ] = xx [ 812 ] - ( pm_math_Vector3_dot_ra ( xx + 733
, xx + 829 ) + pm_math_Vector3_dot_ra ( xx + 736 , xx + 841 ) ) ; xx [ 838 ]
= xx [ 829 ] - xx [ 84 ] * xx [ 821 ] ; xx [ 839 ] = xx [ 830 ] + xx [ 93 ] *
xx [ 821 ] ; xx [ 840 ] = xx [ 831 ] + xx [ 94 ] * xx [ 821 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 838 , xx + 829 ) ;
pm_math_Vector3_cross_ra ( xx + 838 , xx + 226 , xx + 844 ) ; xx [ 838 ] = xx
[ 841 ] + xx [ 352 ] * xx [ 821 ] + xx [ 844 ] ; xx [ 839 ] = xx [ 842 ] + xx
[ 353 ] * xx [ 821 ] + xx [ 845 ] ; xx [ 840 ] = xx [ 843 ] + xx [ 354 ] * xx
[ 821 ] + xx [ 846 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx +
838 , xx + 841 ) ; xx [ 812 ] = pm_math_Vector3_dot_ra ( xx + 531 , xx + 829
) + pm_math_Vector3_dot_ra ( xx + 739 , xx + 841 ) ; xx [ 838 ] = xx [ 133 ]
* xx [ 830 ] - xx [ 137 ] * xx [ 829 ] ; xx [ 839 ] = xx [ 829 ] + xx [ 131 ]
* xx [ 838 ] * xx [ 137 ] ; xx [ 840 ] = xx [ 830 ] - xx [ 131 ] * xx [ 838 ]
* xx [ 133 ] ; xx [ 838 ] = xx [ 831 ] - xx [ 812 ] ; xx [ 831 ] = xx [ 838 ]
- xx [ 131 ] * ( xx [ 838 ] * xx [ 133 ] * xx [ 133 ] + xx [ 838 ] * xx [ 137
] * xx [ 137 ] ) ; xx [ 844 ] = xx [ 839 ] ; xx [ 845 ] = xx [ 840 ] ; xx [
846 ] = xx [ 831 ] ; xx [ 847 ] = xx [ 841 ] - xx [ 274 ] * xx [ 812 ] ; xx [
848 ] = xx [ 829 ] ; xx [ 849 ] = xx [ 830 ] ; xx [ 850 ] = xx [ 838 ] ;
pm_math_Vector3_cross_ra ( xx + 848 , xx + 316 , xx + 851 ) ; xx [ 841 ] = xx
[ 847 ] + xx [ 851 ] ; xx [ 854 ] = xx [ 842 ] - xx [ 287 ] * xx [ 812 ] ; xx
[ 842 ] = xx [ 854 ] + xx [ 852 ] ; xx [ 855 ] = xx [ 842 ] * xx [ 133 ] - xx
[ 841 ] * xx [ 137 ] ; xx [ 856 ] = xx [ 841 ] + xx [ 131 ] * xx [ 855 ] * xx
[ 137 ] ; xx [ 841 ] = xx [ 842 ] - xx [ 131 ] * xx [ 855 ] * xx [ 133 ] ; xx
[ 842 ] = xx [ 843 ] + xx [ 853 ] ; xx [ 851 ] = xx [ 842 ] - xx [ 131 ] * (
xx [ 842 ] * xx [ 133 ] * xx [ 133 ] + xx [ 842 ] * xx [ 137 ] * xx [ 137 ] )
; xx [ 857 ] = xx [ 856 ] ; xx [ 858 ] = xx [ 841 ] ; xx [ 859 ] = xx [ 851 ]
; xx [ 842 ] = pm_math_Vector3_dot_ra ( xx + 462 , xx + 844 ) +
pm_math_Vector3_dot_ra ( xx + 745 , xx + 857 ) ; xx [ 844 ] = xx [ 839 ] ; xx
[ 845 ] = xx [ 840 ] ; xx [ 846 ] = xx [ 831 ] + xx [ 842 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 844 , xx + 857 ) ;
pm_math_Vector3_cross_ra ( xx + 844 , xx + 223 , xx + 860 ) ; xx [ 844 ] = xx
[ 856 ] + xx [ 289 ] * xx [ 842 ] + xx [ 860 ] ; xx [ 845 ] = xx [ 841 ] - xx
[ 232 ] * xx [ 842 ] + xx [ 861 ] ; xx [ 846 ] = xx [ 851 ] + xx [ 862 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 844 , xx + 839 ) ; xx [
831 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx + 857 ) +
pm_math_Vector3_dot_ra ( xx + 748 , xx + 839 ) ; xx [ 839 ] = - ( xx [ 195 ]
* xx [ 812 ] + xx [ 234 ] * xx [ 842 ] + xx [ 192 ] * xx [ 831 ] ) ; xx [ 840
] = xx [ 48 ] * xx [ 392 ] - xx [ 258 ] * xx [ 605 ] - xx [ 98 ] * xx [ 517 ]
; xx [ 517 ] = xx [ 48 ] * xx [ 500 ] - xx [ 258 ] * xx [ 769 ] - xx [ 98 ] *
xx [ 608 ] ; xx [ 605 ] = - ( xx [ 48 ] * xx [ 812 ] + xx [ 258 ] * xx [ 842
] + xx [ 98 ] * xx [ 831 ] ) ; xx [ 844 ] = xx [ 487 ] ; xx [ 845 ] = xx [
396 ] ; xx [ 846 ] = xx [ 475 ] ; xx [ 396 ] = xx [ 376 ] * xx [ 778 ] ; xx [
475 ] = xx [ 376 ] * xx [ 777 ] ; xx [ 487 ] = xx [ 777 ] + xx [ 131 ] * ( xx
[ 396 ] * xx [ 345 ] - xx [ 475 ] * xx [ 376 ] ) ; xx [ 608 ] = xx [ 778 ] -
xx [ 131 ] * ( xx [ 475 ] * xx [ 345 ] + xx [ 396 ] * xx [ 376 ] ) ; xx [ 851
] = xx [ 487 ] ; xx [ 852 ] = xx [ 608 ] ; xx [ 853 ] = xx [ 393 ] ; xx [ 855
] = xx [ 429 ] ; xx [ 856 ] = xx [ 480 ] ; xx [ 857 ] = xx [ 430 ] ;
pm_math_Vector3_cross_ra ( xx + 786 , xx + 504 , xx + 858 ) ; xx [ 396 ] = xx
[ 551 ] + xx [ 858 ] ; xx [ 429 ] = xx [ 571 ] + xx [ 859 ] ; xx [ 430 ] = xx
[ 429 ] * xx [ 376 ] ; xx [ 475 ] = xx [ 396 ] * xx [ 376 ] ; xx [ 480 ] = xx
[ 396 ] + xx [ 131 ] * ( xx [ 430 ] * xx [ 345 ] - xx [ 475 ] * xx [ 376 ] )
; xx [ 396 ] = xx [ 429 ] - xx [ 131 ] * ( xx [ 475 ] * xx [ 345 ] + xx [ 430
] * xx [ 376 ] ) ; xx [ 429 ] = xx [ 782 ] + xx [ 860 ] ; xx [ 786 ] = xx [
480 ] ; xx [ 787 ] = xx [ 396 ] ; xx [ 788 ] = xx [ 429 ] ; xx [ 430 ] = xx [
379 ] - ( pm_math_Vector3_dot_ra ( xx + 844 , xx + 851 ) +
pm_math_Vector3_dot_ra ( xx + 855 , xx + 786 ) ) ; xx [ 786 ] = xx [ 407 ] ;
xx [ 787 ] = - xx [ 413 ] ; xx [ 788 ] = - ( xx [ 410 ] / xx [ 406 ] ) ; xx [
851 ] = xx [ 487 ] ; xx [ 852 ] = xx [ 608 ] ; xx [ 853 ] = xx [ 393 ] + xx [
430 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 851 , xx + 858 )
; xx [ 861 ] = xx [ 411 ] ; xx [ 862 ] = - xx [ 425 ] ; xx [ 863 ] = xx [ 427
] ; pm_math_Vector3_cross_ra ( xx + 851 , xx + 438 , xx + 864 ) ; xx [ 851 ]
= xx [ 480 ] - xx [ 401 ] * xx [ 430 ] + xx [ 864 ] ; xx [ 852 ] = xx [ 396 ]
+ xx [ 471 ] * xx [ 430 ] + xx [ 865 ] ; xx [ 853 ] = xx [ 429 ] + xx [ 866 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 851 , xx + 864 ) ; xx
[ 379 ] = xx [ 376 ] * xx [ 784 ] ; xx [ 393 ] = xx [ 376 ] * xx [ 783 ] ; xx
[ 396 ] = xx [ 783 ] + xx [ 131 ] * ( xx [ 379 ] * xx [ 345 ] - xx [ 393 ] *
xx [ 376 ] ) ; xx [ 407 ] = xx [ 784 ] - xx [ 131 ] * ( xx [ 393 ] * xx [ 345
] + xx [ 379 ] * xx [ 376 ] ) ; xx [ 782 ] = xx [ 396 ] ; xx [ 783 ] = xx [
407 ] ; xx [ 784 ] = xx [ 538 ] ; pm_math_Vector3_cross_ra ( xx + 794 , xx +
504 , xx + 851 ) ; xx [ 379 ] = xx [ 675 ] + xx [ 851 ] ; xx [ 393 ] = xx [
689 ] + xx [ 852 ] ; xx [ 411 ] = xx [ 393 ] * xx [ 376 ] ; xx [ 413 ] = xx [
379 ] * xx [ 376 ] ; xx [ 425 ] = xx [ 379 ] + xx [ 131 ] * ( xx [ 411 ] * xx
[ 345 ] - xx [ 413 ] * xx [ 376 ] ) ; xx [ 379 ] = xx [ 393 ] - xx [ 131 ] *
( xx [ 413 ] * xx [ 345 ] + xx [ 411 ] * xx [ 376 ] ) ; xx [ 393 ] = xx [ 793
] + xx [ 853 ] ; xx [ 793 ] = xx [ 425 ] ; xx [ 794 ] = xx [ 379 ] ; xx [ 795
] = xx [ 393 ] ; xx [ 411 ] = xx [ 498 ] - ( pm_math_Vector3_dot_ra ( xx +
844 , xx + 782 ) + pm_math_Vector3_dot_ra ( xx + 855 , xx + 793 ) ) ; xx [
782 ] = xx [ 396 ] ; xx [ 783 ] = xx [ 407 ] ; xx [ 784 ] = xx [ 538 ] + xx [
411 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 782 , xx + 793 )
; pm_math_Vector3_cross_ra ( xx + 782 , xx + 438 , xx + 851 ) ; xx [ 782 ] =
xx [ 425 ] - xx [ 401 ] * xx [ 411 ] + xx [ 851 ] ; xx [ 783 ] = xx [ 379 ] +
xx [ 471 ] * xx [ 411 ] + xx [ 852 ] ; xx [ 784 ] = xx [ 393 ] + xx [ 853 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 782 , xx + 851 ) ; xx [
379 ] = xx [ 315 ] - ( pm_math_Vector3_dot_ra ( xx + 786 , xx + 793 ) +
pm_math_Vector3_dot_ra ( xx + 861 , xx + 851 ) ) ; xx [ 315 ] = xx [ 294 ] *
xx [ 500 ] + xx [ 377 ] * xx [ 411 ] + xx [ 485 ] * xx [ 379 ] ; xx [ 393 ] =
xx [ 376 ] * xx [ 830 ] ; xx [ 396 ] = xx [ 376 ] * xx [ 829 ] ; xx [ 407 ] =
xx [ 829 ] + xx [ 131 ] * ( xx [ 393 ] * xx [ 345 ] - xx [ 396 ] * xx [ 376 ]
) ; xx [ 413 ] = xx [ 830 ] - xx [ 131 ] * ( xx [ 396 ] * xx [ 345 ] + xx [
393 ] * xx [ 376 ] ) ; xx [ 782 ] = xx [ 407 ] ; xx [ 783 ] = xx [ 413 ] ; xx
[ 784 ] = xx [ 838 ] ; pm_math_Vector3_cross_ra ( xx + 848 , xx + 504 , xx +
793 ) ; xx [ 393 ] = xx [ 847 ] + xx [ 793 ] ; xx [ 396 ] = xx [ 854 ] + xx [
794 ] ; xx [ 425 ] = xx [ 396 ] * xx [ 376 ] ; xx [ 427 ] = xx [ 393 ] * xx [
376 ] ; xx [ 429 ] = xx [ 393 ] + xx [ 131 ] * ( xx [ 425 ] * xx [ 345 ] - xx
[ 427 ] * xx [ 376 ] ) ; xx [ 393 ] = xx [ 396 ] - xx [ 131 ] * ( xx [ 427 ]
* xx [ 345 ] + xx [ 425 ] * xx [ 376 ] ) ; xx [ 396 ] = xx [ 843 ] + xx [ 795
] ; xx [ 793 ] = xx [ 429 ] ; xx [ 794 ] = xx [ 393 ] ; xx [ 795 ] = xx [ 396
] ; xx [ 425 ] = pm_math_Vector3_dot_ra ( xx + 844 , xx + 782 ) +
pm_math_Vector3_dot_ra ( xx + 855 , xx + 793 ) ; xx [ 782 ] = xx [ 407 ] ; xx
[ 783 ] = xx [ 413 ] ; xx [ 784 ] = xx [ 838 ] - xx [ 425 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 782 , xx + 793 ) ;
pm_math_Vector3_cross_ra ( xx + 782 , xx + 438 , xx + 829 ) ; xx [ 782 ] = xx
[ 429 ] + xx [ 401 ] * xx [ 425 ] + xx [ 829 ] ; xx [ 783 ] = xx [ 393 ] - xx
[ 471 ] * xx [ 425 ] + xx [ 830 ] ; xx [ 784 ] = xx [ 396 ] + xx [ 831 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 782 , xx + 829 ) ; xx [
393 ] = pm_math_Vector3_dot_ra ( xx + 786 , xx + 793 ) +
pm_math_Vector3_dot_ra ( xx + 861 , xx + 829 ) ; xx [ 396 ] = - ( xx [ 294 ]
* xx [ 812 ] + xx [ 377 ] * xx [ 425 ] + xx [ 485 ] * xx [ 393 ] ) ; xx [ 407
] = - ( xx [ 119 ] * xx [ 812 ] + xx [ 436 ] * xx [ 425 ] + xx [ 314 ] * xx [
393 ] ) ; xx [ 782 ] = - xx [ 349 ] ; xx [ 783 ] = - xx [ 528 ] ; xx [ 784 ]
= - ( xx [ 367 ] / xx [ 339 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx +
588 , xx + 826 , xx + 793 ) ; xx [ 829 ] = - xx [ 450 ] ; xx [ 830 ] = xx [
584 ] ; xx [ 831 ] = xx [ 586 ] ; pm_math_Vector3_cross_ra ( xx + 826 , xx +
625 , xx + 841 ) ; xx [ 826 ] = xx [ 832 ] + xx [ 841 ] ; xx [ 827 ] = xx [
833 ] + xx [ 842 ] ; xx [ 828 ] = xx [ 834 ] + xx [ 843 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx + 826 , xx + 832 ) ; xx [
867 ] = xx [ 195 ] * xx [ 8 ] + xx [ 234 ] * xx [ 81 ] + xx [ 192 ] * ( xx [
211 ] - ( pm_math_Vector3_dot_ra ( xx + 465 , xx + 742 ) +
pm_math_Vector3_dot_ra ( xx + 748 , xx + 751 ) ) ) ; xx [ 868 ] = xx [ 108 ]
; xx [ 869 ] = xx [ 530 ] ; xx [ 870 ] = xx [ 646 ] ; xx [ 871 ] = xx [ 839 ]
; xx [ 872 ] = xx [ 108 ] ; xx [ 873 ] = xx [ 48 ] * xx [ 254 ] + xx [ 258 ]
* xx [ 300 ] + xx [ 98 ] * xx [ 259 ] ; xx [ 874 ] = xx [ 840 ] ; xx [ 875 ]
= xx [ 517 ] ; xx [ 876 ] = xx [ 605 ] ; xx [ 877 ] = xx [ 530 ] ; xx [ 878 ]
= xx [ 840 ] ; xx [ 879 ] = xx [ 294 ] * xx [ 392 ] + xx [ 377 ] * xx [ 430 ]
+ xx [ 485 ] * ( xx [ 489 ] - ( pm_math_Vector3_dot_ra ( xx + 786 , xx + 858
) + pm_math_Vector3_dot_ra ( xx + 861 , xx + 864 ) ) ) ; xx [ 880 ] = xx [
315 ] ; xx [ 881 ] = xx [ 396 ] ; xx [ 882 ] = xx [ 646 ] ; xx [ 883 ] = xx [
517 ] ; xx [ 884 ] = xx [ 315 ] ; xx [ 885 ] = xx [ 119 ] * xx [ 500 ] + xx [
436 ] * xx [ 411 ] + xx [ 314 ] * xx [ 379 ] ; xx [ 886 ] = xx [ 407 ] ; xx [
887 ] = xx [ 839 ] ; xx [ 888 ] = xx [ 605 ] ; xx [ 889 ] = xx [ 396 ] ; xx [
890 ] = xx [ 407 ] ; xx [ 891 ] = ( xx [ 624 ] - ( pm_math_Vector3_dot_ra (
xx + 782 , xx + 793 ) + pm_math_Vector3_dot_ra ( xx + 829 , xx + 832 ) ) ) *
xx [ 820 ] + xx [ 821 ] * xx [ 822 ] ; xx [ 742 ] = xx [ 150 ] + xx [ 153 ] ;
xx [ 743 ] = xx [ 151 ] + xx [ 157 ] ; xx [ 744 ] = xx [ 152 ] + xx [ 159 ] ;
xx [ 150 ] = xx [ 56 ] * state [ 21 ] ; xx [ 151 ] = - ( xx [ 57 ] * state [
21 ] ) ; xx [ 152 ] = - ( xx [ 73 ] * state [ 21 ] ) ;
pm_math_Vector3_cross_ra ( xx + 742 , xx + 150 , xx + 751 ) ;
pm_math_Vector3_cross_ra ( xx + 138 , xx + 223 , xx + 150 ) ;
pm_math_Vector3_cross_ra ( xx + 138 , xx + 150 , xx + 742 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 742 , xx + 150 ) ; xx [
8 ] = xx [ 269 ] * ( xx [ 751 ] + xx [ 150 ] ) ; xx [ 56 ] = - xx [ 156 ] ;
xx [ 742 ] = - xx [ 146 ] ; xx [ 743 ] = xx [ 155 ] ; xx [ 744 ] = xx [ 56 ]
; xx [ 57 ] = xx [ 174 ] + xx [ 168 ] * xx [ 171 ] ; xx [ 73 ] = xx [ 175 ] +
xx [ 169 ] * xx [ 172 ] ; xx [ 173 ] = xx [ 176 ] ; xx [ 174 ] = xx [ 57 ] ;
xx [ 175 ] = xx [ 73 ] ; xx [ 81 ] = xx [ 269 ] * ( xx [ 752 ] + xx [ 151 ] )
; xx [ 108 ] = xx [ 269 ] * ( xx [ 753 ] + xx [ 152 ] ) ; xx [ 150 ] = xx [ 8
] ; xx [ 151 ] = xx [ 81 ] ; xx [ 152 ] = xx [ 108 ] ; xx [ 153 ] =
pm_math_Vector3_dot_ra ( xx + 742 , xx + 173 ) + pm_math_Vector3_dot_ra ( xx
+ 754 , xx + 150 ) ; xx [ 150 ] = xx [ 153 ] / xx [ 196 ] ; xx [ 173 ] = xx [
8 ] - xx [ 215 ] * xx [ 150 ] ; xx [ 174 ] = xx [ 81 ] + xx [ 216 ] * xx [
150 ] ; xx [ 175 ] = xx [ 108 ] + xx [ 220 ] * xx [ 150 ] ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 173 , xx + 742 ) ; xx [ 151 ] =
state [ 19 ] * xx [ 138 ] ; xx [ 152 ] = xx [ 139 ] * state [ 19 ] ; xx [ 892
] = xx [ 243 ] ; xx [ 893 ] = xx [ 271 ] ; xx [ 894 ] = xx [ 272 ] ; xx [ 895
] = xx [ 273 ] ; xx [ 896 ] = xx [ 239 ] ; xx [ 897 ] = xx [ 275 ] ; xx [ 898
] = xx [ 276 ] ; xx [ 899 ] = xx [ 277 ] ; xx [ 900 ] = xx [ 236 ] + xx [ 278
] ; pm_math_Vector3_cross_ra ( xx + 128 , xx + 316 , xx + 173 ) ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 173 , xx + 271 ) ; xx [ 157 ] = xx
[ 133 ] * xx [ 272 ] - xx [ 137 ] * xx [ 271 ] ; xx [ 159 ] = xx [ 232 ] *
state [ 19 ] ; xx [ 168 ] = xx [ 132 ] + xx [ 140 ] ; xx [ 132 ] = xx [ 271 ]
+ xx [ 131 ] * xx [ 157 ] * xx [ 137 ] - xx [ 159 ] * xx [ 168 ] ; xx [ 140 ]
= xx [ 289 ] * state [ 19 ] ; xx [ 169 ] = xx [ 272 ] - xx [ 131 ] * xx [ 157
] * xx [ 133 ] - xx [ 140 ] * xx [ 168 ] ; xx [ 157 ] = xx [ 159 ] * ( xx [
138 ] + xx [ 138 ] ) + xx [ 140 ] * ( xx [ 139 ] + xx [ 139 ] ) + xx [ 273 ]
- xx [ 131 ] * ( xx [ 133 ] * xx [ 273 ] * xx [ 133 ] + xx [ 137 ] * xx [ 273
] * xx [ 137 ] ) ; xx [ 138 ] = xx [ 132 ] ; xx [ 139 ] = xx [ 169 ] ; xx [
140 ] = xx [ 157 ] ; pm_math_Matrix3x3_xform_ra ( xx + 892 , xx + 138 , xx +
173 ) ; xx [ 159 ] = xx [ 151 ] * xx [ 263 ] - xx [ 152 ] * xx [ 260 ] + xx [
174 ] ; xx [ 168 ] = xx [ 743 ] + xx [ 159 ] ; xx [ 211 ] = xx [ 151 ] * xx [
331 ] - xx [ 152 ] * xx [ 321 ] + xx [ 173 ] ; xx [ 239 ] = xx [ 742 ] + xx [
211 ] ; xx [ 271 ] = xx [ 176 ] + xx [ 177 ] * xx [ 150 ] ; xx [ 272 ] = xx [
57 ] - xx [ 212 ] * xx [ 150 ] ; xx [ 273 ] = xx [ 73 ] + xx [ 213 ] * xx [
150 ] ; pm_math_Quaternion_xform_ra ( xx + 161 , xx + 271 , xx + 275 ) ;
pm_math_Vector3_cross_ra ( xx + 223 , xx + 742 , xx + 271 ) ; xx [ 892 ] = xx
[ 321 ] ; xx [ 893 ] = xx [ 260 ] ; xx [ 894 ] = xx [ 329 ] ; xx [ 895 ] = xx
[ 331 ] ; xx [ 896 ] = xx [ 263 ] ; xx [ 897 ] = xx [ 332 ] ; xx [ 898 ] = xx
[ 290 ] ; xx [ 899 ] = xx [ 288 ] ; xx [ 900 ] = xx [ 229 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 892 , xx + 138 , xx + 751 ) ; xx [ 138 ] =
xx [ 151 ] * xx [ 255 ] - xx [ 152 ] * xx [ 348 ] + xx [ 753 ] ; xx [ 139 ] =
xx [ 149 ] + xx [ 277 ] + xx [ 273 ] + xx [ 138 ] ; xx [ 140 ] = ( xx [ 232 ]
* xx [ 168 ] - xx [ 289 ] * xx [ 239 ] - xx [ 139 ] ) / xx [ 267 ] ; xx [ 229
] = xx [ 151 ] * xx [ 482 ] - xx [ 152 ] * xx [ 292 ] + xx [ 751 ] ; xx [ 243
] = xx [ 147 ] + xx [ 275 ] + xx [ 271 ] + xx [ 229 ] - xx [ 279 ] * xx [ 140
] ; xx [ 254 ] = xx [ 151 ] * xx [ 249 ] - xx [ 152 ] * xx [ 529 ] + xx [ 752
] ; xx [ 249 ] = xx [ 148 ] + xx [ 276 ] + xx [ 272 ] + xx [ 254 ] - xx [ 280
] * xx [ 140 ] ; xx [ 255 ] = xx [ 249 ] * xx [ 133 ] - xx [ 243 ] * xx [ 137
] ; xx [ 259 ] = xx [ 239 ] - xx [ 244 ] * xx [ 140 ] ; xx [ 239 ] = xx [ 168
] - xx [ 240 ] * xx [ 140 ] ; xx [ 168 ] = xx [ 239 ] * xx [ 133 ] - xx [ 259
] * xx [ 137 ] ; xx [ 260 ] = xx [ 259 ] + xx [ 131 ] * xx [ 168 ] * xx [ 137
] ; xx [ 259 ] = xx [ 239 ] - xx [ 131 ] * xx [ 168 ] * xx [ 133 ] ; xx [ 168
] = xx [ 151 ] * xx [ 332 ] - xx [ 152 ] * xx [ 329 ] + xx [ 175 ] ; xx [ 173
] = xx [ 744 ] + xx [ 168 ] - xx [ 230 ] * xx [ 140 ] ; xx [ 174 ] = xx [ 173
] - xx [ 131 ] * ( xx [ 173 ] * xx [ 133 ] * xx [ 133 ] + xx [ 173 ] * xx [
137 ] * xx [ 137 ] ) ; xx [ 271 ] = xx [ 260 ] ; xx [ 272 ] = xx [ 259 ] ; xx
[ 273 ] = xx [ 174 ] ; pm_math_Vector3_cross_ra ( xx + 316 , xx + 271 , xx +
275 ) ; xx [ 173 ] = xx [ 376 ] * xx [ 126 ] ; xx [ 175 ] = xx [ 376 ] * xx [
125 ] ; xx [ 239 ] = xx [ 125 ] + xx [ 131 ] * ( xx [ 173 ] * xx [ 345 ] - xx
[ 175 ] * xx [ 376 ] ) ; xx [ 263 ] = xx [ 126 ] - xx [ 131 ] * ( xx [ 175 ]
* xx [ 345 ] + xx [ 173 ] * xx [ 376 ] ) ; xx [ 173 ] = xx [ 110 ] + state [
15 ] ; xx [ 271 ] = xx [ 239 ] ; xx [ 272 ] = xx [ 263 ] ; xx [ 273 ] = xx [
173 ] ; xx [ 528 ] = xx [ 141 ] * xx [ 239 ] ; xx [ 529 ] = xx [ 142 ] * xx [
263 ] ; xx [ 530 ] = xx [ 143 ] * xx [ 173 ] ; pm_math_Vector3_cross_ra ( xx
+ 271 , xx + 528 , xx + 141 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 388
, xx + 271 , xx + 528 ) ; xx [ 175 ] = xx [ 381 ] * state [ 17 ] ; xx [ 269 ]
= xx [ 528 ] + xx [ 175 ] ; xx [ 278 ] = xx [ 383 ] * state [ 17 ] ; xx [ 288
] = xx [ 529 ] - xx [ 278 ] ; xx [ 290 ] = xx [ 156 ] * state [ 17 ] ; xx [
292 ] = xx [ 530 ] - xx [ 290 ] ; xx [ 742 ] = xx [ 269 ] ; xx [ 743 ] = xx [
288 ] ; xx [ 744 ] = xx [ 292 ] ; xx [ 751 ] = xx [ 144 ] * xx [ 269 ] ; xx [
752 ] = xx [ 412 ] * xx [ 288 ] ; xx [ 753 ] = xx [ 415 ] * xx [ 292 ] ;
pm_math_Vector3_cross_ra ( xx + 742 , xx + 751 , xx + 754 ) ; xx [ 742 ] = xx
[ 175 ] ; xx [ 743 ] = - xx [ 278 ] ; xx [ 744 ] = - xx [ 290 ] ;
pm_math_Vector3_cross_ra ( xx + 528 , xx + 742 , xx + 751 ) ; xx [ 300 ] = xx
[ 754 ] + xx [ 144 ] * xx [ 751 ] ; xx [ 793 ] = xx [ 381 ] ; xx [ 794 ] = -
xx [ 383 ] ; xx [ 795 ] = xx [ 56 ] ; xx [ 56 ] = xx [ 755 ] + xx [ 412 ] *
xx [ 752 ] ; xx [ 144 ] = xx [ 756 ] + xx [ 415 ] * xx [ 753 ] ; xx [ 411 ] =
xx [ 300 ] ; xx [ 412 ] = xx [ 56 ] ; xx [ 413 ] = xx [ 144 ] ; xx [ 754 ] =
xx [ 528 ] + xx [ 269 ] ; xx [ 755 ] = xx [ 529 ] + xx [ 288 ] ; xx [ 756 ] =
xx [ 530 ] + xx [ 292 ] ; xx [ 528 ] = xx [ 233 ] * state [ 17 ] ; xx [ 529 ]
= - ( xx [ 250 ] * state [ 17 ] ) ; xx [ 530 ] = xx [ 313 ] * state [ 17 ] ;
pm_math_Vector3_cross_ra ( xx + 754 , xx + 528 , xx + 826 ) ;
pm_math_Vector3_cross_ra ( xx + 271 , xx + 438 , xx + 528 ) ;
pm_math_Vector3_cross_ra ( xx + 271 , xx + 528 , xx + 754 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 754 , xx + 271 ) ; xx [
233 ] = xx [ 451 ] * ( xx [ 826 ] + xx [ 271 ] ) ; xx [ 250 ] = xx [ 451 ] *
( xx [ 827 ] + xx [ 272 ] ) ; xx [ 269 ] = xx [ 451 ] * ( xx [ 828 ] + xx [
273 ] ) ; xx [ 271 ] = xx [ 233 ] ; xx [ 272 ] = xx [ 250 ] ; xx [ 273 ] = xx
[ 269 ] ; xx [ 288 ] = pm_math_Vector3_dot_ra ( xx + 793 , xx + 411 ) +
pm_math_Vector3_dot_ra ( xx + 779 , xx + 271 ) ; xx [ 271 ] = xx [ 288 ] / xx
[ 406 ] ; xx [ 411 ] = xx [ 300 ] - xx [ 405 ] * xx [ 271 ] ; xx [ 412 ] = xx
[ 56 ] + xx [ 408 ] * xx [ 271 ] ; xx [ 413 ] = xx [ 144 ] + xx [ 410 ] * xx
[ 271 ] ; pm_math_Quaternion_xform_ra ( xx + 388 , xx + 411 , xx + 528 ) ; xx
[ 411 ] = xx [ 233 ] - xx [ 409 ] * xx [ 271 ] ; xx [ 412 ] = xx [ 250 ] + xx
[ 414 ] * xx [ 271 ] ; xx [ 413 ] = xx [ 269 ] - xx [ 426 ] * xx [ 271 ] ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 411 , xx + 754 ) ;
pm_math_Vector3_cross_ra ( xx + 438 , xx + 754 , xx + 411 ) ; xx [ 272 ] = xx
[ 263 ] * state [ 15 ] ; xx [ 273 ] = state [ 15 ] * xx [ 239 ] ; xx [ 892 ]
= xx [ 346 ] ; xx [ 893 ] = xx [ 428 ] ; xx [ 894 ] = xx [ 481 ] ; xx [ 895 ]
= xx [ 483 ] ; xx [ 896 ] = xx [ 431 ] ; xx [ 897 ] = xx [ 484 ] ; xx [ 898 ]
= xx [ 435 ] ; xx [ 899 ] = xx [ 472 ] ; xx [ 900 ] = xx [ 402 ] ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 504 , xx + 777 ) ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 777 , xx + 793 ) ; xx [ 128 ] = xx
[ 376 ] * xx [ 794 ] ; xx [ 129 ] = xx [ 376 ] * xx [ 793 ] ; xx [ 130 ] = xx
[ 471 ] * state [ 15 ] ; xx [ 292 ] = xx [ 110 ] + xx [ 173 ] ; xx [ 173 ] =
xx [ 793 ] + xx [ 131 ] * ( xx [ 128 ] * xx [ 345 ] - xx [ 129 ] * xx [ 376 ]
) - xx [ 130 ] * xx [ 292 ] ; xx [ 313 ] = xx [ 401 ] * state [ 15 ] ; xx [
315 ] = xx [ 794 ] - xx [ 131 ] * ( xx [ 129 ] * xx [ 345 ] + xx [ 128 ] * xx
[ 376 ] ) - xx [ 313 ] * xx [ 292 ] ; xx [ 128 ] = xx [ 130 ] * ( xx [ 239 ]
+ xx [ 239 ] ) + xx [ 313 ] * ( xx [ 263 ] + xx [ 263 ] ) + xx [ 795 ] ; xx [
777 ] = xx [ 173 ] ; xx [ 778 ] = xx [ 315 ] ; xx [ 779 ] = xx [ 128 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 892 , xx + 777 , xx + 793 ) ; xx [ 129 ] =
xx [ 272 ] * xx [ 253 ] - xx [ 273 ] * xx [ 488 ] + xx [ 793 ] ; xx [ 130 ] =
xx [ 272 ] * xx [ 115 ] - xx [ 273 ] * xx [ 257 ] + xx [ 795 ] ; xx [ 115 ] =
xx [ 143 ] + xx [ 530 ] + xx [ 413 ] + xx [ 130 ] ; xx [ 892 ] = xx [ 473 ] ;
xx [ 893 ] = xx [ 453 ] ; xx [ 894 ] = xx [ 454 ] ; xx [ 895 ] = xx [ 455 ] ;
xx [ 896 ] = xx [ 434 ] ; xx [ 897 ] = xx [ 457 ] ; xx [ 898 ] = xx [ 458 ] ;
xx [ 899 ] = xx [ 459 ] ; xx [ 900 ] = xx [ 236 ] + xx [ 460 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 892 , xx + 777 , xx + 453 ) ; xx [ 236 ] =
xx [ 272 ] * xx [ 428 ] - xx [ 273 ] * xx [ 431 ] + xx [ 454 ] ; xx [ 239 ] =
xx [ 755 ] + xx [ 236 ] ; xx [ 253 ] = xx [ 272 ] * xx [ 346 ] - xx [ 273 ] *
xx [ 483 ] + xx [ 453 ] ; xx [ 257 ] = xx [ 754 ] + xx [ 253 ] ; xx [ 263 ] =
( xx [ 115 ] + xx [ 471 ] * xx [ 239 ] - xx [ 401 ] * xx [ 257 ] ) / xx [ 474
] ; xx [ 292 ] = xx [ 141 ] + xx [ 528 ] + xx [ 411 ] + xx [ 129 ] - xx [ 399
] * xx [ 263 ] ; xx [ 313 ] = xx [ 272 ] * xx [ 556 ] - xx [ 273 ] * xx [ 442
] + xx [ 794 ] ; xx [ 321 ] = xx [ 142 ] + xx [ 529 ] + xx [ 412 ] + xx [ 313
] - xx [ 400 ] * xx [ 263 ] ; xx [ 329 ] = xx [ 321 ] * xx [ 376 ] ; xx [ 331
] = xx [ 292 ] * xx [ 376 ] ; xx [ 332 ] = xx [ 257 ] - xx [ 452 ] * xx [ 263
] ; xx [ 257 ] = xx [ 239 ] - xx [ 456 ] * xx [ 263 ] ; xx [ 239 ] = xx [ 257
] * xx [ 376 ] ; xx [ 346 ] = xx [ 332 ] * xx [ 376 ] ; xx [ 348 ] = xx [ 332
] - xx [ 131 ] * ( xx [ 239 ] * xx [ 345 ] + xx [ 346 ] * xx [ 376 ] ) ; xx [
332 ] = xx [ 257 ] + xx [ 131 ] * ( xx [ 346 ] * xx [ 345 ] - xx [ 239 ] * xx
[ 376 ] ) ; xx [ 239 ] = xx [ 272 ] * xx [ 481 ] - xx [ 273 ] * xx [ 484 ] +
xx [ 455 ] ; xx [ 257 ] = xx [ 756 ] + xx [ 239 ] - xx [ 404 ] * xx [ 263 ] ;
xx [ 411 ] = xx [ 348 ] ; xx [ 412 ] = xx [ 332 ] ; xx [ 413 ] = xx [ 257 ] ;
pm_math_Vector3_cross_ra ( xx + 504 , xx + 411 , xx + 427 ) ; xx [ 346 ] =
state [ 13 ] * xx [ 126 ] ; xx [ 349 ] = state [ 13 ] * xx [ 125 ] ; xx [ 892
] = xx [ 537 ] ; xx [ 893 ] = xx [ 334 ] ; xx [ 894 ] = xx [ 251 ] ; xx [ 895
] = xx [ 432 ] ; xx [ 896 ] = xx [ 337 ] ; xx [ 897 ] = xx [ 264 ] ; xx [ 898
] = xx [ 117 ] ; xx [ 899 ] = xx [ 160 ] ; xx [ 900 ] = xx [ 268 ] ;
pm_math_Vector3_cross_ra ( xx + 103 , xx + 226 , xx + 411 ) ;
pm_math_Vector3_cross_ra ( xx + 103 , xx + 411 , xx + 453 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 453 , xx + 103 ) ; xx [
117 ] = xx [ 287 ] * state [ 13 ] ; xx [ 160 ] = xx [ 127 ] + xx [ 110 ] ; xx
[ 110 ] = xx [ 103 ] - xx [ 117 ] * xx [ 160 ] ; xx [ 127 ] = xx [ 274 ] *
state [ 13 ] ; xx [ 268 ] = xx [ 127 ] * xx [ 160 ] + xx [ 104 ] ; xx [ 103 ]
= xx [ 117 ] * ( xx [ 125 ] + xx [ 125 ] ) - xx [ 127 ] * ( xx [ 126 ] + xx [
126 ] ) + xx [ 105 ] ; xx [ 125 ] = xx [ 110 ] ; xx [ 126 ] = xx [ 268 ] ; xx
[ 127 ] = xx [ 103 ] ; pm_math_Matrix3x3_xform_ra ( xx + 892 , xx + 125 , xx
+ 411 ) ; xx [ 104 ] = xx [ 346 ] * xx [ 446 ] - xx [ 349 ] * xx [ 443 ] + xx
[ 411 ] ; xx [ 105 ] = xx [ 139 ] - xx [ 266 ] * xx [ 140 ] ; xx [ 117 ] = xx
[ 346 ] * xx [ 256 ] - xx [ 349 ] * xx [ 295 ] + xx [ 413 ] ; xx [ 139 ] = xx
[ 136 ] + xx [ 105 ] - xx [ 131 ] * ( xx [ 105 ] * xx [ 133 ] * xx [ 133 ] +
xx [ 105 ] * xx [ 137 ] * xx [ 137 ] ) + xx [ 277 ] + xx [ 115 ] - xx [ 398 ]
* xx [ 263 ] + xx [ 429 ] + xx [ 117 ] ; xx [ 892 ] = xx [ 369 ] ; xx [ 893 ]
= xx [ 343 ] ; xx [ 894 ] = xx [ 305 ] ; xx [ 895 ] = xx [ 372 ] ; xx [ 896 ]
= xx [ 357 ] ; xx [ 897 ] = xx [ 307 ] ; xx [ 898 ] = xx [ 265 ] ; xx [ 899 ]
= xx [ 322 ] ; xx [ 900 ] = xx [ 308 ] ; pm_math_Matrix3x3_xform_ra ( xx +
892 , xx + 125 , xx + 453 ) ; xx [ 105 ] = xx [ 346 ] * xx [ 537 ] - xx [ 349
] * xx [ 432 ] + xx [ 453 ] ; xx [ 115 ] = xx [ 260 ] + xx [ 348 ] + xx [ 105
] ; xx [ 125 ] = xx [ 346 ] * xx [ 334 ] - xx [ 349 ] * xx [ 337 ] + xx [ 454
] ; xx [ 126 ] = xx [ 259 ] + xx [ 332 ] + xx [ 125 ] ; xx [ 127 ] = ( input
[ 5 ] - ( xx [ 139 ] + xx [ 274 ] * xx [ 115 ] + xx [ 287 ] * xx [ 126 ] ) )
/ xx [ 470 ] ; xx [ 160 ] = xx [ 346 ] * xx [ 536 ] - xx [ 349 ] * xx [ 252 ]
+ xx [ 412 ] ; xx [ 411 ] = xx [ 134 ] + xx [ 243 ] + xx [ 131 ] * xx [ 255 ]
* xx [ 137 ] + xx [ 275 ] + xx [ 292 ] - xx [ 131 ] * ( xx [ 329 ] * xx [ 345
] + xx [ 331 ] * xx [ 376 ] ) + xx [ 427 ] + xx [ 104 ] + xx [ 283 ] * xx [
127 ] ; xx [ 412 ] = xx [ 135 ] + xx [ 249 ] - xx [ 131 ] * xx [ 255 ] * xx [
133 ] + xx [ 276 ] + xx [ 321 ] + xx [ 131 ] * ( xx [ 331 ] * xx [ 345 ] - xx
[ 329 ] * xx [ 376 ] ) + xx [ 428 ] + xx [ 160 ] + xx [ 330 ] * xx [ 127 ] ;
xx [ 413 ] = xx [ 139 ] + xx [ 333 ] * xx [ 127 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 411 , xx + 275 ) ; xx [ 139 ] =
xx [ 346 ] * xx [ 251 ] - xx [ 349 ] * xx [ 264 ] + xx [ 455 ] ; xx [ 411 ] =
xx [ 115 ] + xx [ 338 ] * xx [ 127 ] ; xx [ 412 ] = xx [ 126 ] + xx [ 340 ] *
xx [ 127 ] ; xx [ 413 ] = xx [ 174 ] + xx [ 257 ] + xx [ 139 ] + xx [ 323 ] *
xx [ 127 ] ; pm_math_Quaternion_xform_ra ( xx + 121 , xx + 411 , xx + 255 ) ;
pm_math_Vector3_cross_ra ( xx + 226 , xx + 255 , xx + 411 ) ; xx [ 427 ] = -
xx [ 83 ] ; xx [ 428 ] = xx [ 92 ] ; xx [ 429 ] = xx [ 96 ] ;
pm_math_Vector3_cross_ra ( xx + 89 , xx + 427 , xx + 430 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 416 , xx + 430 , xx + 453 ) ; xx [ 415 ] =
xx [ 89 ] + xx [ 85 ] ; xx [ 416 ] = xx [ 90 ] + xx [ 95 ] ; xx [ 417 ] = xx
[ 91 ] + xx [ 97 ] ; xx [ 89 ] = xx [ 352 ] * state [ 11 ] ; xx [ 90 ] = xx [
353 ] * state [ 11 ] ; xx [ 91 ] = xx [ 354 ] * state [ 11 ] ;
pm_math_Vector3_cross_ra ( xx + 415 , xx + 89 , xx + 418 ) ;
pm_math_Vector3_cross_ra ( xx + 78 , xx + 447 , xx + 89 ) ;
pm_math_Vector3_cross_ra ( xx + 78 , xx + 89 , xx + 415 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 415 , xx + 89 ) ; xx [ 85
] = xx [ 418 ] + xx [ 89 ] ; xx [ 95 ] = xx [ 419 ] + xx [ 90 ] ; xx [ 89 ] =
xx [ 420 ] + xx [ 91 ] ; xx [ 415 ] = xx [ 85 ] ; xx [ 416 ] = xx [ 95 ] ; xx
[ 417 ] = xx [ 89 ] ; pm_math_Matrix3x3_xform_ra ( xx + 358 , xx + 415 , xx +
418 ) ; xx [ 90 ] = xx [ 453 ] + xx [ 418 ] ; xx [ 91 ] = xx [ 111 ] + xx [
275 ] + xx [ 411 ] + xx [ 90 ] ; xx [ 97 ] = xx [ 454 ] + xx [ 419 ] ; xx [
115 ] = xx [ 112 ] + xx [ 276 ] + xx [ 412 ] + xx [ 97 ] ; xx [ 126 ] = xx [
455 ] + xx [ 420 ] ; xx [ 174 ] = xx [ 113 ] + xx [ 277 ] + xx [ 413 ] + xx [
126 ] ; xx [ 275 ] = xx [ 91 ] ; xx [ 276 ] = xx [ 115 ] ; xx [ 277 ] = xx [
174 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 358 , xx + 430 , xx + 411
) ; pm_math_Matrix3x3_xform_ra ( xx + 507 , xx + 415 , xx + 357 ) ; xx [ 243
] = xx [ 411 ] + xx [ 357 ] ; xx [ 249 ] = xx [ 255 ] + xx [ 243 ] ; xx [ 251
] = xx [ 412 ] + xx [ 358 ] ; xx [ 252 ] = xx [ 256 ] + xx [ 251 ] ; xx [ 255
] = xx [ 413 ] + xx [ 359 ] ; xx [ 256 ] = xx [ 257 ] + xx [ 255 ] ; xx [ 357
] = xx [ 249 ] ; xx [ 358 ] = xx [ 252 ] ; xx [ 359 ] = xx [ 256 ] ; xx [ 257
] = ( pm_math_Vector3_dot_ra ( xx + 297 , xx + 275 ) + pm_math_Vector3_dot_ra
( xx + 352 , xx + 357 ) ) / xx [ 373 ] ; xx [ 275 ] = xx [ 91 ] - xx [ 355 ]
* xx [ 257 ] ; xx [ 276 ] = xx [ 115 ] - xx [ 218 ] * xx [ 257 ] ; xx [ 277 ]
= xx [ 174 ] - xx [ 219 ] * xx [ 257 ] ; pm_math_Quaternion_xform_ra ( xx +
99 , xx + 275 , xx + 357 ) ; xx [ 275 ] = xx [ 249 ] - xx [ 368 ] * xx [ 257
] ; xx [ 276 ] = xx [ 252 ] - xx [ 370 ] * xx [ 257 ] ; xx [ 277 ] = xx [ 256
] - xx [ 371 ] * xx [ 257 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx +
275 , xx + 360 ) ; pm_math_Vector3_cross_ra ( xx + 447 , xx + 360 , xx + 275
) ; pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx + 78 , xx + 363 ) ; xx
[ 91 ] = xx [ 286 ] * state [ 9 ] ; xx [ 115 ] = xx [ 363 ] - xx [ 91 ] ; xx
[ 174 ] = xx [ 303 ] * state [ 9 ] ; xx [ 249 ] = xx [ 364 ] - xx [ 174 ] ;
xx [ 252 ] = xx [ 304 ] * state [ 9 ] ; xx [ 256 ] = xx [ 365 ] - xx [ 252 ]
; xx [ 411 ] = xx [ 115 ] ; xx [ 412 ] = xx [ 249 ] ; xx [ 413 ] = xx [ 256 ]
; xx [ 415 ] = xx [ 285 ] * xx [ 115 ] ; xx [ 416 ] = xx [ 493 ] * xx [ 249 ]
; xx [ 417 ] = xx [ 535 ] * xx [ 256 ] ; pm_math_Vector3_cross_ra ( xx + 411
, xx + 415 , xx + 418 ) ; xx [ 411 ] = - xx [ 91 ] ; xx [ 412 ] = - xx [ 174
] ; xx [ 413 ] = - xx [ 252 ] ; pm_math_Vector3_cross_ra ( xx + 363 , xx +
411 , xx + 415 ) ; xx [ 259 ] = xx [ 418 ] + xx [ 285 ] * xx [ 415 ] ; xx [
421 ] = - xx [ 286 ] ; xx [ 422 ] = - xx [ 303 ] ; xx [ 423 ] = - xx [ 304 ]
; xx [ 260 ] = xx [ 419 ] + xx [ 493 ] * xx [ 416 ] ; xx [ 264 ] = xx [ 420 ]
+ xx [ 535 ] * xx [ 417 ] ; xx [ 418 ] = xx [ 259 ] ; xx [ 419 ] = xx [ 260 ]
; xx [ 420 ] = xx [ 264 ] ; xx [ 453 ] = xx [ 363 ] + xx [ 115 ] ; xx [ 454 ]
= xx [ 364 ] + xx [ 249 ] ; xx [ 455 ] = xx [ 365 ] + xx [ 256 ] ; xx [ 363 ]
= - ( xx [ 619 ] * state [ 9 ] ) ; xx [ 364 ] = xx [ 620 ] * state [ 9 ] ; xx
[ 365 ] = xx [ 622 ] * state [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 453 , xx
+ 363 , xx + 457 ) ; pm_math_Vector3_cross_ra ( xx + 78 , xx + 625 , xx + 363
) ; pm_math_Vector3_cross_ra ( xx + 78 , xx + 363 , xx + 453 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx + 453 , xx + 78 ) ; xx [
115 ] = xx [ 621 ] * ( xx [ 457 ] + xx [ 78 ] ) ; xx [ 249 ] = xx [ 621 ] * (
xx [ 458 ] + xx [ 79 ] ) ; xx [ 78 ] = xx [ 621 ] * ( xx [ 459 ] + xx [ 80 ]
) ; xx [ 363 ] = xx [ 115 ] ; xx [ 364 ] = xx [ 249 ] ; xx [ 365 ] = xx [ 78
] ; xx [ 79 ] = input [ 4 ] - ( pm_math_Vector3_dot_ra ( xx + 421 , xx + 418
) + pm_math_Vector3_dot_ra ( xx + 809 , xx + 363 ) ) ; xx [ 80 ] = xx [ 79 ]
/ xx [ 339 ] ; xx [ 363 ] = xx [ 259 ] - xx [ 312 ] * xx [ 80 ] ; xx [ 364 ]
= xx [ 260 ] - xx [ 350 ] * xx [ 80 ] ; xx [ 365 ] = xx [ 264 ] - xx [ 367 ]
* xx [ 80 ] ; pm_math_Quaternion_xform_ra ( xx + 588 , xx + 363 , xx + 418 )
; xx [ 363 ] = xx [ 115 ] - xx [ 351 ] * xx [ 80 ] ; xx [ 364 ] = xx [ 249 ]
+ xx [ 534 ] * xx [ 80 ] ; xx [ 365 ] = xx [ 78 ] + xx [ 585 ] * xx [ 80 ] ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 363 , xx + 421 ) ;
pm_math_Vector3_cross_ra ( xx + 625 , xx + 421 , xx + 363 ) ; xx [ 453 ] = xx
[ 58 ] ; xx [ 454 ] = - xx [ 67 ] ; xx [ 455 ] = - xx [ 71 ] ;
pm_math_Vector3_cross_ra ( xx + 64 , xx + 453 , xx + 457 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 539 , xx + 457 , xx + 453 ) ; xx [ 480 ] =
xx [ 64 ] + xx [ 60 ] ; xx [ 481 ] = xx [ 65 ] + xx [ 70 ] ; xx [ 482 ] = xx
[ 66 ] + xx [ 72 ] ; xx [ 64 ] = - ( xx [ 469 ] * state [ 7 ] ) ; xx [ 65 ] =
xx [ 554 ] * state [ 7 ] ; xx [ 66 ] = - ( xx [ 555 ] * state [ 7 ] ) ;
pm_math_Vector3_cross_ra ( xx + 480 , xx + 64 , xx + 70 ) ;
pm_math_Vector3_cross_ra ( xx + 53 , xx + 522 , xx + 64 ) ;
pm_math_Vector3_cross_ra ( xx + 53 , xx + 64 , xx + 480 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 480 , xx + 53 ) ; xx [ 58
] = xx [ 70 ] + xx [ 53 ] ; xx [ 60 ] = xx [ 71 ] + xx [ 54 ] ; xx [ 53 ] =
xx [ 72 ] + xx [ 55 ] ; xx [ 64 ] = xx [ 58 ] ; xx [ 65 ] = xx [ 60 ] ; xx [
66 ] = xx [ 53 ] ; pm_math_Matrix3x3_xform_ra ( xx + 557 , xx + 64 , xx + 70
) ; xx [ 54 ] = xx [ 453 ] + xx [ 70 ] ; xx [ 55 ] = xx [ 86 ] + xx [ 357 ] +
xx [ 275 ] + xx [ 418 ] + xx [ 363 ] + xx [ 54 ] ; xx [ 67 ] = xx [ 454 ] +
xx [ 71 ] ; xx [ 256 ] = xx [ 87 ] + xx [ 358 ] + xx [ 276 ] + xx [ 419 ] +
xx [ 364 ] + xx [ 67 ] ; xx [ 70 ] = xx [ 455 ] + xx [ 72 ] ; xx [ 71 ] = xx
[ 88 ] + xx [ 359 ] + xx [ 277 ] + xx [ 420 ] + xx [ 365 ] + xx [ 70 ] ; xx [
275 ] = xx [ 55 ] ; xx [ 276 ] = xx [ 256 ] ; xx [ 277 ] = xx [ 71 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 557 , xx + 457 , xx + 357 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 593 , xx + 64 , xx + 363 ) ; xx [ 64 ] = xx
[ 357 ] + xx [ 363 ] ; xx [ 65 ] = xx [ 360 ] + xx [ 421 ] + xx [ 64 ] ; xx [
66 ] = xx [ 358 ] + xx [ 364 ] ; xx [ 72 ] = xx [ 361 ] + xx [ 422 ] + xx [
66 ] ; xx [ 265 ] = xx [ 359 ] + xx [ 365 ] ; xx [ 285 ] = xx [ 362 ] + xx [
423 ] + xx [ 265 ] ; xx [ 357 ] = xx [ 65 ] ; xx [ 358 ] = xx [ 72 ] ; xx [
359 ] = xx [ 285 ] ; xx [ 292 ] = ( input [ 3 ] - ( pm_math_Vector3_dot_ra (
xx + 548 , xx + 275 ) + pm_math_Vector3_dot_ra ( xx + 566 , xx + 357 ) ) ) /
xx [ 570 ] ; xx [ 275 ] = xx [ 55 ] + xx [ 572 ] * xx [ 292 ] ; xx [ 276 ] =
xx [ 256 ] + xx [ 490 ] * xx [ 292 ] ; xx [ 277 ] = xx [ 71 ] + xx [ 491 ] *
xx [ 292 ] ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 275 , xx + 357 ) ;
xx [ 275 ] = xx [ 65 ] + xx [ 574 ] * xx [ 292 ] ; xx [ 276 ] = xx [ 72 ] +
xx [ 583 ] * xx [ 292 ] ; xx [ 277 ] = xx [ 285 ] + xx [ 569 ] * xx [ 292 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 275 , xx + 360 ) ;
pm_math_Vector3_cross_ra ( xx + 522 , xx + 360 , xx + 275 ) ; xx [ 363 ] = -
xx [ 33 ] ; xx [ 364 ] = xx [ 42 ] ; xx [ 365 ] = xx [ 46 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 363 , xx + 418 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 628 , xx + 418 , xx + 363 ) ; xx [ 421 ] =
xx [ 39 ] + xx [ 35 ] ; xx [ 422 ] = xx [ 40 ] + xx [ 45 ] ; xx [ 423 ] = xx
[ 41 ] + xx [ 47 ] ; xx [ 39 ] = - ( xx [ 612 ] * state [ 5 ] ) ; xx [ 40 ] =
- ( xx [ 613 ] * state [ 5 ] ) ; xx [ 41 ] = xx [ 614 ] * state [ 5 ] ;
pm_math_Vector3_cross_ra ( xx + 421 , xx + 39 , xx + 45 ) ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 602 , xx + 39 ) ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 39 , xx + 421 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 421 , xx + 29 ) ; xx [ 33
] = xx [ 45 ] + xx [ 29 ] ; xx [ 35 ] = xx [ 46 ] + xx [ 30 ] ; xx [ 29 ] =
xx [ 47 ] + xx [ 31 ] ; xx [ 39 ] = xx [ 33 ] ; xx [ 40 ] = xx [ 35 ] ; xx [
41 ] = xx [ 29 ] ; pm_math_Matrix3x3_xform_ra ( xx + 637 , xx + 39 , xx + 45
) ; xx [ 30 ] = xx [ 363 ] + xx [ 45 ] ; xx [ 31 ] = xx [ 61 ] + xx [ 357 ] +
xx [ 275 ] + xx [ 30 ] ; xx [ 42 ] = xx [ 364 ] + xx [ 46 ] ; xx [ 55 ] = xx
[ 62 ] + xx [ 358 ] + xx [ 276 ] + xx [ 42 ] ; xx [ 45 ] = xx [ 365 ] + xx [
47 ] ; xx [ 46 ] = xx [ 63 ] + xx [ 359 ] + xx [ 277 ] + xx [ 45 ] ; xx [ 275
] = xx [ 31 ] ; xx [ 276 ] = xx [ 55 ] ; xx [ 277 ] = xx [ 46 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 637 , xx + 418 , xx + 357 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 664 , xx + 39 , xx + 363 ) ; xx [ 39 ] = xx
[ 357 ] + xx [ 363 ] ; xx [ 40 ] = xx [ 360 ] + xx [ 39 ] ; xx [ 41 ] = xx [
358 ] + xx [ 364 ] ; xx [ 47 ] = xx [ 361 ] + xx [ 41 ] ; xx [ 65 ] = xx [
359 ] + xx [ 365 ] ; xx [ 71 ] = xx [ 362 ] + xx [ 65 ] ; xx [ 357 ] = xx [
40 ] ; xx [ 358 ] = xx [ 47 ] ; xx [ 359 ] = xx [ 71 ] ; xx [ 72 ] = ( input
[ 2 ] - ( pm_math_Vector3_dot_ra ( xx + 575 , xx + 275 ) +
pm_math_Vector3_dot_ra ( xx + 615 , xx + 357 ) ) ) / xx [ 654 ] ; xx [ 275 ]
= xx [ 31 ] + xx [ 618 ] * xx [ 72 ] ; xx [ 276 ] = xx [ 55 ] + xx [ 606 ] *
xx [ 72 ] ; xx [ 277 ] = xx [ 46 ] + xx [ 578 ] * xx [ 72 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 275 , xx + 357 ) ; xx [ 275 ] =
xx [ 40 ] + xx [ 580 ] * xx [ 72 ] ; xx [ 276 ] = xx [ 47 ] + xx [ 607 ] * xx
[ 72 ] ; xx [ 277 ] = xx [ 71 ] + xx [ 650 ] * xx [ 72 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 275 , xx + 360 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 360 , xx + 275 ) ; xx [ 507 ] = xx
[ 82 ] ; xx [ 508 ] = xx [ 23 ] ; xx [ 509 ] = xx [ 461 ] ; xx [ 510 ] = xx [
648 ] ; xx [ 511 ] = xx [ 649 ] ; xx [ 512 ] = xx [ 24 ] ; xx [ 513 ] = xx [
652 ] ; xx [ 514 ] = xx [ 653 ] ; xx [ 515 ] = xx [ 673 ] ; xx [ 363 ] =
state [ 3 ] ; xx [ 364 ] = xx [ 11 ] ; xx [ 365 ] = xx [ 21 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 363 , xx + 421 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 507 , xx + 421 , xx + 363 ) ; xx [ 453 ] =
xx [ 15 ] + xx [ 10 ] ; xx [ 454 ] = xx [ 16 ] + xx [ 18 ] ; xx [ 455 ] = xx
[ 17 ] + xx [ 22 ] ; xx [ 15 ] = - ( xx [ 573 ] * state [ 3 ] ) ; xx [ 16 ] =
xx [ 579 ] * state [ 3 ] ; xx [ 17 ] = xx [ 581 ] * state [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 453 , xx + 15 , xx + 21 ) ;
pm_math_Vector3_cross_ra ( xx + 3 , xx + 691 , xx + 15 ) ;
pm_math_Vector3_cross_ra ( xx + 3 , xx + 15 , xx + 453 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 453 , xx + 15 ) ; xx [ 10
] = xx [ 21 ] + xx [ 15 ] ; xx [ 11 ] = xx [ 22 ] + xx [ 16 ] ; xx [ 15 ] =
xx [ 23 ] + xx [ 17 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 11 ] ; xx [
18 ] = xx [ 15 ] ; pm_math_Matrix3x3_xform_ra ( xx + 655 , xx + 16 , xx + 21
) ; xx [ 24 ] = xx [ 363 ] + xx [ 21 ] ; xx [ 31 ] = xx [ 36 ] + xx [ 357 ] +
xx [ 275 ] + xx [ 24 ] ; xx [ 40 ] = xx [ 364 ] + xx [ 22 ] ; xx [ 46 ] = xx
[ 37 ] + xx [ 358 ] + xx [ 276 ] + xx [ 40 ] ; xx [ 21 ] = xx [ 365 ] + xx [
23 ] ; xx [ 22 ] = xx [ 38 ] + xx [ 359 ] + xx [ 277 ] + xx [ 21 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 655 , xx + 421 , xx + 275 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 678 , xx + 16 , xx + 357 ) ; xx [ 16 ] = xx
[ 275 ] + xx [ 357 ] ; xx [ 17 ] = xx [ 360 ] + xx [ 16 ] ; xx [ 18 ] = xx [
276 ] + xx [ 358 ] ; xx [ 23 ] = xx [ 361 ] + xx [ 18 ] ; xx [ 47 ] = xx [
277 ] + xx [ 359 ] ; xx [ 55 ] = xx [ 362 ] + xx [ 47 ] ; xx [ 275 ] = xx [
17 ] ; xx [ 276 ] = xx [ 23 ] ; xx [ 277 ] = xx [ 55 ] ; xx [ 71 ] = ( input
[ 1 ] - ( xx [ 31 ] + xx [ 19 ] * xx [ 46 ] + xx [ 20 ] * xx [ 22 ] +
pm_math_Vector3_dot_ra ( xx + 609 , xx + 275 ) ) ) / xx [ 688 ] ; xx [ 275 ]
= xx [ 31 ] + xx [ 582 ] * xx [ 71 ] ; xx [ 276 ] = xx [ 46 ] + xx [ 651 ] *
xx [ 71 ] ; xx [ 277 ] = xx [ 22 ] + xx [ 32 ] * xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 275 , xx + 357 ) ; xx [ 275 ] =
xx [ 17 ] + xx [ 676 ] * xx [ 71 ] ; xx [ 276 ] = xx [ 23 ] + xx [ 690 ] * xx
[ 71 ] ; xx [ 277 ] = xx [ 55 ] + xx [ 687 ] * xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 275 , xx + 360 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 360 , xx + 275 ) ; xx [ 363 ] = xx
[ 302 ] * state [ 1 ] ; xx [ 364 ] = - ( xx [ 592 ] * state [ 1 ] ) ; xx [
365 ] = - ( xx [ 647 ] * state [ 1 ] ) ; pm_math_Vector3_cross_ra ( xx + 3 ,
xx + 363 , xx + 453 ) ; pm_math_Matrix3x3_xform_ra ( xx + 706 , xx + 453 , xx
+ 3 ) ; xx [ 363 ] = xx [ 12 ] + xx [ 357 ] + xx [ 275 ] + xx [ 3 ] ; xx [
364 ] = xx [ 13 ] + xx [ 358 ] + xx [ 276 ] + xx [ 4 ] ; xx [ 365 ] = xx [ 14
] + xx [ 359 ] + xx [ 277 ] + xx [ 5 ] ; pm_math_Matrix3x3_xform_ra ( xx +
715 , xx + 453 , xx + 275 ) ; xx [ 357 ] = xx [ 360 ] + xx [ 275 ] ; xx [ 358
] = xx [ 361 ] + xx [ 276 ] ; xx [ 359 ] = xx [ 362 ] + xx [ 277 ] ; xx [ 360
] = xx [ 468 ] / xx [ 7 ] ; xx [ 361 ] = xx [ 552 ] / xx [ 7 ] ; xx [ 362 ] =
xx [ 6 ] / xx [ 7 ] ; xx [ 6 ] = 9.81 ; xx [ 480 ] = - 0.1692414246820599 ;
xx [ 481 ] = - 0.3581204221974448 ; xx [ 482 ] = - 0.8093344294744581 ; xx [
483 ] = - 0.4336875426432772 ; xx [ 17 ] = xx [ 9 ] * state [ 0 ] ; xx [ 22 ]
= sin ( xx [ 17 ] ) ; xx [ 507 ] = cos ( xx [ 17 ] ) ; xx [ 508 ] = xx [ 0 ]
* xx [ 22 ] ; xx [ 509 ] = xx [ 1 ] * xx [ 22 ] ; xx [ 510 ] = xx [ 2 ] * xx
[ 22 ] ; pm_math_Quaternion_compose_ra ( xx + 480 , xx + 507 , xx + 511 ) ;
xx [ 17 ] = xx [ 6 ] * xx [ 514 ] ; xx [ 22 ] = xx [ 6 ] * xx [ 512 ] ; xx [
23 ] = xx [ 131 ] * ( xx [ 17 ] * xx [ 511 ] + xx [ 22 ] * xx [ 513 ] ) ; xx
[ 31 ] = xx [ 131 ] * ( xx [ 17 ] * xx [ 514 ] + xx [ 22 ] * xx [ 512 ] ) ;
xx [ 46 ] = xx [ 131 ] * ( xx [ 17 ] * xx [ 513 ] - xx [ 22 ] * xx [ 511 ] )
; xx [ 480 ] = xx [ 23 ] ; xx [ 481 ] = xx [ 6 ] - xx [ 31 ] ; xx [ 482 ] =
xx [ 46 ] ; xx [ 17 ] = pm_math_Vector3_dot_ra ( xx + 360 , xx + 480 ) ; xx [
22 ] = ( input [ 0 ] - ( pm_math_Vector3_dot_ra ( xx + 0 , xx + 363 ) +
pm_math_Vector3_dot_ra ( xx + 694 , xx + 357 ) ) ) / xx [ 7 ] - xx [ 17 ] ;
xx [ 357 ] = xx [ 0 ] * xx [ 22 ] ; xx [ 358 ] = xx [ 1 ] * xx [ 22 ] ; xx [
359 ] = xx [ 2 ] * xx [ 22 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 ,
xx + 357 , xx + 360 ) ; pm_math_Vector3_cross_ra ( xx + 357 , xx + 691 , xx +
363 ) ; xx [ 357 ] = xx [ 23 ] + xx [ 302 ] * xx [ 22 ] + xx [ 453 ] + xx [
363 ] ; xx [ 358 ] = xx [ 454 ] - ( xx [ 592 ] * xx [ 22 ] + xx [ 31 ] ) + xx
[ 364 ] + xx [ 6 ] ; xx [ 359 ] = xx [ 46 ] - xx [ 647 ] * xx [ 22 ] + xx [
455 ] + xx [ 365 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 357
, xx + 363 ) ; xx [ 22 ] = xx [ 71 ] - ( pm_math_Vector3_dot_ra ( xx + 525 ,
xx + 360 ) + pm_math_Vector3_dot_ra ( xx + 700 , xx + 363 ) ) ; xx [ 357 ] =
xx [ 360 ] + xx [ 22 ] + xx [ 421 ] ; xx [ 358 ] = xx [ 361 ] + xx [ 19 ] *
xx [ 22 ] + xx [ 422 ] ; xx [ 359 ] = xx [ 362 ] + xx [ 20 ] * xx [ 22 ] + xx
[ 423 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 357 , xx + 360
) ; pm_math_Vector3_cross_ra ( xx + 357 , xx + 602 , xx + 480 ) ; xx [ 357 ]
= xx [ 363 ] - xx [ 573 ] * xx [ 22 ] + xx [ 10 ] + xx [ 480 ] ; xx [ 358 ] =
xx [ 364 ] + xx [ 579 ] * xx [ 22 ] + xx [ 11 ] + xx [ 481 ] ; xx [ 359 ] =
xx [ 365 ] + xx [ 581 ] * xx [ 22 ] + xx [ 15 ] + xx [ 482 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 357 , xx + 363 ) ; xx [
22 ] = xx [ 72 ] - ( pm_math_Vector3_dot_ra ( xx + 703 , xx + 360 ) +
pm_math_Vector3_dot_ra ( xx + 724 , xx + 363 ) ) ; xx [ 357 ] = xx [ 360 ] -
xx [ 34 ] * xx [ 22 ] + xx [ 418 ] ; xx [ 358 ] = xx [ 361 ] + xx [ 43 ] * xx
[ 22 ] + xx [ 419 ] ; xx [ 359 ] = xx [ 362 ] + xx [ 44 ] * xx [ 22 ] + xx [
420 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 357 , xx + 360 )
; pm_math_Vector3_cross_ra ( xx + 357 , xx + 522 , xx + 480 ) ; xx [ 357 ] =
xx [ 363 ] - xx [ 612 ] * xx [ 22 ] + xx [ 33 ] + xx [ 480 ] ; xx [ 358 ] =
xx [ 364 ] - xx [ 613 ] * xx [ 22 ] + xx [ 35 ] + xx [ 481 ] ; xx [ 359 ] =
xx [ 365 ] + xx [ 614 ] * xx [ 22 ] + xx [ 29 ] + xx [ 482 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 357 , xx + 363 ) ; xx [
22 ] = xx [ 292 ] - ( pm_math_Vector3_dot_ra ( xx + 727 , xx + 360 ) +
pm_math_Vector3_dot_ra ( xx + 730 , xx + 363 ) ) ; xx [ 357 ] = xx [ 360 ] +
xx [ 59 ] * xx [ 22 ] + xx [ 457 ] ; xx [ 358 ] = xx [ 361 ] - xx [ 68 ] * xx
[ 22 ] + xx [ 458 ] ; xx [ 359 ] = xx [ 362 ] - xx [ 69 ] * xx [ 22 ] + xx [
459 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 357 , xx + 360 )
; xx [ 55 ] = xx [ 363 ] - xx [ 469 ] * xx [ 22 ] + xx [ 58 ] ;
pm_math_Vector3_cross_ra ( xx + 357 , xx + 447 , xx + 480 ) ; xx [ 71 ] = xx
[ 364 ] + xx [ 554 ] * xx [ 22 ] + xx [ 60 ] ; xx [ 72 ] = xx [ 365 ] - xx [
555 ] * xx [ 22 ] + xx [ 53 ] ; xx [ 363 ] = xx [ 55 ] + xx [ 480 ] ; xx [
364 ] = xx [ 71 ] + xx [ 481 ] ; xx [ 365 ] = xx [ 72 ] + xx [ 482 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 363 , xx + 480 ) ; xx [
22 ] = xx [ 257 ] + pm_math_Vector3_dot_ra ( xx + 733 , xx + 360 ) +
pm_math_Vector3_dot_ra ( xx + 736 , xx + 480 ) ; xx [ 363 ] = xx [ 360 ] + xx
[ 84 ] * xx [ 22 ] + xx [ 430 ] ; xx [ 364 ] = xx [ 361 ] - xx [ 93 ] * xx [
22 ] + xx [ 431 ] ; xx [ 365 ] = xx [ 362 ] - xx [ 94 ] * xx [ 22 ] + xx [
432 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 363 , xx + 360 )
; xx [ 82 ] = xx [ 360 ] + xx [ 346 ] ; xx [ 256 ] = xx [ 361 ] - xx [ 349 ]
; xx [ 257 ] = xx [ 256 ] * xx [ 133 ] - xx [ 82 ] * xx [ 137 ] ; xx [ 285 ]
= xx [ 82 ] + xx [ 131 ] * xx [ 257 ] * xx [ 137 ] ; xx [ 292 ] = xx [ 256 ]
- xx [ 131 ] * xx [ 257 ] * xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 363
, xx + 226 , xx + 487 ) ; xx [ 363 ] = xx [ 480 ] - xx [ 352 ] * xx [ 22 ] +
xx [ 85 ] + xx [ 487 ] ; xx [ 364 ] = xx [ 481 ] - xx [ 353 ] * xx [ 22 ] +
xx [ 95 ] + xx [ 488 ] ; xx [ 365 ] = xx [ 482 ] - xx [ 354 ] * xx [ 22 ] +
xx [ 89 ] + xx [ 489 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx +
363 , xx + 480 ) ; xx [ 257 ] = xx [ 127 ] - ( pm_math_Vector3_dot_ra ( xx +
531 , xx + 360 ) + pm_math_Vector3_dot_ra ( xx + 739 , xx + 480 ) ) ; xx [
127 ] = xx [ 362 ] + xx [ 257 ] ; xx [ 295 ] = xx [ 127 ] - xx [ 131 ] * ( xx
[ 127 ] * xx [ 133 ] * xx [ 133 ] + xx [ 127 ] * xx [ 137 ] * xx [ 137 ] ) ;
xx [ 360 ] = xx [ 285 ] ; xx [ 361 ] = xx [ 292 ] ; xx [ 362 ] = xx [ 295 ] ;
xx [ 305 ] = xx [ 480 ] + xx [ 274 ] * xx [ 257 ] + xx [ 110 ] ; xx [ 363 ] =
xx [ 82 ] ; xx [ 364 ] = xx [ 256 ] ; xx [ 365 ] = xx [ 127 ] ;
pm_math_Vector3_cross_ra ( xx + 363 , xx + 316 , xx + 487 ) ; xx [ 307 ] = xx
[ 305 ] + xx [ 487 ] ; xx [ 308 ] = xx [ 481 ] + xx [ 287 ] * xx [ 257 ] + xx
[ 268 ] ; xx [ 321 ] = xx [ 308 ] + xx [ 488 ] ; xx [ 322 ] = xx [ 321 ] * xx
[ 133 ] - xx [ 307 ] * xx [ 137 ] ; xx [ 329 ] = xx [ 307 ] + xx [ 131 ] * xx
[ 322 ] * xx [ 137 ] ; xx [ 307 ] = xx [ 321 ] - xx [ 131 ] * xx [ 322 ] * xx
[ 133 ] ; xx [ 321 ] = xx [ 482 ] + xx [ 103 ] ; xx [ 322 ] = xx [ 321 ] + xx
[ 489 ] ; xx [ 331 ] = xx [ 322 ] - xx [ 131 ] * ( xx [ 322 ] * xx [ 133 ] *
xx [ 133 ] + xx [ 322 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 480 ] = xx [ 329 ]
; xx [ 481 ] = xx [ 307 ] ; xx [ 482 ] = xx [ 331 ] ; xx [ 322 ] = xx [ 140 ]
+ pm_math_Vector3_dot_ra ( xx + 462 , xx + 360 ) + pm_math_Vector3_dot_ra (
xx + 745 , xx + 480 ) ; xx [ 140 ] = xx [ 178 ] * xx [ 178 ] ; xx [ 332 ] =
xx [ 131 ] * ( xx [ 140 ] + xx [ 179 ] * xx [ 179 ] ) - xx [ 200 ] ; xx [ 334
] = state [ 13 ] - xx [ 131 ] * ( state [ 13 ] * xx [ 133 ] * xx [ 133 ] +
state [ 13 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 337 ] = xx [ 293 ] * state [
13 ] * state [ 13 ] ; xx [ 343 ] = xx [ 131 ] * xx [ 344 ] * state [ 13 ] *
state [ 13 ] ; xx [ 344 ] = xx [ 320 ] * state [ 19 ] * state [ 19 ] ; xx [
348 ] = xx [ 131 ] * xx [ 326 ] * state [ 19 ] * state [ 19 ] ; xx [ 326 ] =
xx [ 131 ] * xx [ 332 ] * xx [ 334 ] * state [ 19 ] - ( xx [ 337 ] * xx [ 320
] + xx [ 343 ] * xx [ 327 ] + xx [ 344 ] * xx [ 293 ] + xx [ 348 ] * xx [ 375
] ) ; xx [ 360 ] = xx [ 179 ] * xx [ 180 ] ; xx [ 361 ] = xx [ 181 ] * xx [
178 ] ; xx [ 362 ] = xx [ 131 ] * ( xx [ 360 ] - xx [ 361 ] ) ; xx [ 366 ] =
xx [ 335 ] * state [ 19 ] * state [ 19 ] ; xx [ 369 ] = xx [ 131 ] * xx [ 362
] * xx [ 334 ] * state [ 19 ] - ( xx [ 327 ] * xx [ 337 ] + xx [ 343 ] * xx [
335 ] + xx [ 348 ] * xx [ 293 ] + xx [ 375 ] * xx [ 366 ] ) ; xx [ 372 ] = xx
[ 179 ] * xx [ 181 ] ; xx [ 379 ] = xx [ 180 ] * xx [ 178 ] ; xx [ 392 ] = xx
[ 131 ] * ( xx [ 360 ] + xx [ 361 ] ) ; xx [ 360 ] = xx [ 131 ] * ( xx [ 140
] + xx [ 180 ] * xx [ 180 ] ) - xx [ 200 ] ; xx [ 361 ] = xx [ 179 ] * xx [
178 ] ; xx [ 393 ] = xx [ 181 ] * xx [ 180 ] ; xx [ 396 ] = xx [ 131 ] * ( xx
[ 379 ] - xx [ 372 ] ) ; xx [ 402 ] = xx [ 131 ] * ( xx [ 393 ] + xx [ 361 ]
) ; xx [ 507 ] = xx [ 332 ] ; xx [ 508 ] = xx [ 362 ] ; xx [ 509 ] = - ( xx [
131 ] * ( xx [ 372 ] + xx [ 379 ] ) ) ; xx [ 510 ] = xx [ 392 ] ; xx [ 511 ]
= xx [ 360 ] ; xx [ 512 ] = xx [ 131 ] * ( xx [ 361 ] - xx [ 393 ] ) ; xx [
513 ] = xx [ 396 ] ; xx [ 514 ] = - xx [ 402 ] ; xx [ 515 ] = xx [ 131 ] * (
xx [ 140 ] + xx [ 181 ] * xx [ 181 ] ) - xx [ 200 ] ; xx [ 140 ] = xx [ 158 ]
* xx [ 235 ] - xx [ 145 ] * xx [ 241 ] ; xx [ 332 ] = xx [ 154 ] * xx [ 235 ]
+ xx [ 145 ] * xx [ 238 ] ; xx [ 361 ] = xx [ 158 ] * xx [ 238 ] + xx [ 154 ]
* xx [ 241 ] ; xx [ 362 ] = xx [ 158 ] * xx [ 242 ] - xx [ 145 ] * xx [ 245 ]
; xx [ 372 ] = xx [ 154 ] * xx [ 242 ] + xx [ 145 ] * xx [ 237 ] ; xx [ 379 ]
= xx [ 158 ] * xx [ 237 ] + xx [ 154 ] * xx [ 245 ] ; xx [ 393 ] = xx [ 158 ]
* xx [ 246 ] - xx [ 145 ] * xx [ 248 ] ; xx [ 407 ] = xx [ 154 ] * xx [ 246 ]
+ xx [ 145 ] * xx [ 247 ] ; xx [ 246 ] = xx [ 158 ] * xx [ 247 ] + xx [ 154 ]
* xx [ 248 ] ; xx [ 535 ] = - ( xx [ 158 ] * xx [ 140 ] + xx [ 154 ] * xx [
332 ] ) ; xx [ 536 ] = - ( xx [ 145 ] * xx [ 332 ] + xx [ 158 ] * xx [ 361 ]
) ; xx [ 537 ] = xx [ 145 ] * xx [ 140 ] - xx [ 154 ] * xx [ 361 ] ; xx [ 538
] = - ( xx [ 158 ] * xx [ 362 ] + xx [ 154 ] * xx [ 372 ] ) ; xx [ 539 ] = -
( xx [ 145 ] * xx [ 372 ] + xx [ 158 ] * xx [ 379 ] ) ; xx [ 540 ] = xx [ 145
] * xx [ 362 ] - xx [ 154 ] * xx [ 379 ] ; xx [ 541 ] = - ( xx [ 158 ] * xx [
393 ] + xx [ 154 ] * xx [ 407 ] ) ; xx [ 542 ] = - ( xx [ 145 ] * xx [ 407 ]
+ xx [ 158 ] * xx [ 246 ] ) ; xx [ 543 ] = xx [ 145 ] * xx [ 393 ] - xx [ 154
] * xx [ 246 ] ; pm_math_Matrix3x3_compose_ra ( xx + 507 , xx + 535 , xx +
556 ) ; xx [ 140 ] = xx [ 187 ] * xx [ 187 ] ; xx [ 145 ] = xx [ 188 ] * xx [
189 ] ; xx [ 154 ] = xx [ 187 ] * xx [ 190 ] ; xx [ 158 ] = xx [ 188 ] * xx [
190 ] ; xx [ 246 ] = xx [ 187 ] * xx [ 189 ] ; xx [ 247 ] = xx [ 189 ] * xx [
190 ] ; xx [ 248 ] = xx [ 187 ] * xx [ 188 ] ; xx [ 507 ] = xx [ 131 ] * ( xx
[ 140 ] + xx [ 188 ] * xx [ 188 ] ) - xx [ 200 ] ; xx [ 508 ] = xx [ 131 ] *
( xx [ 145 ] - xx [ 154 ] ) ; xx [ 509 ] = xx [ 131 ] * ( xx [ 158 ] + xx [
246 ] ) ; xx [ 510 ] = xx [ 131 ] * ( xx [ 145 ] + xx [ 154 ] ) ; xx [ 511 ]
= xx [ 131 ] * ( xx [ 140 ] + xx [ 189 ] * xx [ 189 ] ) - xx [ 200 ] ; xx [
512 ] = xx [ 131 ] * ( xx [ 247 ] - xx [ 248 ] ) ; xx [ 513 ] = xx [ 131 ] *
( xx [ 158 ] - xx [ 246 ] ) ; xx [ 514 ] = xx [ 131 ] * ( xx [ 247 ] + xx [
248 ] ) ; xx [ 515 ] = xx [ 131 ] * ( xx [ 140 ] + xx [ 190 ] * xx [ 190 ] )
- xx [ 200 ] ; xx [ 140 ] = xx [ 334 ] - state [ 19 ] ; xx [ 145 ] = xx [ 140
] * xx [ 162 ] ; xx [ 154 ] = xx [ 140 ] * xx [ 163 ] ; xx [ 246 ] = xx [ 131
] * ( xx [ 145 ] * xx [ 164 ] - xx [ 154 ] * xx [ 161 ] ) ; xx [ 247 ] = xx [
131 ] * ( xx [ 145 ] * xx [ 161 ] + xx [ 154 ] * xx [ 164 ] ) ; xx [ 248 ] =
xx [ 140 ] - xx [ 131 ] * ( xx [ 145 ] * xx [ 162 ] + xx [ 154 ] * xx [ 163 ]
) ; pm_math_Matrix3x3_postCross_ra ( xx + 507 , xx + 246 , xx + 535 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 535 , xx + 165 , xx + 507 ) ; xx [ 145
] = xx [ 342 ] * state [ 13 ] * state [ 13 ] ; xx [ 154 ] = xx [ 131 ] *
state [ 13 ] * xx [ 486 ] * state [ 13 ] ; xx [ 158 ] = xx [ 131 ] * xx [ 392
] * xx [ 334 ] * state [ 19 ] - ( xx [ 327 ] * xx [ 145 ] - xx [ 154 ] * xx [
320 ] + xx [ 348 ] * xx [ 342 ] - xx [ 324 ] * xx [ 344 ] ) ; xx [ 165 ] = xx
[ 131 ] * xx [ 360 ] * xx [ 334 ] * state [ 19 ] - ( xx [ 145 ] * xx [ 335 ]
- xx [ 154 ] * xx [ 327 ] + xx [ 366 ] * xx [ 342 ] - xx [ 348 ] * xx [ 324 ]
) ; xx [ 166 ] = xx [ 131 ] * xx [ 494 ] * state [ 13 ] * state [ 13 ] ; xx [
167 ] = xx [ 131 ] * state [ 13 ] * xx [ 497 ] * state [ 13 ] ; xx [ 246 ] =
xx [ 131 ] * xx [ 396 ] * xx [ 334 ] * state [ 19 ] - ( xx [ 166 ] * xx [ 320
] - xx [ 167 ] * xx [ 327 ] + xx [ 496 ] * xx [ 344 ] - xx [ 348 ] * xx [ 518
] ) ; xx [ 247 ] = xx [ 131 ] * xx [ 402 ] * xx [ 334 ] * state [ 19 ] + xx [
166 ] * xx [ 327 ] - xx [ 167 ] * xx [ 335 ] + xx [ 348 ] * xx [ 496 ] - xx [
518 ] * xx [ 366 ] ; xx [ 535 ] = xx [ 326 ] * xx [ 235 ] + xx [ 242 ] * xx [
369 ] + xx [ 556 ] + xx [ 131 ] * xx [ 507 ] ; xx [ 536 ] = xx [ 238 ] * xx [
326 ] + xx [ 369 ] * xx [ 237 ] + xx [ 557 ] + xx [ 131 ] * xx [ 508 ] ; xx [
537 ] = xx [ 241 ] * xx [ 326 ] + xx [ 245 ] * xx [ 369 ] + xx [ 558 ] + xx [
131 ] * xx [ 509 ] ; xx [ 538 ] = xx [ 158 ] * xx [ 235 ] + xx [ 242 ] * xx [
165 ] + xx [ 559 ] + xx [ 131 ] * xx [ 510 ] ; xx [ 539 ] = xx [ 238 ] * xx [
158 ] + xx [ 165 ] * xx [ 237 ] + xx [ 560 ] + xx [ 131 ] * xx [ 511 ] ; xx [
540 ] = xx [ 241 ] * xx [ 158 ] + xx [ 245 ] * xx [ 165 ] + xx [ 561 ] + xx [
131 ] * xx [ 512 ] ; xx [ 541 ] = xx [ 246 ] * xx [ 235 ] - xx [ 242 ] * xx [
247 ] + xx [ 562 ] + xx [ 131 ] * xx [ 513 ] ; xx [ 542 ] = xx [ 238 ] * xx [
246 ] - xx [ 247 ] * xx [ 237 ] + xx [ 563 ] + xx [ 131 ] * xx [ 514 ] ; xx [
543 ] = xx [ 241 ] * xx [ 246 ] - xx [ 245 ] * xx [ 247 ] + xx [ 564 ] + xx [
131 ] * xx [ 515 ] ; pm_math_Matrix3x3_xform_ra ( xx + 535 , xx + 208 , xx +
360 ) ; xx [ 208 ] = xx [ 285 ] - xx [ 152 ] ; xx [ 209 ] = xx [ 292 ] + xx [
151 ] ; xx [ 210 ] = xx [ 295 ] + xx [ 322 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 208 , xx + 480 ) ;
pm_math_Vector3_cross_ra ( xx + 208 , xx + 223 , xx + 486 ) ; xx [ 208 ] = xx
[ 329 ] + xx [ 289 ] * xx [ 322 ] + xx [ 132 ] + xx [ 486 ] ; xx [ 209 ] = xx
[ 307 ] - xx [ 232 ] * xx [ 322 ] + xx [ 169 ] + xx [ 487 ] ; xx [ 210 ] = xx
[ 331 ] + xx [ 157 ] + xx [ 488 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
161 , xx + 208 , xx + 486 ) ; xx [ 208 ] = xx [ 150 ] +
pm_math_Vector3_dot_ra ( xx + 465 , xx + 480 ) + pm_math_Vector3_dot_ra ( xx
+ 748 , xx + 486 ) ; pm_math_Matrix3x3_xform_ra ( xx + 535 , xx + 697 , xx +
480 ) ; xx [ 150 ] = state [ 13 ] * state [ 13 ] ; xx [ 209 ] = xx [ 287 ] *
xx [ 120 ] - xx [ 274 ] * xx [ 118 ] ; xx [ 486 ] = xx [ 107 ] ; xx [ 487 ] =
xx [ 106 ] ; xx [ 488 ] = xx [ 209 ] ; pm_math_Vector3_cross_ra ( xx + 204 ,
xx + 486 , xx + 507 ) ; xx [ 106 ] = xx [ 150 ] * ( xx [ 131 ] * ( xx [ 507 ]
+ xx [ 207 ] ) - xx [ 287 ] ) ; xx [ 107 ] = state [ 19 ] * state [ 19 ] ; xx
[ 207 ] = xx [ 107 ] * xx [ 281 ] ; xx [ 210 ] = xx [ 107 ] * xx [ 284 ] ; xx
[ 107 ] = xx [ 210 ] * xx [ 116 ] ; xx [ 235 ] = xx [ 207 ] * xx [ 116 ] ; xx
[ 237 ] = xx [ 210 ] * xx [ 118 ] + xx [ 207 ] * xx [ 120 ] ; xx [ 486 ] = xx
[ 107 ] ; xx [ 487 ] = - xx [ 235 ] ; xx [ 488 ] = - xx [ 237 ] ;
pm_math_Vector3_cross_ra ( xx + 204 , xx + 486 , xx + 510 ) ; xx [ 238 ] =
state [ 19 ] * ( xx [ 261 ] - xx [ 289 ] ) * state [ 13 ] ; xx [ 241 ] = xx [
238 ] * xx [ 116 ] ; xx [ 242 ] = ( xx [ 232 ] - xx [ 270 ] ) * state [ 19 ]
* state [ 13 ] ; xx [ 245 ] = xx [ 242 ] * xx [ 116 ] ; xx [ 248 ] = xx [ 242
] * xx [ 120 ] - xx [ 238 ] * xx [ 118 ] ; xx [ 486 ] = xx [ 241 ] ; xx [ 487
] = xx [ 245 ] ; xx [ 488 ] = xx [ 248 ] ; pm_math_Vector3_cross_ra ( xx +
204 , xx + 486 , xx + 513 ) ; xx [ 261 ] = state [ 21 ] * state [ 21 ] ; xx [
486 ] = - 0.02496670917137174 ; xx [ 487 ] = - 1.394276345613948e-3 ; xx [
488 ] = 5.002236588491726e-3 ; pm_math_Quaternion_xform_ra ( xx + 161 , xx +
486 , xx + 528 ) ; xx [ 486 ] = xx [ 261 ] * xx [ 528 ] ; xx [ 487 ] = xx [
261 ] * xx [ 529 ] ; xx [ 488 ] = xx [ 261 ] * xx [ 530 ] ;
pm_math_Quaternion_xform_ra ( xx + 183 , xx + 486 , xx + 528 ) ; xx [ 183 ] =
xx [ 179 ] ; xx [ 184 ] = xx [ 180 ] ; xx [ 185 ] = xx [ 182 ] ; xx [ 182 ] =
state [ 21 ] * xx [ 760 ] * xx [ 140 ] ; xx [ 186 ] = xx [ 182 ] * xx [ 181 ]
; xx [ 261 ] = state [ 21 ] * xx [ 761 ] * xx [ 140 ] ; xx [ 140 ] = xx [ 261
] * xx [ 181 ] ; xx [ 181 ] = xx [ 182 ] * xx [ 179 ] + xx [ 261 ] * xx [ 180
] ; xx [ 486 ] = xx [ 186 ] ; xx [ 487 ] = xx [ 140 ] ; xx [ 488 ] = xx [ 181
] ; pm_math_Vector3_cross_ra ( xx + 183 , xx + 486 , xx + 535 ) ; xx [ 179 ]
= xx [ 150 ] * ( xx [ 274 ] + xx [ 131 ] * ( xx [ 114 ] + xx [ 508 ] ) ) ; xx
[ 114 ] = xx [ 131 ] * ( xx [ 209 ] * xx [ 109 ] + xx [ 509 ] ) * xx [ 150 ]
; xx [ 150 ] = 4.0 ; xx [ 183 ] = xx [ 480 ] + xx [ 337 ] * xx [ 281 ] - xx [
343 ] * xx [ 222 ] + xx [ 106 ] + xx [ 207 ] + xx [ 131 ] * ( xx [ 510 ] + xx
[ 107 ] * xx [ 109 ] ) + xx [ 131 ] * ( xx [ 131 ] * ( xx [ 513 ] + xx [ 241
] * xx [ 109 ] ) - xx [ 242 ] ) - ( xx [ 326 ] * xx [ 214 ] + xx [ 369 ] * xx
[ 221 ] ) + xx [ 528 ] + xx [ 131 ] * ( xx [ 131 ] * ( xx [ 535 ] - xx [ 186
] * xx [ 178 ] ) - xx [ 261 ] ) ; xx [ 184 ] = xx [ 481 ] + xx [ 179 ] - ( xx
[ 154 ] * xx [ 281 ] + xx [ 145 ] * xx [ 222 ] ) + xx [ 210 ] + xx [ 131 ] *
( xx [ 511 ] - xx [ 235 ] * xx [ 109 ] ) + xx [ 131 ] * ( xx [ 238 ] + xx [
131 ] * ( xx [ 514 ] + xx [ 245 ] * xx [ 109 ] ) ) - ( xx [ 158 ] * xx [ 214
] + xx [ 165 ] * xx [ 221 ] ) + xx [ 529 ] + xx [ 131 ] * ( xx [ 182 ] + xx [
131 ] * ( xx [ 536 ] - xx [ 140 ] * xx [ 178 ] ) ) ; xx [ 185 ] = xx [ 482 ]
+ xx [ 247 ] * xx [ 221 ] - xx [ 246 ] * xx [ 214 ] + xx [ 166 ] * xx [ 281 ]
+ xx [ 167 ] * xx [ 222 ] + xx [ 114 ] + xx [ 131 ] * ( xx [ 512 ] - xx [ 237
] * xx [ 109 ] ) + xx [ 150 ] * ( xx [ 109 ] * xx [ 248 ] + xx [ 515 ] ) + xx
[ 530 ] + xx [ 150 ] * ( xx [ 537 ] - xx [ 181 ] * xx [ 178 ] ) ; xx [ 107 ]
= xx [ 256 ] * xx [ 376 ] ; xx [ 140 ] = xx [ 82 ] * xx [ 376 ] ; xx [ 158 ]
= xx [ 82 ] + xx [ 131 ] * ( xx [ 107 ] * xx [ 345 ] - xx [ 140 ] * xx [ 376
] ) ; xx [ 82 ] = xx [ 256 ] - xx [ 131 ] * ( xx [ 140 ] * xx [ 345 ] + xx [
107 ] * xx [ 376 ] ) ; xx [ 180 ] = xx [ 158 ] ; xx [ 181 ] = xx [ 82 ] ; xx
[ 182 ] = xx [ 127 ] ; pm_math_Vector3_cross_ra ( xx + 363 , xx + 504 , xx +
245 ) ; xx [ 107 ] = xx [ 305 ] + xx [ 245 ] ; xx [ 140 ] = xx [ 308 ] + xx [
246 ] ; xx [ 165 ] = xx [ 140 ] * xx [ 376 ] ; xx [ 178 ] = xx [ 107 ] * xx [
376 ] ; xx [ 186 ] = xx [ 107 ] + xx [ 131 ] * ( xx [ 165 ] * xx [ 345 ] - xx
[ 178 ] * xx [ 376 ] ) ; xx [ 107 ] = xx [ 140 ] - xx [ 131 ] * ( xx [ 178 ]
* xx [ 345 ] + xx [ 165 ] * xx [ 376 ] ) ; xx [ 140 ] = xx [ 321 ] + xx [ 247
] ; xx [ 245 ] = xx [ 186 ] ; xx [ 246 ] = xx [ 107 ] ; xx [ 247 ] = xx [ 140
] ; xx [ 165 ] = xx [ 263 ] + pm_math_Vector3_dot_ra ( xx + 844 , xx + 180 )
+ pm_math_Vector3_dot_ra ( xx + 855 , xx + 245 ) ; xx [ 178 ] = xx [ 131 ] *
xx [ 478 ] * state [ 15 ] * state [ 15 ] ; xx [ 180 ] = xx [ 476 ] * state [
15 ] * state [ 15 ] ; xx [ 181 ] = xx [ 356 ] * xx [ 328 ] ; xx [ 182 ] = xx
[ 319 ] * xx [ 397 ] ; xx [ 207 ] = xx [ 181 ] - xx [ 182 ] ; xx [ 209 ] = xx
[ 479 ] * xx [ 337 ] - xx [ 343 ] * xx [ 476 ] + xx [ 178 ] * xx [ 293 ] - xx
[ 375 ] * xx [ 180 ] - xx [ 150 ] * xx [ 207 ] * state [ 13 ] * state [ 15 ]
; xx [ 210 ] = xx [ 319 ] * xx [ 319 ] ; xx [ 214 ] = xx [ 131 ] * ( xx [ 210
] + xx [ 328 ] * xx [ 328 ] ) - xx [ 200 ] ; xx [ 221 ] = xx [ 337 ] * xx [
476 ] + xx [ 343 ] * xx [ 479 ] + xx [ 180 ] * xx [ 293 ] + xx [ 178 ] * xx [
375 ] + xx [ 131 ] * xx [ 214 ] * state [ 13 ] * state [ 15 ] ; xx [ 222 ] =
xx [ 397 ] * xx [ 328 ] ; xx [ 235 ] = xx [ 319 ] * xx [ 356 ] ; xx [ 237 ] =
xx [ 181 ] + xx [ 182 ] ; xx [ 181 ] = xx [ 131 ] * ( xx [ 210 ] + xx [ 356 ]
* xx [ 356 ] ) - xx [ 200 ] ; xx [ 182 ] = xx [ 356 ] * xx [ 397 ] ; xx [ 238
] = xx [ 319 ] * xx [ 328 ] ; xx [ 241 ] = xx [ 222 ] - xx [ 235 ] ; xx [ 242
] = xx [ 182 ] + xx [ 238 ] ; xx [ 507 ] = xx [ 214 ] ; xx [ 508 ] = xx [ 131
] * xx [ 207 ] ; xx [ 509 ] = xx [ 131 ] * ( xx [ 222 ] + xx [ 235 ] ) ; xx [
510 ] = xx [ 131 ] * xx [ 237 ] ; xx [ 511 ] = xx [ 181 ] ; xx [ 512 ] = xx [
131 ] * ( xx [ 182 ] - xx [ 238 ] ) ; xx [ 513 ] = xx [ 131 ] * xx [ 241 ] ;
xx [ 514 ] = xx [ 131 ] * xx [ 242 ] ; xx [ 515 ] = xx [ 131 ] * ( xx [ 210 ]
+ xx [ 397 ] * xx [ 397 ] ) - xx [ 200 ] ; xx [ 182 ] = xx [ 175 ] * xx [ 386
] + xx [ 290 ] * xx [ 378 ] ; xx [ 207 ] = xx [ 278 ] * xx [ 378 ] + xx [ 175
] * xx [ 382 ] ; xx [ 210 ] = xx [ 278 ] * xx [ 386 ] - xx [ 290 ] * xx [ 382
] ; xx [ 214 ] = xx [ 175 ] * xx [ 394 ] + xx [ 290 ] * xx [ 387 ] ; xx [ 222
] = xx [ 278 ] * xx [ 387 ] + xx [ 175 ] * xx [ 380 ] ; xx [ 235 ] = xx [ 278
] * xx [ 394 ] - xx [ 290 ] * xx [ 380 ] ; xx [ 238 ] = xx [ 175 ] * xx [ 385
] + xx [ 290 ] * xx [ 395 ] ; xx [ 245 ] = xx [ 278 ] * xx [ 395 ] + xx [ 175
] * xx [ 384 ] ; xx [ 246 ] = xx [ 278 ] * xx [ 385 ] - xx [ 290 ] * xx [ 384
] ; xx [ 535 ] = - ( xx [ 290 ] * xx [ 182 ] + xx [ 278 ] * xx [ 207 ] ) ; xx
[ 536 ] = xx [ 290 ] * xx [ 210 ] - xx [ 175 ] * xx [ 207 ] ; xx [ 537 ] = -
( xx [ 278 ] * xx [ 210 ] + xx [ 175 ] * xx [ 182 ] ) ; xx [ 538 ] = - ( xx [
290 ] * xx [ 214 ] + xx [ 278 ] * xx [ 222 ] ) ; xx [ 539 ] = xx [ 290 ] * xx
[ 235 ] - xx [ 175 ] * xx [ 222 ] ; xx [ 540 ] = - ( xx [ 278 ] * xx [ 235 ]
+ xx [ 175 ] * xx [ 214 ] ) ; xx [ 541 ] = - ( xx [ 290 ] * xx [ 238 ] + xx [
278 ] * xx [ 245 ] ) ; xx [ 542 ] = xx [ 290 ] * xx [ 246 ] - xx [ 175 ] * xx
[ 245 ] ; xx [ 543 ] = - ( xx [ 278 ] * xx [ 246 ] + xx [ 175 ] * xx [ 238 ]
) ; pm_math_Matrix3x3_compose_ra ( xx + 507 , xx + 535 , xx + 556 ) ; xx [
175 ] = xx [ 770 ] * xx [ 770 ] ; xx [ 182 ] = xx [ 771 ] * xx [ 772 ] ; xx [
207 ] = xx [ 770 ] * xx [ 773 ] ; xx [ 210 ] = xx [ 771 ] * xx [ 773 ] ; xx [
214 ] = xx [ 770 ] * xx [ 772 ] ; xx [ 222 ] = xx [ 772 ] * xx [ 773 ] ; xx [
235 ] = xx [ 770 ] * xx [ 771 ] ; xx [ 507 ] = xx [ 131 ] * ( xx [ 175 ] + xx
[ 771 ] * xx [ 771 ] ) - xx [ 200 ] ; xx [ 508 ] = xx [ 131 ] * ( xx [ 182 ]
- xx [ 207 ] ) ; xx [ 509 ] = xx [ 131 ] * ( xx [ 210 ] + xx [ 214 ] ) ; xx [
510 ] = xx [ 131 ] * ( xx [ 182 ] + xx [ 207 ] ) ; xx [ 511 ] = xx [ 131 ] *
( xx [ 175 ] + xx [ 772 ] * xx [ 772 ] ) - xx [ 200 ] ; xx [ 512 ] = xx [ 131
] * ( xx [ 222 ] - xx [ 235 ] ) ; xx [ 513 ] = xx [ 131 ] * ( xx [ 210 ] - xx
[ 214 ] ) ; xx [ 514 ] = xx [ 131 ] * ( xx [ 222 ] + xx [ 235 ] ) ; xx [ 515
] = xx [ 131 ] * ( xx [ 175 ] + xx [ 773 ] * xx [ 773 ] ) - xx [ 200 ] ; xx [
175 ] = state [ 13 ] + state [ 15 ] ; xx [ 182 ] = xx [ 175 ] * xx [ 389 ] ;
xx [ 200 ] = xx [ 175 ] * xx [ 390 ] ; xx [ 245 ] = xx [ 131 ] * ( xx [ 182 ]
* xx [ 391 ] - xx [ 200 ] * xx [ 388 ] ) ; xx [ 246 ] = xx [ 131 ] * ( xx [
182 ] * xx [ 388 ] + xx [ 200 ] * xx [ 391 ] ) ; xx [ 247 ] = xx [ 175 ] - xx
[ 131 ] * ( xx [ 182 ] * xx [ 389 ] + xx [ 200 ] * xx [ 390 ] ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 507 , xx + 245 , xx + 535 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 535 , xx + 742 , xx + 507 ) ; xx [ 182
] = xx [ 154 ] * xx [ 479 ] + xx [ 145 ] * xx [ 476 ] + xx [ 178 ] * xx [ 324
] + xx [ 180 ] * xx [ 342 ] + xx [ 131 ] * xx [ 181 ] * state [ 13 ] * state
[ 15 ] ; xx [ 181 ] = xx [ 479 ] * xx [ 145 ] - xx [ 154 ] * xx [ 476 ] + xx
[ 178 ] * xx [ 342 ] - xx [ 324 ] * xx [ 180 ] + xx [ 150 ] * state [ 13 ] *
xx [ 237 ] * state [ 15 ] ; xx [ 200 ] = xx [ 166 ] * xx [ 479 ] + xx [ 167 ]
* xx [ 476 ] + xx [ 178 ] * xx [ 496 ] + xx [ 518 ] * xx [ 180 ] - xx [ 150 ]
* state [ 13 ] * xx [ 242 ] * state [ 15 ] ; xx [ 207 ] = xx [ 166 ] * xx [
476 ] - xx [ 167 ] * xx [ 479 ] + xx [ 496 ] * xx [ 180 ] - xx [ 178 ] * xx [
518 ] + xx [ 150 ] * xx [ 241 ] * state [ 13 ] * state [ 15 ] ; xx [ 535 ] =
xx [ 387 ] * xx [ 209 ] - xx [ 378 ] * xx [ 221 ] + xx [ 556 ] + xx [ 131 ] *
xx [ 507 ] ; xx [ 536 ] = xx [ 380 ] * xx [ 209 ] - xx [ 382 ] * xx [ 221 ] +
xx [ 557 ] + xx [ 131 ] * xx [ 508 ] ; xx [ 537 ] = xx [ 394 ] * xx [ 209 ] -
xx [ 386 ] * xx [ 221 ] + xx [ 558 ] + xx [ 131 ] * xx [ 509 ] ; xx [ 538 ] =
xx [ 559 ] - ( xx [ 387 ] * xx [ 182 ] + xx [ 378 ] * xx [ 181 ] ) + xx [ 131
] * xx [ 510 ] ; xx [ 539 ] = xx [ 560 ] - ( xx [ 380 ] * xx [ 182 ] + xx [
382 ] * xx [ 181 ] ) + xx [ 131 ] * xx [ 511 ] ; xx [ 540 ] = xx [ 561 ] - (
xx [ 394 ] * xx [ 182 ] + xx [ 386 ] * xx [ 181 ] ) + xx [ 131 ] * xx [ 512 ]
; xx [ 541 ] = xx [ 387 ] * xx [ 200 ] - xx [ 378 ] * xx [ 207 ] + xx [ 562 ]
+ xx [ 131 ] * xx [ 513 ] ; xx [ 542 ] = xx [ 380 ] * xx [ 200 ] - xx [ 382 ]
* xx [ 207 ] + xx [ 563 ] + xx [ 131 ] * xx [ 514 ] ; xx [ 543 ] = xx [ 394 ]
* xx [ 200 ] - xx [ 386 ] * xx [ 207 ] + xx [ 564 ] + xx [ 131 ] * xx [ 515 ]
; pm_math_Matrix3x3_xform_ra ( xx + 535 , xx + 757 , xx + 245 ) ; xx [ 363 ]
= xx [ 158 ] + xx [ 272 ] ; xx [ 364 ] = xx [ 82 ] - xx [ 273 ] ; xx [ 365 ]
= xx [ 127 ] - xx [ 165 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 388 ,
xx + 363 , xx + 378 ) ; pm_math_Vector3_cross_ra ( xx + 363 , xx + 438 , xx +
384 ) ; xx [ 363 ] = xx [ 186 ] + xx [ 401 ] * xx [ 165 ] + xx [ 173 ] + xx [
384 ] ; xx [ 364 ] = xx [ 107 ] - xx [ 471 ] * xx [ 165 ] + xx [ 315 ] + xx [
385 ] ; xx [ 365 ] = xx [ 140 ] + xx [ 128 ] + xx [ 386 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 363 , xx + 384 ) ; xx [
82 ] = xx [ 271 ] + pm_math_Vector3_dot_ra ( xx + 786 , xx + 378 ) +
pm_math_Vector3_dot_ra ( xx + 861 , xx + 384 ) ; pm_math_Matrix3x3_xform_ra (
xx + 535 , xx + 774 , xx + 363 ) ; xx [ 107 ] = state [ 15 ] * state [ 15 ] ;
xx [ 127 ] = xx [ 107 ] * xx [ 501 ] ; xx [ 140 ] = xx [ 107 ] * xx [ 499 ] ;
xx [ 107 ] = xx [ 140 ] * xx [ 116 ] ; xx [ 158 ] = xx [ 127 ] * xx [ 116 ] ;
xx [ 178 ] = xx [ 140 ] * xx [ 118 ] + xx [ 127 ] * xx [ 120 ] ; xx [ 378 ] =
xx [ 107 ] ; xx [ 379 ] = - xx [ 158 ] ; xx [ 380 ] = - xx [ 178 ] ;
pm_math_Vector3_cross_ra ( xx + 204 , xx + 378 , xx + 384 ) ; xx [ 180 ] = (
xx [ 401 ] + xx [ 553 ] ) * state [ 15 ] * state [ 13 ] ; xx [ 186 ] = xx [
180 ] * xx [ 116 ] ; xx [ 210 ] = state [ 15 ] * ( xx [ 471 ] - xx [ 502 ] )
* state [ 13 ] ; xx [ 214 ] = xx [ 210 ] * xx [ 116 ] ; xx [ 116 ] = xx [ 180
] * xx [ 118 ] + xx [ 210 ] * xx [ 120 ] ; xx [ 378 ] = - xx [ 186 ] ; xx [
379 ] = xx [ 214 ] ; xx [ 380 ] = xx [ 116 ] ; pm_math_Vector3_cross_ra ( xx
+ 204 , xx + 378 , xx + 392 ) ; xx [ 118 ] = state [ 17 ] * state [ 17 ] ; xx
[ 204 ] = - 0.02496670895388185 ; xx [ 205 ] = - 1.394276078254194e-3 ; xx [
206 ] = - 5.00223655006888e-3 ; pm_math_Quaternion_xform_ra ( xx + 388 , xx +
204 , xx + 378 ) ; xx [ 204 ] = xx [ 118 ] * xx [ 378 ] ; xx [ 205 ] = xx [
118 ] * xx [ 379 ] ; xx [ 206 ] = xx [ 118 ] * xx [ 380 ] ;
pm_math_Quaternion_xform_ra ( xx + 762 , xx + 204 , xx + 378 ) ; xx [ 204 ] =
xx [ 328 ] ; xx [ 205 ] = xx [ 356 ] ; xx [ 206 ] = xx [ 397 ] ; xx [ 118 ] =
state [ 17 ] * xx [ 789 ] * xx [ 175 ] ; xx [ 120 ] = xx [ 118 ] * xx [ 397 ]
; xx [ 222 ] = state [ 17 ] * xx [ 790 ] * xx [ 175 ] ; xx [ 175 ] = xx [ 222
] * xx [ 397 ] ; xx [ 235 ] = xx [ 118 ] * xx [ 328 ] + xx [ 222 ] * xx [ 356
] ; xx [ 326 ] = - xx [ 120 ] ; xx [ 327 ] = - xx [ 175 ] ; xx [ 328 ] = xx [
235 ] ; pm_math_Vector3_cross_ra ( xx + 204 , xx + 326 , xx + 395 ) ; xx [
204 ] = xx [ 363 ] + xx [ 337 ] * xx [ 501 ] + xx [ 343 ] * xx [ 503 ] + xx [
106 ] + xx [ 127 ] + xx [ 131 ] * ( xx [ 384 ] + xx [ 107 ] * xx [ 109 ] ) +
xx [ 131 ] * ( xx [ 131 ] * ( xx [ 392 ] - xx [ 186 ] * xx [ 109 ] ) - xx [
210 ] ) - ( xx [ 437 ] * xx [ 221 ] + xx [ 209 ] * xx [ 441 ] ) + xx [ 378 ]
+ xx [ 131 ] * ( xx [ 131 ] * ( xx [ 395 ] - xx [ 120 ] * xx [ 319 ] ) - xx [
222 ] ) ; xx [ 205 ] = xx [ 364 ] + xx [ 145 ] * xx [ 503 ] - xx [ 154 ] * xx
[ 501 ] + xx [ 179 ] + xx [ 140 ] + xx [ 131 ] * ( xx [ 385 ] - xx [ 158 ] *
xx [ 109 ] ) + xx [ 131 ] * ( xx [ 131 ] * ( xx [ 393 ] + xx [ 214 ] * xx [
109 ] ) - xx [ 180 ] ) - ( xx [ 437 ] * xx [ 181 ] - xx [ 182 ] * xx [ 441 ]
) + xx [ 379 ] + xx [ 131 ] * ( xx [ 118 ] + xx [ 131 ] * ( xx [ 396 ] - xx [
175 ] * xx [ 319 ] ) ) ; xx [ 206 ] = xx [ 365 ] + xx [ 166 ] * xx [ 501 ] -
xx [ 167 ] * xx [ 503 ] + xx [ 114 ] + xx [ 131 ] * ( xx [ 386 ] - xx [ 178 ]
* xx [ 109 ] ) + xx [ 150 ] * ( xx [ 109 ] * xx [ 116 ] + xx [ 394 ] ) - ( xx
[ 437 ] * xx [ 207 ] + xx [ 200 ] * xx [ 441 ] ) + xx [ 380 ] + xx [ 150 ] *
( xx [ 319 ] * xx [ 235 ] + xx [ 397 ] ) ; xx [ 106 ] = xx [ 91 ] * xx [ 310
] - xx [ 174 ] * xx [ 296 ] ; xx [ 107 ] = xx [ 252 ] * xx [ 296 ] - xx [ 91
] * xx [ 325 ] ; xx [ 109 ] = xx [ 174 ] * xx [ 325 ] - xx [ 252 ] * xx [ 310
] ; xx [ 114 ] = xx [ 91 ] * xx [ 306 ] - xx [ 174 ] * xx [ 336 ] ; xx [ 116
] = xx [ 252 ] * xx [ 336 ] - xx [ 91 ] * xx [ 341 ] ; xx [ 118 ] = xx [ 174
] * xx [ 341 ] - xx [ 252 ] * xx [ 306 ] ; xx [ 120 ] = xx [ 91 ] * xx [ 311
] - xx [ 174 ] * xx [ 347 ] ; xx [ 127 ] = xx [ 252 ] * xx [ 347 ] - xx [ 91
] * xx [ 309 ] ; xx [ 140 ] = xx [ 174 ] * xx [ 309 ] - xx [ 252 ] * xx [ 311
] ; xx [ 507 ] = xx [ 174 ] * xx [ 106 ] - xx [ 252 ] * xx [ 107 ] ; xx [ 508
] = xx [ 252 ] * xx [ 109 ] - xx [ 91 ] * xx [ 106 ] ; xx [ 509 ] = xx [ 91 ]
* xx [ 107 ] - xx [ 174 ] * xx [ 109 ] ; xx [ 510 ] = xx [ 174 ] * xx [ 114 ]
- xx [ 252 ] * xx [ 116 ] ; xx [ 511 ] = xx [ 252 ] * xx [ 118 ] - xx [ 91 ]
* xx [ 114 ] ; xx [ 512 ] = xx [ 91 ] * xx [ 116 ] - xx [ 174 ] * xx [ 118 ]
; xx [ 513 ] = xx [ 174 ] * xx [ 120 ] - xx [ 252 ] * xx [ 127 ] ; xx [ 514 ]
= xx [ 252 ] * xx [ 140 ] - xx [ 91 ] * xx [ 120 ] ; xx [ 515 ] = xx [ 91 ] *
xx [ 127 ] - xx [ 174 ] * xx [ 140 ] ; xx [ 178 ] = - 1.432869371958412e-4 ;
xx [ 179 ] = 8.412683150105238e-8 ; xx [ 180 ] = 0.9999999897344236 ;
pm_math_Matrix3x3_xform_ra ( xx + 507 , xx + 178 , xx + 305 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 507 , xx + 800 , xx + 308 ) ; xx [ 91 ] =
state [ 9 ] * state [ 9 ] ; xx [ 319 ] = - 1.774940267079528e-3 ; xx [ 320 ]
= 2.874747560014884e-5 ; xx [ 321 ] = - 3.853388887253215e-7 ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 319 , xx + 324 ) ; xx [ 319 ] =
xx [ 308 ] + xx [ 91 ] * xx [ 324 ] ; xx [ 320 ] = xx [ 309 ] + xx [ 91 ] *
xx [ 325 ] ; xx [ 321 ] = xx [ 310 ] + xx [ 91 ] * xx [ 326 ] ; xx [ 308 ] =
0.9998688553766502 ; xx [ 309 ] = - 0.01619418172173436 ; xx [ 310 ] =
1.432695097203628e-4 ; pm_math_Matrix3x3_xform_ra ( xx + 507 , xx + 308 , xx
+ 324 ) ; xx [ 91 ] = xx [ 623 ] == 0.0 ? 0.0 : ( xx [ 587 ] * (
pm_math_Vector3_dot_ra ( xx + 806 , xx + 305 ) - pm_math_Vector3_dot_ra ( xx
+ 319 , xx + 803 ) ) - xx [ 217 ] * ( pm_math_Vector3_dot_ra ( xx + 806 , xx
+ 324 ) - pm_math_Vector3_dot_ra ( xx + 319 , xx + 519 ) ) ) / xx [ 623 ] ;
xx [ 106 ] = xx [ 792 ] == 0.0 ? 0.0 : ( xx [ 791 ] * pm_math_Vector3_dot_ra
( xx + 319 , xx + 823 ) - xx [ 674 ] * pm_math_Vector3_dot_ra ( xx + 319 , xx
+ 797 ) ) / xx [ 792 ] ; xx [ 107 ] = xx [ 83 ] * xx [ 477 ] + xx [ 96 ] * xx
[ 374 ] ; xx [ 109 ] = xx [ 92 ] * xx [ 374 ] + xx [ 83 ] * xx [ 444 ] ; xx [
114 ] = xx [ 96 ] * xx [ 444 ] - xx [ 92 ] * xx [ 477 ] ; xx [ 116 ] = xx [
83 ] * xx [ 495 ] + xx [ 96 ] * xx [ 492 ] ; xx [ 118 ] = xx [ 92 ] * xx [
492 ] + xx [ 83 ] * xx [ 403 ] ; xx [ 120 ] = xx [ 96 ] * xx [ 403 ] - xx [
92 ] * xx [ 495 ] ; xx [ 127 ] = xx [ 83 ] * xx [ 433 ] + xx [ 96 ] * xx [
516 ] ; xx [ 140 ] = xx [ 92 ] * xx [ 516 ] + xx [ 83 ] * xx [ 445 ] ; xx [
145 ] = xx [ 96 ] * xx [ 445 ] - xx [ 92 ] * xx [ 433 ] ; xx [ 475 ] = - ( xx
[ 96 ] * xx [ 107 ] + xx [ 92 ] * xx [ 109 ] ) ; xx [ 476 ] = - ( xx [ 83 ] *
xx [ 109 ] + xx [ 96 ] * xx [ 114 ] ) ; xx [ 477 ] = xx [ 92 ] * xx [ 114 ] -
xx [ 83 ] * xx [ 107 ] ; xx [ 478 ] = - ( xx [ 96 ] * xx [ 116 ] + xx [ 92 ]
* xx [ 118 ] ) ; xx [ 479 ] = - ( xx [ 83 ] * xx [ 118 ] + xx [ 96 ] * xx [
120 ] ) ; xx [ 480 ] = xx [ 92 ] * xx [ 120 ] - xx [ 83 ] * xx [ 116 ] ; xx [
481 ] = - ( xx [ 96 ] * xx [ 127 ] + xx [ 92 ] * xx [ 140 ] ) ; xx [ 482 ] =
- ( xx [ 83 ] * xx [ 140 ] + xx [ 96 ] * xx [ 145 ] ) ; xx [ 483 ] = xx [ 92
] * xx [ 145 ] - xx [ 83 ] * xx [ 127 ] ; pm_math_Matrix3x3_xform_ra ( xx +
475 , xx + 766 , xx + 305 ) ; xx [ 83 ] = state [ 11 ] * state [ 11 ] ; xx [
319 ] = 4.662631684146296e-3 ; xx [ 320 ] = 3.414572999352323e-3 ; xx [ 321 ]
= - 7.622008830251594e-3 ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 319 ,
xx + 324 ) ; xx [ 319 ] = xx [ 305 ] + xx [ 83 ] * xx [ 324 ] ; xx [ 320 ] =
xx [ 306 ] + xx [ 83 ] * xx [ 325 ] ; xx [ 321 ] = xx [ 307 ] + xx [ 83 ] *
xx [ 326 ] ; xx [ 83 ] = xx [ 623 ] == 0.0 ? 0.0 : ( xx [ 587 ] *
pm_math_Vector3_dot_ra ( xx + 319 , xx + 803 ) - xx [ 217 ] *
pm_math_Vector3_dot_ra ( xx + 319 , xx + 519 ) ) / xx [ 623 ] ; xx [ 305 ] =
0.341552247851593 ; xx [ 306 ] = - 0.03450918424939553 ; xx [ 307 ] = xx [
191 ] ; pm_math_Matrix3x3_xform_ra ( xx + 475 , xx + 305 , xx + 324 ) ; xx [
327 ] = - 0.8584274834925503 ; xx [ 328 ] = - 0.418345975005826 ; xx [ 329 ]
= 0.2967977438948485 ; pm_math_Matrix3x3_xform_ra ( xx + 475 , xx + 327 , xx
+ 334 ) ; xx [ 92 ] = xx [ 792 ] == 0.0 ? 0.0 : ( xx [ 674 ] * (
pm_math_Vector3_dot_ra ( xx + 319 , xx + 797 ) + pm_math_Vector3_dot_ra ( xx
+ 806 , xx + 324 ) ) - xx [ 791 ] * ( pm_math_Vector3_dot_ra ( xx + 319 , xx
+ 823 ) + pm_math_Vector3_dot_ra ( xx + 806 , xx + 334 ) ) ) / xx [ 792 ] ;
pm_math_Vector3_cross_ra ( xx + 427 , xx + 766 , xx + 319 ) ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 319 , xx + 324 ) ;
pm_math_Vector3_cross_ra ( xx + 411 , xx + 800 , xx + 319 ) ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 319 , xx + 334 ) ; xx [ 319 ] =
xx [ 324 ] + state [ 11 ] * xx [ 835 ] - ( xx [ 334 ] + state [ 9 ] * xx [
817 ] ) ; xx [ 320 ] = xx [ 325 ] + state [ 11 ] * xx [ 836 ] - ( xx [ 335 ]
+ state [ 9 ] * xx [ 818 ] ) ; xx [ 321 ] = xx [ 326 ] + state [ 11 ] * xx [
837 ] - ( xx [ 336 ] + state [ 9 ] * xx [ 819 ] ) ; pm_math_Vector3_cross_ra
( xx + 411 , xx + 178 , xx + 324 ) ; pm_math_Quaternion_xform_ra ( xx + 588 ,
xx + 324 , xx + 178 ) ; pm_math_Vector3_cross_ra ( xx + 411 , xx + 308 , xx +
324 ) ; pm_math_Quaternion_xform_ra ( xx + 588 , xx + 324 , xx + 308 ) ; xx [
96 ] = xx [ 623 ] == 0.0 ? 0.0 : ( xx [ 587 ] * pm_math_Vector3_dot_ra ( xx +
319 , xx + 178 ) * xx [ 131 ] - xx [ 217 ] * pm_math_Vector3_dot_ra ( xx +
319 , xx + 308 ) * xx [ 131 ] ) / xx [ 623 ] ; pm_math_Vector3_cross_ra ( xx
+ 427 , xx + 305 , xx + 324 ) ; pm_math_Quaternion_xform_ra ( xx + 99 , xx +
324 , xx + 305 ) ; pm_math_Vector3_cross_ra ( xx + 427 , xx + 327 , xx + 324
) ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 324 , xx + 327 ) ; xx [ 107
] = xx [ 792 ] == 0.0 ? 0.0 : ( xx [ 674 ] * pm_math_Vector3_dot_ra ( xx +
319 , xx + 305 ) * xx [ 131 ] - xx [ 791 ] * pm_math_Vector3_dot_ra ( xx +
319 , xx + 327 ) * xx [ 131 ] ) / xx [ 792 ] ; xx [ 109 ] =
pm_math_Vector3_dot_ra ( xx + 319 , xx + 519 ) + pm_math_Vector3_dot_ra ( xx
+ 806 , xx + 308 ) ; xx [ 114 ] = pm_math_Vector3_dot_ra ( xx + 319 , xx +
803 ) + pm_math_Vector3_dot_ra ( xx + 806 , xx + 178 ) ; xx [ 116 ] = xx [
623 ] * xx [ 623 ] ; xx [ 116 ] = xx [ 116 ] == 0.0 ? 0.0 : ( ( xx [ 231 ] -
xx [ 301 ] ) * xx [ 109 ] * xx [ 114 ] - xx [ 217 ] * xx [ 587 ] * ( xx [ 109
] * xx [ 109 ] - xx [ 114 ] * xx [ 114 ] ) ) / xx [ 116 ] ; xx [ 109 ] =
pm_math_Vector3_dot_ra ( xx + 319 , xx + 823 ) + pm_math_Vector3_dot_ra ( xx
+ 806 , xx + 327 ) ; xx [ 114 ] = pm_math_Vector3_dot_ra ( xx + 319 , xx +
797 ) + pm_math_Vector3_dot_ra ( xx + 806 , xx + 305 ) ; xx [ 118 ] = xx [
792 ] * xx [ 792 ] ; xx [ 118 ] = xx [ 118 ] == 0.0 ? 0.0 : ( ( xx [ 677 ] -
xx [ 785 ] ) * xx [ 109 ] * xx [ 114 ] - xx [ 791 ] * xx [ 674 ] * ( xx [ 109
] * xx [ 109 ] - xx [ 114 ] * xx [ 114 ] ) ) / xx [ 118 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx + 357 , xx + 178 ) ;
pm_math_Vector3_cross_ra ( xx + 357 , xx + 625 , xx + 305 ) ; xx [ 308 ] = xx
[ 55 ] + xx [ 305 ] ; xx [ 309 ] = xx [ 71 ] + xx [ 306 ] ; xx [ 310 ] = xx [
72 ] + xx [ 307 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx + 308
, xx + 305 ) ; xx [ 324 ] = xx [ 234 ] * xx [ 322 ] - (
pm_math_Vector3_dot_ra ( xx + 360 , xx + 197 ) + xx [ 195 ] * xx [ 257 ] ) +
xx [ 192 ] * xx [ 208 ] ; xx [ 325 ] = xx [ 258 ] * xx [ 322 ] - (
pm_math_Vector3_dot_ra ( xx + 183 , xx + 201 ) + xx [ 48 ] * xx [ 257 ] ) +
xx [ 98 ] * xx [ 208 ] ; xx [ 326 ] = xx [ 377 ] * xx [ 165 ] - (
pm_math_Vector3_dot_ra ( xx + 245 , xx + 197 ) + xx [ 294 ] * xx [ 257 ] ) +
xx [ 485 ] * xx [ 82 ] ; xx [ 327 ] = xx [ 436 ] * xx [ 165 ] - (
pm_math_Vector3_dot_ra ( xx + 204 , xx + 201 ) + xx [ 119 ] * xx [ 257 ] ) +
xx [ 314 ] * xx [ 82 ] ; xx [ 328 ] = xx [ 822 ] * xx [ 22 ] - ( xx [ 91 ] +
xx [ 106 ] + xx [ 83 ] + xx [ 92 ] + xx [ 96 ] + xx [ 107 ] - xx [ 131 ] * xx
[ 116 ] - xx [ 131 ] * xx [ 118 ] + ( xx [ 80 ] - ( pm_math_Vector3_dot_ra (
xx + 782 , xx + 178 ) + pm_math_Vector3_dot_ra ( xx + 829 , xx + 305 ) ) ) *
xx [ 820 ] ) ; memcpy ( xx + 892 , xx + 867 , 25 * sizeof ( double ) ) ;
factorAndSolveSymmetric ( xx + 892 , 5 , xx + 197 , ii + 0 , xx + 324 , xx +
178 , xx + 917 ) ; xx [ 22 ] = ( xx [ 192 ] * xx [ 178 ] + xx [ 98 ] * xx [
179 ] - xx [ 153 ] ) / xx [ 196 ] ; xx [ 165 ] = xx [ 176 ] - xx [ 177 ] * xx
[ 22 ] ; xx [ 166 ] = xx [ 57 ] + xx [ 212 ] * xx [ 22 ] ; xx [ 167 ] = xx [
73 ] - xx [ 213 ] * xx [ 22 ] ; pm_math_Quaternion_xform_ra ( xx + 161 , xx +
165 , xx + 71 ) ; xx [ 165 ] = xx [ 8 ] + xx [ 215 ] * xx [ 22 ] ; xx [ 166 ]
= xx [ 81 ] - xx [ 216 ] * xx [ 22 ] ; xx [ 167 ] = xx [ 108 ] - xx [ 220 ] *
xx [ 22 ] ; pm_math_Quaternion_xform_ra ( xx + 161 , xx + 165 , xx + 80 ) ;
pm_math_Vector3_cross_ra ( xx + 223 , xx + 80 , xx + 106 ) ; xx [ 8 ] = xx [
81 ] + xx [ 159 ] ; xx [ 55 ] = xx [ 80 ] + xx [ 211 ] ; xx [ 57 ] = xx [ 149
] + xx [ 73 ] + xx [ 108 ] + xx [ 138 ] ; xx [ 80 ] = ( xx [ 234 ] * xx [ 178
] + xx [ 258 ] * xx [ 179 ] - ( xx [ 232 ] * xx [ 8 ] - xx [ 289 ] * xx [ 55
] - xx [ 57 ] ) ) / xx [ 267 ] ; xx [ 81 ] = xx [ 147 ] + xx [ 71 ] + xx [
106 ] + xx [ 229 ] + xx [ 279 ] * xx [ 80 ] ; xx [ 71 ] = xx [ 148 ] + xx [
72 ] + xx [ 107 ] + xx [ 254 ] + xx [ 280 ] * xx [ 80 ] ; xx [ 72 ] = xx [ 71
] * xx [ 133 ] - xx [ 81 ] * xx [ 137 ] ; xx [ 73 ] = xx [ 55 ] + xx [ 244 ]
* xx [ 80 ] ; xx [ 55 ] = xx [ 8 ] + xx [ 240 ] * xx [ 80 ] ; xx [ 8 ] = xx [
55 ] * xx [ 133 ] - xx [ 73 ] * xx [ 137 ] ; xx [ 83 ] = xx [ 73 ] + xx [ 131
] * xx [ 8 ] * xx [ 137 ] ; xx [ 73 ] = xx [ 55 ] - xx [ 131 ] * xx [ 8 ] *
xx [ 133 ] ; xx [ 8 ] = xx [ 82 ] + xx [ 168 ] + xx [ 230 ] * xx [ 80 ] ; xx
[ 55 ] = xx [ 8 ] - xx [ 131 ] * ( xx [ 8 ] * xx [ 133 ] * xx [ 133 ] + xx [
8 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 106 ] = xx [ 83 ] ; xx [ 107 ] = xx [
73 ] ; xx [ 108 ] = xx [ 55 ] ; pm_math_Vector3_cross_ra ( xx + 316 , xx +
106 , xx + 147 ) ; xx [ 8 ] = ( xx [ 485 ] * xx [ 180 ] + xx [ 314 ] * xx [
181 ] - xx [ 288 ] ) / xx [ 406 ] ; xx [ 106 ] = xx [ 300 ] + xx [ 405 ] * xx
[ 8 ] ; xx [ 107 ] = xx [ 56 ] - xx [ 408 ] * xx [ 8 ] ; xx [ 108 ] = xx [
144 ] - xx [ 410 ] * xx [ 8 ] ; pm_math_Quaternion_xform_ra ( xx + 388 , xx +
106 , xx + 165 ) ; xx [ 106 ] = xx [ 233 ] + xx [ 409 ] * xx [ 8 ] ; xx [ 107
] = xx [ 250 ] - xx [ 414 ] * xx [ 8 ] ; xx [ 108 ] = xx [ 269 ] + xx [ 426 ]
* xx [ 8 ] ; pm_math_Quaternion_xform_ra ( xx + 388 , xx + 106 , xx + 174 ) ;
pm_math_Vector3_cross_ra ( xx + 438 , xx + 174 , xx + 106 ) ; xx [ 56 ] = xx
[ 143 ] + xx [ 167 ] + xx [ 108 ] + xx [ 130 ] ; xx [ 82 ] = xx [ 175 ] + xx
[ 236 ] ; xx [ 91 ] = xx [ 174 ] + xx [ 253 ] ; xx [ 92 ] = ( xx [ 377 ] * xx
[ 180 ] + xx [ 436 ] * xx [ 181 ] - ( xx [ 56 ] + xx [ 471 ] * xx [ 82 ] - xx
[ 401 ] * xx [ 91 ] ) ) / xx [ 474 ] ; xx [ 96 ] = xx [ 141 ] + xx [ 165 ] +
xx [ 106 ] + xx [ 129 ] + xx [ 399 ] * xx [ 92 ] ; xx [ 98 ] = xx [ 142 ] +
xx [ 166 ] + xx [ 107 ] + xx [ 313 ] + xx [ 400 ] * xx [ 92 ] ; xx [ 106 ] =
xx [ 98 ] * xx [ 376 ] ; xx [ 107 ] = xx [ 96 ] * xx [ 376 ] ; xx [ 108 ] =
xx [ 91 ] + xx [ 452 ] * xx [ 92 ] ; xx [ 91 ] = xx [ 82 ] + xx [ 456 ] * xx
[ 92 ] ; xx [ 82 ] = xx [ 91 ] * xx [ 376 ] ; xx [ 109 ] = xx [ 108 ] * xx [
376 ] ; xx [ 114 ] = xx [ 108 ] - xx [ 131 ] * ( xx [ 82 ] * xx [ 345 ] + xx
[ 109 ] * xx [ 376 ] ) ; xx [ 108 ] = xx [ 91 ] + xx [ 131 ] * ( xx [ 109 ] *
xx [ 345 ] - xx [ 82 ] * xx [ 376 ] ) ; xx [ 82 ] = xx [ 176 ] + xx [ 239 ] +
xx [ 404 ] * xx [ 92 ] ; xx [ 140 ] = xx [ 114 ] ; xx [ 141 ] = xx [ 108 ] ;
xx [ 142 ] = xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 504 , xx + 140 , xx
+ 143 ) ; xx [ 91 ] = xx [ 57 ] + xx [ 266 ] * xx [ 80 ] ; xx [ 57 ] = xx [
136 ] + xx [ 91 ] - xx [ 131 ] * ( xx [ 91 ] * xx [ 133 ] * xx [ 133 ] + xx [
91 ] * xx [ 137 ] * xx [ 137 ] ) + xx [ 149 ] + xx [ 56 ] + xx [ 398 ] * xx [
92 ] + xx [ 145 ] + xx [ 117 ] ; xx [ 56 ] = xx [ 83 ] + xx [ 114 ] + xx [
105 ] ; xx [ 83 ] = xx [ 73 ] + xx [ 108 ] + xx [ 125 ] ; xx [ 73 ] = ( input
[ 5 ] - ( xx [ 57 ] + xx [ 274 ] * xx [ 56 ] + xx [ 287 ] * xx [ 83 ] ) + xx
[ 195 ] * xx [ 178 ] + xx [ 48 ] * xx [ 179 ] + xx [ 294 ] * xx [ 180 ] + xx
[ 119 ] * xx [ 181 ] ) / xx [ 470 ] ; xx [ 116 ] = xx [ 134 ] + xx [ 81 ] +
xx [ 131 ] * xx [ 72 ] * xx [ 137 ] + xx [ 147 ] + xx [ 96 ] - xx [ 131 ] * (
xx [ 106 ] * xx [ 345 ] + xx [ 107 ] * xx [ 376 ] ) + xx [ 143 ] + xx [ 104 ]
+ xx [ 283 ] * xx [ 73 ] ; xx [ 117 ] = xx [ 135 ] + xx [ 71 ] - xx [ 131 ] *
xx [ 72 ] * xx [ 133 ] + xx [ 148 ] + xx [ 98 ] + xx [ 131 ] * ( xx [ 107 ] *
xx [ 345 ] - xx [ 106 ] * xx [ 376 ] ) + xx [ 144 ] + xx [ 160 ] + xx [ 330 ]
* xx [ 73 ] ; xx [ 118 ] = xx [ 57 ] + xx [ 333 ] * xx [ 73 ] ;
pm_math_Quaternion_xform_ra ( xx + 121 , xx + 116 , xx + 104 ) ; xx [ 107 ] =
xx [ 56 ] + xx [ 338 ] * xx [ 73 ] ; xx [ 108 ] = xx [ 83 ] + xx [ 340 ] * xx
[ 73 ] ; xx [ 109 ] = xx [ 55 ] + xx [ 82 ] + xx [ 139 ] + xx [ 323 ] * xx [
73 ] ; pm_math_Quaternion_xform_ra ( xx + 121 , xx + 107 , xx + 55 ) ;
pm_math_Vector3_cross_ra ( xx + 226 , xx + 55 , xx + 81 ) ; xx [ 48 ] = xx [
111 ] + xx [ 104 ] + xx [ 81 ] + xx [ 90 ] ; xx [ 71 ] = xx [ 112 ] + xx [
105 ] + xx [ 82 ] + xx [ 97 ] ; xx [ 72 ] = xx [ 113 ] + xx [ 106 ] + xx [ 83
] + xx [ 126 ] ; xx [ 81 ] = xx [ 48 ] ; xx [ 82 ] = xx [ 71 ] ; xx [ 83 ] =
xx [ 72 ] ; xx [ 90 ] = xx [ 55 ] + xx [ 243 ] ; xx [ 55 ] = xx [ 56 ] + xx [
251 ] ; xx [ 56 ] = xx [ 57 ] + xx [ 255 ] ; xx [ 96 ] = xx [ 90 ] ; xx [ 97
] = xx [ 55 ] ; xx [ 98 ] = xx [ 56 ] ; xx [ 57 ] = ( xx [ 822 ] * xx [ 182 ]
- ( pm_math_Vector3_dot_ra ( xx + 297 , xx + 81 ) + pm_math_Vector3_dot_ra (
xx + 352 , xx + 96 ) ) ) / xx [ 373 ] ; xx [ 81 ] = xx [ 48 ] + xx [ 355 ] *
xx [ 57 ] ; xx [ 82 ] = xx [ 71 ] + xx [ 218 ] * xx [ 57 ] ; xx [ 83 ] = xx [
72 ] + xx [ 219 ] * xx [ 57 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx +
81 , xx + 96 ) ; xx [ 81 ] = xx [ 90 ] + xx [ 368 ] * xx [ 57 ] ; xx [ 82 ] =
xx [ 55 ] + xx [ 370 ] * xx [ 57 ] ; xx [ 83 ] = xx [ 56 ] + xx [ 371 ] * xx
[ 57 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 81 , xx + 104 ) ;
pm_math_Vector3_cross_ra ( xx + 447 , xx + 104 , xx + 81 ) ; xx [ 48 ] = ( xx
[ 79 ] + xx [ 820 ] * xx [ 182 ] ) / xx [ 339 ] ; xx [ 107 ] = xx [ 259 ] -
xx [ 312 ] * xx [ 48 ] ; xx [ 108 ] = xx [ 260 ] - xx [ 350 ] * xx [ 48 ] ;
xx [ 109 ] = xx [ 264 ] - xx [ 367 ] * xx [ 48 ] ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 107 , xx + 111 ) ; xx [ 107 ] =
xx [ 115 ] - xx [ 351 ] * xx [ 48 ] ; xx [ 108 ] = xx [ 249 ] + xx [ 534 ] *
xx [ 48 ] ; xx [ 109 ] = xx [ 78 ] + xx [ 585 ] * xx [ 48 ] ;
pm_math_Quaternion_xform_ra ( xx + 588 , xx + 107 , xx + 114 ) ;
pm_math_Vector3_cross_ra ( xx + 625 , xx + 114 , xx + 107 ) ; xx [ 55 ] = xx
[ 86 ] + xx [ 96 ] + xx [ 81 ] + xx [ 111 ] + xx [ 107 ] + xx [ 54 ] ; xx [
54 ] = xx [ 87 ] + xx [ 97 ] + xx [ 82 ] + xx [ 112 ] + xx [ 108 ] + xx [ 67
] ; xx [ 56 ] = xx [ 88 ] + xx [ 98 ] + xx [ 83 ] + xx [ 113 ] + xx [ 109 ] +
xx [ 70 ] ; xx [ 70 ] = xx [ 55 ] ; xx [ 71 ] = xx [ 54 ] ; xx [ 72 ] = xx [
56 ] ; xx [ 67 ] = xx [ 104 ] + xx [ 114 ] + xx [ 64 ] ; xx [ 64 ] = xx [ 105
] + xx [ 115 ] + xx [ 66 ] ; xx [ 66 ] = xx [ 106 ] + xx [ 116 ] + xx [ 265 ]
; xx [ 81 ] = xx [ 67 ] ; xx [ 82 ] = xx [ 64 ] ; xx [ 83 ] = xx [ 66 ] ; xx
[ 78 ] = ( input [ 3 ] - ( pm_math_Vector3_dot_ra ( xx + 548 , xx + 70 ) +
pm_math_Vector3_dot_ra ( xx + 566 , xx + 81 ) ) ) / xx [ 570 ] ; xx [ 70 ] =
xx [ 55 ] + xx [ 572 ] * xx [ 78 ] ; xx [ 71 ] = xx [ 54 ] + xx [ 490 ] * xx
[ 78 ] ; xx [ 72 ] = xx [ 56 ] + xx [ 491 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 70 , xx + 54 ) ; xx [ 70 ] = xx
[ 67 ] + xx [ 574 ] * xx [ 78 ] ; xx [ 71 ] = xx [ 64 ] + xx [ 583 ] * xx [
78 ] ; xx [ 72 ] = xx [ 66 ] + xx [ 569 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 70 , xx + 81 ) ;
pm_math_Vector3_cross_ra ( xx + 522 , xx + 81 , xx + 70 ) ; xx [ 64 ] = xx [
61 ] + xx [ 54 ] + xx [ 70 ] + xx [ 30 ] ; xx [ 30 ] = xx [ 62 ] + xx [ 55 ]
+ xx [ 71 ] + xx [ 42 ] ; xx [ 42 ] = xx [ 63 ] + xx [ 56 ] + xx [ 72 ] + xx
[ 45 ] ; xx [ 54 ] = xx [ 64 ] ; xx [ 55 ] = xx [ 30 ] ; xx [ 56 ] = xx [ 42
] ; xx [ 45 ] = xx [ 81 ] + xx [ 39 ] ; xx [ 39 ] = xx [ 82 ] + xx [ 41 ] ;
xx [ 41 ] = xx [ 83 ] + xx [ 65 ] ; xx [ 61 ] = xx [ 45 ] ; xx [ 62 ] = xx [
39 ] ; xx [ 63 ] = xx [ 41 ] ; xx [ 65 ] = ( input [ 2 ] - (
pm_math_Vector3_dot_ra ( xx + 575 , xx + 54 ) + pm_math_Vector3_dot_ra ( xx +
615 , xx + 61 ) ) ) / xx [ 654 ] ; xx [ 54 ] = xx [ 64 ] + xx [ 618 ] * xx [
65 ] ; xx [ 55 ] = xx [ 30 ] + xx [ 606 ] * xx [ 65 ] ; xx [ 56 ] = xx [ 42 ]
+ xx [ 578 ] * xx [ 65 ] ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 54 ,
xx + 61 ) ; xx [ 54 ] = xx [ 45 ] + xx [ 580 ] * xx [ 65 ] ; xx [ 55 ] = xx [
39 ] + xx [ 607 ] * xx [ 65 ] ; xx [ 56 ] = xx [ 41 ] + xx [ 650 ] * xx [ 65
] ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 54 , xx + 70 ) ;
pm_math_Vector3_cross_ra ( xx + 602 , xx + 70 , xx + 54 ) ; xx [ 30 ] = xx [
36 ] + xx [ 61 ] + xx [ 54 ] + xx [ 24 ] ; xx [ 24 ] = xx [ 37 ] + xx [ 62 ]
+ xx [ 55 ] + xx [ 40 ] ; xx [ 36 ] = xx [ 38 ] + xx [ 63 ] + xx [ 56 ] + xx
[ 21 ] ; xx [ 21 ] = xx [ 70 ] + xx [ 16 ] ; xx [ 16 ] = xx [ 71 ] + xx [ 18
] ; xx [ 18 ] = xx [ 72 ] + xx [ 47 ] ; xx [ 37 ] = xx [ 21 ] ; xx [ 38 ] =
xx [ 16 ] ; xx [ 39 ] = xx [ 18 ] ; xx [ 40 ] = ( input [ 1 ] - ( xx [ 30 ] +
xx [ 19 ] * xx [ 24 ] + xx [ 20 ] * xx [ 36 ] + pm_math_Vector3_dot_ra ( xx +
609 , xx + 37 ) ) ) / xx [ 688 ] ; xx [ 37 ] = xx [ 30 ] + xx [ 582 ] * xx [
40 ] ; xx [ 38 ] = xx [ 24 ] + xx [ 651 ] * xx [ 40 ] ; xx [ 39 ] = xx [ 36 ]
+ xx [ 32 ] * xx [ 40 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 37 ,
xx + 54 ) ; xx [ 36 ] = xx [ 21 ] + xx [ 676 ] * xx [ 40 ] ; xx [ 37 ] = xx [
16 ] + xx [ 690 ] * xx [ 40 ] ; xx [ 38 ] = xx [ 18 ] + xx [ 687 ] * xx [ 40
] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 36 , xx + 61 ) ;
pm_math_Vector3_cross_ra ( xx + 691 , xx + 61 , xx + 36 ) ; xx [ 70 ] = xx [
12 ] + xx [ 54 ] + xx [ 36 ] + xx [ 3 ] ; xx [ 71 ] = xx [ 13 ] + xx [ 55 ] +
xx [ 37 ] + xx [ 4 ] ; xx [ 72 ] = xx [ 14 ] + xx [ 56 ] + xx [ 38 ] + xx [ 5
] ; xx [ 3 ] = xx [ 61 ] + xx [ 275 ] ; xx [ 4 ] = xx [ 62 ] + xx [ 276 ] ;
xx [ 5 ] = xx [ 63 ] + xx [ 277 ] ; xx [ 12 ] = ( input [ 0 ] - (
pm_math_Vector3_dot_ra ( xx + 0 , xx + 70 ) + pm_math_Vector3_dot_ra ( xx +
694 , xx + 3 ) ) ) / xx [ 7 ] - xx [ 17 ] ; xx [ 3 ] = xx [ 0 ] * xx [ 12 ] ;
xx [ 4 ] = xx [ 1 ] * xx [ 12 ] ; xx [ 5 ] = xx [ 2 ] * xx [ 12 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 3 , xx + 0 ) ;
pm_math_Vector3_cross_ra ( xx + 3 , xx + 691 , xx + 16 ) ; xx [ 3 ] = xx [ 23
] + xx [ 302 ] * xx [ 12 ] + xx [ 453 ] + xx [ 16 ] ; xx [ 4 ] = xx [ 454 ] -
( xx [ 592 ] * xx [ 12 ] + xx [ 31 ] ) + xx [ 17 ] + xx [ 6 ] ; xx [ 5 ] = xx
[ 46 ] - xx [ 647 ] * xx [ 12 ] + xx [ 455 ] + xx [ 18 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 3 , xx + 16 ) ; xx [ 3 ]
= xx [ 40 ] - ( pm_math_Vector3_dot_ra ( xx + 525 , xx + 0 ) +
pm_math_Vector3_dot_ra ( xx + 700 , xx + 16 ) ) ; xx [ 4 ] = xx [ 0 ] + xx [
3 ] + xx [ 421 ] ; xx [ 5 ] = xx [ 1 ] + xx [ 19 ] * xx [ 3 ] + xx [ 422 ] ;
xx [ 6 ] = xx [ 2 ] + xx [ 20 ] * xx [ 3 ] + xx [ 423 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 4 , xx + 0 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 602 , xx + 19 ) ; xx [ 4 ] = xx [ 16
] - xx [ 573 ] * xx [ 3 ] + xx [ 10 ] + xx [ 19 ] ; xx [ 5 ] = xx [ 17 ] + xx
[ 579 ] * xx [ 3 ] + xx [ 11 ] + xx [ 20 ] ; xx [ 6 ] = xx [ 18 ] + xx [ 581
] * xx [ 3 ] + xx [ 15 ] + xx [ 21 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 49 , xx + 4 , xx + 13 ) ; xx [ 4 ] = xx [ 65 ] - (
pm_math_Vector3_dot_ra ( xx + 703 , xx + 0 ) + pm_math_Vector3_dot_ra ( xx +
724 , xx + 13 ) ) ; xx [ 5 ] = xx [ 0 ] - xx [ 34 ] * xx [ 4 ] + xx [ 418 ] ;
xx [ 6 ] = xx [ 1 ] + xx [ 43 ] * xx [ 4 ] + xx [ 419 ] ; xx [ 7 ] = xx [ 2 ]
+ xx [ 44 ] * xx [ 4 ] + xx [ 420 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 74 , xx + 5 , xx + 0 ) ; pm_math_Vector3_cross_ra ( xx + 5 , xx + 522 , xx
+ 16 ) ; xx [ 5 ] = xx [ 13 ] - xx [ 612 ] * xx [ 4 ] + xx [ 33 ] + xx [ 16 ]
; xx [ 6 ] = xx [ 14 ] - xx [ 613 ] * xx [ 4 ] + xx [ 35 ] + xx [ 17 ] ; xx [
7 ] = xx [ 15 ] + xx [ 614 ] * xx [ 4 ] + xx [ 29 ] + xx [ 18 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 5 , xx + 13 ) ; xx [ 5 ]
= xx [ 78 ] - ( pm_math_Vector3_dot_ra ( xx + 727 , xx + 0 ) +
pm_math_Vector3_dot_ra ( xx + 730 , xx + 13 ) ) ; xx [ 16 ] = xx [ 0 ] + xx [
59 ] * xx [ 5 ] + xx [ 457 ] ; xx [ 17 ] = xx [ 1 ] - xx [ 68 ] * xx [ 5 ] +
xx [ 458 ] ; xx [ 18 ] = xx [ 2 ] - xx [ 69 ] * xx [ 5 ] + xx [ 459 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx + 16 , xx + 0 ) ; xx [ 6 ]
= xx [ 13 ] - xx [ 469 ] * xx [ 5 ] + xx [ 58 ] ; pm_math_Vector3_cross_ra (
xx + 16 , xx + 625 , xx + 19 ) ; xx [ 7 ] = xx [ 14 ] + xx [ 554 ] * xx [ 5 ]
+ xx [ 60 ] ; xx [ 10 ] = xx [ 15 ] - xx [ 555 ] * xx [ 5 ] + xx [ 53 ] ; xx
[ 13 ] = xx [ 6 ] + xx [ 19 ] ; xx [ 14 ] = xx [ 7 ] + xx [ 20 ] ; xx [ 15 ]
= xx [ 10 ] + xx [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 588 , xx
+ 13 , xx + 19 ) ; xx [ 11 ] = xx [ 48 ] - ( pm_math_Vector3_dot_ra ( xx +
782 , xx + 0 ) + pm_math_Vector3_dot_ra ( xx + 829 , xx + 19 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 16 , xx + 13 ) ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 447 , xx + 19 ) ; xx [ 16 ] = xx [
6 ] + xx [ 19 ] ; xx [ 17 ] = xx [ 7 ] + xx [ 20 ] ; xx [ 18 ] = xx [ 10 ] +
xx [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 99 , xx + 16 , xx + 19
) ; xx [ 6 ] = xx [ 57 ] - ( pm_math_Vector3_dot_ra ( xx + 733 , xx + 13 ) +
pm_math_Vector3_dot_ra ( xx + 736 , xx + 19 ) ) ; xx [ 16 ] = xx [ 13 ] - xx
[ 84 ] * xx [ 6 ] + xx [ 430 ] ; xx [ 17 ] = xx [ 14 ] + xx [ 93 ] * xx [ 6 ]
+ xx [ 431 ] ; xx [ 18 ] = xx [ 15 ] + xx [ 94 ] * xx [ 6 ] + xx [ 432 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 16 , xx + 13 ) ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 226 , xx + 23 ) ; xx [ 26 ] = xx [
19 ] + xx [ 352 ] * xx [ 6 ] + xx [ 85 ] + xx [ 23 ] ; xx [ 27 ] = xx [ 20 ]
+ xx [ 353 ] * xx [ 6 ] + xx [ 95 ] + xx [ 24 ] ; xx [ 28 ] = xx [ 21 ] + xx
[ 354 ] * xx [ 6 ] + xx [ 89 ] + xx [ 25 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 121 , xx + 26 , xx + 19 ) ; xx [ 7
] = xx [ 73 ] - ( pm_math_Vector3_dot_ra ( xx + 531 , xx + 13 ) +
pm_math_Vector3_dot_ra ( xx + 739 , xx + 19 ) ) ; xx [ 10 ] = xx [ 13 ] + xx
[ 346 ] ; xx [ 13 ] = xx [ 14 ] - xx [ 349 ] ; xx [ 14 ] = xx [ 13 ] * xx [
376 ] ; xx [ 23 ] = xx [ 10 ] * xx [ 376 ] ; xx [ 24 ] = xx [ 10 ] + xx [ 131
] * ( xx [ 14 ] * xx [ 345 ] - xx [ 23 ] * xx [ 376 ] ) ; xx [ 25 ] = xx [ 13
] - xx [ 131 ] * ( xx [ 23 ] * xx [ 345 ] + xx [ 14 ] * xx [ 376 ] ) ; xx [
14 ] = xx [ 15 ] + xx [ 7 ] ; xx [ 26 ] = xx [ 24 ] ; xx [ 27 ] = xx [ 25 ] ;
xx [ 28 ] = xx [ 14 ] ; xx [ 15 ] = xx [ 19 ] + xx [ 274 ] * xx [ 7 ] + xx [
110 ] ; xx [ 29 ] = xx [ 10 ] ; xx [ 30 ] = xx [ 13 ] ; xx [ 31 ] = xx [ 14 ]
; pm_math_Vector3_cross_ra ( xx + 29 , xx + 504 , xx + 32 ) ; xx [ 19 ] = xx
[ 15 ] + xx [ 32 ] ; xx [ 23 ] = xx [ 20 ] + xx [ 287 ] * xx [ 7 ] + xx [ 268
] ; xx [ 20 ] = xx [ 23 ] + xx [ 33 ] ; xx [ 35 ] = xx [ 20 ] * xx [ 376 ] ;
xx [ 36 ] = xx [ 19 ] * xx [ 376 ] ; xx [ 37 ] = xx [ 19 ] + xx [ 131 ] * (
xx [ 35 ] * xx [ 345 ] - xx [ 36 ] * xx [ 376 ] ) ; xx [ 19 ] = xx [ 20 ] -
xx [ 131 ] * ( xx [ 36 ] * xx [ 345 ] + xx [ 35 ] * xx [ 376 ] ) ; xx [ 20 ]
= xx [ 21 ] + xx [ 103 ] ; xx [ 21 ] = xx [ 20 ] + xx [ 34 ] ; xx [ 32 ] = xx
[ 37 ] ; xx [ 33 ] = xx [ 19 ] ; xx [ 34 ] = xx [ 21 ] ; xx [ 35 ] = xx [ 92
] - ( pm_math_Vector3_dot_ra ( xx + 844 , xx + 26 ) + pm_math_Vector3_dot_ra
( xx + 855 , xx + 32 ) ) ; xx [ 26 ] = xx [ 24 ] + xx [ 272 ] ; xx [ 27 ] =
xx [ 25 ] - xx [ 273 ] ; xx [ 28 ] = xx [ 14 ] + xx [ 35 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 26 , xx + 32 ) ;
pm_math_Vector3_cross_ra ( xx + 26 , xx + 438 , xx + 38 ) ; xx [ 24 ] = xx [
37 ] - xx [ 401 ] * xx [ 35 ] + xx [ 173 ] + xx [ 38 ] ; xx [ 25 ] = xx [ 19
] + xx [ 471 ] * xx [ 35 ] + xx [ 315 ] + xx [ 39 ] ; xx [ 26 ] = xx [ 21 ] +
xx [ 128 ] + xx [ 40 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx +
24 , xx + 36 ) ; xx [ 19 ] = xx [ 8 ] - ( pm_math_Vector3_dot_ra ( xx + 786 ,
xx + 32 ) + pm_math_Vector3_dot_ra ( xx + 861 , xx + 36 ) ) ; xx [ 8 ] = xx [
13 ] * xx [ 133 ] - xx [ 10 ] * xx [ 137 ] ; xx [ 21 ] = xx [ 10 ] + xx [ 131
] * xx [ 8 ] * xx [ 137 ] ; xx [ 10 ] = xx [ 13 ] - xx [ 131 ] * xx [ 8 ] *
xx [ 133 ] ; xx [ 8 ] = xx [ 14 ] - xx [ 131 ] * ( xx [ 14 ] * xx [ 133 ] *
xx [ 133 ] + xx [ 14 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 24 ] = xx [ 21 ] ;
xx [ 25 ] = xx [ 10 ] ; xx [ 26 ] = xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx
+ 29 , xx + 316 , xx + 36 ) ; xx [ 13 ] = xx [ 15 ] + xx [ 36 ] ; xx [ 14 ] =
xx [ 23 ] + xx [ 37 ] ; xx [ 15 ] = xx [ 14 ] * xx [ 133 ] - xx [ 13 ] * xx [
137 ] ; xx [ 23 ] = xx [ 13 ] + xx [ 131 ] * xx [ 15 ] * xx [ 137 ] ; xx [ 13
] = xx [ 14 ] - xx [ 131 ] * xx [ 15 ] * xx [ 133 ] ; xx [ 14 ] = xx [ 20 ] +
xx [ 38 ] ; xx [ 15 ] = xx [ 14 ] - xx [ 131 ] * ( xx [ 14 ] * xx [ 133 ] *
xx [ 133 ] + xx [ 14 ] * xx [ 137 ] * xx [ 137 ] ) ; xx [ 27 ] = xx [ 23 ] ;
xx [ 28 ] = xx [ 13 ] ; xx [ 29 ] = xx [ 15 ] ; xx [ 14 ] = xx [ 80 ] - (
pm_math_Vector3_dot_ra ( xx + 462 , xx + 24 ) + pm_math_Vector3_dot_ra ( xx +
745 , xx + 27 ) ) ; xx [ 24 ] = xx [ 21 ] - xx [ 152 ] ; xx [ 25 ] = xx [ 10
] + xx [ 151 ] ; xx [ 26 ] = xx [ 8 ] - xx [ 14 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx + 24 , xx + 27 ) ;
pm_math_Vector3_cross_ra ( xx + 24 , xx + 223 , xx + 36 ) ; xx [ 24 ] = xx [
23 ] - xx [ 289 ] * xx [ 14 ] + xx [ 132 ] + xx [ 36 ] ; xx [ 25 ] = xx [ 13
] + xx [ 232 ] * xx [ 14 ] + xx [ 169 ] + xx [ 37 ] ; xx [ 26 ] = xx [ 15 ] +
xx [ 157 ] + xx [ 38 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 161 , xx +
24 , xx + 36 ) ; xx [ 8 ] = xx [ 22 ] - ( pm_math_Vector3_dot_ra ( xx + 465 ,
xx + 27 ) + pm_math_Vector3_dot_ra ( xx + 748 , xx + 36 ) ) ; xx [ 20 ] = -
xx [ 187 ] ; xx [ 21 ] = - xx [ 188 ] ; xx [ 22 ] = - xx [ 189 ] ; xx [ 23 ]
= - xx [ 190 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 20 , xx + 16 , xx
+ 24 ) ; xx [ 20 ] = xx [ 27 ] - xx [ 146 ] * xx [ 8 ] + xx [ 170 ] - xx [ 24
] ; xx [ 21 ] = xx [ 28 ] + xx [ 155 ] * xx [ 8 ] + xx [ 171 ] - xx [ 25 ] ;
xx [ 22 ] = xx [ 29 ] - xx [ 156 ] * xx [ 8 ] + xx [ 172 ] - xx [ 26 ] ; xx [
23 ] = xx [ 193 ] ; xx [ 24 ] = xx [ 194 ] ; xx [ 25 ] = - xx [ 291 ] ; xx [
26 ] = - xx [ 770 ] ; xx [ 27 ] = - xx [ 771 ] ; xx [ 28 ] = - xx [ 772 ] ;
xx [ 29 ] = - xx [ 773 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 26 , xx
+ 16 , xx + 36 ) ; xx [ 26 ] = xx [ 32 ] + xx [ 381 ] * xx [ 19 ] + xx [ 751
] - xx [ 36 ] ; xx [ 27 ] = xx [ 33 ] - xx [ 383 ] * xx [ 19 ] + xx [ 752 ] -
xx [ 37 ] ; xx [ 28 ] = xx [ 34 ] - xx [ 156 ] * xx [ 19 ] + xx [ 753 ] - xx
[ 38 ] ; xx [ 29 ] = xx [ 262 ] ; xx [ 30 ] = xx [ 282 ] ; xx [ 31 ] =
0.1894395791916105 ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 16 , xx +
32 ) ; xx [ 15 ] = xx [ 0 ] - xx [ 286 ] * xx [ 11 ] + xx [ 415 ] ; xx [ 16 ]
= xx [ 1 ] - xx [ 303 ] * xx [ 11 ] + xx [ 416 ] ; xx [ 17 ] = xx [ 2 ] - xx
[ 304 ] * xx [ 11 ] + xx [ 417 ] ; pm_math_Quaternion_xform_ra ( xx + 588 ,
xx + 15 , xx + 0 ) ; xx [ 15 ] = xx [ 32 ] - xx [ 0 ] ; xx [ 16 ] = xx [ 33 ]
- xx [ 1 ] ; xx [ 17 ] = xx [ 34 ] - xx [ 2 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 813 , xx + 15 , xx + 0 ) ; deriv [
0 ] = state [ 1 ] ; deriv [ 1 ] = xx [ 12 ] ; deriv [ 2 ] = state [ 3 ] ;
deriv [ 3 ] = xx [ 3 ] ; deriv [ 4 ] = state [ 5 ] ; deriv [ 5 ] = xx [ 4 ] ;
deriv [ 6 ] = state [ 7 ] ; deriv [ 7 ] = xx [ 5 ] ; deriv [ 8 ] = state [ 9
] ; deriv [ 9 ] = xx [ 11 ] ; deriv [ 10 ] = state [ 11 ] ; deriv [ 11 ] = xx
[ 6 ] ; deriv [ 12 ] = state [ 13 ] ; deriv [ 13 ] = xx [ 7 ] ; deriv [ 14 ]
= state [ 15 ] ; deriv [ 15 ] = xx [ 35 ] ; deriv [ 16 ] = state [ 17 ] ;
deriv [ 17 ] = xx [ 19 ] ; deriv [ 18 ] = state [ 19 ] ; deriv [ 19 ] = xx [
14 ] ; deriv [ 20 ] = state [ 21 ] ; deriv [ 21 ] = xx [ 8 ] ; deriv [ 22 ] =
state [ 23 ] ; deriv [ 23 ] = pm_math_Vector3_dot_ra ( xx + 20 , xx + 23 ) ;
deriv [ 24 ] = state [ 25 ] ; deriv [ 25 ] = pm_math_Vector3_dot_ra ( xx + 26
, xx + 29 ) ; deriv [ 26 ] = state [ 27 ] ; deriv [ 27 ] = xx [ 9 ] * xx [ 2
] ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
cst_robotarm_breach_98bf360f_6_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [
0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [
0 ] ; bounds [ 5 ] = xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [
0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ; bounds [ 10 ] = xx
[ 0 ] ; bounds [ 11 ] = xx [ 0 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] =
xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16
] = xx [ 0 ] ; bounds [ 17 ] = xx [ 0 ] ; bounds [ 18 ] = xx [ 0 ] ; bounds [
19 ] = xx [ 0 ] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx [ 0 ] ;
bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0
] ; bounds [ 25 ] = xx [ 0 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27 ] = xx
[ 0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
cst_robotarm_breach_98bf360f_6_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx
[ 0 ] ; bounds [ 1 ] = xx [ 1 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx
[ 1 ] ; bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx
[ 0 ] ; bounds [ 7 ] = xx [ 1 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx
[ 1 ] ; bounds [ 10 ] = xx [ 0 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] =
xx [ 0 ] ; bounds [ 13 ] = xx [ 1 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15
] = xx [ 1 ] ; bounds [ 16 ] = xx [ 0 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [
18 ] = xx [ 0 ] ; bounds [ 19 ] = xx [ 1 ] ; bounds [ 20 ] = xx [ 0 ] ;
bounds [ 21 ] = xx [ 1 ] ; bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 1
] ; bounds [ 24 ] = xx [ 0 ] ; bounds [ 25 ] = xx [ 1 ] ; bounds [ 26 ] = xx
[ 0 ] ; bounds [ 27 ] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
