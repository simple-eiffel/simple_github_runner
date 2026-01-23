/*
 * Code for class STRING_TO_INTEGER_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st104.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TO_INTEGER_CONVERTOR}.make */
void F130_2844 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 129, Current, 0, 0, 1559);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F130_2845(Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1027, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	(nstcall = -1, F1026_8858(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(1027, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	(nstcall = -1, F1026_8858(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("leading_separators_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trailing_separators_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("leading_separators_not_acceptable", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("trailing_separatorsnot_acceptable", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.reset */
void F130_2845 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset", 129, Current, 0, 1, 1560);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		RTTE((nstcall = 0, F130_2850(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("last_state_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("sign_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("conversion_type_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("not_overflowed", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F130_2847(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("not_underflowed", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F130_2848(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("parse_successful", EX_POST);
		if ((nstcall = 0, F130_2849(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("internal_overflowed_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("part1_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("part2_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.separators_valid */
EIF_BOOLEAN F130_2846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("separators_valid", 129, Current, 4, 1, 1561);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc4)) break;
		RTHOOK(7);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc3 <= (EIF_CHARACTER_8) '9')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '+')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '-'))) {
			RTHOOK(9);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(10);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.overflowed */
EIF_BOOLEAN F130_2847 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("overflowed", 129, Current, 0, 0, 1562);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.underflowed */
EIF_BOOLEAN F130_2848 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("underflowed", 129, Current, 0, 0, 1563);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_successful */
EIF_BOOLEAN F130_2849 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parse_successful", 129, Current, 0, 0, 1564);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 4L)) && (EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 5L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.conversion_type_valid */
EIF_BOOLEAN F130_2850 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("conversion_type_valid", 129, Current, 0, 1, 1565);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F125_2766(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.is_part_of_integer */
EIF_BOOLEAN F130_2851 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_part_of_integer", 129, Current, 0, 0, 1566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.is_integral_integer */
EIF_BOOLEAN F130_2852 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integral_integer", 129, Current, 0, 0, 1542);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_string_with_type */
void F130_2853 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("parse_string_with_type", 129, Current, 8, 2, 1543);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_valid", EX_PRE);
		RTTE((nstcall = 0, F130_2850(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F130_2845(Current, arg2));
	RTHOOK(4);
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(1025, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(loc7);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7306[Dtype(loc7)-1026])(loc7));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + O7308[Dtype(loc7)-1025]);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
			RTHOOK(9);
			tc1 = (nstcall = 1, F848_7194(RTCW(loc3), loc1));
			(nstcall = 0, F130_2854(Current, tc1));
			RTHOOK(10);
			loc1++;
		}
	} else {
		RTHOOK(11);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(1029, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(loc8);
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(13);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7381[Dtype(loc8)-1030])(loc8));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + O7383[Dtype(loc8)-1029]);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
			for (;;) {
				RTHOOK(15);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(16);
				tw1 = (nstcall = 1, F847_7194(RTCW(loc4), loc1));
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(17);
				tb1 = (loc5 <= 0xFF);
				if (tb1) {
					RTHOOK(18);
					tc1 = (EIF_CHARACTER_8) loc5;
					(nstcall = 0, F130_2854(Current, tc1));
				} else {
					RTHOOK(19);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(20);
				loc1++;
			}
		} else {
			RTHOOK(21);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(22);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			loc2 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(23);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(24);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
				loc6 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(25);
				tr1 = RTLNS(eif_new_type(961, 0x00).id, 961, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc6;
				tb1 = (nstcall = 1, F960_8129(RTCW(tr1)));
				if (tb1) {
					RTHOOK(26);
					tc1 = (EIF_CHARACTER_8) loc6;
					(nstcall = 0, F130_2854(Current, tc1));
				} else {
					RTHOOK(27);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(28);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTEE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_character */
void F130_2854 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("parse_character", 129, Current, 3, 1, 1544);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 4L))) {
		RTHOOK(3);
		switch (loc3) {
			case 0L:
				RTHOOK(4);
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					RTHOOK(5);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					RTHOOK(6);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					RTHOOK(7);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
				} else {
					RTHOOK(8);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						RTHOOK(9);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(10);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							RTHOOK(11);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(12);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						RTHOOK(13);
						tb1 = '\0';
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R5302[Dtype(RTCW(tr1))-610])(tr1, (EIF_REFERENCE) &arg1));
							tb1 = tb2;
						}
						if (tb1) {
						} else {
							RTHOOK(14);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						}
					}
				}
				break;
			case 1L:
				RTHOOK(15);
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					RTHOOK(16);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					RTHOOK(17);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(18);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					RTHOOK(19);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOUCR(163,(nstcall = 0, F130_2865), (Current));
						tb2 = (nstcall = 1, F126_2771(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_)));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(20);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(21);
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) loc1;
						RTHOOK(22);
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) loc2;
						RTHOOK(23);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				} else {
					RTHOOK(24);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				break;
			case 2L:
				RTHOOK(25);
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					RTHOOK(26);
					loc1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_);
					RTHOOK(27);
					loc2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
					RTHOOK(28);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_));
					RTHOOK(29);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(30);
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(31);
						tr1 = RTOUCR(163,(nstcall = 0, F130_2865), (Current));
						tb1 = (nstcall = 1, F126_2771(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_)));
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
						RTHOOK(32);
						if ((nstcall = 0, F130_2847(Current))) {
							RTHOOK(33);
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) loc1;
							RTHOOK(34);
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) loc2;
							RTHOOK(35);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						}
					}
				} else {
					RTHOOK(36);
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R5302[Dtype(RTCW(tr1))-610])(tr1, (EIF_REFERENCE) &arg1));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(37);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						RTHOOK(38);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					}
				}
				break;
			case 3L:
				RTHOOK(39);
				tb1 = '\0';
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R5302[Dtype(RTCW(tr1))-610])(tr1, (EIF_REFERENCE) &arg1));
					tb1 = tb2;
				}
				if (tb1) {
				} else {
					RTHOOK(40);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTHOOK(41);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) loc3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTLE;
	RTEE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer_8 */
