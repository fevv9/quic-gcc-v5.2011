/* libgcc routines for the QDSP6.
   Copyright (C) 1998, 1999 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

	.macro FUNC_START name
	.text
	.p2align 5
	.globl __\name
	.type  __\name, @function
__\name:
	.endm

	.macro FUNC_END name
	.size  __\name, . - __\name
	.endm

	.macro FALLTHROUGH_TAIL_CALL name0 name1
	.size  __\name0, . - __\name0
	.globl __\name1
	.type  __\name1, @function
__\name1:
	.endm

#ifdef L_udivmodsi4
// r15 and p3 are assumed to not be clobbered
FUNC_START udivmodsi4
	{
		r3 = cl0(r0)        // magnitude of dividend
		r2 = r1             // move the divisor out of a return register
		p0 = cmp.gtu(r1,r0) // if divisor > dividend, underflow
		r1 = r0             // for underflow, remainder = dividend
	}
	{
		r0 = #0            // for underflow, quotient = 0
		if p0 jumpr r31    // if underflow, return
		r4 = cl0(r2)       // magnitude of divisor
		p1 = cmp.eq(r2,#1) // division by one is *easy*
	}
	{
		r0 = mux(p1,r1,r0) // if divide by 1, quotient = dividend
		r1 = mux(p1,r0,r1) // if divide by 1, remainder = 0
		if p1 jumpr r31    // if divide by 1, return
		r4 = sub(r4,r3)    // difference of magnitude
	}
	{
		r5 = #0            // result register
		r6 = #-1           // used for shifting 1's into the result
		r3 = asl(r2,r4)    // adjust divisor to magnitude of dividend
	}
	{
		loop0(1f,r4)        // loop count is difference in magnitude
		p1 = cmp.eq(r4,#0)  // if equal magnitude, skip loop
		p0 = cmp.gtu(r3,r1) // if dividend >= divisor, subtract
		r7 = sub(r1,r3)     // find dividend - divisor
	}
	{
		r1 = mux(p0,r1,r7) // if dividend >= divisor, select difference
		r4 = mux(p0,r0,r6) //   and shift 1 into the result, else 0
		r3 = lsr(r3,#1)    // shift divisor down
		if p1 jump 2f      // if equal magnitude, skip loop
	}
	.falign
1:
// p1 is false during the first iteration
	{
		r5:4= asl(r5:4,#1)  // shift in 1 or 0 from MSB of r4
		p0 = cmp.gtu(r3,r1) // if remainder >= divisor, subtract
		r7 = sub(r1,r3)     // find remainder - divisor
		if p1 jump 3f       // if original divisor > remainder, done
	}
	{
		p1 = cmp.gtu(r2,r7) // if original divisor > remainder, done
		r1 = mux(p0,r1,r7)  // if remainder >= divisor, select difference
		r4 = mux(p0,r0,r6)  //   and shift 1 into the result, else 0
		r3 = lsr(r3,#1)     // shift divisor down
	}:endloop0
	.falign
2:
		r5:4= asl(r5:4,#1) // shift in 1 or 0 from MSB of r4
	{
		r0 = r5   // put result in r0 for return
		jumpr r31
	}
	.falign
3:
		r4 = lc0 // get the shift amount from the remaining loop count
	{
		r0 = asl(r5,r4) // the remaining bits of the result are 0's
		jumpr r31
	}
FUNC_END udivmodsi4
#endif /* L_udivmodsi4 */

