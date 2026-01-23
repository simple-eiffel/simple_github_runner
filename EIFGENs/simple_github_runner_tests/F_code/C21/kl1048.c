/*
 * Code for class KL_SPECIAL_ROUTINES [INTEGER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1048.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_SPECIAL_ROUTINES}.make */
EIF_REFERENCE F6_1286 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make", 5, Current, 0, 1, 144);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,858,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNSP2(typres0.id,0,arg1,sizeof(EIF_INTEGER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(Result) = 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = (nstcall = 1, F859_7205(Result));
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

/* {KL_SPECIAL_ROUTINES}.make_filled */
EIF_REFERENCE F6_1287 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("make_filled", 5, Current, 1, 2, 145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,858,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		Result = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_INTEGER_8), EIF_TRUE);
	}
	(nstcall = -1, F859_7192(RTCW(Result), arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = (nstcall = 1, F859_7205(Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F859_7204(Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("filled", EX_POST);
		tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tr2 = (nstcall = 1, F948_7750(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb2) break;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(Result), ti4_2));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr1), ti1_1, arg1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
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

/* {KL_SPECIAL_ROUTINES}.make_from_array */
EIF_REFERENCE F6_1288 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("make_from_array", 5, Current, 2, 1, 146);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,295,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = RTLNS(typres0.id, 295, _OBJSIZ_0_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F1_29(RTCW(loc1)));
	RTHOOK(3);
	tr1 = (nstcall = 1, F296_5619(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L)));
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F859_7204(Result));
		ti4_2 = (nstcall = 1, F738_6465(RTCW(arg1)));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_items", EX_POST);
		ti4_1 = (nstcall = 1, F859_7204(Result));
		tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tr2 = (nstcall = 1, F948_7750(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
		tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc2)-280])(loc2));
			if (tb2) break;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc2)-280])(loc2));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(Result), ti4_2));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc2)-280])(loc2));
			ti4_3 = ti4_2;
			ti1_2 = (nstcall = 1, F738_6458(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ti4_3)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr1), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc2)-280])(loc2));
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

/* {KL_SPECIAL_ROUTINES}.to_special */
EIF_REFERENCE F6_1289 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("to_special", 5, Current, 1, 1, 147);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F859_7204(Result));
		ti4_2 = (nstcall = 1, F738_6465(RTCW(arg1)));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_items", EX_POST);
		ti4_1 = (nstcall = 1, F738_6465(RTCW(arg1)));
		tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tr2 = (nstcall = 1, F948_7750(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
		tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb2) break;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(Result), ti4_2));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_2 = (nstcall = 1, F738_6458(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ti4_3)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr1), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
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

