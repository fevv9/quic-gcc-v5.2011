/*======================================================================*/
/*                       QUALCOMM                                       */
/*                                                                      */
/*                       Copyright (c) 2010                             */
/*                       All Rights Reserved                            */
/*                                                                      */
/*======================================================================*/
/*======================================================================*/
/* Fast Float System Class   (qdouble)                                   */
/* +, -, *, /, sqrt, fabs, >, <                                         */
/* this class is used to define the qdouble aritmetic operations         */
/*   FUNCTIONS Optimized floating point operators                       */
/*======================================================================*/
/*    All aximomatic arithmetic operators to emulate a new qdouble type  */
/*                                                                      */
/*  REVISION HISTORY:                                                   */
/*  =================                                                   */
/*                                                                      */
/*  Author      Date           Comments                                 */
/*  ------------------------------------------------------------------- */
/*  DJH         01/29/10       created for V2 first version             */
/*                             all +,-,+=,-=,*,/,<,fabs,sqrt            */
/*                             come constants                           */
/*                             doesn't make any difference              */
/*  DJH          02/03/10      added > and all conmbinations of qdouble  */
/*                             and const double for all commutivity     */
/*======================================================================*/
/*                                                                      */
/*   ARCHITECTURE                                                       */
/*       HEXAGON V2-V3                                                    */
/*======================================================================*/

/*
  MANTISSA bits 63 downto 16 | EXPONENT bits 15 downto 0
*/
#include "fastmath_dlib.h"

typedef lint qdouble;

inline qdouble qd_add (qdouble a, qdouble b);
inline qdouble qd_add_dq (const double a, qdouble b);
inline qdouble qd_add_qd (qdouble  a, const double b);
inline qdouble qd_sub (qdouble  a, qdouble b);
inline qdouble qd_sub_dq (const double a, qdouble b);
inline qdouble qd_sub_qd (qdouble  a, const double b);
inline qdouble qd_mul (qdouble  a, qdouble b);
inline qdouble qd_mul_dq (const double a, qdouble b);
inline qdouble qd_mul_qd (qdouble  a, const double b);
inline qdouble qd_div (qdouble  a, qdouble b);
inline qdouble qd_div_qd (qdouble  a, const double b);
inline qdouble qd_div_dq (const double a, qdouble b);
inline int qd_lt (qdouble  a, qdouble b);
inline int qd_lt_qd (qdouble  a, const double b);
inline int qd_lt_dq (const double a, qdouble  b);
inline int qd_gt (qdouble  a, qdouble b);
inline int qd_gt_qd (qdouble  a, const double b);
inline int qd_gt_dq (const double a, qdouble  b);
inline qdouble qd_sqrt(qdouble a);
inline qdouble qd_fabs(qdouble a);
inline qdouble toqdouble(double a);
inline double todouble(qdouble a);
inline qdouble qd_neg (qdouble a);

inline void set_mant(qdouble expmant, lint);
inline void set_exp(qdouble, int);
inline lint get_mant(qdouble expmant);
inline int get_exp(qdouble expmant);

/* qdouble *= operators */
inline qdouble self_mul (qdouble, qdouble);
inline qdouble self_mul_d (const double);

/* qdouble /= operators */
inline qdouble self_div (qdouble, qdouble);
inline qdouble self_div_dd (double expmant, const double);

/* qdouble += operators */
inline qdouble self_increment (qdouble, qdouble);
inline qdouble self_increment_qd (qdouble, const double);

/* qdouble -= operators */
inline qdouble self_sub (qdouble, qdouble);
inline qdouble self_sub_dd (double expmant, const double);

inline qdouble create_qdouble ();
inline qdouble create_qdouble_li(lint, int);
