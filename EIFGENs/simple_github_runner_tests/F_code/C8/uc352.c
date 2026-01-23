/*
 * Code for class UC_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc352.h"
#include "eif_helpers.h"
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

/* {UC_STRING}.make */
void F1074_10326 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 1073, Current, 0, 1, 14941);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_size", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1074_10440(Current));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		(nstcall = 0, F1026_8856(Current, ((EIF_INTEGER_32) 1L)));
	} else {
		RTHOOK(6);
		(nstcall = 0, F1026_8856(Current, arg1));
	}
	RTHOOK(7);
	ti4_1 = (nstcall = 0, F1074_10361(Current));
	(nstcall = 0, F1074_10448(Current, ti4_1));
	RTHOOK(8);
	ti4_1 = (nstcall = 0, F1074_10361(Current));
	(nstcall = 0, F1028_9018(Current, ti4_1));
	RTHOOK(9);
	(nstcall = 0, F1074_10448(Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("empty_string", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10361(Current)) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("byte_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("byte_capacity_set", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10361(Current)) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_string */
void F1074_10327 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_string", 1073, Current, 0, 1, 14942);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1074_10329(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_shared_implementation", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Current != arg1)) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F1026_8868(Current, arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("initialized", EX_POST);
		if ((nstcall = 0, F1074_10371(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_unicode", EX_POST);
		if ((nstcall = 0, F1074_10373(Current, arg1))) {
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

/* {UC_STRING}.make_empty */
void F1074_10328 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_empty", 1073, Current, 0, 0, 14943);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1074_10326(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10361(Current)) >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_string_general */
void F1074_10329 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("make_from_string_general", 1073, Current, 2, 1, 14944);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1073, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		loc1 = (EIF_REFERENCE) loc2;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg1 != Current)) {
			RTHOOK(6);
			loc1 = (EIF_REFERENCE) NULL;
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		(nstcall = 0, F1074_10331(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("same_unicode", EX_POST);
		if ((nstcall = 0, F1074_10373(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_substring */
void F1074_10330 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_substring", 1073, Current, 0, 3, 14945);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	(nstcall = 0, F1074_10331(Current, arg1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("initialized", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, arg2, arg3));
		if ((nstcall = 0, F1074_10373(Current, tr1))) {
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
}

/* {UC_STRING}.make_from_substring_general */
void F1074_10331 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("make_from_substring_general", 1073, Current, 4, 3, 14946);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc4 = arg1;
	loc4 = RTRV(eif_new_type(1073, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		loc3 = (EIF_REFERENCE) loc4;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		if ((EIF_BOOLEAN)(arg1 != Current)) {
			RTHOOK(9);
			loc3 = (EIF_REFERENCE) NULL;
		}
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(arg3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(12);
		if ((EIF_BOOLEAN) (arg3 < arg2)) {
			RTHOOK(13);
			(nstcall = 0, F1074_10326(Current, ((EIF_INTEGER_32) 0L)));
		} else {
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(15);
				tr1 = (nstcall = 1, F1074_10413(RTCW(loc3)));
				loc2 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(16);
				loc2 = (EIF_REFERENCE) arg1;
			}
			RTHOOK(17);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5561(RTCW(tr1), loc2, arg2, arg3));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(18);
			(nstcall = 0, F1074_10326(Current, loc1));
			RTHOOK(19);
			(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
			RTHOOK(20);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc1;
			RTHOOK(21);
			(nstcall = 0, F1074_10451(Current, loc2, arg2, arg3, loc1, ((EIF_INTEGER_32) 1L)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("initialized", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, arg2, arg3));
		if ((nstcall = 0, F1074_10373(Current, tr1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_filled_unicode */
void F1074_10332 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("make_filled_unicode", 1073, Current, 0, 2, 14947);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F1074_10333(Current, ti4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10356(Current, arg1)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
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

/* {UC_STRING}.make_filled_code */
void F1074_10333 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_filled_code", 1073, Current, 3, 2, 14948);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * arg2);
	RTHOOK(5);
	(nstcall = 0, F1074_10326(Current, loc3));
	RTHOOK(6);
	(nstcall = 0, F1074_10448(Current, arg2));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(10);
		(nstcall = 0, F1074_10449(Current, arg1, loc2, loc1));
		RTHOOK(11);
		loc1 += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10357(Current, arg1)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
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

/* {UC_STRING}.make_filled */
void F1074_10334 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_filled", 1073, Current, 3, 2, 14949);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_1 = (nstcall = 1, F291_5562(RTCW(tr1), arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * arg2);
	RTHOOK(4);
	(nstcall = 0, F1074_10326(Current, loc3));
	RTHOOK(5);
	(nstcall = 0, F1074_10448(Current, arg2));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(10);
			(nstcall = 0, F1074_10443(Current, arg1, loc1));
			RTHOOK(11);
			loc1++;
		}
	} else {
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(14);
			(nstcall = 0, F1074_10450(Current, arg1, loc2, loc1));
			RTHOOK(15);
			loc1 += loc2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10361(Current)) >= arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10358(Current, arg1)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("filled_code", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10357(Current, ti4_1)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_utf8 */
void F1074_10335 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_utf8", 1073, Current, 0, 1, 14950);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf8", EX_PRE);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		tb1 = (nstcall = 1, F291_5538(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F1074_10326(Current, ti4_1));
	RTHOOK(5);
	(nstcall = 0, F1074_10390(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_utf16 */
void F1074_10336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_utf16", 1073, Current, 0, 1, 14951);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16", EX_PRE);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6636(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F1074_10326(Current, (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))));
	RTHOOK(5);
	(nstcall = 0, F1074_10391(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_utf16le */
void F1074_10337 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_utf16le", 1073, Current, 0, 1, 14952);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16le", EX_PRE);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6638(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F1074_10326(Current, (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))));
	RTHOOK(5);
	(nstcall = 0, F1074_10393(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UC_STRING}.make_from_utf16be */
void F1074_10338 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_utf16be", 1073, Current, 0, 1, 14953);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16be", EX_PRE);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6637(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F1074_10326(Current, (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L))));
	RTHOOK(5);
	(nstcall = 0, F1074_10392(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UC_STRING}.unicode_item */
EIF_REFERENCE F1074_10339 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("unicode_item", 1073, Current, 0, 1, 14954);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(909, 0x01).id, 909, _OBJSIZ_0_0_0_1_0_0_0_0_);
	ti4_1 = (nstcall = 0, F1074_10340(Current, arg1));
	(nstcall = -1, F910_7342(RTCW(Result), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("code_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F1074_10340(Current, arg1)))) {
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

/* {UC_STRING}.item_code */
EIF_INTEGER_32 F1074_10340 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item_code", 1073, Current, 1, 1, 14955);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(4);
		tc1 = (nstcall = 0, F1074_10442(Current, arg1));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		loc1 = (nstcall = 0, F1074_10436(Current, arg1));
		RTHOOK(6);
		Result = (nstcall = 0, F1074_10431(Current, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("valid_item_code", EX_POST);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), Result));
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.code */
EIF_NATURAL_32 F1074_10341 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("code", 1073, Current, 1, 1, 14956);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(3);
		tc1 = (nstcall = 0, F1074_10442(Current, arg1));
		tu4_1 = (EIF_NATURAL_32) tc1;
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(4);
		loc1 = (nstcall = 0, F1074_10436(Current, arg1));
		RTHOOK(5);
		Result = (nstcall = 0, F1074_10432(Current, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("valid_code", EX_POST);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9611(RTCW(tr1), Result));
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.item */
EIF_CHARACTER_8 F1074_10342 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 1073, Current, 1, 1, 14957);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(2);
		Result = (nstcall = 0, F1074_10442(Current, arg1));
	} else {
		RTHOOK(3);
		loc1 = (nstcall = 0, F1074_10436(Current, arg1));
		RTHOOK(4);
		Result = (nstcall = 0, F1074_10433(Current, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("code_small_enough", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10340(Current, arg1)) <= ti4_1)) {
			tu4_1 = (EIF_NATURAL_32) Result;
			tb1 = (EIF_BOOLEAN)(tu4_1 == (nstcall = 0, F1074_10341(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("overflow", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10340(Current, arg1)) > ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result == (EIF_CHARACTER_8) '\000');
		}
		if (tb1) {
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

/* {UC_STRING}.at */
EIF_CHARACTER_8 F1074_10343 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("at", 1073, Current, 0, 1, 14958);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1074_10342(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F1074_10342(Current, arg1)))) {
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

/* {UC_STRING}.substring */
EIF_REFERENCE F1074_10344 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("substring", 1073, Current, 0, 2, 14959);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg2 < arg1)) {
		RTHOOK(2);
		Result = RTLNSMART(dftype);
		(nstcall = -1, F1074_10326(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(3);
		Result = RTLNSMART(dftype);
		(nstcall = -1, F1074_10330(RTCW(Result), Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("substring_count", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("first_code", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F1028_8937(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, F1028_8937(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F1074_10344(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
			tr2 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), arg2));
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("first_unicode_item", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tu4_1 = (nstcall = 1, F1074_10341(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tu4_1 == (nstcall = 0, F1074_10341(Current, arg1)));
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.unicode_substring_index */
EIF_INTEGER_32 F1074_10345 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc11);
	RTLR(3,loc12);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("unicode_substring_index", 1073, Current, 12, 2, 14960);
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
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			Result = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(9);
			loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 - loc10) + ((EIF_INTEGER_32) 1L));
			RTHOOK(10);
			if ((EIF_BOOLEAN) (arg2 <= loc8)) {
				RTHOOK(11);
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
					RTHOOK(12);
					loc11 = arg1;
					loc11 = RTRV(eif_new_type(1073, 0x01),loc11);
					if (EIF_TEST(loc11)) {
						RTHOOK(13);
						ti4_1 = *(EIF_INTEGER_32 *)(loc11+ _LNGOFF_1_1_0_3_);
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(14);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(15);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(16);
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(17);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(18);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(19);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(20);
								ti4_1 = (nstcall = 1, F1074_10431(loc11, loc1));
								loc4 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(21);
								tc1 = (nstcall = 0, F1074_10442(Current, loc2));
								ti4_1 = (EIF_INTEGER_32) (tc1);
								if ((EIF_BOOLEAN)(ti4_1 != loc4)) {
									RTHOOK(22);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(23);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(24);
									loc2++;
									RTHOOK(25);
									ti4_1 = (nstcall = 1, F1074_10434(loc11, loc1));
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(26);
							if (loc9) {
								RTHOOK(27);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(28);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(29);
								loc6++;
							}
						}
					} else {
						RTHOOK(30);
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(31);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(32);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(33);
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(34);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(35);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(36);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(37);
								tc1 = (nstcall = 0, F1074_10442(Current, loc2));
								ti4_1 = (EIF_INTEGER_32) (tc1);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
								if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
									RTHOOK(38);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(39);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(40);
									loc2++;
									RTHOOK(41);
									loc1++;
								}
							}
							RTHOOK(42);
							if (loc9) {
								RTHOOK(43);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(44);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(45);
								loc6++;
							}
						}
					}
				} else {
					RTHOOK(46);
					loc7 = (nstcall = 0, F1074_10436(Current, arg2));
					RTHOOK(47);
					loc12 = arg1;
					loc12 = RTRV(eif_new_type(1073, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						RTHOOK(48);
						ti4_1 = *(EIF_INTEGER_32 *)(loc12+ _LNGOFF_1_1_0_3_);
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(49);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(50);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(51);
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(52);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(53);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(54);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(55);
								loc4 = (nstcall = 0, F1074_10431(Current, loc2));
								RTHOOK(56);
								ti4_1 = (nstcall = 1, F1074_10431(loc12, loc1));
								loc5 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(57);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(58);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(59);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(60);
									ti4_1 = (nstcall = 0, F1074_10434(Current, loc2));
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(61);
									ti4_1 = (nstcall = 1, F1074_10434(loc12, loc1));
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(62);
							if (loc9) {
								RTHOOK(63);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(64);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(65);
								ti4_1 = (nstcall = 0, F1074_10434(Current, loc7));
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(66);
								loc6++;
							}
						}
					} else {
						RTHOOK(67);
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(68);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(69);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(70);
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(71);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(72);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(73);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(74);
								loc4 = (nstcall = 0, F1074_10431(Current, loc2));
								RTHOOK(75);
								tu4_1 = (EIF_NATURAL_32) loc4;
								tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
								if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
									RTHOOK(76);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(77);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(78);
									ti4_1 = (nstcall = 0, F1074_10434(Current, loc2));
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(79);
									loc1++;
								}
							}
							RTHOOK(80);
							if (loc9) {
								RTHOOK(81);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(82);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(83);
								ti4_1 = (nstcall = 0, F1074_10434(Current, loc7));
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(84);
								loc6++;
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(85);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ti4_1) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(86);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb1 = (nstcall = 1, F1074_10365(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(87);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, Result, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F1074_10373(RTCW(tr1), arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(88);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, arg2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L))));
			tb2 = (nstcall = 1, F1074_10365(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(89);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.substring_index */
EIF_INTEGER_32 F1074_10346 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc12);
	RTLR(5,loc13);
	RTLIU(6);
	
	RTEAA("substring_index", 1073, Current, 13, 2, 14961);
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
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			Result = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(9);
			tr1 = RTOUCR(438,(nstcall = 0, F1074_10452), (Current));
			tr2 = RTOUCR(439,(nstcall = 0, F1074_10453), (Current));
			tb1 = (nstcall = 1, F1_7(tr1, tr2));
			if (tb1) {
				RTHOOK(10);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
				loc11 = (EIF_NATURAL_32) tu4_1;
			} else {
				RTHOOK(11);
				loc11 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4294967295U);
			}
			RTHOOK(12);
			loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 - loc10) + ((EIF_INTEGER_32) 1L));
			RTHOOK(13);
			if ((EIF_BOOLEAN) (arg2 <= loc8)) {
				RTHOOK(14);
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
					RTHOOK(15);
					loc12 = arg1;
					loc12 = RTRV(eif_new_type(1073, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						RTHOOK(16);
						ti4_1 = *(EIF_INTEGER_32 *)(loc12+ _LNGOFF_1_1_0_3_);
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(17);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(18);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(19);
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(20);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(21);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(22);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(23);
								ti4_1 = (nstcall = 1, F1074_10431(loc12, loc1));
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(24);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(25);
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(26);
								tc1 = (nstcall = 0, F1074_10442(Current, loc2));
								tu4_1 = (EIF_NATURAL_32) tc1;
								if ((EIF_BOOLEAN)(tu4_1 != loc4)) {
									RTHOOK(27);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(28);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(29);
									loc2++;
									RTHOOK(30);
									ti4_1 = (nstcall = 1, F1074_10434(loc12, loc1));
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(31);
							if (loc9) {
								RTHOOK(32);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(33);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(34);
								loc6++;
							}
						}
					} else {
						RTHOOK(35);
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(36);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(37);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(38);
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(39);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(40);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(41);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(42);
								tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(43);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(44);
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(45);
								tc1 = (nstcall = 0, F1074_10442(Current, loc2));
								tu4_1 = (EIF_NATURAL_32) tc1;
								if ((EIF_BOOLEAN)(tu4_1 != loc4)) {
									RTHOOK(46);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(47);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(48);
									loc2++;
									RTHOOK(49);
									loc1++;
								}
							}
							RTHOOK(50);
							if (loc9) {
								RTHOOK(51);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(52);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(53);
								loc6++;
							}
						}
					}
				} else {
					RTHOOK(54);
					loc7 = (nstcall = 0, F1074_10436(Current, arg2));
					RTHOOK(55);
					loc13 = arg1;
					loc13 = RTRV(eif_new_type(1073, 0x01),loc13);
					if (EIF_TEST(loc13)) {
						RTHOOK(56);
						ti4_1 = *(EIF_INTEGER_32 *)(loc13+ _LNGOFF_1_1_0_3_);
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(57);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(58);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(59);
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(60);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(61);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(62);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(63);
								ti4_1 = (nstcall = 0, F1074_10431(Current, loc2));
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(64);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(65);
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(66);
								ti4_1 = (nstcall = 1, F1074_10431(loc13, loc1));
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc5 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(67);
								if ((EIF_BOOLEAN) (loc5 > loc11)) {
									RTHOOK(68);
									loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(69);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(70);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(71);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(72);
									ti4_1 = (nstcall = 0, F1074_10434(Current, loc2));
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(73);
									ti4_1 = (nstcall = 1, F1074_10434(loc13, loc1));
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(74);
							if (loc9) {
								RTHOOK(75);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(76);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(77);
								ti4_1 = (nstcall = 0, F1074_10434(Current, loc7));
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(78);
								loc6++;
							}
						}
					} else {
						RTHOOK(79);
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(80);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(81);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(82);
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(83);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(84);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(85);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(86);
								ti4_1 = (nstcall = 0, F1074_10431(Current, loc2));
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(87);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(88);
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(89);
								tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
								loc5 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(90);
								if ((EIF_BOOLEAN) (loc5 > loc11)) {
									RTHOOK(91);
									loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(92);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(93);
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(94);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(95);
									ti4_1 = (nstcall = 0, F1074_10434(Current, loc2));
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(96);
									loc1++;
								}
							}
							RTHOOK(97);
							if (loc9) {
								RTHOOK(98);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(99);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(100);
								ti4_1 = (nstcall = 0, F1074_10434(Current, loc7));
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(101);
								loc6++;
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(102);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ti4_1) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(103);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb1 = (nstcall = 1, F1074_10366(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(104);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, Result, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7191[Dtype(RTCW(arg1))-1026])(arg1, tr1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(105);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, arg2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L))));
			tb2 = (nstcall = 1, F1074_10366(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(106);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.string */
EIF_REFERENCE F1074_10347 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("string", 1073, Current, 3, 0, 14962);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), loc2));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			tc1 = (nstcall = 0, F1074_10442(Current, loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(7);
			loc1++;
		}
	} else {
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(11);
			loc3 = (nstcall = 0, F1074_10431(Current, loc1));
			RTHOOK(12);
			tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
			ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
			if ((EIF_BOOLEAN) (loc3 <= ti4_1)) {
				RTHOOK(13);
				tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
				tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc3));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			} else {
				RTHOOK(14);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '\000'));
			}
			RTHOOK(15);
			ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("string_type", EX_POST);
		tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1023_8726(RTCW(tr1)));
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("first_item", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(Result))-723])(Result, ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tc1 == (nstcall = 0, F1074_10342(Current, ((EIF_INTEGER_32) 1L))));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F1074_10347(RTCW(tr2)));
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.plus */
EIF_REFERENCE F1074_10348 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("plus", 1073, Current, 0, 1, 14963);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	ti4_2 = (nstcall = 1, F291_5561(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L), ti4_2));
	(nstcall = -1, F1074_10326(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTHOOK(3);
	(nstcall = 1, F1074_10385(RTCW(Result), Current));
	RTHOOK(4);
	(nstcall = 1, F1074_10385(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("plus_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTHOOK(8);
		RTHOOK(9);
		RTCT("final_unicode", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		tr1 = (nstcall = 1, F1074_10344(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_2 + ti4_3)));
		tb1 = (nstcall = 1, F1074_10373(RTCW(tr1), arg1));
		if (tb1) {
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

/* {UC_STRING}.gobo_plus_general */
EIF_REFERENCE F1074_10349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("gobo_plus_general", 1073, Current, 0, 1, 14964);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7162[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
	ti4_2 = (nstcall = 1, F291_5561(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L), ti4_2));
	(nstcall = -1, F1074_10326(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTHOOK(4);
	(nstcall = 1, F1074_10385(RTCW(Result), Current));
	RTHOOK(5);
	(nstcall = 1, F1074_10381(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTHOOK(9);
		RTHOOK(10);
		RTCT("final_unicode", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		tr1 = (nstcall = 1, F1074_10344(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_2 + ti4_3)));
		tb1 = (nstcall = 1, F1074_10373(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.prefixed_string */
EIF_REFERENCE F1074_10350 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("prefixed_string", 1073, Current, 0, 1, 14965);
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
	Result = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
	ti4_2 = (nstcall = 1, F291_5561(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L), ti4_2));
	(nstcall = -1, F1074_10326(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTHOOK(3);
	(nstcall = 1, F1074_10381(RTCW(Result), arg1));
	RTHOOK(4);
	(nstcall = 1, F1074_10385(RTCW(Result), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("prefixed_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("prefixed_string_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("initial", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		tr1 = (nstcall = 1, F1074_10344(RTCW(Result), ((EIF_INTEGER_32) 1L), ti4_1));
		tb1 = (nstcall = 1, F1074_10373(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("final", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F1074_10344(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr1), Current));
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.index_of_unicode */
EIF_INTEGER_32 F1074_10351 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("index_of_unicode", 1073, Current, 0, 2, 14966);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (nstcall = 0, F1074_10352(Current, ti4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb1 = (nstcall = 1, F1074_10362(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10362(RTCW(tr1), arg1));
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, Result)) == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10362(RTCW(tr1), arg1));
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F1074_10362(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.index_of_item_code */
EIF_INTEGER_32 F1074_10352 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("index_of_item_code", 1073, Current, 3, 2, 14967);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 127L))) {
			RTHOOK(6);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				RTHOOK(9);
				tc1 = (nstcall = 0, F1074_10442(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tc1);
				if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
					RTHOOK(10);
					Result = (EIF_INTEGER_32) loc1;
					RTHOOK(11);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(12);
					loc1++;
				}
			}
		}
	} else {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (arg2 <= loc3)) {
			RTHOOK(14);
			loc2 = (nstcall = 0, F1074_10436(Current, arg2));
			RTHOOK(15);
			loc1 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(16);
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				RTHOOK(17);
				if ((EIF_BOOLEAN)((nstcall = 0, F1074_10431(Current, loc2)) == arg1)) {
					RTHOOK(18);
					Result = (EIF_INTEGER_32) loc1;
					RTHOOK(19);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(20);
					ti4_1 = (nstcall = 0, F1074_10434(Current, loc2));
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(21);
					loc1++;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb1 = (nstcall = 1, F1074_10363(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10363(RTCW(tr1), arg1));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, Result)) == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10363(RTCW(tr1), arg1));
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F1074_10363(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.index_of */
EIF_INTEGER_32 F1074_10353 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("index_of", 1073, Current, 5, 2, 14968);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(7);
			if ((EIF_BOOLEAN)((nstcall = 0, F1074_10442(Current, loc1)) == arg1)) {
				RTHOOK(8);
				Result = (EIF_INTEGER_32) loc1;
				RTHOOK(9);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				loc1++;
			}
		}
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '\000')) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (arg2 <= loc3)) {
				RTHOOK(13);
				tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
				ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(14);
				loc2 = (nstcall = 0, F1074_10436(Current, arg2));
				RTHOOK(15);
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(17);
					loc5 = (nstcall = 0, F1074_10431(Current, loc2));
					RTHOOK(18);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc5 > loc4))) {
						RTHOOK(19);
						Result = (EIF_INTEGER_32) loc1;
						RTHOOK(20);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(21);
						ti4_1 = (nstcall = 0, F1074_10434(Current, loc2));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(22);
						loc1++;
					}
				}
			}
		} else {
			RTHOOK(23);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			Result = (nstcall = 0, F1074_10352(Current, ti4_1, arg2));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb1 = (nstcall = 1, F1074_10364(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10364(RTCW(tr1), arg1));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, Result)) == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10364(RTCW(tr1), arg1));
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F1074_10364(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.hash_code */
EIF_INTEGER_32 F1074_10354 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("hash_code", 1073, Current, 4, 0, 14969);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		Result = (nstcall = 0, F1023_8735(Current));
	} else {
		RTHOOK(5);
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		RTHOOK(7);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(9);
			loc3 = (nstcall = 0, F1074_10431(Current, loc1));
			RTHOOK(10);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) * Result) + loc3);
			RTHOOK(11);
			tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
			ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
			if ((EIF_BOOLEAN) (loc3 > ti4_1)) {
				RTHOOK(12);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(13);
			ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if (loc4) {
			RTHOOK(15);
			tr1 = (nstcall = 0, F1074_10347(Current));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6239[Dtype(RTCW(tr1))-909])(tr1));
			Result = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTHOOK(16);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {UC_STRING}.new_empty_string */
EIF_REFERENCE F1074_10355 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("new_empty_string", 1073, Current, 0, 1, 14970);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_suggested_capacity", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1074_10326(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, Current));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_3_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("byte_capacity_set", EX_POST);
		ti4_1 = (nstcall = 1, F1074_10361(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
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
	return Result;
}

/* {UC_STRING}.unicode_occurrences */
EIF_INTEGER_32 F1074_10356 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("unicode_occurrences", 1073, Current, 0, 1, 14971);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (nstcall = 0, F1074_10357(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("zero_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) != ti4_1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			ti4_1 = (nstcall = 1, F1074_10356(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) == ti4_1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			ti4_1 = (nstcall = 1, F1074_10356(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.code_occurrences */
EIF_INTEGER_32 F1074_10357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("code_occurrences", 1073, Current, 2, 1, 14972);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 127L))) {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(6);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(8);
				tc1 = (nstcall = 0, F1074_10442(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tc1);
				if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
					RTHOOK(9);
					Result++;
				}
				RTHOOK(10);
				loc1++;
			}
		}
	} else {
		RTHOOK(11);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(14);
			if ((EIF_BOOLEAN)((nstcall = 0, F1074_10431(Current, loc1)) == arg1)) {
				RTHOOK(15);
				Result++;
			}
			RTHOOK(16);
			ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("zero_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			ti4_1 = (nstcall = 1, F1074_10357(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			ti4_1 = (nstcall = 1, F1074_10357(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.occurrences */
EIF_INTEGER_32 F1074_10358 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("occurrences", 1073, Current, 4, 1, 14973);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(5);
			if ((EIF_BOOLEAN)((nstcall = 0, F1074_10442(Current, loc1)) == arg1)) {
				RTHOOK(6);
				Result++;
			}
			RTHOOK(7);
			loc1++;
		}
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '\000')) {
			RTHOOK(9);
			tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
			ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(13);
				loc4 = (nstcall = 0, F1074_10431(Current, loc1));
				RTHOOK(14);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 > loc3))) {
					RTHOOK(15);
					Result++;
				}
				RTHOOK(16);
				ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
				loc1 = (EIF_INTEGER_32) ti4_1;
			}
		} else {
			RTHOOK(17);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			Result = (nstcall = 0, F1074_10357(Current, ti4_1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("zero_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			ti4_1 = (nstcall = 1, F1074_10358(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			ti4_1 = (nstcall = 1, F1074_10358(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.count */
EIF_INTEGER_32 F1074_10359 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
}


/* {UC_STRING}.byte_count */
EIF_INTEGER_32 F1074_10360 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
}


/* {UC_STRING}.byte_capacity */
EIF_INTEGER_32 F1074_10361 (EIF_REFERENCE Current)
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
	
	RTEAA("byte_capacity", 1073, Current, 0, 0, 14976);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1026_8877(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("capacity_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("capacity_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.has_unicode */
EIF_BOOLEAN F1074_10362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has_unicode", 1073, Current, 0, 1, 14977);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (nstcall = 0, F1074_10363(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("false_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) == ti4_1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) != ti4_1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb2 = (nstcall = 1, F1074_10362(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.has_item_code */
EIF_BOOLEAN F1074_10363 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_item_code", 1073, Current, 0, 1, 14978);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F1074_10352(Current, arg1, ((EIF_INTEGER_32) 1L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("false_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb2 = (nstcall = 1, F1074_10363(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.has */
EIF_BOOLEAN F1074_10364 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has", 1073, Current, 0, 1, 14979);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F1074_10353(Current, arg1, ((EIF_INTEGER_32) 1L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F614_5999(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("false_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb2 = (nstcall = 1, F1074_10364(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.has_unicode_substring */
EIF_BOOLEAN F1074_10365 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has_unicode_substring", 1073, Current, 0, 1, 14980);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTHOOK(5);
			ti4_1 = (nstcall = 0, F1074_10345(Current, arg1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) < ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) >= ti4_1)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), ti4_1));
			tb3 = (nstcall = 1, F1074_10373(RTCW(tr1), arg1));
			tb2 = tb3;
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) >= ti4_1)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), ti4_1));
			tb3 = (nstcall = 1, F1074_10373(RTCW(tr1), arg1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb2 = (nstcall = 1, F1074_10365(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("has_substring", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (nstcall = 0, F1074_10366(Current, arg1));
		}
		if (tb1) {
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

/* {UC_STRING}.has_substring */
EIF_BOOLEAN F1074_10366 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has_substring", 1073, Current, 0, 1, 14981);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTHOOK(5);
			ti4_1 = (nstcall = 0, F1074_10346(Current, arg1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) < ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) >= ti4_1)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), ti4_1));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7191[Dtype(RTCW(arg1))-1026])(arg1, tr1));
			tb2 = tb3;
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) >= ti4_1)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), ti4_1));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7191[Dtype(RTCW(arg1))-1026])(arg1, tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb2 = (nstcall = 1, F1074_10366(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.is_empty */
EIF_BOOLEAN F1074_10367 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 1073, Current, 0, 0, 14982);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.is_ascii */
EIF_BOOLEAN F1074_10368 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_ascii", 1073, Current, 0, 0, 14983);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || (Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			tr1 = (nstcall = 0, F1074_10339(Current, ((EIF_INTEGER_32) 1L)));
			tb3 = (nstcall = 1, F910_7345(RTCW(tr1)));
			if (tb3) {
				tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
				tb3 = (nstcall = 1, F1074_10368(RTCW(tr1)));
				tb2 = tb3;
			}
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.is_equal */
EIF_BOOLEAN F1074_10369 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 1073, Current, 2, 1, 14984);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		tb1 = '\0';
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tb2 = (nstcall = 1, F4_1279(RTCW(tr1), Current, arg1));
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
		}
		if (tb1) {
			RTHOOK(4);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			RTHOOK(5);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(6);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(8);
				tc1 = (nstcall = 1, F1074_10442(RTCW(arg1), loc1));
				if ((EIF_BOOLEAN)((nstcall = 0, F1074_10442(Current, loc1)) != tc1)) {
					RTHOOK(9);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(10);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(11);
					loc1++;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("unicode_definition", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tb3 = (nstcall = 1, F4_1279(RTCW(tr1), Current, arg1));
		if (tb3) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1);
		}
		if (tb2) {
			tb2 = '\01';
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				tu4_1 = (nstcall = 1, F1074_10341(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, ((EIF_INTEGER_32) 1L))) == tu4_1)) {
					tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
					tr2 = (nstcall = 1, F1074_10344(RTCW(arg1), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
					tb4 = (nstcall = 1, F1074_10369(RTCW(tr1), tr2));
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	return Result;
}

/* {UC_STRING}.is_less */
EIF_BOOLEAN F1074_10370 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_less", 1073, Current, 0, 1, 14985);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F1074_10374(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("unicode_definition", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (!tb2) {
			tb2 = '\0';
			tb3 = '\0';
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
				tb3 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
			if (tb3) {
				tb3 = '\01';
				tu4_1 = (nstcall = 1, F1074_10341(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
				if (!(EIF_BOOLEAN) ((nstcall = 0, F1074_10341(Current, ((EIF_INTEGER_32) 1L))) < tu4_1)) {
					tb4 = '\0';
					tu4_1 = (nstcall = 1, F1074_10341(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
					if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, ((EIF_INTEGER_32) 1L))) == tu4_1)) {
						tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
						tr2 = (nstcall = 1, F1074_10344(RTCW(arg1), ((EIF_INTEGER_32) 2L), ti4_1));
						tb5 = (nstcall = 1, F1074_10370(RTCW(tr1), tr2));
						tb4 = tb5;
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {UC_STRING}.same_string */
EIF_BOOLEAN F1074_10371 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("same_string", 1073, Current, 0, 1, 14986);
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
	Result = (nstcall = 0, F1074_10372(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F1074_10347(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7288[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(Result == RTEQ(tr1, tr2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.same_string_general */
EIF_BOOLEAN F1074_10372 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("same_string_general", 1073, Current, 7, 1, 14987);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTHOOK(5);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(6);
			loc7 = arg1;
			loc7 = RTRV(eif_new_type(1073, 0x01),loc7);
			if (EIF_TEST(loc7)) {
				RTHOOK(7);
				tr1 = RTOUCR(438,(nstcall = 0, F1074_10452), (Current));
				tr2 = RTOUCR(439,(nstcall = 0, F1074_10453), (Current));
				tb1 = (nstcall = 1, F1_7(tr1, tr2));
				if (tb1) {
					RTHOOK(8);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
					loc6 = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(9);
					loc6 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4294967295U);
				}
				RTHOOK(10);
				loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(12);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(13);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(15);
					ti4_1 = (nstcall = 0, F1074_10431(Current, loc1));
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc4 > loc6)) {
						RTHOOK(17);
						loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(18);
					ti4_1 = (nstcall = 1, F1074_10431(loc7, loc2));
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(19);
					if ((EIF_BOOLEAN) (loc5 > loc6)) {
						RTHOOK(20);
						loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(22);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(23);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(24);
						ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(25);
						ti4_1 = (nstcall = 1, F1074_10434(loc7, loc2));
						loc2 = (EIF_INTEGER_32) ti4_1;
					}
				}
			} else {
				RTHOOK(26);
				tr1 = RTOUCR(438,(nstcall = 0, F1074_10452), (Current));
				tr2 = RTOUCR(439,(nstcall = 0, F1074_10453), (Current));
				tb1 = (nstcall = 1, F1_7(tr1, tr2));
				if (tb1) {
					RTHOOK(27);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
					loc6 = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(28);
					loc6 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4294967295U);
				}
				RTHOOK(29);
				loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				RTHOOK(30);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(31);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(32);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(33);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(34);
					ti4_1 = (nstcall = 0, F1074_10431(Current, loc1));
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(35);
					if ((EIF_BOOLEAN) (loc4 > loc6)) {
						RTHOOK(36);
						loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(37);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc2));
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(38);
					if ((EIF_BOOLEAN) (loc5 > loc6)) {
						RTHOOK(39);
						loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(40);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(41);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(42);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(43);
						ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(44);
						loc2++;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.same_unicode_string */
EIF_BOOLEAN F1074_10373 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("same_unicode_string", 1073, Current, 6, 1, 14988);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTHOOK(5);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(6);
			loc6 = arg1;
			loc6 = RTRV(eif_new_type(1073, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(7);
				loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(9);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(10);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(11);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(12);
					ti4_1 = (nstcall = 0, F1074_10431(Current, loc1));
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(13);
					ti4_1 = (nstcall = 1, F1074_10431(loc6, loc2));
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(14);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(15);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(16);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(17);
						ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(18);
						ti4_1 = (nstcall = 1, F1074_10434(loc6, loc2));
						loc2 = (EIF_INTEGER_32) ti4_1;
					}
				}
			} else {
				RTHOOK(19);
				loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				RTHOOK(20);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(21);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(22);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(23);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(24);
					ti4_1 = (nstcall = 0, F1074_10431(Current, loc1));
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(25);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc2));
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(27);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(29);
						ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(30);
						loc2++;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			tb2 = '\01';
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, ((EIF_INTEGER_32) 1L))) == tu4_1)) {
					tb4 = '\01';
					if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) >= ((EIF_INTEGER_32) 2L))) {
						tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
						tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
						tb5 = (nstcall = 1, F1074_10373(RTCW(tr1), tr2));
						tb4 = tb5;
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("same_string", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (nstcall = 0, F1074_10372(Current, arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.three_way_comparison */
EIF_INTEGER_32 F1074_10374 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("three_way_comparison", 1073, Current, 7, 1, 14989);
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
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		tb1 = (nstcall = 0, F1_7(Current, arg1));
	}
	if (tb1) {
		RTHOOK(3);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 < loc4)) {
			RTHOOK(6);
			loc2 = (EIF_INTEGER_32) loc3;
		} else {
			RTHOOK(7);
			loc2 = (EIF_INTEGER_32) loc4;
		}
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(10);
			loc5 = (nstcall = 0, F1074_10442(Current, loc1));
			RTHOOK(11);
			tc1 = (nstcall = 1, F1074_10442(RTCW(arg1), loc1));
			loc6 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc5 == loc6)) {
				RTHOOK(13);
				loc1++;
			} else {
				RTHOOK(14);
				if ((EIF_BOOLEAN) (loc5 < loc6)) {
					RTHOOK(15);
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(16);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(17);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(18);
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(19);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				}
			}
		}
		RTHOOK(21);
		if ((EIF_BOOLEAN) !loc7) {
			RTHOOK(22);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(23);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN)(loc3 != loc4)) {
					RTHOOK(25);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("equal_zero", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == RTEQ(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("smaller_negative", EX_POST);
		tb1 = (nstcall = 1, F1074_10370(Current, arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("greater_positive", EX_POST);
		tb1 = (nstcall = 1, F211_3880(Current, arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.three_way_unicode_comparison */
EIF_INTEGER_32 F1074_10375 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc10);
	RTLIU(3);
	
	RTEAA("three_way_unicode_comparison", 1073, Current, 10, 1, 14990);
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
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(4);
		tb1 = '\0';
		if ((nstcall = 0, F1_7(Current, arg1))) {
			loc10 = arg1;
			loc10 = RTRV(eif_new_type(1073, 0x01),loc10);
			tb1 = EIF_TEST(loc10);
		}
		if (tb1) {
			RTHOOK(5);
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(loc10+ _LNGOFF_1_1_0_3_);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(8);
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(9);
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(10);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(12);
				loc5 = (nstcall = 0, F1074_10442(Current, loc1));
				RTHOOK(13);
				tc1 = (nstcall = 1, F1074_10442(loc10, loc1));
				loc6 = (EIF_CHARACTER_8) tc1;
				RTHOOK(14);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(15);
					loc1++;
				} else {
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc5 < loc6)) {
						RTHOOK(17);
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(18);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(19);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(20);
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(21);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(22);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					}
				}
			}
			RTHOOK(23);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(24);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(25);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(27);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		} else {
			RTHOOK(28);
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			RTHOOK(29);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(30);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(31);
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(32);
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(33);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(34);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(35);
				loc7 = (nstcall = 0, F1074_10341(Current, loc1));
				RTHOOK(36);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(37);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(38);
					loc1++;
				} else {
					RTHOOK(39);
					if ((EIF_BOOLEAN) (loc7 < loc8)) {
						RTHOOK(40);
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(41);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(42);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(43);
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(44);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(45);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					}
				}
			}
			RTHOOK(46);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(47);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(48);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(49);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(50);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(51);
		RTCT("equal_zero", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (nstcall = 0, F1074_10373(Current, arg1)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(52);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.put_unicode */
void F1074_10376 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTEAA("put_unicode", 1073, Current, 0, 2, 14991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F1074_10377(Current, ti4_2, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("replaced", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, arg2)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_before_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		RTCO(tr2);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("stable_after_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		RTCO(tr4);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr3));
		if (tb1) {
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

/* {UC_STRING}.put_item_code */
void F1074_10377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTEAA("put_item_code", 1073, Current, 6, 2, 14992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_item_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) arg2;
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(6);
		loc1 = (nstcall = 0, F1074_10436(Current, arg2));
		RTHOOK(7);
		loc6 = (nstcall = 0, F1074_10442(Current, loc1));
		RTHOOK(8);
		tr5 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_2 = (nstcall = 1, F291_5559(RTCW(tr5), loc6));
		loc3 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(9);
	tr5 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_2 = (nstcall = 1, F291_5565(RTCW(tr5), arg1));
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc4 == loc3)) {
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc4 < loc3)) {
			RTHOOK(12);
			(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (loc3 - loc4)));
		} else {
			RTHOOK(13);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
			RTHOOK(14);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc2);
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc5 > (nstcall = 0, F1074_10361(Current)))) {
				RTHOOK(16);
				(nstcall = 0, F1074_10444(Current, loc5));
			}
			RTHOOK(17);
			(nstcall = 0, F1074_10445(Current, (EIF_INTEGER_32) (loc1 + loc3), loc2));
		}
	}
	RTHOOK(18);
	(nstcall = 0, F1074_10449(Current, arg1, loc4, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("replaced", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("stable_before_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		RTCO(tr2);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("stable_after_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		RTCO(tr4);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {UC_STRING}.put */
void F1074_10378 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put", 1073, Current, 6, 2, 14993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32) arg2;
		RTHOOK(3);
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		loc1 = (nstcall = 0, F1074_10436(Current, arg2));
		RTHOOK(5);
		loc3 = (nstcall = 0, F1074_10442(Current, loc1));
		RTHOOK(6);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), loc3));
		loc4 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(7);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_1 = (nstcall = 1, F291_5562(RTCW(tr1), arg1));
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc5 == loc4)) {
	} else {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc5 < loc4)) {
			RTHOOK(10);
			(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc1 + loc4), (EIF_INTEGER_32) (loc4 - loc5)));
		} else {
			RTHOOK(11);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc4);
			RTHOOK(12);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + loc2);
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc6 > (nstcall = 0, F1074_10361(Current)))) {
				RTHOOK(14);
				(nstcall = 0, F1074_10444(Current, loc6));
			}
			RTHOOK(15);
			(nstcall = 0, F1074_10445(Current, (EIF_INTEGER_32) (loc1 + loc4), loc2));
		}
	}
	RTHOOK(16);
	(nstcall = 0, F1074_10450(Current, arg1, loc5, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("unicode_replaced", EX_POST);
		tu4_1 = (EIF_NATURAL_32) arg1;
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, arg2)) == tu4_1)) {
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

/* {UC_STRING}.prepend */
void F1074_10379 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("prepend", 1073, Current, 0, 1, 14994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		ti4_1 = (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2);
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F1074_10401(Current, arg1, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {UC_STRING}.prepend_string */
void F1074_10380 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("prepend_string", 1073, Current, 0, 1, 14995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		(nstcall = 0, F1074_10379(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_string_general */
void F1074_10381 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("append_string_general", 1073, Current, 1, 1, 14996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F1026_8887(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7162[Dtype(RTCW(arg1))-1026])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1025, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(nstcall = 0, F1074_10387(Current, loc1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F1028_8968(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_unicode_character */
void F1074_10382 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("append_unicode_character", 1073, Current, 0, 1, 14997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		tr1 = (nstcall = 0, F1074_10413(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F1074_10383(Current, ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("appended", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("stable_before", EX_POST);
		tr3 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
		RTCO(tr2);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr3), tr1));
		if (tb1) {
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

/* {UC_STRING}.append_item_code */
void F1074_10383 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("append_item_code", 1073, Current, 3, 1, 14998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_item_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		tr1 = (nstcall = 0, F1074_10413(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr3 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_2 = (nstcall = 1, F291_5565(RTCW(tr3), arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F1074_10361(Current)))) {
		RTHOOK(6);
		(nstcall = 0, F1074_10444(Current, loc3));
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	RTHOOK(8);
	(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(9);
	(nstcall = 0, F1074_10449(Current, arg1, loc2, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("appended", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("stable_before", EX_POST);
		tr3 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
		RTCO(tr2);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr3), tr1));
		if (tb1) {
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

/* {UC_STRING}.append_character */
void F1074_10384 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("append_character", 1073, Current, 4, 1, 14999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		RTHOOK(2);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_2 = (nstcall = 1, F291_5562(RTCW(tr1), arg1));
		loc2 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F1074_10361(Current)))) {
		RTHOOK(7);
		(nstcall = 0, F1074_10444(Current, loc3));
	}
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(10);
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		RTHOOK(11);
		(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
		RTHOOK(12);
		(nstcall = 0, F1028_8956(Current, arg1, loc1));
		RTHOOK(13);
		(nstcall = 0, F1074_10448(Current, loc4));
	} else {
		RTHOOK(14);
		(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(15);
		(nstcall = 0, F1074_10450(Current, arg1, loc2, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTHOOK(19);
		RTCT("unicode_appended", EX_POST);
		tu4_1 = (EIF_NATURAL_32) arg1;
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == tu4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_string */
void F1074_10385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_string", 1073, Current, 0, 1, 15000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		(nstcall = 0, F1074_10387(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("appended", EX_POST);
		if ((!((EIF_BOOLEAN)(arg1 != NULL)) || ((EIF_BOOLEAN) 1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {UC_STRING}.put_string */
void F1074_10386 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("put_string", 1073, Current, 0, 1, 15001);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F1074_10429(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F1074_10387(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append */
void F1074_10387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLIU(7);
	
	RTEAA("append", 1073, Current, 8, 1, 15002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
	tr3 = RTOUCR(439,(nstcall = 0, F1074_10453), (Current));
	tb1 = (nstcall = 1, F4_1279(RTCW(tr2), arg1, tr3));
	if (tb1) {
		RTHOOK(3);
		tr2 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		ti4_3 = (nstcall = 1, F291_5561(RTCW(tr2), arg1, ((EIF_INTEGER_32) 1L), ti4_3));
		loc1 = (EIF_INTEGER_32) ti4_3;
		RTHOOK(4);
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN)(loc1 == ti4_3)) {
			RTHOOK(5);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc1);
			RTHOOK(6);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc1);
			RTHOOK(7);
			(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
			RTHOOK(8);
			(nstcall = 0, F1028_9018(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
			RTHOOK(9);
			loc6 = (nstcall = 0, F43_1696(Current, (EIF_BOOLEAN) 0));
			RTHOOK(10);
			(nstcall = 0, F1028_8969(Current, arg1));
			RTHOOK(11);
			tb1 = (nstcall = 0, F43_1696(Current, loc6));
			loc6 = (EIF_BOOLEAN) tb1;
			RTHOOK(12);
			ti4_3 = (nstcall = 0, F1074_10361(Current));
			(nstcall = 0, F1074_10448(Current, ti4_3));
			RTHOOK(13);
			ti4_3 = (nstcall = 0, F1074_10361(Current));
			(nstcall = 0, F1028_9018(Current, ti4_3));
			RTHOOK(14);
			(nstcall = 0, F1074_10448(Current, loc5));
			RTHOOK(15);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
		} else {
			RTHOOK(16);
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			(nstcall = 0, F1074_10388(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_3));
		}
	} else {
		RTHOOK(17);
		loc7 = arg1;
		loc7 = RTRV(eif_new_type(1073, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			RTHOOK(18);
			tb1 = '\01';
			loc8 = arg1;
			loc8 = RTRV(eif_new_type(1074, 0x01),loc8);
			if (!(EIF_TEST(loc8))) {
				tr2 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
				tr3 = RTOUCR(440,(nstcall = 0, F1074_10454), (Current));
				tb2 = (nstcall = 1, F4_1279(RTCW(tr2), loc7, tr3));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc7 == Current)) {
					RTHOOK(20);
					loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc4);
					RTHOOK(21);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc5);
					RTHOOK(22);
					(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
					RTHOOK(23);
					(nstcall = 0, F1028_9018(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
					RTHOOK(24);
					loc6 = (nstcall = 0, F43_1696(Current, (EIF_BOOLEAN) 0));
					RTHOOK(25);
					(nstcall = 0, F1028_8969(Current, arg1));
					RTHOOK(26);
					tb1 = (nstcall = 0, F43_1696(Current, loc6));
					loc6 = (EIF_BOOLEAN) tb1;
					RTHOOK(27);
					ti4_3 = (nstcall = 0, F1074_10361(Current));
					(nstcall = 0, F1074_10448(Current, ti4_3));
					RTHOOK(28);
					ti4_3 = (nstcall = 0, F1074_10361(Current));
					(nstcall = 0, F1028_9018(Current, ti4_3));
					RTHOOK(29);
					(nstcall = 0, F1074_10448(Current, loc5));
					RTHOOK(30);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
				} else {
					RTHOOK(31);
					ti4_3 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_2_);
					loc3 = (EIF_INTEGER_32) ti4_3;
					RTHOOK(32);
					ti4_3 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_3_);
					loc2 = (EIF_INTEGER_32) ti4_3;
					RTHOOK(33);
					loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc2);
					RTHOOK(34);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc3);
					RTHOOK(35);
					(nstcall = 1, F1074_10448(loc7, loc2));
					RTHOOK(36);
					(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
					RTHOOK(37);
					(nstcall = 0, F1028_9018(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
					RTHOOK(38);
					loc6 = (nstcall = 0, F43_1696(Current, (EIF_BOOLEAN) 0));
					RTHOOK(39);
					(nstcall = 0, F1028_8969(Current, arg1));
					RTHOOK(40);
					tb1 = (nstcall = 0, F43_1696(Current, loc6));
					loc6 = (EIF_BOOLEAN) tb1;
					RTHOOK(41);
					ti4_3 = (nstcall = 0, F1074_10361(Current));
					(nstcall = 0, F1074_10448(Current, ti4_3));
					RTHOOK(42);
					ti4_3 = (nstcall = 0, F1074_10361(Current));
					(nstcall = 0, F1028_9018(Current, ti4_3));
					RTHOOK(43);
					(nstcall = 0, F1074_10448(Current, loc5));
					RTHOOK(44);
					(nstcall = 1, F1074_10448(loc7, loc3));
					RTHOOK(45);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
				}
			} else {
				RTHOOK(46);
				ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
				(nstcall = 0, F1074_10388(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_3));
			}
		} else {
			RTHOOK(47);
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			(nstcall = 0, F1074_10388(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_3));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(48);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(49);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(50);
	RTLE;
	RTEE;
}

/* {UC_STRING}.gobo_append_substring */
void F1074_10388 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc5);
	RTLR(7,tr5);
	RTLIU(8);
	
	RTEAA("gobo_append_substring", 1073, Current, 5, 3, 15003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, F1074_10413(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, arg2, arg3));
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			RTHOOK(8);
			loc5 = (nstcall = 0, F1074_10413(Current));
		} else {
			RTHOOK(9);
			loc5 = (EIF_REFERENCE) arg1;
		}
		RTHOOK(10);
		tr5 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_1 = (nstcall = 1, F291_5561(RTCW(tr5), loc5, arg2, arg3));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		RTHOOK(12);
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc3);
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc4 > (nstcall = 0, F1074_10361(Current)))) {
			RTHOOK(14);
			(nstcall = 0, F1074_10444(Current, loc4));
		}
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
		RTHOOK(16);
		(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + loc1)));
		RTHOOK(17);
		(nstcall = 0, F1074_10451(Current, loc5, arg2, arg3, loc3, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("appended", EX_POST);
		RTCO(tr2);
		RTCO(tr4);
		tr5 = (nstcall = 1, F1074_10349(RTCV(tr1), tr3));
		if ((nstcall = 0, F1074_10369(Current, tr5))) {
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

/* {UC_STRING}.put_substring */
void F1074_10389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("put_substring", 1073, Current, 0, 3, 15004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F1074_10429(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	(nstcall = 0, F1074_10388(Current, arg1, arg2, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_utf8 */
void F1074_10390 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append_utf8", 1073, Current, 8, 1, 15005);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf8", EX_PRE);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		tb1 = (nstcall = 1, F291_5538(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + loc3);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc8 > (nstcall = 0, F1074_10361(Current)))) {
		RTHOOK(7);
		(nstcall = 0, F1074_10444(Current, loc8));
	}
	RTHOOK(8);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc8;
	RTHOOK(10);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(12);
		loc7++;
		RTHOOK(13);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		loc4 = (EIF_CHARACTER_8) tc1;
		RTHOOK(14);
		(nstcall = 0, F1074_10443(Current, loc4, loc2));
		RTHOOK(15);
		loc1++;
		RTHOOK(16);
		loc2++;
		RTHOOK(17);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), loc4));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(18);
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc5 >= loc6)) break;
			RTHOOK(20);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
			(nstcall = 0, F1074_10443(Current, tc1, loc2));
			RTHOOK(21);
			loc1++;
			RTHOOK(22);
			loc2++;
			RTHOOK(23);
			loc5++;
		}
	}
	RTHOOK(24);
	(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + loc7)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_utf16 */
void F1074_10391 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append_utf16", 1073, Current, 7, 1, 15006);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16", EX_PRE);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6636(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(8);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L)));
		tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 2L)));
		tb1 = (nstcall = 1, F808_6642(RTCW(tr1), tu4_1, tu4_2));
		if (tb1) {
			
			RTHOOK(9);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
		} else {
			RTHOOK(10);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L)));
			tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 2L)));
			tb1 = (nstcall = 1, F808_6644(RTCW(tr1), tu4_1, tu4_2));
			if (tb1) {
				RTHOOK(11);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(12);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			}
		}
	}
	for (;;) {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(14);
		if (loc1) {
			RTHOOK(15);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc2));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
			loc5 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(17);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc2));
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(18);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(19);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6647(RTCW(tr1), loc4));
		if (tb1) {
			
			
			RTHOOK(20);
			loc2 += ((EIF_INTEGER_32) 2L);
			RTHOOK(21);
			if (loc1) {
				RTHOOK(22);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc2));
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(23);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(24);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc2));
				loc7 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(25);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				loc6 = (EIF_INTEGER_32) ti4_1;
			}
			
			RTHOOK(26);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6652(RTCW(tr1), loc4, loc5, loc6, loc7));
			(nstcall = 0, F1074_10383(Current, ti4_1));
		} else {
			RTHOOK(27);
			(nstcall = 0, F1074_10383(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 * ((EIF_INTEGER_32) 256L)) + loc5)));
		}
		RTHOOK(28);
		loc2 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_utf16be */
