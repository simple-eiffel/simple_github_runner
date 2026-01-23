/*
 * Code for class MA_DECIMAL_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma70.h"
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

/* {MA_DECIMAL_CONSTANTS}.zero */
static EIF_REFERENCE F96_2425_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(409)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("zero", 95, Current, 0, 0, 1150);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1070, 0x01).id, 1070, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1071_10123(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1071_10140(RTCW(Result)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("zero_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2425 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(409,F96_2425_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.negative_zero */
static EIF_REFERENCE F96_2426_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(410)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("negative_zero", 95, Current, 0, 0, 1151);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = RTOUCR(318,(nstcall = 1, F1071_10141), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("negative_zero_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2426 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(410,F96_2426_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.one */
static EIF_REFERENCE F96_2427_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(411)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("one", 95, Current, 0, 0, 1152);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = (nstcall = 1, F1071_10138(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("one_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2427 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(411,F96_2427_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.minus_one */
static EIF_REFERENCE F96_2428_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(412)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("minus_one", 95, Current, 0, 0, 1153);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = RTOUCR(316,(nstcall = 1, F1071_10139), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2428 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(412,F96_2428_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.infinity */
static EIF_REFERENCE F96_2429_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(413)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("infinity", 95, Current, 0, 0, 1154);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = RTOUCR(321,(nstcall = 1, F1071_10144), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("infinity_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2429 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(413,F96_2429_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.negative_infinity */
static EIF_REFERENCE F96_2430_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(414)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("negative_infinity", 95, Current, 0, 0, 1155);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = RTOUCR(322,(nstcall = 1, F1071_10145), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("negative_infinity_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2430 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(414,F96_2430_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.not_a_number */
static EIF_REFERENCE F96_2431_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(415)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("not_a_number", 95, Current, 0, 0, 1156);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = RTOUCR(319,(nstcall = 1, F1071_10142), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_a_number", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2431 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(415,F96_2431_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.signaling_not_a_number */
static EIF_REFERENCE F96_2432_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(416)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("signaling_not_a_number", 95, Current, 0, 0, 1157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(409,(nstcall = 0, F96_2425), (Current));
	tr2 = RTOUCR(320,(nstcall = 1, F1071_10143), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("signaling_not_a_number", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2432 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(416,F96_2432_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.minimum_integer */
static EIF_REFERENCE F96_2433_body (EIF_REFERENCE Current)
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
	
#define Result RTOTRR
	RTOUDR(324)

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("minimum_integer", 95, Current, 1, 0, 1158);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1071, 0x01).id, 1071, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1072_10249(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1070, 0x01).id, 1070, _OBJSIZ_1_1_0_2_0_0_0_0_);
	tr2 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,417,(nstcall = 1, F226_4572), (RTCW(tr2)));
	tr2 = eif_out__i4_s1(ti4_1);
	(nstcall = -1, F1071_10128(RTCW(tr1), tr2, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("minimum_integer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2433 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(324,F96_2433_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.maximum_integer */
static EIF_REFERENCE F96_2434_body (EIF_REFERENCE Current)
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
	
#define Result RTOTRR
	RTOUDR(325)

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("maximum_integer", 95, Current, 1, 0, 1159);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1071, 0x01).id, 1071, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1072_10249(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1070, 0x01).id, 1070, _OBJSIZ_1_1_0_2_0_0_0_0_);
	tr2 = RTOUCR(312,(nstcall = 0, F93_2405), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,313,(nstcall = 1, F226_4573), (RTCW(tr2)));
	tr2 = eif_out__i4_s1(ti4_1);
	(nstcall = -1, F1071_10128(RTCW(tr1), tr2, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("maximum_integer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_2434 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(325,F96_2434_body,(Current));
}

void EIF_Minit70 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