#if 0
// r15 and p3 are assumed to not be clobbered
FUNC_START udivmodsi4
	{
		r5 = cl0(r1)        // magnitude of divisor
		r6 = neg(r1)        // get negative divisor to extract lowest 1
		p0 = cmp.gtu(r1,r0) // if divisor > dividend, underflow
		r3:2 = r1:0         // move the inputs out of return registers
	}
	{
		r4 = cl0(r0)      // magnitude of dividend
		r8 = add(r5,#-31) // -amount to shift (-N) if divisor = 2^N
		r7 = add(r3,#-1)  // for divisor = 2^N, get bits 0 through N-1
		r6 = and(r1,r6)   // X & (-X) extracts lowest 1
	}
	{
		r5 = sub(r5,r4)    // difference of magnitude
		r0 = lsl(r2,r8)    // shift right by N to divide by 2^N
		r1 = and(r2,r7)    // and with bits 0 through N-1 to get mod 2^N
		p1 = cmp.eq(r1,r6) // if divisor = lowest 1(divisor), then = 2^N
	}
	{
		if p1 jumpr r31    // if divisor = 2^N, return
		r4 = asl(r3,r5)    // adjust divisor to magnitude of dividend
		p1 = cmp.eq(r5,#0) // if equal magnitude, skip loop
		r7 = #0            // result register, MSB always 0
	}
	{
		if p0 jump 4f       // if underflow, return
		p0 = cmp.gtu(r4,r2) // if dividend >= divisor, subtract
		r0 = sub(r2,r4)     // find dividend - divisor
	}
		loop0(1f,r5) // loop count is difference in magnitude
	{
		r1 = mux(p0,r2,r0) // if dividend >= divisor, select difference
		r6 = mux(p0,r7,r8) //   and shift 1 into the result, else 0
		r4 = lsr(r4,#1)    // shift divisor down
		if p1 jump 2f      // if equal magnitude, skip loop
	}
	.falign
1:
	{
		r7:6= asl(r7:6,#1)  // shift in 1 or 0 from MSB of r6
		p0 = cmp.gtu(r4,r1) // if remainder >= divisor, subtract
		r0 = sub(r1,r4)     // find remainder - divisor
		if p1 jump 3f       // if original divisor > remainder, done
	}
	{
		p1 = cmp.gtu(r3,r0) // if original divisor > remainder, done
		r1 = mux(p0,r1,r0)  // if remainder >= divisor, select difference
		r6 = mux(p0,r7,r8)  //   and shift 1 into the result, else 0
		r4 = lsr(r4,#1)     // shift divisor down
	}:endloop0
	.falign
2:
		r7:6= asl(r7:6,#1) // shift in 1 or 0 from MSB of r4
	{
		r0 = r7   // put result in r0 for return
		jumpr r31
	}
	.falign
3:
		r0 = lc0 // get the shift amount from the remaining loop count
	{
		r0 = asl(r7,r0) // shift 0's into remaining bits of the result
		jumpr r31
	}
	.falign
4:
	{
		r0 = #0   // if underflow, quotient = 0
		r1 = r2   // if underflow, remainder = dividend
		jumpr r31
	}
FUNC_END udivmodsi4
#endif /* L_udivmodsi4 */

#ifdef L_udivsi3
FUNC_START udivsi3
	{
		r15 = r31
		call __udivmodsi4 // assume r15 is not clobbered
	}
		jumpr r15
FUNC_END udivsi3
#endif /* L_udivsi3 */

#ifdef L_umodsi3
FUNC_START umodsi3
	{
		r15 = r31
		call __udivmodsi4 // assume r15 is not clobbered
	}
	{
		r0 = r1
		jumpr r15
	}
FUNC_END umodsi3
#endif /* L_umodsi3 */

#ifdef L_divsi3
FUNC_START divsi3
	{
		r0 = abs(r0)
		r1 = abs(r1)
		p2 = cmp.gt(r0,#-1)
		p3 = cmp.gt(r1,#-1)
	}
	{
		p3 = xor(p2,p3)
		r15 = r31
		call __udivmodsi4 // assume r15 and p3 are not clobbered
	}
		r1 = neg(r0)
	{
		r0 = mux(p3,r1,r0)
		jumpr r15
	}
FUNC_END divsi3
#endif /* L_divsi3 */

#ifdef L_modsi3
FUNC_START modsi3
	{
		r15 = r31
		r0 = abs(r0)
		r1 = abs(r1)
		p3 = cmp.gt(r0,#-1)
	}
		call __udivmodsi4 // assume r15 and p3 are not clobbered
		r0 = neg(r1)
	{
		r0 = mux(p3,r1,r0)
		jumpr r15
	}
FUNC_END modsi3
#endif /* L_modsi3 */

#if 0
FUNC_START udivsi3
	{
		r4 = cl0(r1)        // magnitude of divisor
		p0 = cmp.gtu(r1,r0) // if divisor > dividend, underflow
		r5 = neg(r1)        // get negative divisor to extract lowest 1
		r2 = r0             // move the dividend out of r0
	}
	{
		r3 = cl0(r2)      // magnitude of dividend
		r6 = add(r4,#-31) // -amount to shift (-N) if divisor = 2^N
		r5 = and(r1,r5)   // X & (-X) extracts lowest 1
		r0 = #0           // for underflow, return 0
	}
	{
		if p0 jumpr r31    // if underflow, return 0
		r4 = sub(r4,r3)    // difference of magnitude
		p0 = cmp.eq(r1,r5) // if divisor = lowest 1(divisor), then = 2^N
		r0 = lsl(r2,r6)    // shift right by N to divide by 2^N
	}
	{
		if p0 jumpr r31 // if divisor = 2^N, return
		r3 = asl(r1,r4) // adjust divisor to magnitude of dividend
		r5 = #0         // result register, MSB always 0
		p1 = cmp.eq(r4,#0)  // if equal magnitude, skip loop
	}
	{
		loop0(1f,r4)        // loop count is difference in magnitude
		p0 = cmp.gtu(r3,r2) // if dividend >= divisor, subtract
		r7 = sub(r2,r3)     // find dividend - divisor
	}
	{
		r2 = mux(p0,r2,r7) // if dividend > divisor, select difference
		r4 = mux(p0,r5,r6) //   and shift 1 into the result, else 0
		r3 = lsr(r3,#1)    // shift divisor down
		if p1 jump 2f      // if equal magnitude, skip loop
	}
	.falign
1:
	{
		r5:4= asl(r5:4,#1)  // shift in 1 or 0 from MSB of r4
		p0 = cmp.gtu(r3,r2) // if remainder >= divisor, subtract
		r7 = sub(r2,r3)     // find remainder - divisor
		if p1 jump 3f       // if original divisor > remainder, done
	}
	{
		p1 = cmp.gtu(r1,r7) // if original divisor > remainder, done
		r2 = mux(p0,r2,r7)  // if remainder >= divisor select difference
		r4 = mux(p0,r5,r6)  //   and shift 1 into the result, else 0
		r3 = lsr(r3,#1)     // shift divisor down
	}:endloop0
	.falign
2:
		r5:4= asl(r5:4,#1) // shift in 1 or 0 from MSB of r4
	{
		r0 = r5   // put result in r0 for return
		jumpr r31
	}
	.falign
3:
	{
		r4 = lc0 // get the shift amount from the remaining loop count
	}
	{
		r0 = asl(r5,r4) // shift 0's into remaining bits of the result
		jumpr r31
	}
FUNC_END udivsi3
#endif /* L_udivsi3 */

#if 0
FUNC_START umodsi3
	{
		r3 = cl0(r1)        // magnitude of divisor
		p0 = cmp.gtu(r1,r0) // if divisor > dividend, underflow
		r4 = neg(r1)        // get negative divisor to extract lowest 1
		r5 = add(r1,#-1)    // for divisor = 2^N, get bits 0 through N-1
	}
	{
		r2 = cl0(r0)    // magnitude of dividend
		r4 = and(r1,r4) // X & (-X) extracts lowest 1
	}
	{
		if p0 jumpr r31    // if underflow, return dividend
		r2 = sub(r3,r2)    // difference of magnitude
		p1 = cmp.eq(r1,r4) // if divisor = lowest 1(divisor), then = 2^N
		r5 = and(r0,r5)    // and with bits 0 through N-1 to get mod 2^N
	}
	{
		r0 = mux(p1,r5,r0) // if divisor = 2^N, return dividend mod 2^N
		if p1 jumpr r31    // if divisor = 2^N, return
		r2 = asl(r1,r2)    // adjust divisor to magnitude of dividend
	}
	.falign
1:
	{
		p0 = cmp.gtu(r2,r0) // if remainder >= divisor, subtract
		r3 = sub(r0,r2)     // find remainder - divisor
		if p1 jumpr r31     // if original divisor > remainder, return
	}
	{
		p1 = cmp.gtu(r1,r3) // if original divisor > remainder, done
		r0 = mux(p0,r0,r3)  // if remainder >= divisor select difference
		r2 = lsr(r2,#1)     // shift divisor down
		jump 1b             // continue looping
	}
FUNC_END umodsi3
#endif /* L_umodsi3 */

#if 0
FUNC_START divsi3
	{
		r4 = clb(r1)       // magnitude of divisor
		r2 = abs(r0)       // make the dividend positive
		p1 = cmp.gt(r0,#-1) // find the sign of the divisor
		p0 = cmp.eq(r1,#1) // division by one is *easy*
	}
	{
		if p0 jumpr r31    // if divide by 1, quotient = dividend
		r3 = clb(r0)       // magnitude of dividend
		p2 = cmp.gt(r1,#-1) // find the sign of the divisor
		r5 = #0            // result register, MSB always 0
	}
	{
		r4 = sub(r4,r3) // difference of magnitude
		r1 = abs(r1)    // make the divisor positive
		p2 = xor(p1,p2) // if signs differ, negate result
		r6 = #-1            // used for shifting 1's into the result
	}
	{
		p0 = cmp.gtu(r1,r2) // if divisor > dividend, underflow
		r3 = asl(r1,r4)     // adjust divisor to magnitude of dividend
		p1 = cmp.eq(r4,#0)  // if equal magnitude, skip loop
		r0 = #0         // for underflow, return 0
	}
	{
		if p0 jumpr r31     // if underflow, return 0
		p0 = cmp.gtu(r3,r2) // if dividend >= divisor, subtract
		r7 = sub(r2,r3)     // find dividend - divisor
		loop0(1f,r4)        // loop count is difference in magnitude
	}
	{
		r2 = mux(p0,r2,r7) // if dividend > divisor, select difference
		r4 = mux(p0,r5,r6) //   and shift 1 into the result, else 0
		r3 = lsr(r3,#1)    // shift divisor down
		if p1 jump 2f      // if equal magnitude, skip loop
	}
	.falign
1:
	{
		r5:4= asl(r5:4,#1)  // shift in 1 or 0 from MSB of r4
		p0 = cmp.gtu(r3,r2) // if remainder >= divisor, subtract
		r7 = sub(r2,r3)     // find remainder - divisor
		if p1 jump 3f       // if original divisor > remainder, done
	}
	{
		p1 = cmp.gtu(r1,r7) // if original divisor > remainder, done
		r2 = mux(p0,r2,r7)  // if remainder >= divisor select difference
		r4 = mux(p0,r5,r6)  //   and shift 1 into the result, else 0
		r3 = lsr(r3,#1)     // shift divisor down
	}:endloop0
	.falign
2:
	{
		r5:4= asl(r5:4,#1) // shift in 1 or 0 from MSB of r4
	}
	{
		r4 = neg(r5) // negate result
	}
	{
		r0 = mux(p2,r4,r5) // if signs differ, return negative result
		jumpr r31
	}
	.falign
3:
	{
		r4 = lc0 // get the shift amount from the remaining loop count
	}
	{
		r5 = asl(r5,r4) // shift 0's into remaining bits of the result
	}
	{
		r4 = neg(r5) // negate result
	}
	{
		r0 = mux(p2,r4,r5) // if signs differ, return negative result
		jumpr r31
	}
FUNC_END divsi3
#endif /* L_divsi3 */

#if 0
FUNC_START modsi3
	{
		r5 = clb(r1)       // magnitude of divisor
		r6 = neg(r1)       // get negative divisor to extract lowest 1
		r2 = abs(r1)       // make the divisor positive
		p2 = cmp.gt(r0,#-1) // if the dividend is negative, negate it
	}
	{
		r4 = clb(r0)     // magnitude of dividend
		r7 = add(r2,#-1) // for divisor = 2^N, get bits 0 through N-1
		r6 = and(r1,r6)  // X & (-X) extracts lowest 1
		r3 = neg(r0)     // negate the dividend
	}
	{
		r1 = sub(r5,r4)    // difference of magnitude
		p1 = cmp.eq(r2,r6) // if divisor = lowest 1(divisor), then = 2^N
		r4 = and(r3,r7)    // and with bits 0 through N-1 to get mod 2^N
		r0 = mux(p2,r0,r3) // make the dividend positive
	}
	{
		if p1 jump 3f       // if divisor = 2^N, return
		r1 = asl(r2,r1)     // adjust divisor to magnitude of dividend
		p1 = cmp.gtu(r2,r0) // if divisor > dividend, underflow
	}
	.falign
1:
	{
		p0 = cmp.gtu(r1,r0) // if remainder >= divisor, subtract
		r3 = sub(r0,r1)     // find remainder - divisor
		r4 = neg(r0)        // get negative remainder
		if p1 jump 2f       // if original divisor > remainder, return
	}
	{
		p1 = cmp.gtu(r2,r3) // if original divisor > remainder, done
		r0 = mux(p0,r0,r3)  // if remainder >= divisor select difference
		r1 = lsr(r1,#1)     // shift divisor down
		jump 1b             // continue looping
	}
	.falign
2:
	{
		r0 = mux(p2,r0,r4) // return either positive or negative remainder
		jumpr r31
	}
	.falign
3:
	{
		r1 = and(r0,r7)    // and with bits 0 through N-1 to get mod 2^N
		r2 = neg(r4)       // mod 2^N for negative dividend
	}
	{
		r0 = mux(p2,r1,r2) // return dividend mod 2^N
		jumpr r31
	}
FUNC_END modsi3
#endif /* L_modsi3 */




/* Functions that implement common sequences in function prologues and epilogues
   used to save code size

   Save r27:26 at fp+#-8, r25:24 at fp+#-16, r23:22 at fp+#-24, and r21:20 at
   fp+#-32. */


#ifdef L_common_prologue_epilogue
/* The compiler knows that the __save_* functions clobber LR.  No other
   registers should be used without informing the compiler. */

/* Since we can only issue one store per packet, we don't hurt performance by
   simply jumping to the right point in this sequence of stores. */

FUNC_START save_r27_through_r16
		memd(fp+#-48) = r17:16
FALLTHROUGH_TAIL_CALL save_r27_through_r16 save_r27_through_r18
		memd(fp+#-40) = r19:18
FALLTHROUGH_TAIL_CALL save_r27_through_r18 save_r27_through_r20
		memd(fp+#-32) = r21:20
FALLTHROUGH_TAIL_CALL save_r27_through_r20 save_r27_through_r22
		memd(fp+#-24) = r23:22
FALLTHROUGH_TAIL_CALL save_r27_through_r22 save_r27_through_r24
		memd(fp+#-16) = r25:24
	{
		memd(fp+#-8) = r27:26
		jumpr lr
	}
FUNC_END save_r27_through_r24


/* For each of the *_before_sibcall functions, jumpr lr is executed in parallel
   with deallocframe.  That way, the return gets the old value of lr, which is
   where these functions need to return, and at the same time, lr gets the value
   it needs going into the sibcall. */

FUNC_START restore_r27_through_r20_and_deallocframe_before_sibcall
	{
		r21:20 = memd(fp+#-32)
		jump __restore_r27_through_r22_and_deallocframe_before_sibcall
	}
FUNC_END restore_r27_through_r20_and_deallocframe_before_sibcall


FUNC_START restore_r27_through_r24_and_deallocframe_before_sibcall
	{
		r25:24 = memd(fp+#-16)
		jump __restore_r27_through_r26_and_deallocframe_before_sibcall
	}
FUNC_END restore_r27_through_r24_and_deallocframe_before_sibcall


FUNC_START restore_r27_through_r16_and_deallocframe_before_sibcall
		r17:16 = memd(fp+#-48)
FALLTHROUGH_TAIL_CALL restore_r27_through_r16_and_deallocframe_before_sibcall restore_r27_through_r18_and_deallocframe_before_sibcall
	{
		r19:18 = memd(fp+#-40)
		r21:20 = memd(fp+#-32)
	}
FALLTHROUGH_TAIL_CALL restore_r27_through_r18_and_deallocframe_before_sibcall restore_r27_through_r22_and_deallocframe_before_sibcall
	{
		r23:22 = memd(fp+#-24)
		r25:24 = memd(fp+#-16)
	}
FALLTHROUGH_TAIL_CALL restore_r27_through_r22_and_deallocframe_before_sibcall restore_r27_through_r26_and_deallocframe_before_sibcall
	{
		r27:26 = memd(fp+#-8)
		deallocframe
		jumpr lr
	}
FUNC_END restore_r27_through_r26_and_deallocframe_before_sibcall


/* Here we use the extra load bandwidth to restore LR early, allowing the return
   to occur in parallel with the deallocframe. */

FUNC_START restore_r27_through_r16_and_deallocframe
	{
		r17:16 = memd(fp+#-48)
		r19:18 = memd(fp+#-40)
	}
FALLTHROUGH_TAIL_CALL restore_r27_through_r16_and_deallocframe restore_r27_through_r20_and_deallocframe
	{
		r21:20 = memd(fp+#-32)
		r23:22 = memd(fp+#-24)
	}
FALLTHROUGH_TAIL_CALL restore_r27_through_r20_and_deallocframe restore_r27_through_r24_and_deallocframe
	{
		lr = memw(fp+#4)
		r25:24 = memd(fp+#-16)
	}
	{
		r27:26 = memd(fp+#-8)
		deallocframe
		jumpr lr
	}
FUNC_END restore_r27_through_r24_and_deallocframe


/* Here the load bandwidth is maximized for all three functions. */

FUNC_START restore_r27_through_r18_and_deallocframe
	{
		r19:18 = memd(fp+#-40)
		r21:20 = memd(fp+#-32)
	}
FALLTHROUGH_TAIL_CALL restore_r27_through_r18_and_deallocframe restore_r27_through_r22_and_deallocframe
	{
		r23:22 = memd(fp+#-24)
		r25:24 = memd(fp+#-16)
	}
FALLTHROUGH_TAIL_CALL restore_r27_through_r22_and_deallocframe restore_r27_through_r26_and_deallocframe
	{
		r27:26 = memd(fp+#-8)
		deallocframe
	}
		jumpr lr
FUNC_END restore_r27_through_r26_and_deallocframe


FUNC_START deallocframe
		deallocframe
		jumpr lr
FUNC_END deallocframe
#endif /* L_common_prologue_epilogue */