void F1074_10392 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append_utf16be", 1073, Current, 6, 1, 15007);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16be", EX_PRE);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6637(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc1));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6647(RTCW(tr1), loc3));
		if (tb1) {
			
			
			RTHOOK(10);
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(11);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc1));
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			loc6 = (EIF_INTEGER_32) ti4_1;
			
			RTHOOK(13);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6652(RTCW(tr1), loc3, loc4, loc5, loc6));
			(nstcall = 0, F1074_10383(Current, ti4_1));
		} else {
			RTHOOK(14);
			(nstcall = 0, F1074_10383(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 256L)) + loc4)));
		}
		RTHOOK(15);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_utf16le */
void F1074_10393 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append_utf16le", 1073, Current, 6, 1, 15008);
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
		RTCT("s_is_string", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16le", EX_PRE);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6638(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc1));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6647(RTCW(tr1), loc3));
		if (tb1) {
			
			
			RTHOOK(10);
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(11);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, loc1));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7284[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			loc5 = (EIF_INTEGER_32) ti4_1;
			
			RTHOOK(13);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6652(RTCW(tr1), loc3, loc4, loc5, loc6));
			(nstcall = 0, F1074_10383(Current, ti4_1));
		} else {
			RTHOOK(14);
			(nstcall = 0, F1074_10383(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 256L)) + loc4)));
		}
		RTHOOK(15);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {UC_STRING}.fill_with_unicode */
