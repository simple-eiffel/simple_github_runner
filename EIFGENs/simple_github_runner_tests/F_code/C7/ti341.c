/*
 * Code for class TIME_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti341.h"
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

/* {TIME_VALIDITY_CHECKER}.time_valid */
EIF_BOOLEAN F1063_9960 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("time_valid", 1062, Current, 1, 2, 14569);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("code_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(1056, 0x01).id, 1056, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1057_9660(RTCW(loc1), arg2));
	RTHOOK(4);
	Result = '\0';
	tb1 = '\0';
	tb2 = (nstcall = 1, F1057_9679(RTCW(loc1)));
	if (tb2) {
		tb2 = (nstcall = 1, F1057_9670(RTCW(loc1), arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = (nstcall = 1, F1057_9665(RTCW(loc1), arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_VALIDITY_CHECKER}.compact_time_valid */
EIF_BOOLEAN F1063_9961 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compact_time_valid", 1062, Current, 4, 1, 14570);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = *(EIF_INTEGER_32 *)(Current + O2504[dtype-102]);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O2504[dtype-102]) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2494[dtype-102])(Current));
	RTHOOK(4);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2495[dtype-102])(Current));
	RTHOOK(5);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2496[dtype-102])(Current));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O2504[dtype-102]) = (EIF_INTEGER_32) loc4;
	RTHOOK(7);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 24L))) && (EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 60L))) && (EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 60L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_VALIDITY_CHECKER}.is_correct_time */
EIF_BOOLEAN F1063_9962 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_correct_time", 1062, Current, 2, 4, 14571);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg4) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(3);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	} else {
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 24L) - ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(6);
	Result = '\0';
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= loc1) && (EIF_BOOLEAN) (arg1 <= loc2)) && (EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 60L)))) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tb1 = (EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg3, tr8_1);
	}
	if (tb1) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		Result = (EIF_BOOLEAN) eif_is_less_real_64 (arg3, tr8_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit341 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
