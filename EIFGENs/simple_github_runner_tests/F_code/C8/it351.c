/*
 * Code for class ITP_INTERPRETER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "it351.h"
#include "eif_plug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ITP_INTERPRETER}.execute */
void F1073_10282 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("execute", 1072, Current, 3, 0, 14928);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F429_5823(Current)) != ((EIF_INTEGER_32) 5L))) {
		
	}
	RTHOOK(2);
	loc2 = (nstcall = 0, F429_5809(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F429_5809(Current, ((EIF_INTEGER_32) 2L)));
	ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F429_5809(Current, ((EIF_INTEGER_32) 3L)));
	ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = (nstcall = 0, F429_5809(Current, ((EIF_INTEGER_32) 4L)));
	ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_4_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	loc1 = (nstcall = 0, F429_5809(Current, ((EIF_INTEGER_32) 5L)));
	RTHOOK(7);
	tr1 = RTLNSMART(eif_new_type(1027, 1).id);
	(nstcall = -1, F1026_8856(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTLNSMART(eif_new_type(1027, 1).id);
	(nstcall = -1, F1026_8856(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNSMART(eif_new_type(223, 1).id);
	(nstcall = -1, F224_4452(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tr1 = RTLNSMART(eif_new_type(691, 1).id);
	(nstcall = -1, F692_6311(RTCW(tr1), loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F690_6102(RTCW(tr1)));
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F690_6091(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(13);
		tr1 = RTMS_EX_H("could not open log file \'",25,1960246567);
		tr2 = RTLNS(eif_new_type(44, 0x00).id, 44, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr3 = (nstcall = 0, F45_1814(RTCW(tr2), loc1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, tr3));
		tr1 = RTMS_EX_H("\'.",2,10030);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		(nstcall = 0, F1073_10293(Current, tr1));
		RTHOOK(14);
		(nstcall = 0, F183_3247(Current, ((EIF_INTEGER_32) 1L)));
	}
	RTHOOK(15);
	tr1 = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = (nstcall = 1, F201_3494(RTCW(tr1)));
	(nstcall = 0, F1073_10283(Current, loc3, tr2));
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F690_6117(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.start */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1073_10283 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("start", 1072, Current, 2, 2, 14929);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_server_url_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_port_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(241, 1).id);
	(nstcall = -1, F242_5139(RTCW(tr1), arg2, arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F241_5084(RTCW(tr1)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F241_5115(RTCW(tr1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F242_5156(RTCW(tr1)));
	RTHOOK(7);
	tr1 = RTMS_EX_H("<session>\012",10,2092833802);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(8);
	(nstcall = 0, F1073_10319(Current));
	RTHOOK(9);
	tr1 = RTMS_EX_H("</session>\012",11,1634789130);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(10);
	tr1 = (nstcall = 0, F183_3238(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(11);
		tr1 = (nstcall = 1, F1_14(loc2));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tr1 = RTMS_EX_H("\012",1,10);
		tr2 = RTMS_EX_H(" ",1,32);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R7321[Dtype(RTCW(loc1))-1027])(loc1, tr1, tr2));
		RTHOOK(13);
		(nstcall = 0, F1073_10294(Current, loc2));
	} else {
		RTHOOK(14);
		loc1 = RTMS_EX_H("Unknown error",13,1947251314);
		RTHOOK(15);
		(nstcall = 0, F1073_10294(Current, loc1));
	}
	RTHOOK(16);
	tr1 = RTMS_EX_H("</session>\012",11,1634789130);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(17);
	tr1 = RTMS_EX_H("internal. ",10,1834071328);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, loc1));
	(nstcall = 0, F1073_10293(Current, tr2));
	RTHOOK(18);
	(nstcall = 0, F183_3247(Current, ((EIF_INTEGER_32) 1L)));
	/* NOTREACHED */
	RTE_EE
	RTHOOK(19);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.has_error */
EIF_BOOLEAN F1073_10284 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_);
}


/* {ITP_INTERPRETER}.is_last_protected_execution_successfull */
EIF_BOOLEAN F1073_10285 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_);
}


/* {ITP_INTERPRETER}.should_quit */
EIF_BOOLEAN F1073_10286 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_);
}


/* {ITP_INTERPRETER}.is_request_type_valid */
EIF_BOOLEAN F1073_10287 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_request_type_valid", 1072, Current, 0, 1, 14933);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	tb2 = '\01';
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 1U);
	if (!(EIF_BOOLEAN)(arg1 == tu4_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 2U);
		tb2 = (EIF_BOOLEAN)(arg1 == tu4_1);
	}
	if (!tb2) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 3U);
		tb1 = (EIF_BOOLEAN)(arg1 == tu4_1);
	}
	if (!tb1) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 4U);
		Result = (EIF_BOOLEAN)(arg1 == tu4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ITP_INTERPRETER}.report_type_request */