EIF_INTEGER_8 F130_2855 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_8", 129, Current, 0, 0, 1545);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti1_1 = (EIF_INTEGER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_8) (EIF_INTEGER_8) -ti1_1;
	} else {
		RTHOOK(3);
		ti1_1 = (EIF_INTEGER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_8) ti1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer_16 */
EIF_INTEGER_16 F130_2856 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_16", 129, Current, 0, 0, 1546);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	} else {
		RTHOOK(3);
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_16) ti2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer_32 */
EIF_INTEGER_32 F130_2857 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_32", 129, Current, 0, 0, 1547);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer */
EIF_INTEGER_32 F130_2858 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer", 129, Current, 0, 0, 1548);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer_64 */
EIF_INTEGER_64 F130_2859 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_64", 129, Current, 0, 0, 1549);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_64) (EIF_INTEGER_64) -ti8_1;
	} else {
		RTHOOK(3);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_natural_8 */
EIF_NATURAL_8 F130_2860 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_8", 129, Current, 0, 0, 1550);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu1_1 = (EIF_NATURAL_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_natural_16 */
EIF_NATURAL_16 F130_2861 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_16", 129, Current, 0, 0, 1551);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_natural_32 */
EIF_NATURAL_32 F130_2862 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_32", 129, Current, 0, 0, 1552);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_natural */
EIF_NATURAL_32 F130_2863 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural", 129, Current, 0, 0, 1553);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_natural_64 */
EIF_NATURAL_64 F130_2864 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_64", 129, Current, 0, 0, 1554);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (Result * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + tu8_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.overflow_checker */
static EIF_REFERENCE F130_2865_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(163)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("overflow_checker", 129, Current, 0, 0, 1555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(125, 0x01).id, 125, _OBJSIZ_4_0_0_0_0_0_0_0_);
	(nstcall = -1, F126_2770(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("overflow_checker_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F130_2865 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(163,F130_2865_body,(Current));
}

/* {STRING_TO_INTEGER_CONVERTOR}.part1 */
EIF_NATURAL_64 F130_2866 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_);
}


/* {STRING_TO_INTEGER_CONVERTOR}.part2 */
EIF_NATURAL_64 F130_2867 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
}


/* {STRING_TO_INTEGER_CONVERTOR}.internal_overflowed */
EIF_BOOLEAN F130_2868 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


void EIF_Minit104 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
