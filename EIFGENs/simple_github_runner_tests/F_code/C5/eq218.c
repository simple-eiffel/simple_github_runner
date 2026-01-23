/*
 * Code for class EQA_EVALUATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq218.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_EVALUATOR}.make */
void F248_5319 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make", 247, Current, 1, 0, 3412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F248_5320(Current));
	RTHOOK(2);
	loc1 = RTLNSMART(eif_new_type(241, 1).id);
	tr1 = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = (nstcall = 1, F201_3494(RTCW(tr1)));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
	(nstcall = -1, F242_5139(RTCW(loc1), tr2, ti4_1));
	RTHOOK(3);
	(nstcall = 1, F241_5115(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F242_5156(RTCW(loc1)));
	RTHOOK(5);
	(nstcall = 1, F241_5084(RTCW(loc1)));
	RTHOOK(6);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_7_7_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(7);
		loc1 = RTLNSMART(eif_new_type(241, 1).id);
		tr1 = RTLNS(eif_new_type(133, 0x01).id, 133, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTOUCR(0,(nstcall = 1, F134_2881), (RTCW(tr1)));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
		(nstcall = -1, F242_5139(RTCW(loc1), tr2, ti4_1));
		RTHOOK(8);
		(nstcall = 1, F241_5115(RTCW(loc1)));
		RTHOOK(9);
		(nstcall = 1, F242_5156(RTCW(loc1)));
		RTHOOK(10);
		(nstcall = 1, F241_5084(RTCW(loc1)));
	}
	RTHOOK(11);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTHOOK(12);
	(nstcall = 0, F248_5321(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_EVALUATOR}.parse_arguments */
void F248_5320 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("parse_arguments", 247, Current, 1, 0, 3413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(1,(nstcall = 0, F246_5279), (Current));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F429_5823(loc1));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F429_5809(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tr1 = RTLNSMART(eif_new_type(911, 1).id);
		tr2 = (nstcall = 1, F429_5809(RTCW(loc1), ((EIF_INTEGER_32) 2L)));
		(nstcall = -1, F912_7361(RTCW(tr1), tr2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49200L);
		RTHOOK(6);
		tr1 = (nstcall = 0, F246_5281(Current));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("port_initialized", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) > ((EIF_INTEGER_32) 0L))) {
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

/* {EQA_EVALUATOR}.main_loop */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F248_5321 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,loc1);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	
	RTEAA("main_loop", 247, Current, 6, 0, 3414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("socket_connected", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_7_);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("socket_open_write", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_4_);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_0_0_0_0_0_0_0_0_);
	for (;;) {
		RTHOOK(5);
		if (loc2) break;
		RTHOOK(6);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = (nstcall = 0, F190_3331(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
		loc4 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,943,1027,1027,949,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc4 = RTRV(typres0,loc4);
		}
		if (EIF_TEST(loc4)) {
			tr1 = eif_boxed_item(loc4,1);
			loc5 = tr1;
			tb2 = EIF_TEST(loc5);
		}
		if (tb2) {
			tr1 = eif_boxed_item(loc4,2);
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(7);
			tr1 = RTOUCR(2,(nstcall = 0, F47_1908), (Current));
			(nstcall = 1, F46_1883(RTCW(loc3), loc5, tr1));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = (nstcall = 1, F912_7400(RTCW(tr1)));
			tr1 = RTOUCR(3,(nstcall = 0, F47_1909), (Current));
			(nstcall = 1, F46_1883(RTCW(loc3), tr2, tr1));
			RTHOOK(9);
			tr1 = (nstcall = 1, F1023_8785(loc6));
			ti4_1 = eif_integer_32_item(loc4,3);
			loc1 = (nstcall = 0, F248_5326(Current, tr1, ti4_1));
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(nstcall = 1, F239_4986(RTCW(tr1), (EIF_BOOLEAN) 1));
			RTHOOK(11);
			(nstcall = 0, F190_3329(Current, loc1, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			RTHOOK(12);
			(nstcall = 1, F46_1884(RTCW(loc3)));
		} else {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				(nstcall = 1, F239_4948(RTCW(tr1)));
			}
			RTHOOK(15);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F239_4948(RTCW(tr1)));
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(18);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EQA_EVALUATOR}.port */
EIF_INTEGER_32 F248_5322 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
}


/* {EQA_EVALUATOR}.socket */
EIF_REFERENCE F248_5323 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_EVALUATOR}.is_stream_invalid */
EIF_BOOLEAN F248_5324 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {EQA_EVALUATOR}.testing_directory */
EIF_REFERENCE F248_5325 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_EVALUATOR}.execute_test */
EIF_REFERENCE F248_5326 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("execute_test", 247, Current, 2, 2, 3419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS32_EX_H("E\000\000\000Q\000\000\000A\000\000\000_\000\000\000T\000\000\000E\000\000\000S\000\000\000T\000\000\000_\000\000\000E\000\000\000V\000\000\000A\000\000\000L\000\000\000U\000\000\000A\000\000\000T\000\000\000O\000\000\000R\000\000\000 \000\000\000[\000\000\000a\000\000\000t\000\000\000t\000\000\000a\000\000\000c\000\000\000h\000\000\000e\000\000\000d\000\000\000 \000\000\000",29,1261215776);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7208[Dtype(RTCW(arg1))-1026])(arg1));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("]",1,93)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	loc1 = (nstcall = 0, F218_4294(Current, tr1));
	RTHOOK(2);
	RTCT0("attached {EQA_TEST_EVALUATOR [EQA_TEST_SET]} new_instance_of (l_type) as l_eval", EX_CHECK);
	tr1 = (nstcall = 0, F218_4295(Current, loc1));
	loc2 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,246,0xFF01,46,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,943,0xFF01,0,949,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1017,0xFF01,0xFFF9,1,943,0xFF01,46,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A218_208_2, (EIF_POINTER) _A218_208_2, (EIF_POINTER)(F191_3350),tr1, 1, 1);
	}
	tr1 = (nstcall = 1, F247_5317(loc2, tr4));
	Result = (EIF_REFERENCE) tr1;
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

void EIF_Minit218 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
