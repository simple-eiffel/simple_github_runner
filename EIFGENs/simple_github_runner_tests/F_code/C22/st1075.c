/*
 * Code for class STACK [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st1075.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STACK}.replace */
void F658_6019 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("replace", 657, Current, 0, 1, 5471);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F657_6011(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, F561_5900(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F832_6937(Current));
	RTHOOK(4);
	tr1 = RTCCL(arg1);
	(nstcall = 0, F832_6934(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("item_replaced", EX_POST);
		if (RTCEQ((nstcall = 0, F817_6862(Current)), arg1)) {
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

/* {STACK}.fill */
void F658_6020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("fill", 657, Current, 1, 1, 5472);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F759_6536(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,831,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y5159,Y5159_gen_type,Dftype(Current),296);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 831, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F817_6857(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5313[Dtype(RTCW(arg1))-610])(arg1));
	for (;;) {
		RTHOOK(5);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5312[Dtype(RTCW(arg1))-610])(arg1));
		if (tb1) break;
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5311[Dtype(RTCW(arg1))-610])(arg1));
		tr2 = RTCCL(tr1);
		(nstcall = 1, F832_6934(RTCW(loc1), tr2));
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5326[Dtype(RTCW(arg1))-610])(arg1));
	}
	for (;;) {
		RTHOOK(8);
		tb2 = '\01';
		tb3 = (nstcall = 1, F612_5999(RTCW(loc1)));
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F759_6536(Current));
		}
		if (tb2) break;
		RTHOOK(9);
		tr1 = (nstcall = 1, F817_6862(RTCW(loc1)));
		tr2 = RTCCL(tr1);
		(nstcall = 0, F832_6934(Current, tr2));
		RTHOOK(10);
		(nstcall = 1, F832_6937(RTCW(loc1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

void EIF_Minit1075 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