void F1074_10394 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("fill_with_unicode", 1073, Current, 0, 1, 15009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F1074_10395(Current, ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10356(Current, arg1)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
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

/* {UC_STRING}.fill_with_code */
void F1074_10395 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fill_with_code", 1073, Current, 3, 1, 15010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F1074_10440(Current));
	RTHOOK(3);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_2 = (nstcall = 1, F291_5565(RTCW(tr1), arg1));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * loc3);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F1074_10361(Current)))) {
		RTHOOK(6);
		(nstcall = 0, F1074_10444(Current, loc3));
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(10);
		(nstcall = 0, F1074_10449(Current, arg1, loc2, loc1));
		RTHOOK(11);
		loc1 += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("filled", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10357(Current, arg1)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
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

/* {UC_STRING}.fill_with */
void F1074_10396 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("fill_with", 1073, Current, 3, 1, 15011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F1074_10361(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F1074_10440(Current));
	RTHOOK(2);
	tr2 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_3 = (nstcall = 1, F291_5562(RTCW(tr2), arg1));
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(3);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * loc3);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F1074_10361(Current)))) {
		RTHOOK(5);
		(nstcall = 0, F1074_10444(Current, loc3));
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(10);
			(nstcall = 0, F1074_10443(Current, arg1, loc1));
			RTHOOK(11);
			loc1++;
		}
	} else {
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(14);
			(nstcall = 0, F1074_10450(Current, arg1, loc2, loc1));
			RTHOOK(15);
			loc1 += loc2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("same_count", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F1074_10361(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTHOOK(18);
		RTCT("all_code", EX_POST);
		ti4_3 = (EIF_INTEGER_32) (arg1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10357(Current, ti4_3)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
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

/* {UC_STRING}.insert_unicode_character */
void F1074_10397 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTEAA("insert_unicode_character", 1073, Current, 0, 2, 15012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F1074_10398(Current, ti4_2, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("one_more_character", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, arg2)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_before_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		RTCO(tr2);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("stable_after_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		RTCO(tr4);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr3));
		if (tb1) {
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

/* {UC_STRING}.insert_code */
void F1074_10398 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTEAA("insert_code", 1073, Current, 3, 2, 15013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(4);
		(nstcall = 0, F1074_10383(Current, arg1));
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
			RTHOOK(6);
			loc1 = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(7);
			loc1 = (nstcall = 0, F1074_10436(Current, arg2));
		}
		RTHOOK(8);
		tr5 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_2 = (nstcall = 1, F291_5565(RTCW(tr5), arg1));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(9);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F1074_10361(Current)))) {
			RTHOOK(11);
			(nstcall = 0, F1074_10444(Current, loc3));
		}
		RTHOOK(12);
		(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(13);
		(nstcall = 0, F1074_10445(Current, loc1, loc2));
		RTHOOK(14);
		(nstcall = 0, F1074_10449(Current, arg1, loc2, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("one_more_character", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10340(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("stable_before_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		RTCO(tr2);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("stable_after_i", EX_POST);
		tr5 = (nstcall = 0, F1074_10344(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		RTCO(tr4);
		tb1 = (nstcall = 1, F1074_10369(RTCW(tr5), tr3));
		if (tb1) {
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

/* {UC_STRING}.insert_character */
void F1074_10399 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("insert_character", 1073, Current, 3, 2, 15014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		(nstcall = 0, F1074_10384(Current, arg1));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(6);
			loc1 = (nstcall = 0, F1074_10436(Current, arg2));
		}
		RTHOOK(7);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		ti4_2 = (nstcall = 1, F291_5562(RTCW(tr1), arg1));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F1074_10361(Current)))) {
			RTHOOK(10);
			(nstcall = 0, F1074_10444(Current, loc3));
		}
		RTHOOK(11);
		(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		(nstcall = 0, F1074_10445(Current, loc1, loc2));
		RTHOOK(13);
		(nstcall = 0, F1074_10450(Current, arg1, loc2, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("one_more_character", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10342(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTHOOK(17);
		RTHOOK(18);
		RTCT("code_inserted", EX_POST);
		tu4_1 = (EIF_NATURAL_32) arg1;
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, arg2)) == tu4_1)) {
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

/* {UC_STRING}.insert */
void F1074_10400 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("insert", 1073, Current, 0, 2, 15015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F1074_10401(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UC_STRING}.insert_string */
void F1074_10401 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("insert_string", 1073, Current, 5, 2, 15016);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(3);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_2);
		RTCK;
		RTHOOK(4);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(8);
			(nstcall = 0, F1074_10385(Current, arg1));
		} else {
			RTHOOK(9);
			if ((EIF_BOOLEAN)(arg1 == Current)) {
				RTHOOK(10);
				loc5 = (nstcall = 0, F1074_10413(Current));
			} else {
				RTHOOK(11);
				loc5 = (EIF_REFERENCE) arg1;
			}
			RTHOOK(12);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				RTHOOK(13);
				loc2 = (EIF_INTEGER_32) arg2;
			} else {
				RTHOOK(14);
				loc2 = (nstcall = 0, F1074_10436(Current, arg2));
			}
			RTHOOK(15);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5561(RTCW(tr1), loc5, ((EIF_INTEGER_32) 1L), loc1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc3);
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc4 > (nstcall = 0, F1074_10361(Current)))) {
				RTHOOK(18);
				(nstcall = 0, F1074_10444(Current, loc4));
			}
			RTHOOK(19);
			(nstcall = 0, F1074_10445(Current, loc2, loc3));
			RTHOOK(20);
			(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + loc1)));
			RTHOOK(21);
			(nstcall = 0, F1074_10451(Current, loc5, ((EIF_INTEGER_32) 1L), loc1, loc3, loc2));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {UC_STRING}.replace_substring */
void F1074_10402 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("replace_substring", 1073, Current, 0, 3, 15017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningfull_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	(nstcall = 0, F1074_10403(Current, arg1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - arg3) + arg2) - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {UC_STRING}.replace_substring_by_string */
void F1074_10403 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc8);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("replace_substring_by_string", 1073, Current, 8, 3, 15018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(nstcall = 0, F1074_10410(Current, arg2, arg3));
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(6);
			(nstcall = 0, F1074_10381(Current, arg1));
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == Current)) {
				RTHOOK(8);
				loc8 = (nstcall = 0, F1074_10413(Current));
			} else {
				RTHOOK(9);
				loc8 = (EIF_REFERENCE) arg1;
			}
			RTHOOK(10);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				RTHOOK(12);
				loc2 = (EIF_INTEGER_32) arg2;
				RTHOOK(13);
				loc5 = (EIF_INTEGER_32) loc4;
			} else {
				RTHOOK(14);
				loc2 = (nstcall = 0, F1074_10436(Current, arg2));
				RTHOOK(15);
				if ((EIF_BOOLEAN) (arg3 < arg2)) {
					RTHOOK(16);
					loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					RTHOOK(17);
					if ((EIF_BOOLEAN)(arg3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
						RTHOOK(18);
						loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 - loc2) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(19);
						loc5 = (nstcall = 0, F1074_10435(Current, loc2, loc4));
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc2);
					}
				}
			}
			RTHOOK(20);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5561(RTCW(tr1), loc8, ((EIF_INTEGER_32) 1L), loc1));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc6 == loc5)) {
			} else {
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc6 < loc5)) {
					RTHOOK(23);
					(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc2 + loc5), (EIF_INTEGER_32) (loc5 - loc6)));
				} else {
					RTHOOK(24);
					loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc5);
					RTHOOK(25);
					loc7 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + loc3);
					RTHOOK(26);
					if ((EIF_BOOLEAN) (loc7 > (nstcall = 0, F1074_10361(Current)))) {
						RTHOOK(27);
						(nstcall = 0, F1074_10444(Current, loc7));
					}
					RTHOOK(28);
					(nstcall = 0, F1074_10445(Current, (EIF_INTEGER_32) (loc2 + loc5), loc3));
				}
			}
			RTHOOK(29);
			(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + loc1) - loc4)));
			RTHOOK(30);
			(nstcall = 0, F1074_10451(Current, loc8, ((EIF_INTEGER_32) 1L), loc1, loc6, loc2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
}

/* {UC_STRING}.replace_substring_all */
void F1074_10404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr1);
	RTLIU(8);
	
	RTEAA("replace_substring_all", 1073, Current, 10, 2, 15019);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("original_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("original_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) !(nstcall = 0, F1074_10367(Current))) {
		RTHOOK(5);
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		RTHOOK(7);
		loc9 = arg1;
		loc9 = RTRV(eif_new_type(1073, 0x01),loc9);
		if (EIF_TEST(loc9)) {
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(loc9+ _LNGOFF_1_1_0_3_);
			loc2 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			loc2 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(10);
		loc10 = arg2;
		loc10 = RTRV(eif_new_type(1073, 0x01),loc10);
		if (EIF_TEST(loc10)) {
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(loc10+ _LNGOFF_1_1_0_3_);
			loc3 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O7308[Dtype(arg2)-1025]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(13);
		loc4 = *(EIF_REFERENCE *)(Current);
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc5 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(15);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc2) - ((EIF_INTEGER_32) 1L)) > loc1)) break;
			RTHOOK(16);
			tb1 = (nstcall = 1, F848_7207(RTCW(loc4), loc5, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)), loc2));
			if (tb1) {
				RTHOOK(17);
				if ((EIF_BOOLEAN)(loc3 == loc2)) {
				} else {
					RTHOOK(18);
					if ((EIF_BOOLEAN) (loc3 < loc2)) {
						RTHOOK(19);
						(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc6 + loc2), (EIF_INTEGER_32) (loc2 - loc3)));
					} else {
						RTHOOK(20);
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - loc2);
						RTHOOK(21);
						loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc8);
						RTHOOK(22);
						if ((EIF_BOOLEAN) (loc7 > (nstcall = 0, F1074_10361(Current)))) {
							RTHOOK(23);
							(nstcall = 0, F1074_10444(Current, loc7));
							RTHOOK(24);
							loc4 = *(EIF_REFERENCE *)(Current);
						}
						RTHOOK(25);
						(nstcall = 0, F1074_10445(Current, (EIF_INTEGER_32) (loc6 + loc2), loc8));
					}
				}
				RTHOOK(26);
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				RTHOOK(27);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
				(nstcall = 1, F848_7216(RTCW(loc4), tr1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)), loc3));
				RTHOOK(28);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
				ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O7308[Dtype(arg2)-1025]);
				(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3)));
				RTHOOK(29);
				loc6 += loc3;
			} else {
				RTHOOK(30);
				ti4_1 = (nstcall = 0, F1074_10434(Current, loc6));
				loc6 = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
}

