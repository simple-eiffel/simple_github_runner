/*
 * Code for class UC_UTF32_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc240.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_UTF32_ROUTINES}.valid_utf32 */
EIF_BOOLEAN F807_6619 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_utf32", 806, Current, 3, 1, 7597);
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
		RTCT("a_string_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L));
	RTHOOK(4);
	tb1 = '\0';
	if (Result) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L)));
		tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 2L)));
		tu4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 3L)));
		tu4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 4L)));
		if ((nstcall = 0, F807_6624(Current, tu4_1, tu4_2, tu4_3, tu4_4))) {
			RTHOOK(6);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(10);
			tr1 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
			tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			tu4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
			tu4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
			tu4_1 = (nstcall = 0, F807_6627(Current, tu4_1, tu4_2, tu4_3, tu4_4, loc3));
			tb1 = (nstcall = 1, F1068_10063(RTCW(tr1), tu4_1));
			Result = (EIF_BOOLEAN) tb1;
			RTHOOK(11);
			if ((EIF_BOOLEAN) !Result) {
				RTHOOK(12);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(13);
				loc1 += ((EIF_INTEGER_32) 4L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("empty_is_true", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("utf32_count_multiple_of_four", EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
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
	return Result;
}

/* {UC_UTF32_ROUTINES}.bom_be */
static EIF_REFERENCE F807_6620_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(444)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bom_be", 806, Current, 0, 0, 7598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = RTMS_EX_H("\000\000\376\377",4,65279);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bom_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("four_bytes", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("first_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("second_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 2L)));
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("third_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 3L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 254U))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("fourth_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 4L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 255U))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F807_6620 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(444,F807_6620_body,(Current));
}

/* {UC_UTF32_ROUTINES}.bom_le */
static EIF_REFERENCE F807_6621_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(408)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bom_le", 806, Current, 0, 0, 7599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = RTMS_EX_H("\377\376\000\000",4,2147356416);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bom_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("four_bytes", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("first_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 255U))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("second_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 2L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 254U))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("third_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 3L)));
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("fourth_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(Result))-1026])(Result, ((EIF_INTEGER_32) 4L)));
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F807_6621 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(408,F807_6621_body,(Current));
}

/* {UC_UTF32_ROUTINES}.is_endian_detection_character_most_first */
EIF_BOOLEAN F807_6622 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("is_endian_detection_character_most_first", 806, Current, 0, 4, 7600);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("first_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("second_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("third_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("fourth_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 254L))) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 255L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 254L))) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 255L))))) {
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

/* {UC_UTF32_ROUTINES}.is_endian_detection_character_least_first */
EIF_BOOLEAN F807_6623 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("is_endian_detection_character_least_first", 806, Current, 0, 4, 7601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("first_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("second_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("third_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("fourth_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6625(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 255L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 254L))) && (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 255L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 254L))) && (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 0L))))) {
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

/* {UC_UTF32_ROUTINES}.is_endian_detection_character_least_first_natural_32 */
EIF_BOOLEAN F807_6624 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("is_endian_detection_character_least_first_natural_32", 806, Current, 0, 4, 7602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("first_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("second_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("third_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("fourth_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 255U)) && (EIF_BOOLEAN)(arg2 == ((EIF_NATURAL_32) 254U))) && (EIF_BOOLEAN)(arg3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg4 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 255U)) && (EIF_BOOLEAN)(arg2 == ((EIF_NATURAL_32) 254U))) && (EIF_BOOLEAN)(arg3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg4 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))))) {
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

/* {UC_UTF32_ROUTINES}.is_byte */
EIF_BOOLEAN F807_6625 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_byte", 806, Current, 0, 1, 7603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))))) {
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

/* {UC_UTF32_ROUTINES}.is_byte_natural_32 */
EIF_BOOLEAN F807_6626 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("is_byte_natural_32", 806, Current, 0, 1, 7604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 256U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 256U))))) {
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

/* {UC_UTF32_ROUTINES}.code */
EIF_NATURAL_32 F807_6627 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("code", 806, Current, 0, 5, 7605);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("first_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("second_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("third_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("fourth_is_byte", EX_PRE);
		RTTE((nstcall = 0, F807_6626(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if (arg5) {
		RTHOOK(6);
		Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 + (EIF_NATURAL_32) (arg2 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 256L))) + (EIF_NATURAL_32) (arg3 * ((EIF_NATURAL_32) 65536U))) + (EIF_NATURAL_32) (arg4 * ((EIF_NATURAL_32) 16777216U)));
	} else {
		RTHOOK(7);
		Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg4 + (EIF_NATURAL_32) (arg3 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 256L))) + (EIF_NATURAL_32) (arg2 * ((EIF_NATURAL_32) 65536U))) + (EIF_NATURAL_32) (arg1 * ((EIF_NATURAL_32) 16777216U)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
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

void EIF_Minit240 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
