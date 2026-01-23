/*
 * Code for class UC_UTF8_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc225.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_UTF8_ROUTINES}.valid_utf8 */
EIF_BOOLEAN F291_5538 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("valid_utf8", 290, Current, 0, 1, 3683);
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
	Result = (nstcall = 0, F291_5539(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.valid_utf8_substring */
EIF_BOOLEAN F291_5539 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc7 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_utf8_substring", 290, Current, 7, 3, 3684);
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
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
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
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(8);
	loc2 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(10);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		loc7 = (EIF_CHARACTER_8) tc1;
		RTHOOK(11);
		if ((nstcall = 0, F291_5542(Current, loc7))) {
			RTHOOK(12);
			loc4 = (nstcall = 0, F291_5559(Current, loc7));
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(14);
				loc1++;
			} else {
				RTHOOK(15);
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L));
				RTHOOK(16);
				if ((EIF_BOOLEAN) (loc3 > loc2)) {
					RTHOOK(17);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(18);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(19);
					loc5 = (nstcall = 0, F291_5551(Current, loc7));
					RTHOOK(20);
					loc1++;
					RTHOOK(21);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
					loc6 = (EIF_CHARACTER_8) tc1;
					RTHOOK(22);
					if ((EIF_BOOLEAN) !(nstcall = 0, F291_5544(Current, loc6, loc7))) {
						RTHOOK(23);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(24);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(25);
						ti4_1 = (nstcall = 0, F291_5553(Current, loc6));
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 * ((EIF_INTEGER_32) 64L)) + ti4_1);
						RTHOOK(26);
						switch (loc4) {
							case 2L:
								RTHOOK(27);
								if ((EIF_BOOLEAN) (loc5 <= ((EIF_INTEGER_32) 127L))) {
									RTHOOK(28);
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							case 3L:
								RTHOOK(29);
								if ((EIF_BOOLEAN) (loc5 <= ((EIF_INTEGER_32) 31L))) {
									RTHOOK(30);
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							case 4L:
								RTHOOK(31);
								if ((EIF_BOOLEAN) (loc5 <= ((EIF_INTEGER_32) 15L))) {
									RTHOOK(32);
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							default:
								RTEC(EN_WHEN);
						}
						RTHOOK(33);
						if (Result) {
							RTHOOK(34);
							loc1++;
							for (;;) {
								RTHOOK(35);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(36);
								tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
								if ((nstcall = 0, F291_5543(Current, tc1))) {
									RTHOOK(37);
									loc1++;
								} else {
									RTHOOK(38);
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(39);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(40);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(41);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.is_string_8 */
EIF_BOOLEAN F291_5540 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_string_8", 290, Current, 3, 1, 3685);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		RTTE((nstcall = 0, F291_5538(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(8);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		loc3 = (nstcall = 0, F291_5559(Current, tc1));
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 1L))) {
		} else {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 2L))) {
				RTHOOK(11);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
				tc2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				if ((EIF_BOOLEAN) ((nstcall = 0, F291_5555(Current, tc1, tc2)) > ((EIF_NATURAL_32) 255U))) {
					RTHOOK(12);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(13);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				}
			} else {
				RTHOOK(14);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(15);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			}
		}
		RTHOOK(16);
		loc1 += loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.is_string_32 */
EIF_BOOLEAN F291_5541 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("is_string_32", 290, Current, 0, 1, 3686);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		RTTE((nstcall = 0, F291_5538(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.is_encoded_first_byte */
EIF_BOOLEAN F291_5542 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("is_encoded_first_byte", 290, Current, 0, 1, 3625);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '') || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '\302' <= arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\364')));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.is_encoded_next_byte */
EIF_BOOLEAN F291_5543 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("is_encoded_next_byte", 290, Current, 0, 1, 3626);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '' < arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\277'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.is_encoded_second_byte */
EIF_BOOLEAN F291_5544 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_CHARACTER_8 arg2)
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
	
	RTEAA("is_encoded_second_byte", 290, Current, 0, 2, 3627);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == (EIF_CHARACTER_8) '\340')) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '\237' < arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\277'));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == (EIF_CHARACTER_8) '\355')) {
			RTHOOK(5);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '' < arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\237'));
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(arg2 == (EIF_CHARACTER_8) '\360')) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '\217' < arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\277'));
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN)(arg2 == (EIF_CHARACTER_8) '\364')) {
					RTHOOK(9);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '' < arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\217'));
				} else {
					RTHOOK(10);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) '' < arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\277'));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.is_endian_detection_character */