/* {UC_STRING}.keep_head */
void F1074_10405 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("keep_head", 1073, Current, 0, 1, 15020);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		(nstcall = 0, F1074_10448(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				RTHOOK(7);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) arg1;
			} else {
				RTHOOK(8);
				ti4_2 = (nstcall = 0, F1074_10436(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			(nstcall = 0, F1074_10448(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		ti4_2 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {UC_STRING}.keep_tail */
void F1074_10406 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("keep_tail", 1073, Current, 1, 1, 15021);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		(nstcall = 0, F1074_10448(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				RTHOOK(7);
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - arg1);
			} else {
				RTHOOK(8);
				loc1 = (nstcall = 0, F1074_10436(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1) + ((EIF_INTEGER_32) 1L))));
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc1));
			RTHOOK(10);
			(nstcall = 0, F1074_10448(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		ti4_2 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {UC_STRING}.remove_head */
void F1074_10407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_head", 1073, Current, 0, 1, 15022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		(nstcall = 0, F1074_10411(Current));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F1074_10406(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {UC_STRING}.remove_tail */
void F1074_10408 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_tail", 1073, Current, 0, 1, 15023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		(nstcall = 0, F1074_10411(Current));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F1074_10405(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {UC_STRING}.remove */
void F1074_10409 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove", 1073, Current, 2, 1, 15024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F546_5895(Current)), label_2);
		RTCK;
		RTHOOK(3);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) arg1;
		RTHOOK(6);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(7);
		loc1 = (nstcall = 0, F1074_10436(Current, arg1));
		RTHOOK(8);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		tc1 = (nstcall = 0, F1074_10442(Current, loc1));
		ti4_2 = (nstcall = 1, F291_5559(RTCW(tr1), tc1));
		loc2 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(9);
	(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc1 + loc2), loc2));
	RTHOOK(10);
	(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {UC_STRING}.remove_substring */
void F1074_10410 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_substring", 1073, Current, 4, 2, 15025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(5);
		(nstcall = 0, F1074_10409(Current, arg1));
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (arg1 < arg2)) {
			RTHOOK(7);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(8);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				RTHOOK(9);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
				RTHOOK(10);
				loc2 = (EIF_INTEGER_32) loc4;
			} else {
				RTHOOK(11);
				loc3 = (nstcall = 0, F1074_10436(Current, arg1));
				RTHOOK(12);
				if ((EIF_BOOLEAN)(arg2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
					RTHOOK(13);
					loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(14);
					loc1 = (nstcall = 0, F1074_10435(Current, loc3, loc4));
				}
				RTHOOK(15);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc3);
			}
			RTHOOK(16);
			(nstcall = 0, F1074_10446(Current, loc1, loc2));
			RTHOOK(17);
			(nstcall = 0, F1074_10448(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc4)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {UC_STRING}.wipe_out */
void F1074_10411 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 1073, Current, 0, 0, 15026);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F1074_10448(Current, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {UC_STRING}.copy */
void F1074_10412 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("copy", 1073, Current, 1, 1, 15027);
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
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
		(nstcall = 1, F1074_10448(RTCW(arg1), ti4_1));
		RTHOOK(6);
		(nstcall = 0, F1026_8896(Current, arg1));
		RTHOOK(7);
		(nstcall = 0, F1074_10448(Current, loc1));
		RTHOOK(8);
		(nstcall = 1, F1074_10448(RTCW(arg1), loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {UC_STRING}.cloned_string */
EIF_REFERENCE F1074_10413 (EIF_REFERENCE Current)
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
	
	RTEAA("cloned_string", 1073, Current, 0, 0, 15028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("twin_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_equal", EX_POST);
		tb1 = (nstcall = 1, F1074_10369(RTCW(Result), Current));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.out */
EIF_REFERENCE F1074_10414 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("out", 1073, Current, 6, 0, 15029);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), loc2));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) '';
		loc5 = (EIF_CHARACTER_8) tc1;
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			loc4 = (nstcall = 0, F1074_10442(Current, loc1));
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc4 <= loc5)) {
				RTHOOK(9);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, loc4));
			} else {
				RTHOOK(10);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '%'));
				RTHOOK(11);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '/'));
				RTHOOK(12);
				ti4_1 = (EIF_INTEGER_32) (loc4);
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7334[Dtype(RTCW(Result))-1027])(Result, tr1));
				RTHOOK(13);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '/'));
			}
			RTHOOK(14);
			loc1++;
		}
	} else {
		RTHOOK(15);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		RTHOOK(16);
		ti4_1 = ((EIF_INTEGER_32) 127L);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(17);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(19);
			loc3 = (nstcall = 0, F1074_10431(Current, loc1));
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 <= loc6)) {
				RTHOOK(21);
				tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
				tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc3));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			} else {
				RTHOOK(22);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '%'));
				RTHOOK(23);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '/'));
				RTHOOK(24);
				tr1 = eif_out__i4_s1(loc3);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7334[Dtype(RTCW(Result))-1027])(Result, tr1));
				RTHOOK(25);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '/'));
			}
			RTHOOK(26);
			ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("same_items", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("",0,0);
		if ((nstcall = 0, F1_7(Current, tr1))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7191[Dtype(RTCW(Result))-1026])(Result, Current));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.debug_output */
