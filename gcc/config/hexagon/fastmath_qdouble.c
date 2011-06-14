/////////////////////////////////////////////////////////////////////////
//  Qfloat Number Systems library function file
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>
#include "fastmath_qdouble.h"
#include "fastmath_tables_qd.h"

/* ========= helper functions ======================================== */

/* 
   assign exponent value
 */
inline void set_exp_qd(qdouble* expmant, int e)
{
   lint le = (lint) e;
   *expmant = (*expmant & MANTMASK) | (le & EXP_MASK );
}

/* 
   assign mantissa value
 */
inline void set_mant_qd(qdouble* expmant, lint m)
{
   *expmant = (*expmant & EXP_MASK) | (MANTMASK & m);
}

/* 
   retrieve just exponent value
 */
inline int get_exp_qd(qdouble expmant)
{
   int exp;
   exp = HEXAGON_R_sxth_R(expmant);
   return(exp);
}

/* 
   retrieve just mantissa value
 */
inline lint get_mant_qd(qdouble expmant)
{
   lint mant = expmant & MANTMASK;
   return(mant);
}

/* 
   Stub function calls float to qdouble assembly function
   checks for zero and assigns the QDZERO
 */
inline qdouble toqdouble(double x)
{
   qdouble y;
   lint * ix = (lint *) &x ;
   if(x != 0.0)
     y = d2qd(*ix);
   else
     y = QDZERO;      //make sure 0 is min number

   return(y);
}

/*
   Stub function calls qdouble to float conversion assembly
   flushes denorms to zero (exp < -1024
 */
inline double todouble(qdouble expmant)
{
   double *y;
   lint iy;
   if(get_exp_qd(expmant) < -1023)     //filter denorms into 0
     iy = 0x0LL;
   else
     iy = qd2d(expmant);
   y = (double *) &iy;
   return(*y);
}

/*
   Constructor, initialize with a native mantissa, exponent integer pair 
   qdouble x(0x4000000000000000LL, -72);
 */
inline qdouble create_qdouble_li(lint a, int b)
{
  qdouble expmant;
  expmant = (a & MANTMASK) | (((lint) b) & EXP_MASK);
  return expmant;
}
  
/*
   Constructor, initialize with a native QDZERO
   qdouble x;
 */
inline qdouble create_qdouble()
{
  qdouble expmant;
  expmant= QDZERO;
  return expmant;
}

/*
   Overload operator qdouble * qdouble
 */
inline qdouble qd_mul (qdouble a, qdouble b)
{
     qdouble c;
     c = dmpy_asm(a, b);
     return(c);
}
inline qdouble qd_mul_qd (qdouble a, const double b)
{
     qdouble c, d;
     d = b;
     c = dmpy_asm(a, d);
     return(c);
}

inline qdouble qd_mul_dq (const double a, qdouble b)
{
     qdouble c, d;
     d = a;
     c = dmpy_asm(d, b);
     return(c);
}

inline qdouble qd_self_mul (qdouble expmant, qdouble y) {
     expmant = dmpy_asm(expmant, y);
     return expmant;
}

inline qdouble qd_self_mul_qd (qdouble expmant, const double y) {
     qdouble c, qy;
     qy = y;
     expmant = dmpy_asm(expmant, qy);
     return expmant;
}

/*
    Overloaded divide operator 
    qdouble y = a/b = a * 1/b;
*/
inline qdouble qd_div (qdouble a, qdouble b)
{
     qdouble c,d;
     c = drecip(b);
     c = dmpy_asm(a, c);
     return(c);
}

/*
    Overloaded divide operator 
    qdouble y = a/b = a * 1/b
*/
inline qdouble qd_div_qd (qdouble a, const double b)
{
     qdouble c, qb;
     qb = b;
     
     c = drecip(qb);
     c = dmpy_asm(a, c);
     return(c);
}
inline qdouble qd_div_dq (const double a, qdouble b)
{
     qdouble c, qa;
     qa = a;
     
     c = drecip(b);
     c = dmpy_asm(qa, c);
     return(c);

}
inline qdouble qd_self_div (qdouble expmant, qdouble y) {
     qdouble c;
     c = drecip(y);
     expmant = dmpy_asm(expmant, c);
     return expmant;
}

