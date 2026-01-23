/*
 * Code for class INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in190.h"
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

/* {INTERNAL}.is_instance_of */
EIF_BOOLEAN F219_4324 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_instance_of", 218, Current, 0, 2, 2564);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4292(Current, ti4_1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_of */
EIF_REFERENCE F219_4325 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("type_of", 218, Current, 0, 1, 2565);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1_5(arg1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = RTLNTY2(eif_new_type(65534, 0x00), 0x00);
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
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

/* {INTERNAL}.is_special */
EIF_BOOLEAN F219_4326 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_special", 218, Current, 0, 1, 2566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4301(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_tuple */
EIF_BOOLEAN F219_4327 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_tuple", 218, Current, 1, 1, 2567);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,943,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_transient */
EIF_BOOLEAN F219_4328 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_transient", 218, Current, 0, 2, 2568);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4304(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_expanded */
EIF_BOOLEAN F219_4329 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_expanded", 218, Current, 0, 2, 2569);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4305(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.class_name */
EIF_REFERENCE F219_4330 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("class_name", 218, Current, 0, 1, 2570);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_4(arg1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name */
EIF_REFERENCE F219_4331 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("type_name", 218, Current, 0, 1, 2571);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr2 = RTCCL(arg1);
	tr2 = (nstcall = 0, F219_4332(Current, tr2));
	tr1 = RTLNS(eif_new_type(44, 0x00).id, 44, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F45_1814(RTCW(tr1), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name_32 */
EIF_REFERENCE F219_4332 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("type_name_32", 218, Current, 0, 1, 2572);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_5(arg1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr1))-912])(tr1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.dynamic_type */
EIF_INTEGER_32 F219_4333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("dynamic_type", 218, Current, 0, 1, 2573);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(58,(nstcall = 0, F219_4385), (Current)))+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.generic_count */
EIF_INTEGER_32 F219_4334 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_count", 218, Current, 0, 1, 2574);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti4_1 = (nstcall = 1, F217_4229(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_dynamic_type */
EIF_INTEGER_32 F219_4335 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_dynamic_type", 218, Current, 0, 2, 2575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("obj_generic", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F219_4334(Current, tr1)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) (arg2 <= (nstcall = 0, F219_4334(Current, tr1)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti4_1 = (nstcall = 1, F217_4230(RTCW(tr1), arg2));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.field */
EIF_REFERENCE F219_4336 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("field", 218, Current, 0, 2, 2576);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F219_4326(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = (nstcall = 1, F217_4231(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reference_field */
EIF_REFERENCE F219_4337 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("reference_field", 218, Current, 0, 2, 2577);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F219_4326(Current, tr1)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_type", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(7);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = (nstcall = 1, F217_4232(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_name */
EIF_REFERENCE F219_4338 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("field_name", 218, Current, 0, 2, 2578);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F219_4326(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4315(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
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

/* {INTERNAL}.field_offset */
EIF_INTEGER_32 F219_4339 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_offset", 218, Current, 0, 2, 2579);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F219_4326(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti4_1 = (nstcall = 1, F217_4246(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_type */
EIF_INTEGER_32 F219_4340 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("field_type", 218, Current, 0, 2, 2580);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4317(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("field_type_nonnegative", EX_POST);
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

/* {INTERNAL}.expanded_field_type */
EIF_REFERENCE F219_4341 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("expanded_field_type", 218, Current, 0, 2, 2581);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_expanded", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	ti4_1 = (nstcall = 0, F218_4318(Current, arg1, ti4_1));
	Result = (nstcall = 0, F218_4306(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
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

/* {INTERNAL}.character_8_field */
EIF_CHARACTER_8 F219_4342 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_8_field", 218, Current, 0, 2, 2582);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tc1 = (nstcall = 1, F217_4252(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_field */
EIF_CHARACTER_8 F219_4343 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_field", 218, Current, 0, 2, 2583);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tc1 = (nstcall = 1, F217_4252(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_32_field */
EIF_CHARACTER_32 F219_4344 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_32_field", 218, Current, 0, 2, 2584);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tw1 = (nstcall = 1, F217_4253(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.boolean_field */
EIF_BOOLEAN F219_4345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("boolean_field", 218, Current, 0, 2, 2585);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tb1 = (nstcall = 1, F217_4254(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_8_field */
EIF_NATURAL_8 F219_4346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_8_field", 218, Current, 0, 2, 2586);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tu1_1 = (nstcall = 1, F217_4255(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_16_field */
EIF_NATURAL_16 F219_4347 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_16_field", 218, Current, 0, 2, 2587);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tu2_1 = (nstcall = 1, F217_4256(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_32_field */
EIF_NATURAL_32 F219_4348 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_32_field", 218, Current, 0, 2, 2588);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tu4_1 = (nstcall = 1, F217_4257(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_64_field */
EIF_NATURAL_64 F219_4349 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_64_field", 218, Current, 0, 2, 2589);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tu8_1 = (nstcall = 1, F217_4258(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_8_field */
EIF_INTEGER_8 F219_4350 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_8_field", 218, Current, 0, 2, 2590);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti1_1 = (nstcall = 1, F217_4259(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_16_field */
EIF_INTEGER_16 F219_4351 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_16_field", 218, Current, 0, 2, 2591);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti2_1 = (nstcall = 1, F217_4260(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_field */
EIF_INTEGER_32 F219_4352 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_field", 218, Current, 0, 2, 2592);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti4_1 = (nstcall = 1, F217_4261(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_32_field */
EIF_INTEGER_32 F219_4353 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_32_field", 218, Current, 0, 2, 2593);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti4_1 = (nstcall = 1, F217_4261(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_64_field */
EIF_INTEGER_64 F219_4354 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_64_field", 218, Current, 0, 2, 2594);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti8_1 = (nstcall = 1, F217_4262(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_32_field */
EIF_REAL_32 F219_4355 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_32_field", 218, Current, 0, 2, 2595);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr4_1 = (nstcall = 1, F217_4263(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_field */
EIF_REAL_32 F219_4356 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_field", 218, Current, 0, 2, 2596);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr4_1 = (nstcall = 1, F217_4263(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.pointer_field */
EIF_POINTER F219_4357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("pointer_field", 218, Current, 0, 2, 2597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tp1 = (nstcall = 1, F217_4264(RTCW(tr1), arg1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_64_field */
EIF_REAL_64 F219_4358 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_64_field", 218, Current, 0, 2, 2598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr8_1 = (nstcall = 1, F217_4265(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.double_field */
EIF_REAL_64 F219_4359 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("double_field", 218, Current, 0, 2, 2599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr8_1 = (nstcall = 1, F217_4265(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.set_reference_field */
void F219_4360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("set_reference_field", 218, Current, 0, 3, 2600);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		tr1 = RTCCL(arg2);
		ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
		ti4_1 = (nstcall = 0, F218_4318(Current, arg1, ti4_1));
		if ((nstcall = 0, F218_4303(Current, ti4_1))) {
			tb1 = (EIF_BOOLEAN)(arg3 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
			tr1 = RTCCL(arg2);
			ti4_2 = (nstcall = 0, F219_4333(Current, tr1));
			ti4_2 = (nstcall = 0, F218_4318(Current, arg1, ti4_2));
			tb1 = (nstcall = 0, F218_4293(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(8);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg3);
	(nstcall = 1, F217_4266(RTCW(tr1), arg1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_64_field */
void F219_4361 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_64_field", 218, Current, 0, 3, 2601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4267(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_double_field */
void F219_4362 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_double_field", 218, Current, 0, 3, 2602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4267(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_8_field */
void F219_4363 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_8_field", 218, Current, 0, 3, 2603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4269(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_field */
void F219_4364 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_field", 218, Current, 0, 3, 2604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4269(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_32_field */
void F219_4365 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_32_field", 218, Current, 0, 3, 2605);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4271(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_boolean_field */
void F219_4366 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_boolean_field", 218, Current, 0, 3, 2606);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4272(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_8_field */
void F219_4367 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_8_field", 218, Current, 0, 3, 2607);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4273(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_16_field */
void F219_4368 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_16_field", 218, Current, 0, 3, 2608);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4274(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_32_field */
void F219_4369 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_32_field", 218, Current, 0, 3, 2609);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4275(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_64_field */
void F219_4370 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_64_field", 218, Current, 0, 3, 2610);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4276(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_8_field */
void F219_4371 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_8_field", 218, Current, 0, 3, 2611);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4277(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_16_field */
void F219_4372 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_16_field", 218, Current, 0, 3, 2612);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4278(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_field */
void F219_4373 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_field", 218, Current, 0, 3, 2613);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4280(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_32_field */
void F219_4374 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_32_field", 218, Current, 0, 3, 2614);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4280(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_64_field */
void F219_4375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_64_field", 218, Current, 0, 3, 2615);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4281(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_32_field */
void F219_4376 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_32_field", 218, Current, 0, 3, 2616);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4282(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_field */
void F219_4377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_field", 218, Current, 0, 3, 2617);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4282(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_pointer_field */
void F219_4378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_pointer_field", 218, Current, 0, 3, 2618);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F219_4379(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F219_4340(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	(nstcall = 1, F217_4284(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.field_count */
EIF_INTEGER_32 F219_4379 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_count", 218, Current, 0, 1, 2619);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(58,(nstcall = 0, F219_4385), (Current));
	ti4_1 = (nstcall = 1, F217_4285(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.persistent_field_count */
EIF_INTEGER_32 F219_4380 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("persistent_field_count", 218, Current, 0, 1, 2620);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F219_4333(Current, tr1));
	Result = (nstcall = 0, F218_4321(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("count_positive", EX_POST);
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

/* {INTERNAL}.physical_size */
EIF_INTEGER_32 F219_4381 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("physical_size", 218, Current, 1, 1, 2621);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F43_1725(Current, arg1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size */
EIF_INTEGER_32 F219_4382 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("deep_physical_size", 218, Current, 1, 1, 2622);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc1 = (nstcall = 0, F219_4384(Current, tr1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.physical_size_64 */
EIF_NATURAL_64 F219_4383 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("physical_size_64", 218, Current, 0, 1, 2623);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F43_1725(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size_64 */
EIF_NATURAL_64 F219_4384 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 218, Current, 2, 1, 2624);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(115, 0x01).id, 115, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F114_2670(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F114_2674(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(5);
	(nstcall = 1, F114_2678(RTCW(loc1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5313[Dtype(loc2)-610])(loc2));
		for (;;) {
			RTHOOK(8);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5324[Dtype(loc2)-610])(loc2));
			if (tb1) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5346[Dtype(loc2)-610])(loc2));
			tr2 = RTCCL(tr1);
			Result += (nstcall = 0, F219_4383(Current, tr2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5326[Dtype(loc2)-610])(loc2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reflected_object */
static EIF_REFERENCE F219_4385_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(58)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reflected_object", 218, Current, 0, 0, 2625);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	(nstcall = -1, F222_4439(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F219_4385 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(58,F219_4385_body,(Current));
}

void EIF_Minit190 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