EIF_REFERENCE F1074_10415 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("debug_output", 1073, Current, 0, 0, 15030);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1074_10414(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {UC_STRING}.as_lower */
EIF_REFERENCE F1074_10416 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("as_lower", 1073, Current, 0, 0, 15031);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1074_10413(Current));
	RTHOOK(2);
	(nstcall = 1, F1074_10418(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_lower_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F1028_8937(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F1028_8937(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (nstcall = 1, F972_8457(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F1074_10344(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F1074_10416(RTCW(tr2)));
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("unicode_anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tr1 = (nstcall = 1, F1074_10339(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tr2 = (nstcall = 0, F1074_10339(Current, ((EIF_INTEGER_32) 1L)));
			tr3 = (nstcall = 1, F910_7347(RTCW(tr2)));
			tb2 = (nstcall = 1, F211_3882(RTCW(tr1), tr3));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("unicode_recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F1074_10344(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F1074_10416(RTCW(tr2)));
			tb2 = (nstcall = 1, F1074_10369(RTCW(tr1), tr3));
			tb1 = tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.as_upper */
EIF_REFERENCE F1074_10417 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("as_upper", 1073, Current, 0, 0, 15032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1074_10413(Current));
	RTHOOK(2);
	(nstcall = 1, F1074_10419(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_upper_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F1028_8937(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F1028_8937(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (nstcall = 1, F972_8455(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F1074_10344(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F1074_10417(RTCW(tr2)));
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("unicode_anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tr1 = (nstcall = 1, F1074_10339(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tr2 = (nstcall = 0, F1074_10339(Current, ((EIF_INTEGER_32) 1L)));
			tr3 = (nstcall = 1, F910_7349(RTCW(tr2)));
			tb2 = (nstcall = 1, F211_3882(RTCW(tr1), tr3));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("unicode_recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F1074_10344(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F1074_10417(RTCW(tr2)));
			tb2 = (nstcall = 1, F1074_10369(RTCW(tr1), tr3));
			tb1 = tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.to_lower */
void F1074_10418 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_lower", 1073, Current, 7, 0, 15033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		loc6 = (nstcall = 0, F1074_10431(Current, loc1));
		RTHOOK(5);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		ti4_1 = (nstcall = 1, F1050_9612(RTCW(tr1), loc6));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc7 != loc6)) {
			RTHOOK(7);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), loc6));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), loc7));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc4 == loc3)) {
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc4 < loc3)) {
					RTHOOK(11);
					(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (loc3 - loc4)));
				} else {
					RTHOOK(12);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
					RTHOOK(13);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc2);
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc5 > (nstcall = 0, F1074_10361(Current)))) {
						RTHOOK(15);
						(nstcall = 0, F1074_10444(Current, loc5));
					}
					RTHOOK(16);
					(nstcall = 0, F1074_10445(Current, (EIF_INTEGER_32) (loc1 + loc3), loc2));
				}
			}
			RTHOOK(17);
			(nstcall = 0, F1074_10449(Current, loc7, loc4, loc1));
		}
		RTHOOK(18);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {UC_STRING}.to_upper */
