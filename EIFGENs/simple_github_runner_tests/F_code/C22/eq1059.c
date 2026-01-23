/*
 * Code for class EQA_TEST_EVALUATOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq1059.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_EVALUATOR}.buffer */
static EIF_REFERENCE F247_5316_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(39)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("buffer", 246, Current, 0, 0, 3409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(692, 0x01).id, 692, _OBJSIZ_6_7_2_6_1_1_2_1_);
	(nstcall = -1, F693_6375(RTCW(tr1), ((EIF_INTEGER_32) 2048L)));
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

EIF_REFERENCE F247_5316 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(39,F247_5316_body,(Current));
}

/* {EQA_TEST_EVALUATOR}.execute */
EIF_REFERENCE F247_5317 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLR(8,loc8);
	RTLR(9,loc4);
	RTLR(10,arg1);
	RTLR(11,loc5);
	RTLR(12,Result);
	RTLIU(13);
	
	RTEAA("execute", 246, Current, 8, 1, 3410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (nstcall = 0, F246_5281(Current));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(9,(nstcall = 0, F1_24), (Current))));
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTOUCR(9,(nstcall = 0, F1_24), (Current));
	tr2 = RTOUCR(39,(nstcall = 0, F247_5316), (Current));
	(nstcall = 1, F41_1634(RTCW(tr1), tr2));
	RTHOOK(4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,943,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1018,0xFF01,0xFFF9,0,943,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1059_271, (EIF_POINTER) _A1059_271, (EIF_POINTER)(0),tr1, 1, 0);
	}
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	loc1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F1067_10030(RTCW(loc1)));
	RTHOOK(6);
	loc3 = (nstcall = 0, F247_5318(Current, loc2));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F20_1549(RTCW(loc3)));
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_4_);
		loc8 = tr1;
		tb1 = EIF_TEST(loc8);
	}
	if (tb1) {
		
		RTHOOK(8);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,943,0xFF01,1017,0xFF01,0xFFF9,1,943,0xFF01,46,0xFFF9,1,943,0xFF01,46,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,943,0xFF01,46,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc8;
		RTAR(tr2,loc8);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1017,0xFF01,0xFFF9,0,943,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRF(typres0.id, (EIF_POINTER) __A384_140, (EIF_POINTER) _A384_140, (EIF_POINTER)(F1018_8713),tr1, 1, 0);
		}
		loc4 = (nstcall = 0, F247_5318(Current, tr2));
		RTHOOK(9);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,943,0xFF01,46,979,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = loc8;
		RTAR(tr1,loc8);
		tb1 = (nstcall = 1, F20_1549(RTCW(loc4)));
		((EIF_TYPED_VALUE *)tr1+2)->it_b = tb1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1017,0xFF01,0xFFF9,0,943,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRF(typres0.id, NULL, NULL, (EIF_POINTER)(0),tr1, 1, 0);
		}
		loc5 = (nstcall = 0, F247_5318(Current, tr2));
		RTHOOK(10);
		Result = RTLNS(eif_new_type(814, 0x01).id, 814, _OBJSIZ_6_0_0_0_0_0_0_0_);
		tr1 = RTOUCR(39,(nstcall = 0, F247_5316), (Current));
		tr2 = (nstcall = 1, F693_6381(RTCW(tr1)));
		(nstcall = -1, F815_6831(RTCW(Result), loc1, loc3, loc4, loc5, tr2));
	} else {
		RTHOOK(11);
		Result = RTLNS(eif_new_type(813, 0x01).id, 813, _OBJSIZ_4_0_0_0_0_0_0_0_);
		tr1 = RTOUCR(39,(nstcall = 0, F247_5316), (Current));
		tr2 = (nstcall = 1, F693_6381(RTCW(tr1)));
		(nstcall = -1, F814_6818(RTCW(Result), loc1, loc3, tr2));
	}
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc6 == NULL)) {
		RTHOOK(13);
		tr1 = RTOUCR(9,(nstcall = 0, F1_24), (Current));
		(nstcall = 1, F41_1635(RTCW(tr1)));
	} else {
		RTHOOK(14);
		tr1 = RTOUCR(9,(nstcall = 0, F1_24), (Current));
		(nstcall = 1, F41_1634(RTCW(tr1), loc6));
	}
	RTHOOK(15);
	(nstcall = 0, F246_5297(Current, loc7));
	RTHOOK(16);
	tr1 = RTOUCR(39,(nstcall = 0, F247_5316), (Current));
	(nstcall = 1, F693_6388(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_EVALUATOR}.execute_test_stage */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F247_5318 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	
	RTEAA("execute_test_stage", 246, Current, 3, 1, 3411);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_procedure_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_procedure_expects_not_operands", EX_PRE);
		tb1 = (nstcall = 1, F1017_8682(RTCW(arg1), NULL));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7115[Dtype(RTCW(arg1))-1017])(arg1, NULL));
		RTHOOK(5);
		loc1 = RTLNSMART(eif_new_type(19, 1).id);
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(7);
	RTCT0("attached exception_manager.last_exception as l_exception", EX_CHECK);
	tr1 = RTOUCR(29,(nstcall = 0, F138_2981), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2952[Dtype(RTCW(tr1))-177])(tr1));
	loc3 = tr2;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(8);
	tr1 = RTLNS(eif_new_type(1068, 0x01).id, 1068, _OBJSIZ_6_2_0_3_0_0_0_0_);
	tr2 = RTLNTY2(eif_gen_param(Dftype(Current), 1), 0x00);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6312[Dtype(tr2)-912])(tr2));
	tr2 = (nstcall = 0, F218_4307(Current, ti4_1));
	(nstcall = -1, F1069_10069(RTCW(tr1), loc3, tr2, NULL));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNSMART(eif_new_type(19, 1).id);
	(nstcall = -1, F20_1546(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EQA_TEST_EVALUATOR}.inline-agent#1 of execute */
EIF_REFERENCE F247_10521 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("inline-agent#1 of execute", 246, Current, 0, 0, 3408);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(eif_gen_param(Dftype(Current), 1).id);
	(RTNA((RTCW(Result))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit1059 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
