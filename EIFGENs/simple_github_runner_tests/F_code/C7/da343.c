/*
 * Code for class DATE_TIME_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da343.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_VALIDITY_CHECKER}.date_time_valid */
EIF_BOOLEAN F1065_9992 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("date_time_valid", 1064, Current, 1, 2, 14602);
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
	tb2 = (nstcall = 1, F1057_9677(RTCW(loc1)));
	if (tb2) {
		tb2 = (nstcall = 1, F1057_9670(RTCW(loc1), arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = (nstcall = 1, F1057_9666(RTCW(loc1), arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_VALIDITY_CHECKER}.date_time_valid_with_base */
EIF_BOOLEAN F1065_9993 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("date_time_valid_with_base", 1064, Current, 1, 3, 14603);
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
		RTHOOK(3);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = RTLNS(eif_new_type(1056, 0x01).id, 1056, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1057_9660(RTCW(loc1), arg2));
	RTHOOK(5);
	(nstcall = 1, F1057_9669(RTCW(loc1), arg3));
	RTHOOK(6);
	Result = '\0';
	tb1 = '\0';
	tb2 = (nstcall = 1, F1057_9677(RTCW(loc1)));
	if (tb2) {
		tb2 = (nstcall = 1, F1057_9670(RTCW(loc1), arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = (nstcall = 1, F1057_9666(RTCW(loc1), arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_VALIDITY_CHECKER}.is_correct_date_time */
EIF_BOOLEAN F1065_9994 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6, EIF_BOOLEAN arg7)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_correct_date_time", 1064, Current, 0, 7, 14604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((nstcall = 0, F1061_9918(Current, arg1, arg2, arg3))) {
		Result = (nstcall = 0, F1063_9962(Current, arg4, arg5, arg6, arg7));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit343 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
