/*======================================================================*/
/*                       QUALCOMM                                       */
/*                                                                      */
/*                       Copyright (c) 2010                             */
/*                       All Rights Reserved                            */
/*                                                                      */
/*======================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
  #include <stdio.h>
  #include <math.h>
#ifdef __cplusplus
}
#endif

/* Needed since we cannot include hexagon_protos.h */
#define HEXAGON_P_mpyacc_RR __builtin_HEXAGON_M2_dpmpyss_acc_s0 
#define HEXAGON_P_mpy_RR __builtin_HEXAGON_M2_dpmpyss_s0
#define HEXAGON_P_vabsdiffh_PP __builtin_HEXAGON_M2_vabsdiffh
#define HEXAGON_R_extractu_RII __builtin_HEXAGON_S2_extractu
#define HEXAGON_R_insert_RII __builtin_HEXAGON_S2_insert
#define HEXAGON_R_normamt_P __builtin_HEXAGON_S4_clbpnorm
#define HEXAGON_R_normamt_R __builtin_HEXAGON_S2_clbnorm 
#define HEXAGON_R_sxth_R __builtin_HEXAGON_A2_sxth


#define QDZERO   0x0000000000008000LL
#define MANTMASK 0xFFFFFFFFFFFF0000LL
#define EXP_MASK 0x000000000000FFFFLL
#define FRAC32   int
#define QFLOAT   long long
#define QDOUBLE  long long
#define lint     long long

/*======================================================================*
  8 bit initial seed tables for inverse and inverse square root
 *======================================================================*/

extern const unsigned char recipTable_qd[] ;
extern const unsigned char recipsqrtTable_qd[] ;

/*======================================================================*
  Primitives for all assembly code functions used in qfloat_lib.h
 *======================================================================*/

 QDOUBLE dadd_asm(QDOUBLE a,QDOUBLE b) ;
 QDOUBLE dsub_asm(QDOUBLE a,QDOUBLE b) ;
 QDOUBLE dmpy_asm(QDOUBLE a,QDOUBLE b) ;
 QDOUBLE dadd(QDOUBLE a,QDOUBLE b) ;
 QDOUBLE dsub(QDOUBLE a,QDOUBLE b) ;
 QDOUBLE dmpy(QDOUBLE a,QDOUBLE b) ;
 lint    qd2d(QDOUBLE a) ;
 QDOUBLE d2qd(lint ia) ;
 QDOUBLE drecipsqrt(QDOUBLE inputin);
 QDOUBLE drecip(QDOUBLE inputin);

/* -------------------------------------------------------------------- */
/* -  end of frecip                                                   - */
/* -------------------------------------------------------------------- */
/*======================================================================*/
/*                       QUALCOMM                                       */
/*                                                                      */
/*                       Copyright (c) 2010                             */
/*                       All Rights Reserved                            */
/*                                                                      */
/*======================================================================*/