EIF_BOOLEAN F291_5545 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_CHARACTER_8 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_endian_detection_character", 290, Current, 0, 3, 3628);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((nstcall = 0, F291_5546(Current, arg1, arg2))) {
		Result = (EIF_BOOLEAN)(arg3 == (EIF_CHARACTER_8) '\277');
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_start", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (nstcall = 0, F291_5546(Current, arg1, arg2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = RTOUCR(447,(nstcall = 0, F291_5549), (Current));
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(tr1))-723])(tr1, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(arg1 == tc1)) {
			tr1 = RTOUCR(447,(nstcall = 0, F291_5549), (Current));
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(tr1))-723])(tr1, ((EIF_INTEGER_32) 2L)));
			tb2 = (EIF_BOOLEAN)(arg2 == tc1);
		}
		if (tb2) {
			tr1 = RTOUCR(447,(nstcall = 0, F291_5549), (Current));
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(tr1))-723])(tr1, ((EIF_INTEGER_32) 3L)));
			tb1 = (EIF_BOOLEAN)(arg3 == tc1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {UC_UTF8_ROUTINES}.is_endian_detection_character_start */
EIF_BOOLEAN F291_5546 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_CHARACTER_8 arg2)
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
	
	RTEAA("is_endian_detection_character_start", 290, Current, 0, 2, 3629);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '\357') && (EIF_BOOLEAN)(arg2 == (EIF_CHARACTER_8) '\273'));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tr1 = RTOUCR(447,(nstcall = 0, F291_5549), (Current));
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(tr1))-723])(tr1, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(arg1 == tc1)) {
			tr1 = RTOUCR(447,(nstcall = 0, F291_5549), (Current));
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(tr1))-723])(tr1, ((EIF_INTEGER_32) 2L)));
			tb1 = (EIF_BOOLEAN)(arg2 == tc1);
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

/* {UC_UTF8_ROUTINES}.utf8_bom */

EIF_REFERENCE F291_5549 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (447,RTMS_EX_H("\357\273\277",3,15711167));
}

/* {UC_UTF8_ROUTINES}.encoded_first_value */
EIF_INTEGER_32 F291_5551 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("encoded_first_value", 290, Current, 0, 1, 3634);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F291_5552(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 128L))) {
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

/* {UC_UTF8_ROUTINES}.natural_32_encoded_first_value */
EIF_NATURAL_32 F291_5552 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("natural_32_encoded_first_value", 290, Current, 0, 1, 3635);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) arg1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\337')) {
			RTHOOK(5);
			Result %= (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\357')) {
				RTHOOK(7);
				Result %= (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\364')) {
					RTHOOK(9);
					Result %= (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
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

/* {UC_UTF8_ROUTINES}.encoded_next_value */
EIF_INTEGER_32 F291_5553 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("encoded_next_value", 290, Current, 0, 1, 3636);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F291_5554(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 64L))) {
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

/* {UC_UTF8_ROUTINES}.natural_32_encoded_next_value */
EIF_NATURAL_32 F291_5554 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("natural_32_encoded_next_value", 290, Current, 0, 1, 3637);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) arg1;
	Result = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L))) {
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

/* {UC_UTF8_ROUTINES}.two_byte_character_code */
EIF_NATURAL_32 F291_5555 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("two_byte_character_code", 290, Current, 0, 2, 3638);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("encoded_byte_count", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F291_5559(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte1_is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg1)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_byte2_is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tu4_1 = (EIF_NATURAL_32) arg1;
	tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
	tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
	tu4_2 = (EIF_NATURAL_32) arg2;
	tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
	tu4_2 = eif_bit_or(tu4_1,tu4_3);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.three_byte_character_code */
EIF_NATURAL_32 F291_5556 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_CHARACTER_8 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("three_byte_character_code", 290, Current, 0, 3, 3639);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("encoded_byte_count", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F291_5559(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte1_is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg1)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_byte2_is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg2)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_byte3_is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tu4_1 = (EIF_NATURAL_32) arg1;
	tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
	tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 12L));
	tu4_2 = (EIF_NATURAL_32) arg2;
	tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
	tu4_2 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 6L));
	tu4_3 = eif_bit_or(tu4_1,tu4_2);
	tu4_1 = (EIF_NATURAL_32) arg3;
	tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
	tu4_1 = eif_bit_or(tu4_3,tu4_2);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.four_byte_character_code */
