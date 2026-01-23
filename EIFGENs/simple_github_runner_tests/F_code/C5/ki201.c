/*
 * Code for class KI_CHARACTER_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ki201.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KI_CHARACTER_OUTPUT_STREAM}.put_substring */
void F230_4664 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_substring", 229, Current, 0, 3, 2857);
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
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		RTHOOK(7);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, arg2, arg3));
		(nstcall = 0, F1074_10386(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer */
void F230_4665 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer", 229, Current, 0, 1, 2858);
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
	RTHOOK(2);
	ti8_1 = (EIF_INTEGER_64) arg1;
	(nstcall = 0, F230_4669(Current, ti8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer_8 */
void F230_4666 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8", 229, Current, 0, 1, 2859);
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
	RTHOOK(2);
	ti8_1 = (EIF_INTEGER_64) arg1;
	(nstcall = 0, F230_4669(Current, ti8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer_16 */
void F230_4667 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16", 229, Current, 0, 1, 2860);
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
	RTHOOK(2);
	ti8_1 = (EIF_INTEGER_64) arg1;
	(nstcall = 0, F230_4669(Current, ti8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer_32 */
void F230_4668 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32", 229, Current, 0, 1, 2861);
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
	RTHOOK(2);
	ti8_1 = (EIF_INTEGER_64) arg1;
	(nstcall = 0, F230_4669(Current, ti8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer_64 */
void F230_4669 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64", 229, Current, 2, 1, 2862);
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
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -(EIF_INTEGER_64) (arg1 + (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			loc2 = (EIF_INTEGER_64) (EIF_INTEGER_64) (loc1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L));
			RTHOOK(8);
			switch ((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) {
				case RTI64C(0):
					RTHOOK(9);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(10);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(11);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '1'));
					break;
				case RTI64C(1):
					RTHOOK(12);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(13);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(14);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '2'));
					break;
				case RTI64C(2):
					RTHOOK(15);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(16);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(17);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '3'));
					break;
				case RTI64C(3):
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(19);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(20);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '4'));
					break;
				case RTI64C(4):
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(22);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(23);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '5'));
					break;
				case RTI64C(5):
					RTHOOK(24);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(25);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(26);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '6'));
					break;
				case RTI64C(6):
					RTHOOK(27);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(28);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(29);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '7'));
					break;
				case RTI64C(7):
					RTHOOK(30);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(31);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(32);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '8'));
					break;
				case RTI64C(8):
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(34);
						(nstcall = 0, F230_4669(Current, loc2));
					}
					RTHOOK(35);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '9'));
					break;
				case RTI64C(9):
					RTHOOK(36);
					(nstcall = 0, F230_4669(Current, (EIF_INTEGER_64) (loc2 + (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L))));
					RTHOOK(37);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '0'));
					break;
				default:
					RTEC(EN_WHEN);
			}
		} else {
			RTHOOK(38);
			loc1 = (EIF_INTEGER_64) arg1;
			RTHOOK(39);
			loc2 = (EIF_INTEGER_64) (EIF_INTEGER_64) (loc1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L));
			RTHOOK(40);
			if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(41);
				(nstcall = 0, F230_4669(Current, loc2));
			}
			RTHOOK(42);
			switch ((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) {
				case RTI64C(0):
					RTHOOK(43);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '0'));
					break;
				case RTI64C(1):
					RTHOOK(44);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '1'));
					break;
				case RTI64C(2):
					RTHOOK(45);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '2'));
					break;
				case RTI64C(3):
					RTHOOK(46);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '3'));
					break;
				case RTI64C(4):
					RTHOOK(47);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '4'));
					break;
				case RTI64C(5):
					RTHOOK(48);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '5'));
					break;
				case RTI64C(6):
					RTHOOK(49);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '6'));
					break;
				case RTI64C(7):
					RTHOOK(50);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '7'));
					break;
				case RTI64C(8):
					RTHOOK(51);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '8'));
					break;
				case RTI64C(9):
					RTHOOK(52);
					(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '9'));
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(53);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_natural_8 */
void F230_4670 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8", 229, Current, 0, 1, 2863);
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
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F230_4673(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_natural_16 */
void F230_4671 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16", 229, Current, 0, 1, 2864);
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
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F230_4673(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_natural_32 */
void F230_4672 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32", 229, Current, 0, 1, 2865);
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
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F230_4673(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_natural_64 */
void F230_4673 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64", 229, Current, 2, 1, 2866);
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
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(4);
		loc1 = (EIF_NATURAL_64) arg1;
		RTHOOK(5);
		loc2 = (EIF_NATURAL_64) (EIF_NATURAL_64) (loc1 / (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L));
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 != (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			(nstcall = 0, F230_4673(Current, loc2));
		}
		RTHOOK(8);
		switch ((EIF_NATURAL_64) (loc1 % (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L))) {
			case RTU64C(0):
				RTHOOK(9);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '0'));
				break;
			case RTU64C(1):
				RTHOOK(10);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '1'));
				break;
			case RTU64C(2):
				RTHOOK(11);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '2'));
				break;
			case RTU64C(3):
				RTHOOK(12);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '3'));
				break;
			case RTU64C(4):
				RTHOOK(13);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '4'));
				break;
			case RTU64C(5):
				RTHOOK(14);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '5'));
				break;
			case RTU64C(6):
				RTHOOK(15);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '6'));
				break;
			case RTU64C(7):
				RTHOOK(16);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '7'));
				break;
			case RTU64C(8):
				RTHOOK(17);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '8'));
				break;
			case RTU64C(9):
				RTHOOK(18);
				(nstcall = 0, F1074_10384(Current, (EIF_CHARACTER_8) '9'));
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_boolean */
void F230_4674 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_boolean", 229, Current, 0, 1, 2867);
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
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(445,(nstcall = 0, F230_4677), (Current));
		(nstcall = 0, F1074_10386(Current, tr1));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(446,(nstcall = 0, F230_4678), (Current));
		(nstcall = 0, F1074_10386(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.append */
void F230_4675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("append", 229, Current, 1, 1, 2868);
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
		RTCT("an_input_stream_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("an_input_stream_open_read", EX_PRE);
		tb1 = (RTNA((RTCW(arg1))), ((EIF_BOOLEAN) 0));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(289, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(5);
		tb1 = (RTNA((loc1)), ((EIF_BOOLEAN) 0));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			(RTNA((loc1, ((EIF_INTEGER_32) 512L))));
		}
		for (;;) {
			RTHOOK(7);
			tb1 = (RTNA((loc1)), ((EIF_BOOLEAN) 0));
			if (tb1) break;
			RTHOOK(8);
			tr1 = (RTNA((loc1)), ((EIF_REFERENCE) 0));
			(nstcall = 0, F1074_10386(Current, tr1));
			RTHOOK(9);
			(RTNA((loc1, ((EIF_INTEGER_32) 512L))));
		}
	} else {
		RTHOOK(10);
		(nstcall = 0, F51_2073(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("end_of_input", EX_POST);
		tb2 = (RTNA((RTCW(arg1))), ((EIF_BOOLEAN) 0));
		if (tb2) {
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
}

/* {KI_CHARACTER_OUTPUT_STREAM}.true_constant */

EIF_REFERENCE F230_4677 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (445,RTMS_EX_H("True",4,1416787301));
}

/* {KI_CHARACTER_OUTPUT_STREAM}.false_constant */

EIF_REFERENCE F230_4678 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (446,RTMS_EX_H("False",5,1635034981));
}

void EIF_Minit201 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
