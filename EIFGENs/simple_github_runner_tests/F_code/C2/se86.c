/*
 * Code for class SED_BASIC_SERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se86.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_BASIC_SERIALIZER}.write_header */
void F112_2652 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,arg2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("write_header", 111, Current, 3, 2, 1361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_list_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5303[Dtype(RTCW(arg1))-610])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F111_2630(Current));
	RTHOOK(4);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(5);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_4_3_0_9_);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	(nstcall = 1, F77_2306(RTCW(loc1), tu4_1));
	RTHOOK(7);
	(nstcall = 1, F836_6984(RTCW(arg2)));
	for (;;) {
		RTHOOK(8);
		tb1 = (nstcall = 1, F836_6979(RTCW(arg2)));
		if (tb1) break;
		RTHOOK(9);
		ti4_1 = (nstcall = 1, F836_6957(RTCW(arg2)));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		tu4_1 = (EIF_NATURAL_32) loc3;
		(nstcall = 1, F77_2306(RTCW(loc1), tu4_1));
		RTHOOK(11);
		tr1 = (nstcall = 1, F218_4309(RTCW(loc2), loc3));
		(nstcall = 1, F77_2290(RTCW(loc1), tr1));
		RTHOOK(12);
		(nstcall = 1, F836_6985(RTCW(arg2)));
	}
	RTHOOK(13);
	(nstcall = 0, F111_2631(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

void EIF_Minit86 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
