/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt191.h"
#include "eif_macros.h"
#include "eif_eiffel.h"
#include "eif_debug.h"
#include "eif_internal.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F220_4398
static int inline_F220_4398 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F220_4398
#endif
#ifndef INLINE_F220_4399
static EIF_INTEGER_32 inline_F220_4399 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F220_4399
#endif
#ifndef INLINE_F220_4400
static EIF_NATURAL_32 inline_F220_4400 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F220_4400
#endif
#ifndef INLINE_F220_4403
static EIF_REFERENCE inline_F220_4403 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F220_4403
#endif
#ifndef INLINE_F220_4408
static EIF_INTEGER_32 inline_F220_4408 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4408
#endif
#ifndef INLINE_F220_4409
static EIF_INTEGER_32 inline_F220_4409 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4409
#endif
#ifndef INLINE_F220_4410
static EIF_INTEGER_32 inline_F220_4410 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4410
#endif
#ifndef INLINE_F220_4411
static EIF_INTEGER_32 inline_F220_4411 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4411
#endif
#ifndef INLINE_F220_4412
static EIF_INTEGER_32 inline_F220_4412 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4412
#endif
#ifndef INLINE_F220_4413
static EIF_INTEGER_32 inline_F220_4413 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4413
#endif
#ifndef INLINE_F220_4414
static EIF_INTEGER_32 inline_F220_4414 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4414
#endif
#ifndef INLINE_F220_4415
static EIF_INTEGER_32 inline_F220_4415 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4415
#endif
#ifndef INLINE_F220_4416
static EIF_INTEGER_32 inline_F220_4416 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4416
#endif
#ifndef INLINE_F220_4417
static EIF_INTEGER_32 inline_F220_4417 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4417
#endif
#ifndef INLINE_F220_4418
static EIF_INTEGER_32 inline_F220_4418 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4418
#endif
#ifndef INLINE_F220_4419
static EIF_INTEGER_32 inline_F220_4419 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4419
#endif
#ifndef INLINE_F220_4420
static EIF_INTEGER_32 inline_F220_4420 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4420
#endif
#ifndef INLINE_F220_4421
static EIF_INTEGER_32 inline_F220_4421 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4421
#endif
#ifndef INLINE_F220_4422
static EIF_INTEGER_32 inline_F220_4422 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_REF; 
	a_val.it_ref = (EIF_REFERENCE) &(arg4);
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4422
#endif
#ifndef INLINE_F220_4423
static EIF_INTEGER_32 inline_F220_4423 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_VOID; 
	a_val.it_ref = (char*) 0;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F220_4423
