/*======================================================================*/
/*                       QUALCOMM                                       */
/*                                                                      */
/*                       Copyright (c) 2010                             */
/*                       All Rights Reserved                            */
/*                                                                      */
/*======================================================================*/
/*======================================================================*/
/*   FUNCTIONS C Versions of divide and inverse floating point operators*/
/*======================================================================*/
/*      c = fdiv(a, b)                                                  */
/*      c = frecip(a)                                                   */
/*                                                                      */
/*  REVISION HISTORY:                                                   */
/*  =================                                                   */
/*                                                                      */
/*  Author      Date           Comments                                 */
/*  ------------------------------------------------------------------- */
/*  DJH         01/29/10       created for V2 first version             */
/*                             divide function nott opimized            */
/*                             inverse not functional                   */
/*======================================================================*/
/*                                                                      */
/*   ARCHITECTURE                                                       */
/*       HEXAGON V2-V3                                                    */
/*======================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
  #include "fastmath_dlib.h"
  #include <stdio.h>
#ifdef __cplusplus
}
#endif

int HEXAGON_R_normamt_P(lint r)
{
       int norm = 0;
       for(norm = 0; norm < 64; norm++)
        if((r >> norm) == -1 || r >> norm == 0) break;
       norm = 63 - norm;
       if(r == 0) norm = 0;
       return(norm);
}

/*======================================================================*/
/*   FUNCTIONS Optimized floating point operators                       */
/*======================================================================*/
/*      c = fadd_asm(a, b)                                              */
/*      c = fsub_asm(a, b)                                              */
/*      c = fmpy_asm(a, b)                                              */
/*      c = frecipsqrt_asm(a)                                           */
/*      c = frecip_asm(a)                                               */
/*                                                                      */
/*  REVISION HISTORY:                                                   */
/*  =================                                                   */
/*                                                                      */
/*  Author      Date           Comments                                 */
/*  ------------------------------------------------------------------- */
/*  DJH         01/29/10       created for V2 first version             */
/*                             all adds lose 1 bit of precision but     */
/*                             doesn't make any difference              */
/*  DJH          02/03/10      added reciprocal assembly routine        */
/*                             improves div accuracy                    */
/*======================================================================*/
/*                                                                      */
/*   ARCHITECTURE                                                       */
/*       HEXAGON V2-V3                                                    */
/*======================================================================*/

QDOUBLE dadd(QDOUBLE a,QDOUBLE b) {
      QDOUBLE c;
      lint manta = a & MANTMASK;
      int  expa  = HEXAGON_R_sxth_R(a) ;
      lint mantb = b & MANTMASK;
      int  expb  = HEXAGON_R_sxth_R(b) ;
      int  exp, expdiff, k, hi, lo, cn;
      lint mant;

        expdiff = (int) HEXAGON_P_vabsdiffh_PP(a, b);
        expdiff = HEXAGON_R_sxth_R(expdiff) ; 
        if (expdiff > 63) { expdiff = 62;} 
        if (expa > expb) {
          exp = expa + 1;
          expa = 1;
          expb = expdiff + 1;
        } else {
          exp = expb + 1;
          expb = 1;
          expa = expdiff + 1;
        }
        mant = (manta>>expa) + (mantb>>expb);

        hi = (int) (mant>>32);
        lo = (int) (mant);
        
        k =  HEXAGON_R_normamt_R(hi);
        if(hi == 0 || hi == -1) k =  31+HEXAGON_R_normamt_R(lo);

        mant = (mant << k);
        cn  = (mant == 0x8000000000000000LL);
        exp = exp - k + cn;
        if (mant ==  0 || mant == -1)  exp = 0x8001;
        c = (mant & MANTMASK) | (((lint) exp) & EXP_MASK);
      return(c);
 }

 QDOUBLE dsub(QDOUBLE a,QDOUBLE b) {
      QDOUBLE c;
      lint manta = a & MANTMASK;
      int  expa  = HEXAGON_R_sxth_R(a) ;
      lint mantb = b & MANTMASK;
      int  expb  = HEXAGON_R_sxth_R(b) ;
      int  exp, expdiff, j, k, hi, lo, cn;
      lint mant;

        expdiff = (int) HEXAGON_P_vabsdiffh_PP(a, b);
        expdiff = HEXAGON_R_sxth_R(expdiff) ; 
        if (expdiff > 63) { expdiff = 62;} 
        if (expa > expb) {
          exp = expa + 1;
          expa = 1;
          expb = expdiff + 1;
        } else {
          exp = expb + 1;
          expb = 1;
          expa = expdiff + 1;
        }
        mant = (manta>>expa) - (mantb>>expb);

        hi = (int) (mant>>32);
        lo = (int) (mant);
        
        k =  HEXAGON_R_normamt_R(hi);
        if(hi == 0 || hi == -1) k =  31+HEXAGON_R_normamt_R(lo);

        mant = (mant << k);
        cn  = (mant == 0x8000000000000000LL);
        exp = exp - k + cn;

        if (mant ==  0 || mant == -1)  exp = 0x8001;
        c = (mant & MANTMASK) | (((lint) exp) & EXP_MASK);
      return(c);
 }
 
 QDOUBLE dmpy(QDOUBLE a,QDOUBLE b) {
        QDOUBLE c;
        lint manta = a & MANTMASK;
        int  expa  = HEXAGON_R_sxth_R(a) ;
        lint mantb = b & MANTMASK;
        int  expb  = HEXAGON_R_sxth_R(b) ;
        int exp, k;
        lint mant;
        int          hia, hib, hi, lo;
        unsigned int loa, lob;

        hia = (int)(a >> 32);
        loa = HEXAGON_R_extractu_RII((int)manta, 31, 1); 
        hib = (int)(b >> 32);
        lob = HEXAGON_R_extractu_RII((int)mantb, 31, 1); 

        mant = HEXAGON_P_mpy_RR(hia, lob);
        mant = HEXAGON_P_mpyacc_RR(mant,hib, loa);
        mant = (mant >> 30) + (HEXAGON_P_mpy_RR(hia, hib)<<1);

        hi = (int) (mant>>32);
        lo = (int) (mant);
        
        k =  HEXAGON_R_normamt_R(hi);
        if(hi == 0 || hi == -1) k =  31+HEXAGON_R_normamt_R(lo);
        mant = mant << k;
        exp = expa + expb - k;
        if (mant ==  0 || mant == -1)  exp = 0x8001;
        c = (mant & MANTMASK) | (((lint) exp) & EXP_MASK);
        return(c);
 }

 lint qd2d(QDOUBLE a) {
        lint exp;
        lint mant;
        lint ic, s;

        mant = a & MANTMASK;
        exp  = HEXAGON_R_sxth_R(a) ;
        exp = (exp + 1022) << 52;
        exp = exp & 0x7FF0000000000000LL;

        s = 0x0LL;
        if (mant < 0) {
          mant = - mant;
          s = 0x8000000000000000LL;
        }
        mant = (mant>>10) & 0x000FFFFFFFFFFFFFLL;
        ic = s | exp | mant;
        return (ic);
 }