void F1073_10288 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc3);
	RTLR(5,loc5);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("report_type_request", 1072, Current, 6, 0, 14934);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_request_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("last_request_is_type_request", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 4U);
		RTTE((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_) == tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc6 = RTCCL(tr1);
	loc6 = RTRV(eif_new_type(1027, 0x01),loc6);
	if (EIF_TEST(loc6)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("report_type_request start\012",26,957565962);
		(nstcall = 0, F1073_10297(Current, tr1));
		RTHOOK(5);
		ti4_1 = (nstcall = 1, F1023_8791(loc6));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		loc4 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		RTHOOK(7);
		tb1 = (nstcall = 1, F224_4453(RTCW(loc4), loc2));
		if (tb1) {
			RTHOOK(8);
			tr1 = (nstcall = 1, F224_4455(RTCW(loc4), loc2));
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc3 == NULL)) {
				RTHOOK(10);
				loc5 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F1026_8856(RTCW(loc5), ((EIF_INTEGER_32) 4L)));
				RTHOOK(11);
				tr1 = RTOUCR(4,(nstcall = 0, F185_3253), (Current));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc5))-1027])(loc5, tr1));
			} else {
				RTHOOK(12);
				loc5 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F1026_8856(RTCW(loc5), ((EIF_INTEGER_32) 64L)));
				RTHOOK(13);
				loc1 = (nstcall = 0, F43_1696(Current, (EIF_BOOLEAN) 0));
				RTHOOK(14);
				tr1 = (nstcall = 1, F1_5(loc3));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6310[Dtype(RTCW(tr1))-912])(tr1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc5))-1027])(loc5, tr2));
				RTHOOK(15);
				tb1 = (nstcall = 0, F43_1696(Current, loc1));
				loc1 = (EIF_BOOLEAN) tb1;
			}
			RTHOOK(16);
			(nstcall = 0, F1073_10310(Current, loc5));
		} else {
			RTHOOK(17);
			tr1 = RTMS_EX_H("Variable `v_",12,2047370847);
			tr2 = eif_out__i4_s1(loc2);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, tr2));
			tr1 = RTMS_EX_H("\' not defined.",14,1968768302);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
			(nstcall = 0, F1073_10293(Current, tr1));
		}
		RTHOOK(18);
		tr1 = RTMS_EX_H("report_type_request end\012",24,1859005706);
		(nstcall = 0, F1073_10297(Current, tr1));
	} else {
		RTHOOK(19);
		tr1 = RTOUCR(5,(nstcall = 0, F1073_10320), (Current));
		(nstcall = 0, F1073_10293(Current, tr1));
	}
	RTHOOK(20);
	(nstcall = 0, F1073_10292(Current));
	RTHOOK(21);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,943,0xFF01,1027,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(22);
	(nstcall = 0, F1073_10309(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_quit_request */
void F1073_10289 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("report_quit_request", 1072, Current, 0, 0, 14935);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_start_request */
void F1073_10290 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("report_start_request", 1072, Current, 0, 0, 14936);
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

/* {ITP_INTERPRETER}.report_execute_request */
void F1073_10291 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("report_execute_request", 1072, Current, 3, 0, 14937);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_request_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("last_request_is_execute_request", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 3U);
		RTTE((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_) == tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc3 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,943,1027,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTRV(typres0,loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(loc3,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			RTHOOK(6);
			tr1 = RTOUCR(6,(nstcall = 0, F1073_10321), (Current));
			(nstcall = 0, F1073_10293(Current, tr1));
		} else {
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				tr1 = RTOUCR(7,(nstcall = 0, F1073_10322), (Current));
				(nstcall = 0, F1073_10293(Current, tr1));
			} else {
				RTHOOK(9);
				tr1 = RTMS_EX_H("report_execute_request start\012",29,2074241802);
				(nstcall = 0, F1073_10297(Current, tr1));
				RTHOOK(10);
				loc2 = RTLNS(eif_new_type(198, 0x01).id, 198, _OBJSIZ_1_0_0_1_0_0_0_0_);
				(nstcall = -1, F199_3365(RTCW(loc2), loc1));
				RTHOOK(11);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_3_);
				ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_4_);
				tp1 = (nstcall = 1, F199_3387(RTCW(loc2)));
				ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				(nstcall = 0, F191_3351(Current, ti4_1, ti4_2, tp1, ti4_3));
				RTHOOK(12);
				(nstcall = 0, F1073_10315(Current));
				RTHOOK(13);
				tr1 = RTMS_EX_H("report_execute_request end\012",27,650573834);
				(nstcall = 0, F1073_10297(Current, tr1));
			}
		}
	} else {
		RTHOOK(14);
		tr1 = RTOUCR(5,(nstcall = 0, F1073_10320), (Current));
		(nstcall = 0, F1073_10293(Current, tr1));
	}
	RTHOOK(15);
	(nstcall = 0, F1073_10292(Current));
	RTHOOK(16);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,943,0xFF01,1027,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(17);
	(nstcall = 0, F1073_10309(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.refresh_last_response_flag */
void F1073_10292 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("refresh_last_response_flag", 1072, Current, 0, 0, 14938);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
		RTHOOK(2);
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 3U);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_)) {
			RTHOOK(4);
			tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 2U);
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(5);
			tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 1U);
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_error */
void F1073_10293 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("report_error", 1072, Current, 0, 1, 14939);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reason_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reason_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = RTMS_EX_H("error: ",7,1390214688);
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr2)-1026])(tr2, arg1));
	tr2 = RTMS_EX_H("\012",1,10);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr3))-1026])(tr3, tr2));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(tr1))-1027])(tr1, tr2));
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("has_error", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
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
}

