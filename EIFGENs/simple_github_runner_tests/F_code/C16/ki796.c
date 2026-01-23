/*
 * Code for class KI_OUTPUT_STREAM [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ki796.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KI_OUTPUT_STREAM}.append */
void F51_2073 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("append", 50, Current, 0, 1, 902);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F1074_10429(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_input_stream_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("an_input_stream_open_read", EX_PRE);
		tb1 = (RTNA((RTCW(arg1))), ((EIF_BOOLEAN) 0));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = (RTNA((RTCW(arg1))), ((EIF_BOOLEAN) 0));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		(RTNA((RTCW(arg1))));
	}
	for (;;) {
		RTHOOK(6);
		tb1 = (RTNA((RTCW(arg1))), ((EIF_BOOLEAN) 0));
		if (tb1) break;
		RTHOOK(7);
		tc1 = (RTNA((RTCW(arg1))), ((EIF_CHARACTER_8) 0));
		(nstcall = 0, F1074_10384(Current, tc1));
		RTHOOK(8);
		(RTNA((RTCW(arg1))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("end_of_input", EX_POST);
		tb2 = (RTNA((RTCW(arg1))), ((EIF_BOOLEAN) 0));
		if (tb2) {
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
}

/* {KI_OUTPUT_STREAM}.is_closable */
EIF_BOOLEAN F51_2075 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_closable", 50, Current, 0, 0, 903);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_open", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (nstcall = 0, F1074_10429(Current));
		}
		if (tb1) {
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
	return Result;
}

/* {KI_OUTPUT_STREAM}.close */
void F51_2077 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close", 50, Current, 0, 0, 901);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closable", EX_PRE);
		RTTE((nstcall = 0, F51_2075(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit796 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
