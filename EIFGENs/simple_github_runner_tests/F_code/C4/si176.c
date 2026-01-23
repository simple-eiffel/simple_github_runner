/*
 * Code for class SIMPLE_JSON_PRETTY_PRINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si176.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_PRETTY_PRINTER}.make */
void F204_3671 (EIF_REFERENCE Current)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 203, Current, 0, 0, 2282);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F203_3561(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(1031, 1).id);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("two_space_indent", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 0, F203_3561(Current));
		tb1 = (nstcall = 1, F1030_9049(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("zero_level", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {SIMPLE_JSON_PRETTY_PRINTER}.make_with_options */
void F204_3672 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_with_options", 203, Current, 0, 1, 2283);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("indent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("indent_valid", EX_PRE);
		tb1 = (nstcall = 1, F613_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	tr1 = RTLNSMART(eif_new_type(1031, 1).id);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("indent_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("zero_level", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {SIMPLE_JSON_PRETTY_PRINTER}.set_indent_string */
void F204_3673 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_indent_string", 203, Current, 0, 1, 2284);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("indent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("indent_valid", EX_PRE);
		tb1 = (nstcall = 1, F613_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("indent_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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

/* {SIMPLE_JSON_PRETTY_PRINTER}.use_tabs */
void F204_3674 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("use_tabs", 203, Current, 0, 0, 2285);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\011",1,9)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("uses_tabs", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F1023_8785(RTMS_EX_H("\011",1,9)));
		tb1 = (nstcall = 1, F1030_9049(RTCW(tr1), tr2));
		if (tb1) {
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
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.use_spaces */
void F204_3675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("use_spaces", 203, Current, 0, 1, 2286);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("reasonable_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 8L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(1031, 1).id);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	(nstcall = -1, F1030_9023(RTCW(tr1), tw1, arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("correct_length", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {SIMPLE_JSON_PRETTY_PRINTER}.output */
EIF_REFERENCE F204_3676 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_JSON_PRETTY_PRINTER}.last_result */
EIF_REFERENCE F204_3677 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("last_result", 203, Current, 0, 0, 2288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.print_json_value */
EIF_REFERENCE F204_3678 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("print_json_value", 203, Current, 0, 1, 2289);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F204_3691(Current));
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7440[Dtype(RTCW(arg1))-1033])(arg1, Current));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.visit_json_array */
void F204_3679 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("visit_json_array", 203, Current, 2, 1, 2290);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1034_9218(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, F612_5999(RTCW(loc1)));
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3565(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3568(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		(nstcall = 1, F1032_9150(RTCW(tr1), tw1));
		RTHOOK(7);
		(nstcall = 0, F204_3688(Current));
		RTHOOK(8);
		(nstcall = 1, F817_6888(RTCW(loc1)));
		RTHOOK(9);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if (~in_assertion) {
			RTHOOK(10);
			RTCT("cursor_valid", EX_LINV);
			tb1 = '\01';
			tb2 = (nstcall = 1, F744_6527(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = (nstcall = 1, F817_6862(RTCW(loc1)));
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(11);
			RTCT("output_attached", EX_LINV);
			tr1 = *(EIF_REFERENCE *)(Current);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(12);
			RTCT("first_flag_valid", EX_LINV);
			tb1 = '\01';
			if (loc2) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
				tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(13);
			tb1 = (nstcall = 1, F744_6527(RTCW(loc1)));
			if (tb1) break;
			RTHOOK(14);
			if ((EIF_BOOLEAN) !loc2) {
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 0, F203_3563(Current));
				(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				(nstcall = 1, F1032_9150(RTCW(tr1), tw1));
			}
			RTHOOK(17);
			(nstcall = 0, F204_3690(Current));
			RTHOOK(18);
			tr1 = (nstcall = 1, F817_6862(RTCW(loc1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7440[Dtype(RTCW(tr1))-1033])(tr1, Current));
			RTHOOK(19);
			(nstcall = 1, F817_6890(RTCW(loc1)));
			RTHOOK(20);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			if (~in_assertion) {
				RTHOOK(10);
				RTCT("cursor_valid", EX_LINV);
				tb1 = '\01';
				tb2 = (nstcall = 1, F744_6527(RTCW(loc1)));
				if ((EIF_BOOLEAN) !tb2) {
					tr1 = (nstcall = 1, F817_6862(RTCW(loc1)));
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(11);
				RTCT("output_attached", EX_LINV);
				tr1 = *(EIF_REFERENCE *)(Current);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(12);
				RTCT("first_flag_valid", EX_LINV);
				tb1 = '\01';
				if (loc2) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
					tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
				}
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
		RTHOOK(21);
		(nstcall = 0, F204_3689(Current));
		RTHOOK(22);
		tr1 = *(EIF_REFERENCE *)(Current);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		(nstcall = 1, F1032_9150(RTCW(tr1), tw1));
		RTHOOK(23);
		(nstcall = 0, F204_3690(Current));
		RTHOOK(24);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3569(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.visit_json_boolean */
void F204_3680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("visit_json_boolean", 203, Current, 0, 1, 2291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_boolean_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	if (tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3571(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3572(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.visit_json_null */
void F204_3681 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("visit_json_null", 203, Current, 0, 1, 2292);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_null_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 0, F203_3573(Current));
	(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.visit_json_number */
void F204_3682 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	
	RTEAA("visit_json_number", 203, Current, 0, 1, 2293);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_number_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7206[Dtype(RTCW(tr2))-1026])(tr2));
	(nstcall = 1, F1032_9137(RTCW(tr1), tr3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.visit_json_object */
void F204_3683 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("visit_json_object", 203, Current, 2, 1, 2294);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1038_9299(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, F612_5999(RTCW(loc1)));
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3564(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3566(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		(nstcall = 1, F1032_9150(RTCW(tr1), tw1));
		RTHOOK(7);
		(nstcall = 0, F204_3688(Current));
		RTHOOK(8);
		(nstcall = 1, F833_6984(RTCW(loc1)));
		RTHOOK(9);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if (~in_assertion) {
			RTHOOK(10);
			RTCT("cursor_valid", EX_LINV);
			tb1 = '\01';
			tb2 = (nstcall = 1, F833_6980(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb2) {
				tb2 = '\0';
				tr1 = (nstcall = 1, F833_6958(RTCW(loc1)));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = (nstcall = 1, F833_6957(RTCW(loc1)));
					tb2 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(11);
			RTCT("output_attached", EX_LINV);
			tr1 = *(EIF_REFERENCE *)(Current);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(12);
			tb1 = (nstcall = 1, F833_6980(RTCW(loc1)));
			if (tb1) break;
			RTHOOK(13);
			if ((EIF_BOOLEAN) !loc2) {
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 0, F203_3563(Current));
				(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(Current);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				(nstcall = 1, F1032_9150(RTCW(tr1), tw1));
			}
			RTHOOK(16);
			(nstcall = 0, F204_3690(Current));
			RTHOOK(17);
			tr1 = (nstcall = 1, F833_6958(RTCW(loc1)));
			(nstcall = 1, F1037_9253(RTCW(tr1), Current));
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 0, F203_3562(Current));
			(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
			RTHOOK(19);
			tr1 = (nstcall = 1, F833_6957(RTCW(loc1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7440[Dtype(RTCW(tr1))-1033])(tr1, Current));
			RTHOOK(20);
			(nstcall = 1, F833_6985(RTCW(loc1)));
			RTHOOK(21);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			if (~in_assertion) {
				RTHOOK(10);
				RTCT("cursor_valid", EX_LINV);
				tb1 = '\01';
				tb2 = (nstcall = 1, F833_6980(RTCW(loc1)));
				if ((EIF_BOOLEAN) !tb2) {
					tb2 = '\0';
					tr1 = (nstcall = 1, F833_6958(RTCW(loc1)));
					if ((EIF_BOOLEAN)(tr1 != NULL)) {
						tr1 = (nstcall = 1, F833_6957(RTCW(loc1)));
						tb2 = (EIF_BOOLEAN)(tr1 != NULL);
					}
					tb1 = tb2;
				}
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(11);
				RTCT("output_attached", EX_LINV);
				tr1 = *(EIF_REFERENCE *)(Current);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
		RTHOOK(22);
		(nstcall = 0, F204_3689(Current));
		RTHOOK(23);
		tr1 = *(EIF_REFERENCE *)(Current);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		(nstcall = 1, F1032_9150(RTCW(tr1), tw1));
		RTHOOK(24);
		(nstcall = 0, F204_3690(Current));
		RTHOOK(25);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 0, F203_3567(Current));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.visit_json_string */
void F204_3684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("visit_json_string", 203, Current, 1, 1, 2295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 0, F203_3570(Current));
	(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = (nstcall = 1, F1037_9249(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 0, F204_3685(Current, loc1));
	(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 0, F203_3570(Current));
	(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.escape_json_string */
EIF_REFERENCE F204_3685 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("escape_json_string", 203, Current, 3, 1, 2296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F1030_9022(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tw1 = (nstcall = 1, F1032_9104(RTCW(arg1), loc1));
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(5);
		switch (loc2) {
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(6);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\\"",2,23586)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			case (EIF_CHARACTER_8) '\\':
				RTHOOK(7);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\\\",2,23644)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(8);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\n",2,23662)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(9);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\r",2,23666)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			case (EIF_CHARACTER_8) '\011':
				RTHOOK(10);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\t",2,23668)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			case (EIF_CHARACTER_8) '\014':
				RTHOOK(11);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\f",2,23654)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			case (EIF_CHARACTER_8) '\010':
				RTHOOK(12);
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\b",2,23650)));
				(nstcall = 1, F1032_9137(RTCW(Result), tr1));
				break;
			default:
				RTHOOK(13);
				ti4_2 = (EIF_INTEGER_32) (loc2);
				if ((EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 32L))) {
					RTHOOK(14);
					tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\\u",2,23669)));
					(nstcall = 1, F1032_9137(RTCW(Result), tr1));
					RTHOOK(15);
					ti4_2 = (EIF_INTEGER_32) (loc2);
					tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_INTEGER_32 *)tr1 = ti4_2;
					tr2 = (nstcall = 1, F948_7777(RTCW(tr1)));
					loc3 = (EIF_REFERENCE) tr2;
					for (;;) {
						RTHOOK(16);
						ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 4L))) break;
						RTHOOK(17);
						tr1 = (nstcall = 0, F203_3582(Current));
						tr2 = (nstcall = 1, F1023_8779(RTCW(tr1)));
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7329[Dtype(RTCW(loc3))-1027])(loc3, tr2));
					}
					RTHOOK(18);
					ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_2_);
					ti4_4 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_2_);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(loc3))-1026])(loc3, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 3L)), ti4_4));
					tr2 = (nstcall = 1, F1023_8785(RTCW(tr1)));
					(nstcall = 1, F1032_9137(RTCW(Result), tr2));
				} else {
					RTHOOK(19);
					(nstcall = 1, F1032_9150(RTCW(Result), loc2));
				}
				break;
		}
		RTHOOK(20);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.indent_string */
EIF_REFERENCE F204_3686 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SIMPLE_JSON_PRETTY_PRINTER}.current_indent_level */
EIF_INTEGER_32 F204_3687 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
}


/* {SIMPLE_JSON_PRETTY_PRINTER}.increase_indent */
void F204_3688 (EIF_REFERENCE Current)
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
	
	RTEAA("increase_indent", 203, Current, 0, 0, 2299);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("incremented", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.decrease_indent */
void F204_3689 (EIF_REFERENCE Current)
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
	
	RTEAA("decrease_indent", 203, Current, 0, 0, 2278);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_at_zero", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("decremented", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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

/* {SIMPLE_JSON_PRETTY_PRINTER}.append_indent */
void F204_3690 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("append_indent", 203, Current, 1, 0, 2279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F1032_9137(RTCW(tr1), tr2));
		RTHOOK(4);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PRETTY_PRINTER}.reset */
void F204_3691 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("reset", 203, Current, 0, 0, 2280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1031, 1).id);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("output_empty", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F613_5999(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("zero_level", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {SIMPLE_JSON_PRETTY_PRINTER}._invariant */
void F204_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 175, Current, 0, 0);
	RTIT("output_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("indent_string_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("indent_string_not_empty", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F613_5999(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_negative_indent", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit176 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