inline qdouble qd_self_div_dd (double expmant, const double y) {
     qdouble c, qy;
     qy = y;
     c = drecip(qy);
     expmant = dmpy_asm(expmant, c);
     return expmant;
}
/*
    Overloaded compare operator 
    y = a<b;
*/
inline int qd_lt (qdouble a, qdouble b)  
{
     int d = -1;
     qdouble c;
     c = dsub_asm(b, a);
     if (get_mant_qd(c) < 0) d = 0;
     return(d);
}

/*
    Overloaded compare with const operator 
    y = a< 2.0;
*/
inline int qd_lt_qd (qdouble a, const double b)  
{
     int d = -1;
     qdouble c, qb;
     qb = b;
     c = dsub_asm(qb, a);

     if (get_mant_qd(c) < 0) d = 0;
     return(d);
}

inline int qd_lt_dq (const double a, qdouble b)  
{
     int d = -1;
     qdouble c, qa;
     qa = a;
     c = dsub_asm(b, qa);

     if (get_mant_qd(c) < 0) d = 0;
     return(d);
}

/*
    Overloaded compare greater operator 
    y = a>b;
*/
inline int qd_gt (qdouble a, qdouble b)  
{
     int d = 0;
     qdouble c;
     c = dsub_asm(a, b);
     if (get_mant_qd(c) > 0) d = 1;
     return(d);
}

/*
    Overloaded compare with const operator 
    y = a> 2.0;
*/
inline int qd_gt_qd (qdouble a, const double b)  
{
     int d = 0;
     qdouble c, qb;
     qb = b;
     c = dsub_asm(a, qb);

     if (get_mant_qd(c) > 0) d = 1;
     return(d);
}


inline int qd_gt_dq (const double a, qdouble b)  
{
     int d = 0;
     qdouble c, qa;
     qa = a;
     c = dsub_asm(qa, b);

     if (get_mant_qd(c) > 0) d = 1;
     return(d);
}

/*
    Overloaded sqrt math.h fnction operator 
    qdouble y = sqrt(a);
*/
inline qdouble qd_sqrt (qdouble a)
{
     qdouble c;
     c = drecipsqrt(a);
     c = dmpy_asm(c, a);
     return(c);
}

/*
    Overloaded math.h absolute operator 
    qdouble y = fabs(a);
*/
inline qdouble qd_fabs (qdouble a)
{
     lint mant;
     qdouble c;
     mant = get_mant_qd(a);
     if(mant & 0x8000000000000000LL) mant = -mant;

     set_mant_qd(&c, mant);
     set_exp_qd(&c, get_exp_qd(a)); 
     return(c);
}

/*
    Overloaded accumulate operator 
    qdouble y += a;
*/
inline qdouble qd_self_increment (qdouble expmant, qdouble y) {
     expmant = dadd_asm(expmant, y);
     return expmant;
}

inline qdouble qd_self_increment_qd (qdouble expmant, const double y) {
     qdouble qy;
     qy = y;
     expmant = dadd_asm(expmant, qy);
     return expmant;
}

/*
    Overloaded add operator 
    qdouble y = a + b;
*/
inline qdouble qd_add (qdouble x, qdouble y) {
     qdouble c;
     c = dadd_asm(x, y);
     return(c);
}

inline qdouble qd_add_qd (qdouble x, const double y) {
     qdouble c, qy;
     qy = y;
 
     c = dadd_asm(x, qy);
     return(c);
}

inline qdouble qd_add_dq (const double x, qdouble y) {
     qdouble c, qx;
     qx = x;
 
     c = dadd_asm(qx, y);
     return(c);
}

/*
    Overloaded subtract operator 
    qdouble y = a - b;
*/
inline qdouble qd_sub (qdouble x, qdouble y) {
     qdouble c;

     c = dsub_asm(x, y);
     return(c);
}