void F1074_10419 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_upper", 1073, Current, 7, 0, 15034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		loc6 = (nstcall = 0, F1074_10431(Current, loc1));
		RTHOOK(5);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		ti4_1 = (nstcall = 1, F1050_9613(RTCW(tr1), loc6));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc7 != loc6)) {
			RTHOOK(7);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), loc6));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), loc7));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc4 == loc3)) {
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc4 < loc3)) {
					RTHOOK(11);
					(nstcall = 0, F1074_10446(Current, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (loc3 - loc4)));
				} else {
					RTHOOK(12);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
					RTHOOK(13);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc2);
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc5 > (nstcall = 0, F1074_10361(Current)))) {
						RTHOOK(15);
						(nstcall = 0, F1074_10444(Current, loc5));
					}
					RTHOOK(16);
					(nstcall = 0, F1074_10445(Current, (EIF_INTEGER_32) (loc1 + loc3), loc2));
				}
			}
			RTHOOK(17);
			(nstcall = 0, F1074_10449(Current, loc7, loc4, loc1));
		}
		RTHOOK(18);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {UC_STRING}.to_utf8 */
EIF_REFERENCE F1074_10420 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_utf8", 1073, Current, 2, 0, 15035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), loc2));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tc1 = (nstcall = 0, F1074_10442(Current, loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("valid_utf8", EX_POST);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		tb1 = (nstcall = 1, F291_5538(RTCW(tr1), Result));
		if (tb1) {
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

/* {UC_STRING}.to_utf16_be */
EIF_REFERENCE F1074_10421 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_utf16_be", 1073, Current, 6, 0, 15036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), loc2));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F1074_10431(Current, loc1));
		RTHOOK(6);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1068_10064(RTCW(tr1), loc3));
		if (tb1) {
			RTHOOK(7);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
			RTHOOK(8);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
			RTHOOK(9);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(10);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		} else {
			RTHOOK(11);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6655(RTCW(tr1), loc3));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(14);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(15);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(16);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6656(RTCW(tr1), loc3));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(19);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(20);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		}
		RTHOOK(21);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("to_utf16_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("valid_utf16", EX_POST);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tb1 = (nstcall = 1, F808_6636(RTCW(tr1), Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.to_utf16_le */
EIF_REFERENCE F1074_10422 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("to_utf16_le", 1073, Current, 6, 0, 15037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), loc2));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F1074_10431(Current, loc1));
		RTHOOK(6);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1068_10064(RTCW(tr1), loc3));
		if (tb1) {
			RTHOOK(7);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
			RTHOOK(8);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
			RTHOOK(9);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(10);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		} else {
			RTHOOK(11);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6655(RTCW(tr1), loc3));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(14);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(15);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(16);
			tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
			ti4_1 = (nstcall = 1, F808_6656(RTCW(tr1), loc3));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(19);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			RTHOOK(20);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		}
		RTHOOK(21);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("to_utf16_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("valid_utf16", EX_POST);
		tr1 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tr2 = RTOUCR(405,(nstcall = 0, F89_2392), (Current));
		tr3 = RTOUCR(406,(nstcall = 1, F808_6640), (RTCW(tr2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr3))-1026])(tr3, Result));
		tb1 = (nstcall = 1, F808_6636(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.to_utf32_be */
EIF_REFERENCE F1074_10423 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_utf32_be", 1073, Current, 7, 0, 15038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc6)) break;
		RTHOOK(5);
		loc7 = (nstcall = 0, F1074_10431(Current, loc1));
		RTHOOK(6);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(7);
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(8);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(9);
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(10);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(12);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(13);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc3));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(14);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(15);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(16);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("to_utf32_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("valid_utf32", EX_POST);
		tr1 = RTOUCR(407,(nstcall = 0, F88_2391), (Current));
		tb1 = (nstcall = 1, F807_6619(RTCW(tr1), Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.to_utf32_le */
EIF_REFERENCE F1074_10424 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("to_utf32_le", 1073, Current, 7, 0, 15039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc6)) break;
		RTHOOK(5);
		loc7 = (nstcall = 0, F1074_10431(Current, loc1));
		RTHOOK(6);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(7);
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(8);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(9);
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(10);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(12);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc5));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(13);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc4));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(14);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc3));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(15);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(16);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("to_utf32_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("valid_utf32", EX_POST);
		tr1 = RTOUCR(407,(nstcall = 0, F88_2391), (Current));
		tr2 = RTOUCR(407,(nstcall = 0, F88_2391), (Current));
		tr3 = RTOUCR(408,(nstcall = 1, F807_6621), (RTCW(tr2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr3))-1026])(tr3, Result));
		tb1 = (nstcall = 1, F807_6619(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.to_string_32 */
EIF_REFERENCE F1074_10425 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("to_string_32", 1073, Current, 2, 0, 15040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1030_9022(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F1074_10431(Current, loc1));
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		(nstcall = 1, F1025_8826(RTCW(Result), tu4_1));
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F1074_10434(Current, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_string_32_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("identity", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1023_8726(RTCW(tr1)));
		if ((nstcall = 0, F1_6(Current, tr1))) {
			tb2 = (EIF_BOOLEAN)(Result == Current);
		}
		if (!tb2) {
			tb2 = '\0';
			tr1 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F1023_8726(RTCW(tr1)));
			if ((EIF_BOOLEAN) !(nstcall = 0, F1_6(Current, tr1))) {
				tb2 = (EIF_BOOLEAN)(Result != Current);
			}
			tb1 = tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.as_string */
EIF_REFERENCE F1074_10426 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("as_string", 1073, Current, 0, 0, 15041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1074_10420(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("as_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.name */

EIF_REFERENCE F1074_10427 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (441,RTMS_EX_H("UC_STRING",9,701376839));
}

/* {UC_STRING}.eol */

EIF_REFERENCE F1074_10428 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (442,RTMS_EX_H("\012",1,10));
}

/* {UC_STRING}.is_open_write */
EIF_BOOLEAN F1074_10429 (EIF_REFERENCE Current)
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
	
	RTEAA("is_open_write", 1073, Current, 0, 0, 15044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.flush */
void F1074_10430 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("flush", 1073, Current, 0, 0, 15045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F1074_10429(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {UC_STRING}.item_code_at_byte_index */
EIF_INTEGER_32 F1074_10431 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item_code_at_byte_index", 1073, Current, 0, 1, 15046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F1074_10437(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tu4_1 = (nstcall = 0, F1074_10432(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("valid_item_code", EX_POST);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), Result));
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.code_at_byte_index */
EIF_NATURAL_32 F1074_10432 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("code_at_byte_index", 1073, Current, 3, 1, 15047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F1074_10437(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	loc3 = (nstcall = 0, F1074_10442(Current, loc1));
	RTHOOK(6);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	tu4_1 = (nstcall = 1, F291_5552(RTCW(tr1), loc3));
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), loc3));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L));
	RTHOOK(8);
	loc1++;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(10);
		loc3 = (nstcall = 0, F1074_10442(Current, loc1));
		RTHOOK(11);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		tu4_1 = (nstcall = 1, F291_5554(RTCW(tr1), loc3));
		Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (Result * (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + tu4_1);
		RTHOOK(12);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("valid_code", EX_POST);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9611(RTCW(tr1), Result));
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.character_item_at_byte_index */
EIF_CHARACTER_8 F1074_10433 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("character_item_at_byte_index", 1073, Current, 2, 1, 15048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F1074_10437(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F1074_10442(Current, arg1));
	RTHOOK(5);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), loc1));
	switch (ti4_1) {
		case 1L:
			RTHOOK(6);
			Result = (EIF_CHARACTER_8) loc1;
			break;
		case 2L:
			RTHOOK(7);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5551(RTCW(tr1), loc1));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			loc1 = (nstcall = 0, F1074_10442(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
			RTHOOK(9);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5553(RTCW(tr1), loc1));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 64L)) + ti4_1);
			RTHOOK(10);
			tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
			ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
			if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
				RTHOOK(11);
				tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
				tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc2));
				Result = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(12);
				Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			}
			break;
		default:
			RTHOOK(13);
			loc2 = (nstcall = 0, F1074_10431(Current, arg1));
			RTHOOK(14);
			tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
			ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
			if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
				RTHOOK(15);
				tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
				tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc2));
				Result = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(16);
				Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			}
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("code_small_enough", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10431(Current, arg1)) <= ti4_1)) {
			ti4_1 = (EIF_INTEGER_32) (Result);
			tb1 = (EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F1074_10431(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("overflow", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
		if ((EIF_BOOLEAN) ((nstcall = 0, F1074_10431(Current, arg1)) > ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result == (EIF_CHARACTER_8) '\000');
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.next_byte_index */
EIF_INTEGER_32 F1074_10434 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("next_byte_index", 1073, Current, 0, 1, 15049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F1074_10437(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	tc1 = (nstcall = 0, F1074_10442(Current, arg1));
	ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), tc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("next_byte_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result > arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("next_byte_index_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) + ((EIF_INTEGER_32) 1L)))) {
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

/* {UC_STRING}.shifted_byte_index */
EIF_INTEGER_32 F1074_10435 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("shifted_byte_index", 1073, Current, 1, 2, 15050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F1074_10437(Current, arg1)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("n_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		RTHOOK(8);
		tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
		tc1 = (nstcall = 0, F1074_10442(Current, Result));
		ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), tc1));
		Result += ti4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN) (Result > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
			RTHOOK(10);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(11);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("next_byte_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("next_byte_index_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) + ((EIF_INTEGER_32) 1L)))) {
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
	return Result;
}

