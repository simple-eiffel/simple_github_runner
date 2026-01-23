/*
 * Code for class KL_INTEGER_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl226.h"
#include "eif_helpers.h"
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

/* {KL_INTEGER_ROUTINES}.to_character */
EIF_CHARACTER_8 F292_5600 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_character", 291, Current, 0, 1, 3695);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_large_enough", EX_PRE);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,418,(nstcall = 1, F226_4570), (RTCW(tr1)));
		RTTE((EIF_BOOLEAN) (arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_int_small_enough", EX_PRE);
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,419,(nstcall = 1, F226_4571), (RTCW(tr1)));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tc1 = (EIF_CHARACTER_8) arg1;
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_character_code", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (Result);
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
	return Result;
}

/* {KL_INTEGER_ROUTINES}.to_hexadecimal */
EIF_REFERENCE F292_5601 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
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
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_hexadecimal", 291, Current, 0, 2, 3696);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	(nstcall = 0, F292_5608(Current, arg1, Result, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("hexadecimal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_string", EX_POST);
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.to_decimal */
EIF_REFERENCE F292_5602 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_decimal", 291, Current, 0, 1, 3697);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), ((EIF_INTEGER_32) 10L)));
	RTHOOK(2);
	(nstcall = 0, F292_5606(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("decimal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_string", EX_POST);
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.to_octal */
EIF_REFERENCE F292_5603 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_octal", 291, Current, 0, 1, 3698);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(Result), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 0, F292_5607(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("octal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_string", EX_POST);
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.to_integer */
EIF_INTEGER_32 F292_5604 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("to_integer", 291, Current, 0, 1, 3699);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == arg1)) {
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

/* {KL_INTEGER_ROUTINES}.to_integer_8 */
EIF_INTEGER_8 F292_5605 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("to_integer_8", 291, Current, 0, 1, 3700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_large_enouh", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) -128L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_int_small_enouh", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 127L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti1_1 = (EIF_INTEGER_8) arg1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.append_decimal_integer */
void F292_5606 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_decimal_integer", 291, Current, 2, 2, 3701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 45U)));
			RTHOOK(6);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L));
			RTHOOK(8);
			switch ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 10L))) {
				case 0L:
					RTHOOK(9);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(10);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(11);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 49U)));
					break;
				case 1L:
					RTHOOK(12);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(13);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(14);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 50U)));
					break;
				case 2L:
					RTHOOK(15);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(16);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(17);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 51U)));
					break;
				case 3L:
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(19);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(20);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 52U)));
					break;
				case 4L:
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(22);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(23);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 53U)));
					break;
				case 5L:
					RTHOOK(24);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(25);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(26);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 54U)));
					break;
				case 6L:
					RTHOOK(27);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(28);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(29);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 55U)));
					break;
				case 7L:
					RTHOOK(30);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(31);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(32);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 56U)));
					break;
				case 8L:
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(34);
						(nstcall = 0, F292_5606(Current, loc1, arg2));
					}
					RTHOOK(35);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 57U)));
					break;
				case 9L:
					RTHOOK(36);
					(nstcall = 0, F292_5606(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), arg2));
					RTHOOK(37);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
					break;
				default:
					RTEC(EN_WHEN);
			}
		} else {
			RTHOOK(38);
			loc2 = (EIF_INTEGER_32) arg1;
			RTHOOK(39);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L));
			RTHOOK(40);
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(41);
				(nstcall = 0, F292_5606(Current, loc1, arg2));
			}
			RTHOOK(42);
			switch ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 10L))) {
				case 0L:
					RTHOOK(43);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
					break;
				case 1L:
					RTHOOK(44);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 49U)));
					break;
				case 2L:
					RTHOOK(45);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 50U)));
					break;
				case 3L:
					RTHOOK(46);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 51U)));
					break;
				case 4L:
					RTHOOK(47);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 52U)));
					break;
				case 5L:
					RTHOOK(48);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 53U)));
					break;
				case 6L:
					RTHOOK(49);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 54U)));
					break;
				case 7L:
					RTHOOK(50);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 55U)));
					break;
				case 8L:
					RTHOOK(51);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 56U)));
					break;
				case 9L:
					RTHOOK(52);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 57U)));
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

