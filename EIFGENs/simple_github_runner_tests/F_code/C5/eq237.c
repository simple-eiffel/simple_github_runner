/*
 * Code for class EQA_TEST_OUTPUT_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq237.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_OUTPUT_BUFFER}.make */
void F693_6375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 692, Current, 0, 1, 5928);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_size_greater_one", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("test_output_buffer",18,1570355058);
	(nstcall = 0, F692_6311(Current, tr1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1027, 1).id);
	(nstcall = -1, F1026_8856(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer_size */
EIF_INTEGER_32 F693_6376 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.count */
EIF_INTEGER_32 F693_6377 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("count", 692, Current, 0, 0, 5930);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {EQA_TEST_OUTPUT_BUFFER}.content */
EIF_REFERENCE F693_6378 (EIF_REFERENCE Current)
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
	
	RTEAA("content", 692, Current, 0, 0, 5931);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_truncated", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F693_6385(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(eif_new_type(1027, 1).id);
	(nstcall = -1, F1026_8858(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_5_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.leading_content */
EIF_REFERENCE F693_6379 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("leading_content", 692, Current, 1, 0, 5932);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("truncated", EX_PRE);
		RTTE((nstcall = 0, F693_6385(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F693_6383(Current));
	RTHOOK(3);
	Result = RTLNSMART(eif_new_type(1027, 1).id);
	(nstcall = -1, F1026_8856(RTCW(Result), loc1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(tr1))-1026])(tr1, ((EIF_INTEGER_32) 1L), loc1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.closing_content */
EIF_REFERENCE F693_6380 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("closing_content", 692, Current, 1, 0, 5933);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("truncated", EX_PRE);
		RTTE((nstcall = 0, F693_6385(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F693_6383(Current));
	RTHOOK(3);
	Result = RTLNSMART(eif_new_type(1027, 1).id);
	(nstcall = -1, F1026_8856(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) - loc1)));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(tr1))-1026])(tr1, ti4_1, ti4_2));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr2));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) > (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(tr1))-1026])(tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) - ((EIF_INTEGER_32) 1L))));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.formatted_content */
EIF_REFERENCE F693_6381 (EIF_REFERENCE Current)
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
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("formatted_content", 692, Current, 0, 0, 5934);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F693_6385(Current))) {
		RTHOOK(2);
		Result = RTLNSMART(eif_new_type(1027, 1).id);
		(nstcall = -1, F1026_8856(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 100L))));
		RTHOOK(3);
		tr1 = (nstcall = 0, F693_6379(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
		RTHOOK(4);
		tr1 = RTOUCR(143,(nstcall = 0, F693_6406), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
		RTHOOK(5);
		tr1 = (nstcall = 0, F693_6380(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
	} else {
		RTHOOK(6);
		Result = (nstcall = 0, F693_6378(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer */
EIF_REFERENCE F693_6382 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.split_position */
EIF_INTEGER_32 F693_6383 (EIF_REFERENCE Current)
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
	
	RTEAA("split_position", 692, Current, 0, 0, 5936);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.truncated_start_position */
EIF_INTEGER_32 F693_6384 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.is_truncated */
EIF_BOOLEAN F693_6385 (EIF_REFERENCE Current)
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
	
	RTEAA("is_truncated", 692, Current, 0, 0, 5938);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.exists */
EIF_BOOLEAN F693_6386 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.readable */
EIF_BOOLEAN F693_6387 (EIF_REFERENCE Current)
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
	
	RTEAA("readable", 692, Current, 0, 0, 5940);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F662_6023(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.wipe_out */
void F693_6388 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 692, Current, 0, 0, 5941);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R7273[Dtype(RTCW(tr1))-1027])(tr1));
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_string */
void F693_6389 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("put_string", 692, Current, 8, 1, 5942);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F693_6383(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(tr1))-1027])(tr1, tr2));
		}
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(15);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			RTHOOK(17);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F1023_8779(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7320[Dtype(RTCW(tr1))-1027])(tr1, loc7, ti4_1, ti4_2));
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc4 + loc6), ti4_1));
			tr2 = (nstcall = 1, F1023_8779(RTCW(tr1)));
			loc8 = (EIF_REFERENCE) tr2;
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7320[Dtype(RTCW(tr1))-1027])(tr1, loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, loc4, ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7320[Dtype(RTCW(tr1))-1027])(tr1, tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(25);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_)) += loc3;
			}
		}
	} else {
		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7334[Dtype(RTCW(tr1))-1027])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putstring */
