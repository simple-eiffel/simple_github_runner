/*
 * Code for class SED_BASIC_DESERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se155.h"
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

/* {SED_BASIC_DESERIALIZER}.read_header */
void F181_3193 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,loc5);
	RTLR(4,loc8);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("read_header", 180, Current, 8, 1, 1893);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(2);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	(nstcall = 0, F180_3165(Current));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F77_2286(RTCW(loc3)));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {850,949,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc5 = RTLNSP2(typres0.id,0,loc2,sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	(nstcall = -1, F851_7192(RTCW(loc5), ((EIF_INTEGER_32) 0L), loc2));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(8);
		tu4_1 = (nstcall = 1, F77_2286(RTCW(loc3)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		tr1 = (nstcall = 1, F77_2269(RTCW(loc3)));
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		ti4_1 = (nstcall = 1, F218_4294(RTCW(loc4), loc8));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			tb1 = (nstcall = 1, F851_7208(RTCW(loc5), loc6));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(13);
				ti4_1 = (nstcall = 1, F851_7204(loc5));
				ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)),(EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)));
				tr1 = (nstcall = 1, F851_7227(RTCW(loc5), ((EIF_INTEGER_32) 0L), ti4_2));
				loc5 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(14);
			(nstcall = 1, F851_7209(RTCW(loc5), loc7, loc6));
		} else {
			RTHOOK(15);
			tr1 = RTOUCR(156,(nstcall = 0, F180_3155), (Current));
			tr2 = (nstcall = 1, F19_1538(RTCW(tr1), loc8, loc8));
			(nstcall = 0, F180_3160(Current, tr2));
		}
		RTHOOK(16);
		loc1++;
	}
	RTHOOK(17);
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc5;
	RTHOOK(18);
	(nstcall = 0, F180_3166(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

void EIF_Minit155 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