/* {ITP_INTERPRETER}.log_internal_error */
void F1073_10294 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("log_internal_error", 1072, Current, 0, 1, 14940);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reason_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_a_reason_is_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("<error type=\'internal\'>\012",24,259872266);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[Dtype(RTCW(tr1))-241])(tr1, tr2));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("\011<reason>\012<![CDATA[\012",20,392513802);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[Dtype(RTCW(tr1))-241])(tr1, tr2));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F692_6335(RTCW(tr1), arg1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("]]>\012</reason>\012",14,283259658);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[Dtype(RTCW(tr1))-241])(tr1, tr2));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("</error>\012",9,645028874);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[Dtype(RTCW(tr1))-241])(tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.log_file */
EIF_REFERENCE F1073_10295 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ITP_INTERPRETER}.log_instance */
void F1073_10296 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("log_instance", 1072, Current, 0, 1, 14897);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("<instance<![CDATA[\012",19,1106423562);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		tr1 = RTMS_EX_H("Void\012",5,1869838346);
		(nstcall = 0, F1073_10297(Current, tr1));
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_26(arg1));
		(nstcall = 0, F1073_10297(Current, tr1));
	}
	RTHOOK(5);
	tr1 = RTMS_EX_H("]]>\012</instance>\012",16,1922781450);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.log_message */