#endif
#ifndef INLINE_F220_4424
static void inline_F220_4424 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F220_4424
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_INTEGER_32 F220_4386 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("object_field_count", 219, Current, 0, 1, 2653);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(293,(nstcall = 0, F220_4427), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F222_4448(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(293,(nstcall = 0, F220_4427), (Current));
	ti4_1 = (nstcall = 1, F217_4285(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_REFERENCE F220_4387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("object_records", 219, Current, 4, 1, 2654);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc2 = (nstcall = 0, F220_4386(Current, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {816,0xFF01,860,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc3 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F817_6857(RTCW(loc3), loc2));
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tr1 = RTCCL(arg1);
			tr1 = (nstcall = 0, F220_4395(Current, loc1, tr1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(loc3))-610])(loc3, loc4));
			}
			RTHOOK(9);
			loc1++;
		}
		RTHOOK(10);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_is_expanded */
EIF_BOOLEAN F220_4388 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("object_is_expanded", 219, Current, 0, 1, 2655);
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
	Result = EIF_TEST ((nstcall = 0, F220_4398(Current, arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_INTEGER_32 F220_4389 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("field_index_at", 219, Current, 2, 2, 2656);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(293,(nstcall = 0, F220_4427), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F217_4285(RTCW(loc2)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F217_4246(RTCW(loc2), loc1));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(7);
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(8);
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_name_at */
EIF_REFERENCE F220_4390 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("field_name_at", 219, Current, 1, 2, 2657);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	loc1 = (nstcall = 0, F220_4389(Current, arg1, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTOUCR(293,(nstcall = 0, F220_4427), (Current));
		tr2 = RTCCL(arg2);
		(nstcall = 1, F222_4448(RTCW(tr1), tr2));
		RTHOOK(5);
		tr1 = RTOUCR(293,(nstcall = 0, F220_4427), (Current));
		tr2 = (nstcall = 1, F217_4245(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_at */
EIF_REFERENCE F220_4391 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("field_at", 219, Current, 1, 3, 2658);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F220_4393(Current, arg2));
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(979, 0x00).id, 979, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F43_1748(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 2L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F43_1746(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 12L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(973, 0x00).id, 973, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F43_1747(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 13L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(964, 0x00).id, 964, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F43_1749(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 14L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(982, 0x00).id, 982, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F43_1750(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 15L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(961, 0x00).id, 961, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F43_1751(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 16L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F43_1752(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(955, 0x00).id, 955, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F43_1753(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(952, 0x00).id, 952, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F43_1754(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 4L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F43_1755(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 11L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(946, 0x00).id, 946, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F43_1756(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 5L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(967, 0x00).id, 967, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F43_1757(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 6L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(970, 0x00).id, 970, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F43_1759(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(1015, 0x00).id, 1015, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F43_1758(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 1L:
			RTHOOK(19);
			Result = (nstcall = 0, F43_1744(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.stack_value_at */
EIF_REFERENCE F220_4392 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("stack_value_at", 219, Current, 0, 4, 2659);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F220_4403(Current, arg1, arg2, arg3, arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_INTEGER_32 F220_4393 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("eif_type", 219, Current, 0, 1, 2660);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F220_4399(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_INTEGER_32 F220_4394 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("rt_dynamic_type", 219, Current, 0, 1, 2661);
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
	Result = (nstcall = 0, F220_4401(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rt_dynamic_type_nonnegative", EX_POST);
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

/* {RT_DBG_INTERNAL}.object_record */
EIF_REFERENCE F220_4395 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("object_record", 219, Current, 2, 2, 2662);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(293,(nstcall = 0, F220_4427), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F222_4448(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F217_4247(RTCW(loc2), arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F217_4246(RTCW(loc2), arg1));
	tu4_1 = (nstcall = 0, F220_4400(Current, arg1, loc1));
	tr1 = RTCCL(arg2);
	Result = (nstcall = 0, F220_4396(Current, ti4_1, tu4_1, tr1));
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,892,955,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 892, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti1_1 = (nstcall = 1, F217_4259(RTCW(loc2), arg1));
			(nstcall = -1, F893_7315(RTCW(Result), tr1, arg1, loc1, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,903,952,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 903, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti2_1 = (nstcall = 1, F217_4260(RTCW(loc2), arg1));
			(nstcall = -1, F904_7315(RTCW(Result), tr1, arg1, loc1, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,949,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 898, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti4_1 = (nstcall = 1, F217_4261(RTCW(loc2), arg1));
			(nstcall = -1, F899_7315(RTCW(Result), tr1, arg1, loc1, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,894,946,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 894, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			ti8_1 = (nstcall = 1, F217_4262(RTCW(loc2), arg1));
			(nstcall = -1, F895_7315(RTCW(Result), tr1, arg1, loc1, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,893,964,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 893, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu1_1 = (nstcall = 1, F217_4255(RTCW(loc2), arg1));
			(nstcall = -1, F894_7315(RTCW(Result), tr1, arg1, loc1, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,896,982,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 896, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu2_1 = (nstcall = 1, F217_4256(RTCW(loc2), arg1));
			(nstcall = -1, F897_7315(RTCW(Result), tr1, arg1, loc1, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,902,961,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 902, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu4_1 = (nstcall = 1, F217_4257(RTCW(loc2), arg1));
			(nstcall = -1, F903_7315(RTCW(Result), tr1, arg1, loc1, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,897,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 897, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			tu8_1 = (nstcall = 1, F217_4258(RTCW(loc2), arg1));
			(nstcall = -1, F898_7315(RTCW(Result), tr1, arg1, loc1, tu8_1));
			break;
		case 0L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,1015,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 895, _OBJSIZ_2_0_0_2_0_1_0_0_);
			}
			tr1 = RTCCL(arg2);
			tp1 = (nstcall = 1, F217_4264(RTCW(loc2), arg1));
			(nstcall = -1, F896_7315(RTCW(Result), tr1, arg1, loc1, tp1));
			break;
		case 1L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,891,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 891, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F217_4232(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F892_7315(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 7L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,891,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 891, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F217_4231(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F892_7315(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 3L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,979,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 899, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tb1 = (nstcall = 1, F217_4254(RTCW(loc2), arg1));
			(nstcall = -1, F900_7315(RTCW(Result), tr1, arg1, loc1, tb1));
			break;
		case 5L:
			RTHOOK(19);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,901,967,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 901, _OBJSIZ_2_0_0_2_1_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr4_1 = (nstcall = 1, F217_4263(RTCW(loc2), arg1));
			(nstcall = -1, F902_7315(RTCW(Result), tr1, arg1, loc1, tr4_1));
			break;
		case 6L:
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,900,970,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 900, _OBJSIZ_2_0_0_2_0_0_0_1_);
			}
			tr1 = RTCCL(arg2);
			tr8_1 = (nstcall = 1, F217_4265(RTCW(loc2), arg1));
			(nstcall = -1, F901_7315(RTCW(Result), tr1, arg1, loc1, tr8_1));
			break;
		case 2L:
			RTHOOK(21);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,904,976,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 904, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tc1 = (nstcall = 1, F217_4252(RTCW(loc2), arg1));
			(nstcall = -1, F905_7315(RTCW(Result), tr1, arg1, loc1, tc1));
			break;
		case 12L:
			RTHOOK(22);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,905,973,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 905, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tw1 = (nstcall = 1, F217_4253(RTCW(loc2), arg1));
			(nstcall = -1, F906_7315(RTCW(Result), tr1, arg1, loc1, tw1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_attribute_record */
EIF_REFERENCE F220_4396 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("object_attribute_record", 219, Current, 2, 3, 2663);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F220_4393(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,882,979,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 882, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tb1 = (nstcall = 0, F43_1748(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F883_7299(RTCW(Result), tr1, arg1, loc1, arg2, tb1));
			break;
		case 2L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,881,976,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 881, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tc1 = (nstcall = 0, F43_1746(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F882_7299(RTCW(Result), tr1, arg1, loc1, arg2, tc1));
			break;
		case 12L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,883,973,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 883, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tw1 = (nstcall = 0, F43_1747(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F884_7299(RTCW(Result), tr1, arg1, loc1, arg2, tw1));
			break;
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,889,955,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 889, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti1_1 = (nstcall = 0, F43_1753(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F890_7299(RTCW(Result), tr1, arg1, loc1, arg2, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,880,952,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 880, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti2_1 = (nstcall = 0, F43_1754(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F881_7299(RTCW(Result), tr1, arg1, loc1, arg2, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,879,949,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 879, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F43_1755(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F880_7299(RTCW(Result), tr1, arg1, loc1, arg2, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,946,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 890, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			ti8_1 = (nstcall = 0, F43_1756(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F891_7299(RTCW(Result), tr1, arg1, loc1, arg2, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,877,964,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 877, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F43_1749(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F878_7299(RTCW(Result), tr1, arg1, loc1, arg2, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,888,982,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 888, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu2_1 = (nstcall = 0, F43_1750(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F889_7299(RTCW(Result), tr1, arg1, loc1, arg2, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,887,961,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 887, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F43_1749(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			(nstcall = -1, F888_7299(RTCW(Result), tr1, arg1, loc1, arg2, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 878, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F43_1749(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			(nstcall = -1, F879_7299(RTCW(Result), tr1, arg1, loc1, arg2, tu8_1));
			break;
		case 5L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,886,967,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 886, _OBJSIZ_2_0_0_3_1_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr4_1 = (nstcall = 0, F43_1757(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F887_7299(RTCW(Result), tr1, arg1, loc1, arg2, tr4_1));
			break;
		case 6L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,970,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 885, _OBJSIZ_2_0_0_3_0_0_0_1_);
			}
			tr1 = RTCCL(arg3);
			tr8_1 = (nstcall = 0, F43_1759(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F886_7299(RTCW(Result), tr1, arg1, loc1, arg2, tr8_1));
			break;
		case 0L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,884,1015,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 884, _OBJSIZ_2_0_0_3_0_1_0_0_);
			}
			tr1 = RTCCL(arg3);
			tp1 = (nstcall = 0, F43_1758(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F885_7299(RTCW(Result), tr1, arg1, loc1, arg2, tp1));
			break;
		case 1L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,876,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 876, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 0, F43_1744(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F877_7299(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
		case 7L:
			RTHOOK(19);
			loc2 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_1_0_0_2_0_0_0_0_);
			tr1 = RTCCL(arg3);
			(nstcall = -1, F222_4441(RTCW(loc2), tr1, arg1));
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,876,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 876, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 1, F222_4442(RTCW(loc2)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F877_7299(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_local_record */
EIF_REFERENCE F220_4397 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("object_local_record", 219, Current, 1, 3, 2664);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F220_4393(Current, arg3));
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,979,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F869_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 2L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,863,976,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 863, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F864_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 12L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,973,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 867, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F868_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 13L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,870,964,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 870, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F871_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 14L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,873,982,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 873, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F874_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 15L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,874,961,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 874, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F875_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 16L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,871,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 871, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F872_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 9L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,872,955,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 872, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F873_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 10L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,875,952,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 875, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F876_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 4L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,864,949,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 864, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F865_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 11L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,862,946,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 862, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F863_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 5L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,869,967,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 869, _OBJSIZ_1_0_0_4_1_0_0_0_);
			}
			(nstcall = -1, F870_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 6L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,970,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 866, _OBJSIZ_1_0_0_4_0_0_0_1_);
			}
			(nstcall = -1, F867_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 0L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,865,1015,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 865, _OBJSIZ_1_0_0_4_0_1_0_0_);
			}
			(nstcall = -1, F866_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 1L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,861,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 861, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F862_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 7L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,861,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 861, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F862_7281(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6201[Dtype(RTCW(Result))-861])(Result));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_BOOLEAN F220_4398 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_object_is_expanded", 219, Current, 0, 1, 2665);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F220_4398 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_INTEGER_32 F220_4399 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("c_eif_type", 219, Current, 0, 1, 2666);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4399 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_NATURAL_32 F220_4400 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("c_rt_field_type", 219, Current, 0, 2, 2667);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4400 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_INTEGER_32 F220_4401 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_rt_dynamic_type", 219, Current, 0, 1, 2668);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) Dtype(((EIF_REFERENCE) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_field_at */
void F220_4402 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTEAA("set_field_at", 219, Current, 15, 4, 2626);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F220_4393(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(979, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				(nstcall = 0, F43_1787(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(976, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, F43_1785(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(973, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				(nstcall = 0, F43_1786(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(964, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				(nstcall = 0, F43_1788(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(982, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				(nstcall = 0, F43_1789(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(961, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				(nstcall = 0, F43_1790(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(958, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				(nstcall = 0, F43_1791(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(955, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				(nstcall = 0, F43_1792(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(952, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				(nstcall = 0, F43_1793(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(949, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				(nstcall = 0, F43_1794(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(946, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				(nstcall = 0, F43_1795(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), eif_new_type(967, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				(nstcall = 0, F43_1796(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), eif_new_type(970, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				(nstcall = 0, F43_1784(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), eif_new_type(1015, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				(nstcall = 0, F43_1797(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			tr1 = RTCCL(arg3);
			(nstcall = 0, F43_1783(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), tr1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_REFERENCE F220_4403 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_stack_value_at", 219, Current, 0, 4, 2627);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4403 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_INTEGER_32 F220_4407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_stack_value_at", 219, Current, 16, 5, 2631);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_loc_type_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F220_4393(Current, arg4));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(979, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				Result = (nstcall = 0, F220_4408(Current, arg1, arg2, arg3, loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(976, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				Result = (nstcall = 0, F220_4409(Current, arg1, arg2, arg3, loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(973, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				Result = (nstcall = 0, F220_4410(Current, arg1, arg2, arg3, loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(964, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				Result = (nstcall = 0, F220_4411(Current, arg1, arg2, arg3, loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(982, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				Result = (nstcall = 0, F220_4412(Current, arg1, arg2, arg3, loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(961, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				Result = (nstcall = 0, F220_4413(Current, arg1, arg2, arg3, loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(958, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				Result = (nstcall = 0, F220_4414(Current, arg1, arg2, arg3, loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(955, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				Result = (nstcall = 0, F220_4415(Current, arg1, arg2, arg3, loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(952, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				Result = (nstcall = 0, F220_4416(Current, arg1, arg2, arg3, loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(949, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				Result = (nstcall = 0, F220_4417(Current, arg1, arg2, arg3, loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(946, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				Result = (nstcall = 0, F220_4418(Current, arg1, arg2, arg3, loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), eif_new_type(967, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				Result = (nstcall = 0, F220_4419(Current, arg1, arg2, arg3, loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), eif_new_type(970, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				Result = (nstcall = 0, F220_4420(Current, arg1, arg2, arg3, loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), eif_new_type(1015, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				Result = (nstcall = 0, F220_4421(Current, arg1, arg2, arg3, loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(33);
				Result = (nstcall = 0, F220_4422(Current, arg1, arg2, arg3, arg5));
			} else {
				RTHOOK(34);
				Result = (nstcall = 0, F220_4423(Current, arg1, arg2, arg3));
			}
			break;
		default:
			RTHOOK(35);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_boolean_stack_value */
EIF_INTEGER_32 F220_4408 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
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
	
	RTEAA("c_set_boolean_stack_value", 219, Current, 0, 4, 2632);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4408 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_INTEGER_32 F220_4409 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
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
	
	RTEAA("c_set_character_8_stack_value", 219, Current, 0, 4, 2633);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4409 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_INTEGER_32 F220_4410 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
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
	
	RTEAA("c_set_character_32_stack_value", 219, Current, 0, 4, 2634);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4410 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_INTEGER_32 F220_4411 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
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
	
	RTEAA("c_set_natural_8_stack_value", 219, Current, 0, 4, 2635);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4411 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_INTEGER_32 F220_4412 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
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
	
	RTEAA("c_set_natural_16_stack_value", 219, Current, 0, 4, 2636);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4412 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_INTEGER_32 F220_4413 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_set_natural_32_stack_value", 219, Current, 0, 4, 2637);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4413 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_INTEGER_32 F220_4414 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
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
	
	RTEAA("c_set_natural_64_stack_value", 219, Current, 0, 4, 2638);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4414 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_INTEGER_32 F220_4415 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
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
	
	RTEAA("c_set_integer_8_stack_value", 219, Current, 0, 4, 2639);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4415 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_INTEGER_32 F220_4416 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
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
	
	RTEAA("c_set_integer_16_stack_value", 219, Current, 0, 4, 2640);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4416 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_INTEGER_32 F220_4417 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_set_integer_32_stack_value", 219, Current, 0, 4, 2641);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4417 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_INTEGER_32 F220_4418 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
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
	
	RTEAA("c_set_integer_64_stack_value", 219, Current, 0, 4, 2642);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4418 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_INTEGER_32 F220_4419 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
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
	
	RTEAA("c_set_real_32_stack_value", 219, Current, 0, 4, 2643);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4419 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_INTEGER_32 F220_4420 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
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
	
	RTEAA("c_set_real_64_stack_value", 219, Current, 0, 4, 2644);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4420 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_INTEGER_32 F220_4421 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_pointer_stack_value", 219, Current, 0, 4, 2645);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4421 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_INTEGER_32 F220_4422 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_reference_stack_value", 219, Current, 0, 4, 2646);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ref_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F220_4422 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_INTEGER_32 F220_4423 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_set_void_stack_value", 219, Current, 0, 3, 2647);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F220_4423 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F220_4424 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_set_is_inside_rt_eiffel_code", 219, Current, 0, 1, 2648);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F220_4424 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F220_4425 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,loc3);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	
	RTEAA("test_locals", 219, Current, 3, 4, 2649);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		(nstcall = 0, F220_4424(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("----------------------------------\012",35,1470523914)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTMS32_EX_H("L\000\000\000o\000\000\000c\000\000\000 \000\000\000#\000\000\000",5,1869350947);
		tr2 = eif_out__i4_s1(arg2);
		tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
		tr2 = (nstcall = 1, F1032_9156(tr1, tr3));
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("(stack depth=",13,1888178493)));
		tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
		tr2 = eif_out__i4_s1(arg1);
		tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
		tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr3));
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(")",1,41)));
		tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(1030, 0x00).id, 1030, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = RTMS_EX_H(": should be ",12,282022432);
			(nstcall = -1, F1031_9076(RTCW(tr1), tr2));
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr2))-912])(tr2));
			tr2 = (nstcall = 1, F1031_9085(RTCW(tr1), tr3));
			(nstcall = 1, F1032_9137(RTCW(loc1), tr2));
		}
		RTHOOK(7);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(8);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(9);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" -> ",4,539835936)));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = (nstcall = 0, F220_4392(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4));
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F1_5(loc3));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr1))-912])(tr1));
			tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("=",1,61)));
			tr1 = (nstcall = 1, F1031_9085(RTCW(tr2), tr1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(loc3));
			tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
			tr2 = (nstcall = 1, F1031_9085(RTCW(tr1), tr3));
			(nstcall = 1, F1032_9137(RTCW(loc1), tr2));
		} else {
			RTHOOK(12);
			tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("Void object",11,160638836)));
			(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		}
		RTHOOK(13);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F220_4424(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F220_4424(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(18);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.test_set_local */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F220_4426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("test_set_local", 219, Current, 3, 4, 2650);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		(nstcall = 0, F220_4424(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("----------------------------------\012",35,1470523914)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTMS32_EX_H("S\000\000\000e\000\000\000t\000\000\000L\000\000\000o\000\000\000c\000\000\000 \000\000\000#\000\000\000",8,1411988515);
		tr2 = eif_out__i4_s1(arg2);
		tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
		tr2 = (nstcall = 1, F1032_9156(tr1, tr3));
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("(stack depth=",13,1888178493)));
		tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
		tr2 = eif_out__i4_s1(arg1);
		tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
		tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr3));
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(")",1,41)));
		tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(1030, 0x00).id, 1030, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = RTMS_EX_H(": value ",8,992027424);
			(nstcall = -1, F1031_9076(RTCW(tr1), tr2));
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr2))-912])(tr2));
			tr2 = (nstcall = 1, F1031_9085(RTCW(tr1), tr3));
			(nstcall = 1, F1032_9137(RTCW(loc1), tr2));
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(": value Void",12,962399588)));
			(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		}
		RTHOOK(8);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(9);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(10);
		tr1 = RTCCL(arg3);
		loc2 = (nstcall = 0, F220_4407(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4, tr1));
		RTHOOK(11);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" -> ",4,539835936)));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = RTMS32_EX_H("R\000\000\000e\000\000\000s\000\000\000u\000\000\000l\000\000\000t\000\000\000 \000\000\000=\000\000\000 \000\000\000",9,495958816);
		tr2 = eif_out__i4_s1(loc2);
		tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
		tr2 = (nstcall = 1, F1032_9156(tr1, tr3));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr2));
		RTHOOK(13);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1032_9137(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F220_4424(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F220_4424(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(18);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.reflected_object */
static EIF_REFERENCE F220_4427_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(293)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflected_object", 219, Current, 0, 0, 2651);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F222_4439(RTCW(tr1), Current));
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

EIF_REFERENCE F220_4427 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(293,F220_4427_body,(Current));
}

/* {RT_DBG_INTERNAL}.reflector */
static EIF_REFERENCE F220_4428_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(292)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflector", 219, Current, 0, 0, 2652);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(217, 0x01).id, 217, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F220_4428 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(292,F220_4428_body,(Current));
}

void EIF_Minit191 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
