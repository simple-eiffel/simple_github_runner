/*
 * Code for class KL_CELL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl582.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_CELL}.item */
EIF_REFERENCE F5_1283 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {KL_CELL}.put */
void F5_1284 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("put", 4, Current, 0, 1, 142);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = RTCCL(tr2);
		tr4 = RTCCL(arg1);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,1040,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNS(typres0.id, 1040, _OBJSIZ_0_0_0_0_0_0_0_0_);
		}
		if ((nstcall = 0, F1041_9333(RTCW(tr1), tr3, tr4))) {
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
}

/* {KL_CELL}.make */
void F5_1285 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("make", 4, Current, 0, 1, 143);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = RTCCL(tr2);
		tr4 = RTCCL(arg1);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,1040,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNS(typres0.id, 1040, _OBJSIZ_0_0_0_0_0_0_0_0_);
		}
		if ((nstcall = 0, F1041_9333(RTCW(tr1), tr3, tr4))) {
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
}

void EIF_Minit582 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