void F1073_10297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("log_message", 1072, Current, 0, 1, 14898);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_message_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F692_6335(RTCW(tr1), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_trace */
void F1073_10298 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,loc5);
	RTLR(3,loc3);
	RTLR(4,loc8);
	RTLR(5,tr1);
	RTLR(6,loc4);
	RTLR(7,loc9);
	RTLR(8,loc6);
	RTLR(9,loc1);
	RTLR(10,tr2);
	RTLIU(11);
	
	RTEAA("report_trace", 1072, Current, 9, 0, 14899);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, F183_3237(Current));
	RTHOOK(2);
	loc7 = (nstcall = 0, F183_3227(Current, loc2));
	RTHOOK(3);
	loc5 = (nstcall = 0, F183_3234(Current));
	RTHOOK(4);
	loc3 = (nstcall = 0, F183_3235(Current));
	RTHOOK(5);
	tr1 = (nstcall = 0, F183_3236(Current));
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		RTHOOK(6);
		loc4 = (EIF_REFERENCE) loc8;
	} else {
		RTHOOK(7);
		loc4 = RTMS_EX_H("UNKNOWN_CLASS",13,1745804883);
	}
	RTHOOK(8);
	tr1 = (nstcall = 0, F183_3238(Current));
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		RTHOOK(9);
		loc6 = (EIF_REFERENCE) loc9;
	} else {
		RTHOOK(10);
		loc6 = RTMS_EX_H("Unknown exception trace",23,1575223653);
	}
	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc7 == NULL)) {
		RTHOOK(12);
		loc7 = RTMS_EX_H("",0,0);
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		RTHOOK(14);
		loc3 = RTMS_EX_H("",0,0);
	}
	
	RTHOOK(15);
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		RTHOOK(16);
		loc5 = RTMS_EX_H("",0,0);
	}
	RTHOOK(17);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(18);
	tr1 = eif_out__i4_s1(loc2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc1))-1027])(loc1, tr1));
	RTHOOK(19);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(loc1))-1027])(loc1, (EIF_CHARACTER_8) '\012'));
	RTHOOK(20);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc1))-1027])(loc1, loc3));
	RTHOOK(21);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(loc1))-1027])(loc1, (EIF_CHARACTER_8) '\012'));
	RTHOOK(22);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc1))-1027])(loc1, loc4));
	RTHOOK(23);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(loc1))-1027])(loc1, (EIF_CHARACTER_8) '\012'));
	RTHOOK(24);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc1))-1027])(loc1, loc5));
	RTHOOK(25);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(loc1))-1027])(loc1, (EIF_CHARACTER_8) '\012'));
	RTHOOK(26);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc1))-1027])(loc1, tr1));
	RTHOOK(27);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(loc1))-1027])(loc1, (EIF_CHARACTER_8) '\012'));
	RTHOOK(28);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(loc1))-1027])(loc1, loc6));
	RTHOOK(29);
	tr1 = RTMS_EX_H("<call_result type=\'exception\'>\012",31,1794991882);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(30);
	tr1 = RTMS32_EX_H("\011\000\000\000<\000\000\000m\000\000\000e\000\000\000a\000\000\000n\000\000\000i\000\000\000n\000\000\000g\000\000\000 \000\000\000v\000\000\000a\000\000\000l\000\000\000u\000\000\000e\000\000\000=\000\000\000\'\000\000\000",17,617905703);
	tr2 = (nstcall = 1, F1023_8785(RTCW(loc7)));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\'/>\012",4,657407498)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(31);
	tr1 = RTMS32_EX_H("\011\000\000\000<\000\000\000t\000\000\000a\000\000\000g\000\000\000 \000\000\000v\000\000\000a\000\000\000l\000\000\000u\000\000\000e\000\000\000=\000\000\000\'\000\000\000",13,1675800615);
	tr2 = (nstcall = 1, F1023_8785(RTCW(loc5)));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\'/>\012",4,657407498)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(32);
	tr1 = RTMS_EX_H("\011<recipient value=\'",19,84335399);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, loc3));
	tr1 = RTMS_EX_H("\'/>\012",4,657407498);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(33);
	tr1 = RTMS_EX_H("\011<class value=\'",15,1800537383);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, loc4));
	tr1 = RTMS_EX_H("\'>\012",3,2571786);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(34);
	tr1 = RTMS_EX_H("\011<invariant violation on entry=\'",32,1710399015);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
	tr2 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, tr2));
	tr1 = RTMS_EX_H("\'>\012",3,2571786);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(35);
	tr1 = RTMS_EX_H("\011<exception_trace>\012<![CDATA[\012",29,2032831754);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(36);
	(nstcall = 0, F1073_10297(Current, loc6));
	RTHOOK(37);
	tr1 = RTMS_EX_H("]]>\012</exception_trace>\012",23,2142623498);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTHOOK(38);
	tr1 = RTMS_EX_H("</call_result>\012",15,947377930);
	(nstcall = 0, F1073_10297(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.output_buffer */
EIF_REFERENCE F1073_10299 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ITP_INTERPRETER}.error_buffer */
EIF_REFERENCE F1073_10300 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {ITP_INTERPRETER}.wipe_out_buffer */
void F1073_10301 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("wipe_out_buffer", 1072, Current, 0, 0, 14902);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R7273[Dtype(RTCW(tr1))-1027])(tr1));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R7273[Dtype(RTCW(tr1))-1027])(tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("output_buffer_cleared", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = (nstcall = 1, F614_5999(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("error_buffer_cleared", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, F614_5999(RTCW(tr1)));
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
}

/* {ITP_INTERPRETER}.socket */
EIF_REFERENCE F1073_10303 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {ITP_INTERPRETER}.last_request_type */
EIF_NATURAL_32 F1073_10304 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_);
}


/* {ITP_INTERPRETER}.last_request */
EIF_REFERENCE F1073_10305 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {ITP_INTERPRETER}.last_response_flag */
EIF_NATURAL_32 F1073_10306 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_);
}