QDOUBLE d2qd(lint ia) {
        lint exp;
        lint mant;
        QDOUBLE c;

        exp = ((ia >> 52) & 0x7FF) - 1022;
        mant = ((ia << 10) | 0x4000000000000000LL) & 0x7FFFFFFFFFFFF000LL;
        if (ia & 0x8000000000000000LL) mant = -mant;

        c = (mant & MANTMASK) | (((lint) exp) & EXP_MASK);
        return(c);
 }

QDOUBLE drecipsqrt(QDOUBLE inputin){
        const lint SQRT_ONE_HALF = 0x5A827999FCEF3241LL;  /* ~ sqrt(1/2) */
        lint   seed_x, seed_x_707, input, tseed_x, x2, ax3;
        int   Odd, offset, bitcount, hia, hib, hic;
        unsigned int loa, lob, loc;
        QDOUBLE expmant;
        /* Number of redundant sign bits */

        bitcount = HEXAGON_R_sxth_R(inputin) ;
        bitcount = 2 - bitcount;
        input = inputin & MANTMASK;
        if(input ==  0) return(0x4000000000007FF0LL);
        if(input == -1) return(0xC000000000007FF0LL);

        /* extract bit 1 for even/odd test of exponent */
        Odd = bitcount & 1;
        /* divide exponent by 2 */
        bitcount = bitcount >> 1;

         //iteration 1 8bits
        offset = HEXAGON_R_extractu_RII(input>>32, 8, 22);
        tseed_x= (unsigned int)(recipsqrtTable_qd[offset]);
        seed_x = 0x40000000 + (tseed_x << 22); /* 0x100 < 7 */

         //iteration 2 16bits
        x2   = HEXAGON_P_mpy_RR(seed_x, seed_x);  /* x[n]^2 */
        ax3  = HEXAGON_P_mpy_RR(input>>32, x2>>31)<<1;
        ax3  = 0x6000000000000000LL - ax3;
        x2   = HEXAGON_P_mpy_RR(seed_x, ax3>>32);    /* x[n+1]=2*x[n]*(0.75-a*x[n]^2) */
        seed_x = (int) (x2 >> 30);

         //iteration 3 32bits
        x2   = HEXAGON_P_mpy_RR(seed_x, seed_x)>>31;  /* x[n]^2 */
        ax3  = 2*HEXAGON_P_mpy_RR(input>>32, x2);
        ax3  = 0x6000000000000000LL - ax3;
        seed_x = HEXAGON_P_mpy_RR(seed_x, ax3>>32)<<2;    /* x[n+1]=2*x[n]*(0.75-a*x[n]^2) */

        //iteration 4 64bits
        hia = (int)(input >> 32);
        loa = HEXAGON_R_extractu_RII((int)input, 31, 1); 
        hib = (int)(seed_x >> 32);
        lob = HEXAGON_R_extractu_RII((int)seed_x, 31, 1); 
  
        x2 = HEXAGON_P_mpy_RR(hib, lob)>>29;
        x2+= HEXAGON_P_mpy_RR(hib, hib)<<1;

        hic = (int)(x2 >> 32);
        loc = HEXAGON_R_extractu_RII((int)x2, 31, 1); 

        ax3 = HEXAGON_P_mpy_RR(hia, loc);
        ax3 = HEXAGON_P_mpyacc_RR(ax3,hic, loa);
        ax3 = (ax3 >> 30) + (HEXAGON_P_mpy_RR(hia, hic)<<1);

        ax3 = 0x6000000000000000LL - ax3;          /* x[n+1]= 2*x[n]*(0.75-a*x[n]^2) */

        hia = (int)(ax3 >> 32);
        loa = HEXAGON_R_extractu_RII((int)ax3, 31, 1); 

        seed_x = HEXAGON_P_mpy_RR(hib, loa);
        seed_x = HEXAGON_P_mpyacc_RR(seed_x,hia, lob);
        seed_x = (seed_x >> 29) + (HEXAGON_P_mpy_RR(hia, hib)<<2);
        //////////////////////////////////////////////////////////
        hia = 0x5A827999;
        loa = 0x7E779920;
        hib = (int)(seed_x >> 32);
        lob = HEXAGON_R_extractu_RII((int)seed_x, 31, 1); 

        /* if exponent is Odd multiply by sqrt(2) /*/
        seed_x_707 = HEXAGON_P_mpy_RR(hia, lob);
        seed_x_707 = HEXAGON_P_mpyacc_RR(seed_x_707,hib, loa);
        seed_x_707 = (seed_x_707 >> 29) + (HEXAGON_P_mpy_RR(hia, hib)<<2);

        if (Odd) seed_x = seed_x_707;
        expmant = (seed_x & MANTMASK) | (((lint) bitcount) & EXP_MASK);
        return(expmant);
}