/* {UC_STRING}.byte_index */
EIF_INTEGER_32 F1074_10436 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("byte_index", 1073, Current, 2, 1, 15051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) arg1;
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_))) {
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(6);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(7);
			loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
			RTHOOK(8);
			Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_);
		}
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc1 == arg1)) break;
			RTHOOK(10);
			loc2 = (nstcall = 0, F1074_10442(Current, Result));
			RTHOOK(11);
			tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
			ti4_1 = (nstcall = 1, F291_5559(RTCW(tr1), loc2));
			Result += ti4_1;
			RTHOOK(12);
			loc1++;
		}
	}
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) arg1;
	RTHOOK(14);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) = (EIF_INTEGER_32) Result;
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("byte_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("byte_index_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("is_encoded_first_byte", EX_POST);
		if ((nstcall = 0, F1074_10437(Current, Result))) {
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

/* {UC_STRING}.is_encoded_first_byte */
EIF_BOOLEAN F1074_10437 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_encoded_first_byte", 1073, Current, 0, 1, 15052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
	tc1 = (nstcall = 0, F1074_10442(Current, arg1));
	tb1 = (nstcall = 1, F291_5542(RTCW(tr1), tc1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.last_byte_index_input */
EIF_INTEGER_32 F1074_10438 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
}


/* {UC_STRING}.last_byte_index_result */
EIF_INTEGER_32 F1074_10439 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_);
}


/* {UC_STRING}.reset_byte_index_cache */
void F1074_10440 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset_byte_index_cache", 1073, Current, 0, 0, 15055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {UC_STRING}.current_string */
EIF_REFERENCE F1074_10441 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("current_string", 1073, Current, 0, 0, 15056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_REFERENCE) Current;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.byte_item */
EIF_CHARACTER_8 F1074_10442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("byte_item", 1073, Current, 1, 1, 15057);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
	RTHOOK(5);
	Result = (nstcall = 0, F1028_8935(Current, arg1));
	RTHOOK(6);
	(nstcall = 0, F1074_10448(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_STRING}.put_byte */
void F1074_10443 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_byte", 1073, Current, 1, 2, 15058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
	RTHOOK(5);
	(nstcall = 0, F1028_8956(Current, arg1, arg2));
	RTHOOK(6);
	(nstcall = 0, F1074_10448(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {UC_STRING}.resize_byte_storage */
void F1074_10444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("resize_byte_storage", 1073, Current, 1, 1, 15059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (nstcall = 0, F1074_10361(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, F1074_10361(Current)))) {
		RTHOOK(3);
		(nstcall = 0, F1028_9001(Current, arg1));
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(5);
		(nstcall = 0, F1074_10448(Current, arg1));
		RTHOOK(6);
		(nstcall = 0, F1028_9018(Current, arg1));
		RTHOOK(7);
		(nstcall = 0, F1074_10448(Current, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("byte_capacity_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10361(Current)) == arg1)) {
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

/* {UC_STRING}.move_bytes_right */
void F1074_10445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("move_bytes_right", 1073, Current, 3, 2, 15060);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_offset", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("offset_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) ((nstcall = 0, F1074_10361(Current)) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		in_assertion = 0;
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) > arg1)) {
		RTHOOK(5);
		(nstcall = 0, F1074_10440(Current));
	}
	RTHOOK(6);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) arg1;
	RTHOOK(8);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)) += arg2;
	RTHOOK(9);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(10);
	(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc1 < loc2)) break;
		RTHOOK(12);
		tc1 = (nstcall = 0, F1028_8935(Current, loc1));
		(nstcall = 0, F1028_8956(Current, tc1, (EIF_INTEGER_32) (loc1 + arg2)));
		RTHOOK(13);
		loc1--;
	}
	RTHOOK(14);
	(nstcall = 0, F1074_10448(Current, loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("byte_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) == (EIF_INTEGER_32) (ti4_1 + arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {UC_STRING}.move_bytes_left */
void F1074_10446 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("move_bytes_left", 1073, Current, 3, 2, 15061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_offset", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("constraint", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < arg1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		in_assertion = 0;
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) > (EIF_INTEGER_32) (arg1 - arg2))) {
		RTHOOK(5);
		(nstcall = 0, F1074_10440(Current));
	}
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(8);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(9);
	(nstcall = 0, F1074_10448(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(11);
		tc1 = (nstcall = 0, F1028_8935(Current, loc1));
		(nstcall = 0, F1028_8956(Current, tc1, (EIF_INTEGER_32) (loc1 - arg2)));
		RTHOOK(12);
		loc1++;
	}
	RTHOOK(13);
	(nstcall = 0, F1074_10448(Current, loc3));
	RTHOOK(14);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)) -= arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("byte_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) == (EIF_INTEGER_32) (ti4_1 - arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {UC_STRING}.set_byte_count */
void F1074_10447 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_byte_count", 1073, Current, 0, 1, 15062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nb_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F1074_10361(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) > arg1)) {
		RTHOOK(4);
		(nstcall = 0, F1074_10440(Current));
	}
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("byte_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) == arg1)) {
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
}