/* {ITP_INTERPRETER}.last_response */
EIF_REFERENCE F1073_10307 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {ITP_INTERPRETER}.retrieve_request */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1073_10308 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	
	RTEAA("retrieve_request", 1072, Current, 2, 0, 14909);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("socket_open", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_3_);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, F239_5018(RTCW(tr1)));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tu4_1 = (nstcall = 1, F238_4857(RTCW(tr1)));
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		tr1 = (nstcall = 0, F190_3331(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_)));
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(0, 0),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(10);
			tr1 = RTCCL(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(11);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, F239_4948(RTCW(tr1)));
	}
	RTHOOK(15);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(16);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.send_response_to_socket */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1073_10309 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEAA("send_response_to_socket", 1072, Current, 2, 0, 14910);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, F239_4984(RTCW(tr1), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_)));
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(4);
			tr1 = RTCCL(loc2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			(nstcall = 0, F190_3329(Current, tr1, tr2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(5);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F239_4948(RTCW(tr1)));
	RTHOOK(8);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.print_line_and_flush */
void F1073_10310 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("print_line_and_flush", 1072, Current, 0, 1, 14911);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(tr1))-1027])(tr1, arg1));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(tr1))-1027])(tr1, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.parse */
void F1073_10311 (EIF_REFERENCE Current)
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
	
	RTEAA("parse", 1072, Current, 0, 0, 14912);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_has_error", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F1073_10287(Current, *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_)))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) == NULL)) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("Received data is not recognized as a request.",45,1885901102);
			(nstcall = 0, F1073_10293(Current, tr1));
		} else {
			RTHOOK(5);
			switch (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_)) {
				case 3U:
					RTHOOK(6);
					(nstcall = 0, F1073_10291(Current));
					break;
				case 4U:
					RTHOOK(7);
					(nstcall = 0, F1073_10288(Current));
					break;
				case 1U:
					RTHOOK(8);
					(nstcall = 0, F1073_10290(Current));
					break;
				case 2U:
					RTHOOK(9);
					(nstcall = 0, F1073_10289(Current));
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	} else {
		RTHOOK(10);
		tr1 = RTOUCR(8,(nstcall = 0, F1073_10323), (Current));
		(nstcall = 0, F1073_10293(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.object_store */
EIF_REFERENCE F1073_10312 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {ITP_INTERPRETER}.byte_code_feature_body_id */
EIF_INTEGER_32 F1073_10313 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_3_);
}


/* {ITP_INTERPRETER}.byte_code_feature_pattern_id */
EIF_INTEGER_32 F1073_10314 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_4_);
}


/* {ITP_INTERPRETER}.execute_protected */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1073_10315 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	
	RTEAA("execute_protected", 1072, Current, 1, 0, 14916);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		(nstcall = 0, F1073_10316(Current));
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(5);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	(nstcall = 0, F1073_10298(Current));
	RTHOOK(7);
	if ((EIF_BOOLEAN)((nstcall = 0, F183_3237(Current)) == ((EIF_INTEGER_32) 6L))) {
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(9);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(10);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.execute_byte_code */
void F1073_10316 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("execute_byte_code", 1072, Current, 1, 0, 14917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.store_variable_at_index */
void F1073_10317 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("store_variable_at_index", 1072, Current, 0, 2, 14918);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = RTCCL(arg1);
	(nstcall = 1, F224_4457(RTCW(tr1), tr2, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.variable_at_index */
EIF_REFERENCE F1073_10318 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("variable_at_index", 1072, Current, 0, 1, 14919);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = (nstcall = 1, F224_4455(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ITP_INTERPRETER}.main_loop */
void F1073_10319 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("main_loop", 1072, Current, 0, 0, 14920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(2);
		(nstcall = 0, F1073_10301(Current));
		RTHOOK(3);
		(nstcall = 0, F1073_10308(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
			RTHOOK(5);
			(nstcall = 0, F1073_10311(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.invalid_request_format_error */

EIF_REFERENCE F1073_10320 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (5,RTMS_EX_H("Invalid request format.",23,901876270));
}

/* {ITP_INTERPRETER}.byte_code_not_found_error */

EIF_REFERENCE F1073_10321 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (6,RTMS_EX_H("No byte-code is found in request.",33,877192750));
}

/* {ITP_INTERPRETER}.byte_code_length_error */

EIF_REFERENCE F1073_10322 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (7,RTMS_EX_H("Length of retrieved byte-code is not the same as specified in request.",70,371612718));
}

/* {ITP_INTERPRETER}.invalid_request_type_error */

EIF_REFERENCE F1073_10323 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (8,RTMS_EX_H("Request type is invalid.",24,281084974));
}

/* {ITP_INTERPRETER}.is_last_invariant_violated */
EIF_BOOLEAN F1073_10324 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
}


/* {ITP_INTERPRETER}.check_invariant */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1073_10325 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	
	RTEAA("check_invariant", 1072, Current, 1, 1, 14926);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(nstcall = 1, F1_31(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(4);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}._invariant */
void F1073_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 350, Current, 0, 0);
	RTIT("log_file_open_write", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F690_6091(RTCW(tr1)));
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("store_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("output_buffer_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("error_buffer_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("socket_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit351 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
