/*
 * Code for class MA_DECIMAL_COEFFICIENT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma243.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MA_DECIMAL_COEFFICIENT_IMP}.make */
void F810_6724 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make", 809, Current, 0, 1, 7708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_capacity_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(395,(nstcall = 0, F810_6750), (Current));
	tr2 = (nstcall = 1, F6_1287(RTCW(tr1), (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L), arg1));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	(nstcall = 0, F810_6751(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("capacity_set", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("count_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("lower_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F810_6730(Current)) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("upper_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F810_6731(Current)) == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.make_copy */
void F810_6725 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_copy", 809, Current, 0, 1, 7709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	(nstcall = 0, F810_6724(Current, ti4_1));
	RTHOOK(3);
	(nstcall = 0, F810_6738(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("equal_other", EX_POST);
		if ((nstcall = 0, F810_6741(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.item */
EIF_INTEGER_32 F810_6726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 809, Current, 0, 1, 7710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F213_4039(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti1_1 = (nstcall = 1, F859_7194(RTCW(tr1), arg1));
	ti4_1 = (EIF_INTEGER_32) ti1_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.msd_index */
EIF_INTEGER_32 F810_6727 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("msd_index", 809, Current, 1, 0, 7711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			ti1_1 = (nstcall = 1, F859_7194(RTCW(loc1), (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb1 = (EIF_BOOLEAN)(ti1_1 != (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb1) break;
		RTHOOK(4);
		Result--;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("msd_index_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("msd_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("index_of_msd_or_zero", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F810_6726(Current, Result)) != ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.subcoefficient */
EIF_REFERENCE F810_6728 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("subcoefficient", 809, Current, 1, 2, 7712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_start_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_end_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= arg1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_end_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) - ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(809, 0x01).id, 809, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F810_6724(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F810_6726(Current, loc1));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_1_);
		(nstcall = 1, F810_6735(RTCW(Result), ti4_1, ti4_2));
		RTHOOK(8);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("subcoefficient_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.count */
EIF_INTEGER_32 F810_6729 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {MA_DECIMAL_COEFFICIENT_IMP}.lower */
EIF_INTEGER_32 F810_6730 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lower", 809, Current, 0, 0, 7714);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.upper */
EIF_INTEGER_32 F810_6731 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("upper", 809, Current, 0, 0, 7715);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.capacity */
EIF_INTEGER_32 F810_6732 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {MA_DECIMAL_COEFFICIENT_IMP}.set_from_substring */
void F810_6733 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("set_from_substring", 809, Current, 4, 3, 7717);
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
		RTCT("coefficient_begin", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("coefficient_end", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("coefficient_end_ge_begin", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= arg2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		(nstcall = 0, F810_6734(Current, ti4_1));
	}
	RTHOOK(7);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) arg3;
	RTHOOK(9);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 < arg2)) break;
		RTHOOK(11);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(12);
		switch (loc3) {
			case (EIF_CHARACTER_8) '0':
			case (EIF_CHARACTER_8) '1':
			case (EIF_CHARACTER_8) '2':
			case (EIF_CHARACTER_8) '3':
			case (EIF_CHARACTER_8) '4':
			case (EIF_CHARACTER_8) '5':
			case (EIF_CHARACTER_8) '6':
			case (EIF_CHARACTER_8) '7':
			case (EIF_CHARACTER_8) '8':
			case (EIF_CHARACTER_8) '9':
				RTHOOK(13);
				tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
				ti4_1 = (EIF_INTEGER_32) (loc3);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
				ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
				ti4_1 = (EIF_INTEGER_32) ti1_1;
				(nstcall = 0, F810_6735(Current, ti4_1, loc2));
				RTHOOK(14);
				loc2++;
				break;
		}
		RTHOOK(15);
		loc1--;
	}
	RTHOOK(16);
	(nstcall = 0, F810_6751(Current, loc2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.grow */
void F810_6734 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("grow", 809, Current, 3, 1, 7718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_capacity_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))) {
		RTHOOK(4);
		tr1 = RTOUCR(395,(nstcall = 0, F810_6750), (Current));
		tr2 = (nstcall = 1, F6_1295(RTCW(tr1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(6);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	RTHOOK(7);
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(9);
		(nstcall = 0, F810_6735(Current, ((EIF_INTEGER_32) 0L), loc1));
		RTHOOK(10);
		loc1++;
	}
	RTHOOK(11);
	(nstcall = 0, F810_6751(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("new_capacity", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("adapted_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.put */
void F810_6735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("put", 809, Current, 0, 2, 7719);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_v", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 9L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
	ti1_1 = (nstcall = 1, F292_5605(RTCW(tr2), arg1));
	(nstcall = 1, F859_7209(RTCW(tr1), ti1_1, arg2));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(5);
		(nstcall = 0, F810_6751(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F810_6726(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("adapted_count", EX_POST);
		if ((!((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) > ti4_1)) || ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)))))) {
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

/* {MA_DECIMAL_COEFFICIENT_IMP}.three_way_comparison */
EIF_INTEGER_32 F810_6736 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("three_way_comparison", 809, Current, 6, 1, 7720);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = (nstcall = 0, F810_6727(Current));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F810_6727(RTCW(arg1)));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc3)) {
		RTHOOK(5);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTHOOK(7);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			RTHOOK(8);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
			RTHOOK(9);
			loc5 = *(EIF_REFERENCE *)(Current);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			loc6 = (EIF_REFERENCE) tr1;
			for (;;) {
				RTHOOK(11);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(12);
				ti1_1 = (nstcall = 1, F859_7194(RTCW(loc5), loc1));
				ti1_2 = (nstcall = 1, F859_7194(RTCW(loc6), loc1));
				ti4_1 = (EIF_INTEGER_32) (EIF_INTEGER_8) (ti1_1 - ti1_2);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(13);
				loc1--;
			}
			RTHOOK(14);
			tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = loc4;
			ti4_1 = (nstcall = 1, F948_7725(RTCW(tr1)));
			Result = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("equal_zero", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == RTEQ(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("smaller_negative", EX_POST);
		tb1 = (nstcall = 1, F213_4044(Current, arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("greater_positive", EX_POST);
		tb1 = (nstcall = 1, F213_4045(Current, arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.out */
EIF_REFERENCE F810_6737 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("out", 809, Current, 1, 0, 7721);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_)));
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F810_6726(Current, loc1));
		tr1 = eif_out__i4_s1(ti4_1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7334[Dtype(RTCW(Result))-1027])(Result, tr1));
		RTHOOK(5);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {MA_DECIMAL_COEFFICIENT_IMP}.copy */
void F810_6738 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("copy", 809, Current, 4, 1, 7722);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(Current != arg1)) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
			RTHOOK(6);
			(nstcall = 0, F810_6724(Current, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) < ti4_1)) {
				RTHOOK(8);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
				(nstcall = 0, F810_6734(Current, ti4_1));
			}
		}
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(10);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(13);
			ti1_1 = (nstcall = 1, F859_7194(RTCW(loc4), loc1));
			(nstcall = 1, F859_7209(RTCW(loc3), ti1_1, loc1));
			RTHOOK(14);
			loc1++;
		}
		RTHOOK(15);
		(nstcall = 0, F810_6751(Current, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {MA_DECIMAL_COEFFICIENT_IMP}.to_twin */
EIF_REFERENCE F810_6739 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("to_twin", 809, Current, 0, 0, 7723);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F810_6725(RTCW(Result), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("twin_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("twin_not_current", EX_POST);
		if ((EIF_BOOLEAN)(Result != Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("tiwn_equal_current", EX_POST);
		tb1 = (nstcall = 1, F810_6741(RTCW(Result), Current));
		if (tb1) {
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

/* {MA_DECIMAL_COEFFICIENT_IMP}.keep_head */
void F810_6740 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("keep_head", 809, Current, 2, 1, 7724);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_count_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F810_6731(Current)))) break;
		RTHOOK(5);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		(nstcall = 1, F859_7209(RTCW(loc2), ti1_1, loc1));
		RTHOOK(6);
		loc1++;
	}
	RTHOOK(7);
	(nstcall = 0, F810_6751(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("adapted_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("unchanged_capacity", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.is_equal */
EIF_BOOLEAN F810_6741 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("is_equal", 809, Current, 3, 1, 7725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
	if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) {
		RTHOOK(3);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		RTHOOK(4);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc3 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 < (nstcall = 0, F810_6730(Current)))) {
				ti1_1 = (nstcall = 1, F859_7194(RTCW(loc2), loc1));
				ti1_2 = (nstcall = 1, F859_7194(RTCW(loc3), loc1));
				tb1 = (EIF_BOOLEAN)(ti1_1 != ti1_2);
			}
			if (tb1) break;
			RTHOOK(7);
			loc1--;
		}
		RTHOOK(8);
		ti4_1 = (nstcall = 0, F810_6730(Current));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < ti4_1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("consistent", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("trichotomy", EX_POST);
		tb2 = '\0';
		tb3 = (nstcall = 1, F213_4044(Current, arg1));
		if ((EIF_BOOLEAN) !tb3) {
			tb3 = (nstcall = 1, F213_4044(RTCW(arg1), Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if ((EIF_BOOLEAN)(Result == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.shift_left */
void F810_6742 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("shift_left", 809, Current, 2, 1, 7726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_count_greater_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F810_6734(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) + arg1)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 < arg1)) break;
		RTHOOK(6);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc2), (EIF_INTEGER_32) (loc1 - arg1)));
		(nstcall = 1, F859_7209(RTCW(loc2), ti1_1, loc1));
		RTHOOK(7);
		loc1--;
	}
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(9);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		(nstcall = 1, F859_7209(RTCW(loc2), ti1_1, loc1));
		RTHOOK(10);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("adapted_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("zero_shifted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F810_6726(Current, ((EIF_INTEGER_32) 0L))) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.shift_right */
void F810_6743 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("shift_right", 809, Current, 2, 1, 7727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_count_greater_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_less_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) break;
		RTHOOK(6);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc2), loc1));
		(nstcall = 1, F859_7209(RTCW(loc2), ti1_1, (EIF_INTEGER_32) (loc1 - arg1)));
		RTHOOK(7);
		loc1++;
	}
	RTHOOK(8);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - arg1);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) break;
		RTHOOK(10);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		(nstcall = 1, F859_7209(RTCW(loc2), ti1_1, loc1));
		RTHOOK(11);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("adapted_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("zero_shifted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F810_6726(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) - ((EIF_INTEGER_32) 1L)))) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.integer_add */
void F810_6744 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("integer_add", 809, Current, 5, 1, 7728);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_count", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc5 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) break;
		RTHOOK(8);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc4), loc2));
		ti4_2 = (EIF_INTEGER_32) ti1_1;
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc5), loc2));
		ti4_3 = (EIF_INTEGER_32) ti1_1;
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_2) + ti4_3);
		RTHOOK(9);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L));
		RTHOOK(10);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc3));
		(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, loc2));
		RTHOOK(11);
		loc1 /= ((EIF_INTEGER_32) 10L);
		RTHOOK(12);
		loc2++;
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		(nstcall = 0, F810_6734(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(15);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc1));
		(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) >= ti4_1)) {
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

/* {MA_DECIMAL_COEFFICIENT_IMP}.integer_multiply */
void F810_6745 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc7);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc11);
	RTLR(8,loc10);
	RTLIU(9);
	
	RTEAA("integer_multiply", 809, Current, 12, 2, 7700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("b_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("capacity_sufficient", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_0_0_1_);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) > (EIF_INTEGER_32) (ti4_1 + ti4_2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	loc7 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) break;
		RTHOOK(7);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		(nstcall = 1, F859_7209(RTCW(loc7), ti1_1, loc1));
		RTHOOK(8);
		loc1++;
	}
	RTHOOK(9);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_0_0_1_);
	if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
		RTHOOK(10);
		loc5 = (EIF_REFERENCE) arg1;
		RTHOOK(11);
		loc6 = (EIF_REFERENCE) arg2;
	} else {
		RTHOOK(12);
		loc5 = (EIF_REFERENCE) arg2;
		RTHOOK(13);
		loc6 = (EIF_REFERENCE) arg1;
	}
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
	loc11 = (EIF_REFERENCE) tr1;
	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
	loc10 = (EIF_REFERENCE) tr1;
	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_1_0_0_1_);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(17);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_0_0_1_);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(18);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc1 >= loc8)) break;
		RTHOOK(20);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc10), loc1));
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(21);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(22);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(23);
		loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc2);
		for (;;) {
			RTHOOK(24);
			if ((EIF_BOOLEAN) (loc2 >= loc9)) break;
			RTHOOK(25);
			ti1_1 = (nstcall = 1, F859_7194(RTCW(loc11), loc2));
			ti4_1 = (EIF_INTEGER_32) ti1_1;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(loc7), loc12));
			ti4_2 = (EIF_INTEGER_32) ti1_1;
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + (EIF_INTEGER_32) (loc4 * ti4_1)) + ti4_2);
			RTHOOK(26);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 10L))));
			(nstcall = 1, F859_7209(RTCW(loc7), ti1_1, loc12));
			RTHOOK(27);
			loc3 /= ((EIF_INTEGER_32) 10L);
			RTHOOK(28);
			loc2++;
			RTHOOK(29);
			loc12++;
		}
		RTHOOK(30);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(31);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc3));
			(nstcall = 1, F859_7209(RTCW(loc7), ti1_1, loc12));
		}
		RTHOOK(32);
		loc1++;
	}
	RTHOOK(33);
	(nstcall = 0, F810_6751(Current, (EIF_INTEGER_32) (loc1 + loc2)));
	RTHOOK(34);
	(nstcall = 0, F213_4055(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.integer_quick_add_msd */
void F810_6746 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("integer_quick_add_msd", 809, Current, 6, 2, 7701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_limits", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 9L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("digits_count", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - arg2);
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) loc5;
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc2 >= loc6)) break;
		RTHOOK(9);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc4), loc2));
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		loc1 += ti4_1;
		RTHOOK(10);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L));
		RTHOOK(11);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc3));
		(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, (EIF_INTEGER_32) (loc2 - loc5)));
		RTHOOK(12);
		loc1 /= ((EIF_INTEGER_32) 10L);
		RTHOOK(13);
		loc2++;
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(15);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc1));
		(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, (EIF_INTEGER_32) (loc2 - loc5)));
		RTHOOK(16);
		(nstcall = 0, F810_6751(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(17);
		(nstcall = 0, F810_6751(Current, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.integer_subtract */
void F810_6747 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("integer_subtract", 809, Current, 5, 1, 7702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_smaller", EX_PRE);
		tb1 = (nstcall = 1, F211_3879(RTCW(arg1), Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	ti4_1 = (nstcall = 1, F810_6727(RTCW(arg1)));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(9);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc4), loc2));
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc5), loc2));
		ti4_2 = (EIF_INTEGER_32) ti1_1;
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ti4_2);
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 10L) + loc1)));
			(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, loc2));
			RTHOOK(12);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			RTHOOK(13);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc1));
			(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, loc2));
			RTHOOK(14);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(15);
		loc2++;
	}
	for (;;) {
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))) break;
		RTHOOK(17);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc4), loc2));
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		loc1 += ti4_1;
		RTHOOK(18);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(19);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 10L) + loc1)));
			(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, loc2));
			RTHOOK(20);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			RTHOOK(21);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc1));
			(nstcall = 1, F859_7209(RTCW(loc4), ti1_1, loc2));
			RTHOOK(22);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(23);
		loc2++;
	}
	RTHOOK(24);
	(nstcall = 0, F213_4055(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.integer_quick_subtract_msd */
void F810_6748 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("integer_quick_subtract_msd", 809, Current, 5, 2, 7703);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_limits", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 9L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("digits_count", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
	RTHOOK(4);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	RTHOOK(5);
	loc5 = *(EIF_REFERENCE *)(Current);
	RTHOOK(6);
	loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - arg2);
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) loc4;
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(9);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(loc5), loc2));
		ti4_1 = (EIF_INTEGER_32) ti1_1;
		loc1 += ti4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 10L) + loc1)));
			(nstcall = 1, F859_7209(RTCW(loc5), ti1_1, (EIF_INTEGER_32) (loc2 - loc4)));
			RTHOOK(12);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			RTHOOK(13);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			ti1_1 = (nstcall = 1, F292_5605(RTCW(tr1), loc1));
			(nstcall = 1, F859_7209(RTCW(loc5), ti1_1, loc2));
			RTHOOK(14);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(15);
		loc2++;
	}
	RTHOOK(16);
	(nstcall = 0, F213_4055(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.digits */
EIF_REFERENCE F810_6749 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MA_DECIMAL_COEFFICIENT_IMP}.special_digits_ */
static EIF_REFERENCE F810_6750_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(395)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("special_digits_", 809, Current, 0, 0, 7705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,5,955,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 5, _OBJSIZ_0_0_0_0_0_0_0_0_);
	}
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("native_digits_array_routines_not_void", EX_POST);
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

EIF_REFERENCE F810_6750 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(395,F810_6750_body,(Current));
}

/* {MA_DECIMAL_COEFFICIENT_IMP}.set_count */
void F810_6751 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_count", 809, Current, 0, 1, 7706);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_count_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == arg1)) {
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
}

/* {MA_DECIMAL_COEFFICIENT_IMP}._invariant */
void F810_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 242, Current, 0, 0);
	RTIT("digits_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit243 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