/* {UC_STRING}.set_count */
void F1074_10448 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_count", 1073, Current, 0, 1, 15063);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("nb_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) > arg1)) {
		RTHOOK(3);
		(nstcall = 0, F1074_10440(Current));
	}
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == arg1)) {
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

/* {UC_STRING}.put_code_at_byte_index */
void F1074_10449 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_code_at_byte_index", 1073, Current, 3, 3, 15064);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("enough_space", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_code", EX_PRE);
		tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
		tb1 = (nstcall = 1, F1050_9610(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == arg3)) break;
		RTHOOK(7);
		tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
		tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L))));
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		(nstcall = 0, F1074_10443(Current, loc2, loc1));
		RTHOOK(9);
		loc3 /= ((EIF_INTEGER_32) 64L);
		RTHOOK(10);
		loc1--;
	}
	RTHOOK(11);
	switch (arg2) {
		case 1L:
			RTHOOK(12);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), loc3));
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 2L:
			RTHOOK(13);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 192L))));
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 3L:
			RTHOOK(14);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 224L))));
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 4L:
			RTHOOK(15);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 240L))));
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 5L:
			RTHOOK(16);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 248L))));
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 6L:
			RTHOOK(17);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 252L))));
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTHOOK(18);
	(nstcall = 0, F1074_10443(Current, loc2, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {UC_STRING}.put_character_at_byte_index */
void F1074_10450 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_character_at_byte_index", 1073, Current, 2, 3, 15065);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("enough_space", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	switch (arg2) {
		case 1L:
			RTHOOK(4);
			(nstcall = 0, F1074_10443(Current, arg1, arg3));
			break;
		case 2L:
			RTHOOK(5);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 192L))));
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(7);
			(nstcall = 0, F1074_10443(Current, loc1, arg3));
			RTHOOK(8);
			tr1 = RTOUCR(310,(nstcall = 0, F806_6618), (Current));
			tc1 = (nstcall = 1, F292_5600(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L))));
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			(nstcall = 0, F1074_10443(Current, loc1, (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))));
			break;
		default:
			RTHOOK(10);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			(nstcall = 0, F1074_10449(Current, ti4_1, arg2, arg3));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {UC_STRING}.put_substring_at_byte_index */
void F1074_10451 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc8);
	RTLR(6,loc9);
	RTLR(7,loc10);
	RTLIU(8);
	
	RTEAA("put_substring_at_byte_index", 1073, Current, 10, 5, 15066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_current", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != Current), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("enough_space", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + arg4) - ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(8);
	if ((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(9);
		tb1 = '\0';
		loc7 = arg1;
		loc7 = RTRV(eif_new_type(1027, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
			tr2 = RTOUCR(439,(nstcall = 0, F1074_10453), (Current));
			tb2 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(10);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc2 == arg4)) {
				RTHOOK(12);
				loc3 = (EIF_INTEGER_32) arg5;
				RTHOOK(13);
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc1 > arg3)) break;
					RTHOOK(15);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(loc7)-723])(loc7, loc1));
					(nstcall = 0, F1074_10443(Current, tc1, loc3));
					RTHOOK(16);
					loc3++;
					RTHOOK(17);
					loc1++;
				}
			} else {
				RTHOOK(18);
				loc3 = (EIF_INTEGER_32) arg5;
				RTHOOK(19);
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					RTHOOK(20);
					if ((EIF_BOOLEAN) (loc1 > arg3)) break;
					RTHOOK(21);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(loc7)-723])(loc7, loc1));
					loc5 = (EIF_CHARACTER_8) tc1;
					RTHOOK(22);
					tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
					ti4_1 = (nstcall = 1, F291_5562(RTCW(tr1), loc5));
					loc4 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(23);
					(nstcall = 0, F1074_10450(Current, loc5, loc4, loc3));
					RTHOOK(24);
					loc3 += loc4;
					RTHOOK(25);
					loc1++;
				}
			}
		} else {
			RTHOOK(26);
			tb1 = '\0';
			tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
			tb2 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, Current));
			if (tb2) {
				loc8 = arg1;
				loc8 = RTRV(eif_new_type(1073, 0x01),loc8);
				tb1 = EIF_TEST(loc8);
			}
			if (tb1) {
				RTHOOK(27);
				loc3 = (EIF_INTEGER_32) arg5;
				RTHOOK(28);
				ti4_1 = (nstcall = 1, F1074_10436(loc8, arg2));
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(29);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(30);
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					RTHOOK(31);
					tc1 = (nstcall = 1, F1074_10442(loc8, loc1));
					(nstcall = 0, F1074_10443(Current, tc1, loc3));
					RTHOOK(32);
					loc3++;
					RTHOOK(33);
					loc1++;
				}
			} else {
				RTHOOK(34);
				loc9 = arg1;
				loc9 = RTRV(eif_new_type(1074, 0x01),loc9);
				if (EIF_TEST(loc9)) {
					RTHOOK(35);
					loc3 = (EIF_INTEGER_32) arg5;
					RTHOOK(36);
					ti4_1 = (nstcall = 1, F1074_10436(loc9, arg2));
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(37);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(38);
						if ((EIF_BOOLEAN) (loc1 > loc2)) break;
						RTHOOK(39);
						tc1 = (nstcall = 1, F1074_10442(loc9, loc1));
						(nstcall = 0, F1074_10443(Current, tc1, loc3));
						RTHOOK(40);
						loc3++;
						RTHOOK(41);
						loc1++;
					}
				} else {
					RTHOOK(42);
					loc10 = arg1;
					loc10 = RTRV(eif_new_type(1073, 0x01),loc10);
					if (EIF_TEST(loc10)) {
						RTHOOK(43);
						loc3 = (EIF_INTEGER_32) arg5;
						RTHOOK(44);
						ti4_1 = (nstcall = 1, F1074_10436(loc10, arg2));
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(45);
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
						for (;;) {
							RTHOOK(46);
							if ((EIF_BOOLEAN) (loc1 > loc2)) break;
							RTHOOK(47);
							ti4_1 = (nstcall = 1, F1074_10431(loc10, loc1));
							loc6 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(48);
							tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
							ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), loc6));
							loc4 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(49);
							(nstcall = 0, F1074_10449(Current, loc6, loc4, loc3));
							RTHOOK(50);
							loc3 += loc4;
							RTHOOK(51);
							ti4_1 = (nstcall = 1, F1074_10434(loc10, loc1));
							loc1 = (EIF_INTEGER_32) ti4_1;
						}
					} else {
						RTHOOK(52);
						loc3 = (EIF_INTEGER_32) arg5;
						RTHOOK(53);
						loc1 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(54);
							if ((EIF_BOOLEAN) (loc1 > arg3)) break;
							RTHOOK(55);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
							ti4_1 = (EIF_INTEGER_32) tu4_1;
							loc6 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(56);
							tr1 = RTOUCR(437,(nstcall = 0, F53_2090), (Current));
							ti4_1 = (nstcall = 1, F291_5565(RTCW(tr1), loc6));
							loc4 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(57);
							(nstcall = 0, F1074_10449(Current, loc6, loc4, loc3));
							RTHOOK(58);
							loc3 += loc4;
							RTHOOK(59);
							loc1++;
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTLE;
	RTEE;
}

/* {UC_STRING}.dummy_string */

EIF_REFERENCE F1074_10452 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (438,RTMS_EX_H("",0,0));
}

/* {UC_STRING}.dummy_string_8 */

EIF_REFERENCE F1074_10453 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (439,RTMS_EX_H("",0,0));
}

/* {UC_STRING}.dummy_uc_string */
static EIF_REFERENCE F1074_10454_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(440)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("dummy_uc_string", 1073, Current, 0, 0, 15069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1073, 0x01).id, 1073, _OBJSIZ_1_1_0_6_0_0_0_0_);
	(nstcall = -1, F1074_10328(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dummy_uc_string_not_void", EX_POST);
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

EIF_REFERENCE F1074_10454 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(440,F1074_10454_body,(Current));
}

/* {UC_STRING}.old_wipe_out */
void F1074_10455 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("old_wipe_out", 1073, Current, 0, 0, 15070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F1074_10361(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F1028_8998(Current));
	RTHOOK(3);
	(nstcall = 0, F1074_10411(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10361(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F614_5999(Current))) {
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
}

/* {UC_STRING}.old_clear_all */
void F1074_10456 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("old_clear_all", 1073, Current, 0, 0, 15071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F1074_10361(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F1074_10411(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10361(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {UC_STRING}.old_left_adjust */
void F1074_10457 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("old_left_adjust", 1073, Current, 2, 0, 15072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		switch ((nstcall = 0, F1074_10342(Current, loc1))) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(5);
				loc1++;
				break;
			default:
				RTHOOK(6);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				break;
		}
	}
	RTHOOK(7);
	(nstcall = 0, F1074_10407(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F614_5999(Current))) {
			tw1 = (nstcall = 0, F1028_8937(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb2 = (nstcall = 1, F972_8467(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {UC_STRING}.old_right_adjust */
void F1074_10458 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("old_right_adjust", 1073, Current, 2, 0, 15073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		switch ((nstcall = 0, F1074_10342(Current, loc2))) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(5);
				loc2--;
				break;
			default:
				RTHOOK(6);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				break;
		}
	}
	RTHOOK(7);
	(nstcall = 0, F1074_10405(Current, loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F614_5999(Current))) {
			tw1 = (nstcall = 0, F1028_8937(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr1 = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb2 = (nstcall = 1, F972_8467(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {UC_STRING}.index_of_code */
EIF_INTEGER_32 F1074_10459 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("index_of_code", 1073, Current, 0, 2, 15074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (nstcall = 0, F1074_10352(Current, ti4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("zero_if_absent", EX_POST);
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb1 = (nstcall = 1, F1074_10462(RTCW(tr1), arg1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10462(RTCW(tr1), arg1));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, Result)) == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F1074_10344(Current, arg2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		tb2 = (nstcall = 1, F1074_10462(RTCW(tr1), arg1));
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, arg2, (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
			tb2 = (nstcall = 1, F1074_10462(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {UC_STRING}.put_code */
void F1074_10460 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_code", 1073, Current, 0, 2, 15075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F1026_8894(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F1023_8738(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = (EIF_INTEGER_32) arg1;
	(nstcall = 0, F1074_10377(Current, ti4_2, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {UC_STRING}.append_code */
void F1074_10461 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("append_code", 1073, Current, 0, 1, 15076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F1026_8894(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = (EIF_INTEGER_32) arg1;
	(nstcall = 0, F1074_10383(Current, ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {UC_STRING}.has_code */
EIF_BOOLEAN F1074_10462 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_code", 1073, Current, 0, 1, 15077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (nstcall = 0, F1074_10363(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("false_if_empty", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, ((EIF_INTEGER_32) 1L))) == arg1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F1074_10341(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb2) {
			tr1 = (nstcall = 0, F1074_10344(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb2 = (nstcall = 1, F1074_10462(RTCW(tr1), arg1));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
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

/* {UC_STRING}._invariant */
void F1074_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 351, Current, 0, 0);
	RTIT("non_negative_byte_count", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("byte_count_small_enough", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) <= (nstcall = 0, F1074_10361(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_small_enough", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit352 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