void F693_6390 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("putstring", 692, Current, 8, 1, 5910);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F693_6383(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(tr1))-1027])(tr1, tr2));
		}
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(15);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			RTHOOK(17);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F1023_8779(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7320[Dtype(RTCW(tr1))-1027])(tr1, loc7, ti4_1, ti4_2));
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, (EIF_INTEGER_32) (loc4 + loc6), ti4_1));
			tr2 = (nstcall = 1, F1023_8779(RTCW(tr1)));
			loc8 = (EIF_REFERENCE) tr2;
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7320[Dtype(RTCW(tr1))-1027])(tr1, loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, loc4, ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7320[Dtype(RTCW(tr1))-1027])(tr1, tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(25);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_)) += loc3;
			}
		}
	} else {
		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7334[Dtype(RTCW(tr1))-1027])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_character */
void F693_6391 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_character", 692, Current, 2, 1, 5911);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F693_6383(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(7);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ti4_1)) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_))++;
			}
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R5342[Dtype(RTCW(tr1))-723])(tr1, (EIF_REFERENCE) &arg1, (EIF_REFERENCE) &loc2));
	} else {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(tr1))-1027])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putchar */
void F693_6392 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("putchar", 692, Current, 2, 1, 5912);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F693_6383(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(7);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ti4_1)) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_))++;
			}
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R5342[Dtype(RTCW(tr1))-723])(tr1, (EIF_REFERENCE) &arg1, (EIF_REFERENCE) &loc2));
	} else {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(tr1))-1027])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_boolean */
void F693_6393 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("put_boolean", 692, Current, 0, 1, 5913);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTAOMS(6392,2);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTCOMS(tr1,6392,0,"True",4,1416787301);
	} else {
		RTHOOK(4);
		RTCOMS(tr2,6392,1,"False",5,1635034981);
		tr1 = tr2;
	}
	(nstcall = 0, F693_6389(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putbool */
void F693_6394 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("putbool", 692, Current, 0, 1, 5914);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTAOMS(6393,2);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTCOMS(tr1,6393,0,"True",4,1416787301);
	} else {
		RTHOOK(4);
		RTCOMS(tr2,6393,1,"False",5,1635034981);
		tr1 = tr2;
	}
	(nstcall = 0, F693_6389(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_new_line */
void F693_6395 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_new_line", 692, Current, 0, 0, 5915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F693_6391(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.new_line */
void F693_6396 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_line", 692, Current, 0, 0, 5916);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F693_6391(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_double */
void F693_6397 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("put_double", 692, Current, 1, 1, 5917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1028_8981(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F693_6389(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putdouble */
void F693_6398 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("putdouble", 692, Current, 1, 1, 5918);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1028_8981(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F693_6389(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_real */
void F693_6399 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("put_real", 692, Current, 1, 1, 5919);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1028_8980(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F693_6389(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putreal */
void F693_6400 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("putreal", 692, Current, 1, 1, 5920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1028_8980(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F693_6389(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.flush */
void F693_6401 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("flush", 692, Current, 0, 0, 5921);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F690_6089(Current)), label_1);
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

/* {EQA_TEST_OUTPUT_BUFFER}.dispose */
void F693_6402 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 692, Current, 0, 0, 5922);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.back */
void F693_6403 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("back", 692, Current, 0, 0, 5923);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F690_6062(Current)), label_1);
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

/* {EQA_TEST_OUTPUT_BUFFER}.end_of_file */
EIF_BOOLEAN F693_6404 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("end_of_file", 692, Current, 0, 0, 5924);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F690_6089(Current)), label_1);
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
	return (EIF_BOOLEAN) 0;
}

/* {EQA_TEST_OUTPUT_BUFFER}.file_close */
void F693_6405 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_close", 692, Current, 0, 1, 5925);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.m_truncated */

EIF_REFERENCE F693_6406 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (143,RTMS_EX_H("\012\012---------------------------\012Truncated section\012---------------------------\012\012",77,1121374730));
}

/* {EQA_TEST_OUTPUT_BUFFER}._invariant */
void F693_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 236, Current, 0, 0);
	RTIT("buffer_capacity_at_least_buffer_size", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7186[Dtype(RTCW(tr1))-1026])(tr1));
	if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_count_not_greater_buffer_size", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_truncated_start_position", Current);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) <= ti4_1)) {
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) > (nstcall = 0, F693_6383(Current)));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("truncated_implies_buffer_full", Current);
	tb1 = '\01';
	if ((nstcall = 0, F693_6385(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit237 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
