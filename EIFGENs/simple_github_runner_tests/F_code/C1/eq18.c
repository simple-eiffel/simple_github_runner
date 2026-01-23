/*
 * Code for class EQA_FILE_SYSTEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq18.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_FILE_SYSTEM}.make */
void F21_1550 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make", 20, Current, 0, 1, 410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_FILE_SYSTEM}.asserter */
EIF_REFERENCE F21_1551 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_FILE_SYSTEM}.copy_file */
void F21_1552 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	struct eif_ex_25 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc2.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(44, 0x00).id);
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("copy_file", 20, Current, 2, 4, 412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("destination_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("environment_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("source_is_closed", EX_PRE);
		tb1 = (nstcall = 1, F690_6089(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("destination_is_closed", EX_PRE);
		tb1 = (nstcall = 1, F690_6089(RTCW(arg3)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	(nstcall = 1, F690_6100(RTCW(arg1)));
	RTHOOK(7);
	(nstcall = 1, F690_6101(RTCW(arg3)));
	for (;;) {
		RTHOOK(8);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(arg1))-690])(arg1));
		if (tb1) break;
		RTHOOK(9);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4572[Dtype(RTCW(arg1))-241])(arg1));
		RTHOOK(10);
		if (arg4) {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr1 = (nstcall = 1, F46_1887(RTCW(arg2), tr1));
			tr1 = (nstcall = 1, F45_1814(RTCW(loc2), tr1));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			loc1 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(13);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(arg1))-690])(arg1));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(14);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[Dtype(RTCW(arg3))-241])(arg3, loc1));
			RTHOOK(15);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4525[Dtype(RTCW(arg3))-241])(arg3));
		} else {
			RTHOOK(16);
			tb2 = (nstcall = 1, F614_5999(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(17);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[Dtype(RTCW(arg3))-241])(arg3, loc1));
			}
		}
	}
	RTHOOK(18);
	(nstcall = 1, F690_6117(RTCW(arg1)));
	RTHOOK(19);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5494[Dtype(RTCW(arg3))-690])(arg3));
	RTHOOK(20);
	(nstcall = 1, F690_6117(RTCW(arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
}

/* {EQA_FILE_SYSTEM}.build_path */
EIF_REFERENCE F21_1553 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("build_path", 20, Current, 0, 2, 413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dir_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_dir_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F21_1560(Current, arg2, arg1, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_FILE_SYSTEM}.build_path_from_key */
EIF_REFERENCE F21_1554 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,arg2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("build_path_from_key", 20, Current, 1, 2, 414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTHOOK(4);
	tr1 = (nstcall = 1, F46_1877(RTCW(loc1), arg1, *(EIF_REFERENCE *)(Current)));
	Result = (nstcall = 0, F21_1560(Current, arg2, tr1, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_FILE_SYSTEM}.build_source_path */
EIF_REFERENCE F21_1555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("build_source_path", 20, Current, 0, 1, 415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(36,(nstcall = 0, F47_1911), (Current));
	Result = (nstcall = 0, F21_1554(Current, tr1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {EQA_FILE_SYSTEM}.build_target_path */
EIF_REFERENCE F21_1556 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("build_target_path", 20, Current, 0, 1, 416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(35,(nstcall = 0, F47_1910), (Current));
	Result = (nstcall = 0, F21_1554(Current, tr1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {EQA_FILE_SYSTEM}.has_same_content_as_string */
EIF_BOOLEAN F21_1557 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("has_same_content_as_string", 20, Current, 4, 2, 417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F12_1351(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F21_1556(Current, arg1));
	RTHOOK(5);
	loc2 = RTLNS(eif_new_type(691, 0x01).id, 691, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F692_6311(RTCW(loc2), loc1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("file_exists",11,1654467699);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4513[Dtype(RTCW(loc2))-241])(loc2));
	(nstcall = 0, F21_1562(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("file_readable",13,1781299557);
	tb1 = (nstcall = 1, F690_6068(RTCW(loc2)));
	(nstcall = 0, F21_1562(Current, tr1, tb1));
	RTHOOK(8);
	(nstcall = 1, F690_6100(RTCW(loc2)));
	RTHOOK(9);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O7308[Dtype(arg2)-1025]);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[Dtype(RTCW(loc2))-241])(loc2));
	for (;;) {
		RTHOOK(13);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc3 > loc4)) {
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(loc2))-690])(loc2));
			tb2 = tb3;
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(14);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg2))-723])(arg2, loc3));
		tc2 = *(EIF_CHARACTER_8 *)(RTCW(loc2) + O4496[Dtype(loc2)-237]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
		RTHOOK(15);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[Dtype(RTCW(loc2))-241])(loc2));
		RTHOOK(16);
		loc3++;
	}
	RTHOOK(17);
	if (Result) {
		RTHOOK(18);
		Result = '\0';
		if ((EIF_BOOLEAN) (loc3 > loc4)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(loc2))-690])(loc2));
			Result = tb2;
		}
	}
	RTHOOK(19);
	(nstcall = 1, F690_6117(RTCW(loc2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.has_same_content_as_path */
EIF_BOOLEAN F21_1558 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr1);
	RTLIU(8);
	
	RTEAA("has_same_content_as_path", 20, Current, 4, 2, 418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_first_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_first_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F12_1351(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_second_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_second_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F12_1351(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (nstcall = 0, F21_1556(Current, arg1));
	RTHOOK(6);
	loc2 = (nstcall = 0, F21_1556(Current, arg2));
	RTHOOK(7);
	loc3 = RTLNS(eif_new_type(691, 0x01).id, 691, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F692_6311(RTCW(loc3), loc1));
	RTHOOK(8);
	loc4 = RTLNS(eif_new_type(691, 0x01).id, 691, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F692_6311(RTCW(loc4), loc2));
	RTHOOK(9);
	tr1 = RTMS_EX_H("file1_exists",12,1549593459);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4513[Dtype(RTCW(loc3))-241])(loc3));
	(nstcall = 0, F21_1562(Current, tr1, tb1));
	RTHOOK(10);
	tr1 = RTMS_EX_H("file2_exists",12,1549823859);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4513[Dtype(RTCW(loc4))-241])(loc4));
	(nstcall = 0, F21_1562(Current, tr1, tb1));
	RTHOOK(11);
	tr1 = RTMS_EX_H("file1_readable",14,678492517);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[Dtype(RTCW(loc3))-241])(loc3));
	(nstcall = 0, F21_1562(Current, tr1, tb1));
	RTHOOK(12);
	tr1 = RTMS_EX_H("file2_readable",14,745628261);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[Dtype(RTCW(loc4))-241])(loc4));
	(nstcall = 0, F21_1562(Current, tr1, tb1));
	RTHOOK(13);
	(nstcall = 1, F690_6100(RTCW(loc3)));
	RTHOOK(14);
	(nstcall = 1, F690_6100(RTCW(loc4)));
	RTHOOK(15);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[Dtype(RTCW(loc3))-241])(loc3));
	RTHOOK(16);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[Dtype(RTCW(loc4))-241])(loc4));
	RTHOOK(17);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(18);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(loc3))-690])(loc3));
		if (!tb3) {
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(loc4))-690])(loc4));
			tb2 = tb3;
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(19);
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(loc3) + O4496[Dtype(loc3)-237]);
		tc2 = *(EIF_CHARACTER_8 *)(RTCW(loc4) + O4496[Dtype(loc4)-237]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[Dtype(RTCW(loc3))-241])(loc3));
		RTHOOK(21);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[Dtype(RTCW(loc4))-241])(loc4));
	}
	RTHOOK(22);
	if (Result) {
		RTHOOK(23);
		Result = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(loc3))-690])(loc3));
		if (tb2) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[Dtype(RTCW(loc4))-690])(loc4));
			Result = tb2;
		}
	}
	RTHOOK(24);
	(nstcall = 1, F690_6117(RTCW(loc3)));
	RTHOOK(25);
	(nstcall = 1, F690_6117(RTCW(loc4)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.executable_file_exists */
EIF_REFERENCE F21_1559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("executable_file_exists", 20, Current, 1, 1, 419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		loc1 = RTLNS(eif_new_type(690, 0x01).id, 690, _OBJSIZ_4_6_2_4_1_1_2_1_);
		(nstcall = -1, F690_6030(RTCW(loc1), arg1));
		RTHOOK(3);
		tb1 = (nstcall = 1, F690_6065(RTCW(loc1)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			tr1 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000",5,1769494816);
			tr2 = (nstcall = 1, F1023_8785(RTCW(arg1)));
			tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
			tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" not found",10,261004900)));
			tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tb1 = (nstcall = 1, F690_6072(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(6);
				tr1 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000",5,1769494816);
				tr2 = (nstcall = 1, F1023_8785(RTCW(arg1)));
				tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
				tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" not a plain file",17,1637487717)));
				tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				tb1 = (nstcall = 1, F690_6070(RTCW(loc1)));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(8);
					tr1 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000",5,1769494816);
					tr2 = (nstcall = 1, F1023_8785(RTCW(arg1)));
					tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
					tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" not executable",15,2067964005)));
					tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
					Result = (EIF_REFERENCE) tr1;
				}
			}
		}
	} else {
		RTHOOK(9);
		Result = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000(\000\000\000V\000\000\000o\000\000\000i\000\000\000d\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000)\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000f\000\000\000o\000\000\000u\000\000\000n\000\000\000d\000\000\000",31,1870857828);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.build_partial_path */
EIF_REFERENCE F21_1560 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("build_partial_path", 20, Current, 3, 3, 420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_prefix_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_strip_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_stip_not_too_large", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(arg1 != NULL)) {
				ti4_1 = (nstcall = 1, F12_1347(RTCW(arg1)));
				tb2 = (EIF_BOOLEAN) (arg3 <= ti4_1);
			}
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F912_7361(RTCW(loc3), arg2));
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F12_1347(RTCW(arg1)));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - arg3);
		RTHOOK(7);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, F12_1348(RTCW(arg1), loc1));
			tr1 = (nstcall = 1, F912_7388(RTCW(loc3), tr1));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			loc1++;
		}
	}
	RTHOOK(11);
	Result = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = (nstcall = 1, F912_7400(RTCW(loc3)));
	(nstcall = -1, F1030_9024(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_FILE_SYSTEM}.delete_directory_tree */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F21_1561 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEAA("delete_directory_tree", 20, Current, 2, 1, 421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
		(nstcall = -1, F245_5220(RTCW(tr1), arg1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F245_5251(RTCW(loc1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(5);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(7);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EQA_FILE_SYSTEM}.assert */
void F21_1562 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("assert", 20, Current, 0, 2, 422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F22_1565(RTCW(tr1), arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_FILE_SYSTEM}.source_directory_key */

EIF_REFERENCE F21_1563 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (131,RTMS32_EX_H("S\000\000\000O\000\000\000U\000\000\000R\000\000\000C\000\000\000E\000\000\000_\000\000\000D\000\000\000I\000\000\000R\000\000\000E\000\000\000C\000\000\000T\000\000\000O\000\000\000R\000\000\000Y\000\000\000",16,1000342105));
}

/* {EQA_FILE_SYSTEM}.target_directory_key */

EIF_REFERENCE F21_1564 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (132,RTMS32_EX_H("E\000\000\000Q\000\000\000A\000\000\000_\000\000\000T\000\000\000A\000\000\000R\000\000\000G\000\000\000E\000\000\000T\000\000\000_\000\000\000D\000\000\000I\000\000\000R\000\000\000E\000\000\000C\000\000\000T\000\000\000O\000\000\000R\000\000\000Y\000\000\000",20,47551833));
}

void EIF_Minit18 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