QDOUBLE drecip(QDOUBLE inputin){
        int   bitcount;
        int   tseed_x, hia, hib;
        unsigned int loa, lob;
        long long int ax, input, seed_x;
        int   Neg, offset ;
        QDOUBLE expmant;

        bitcount = HEXAGON_R_sxth_R(inputin) ;
        input = inputin & MANTMASK;
        if(input ==  0) return(0x4000000000007FF0LL);
        if(input == -1) return(0xC000000000007FF0LL);
        Neg = 0;
        if(input < 0) { input = -input; Neg = 1; }

        bitcount = 1 - bitcount;

        //-------------- iteration 1 -------------------
        offset = HEXAGON_R_extractu_RII(input>>32, 8, 22);
        tseed_x= (unsigned int)(recipTable_qd[offset]);
        seed_x = 0x40000000 + (tseed_x << 22); //0x100 < 7

        //-------------- iteration 2 -------------------
        hia = (int)(input >> 32);
        hib = (int)(seed_x );

        ax = (HEXAGON_P_mpy_RR(hia, hib)<<1);
        ax = 0x8000000000000000LL - ax;           /* x[n+1]= 2*x[n]*(1-a*x[n]) */

        hia = (int)(seed_x);
        hib = (int)(ax >> 32);
        seed_x = HEXAGON_P_mpy_RR(hia, hib)<<2;

        //-------------- iteration 3 -------------------
        hia = (int)(input >> 32);
        hib = (int)(seed_x >> 32);

        ax = (HEXAGON_P_mpy_RR(hia, hib)<<1);
        ax = 0x8000000000000000LL - ax;           /* x[n+1]= 2*x[n]*(1-a*x[n]) */

        hia = (int)(seed_x >> 32);
        hib = (int)(ax >> 32);
        seed_x = HEXAGON_P_mpy_RR(hia, hib)<<2;
        //-------------- iteration 4 -------------------
        hia = (int)(input >> 32);
        loa = (unsigned int)(input); loa >>= 16;
        hib = (int)(seed_x >> 32);
        lob = (unsigned int)(seed_x); lob >>= 16;
        ax = HEXAGON_P_mpy_RR(hia, lob);
        ax = HEXAGON_P_mpyacc_RR(ax,hib, loa) ;
        ax = (ax >> 15) + (HEXAGON_P_mpy_RR(hia, hib)<<1);

        ax = 0x8000000000000000LL - ax;          /* x[n+1]= 2*x[n]*(1-a*x[n]) */

        hia = (int)(seed_x >> 32);
        loa = (unsigned int)(seed_x); loa >>= 16;
        hib = (int)(ax >> 32);
        lob = (unsigned int)(ax); lob >>= 16;

        seed_x = HEXAGON_P_mpy_RR(hia, lob);
        seed_x = HEXAGON_P_mpyacc_RR(seed_x, hib, loa);
        seed_x = (seed_x >> 14) + (HEXAGON_P_mpy_RR(hia, hib)<<2);

        if(Neg) seed_x = -seed_x;
        expmant = (seed_x & MANTMASK) | (((lint) bitcount) & EXP_MASK);
        return(expmant);
}
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