/* {KL_INTEGER_ROUTINES}.append_octal_integer */
void F292_5607 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_octal_integer", 291, Current, 1, 2, 3702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
	} else {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 8L));
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			(nstcall = 0, F292_5607(Current, loc1, arg2));
		}
		RTHOOK(8);
		switch ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 8L))) {
			case 0L:
				RTHOOK(9);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
				break;
			case 1L:
				RTHOOK(10);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 49U)));
				break;
			case 2L:
				RTHOOK(11);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 50U)));
				break;
			case 3L:
				RTHOOK(12);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 51U)));
				break;
			case 4L:
				RTHOOK(13);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 52U)));
				break;
			case 5L:
				RTHOOK(14);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 53U)));
				break;
			case 6L:
				RTHOOK(15);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 54U)));
				break;
			case 7L:
				RTHOOK(16);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 55U)));
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {KL_INTEGER_ROUTINES}.append_hexadecimal_integer */
void F292_5608 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_hexadecimal_integer", 291, Current, 1, 3, 3703);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
	} else {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 16L));
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			(nstcall = 0, F292_5608(Current, loc1, arg2, arg3));
		}
		RTHOOK(8);
		switch ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 16L))) {
			case 0L:
				RTHOOK(9);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 48U)));
				break;
			case 1L:
				RTHOOK(10);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 49U)));
				break;
			case 2L:
				RTHOOK(11);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 50U)));
				break;
			case 3L:
				RTHOOK(12);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 51U)));
				break;
			case 4L:
				RTHOOK(13);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 52U)));
				break;
			case 5L:
				RTHOOK(14);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 53U)));
				break;
			case 6L:
				RTHOOK(15);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 54U)));
				break;
			case 7L:
				RTHOOK(16);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 55U)));
				break;
			case 8L:
				RTHOOK(17);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 56U)));
				break;
			case 9L:
				RTHOOK(18);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 57U)));
				break;
			case 10L:
				RTHOOK(19);
				if (arg3) {
					RTHOOK(20);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 65U)));
				} else {
					RTHOOK(21);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 97U)));
				}
				break;
			case 11L:
				RTHOOK(22);
				if (arg3) {
					RTHOOK(23);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 66U)));
				} else {
					RTHOOK(24);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 98U)));
				}
				break;
			case 12L:
				RTHOOK(25);
				if (arg3) {
					RTHOOK(26);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 67U)));
				} else {
					RTHOOK(27);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 99U)));
				}
				break;
			case 13L:
				RTHOOK(28);
				if (arg3) {
					RTHOOK(29);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 68U)));
				} else {
					RTHOOK(30);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 100U)));
				}
				break;
			case 14L:
				RTHOOK(31);
				if (arg3) {
					RTHOOK(32);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 69U)));
				} else {
					RTHOOK(33);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 101U)));
				}
				break;
			case 15L:
				RTHOOK(34);
				if (arg3) {
					RTHOOK(35);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 70U)));
				} else {
					RTHOOK(36);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R7245[Dtype(RTCW(arg2))-1027])(arg2, ((EIF_NATURAL_32) 102U)));
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {KL_INTEGER_ROUTINES}.div */
EIF_INTEGER_32 F292_5609 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("div", 291, Current, 0, 2, 3704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("overflow", EX_PRE);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr1)));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			tb1 = (EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) -1L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * arg2) + (nstcall = 0, F292_5610(Current, arg1, arg2))) == arg1)) {
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

/* {KL_INTEGER_ROUTINES}.mod */
EIF_INTEGER_32 F292_5610 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("mod", 291, Current, 0, 2, 3705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition1", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr1)));
		if ((EIF_BOOLEAN)(arg2 != ti4_1)) {
			ti4_1 = eif_abs_int32 (Result);
			ti4_2 = eif_abs_int32 (arg2);
			tb1 = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition2", EX_POST);
		tb1 = '\01';
		tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr1)));
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			ti4_1 = eif_abs_int32 (Result);
			tr1 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
			ti4_2 = RTOUCB(EIF_INTEGER_32,313,(nstcall = 1, F226_4573), (RTCW(tr1)));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("iso_c99", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = Result;
			ti4_1 = (nstcall = 1, F948_7725(RTCW(tr1)));
			tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = arg1;
			ti4_2 = (nstcall = 1, F948_7725(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {KL_INTEGER_ROUTINES}.power */
EIF_INTEGER_32 F292_5611 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("power", 291, Current, 0, 2, 3687);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) arg1;
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(7);
				if ((nstcall = 0, F292_5618(Current, arg2))) {
					RTHOOK(8);
					Result = (nstcall = 0, F292_5611(Current, arg1, (EIF_INTEGER_32) (arg2 / ((EIF_INTEGER_32) 2L))));
					RTHOOK(9);
					Result *= Result;
				} else {
					RTHOOK(10);
					Result = (nstcall = 0, F292_5611(Current, arg1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * arg1);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("zero_power_n", EX_POST);
		if ((!((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L)))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("x_power_0", EX_POST);
		if ((!((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("recursive_definition", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (arg1 * (nstcall = 0, F292_5611(Current, arg1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))))));
		}
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

/* {KL_INTEGER_ROUTINES}.bit_and */
EIF_INTEGER_32 F292_5612 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("bit_and", 291, Current, 0, 2, 3688);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_and(arg1,arg2);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.bit_or */
EIF_INTEGER_32 F292_5613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("bit_or", 291, Current, 0, 2, 3689);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_or(arg1,arg2);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.bit_xor */
EIF_INTEGER_32 F292_5614 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("bit_xor", 291, Current, 0, 2, 3690);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_xor(arg1,arg2);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.bit_not */
EIF_INTEGER_32 F292_5615 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("bit_not", 291, Current, 0, 1, 3691);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_not(arg1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.bit_shift_left */
EIF_INTEGER_32 F292_5616 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("bit_shift_left", 291, Current, 0, 2, 3692);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thirty_two_bit_shift", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg2) && (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 32L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = eif_bit_shift_left(arg1,arg2);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.bit_shift_right */
EIF_INTEGER_32 F292_5617 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("bit_shift_right", 291, Current, 0, 2, 3693);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thirty_two_bit_shift", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg2) && (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 32L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = eif_bit_shift_right(arg1,arg2);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_INTEGER_ROUTINES}.is_even */
EIF_BOOLEAN F292_5618 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_even", 291, Current, 0, 1, 3694);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)))) {
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

void EIF_Minit226 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