/* {KL_SPECIAL_ROUTINES}.has */
EIF_BOOLEAN F6_1290 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_8 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has", 5, Current, 1, 2, 148);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F859_7204(arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (Result || (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(4);
		ti1_1 = (nstcall = 1, F859_7194(RTCW(arg1), loc1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == arg2);
		RTHOOK(5);
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_SPECIAL_ROUTINES}.force */
void F6_1291 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_8 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("force", 5, Current, 0, 3, 149);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, F859_7205(arg1));
		RTTE((EIF_BOOLEAN) (arg3 < ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_full", EX_PRE);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, F859_7204(arg1));
		if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
			ti4_1 = (nstcall = 1, F859_7204(arg1));
			ti4_2 = (nstcall = 1, F859_7205(arg1));
			tb1 = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F859_7204(arg1));
	if ((EIF_BOOLEAN) (arg3 < ti4_1)) {
		RTHOOK(6);
		(nstcall = 1, F859_7209(RTCW(arg1), arg2, arg3));
	} else {
		RTHOOK(7);
		ti4_1 = (nstcall = 1, F859_7204(arg1));
		(nstcall = 1, F859_7213(RTCW(arg1), arg2, ti4_1, arg3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {KL_SPECIAL_ROUTINES}.keep_head */
void F6_1292 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("keep_head", 5, Current, 1, 3, 150);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("less_than_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= arg3), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_old_count", EX_PRE);
		ti4_1 = (nstcall = 1, F859_7205(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, F1_14(arg1));
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	(nstcall = 1, F859_7220(RTCW(arg1), arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("kept", EX_POST);
		tr3 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr3 = ((EIF_INTEGER_32) 0L);
		tr4 = (nstcall = 1, F948_7750(RTCW(tr3), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		tr3 = (nstcall = 1, F699_6408(RTCW(tr4)));
		loc1 = (EIF_REFERENCE) tr3;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb2) break;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(arg1), ti4_2));
			RTCO(tr2);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_2 = ti4_1;
			ti1_2 = (nstcall = 1, F859_7194(RTCV(tr1), ti4_2));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr3 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr3), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
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
}

/* {KL_SPECIAL_ROUTINES}.resize */
EIF_REFERENCE F6_1293 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLIU(9);
	
	RTEAA("resize", 5, Current, 1, 2, 151);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = (nstcall = 1, F859_7205(arg1));
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, F1_14(arg1));
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 1, F859_7204(arg1));
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	Result = (nstcall = 0, F6_1294(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_2 = (nstcall = 1, F859_7205(Result));
		if ((EIF_BOOLEAN)(ti4_2 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("preserved", EX_POST);
		RTCO(tr3);
		ti4_2 = eif_min_int32 (arg2,ti4_1);
		tr4 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr4 = ((EIF_INTEGER_32) 0L);
		tr5 = (nstcall = 1, F948_7750(RTCW(tr4), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
		tr4 = (nstcall = 1, F699_6408(RTCW(tr5)));
		loc1 = (EIF_REFERENCE) tr4;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb2) break;
			RTHOOK(7);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(Result), ti4_3));
			RTCO(tr2);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_2 = (nstcall = 1, F859_7194(RTCV(tr1), ti4_3));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr4 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr4), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
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

/* {KL_SPECIAL_ROUTINES}.aliased_resized_area */
EIF_REFERENCE F6_1294 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLR(7,tr5);
	RTLR(8,Current);
	RTLIU(9);
	
	RTEAA("aliased_resized_area", 5, Current, 1, 2, 152);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = (nstcall = 1, F859_7205(arg1));
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, F1_14(arg1));
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 1, F859_7204(arg1));
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 1, F859_7205(arg1));
	if ((EIF_BOOLEAN) (arg2 > ti4_2)) {
		RTHOOK(4);
		tr4 = (nstcall = 1, F859_7226(arg1, arg2));
		Result = (EIF_REFERENCE) tr4;
	} else {
		RTHOOK(5);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("count_set", EX_POST);
		ti4_2 = (nstcall = 1, F859_7205(Result));
		if ((EIF_BOOLEAN)(ti4_2 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("preserved", EX_POST);
		RTCO(tr3);
		ti4_2 = eif_min_int32 (arg2,ti4_1);
		tr4 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr4 = ((EIF_INTEGER_32) 0L);
		tr5 = (nstcall = 1, F948_7750(RTCW(tr4), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
		tr4 = (nstcall = 1, F699_6408(RTCW(tr5)));
		loc1 = (EIF_REFERENCE) tr4;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb2) break;
			RTHOOK(9);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(Result), ti4_3));
			RTCO(tr2);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_2 = (nstcall = 1, F859_7194(RTCV(tr1), ti4_3));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr4 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr4), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
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

/* {KL_SPECIAL_ROUTINES}.aliased_resized_area_with_default */
EIF_REFERENCE F6_1295 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_8 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLR(7,tr5);
	RTLR(8,Current);
	RTLIU(9);
	
	RTEAA("aliased_resized_area_with_default", 5, Current, 1, 3, 153);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = (nstcall = 1, F859_7205(arg1));
		RTTE((EIF_BOOLEAN) (arg3 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, F1_14(arg1));
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 1, F859_7204(arg1));
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 1, F859_7205(arg1));
	if ((EIF_BOOLEAN) (arg3 > ti4_2)) {
		RTHOOK(4);
		tr4 = (nstcall = 1, F859_7227(RTCW(arg1), arg2, arg3));
		Result = (EIF_REFERENCE) tr4;
	} else {
		RTHOOK(5);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_2 = (nstcall = 1, F859_7204(Result));
		if ((EIF_BOOLEAN)(ti4_2 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("new_capacity", EX_POST);
		ti4_2 = (nstcall = 1, F859_7205(Result));
		if ((EIF_BOOLEAN)(ti4_2 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("preserved", EX_POST);
		RTCO(tr3);
		ti4_2 = eif_min_int32 (arg3,ti4_1);
		tr4 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr4 = ((EIF_INTEGER_32) 0L);
		tr5 = (nstcall = 1, F948_7750(RTCW(tr4), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
		tr4 = (nstcall = 1, F699_6408(RTCW(tr5)));
		loc1 = (EIF_REFERENCE) tr4;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
			if (tb2) break;
			RTHOOK(10);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_1 = (nstcall = 1, F859_7194(RTCW(Result), ti4_3));
			RTCO(tr2);
			ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
			ti4_3 = ti4_2;
			ti1_2 = (nstcall = 1, F859_7194(RTCV(tr1), ti4_3));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1043,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr4 = RTLNS(typres0.id, 1043, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1044_9333(RTCW(tr4), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
		}
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

void EIF_Minit1048 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