EIF_NATURAL_32 F291_5557 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_CHARACTER_8 arg2, EIF_CHARACTER_8 arg3, EIF_CHARACTER_8 arg4)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("four_byte_character_code", 290, Current, 0, 4, 3640);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("encoded_byte_count", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F291_5559(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte1_is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg1)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_byte2_is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg2)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_byte3_is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg3)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("a_byte4_is_encoded_next_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5543(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tu4_1 = (EIF_NATURAL_32) arg1;
	tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
	tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 18L));
	tu4_2 = (EIF_NATURAL_32) arg2;
	tu4_3 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
	tu4_2 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 12L));
	tu4_3 = eif_bit_or(tu4_1,tu4_2);
	tu4_1 = (EIF_NATURAL_32) arg3;
	tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
	tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
	tu4_2 = eif_bit_or(tu4_3,tu4_1);
	tu4_1 = (EIF_NATURAL_32) arg4;
	tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
	tu4_1 = eif_bit_or(tu4_2,tu4_3);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.natural_32_code_to_utf8 */
EIF_NATURAL_32 F291_5558 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_code_to_utf8", 290, Current, 5, 1, 3641);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 128U))) {
		RTHOOK(2);
		tu4_1 = eif_bit_shift_left(arg1,(EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ((EIF_INTEGER_32) 8L)));
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 2048U))) {
			RTHOOK(4);
			loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
			RTHOOK(5);
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
			RTHOOK(6);
			tu4_1 = eif_bit_shift_left(loc1,(EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ((EIF_INTEGER_32) 8L)));
			tu4_2 = eif_bit_shift_left(loc2,(EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 8L)));
			tu4_3 = eif_bit_or(tu4_1,tu4_2);
			Result = (EIF_NATURAL_32) tu4_3;
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 65536U))) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_NATURAL_32) 55296U)) && (EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 57343U)))) {
					RTHOOK(9);
					Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080));
				} else {
					RTHOOK(10);
					loc5 = (EIF_NATURAL_32) arg1;
					RTHOOK(11);
					loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(12);
					loc5 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(13);
					loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(14);
					loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
					RTHOOK(15);
					tu4_1 = eif_bit_shift_left(loc1,(EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ((EIF_INTEGER_32) 8L)));
					tu4_2 = eif_bit_shift_left(loc2,(EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 8L)));
					tu4_3 = eif_bit_or(tu4_1,tu4_2);
					tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
					tu4_2 = eif_bit_or(tu4_3,tu4_1);
					Result = (EIF_NATURAL_32) tu4_2;
				}
			} else {
				RTHOOK(16);
				if ((EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 1114111U))) {
					RTHOOK(17);
					loc5 = (EIF_NATURAL_32) arg1;
					RTHOOK(18);
					loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(19);
					loc5 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(20);
					loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(21);
					loc5 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(22);
					loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(23);
					loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
					RTHOOK(24);
					tu4_1 = eif_bit_shift_left(loc1,(EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ((EIF_INTEGER_32) 8L)));
					tu4_2 = eif_bit_shift_left(loc2,(EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 8L)));
					tu4_3 = eif_bit_or(tu4_1,tu4_2);
					tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
					tu4_2 = eif_bit_or(tu4_3,tu4_1);
					tu4_1 = eif_bit_or(tu4_2,loc4);
					Result = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(25);
					Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.encoded_byte_count */
