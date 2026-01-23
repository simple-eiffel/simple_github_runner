/*
 * Code for class KL_DOUBLE_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl69.h"
#include <math.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_DOUBLE_ROUTINES}.log */
EIF_REAL_64 F95_2412 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("log", 94, Current, 0, 1, 1144);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F71_2207(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.log2 */
EIF_REAL_64 F95_2413 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("log2", 94, Current, 0, 1, 1145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F71_2198(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.log10 */
EIF_REAL_64 F95_2414 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("log10", 94, Current, 0, 1, 1146);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F71_2208(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.exp */
EIF_REAL_64 F95_2415 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("exp", 94, Current, 0, 1, 1147);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F71_2206(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.nth_root */
EIF_REAL_64 F95_2416 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("nth_root", 94, Current, 0, 2, 1148);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		tr2 = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr2 = arg2;
		tr1 = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 1.0;
		tb1 = (nstcall = 1, F969_8384(RTCW(tr1), tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (arg1), (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (arg2))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.truncated_to_integer */
EIF_INTEGER_32 F95_2417 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("truncated_to_integer", 94, Current, 0, 1, 1149);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,313,(nstcall = 1, F226_4573), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.rounded_to_integer */
EIF_INTEGER_32 F95_2418 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("rounded_to_integer", 94, Current, 0, 1, 1137);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr8_1 = eif_abs_real64 (arg1);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr1)));
		tr8_2 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5), tr8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr8_1 = eif_abs_real64 (arg1);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,313,(nstcall = 1, F226_4573), (RTCW(tr1)));
		tr8_2 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5), (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	ti4_1 = (nstcall = 1, F969_8397(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tr1 = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = arg1;
		ti4_1 = (nstcall = 1, F969_8371(RTCW(tr1)));
		tr8_1 = eif_abs_real64 (arg1);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (ti4_1 * (nstcall = 0, F95_2419(Current, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5)))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.floor_to_integer */
EIF_INTEGER_32 F95_2419 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("floor_to_integer", 94, Current, 0, 1, 1138);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,313,(nstcall = 1, F226_4573), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	ti4_1 = (nstcall = 1, F969_8396(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 != Result)) {
		RTHOOK(5);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		tr1 = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = arg1;
		ti4_1 = (nstcall = 1, F969_8396(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.is_nan */
EIF_BOOLEAN F95_2420 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_nan", 94, Current, 0, 1, 1139);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_nan_real_64 (arg1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.is_plus_infinity */
EIF_BOOLEAN F95_2421 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plus_infinity", 94, Current, 0, 1, 1140);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_positive_infinity_real_64 (arg1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.is_minus_infinity */
EIF_BOOLEAN F95_2422 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_minus_infinity", 94, Current, 0, 1, 1141);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_negative_infinity_real_64 (arg1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.plus_infinity */
static EIF_REAL_64 F95_2423_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 420)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("plus_infinity", 94, Current, 1, 0, 1142);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(233, 0x01).id, 233, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F234_4723(RTCW(loc1), ((EIF_INTEGER_32) 8L)));
	RTHOOK(2);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(5);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 3L)));
	RTHOOK(6);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(7);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 5L)));
	RTHOOK(8);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L), ((EIF_INTEGER_32) 6L)));
	RTHOOK(9);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L), ((EIF_INTEGER_32) 7L)));
	RTHOOK(10);
	tr8_1 = (nstcall = 1, F234_4748(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("positive", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (Result, tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F95_2423 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,420,F95_2423_body,(Current));
}

/* {KL_DOUBLE_ROUTINES}.minus_infinity */
static EIF_REAL_64 F95_2424_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 421)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("minus_infinity", 94, Current, 1, 0, 1143);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(233, 0x01).id, 233, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F234_4723(RTCW(loc1), ((EIF_INTEGER_32) 8L)));
	RTHOOK(2);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(5);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 3L)));
	RTHOOK(6);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(7);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 5L)));
	RTHOOK(8);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L), ((EIF_INTEGER_32) 6L)));
	RTHOOK(9);
	(nstcall = 1, F234_4754(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 7L)));
	RTHOOK(10);
	tr8_1 = (nstcall = 1, F234_4748(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("negative", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (Result, tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F95_2424 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,421,F95_2424_body,(Current));
}

void EIF_Minit69 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