inline qdouble qd_sub_qd (qdouble x, const double y) {
     qdouble c, qy;
     qy = y;

     c = dsub_asm(x, qy);
     return(c);
}

inline qdouble qd_sub_dq (const double x, qdouble y) {
     qdouble c, qx;
     qx = x;

     c = dsub_asm(qx, y);
     return(c);
}


/*
    Overloaded negate operator 
    qdouble y = - b;
*/
inline qdouble qd_neg (qdouble a) {
    lint manta = a & MANTMASK;
    int  expa  = HEXAGON_R_sxth_R(a) ;
    manta =  -manta;
    if (manta ==  0 || manta == -1)  expa = 0x8001;
    a = (manta & MANTMASK) | (((lint) expa) & EXP_MASK);
    return(a);
}

/*
    Overloaded accumulate negatively operator 
    qdouble y -= a;
*/
inline qdouble qd_self_sub (qdouble expmant, qdouble y) {
     expmant = dsub_asm(expmant, y);
     return expmant;
}

inline qdouble qd_self_sub_dd (double expmant, const double y) {
     qdouble qy;
     qy = y;
     expmant = dsub_asm(expmant, qy);
     return expmant;
}




/*----------------------------------------------------------
  BEGIN API for fast math library 
  ----------------------------------------------------------*/
extern double __hexagon_subdf3(double, double);
extern double __hexagon_muldf3(double, double);
extern double __hexagon_divdf3(double, double);
extern double __hexagon_negdf3(double);
extern int __hexagon_ltddf2(double, double);
extern int __hexagon_gtdf2(double, double);


#define CREATE_FAST_MATH_FN_1(NAME, QDFN) \
inline double NAME(double in1) {          \
  return (todouble                        \
          (QDFN(toqdouble(in1))));        \
}

#define CREATE_FAST_MATH_FN_2(NAME, QDFN)           \
inline double NAME(double in1, double in2) {        \
  return (todouble                                  \
          (QDFN(toqdouble(in1),                     \
                 toqdouble(in2))));                 \
}

#define CREATE_FAST_MATH_FN_2_INT(NAME, QDFN)       \
inline int NAME(double in1, double in2) {        \
  return (QDFN(toqdouble(in1),                      \
                 toqdouble(in2)));                  \
}
/*
 *
 *  A qdsp-named alias is required for each hexagon-named funciton.  
 *  When adding new hexagon-named functions, use QDSP_FAST_ALIAS() to 
 *  provide a suitable alias.  See examples below ...
 *
 */
#define QDSP_FAST_ALIAS(name) \
  extern __typeof(__hexagon_fast_ ## name) __qdsp_fast_ ## name \
  __attribute((alias("__hexagon_fast_" #name)))

CREATE_FAST_MATH_FN_2(__hexagon_fast_adddf3, qd_add);
QDSP_FAST_ALIAS(adddf3);

CREATE_FAST_MATH_FN_2(__hexagon_fast_subdf3, qd_sub);
QDSP_FAST_ALIAS(subdf3);

CREATE_FAST_MATH_FN_2(__hexagon_fast_muldf3, qd_mul);
QDSP_FAST_ALIAS(muldf3);

CREATE_FAST_MATH_FN_2(__hexagon_fast_divdf3, qd_div);
QDSP_FAST_ALIAS(divdf3);

CREATE_FAST_MATH_FN_1(__hexagon_fast_negdf2, qd_neg);
QDSP_FAST_ALIAS(negdf2);

CREATE_FAST_MATH_FN_2_INT(__hexagon_fast_ltdf2, qd_lt);
QDSP_FAST_ALIAS(ltdf2);

CREATE_FAST_MATH_FN_2_INT(__hexagon_fast_gtdf2, qd_gt);
QDSP_FAST_ALIAS(gtdf2);

CREATE_FAST_MATH_FN_1(fast_sqrt, qd_sqrt);

CREATE_FAST_MATH_FN_1(fast_fabs, qd_fabs);

#undef CREATE_FAST_MATH_FN