EIF_INTEGER_32 F291_5559 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("encoded_byte_count", 290, Current, 0, 1, 3642);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		RTTE((nstcall = 0, F291_5542(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\337')) {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\357')) {
				RTHOOK(7);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(8);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("encoded_byte_code_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("encoded_byte_code_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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

/* {UC_UTF8_ROUTINES}.string_byte_count */
EIF_INTEGER_32 F291_5560 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("string_byte_count", 290, Current, 0, 1, 3643);
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
	Result = (nstcall = 0, F291_5561(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_byte_count_not_negative", EX_POST);
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

/* {UC_UTF8_ROUTINES}.substring_byte_count */
EIF_INTEGER_32 F291_5561 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	
	RTEAA("substring_byte_count", 290, Current, 6, 3, 3644);
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
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		RTHOOK(6);
		tb1 = '\0';
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTOUCR(448,(nstcall = 0, F291_5598), (Current));
		tb2 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
		if (tb2) {
			loc4 = arg1;
			loc4 = RTRV(eif_new_type(1027, 0x01),loc4);
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(7);
			loc3 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc3 > arg3)) break;
				RTHOOK(9);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(loc4)-723])(loc4, loc3));
				Result += (nstcall = 0, F291_5563(Current, tc1));
				RTHOOK(10);
				loc3++;
			}
		} else {
			RTHOOK(11);
			tb1 = '\0';
			tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
			tr2 = RTOUCR(449,(nstcall = 0, F291_5599), (Current));
			tb2 = (nstcall = 1, F4_1279(RTCW(tr1), arg1, tr2));
			if (tb2) {
				loc5 = arg1;
				loc5 = RTRV(eif_new_type(1073, 0x01),loc5);
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				RTHOOK(12);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_1_0_2_);
					tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
				}
				if (tb1) {
					RTHOOK(13);
					ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_1_0_3_);
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(14);
					ti4_1 = (nstcall = 1, F1074_10436(loc5, arg2));
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(15);
					ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
						RTHOOK(16);
						ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_1_0_3_);
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(17);
						ti4_1 = (nstcall = 1, F1074_10435(loc5, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(18);
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
					}
				}
			} else {
				RTHOOK(19);
				loc6 = arg1;
				loc6 = RTRV(eif_new_type(1074, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					RTHOOK(20);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_1_0_2_);
						tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
					}
					if (tb1) {
						RTHOOK(21);
						ti4_1 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_1_0_3_);
						Result = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(22);
						ti4_1 = (nstcall = 1, F1074_10436(loc6, arg2));
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(23);
						ti4_1 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
							RTHOOK(24);
							ti4_1 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_1_0_3_);
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(25);
							ti4_1 = (nstcall = 1, F1074_10435(loc6, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(26);
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
						}
					}
				} else {
					RTHOOK(27);
					loc3 = (EIF_INTEGER_32) arg2;
					for (;;) {
						RTHOOK(28);
						if ((EIF_BOOLEAN) (loc3 > arg3)) break;
						RTHOOK(29);
						tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7149[Dtype(RTCW(arg1))-1026])(arg1, loc3));
						Result += (nstcall = 0, F291_5564(Current, tw1));
						RTHOOK(30);
						loc3++;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("substring_byte_count_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.character_byte_count */
EIF_INTEGER_32 F291_5562 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("character_byte_count", 290, Current, 0, 1, 3645);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F291_5563(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("character_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("character_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 2L))) {
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

/* {UC_UTF8_ROUTINES}.character_8_byte_count */
EIF_INTEGER_32 F291_5563 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("character_8_byte_count", 290, Current, 0, 1, 3646);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("character_8_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("character_8_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 2L))) {
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

/* {UC_UTF8_ROUTINES}.character_32_byte_count */
EIF_INTEGER_32 F291_5564 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_byte_count", 290, Current, 0, 1, 3647);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) arg1;
	Result = (nstcall = 0, F291_5566(Current, tu4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("character_32_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("character_32_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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

/* {UC_UTF8_ROUTINES}.code_byte_count */
EIF_INTEGER_32 F291_5565 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("code_byte_count", 290, Current, 0, 1, 3648);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1114111L))) {
		RTHOOK(3);
		tu4_1 = (EIF_NATURAL_32) arg1;
		Result = (nstcall = 0, F291_5566(Current, tu4_1));
	} else {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("code_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("code_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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

/* {UC_UTF8_ROUTINES}.natural_32_code_byte_count */
EIF_INTEGER_32 F291_5566 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("natural_32_code_byte_count", 290, Current, 0, 1, 3649);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 128U))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 2048U))) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 55296U))) {
				RTHOOK(6);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 57343U))) {
					RTHOOK(8);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(9);
					if ((EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 65536U))) {
						RTHOOK(10);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						RTHOOK(11);
						if ((EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 1114111U))) {
							RTHOOK(12);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							RTHOOK(13);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("natural_32_code_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("natural_32_code_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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

/* {UC_UTF8_ROUTINES}.unicode_character_count */
EIF_INTEGER_32 F291_5567 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("unicode_character_count", 290, Current, 0, 1, 3650);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string_8", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		RTTE((nstcall = 0, F291_5538(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (nstcall = 0, F291_5568(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("unicode_character_count_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {UC_UTF8_ROUTINES}.unicode_substring_character_count */
EIF_INTEGER_32 F291_5568 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("unicode_substring_character_count", 290, Current, 2, 3, 3651);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string_8", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("a_utf8_valid_substring", EX_PRE);
		RTTE((nstcall = 0, F291_5539(Current, arg1, arg2, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) arg3;
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(10);
		Result++;
		RTHOOK(11);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		loc1 += (nstcall = 0, F291_5559(Current, tc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("unicode_character_count_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {UC_UTF8_ROUTINES}.string_to_utf8 */
EIF_REFERENCE F291_5569 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("string_to_utf8", 290, Current, 1, 1, 3652);
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
	Result = (nstcall = 0, F291_5570(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_to_utf8_is_string", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("valid_utf8", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = (nstcall = 1, F948_7750(RTCW(tr1), ti4_1));
		tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb3) break;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_2 = ti4_1;
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ti4_2));
			tr1 = RTLNS(eif_new_type(1067, 0x01).id, 1067, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tb2 = (nstcall = 0, F1068_10063(RTCW(tr1), tu4_1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
		}
		if (tb2) {
			tb1 = (nstcall = 0, F291_5538(Current, Result));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F291_5560(Current, arg1)))) {
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

/* {UC_UTF8_ROUTINES}.substring_to_utf8 */
EIF_REFERENCE F291_5570 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("substring_to_utf8", 290, Current, 1, 3, 3653);
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
	RTHOOK(5);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 0, F291_5561(Current, arg1, arg2, arg3));
	(nstcall = -1, F1026_8856(RTCW(Result), ti4_1));
	RTHOOK(6);
	(nstcall = 0, F291_5573(Current, Result, arg1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("substring_to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("substring_to_utf8_is_string", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("valid_utf8", EX_POST);
		tb1 = '\01';
		tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = arg2;
		tr2 = (nstcall = 1, F948_7750(RTCW(tr1), arg3));
		tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb3) break;
			RTHOOK(10);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_2 = ti4_1;
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, ti4_2));
			tr1 = RTLNS(eif_new_type(1067, 0x01).id, 1067, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tb2 = (nstcall = 0, F1068_10063(RTCW(tr1), tu4_1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
		}
		if (tb2) {
			tb1 = (nstcall = 0, F291_5538(Current, Result));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F291_5561(Current, arg1, arg2, arg3)))) {
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

/* {UC_UTF8_ROUTINES}.to_utf8 */
EIF_REFERENCE F291_5571 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("to_utf8", 290, Current, 3, 1, 3654);
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
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(1073, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1074_10420(loc3));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1026_8856(RTCW(Result), loc2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg1))-1026])(arg1, loc1));
			(nstcall = 0, F291_5575(Current, Result, tu4_1));
			RTHOOK(9);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("string_type", EX_POST);
		tr1 = RTOUCR(387,(nstcall = 0, F289_5533), (Current));
		tr2 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F4_1279(RTCW(tr1), Result, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("valid_utf8", EX_POST);
		if ((nstcall = 0, F291_5538(Current, Result))) {
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

/* {UC_UTF8_ROUTINES}.append_string_to_utf8 */
void F291_5572 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("append_string_to_utf8", 290, Current, 1, 2, 3655);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb1 = (nstcall = 0, F291_5538(Current, arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg2))-1026])(arg2));
	(nstcall = 0, F291_5573(Current, arg1, arg2, ((EIF_INTEGER_32) 1L), ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("a_utf8", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg2))-1026])(arg2));
			tr3 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr3 = ((EIF_INTEGER_32) 1L);
			tr4 = (nstcall = 1, F948_7750(RTCW(tr3), ti4_2));
			tr3 = (nstcall = 1, F699_6408(RTCW(tr4)));
			loc1 = (EIF_REFERENCE) tr3;
			tb4 = EIF_TRUE;
			for (;;) {
				if (!tb4) break;
				tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
				if (tb5) break;
				RTHOOK(6);
				ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
				ti4_3 = ti4_2;
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg2))-1026])(arg2, ti4_3));
				tr3 = RTLNS(eif_new_type(1067, 0x01).id, 1067, _OBJSIZ_0_0_0_0_0_0_0_0_);
				tb4 = (nstcall = 0, F1068_10063(RTCW(tr3), tu4_1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
			}
			tb3 = tb4;
		}
		if (tb3) {
			tb2 = (nstcall = 0, F291_5538(Current, arg1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + (nstcall = 0, F291_5560(Current, arg2))))) {
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

/* {UC_UTF8_ROUTINES}.append_substring_to_utf8 */
void F291_5573 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("append_substring_to_utf8", 290, Current, 3, 4, 3656);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg2))-1026])(arg2));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb1 = (nstcall = 0, F291_5538(Current, arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) arg3;
		RTHOOK(9);
		loc2 = (EIF_INTEGER_32) arg4;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(11);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg2))-1026])(arg2, loc1));
			(nstcall = 0, F291_5575(Current, arg1, tu4_1));
			RTHOOK(12);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("a_utf8", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			tr3 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr3 = arg3;
			tr4 = (nstcall = 1, F948_7750(RTCW(tr3), arg4));
			tr3 = (nstcall = 1, F699_6408(RTCW(tr4)));
			loc3 = (EIF_REFERENCE) tr3;
			tb4 = EIF_TRUE;
			for (;;) {
				if (!tb4) break;
				tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc3)-280])(loc3));
				if (tb5) break;
				RTHOOK(14);
				ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc3)-280])(loc3));
				ti4_3 = ti4_2;
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7148[Dtype(RTCW(arg2))-1026])(arg2, ti4_3));
				tr3 = RTLNS(eif_new_type(1067, 0x01).id, 1067, _OBJSIZ_0_0_0_0_0_0_0_0_);
				tb4 = (nstcall = 0, F1068_10063(RTCW(tr3), tu4_1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc3)-280])(loc3));
			}
			tb3 = tb4;
		}
		if (tb3) {
			tb2 = (nstcall = 0, F291_5538(Current, arg1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + (nstcall = 0, F291_5561(Current, arg2, arg3, arg4))))) {
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

/* {UC_UTF8_ROUTINES}.append_code_to_utf8 */
void F291_5574 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("append_code_to_utf8", 290, Current, 0, 2, 3657);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_code_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb1 = (nstcall = 0, F291_5538(Current, arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	tu4_1 = (EIF_NATURAL_32) arg2;
	(nstcall = 0, F291_5575(Current, arg1, tu4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("a_utf8_valid", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			tr3 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
			tb4 = (nstcall = 1, F1068_10062(RTCW(tr3), arg2));
			tb3 = tb4;
		}
		if (tb3) {
			tb2 = (nstcall = 0, F291_5538(Current, arg1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + (nstcall = 0, F291_5565(Current, arg2))))) {
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

/* {UC_UTF8_ROUTINES}.append_natural_32_code_to_utf8 */
void F291_5575 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("append_natural_32_code_to_utf8", 290, Current, 4, 2, 3658);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb1 = (nstcall = 0, F291_5538(Current, arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg2 < ((EIF_NATURAL_32) 128U))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) arg2;
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, tc1));
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (arg2 < ((EIF_NATURAL_32) 2048U))) {
			RTHOOK(6);
			loc4 = (EIF_NATURAL_32) arg2;
			RTHOOK(7);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(8);
			loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
			RTHOOK(9);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (loc4 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, tc1));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, loc1));
		} else {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (arg2 < ((EIF_NATURAL_32) 65536U))) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_NATURAL_32) 55296U)) && (EIF_BOOLEAN) (arg2 <= ((EIF_NATURAL_32) 57343U)))) {
					RTHOOK(13);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, (EIF_CHARACTER_8) '\377'));
				} else {
					RTHOOK(14);
					loc4 = (EIF_NATURAL_32) arg2;
					RTHOOK(15);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(16);
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(17);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc1 = (EIF_CHARACTER_8) tc1;
					RTHOOK(18);
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(19);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (loc4 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L)));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, tc1));
					RTHOOK(20);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, loc1));
					RTHOOK(21);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, loc2));
				}
			} else {
				RTHOOK(22);
				if ((EIF_BOOLEAN) (arg2 <= ((EIF_NATURAL_32) 1114111U))) {
					RTHOOK(23);
					loc4 = (EIF_NATURAL_32) arg2;
					RTHOOK(24);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc3 = (EIF_CHARACTER_8) tc1;
					RTHOOK(25);
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(26);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(27);
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(28);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc1 = (EIF_CHARACTER_8) tc1;
					RTHOOK(29);
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(30);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (loc4 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L)));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, tc1));
					RTHOOK(31);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, loc1));
					RTHOOK(32);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, loc2));
					RTHOOK(33);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, loc3));
				} else {
					RTHOOK(34);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(arg1))-1027])(arg1, (EIF_CHARACTER_8) '\377'));
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(35);
		RTCT("a_utf8_valid", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			tr3 = RTOUCR(404,(nstcall = 0, F215_4199), (Current));
			tb4 = (nstcall = 1, F1068_10063(RTCW(tr3), arg2));
			tb3 = tb4;
		}
		if (tb3) {
			tb2 = (nstcall = 0, F291_5538(Current, arg1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + (nstcall = 0, F291_5566(Current, arg2))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {UC_UTF8_ROUTINES}.dummy_string */

EIF_REFERENCE F291_5598 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (448,RTMS_EX_H("",0,0));
}

/* {UC_UTF8_ROUTINES}.dummy_uc_string */
static EIF_REFERENCE F291_5599_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(449)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("dummy_uc_string", 290, Current, 0, 0, 3682);
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

EIF_REFERENCE F291_5599 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(449,F291_5599_body,(Current));
}

void EIF_Minit225 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
