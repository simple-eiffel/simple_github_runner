/*
 * Code for class RUNNER_REGISTRATION_TOKEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ru31.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RUNNER_REGISTRATION_TOKEN}.make */
void F49_1936 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make", 48, Current, 0, 2, 886);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("token_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("token_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr1))-1026])(tr1, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("expires_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg2)) {
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

/* {RUNNER_REGISTRATION_TOKEN}.make_from_json */
void F49_1937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTEAA("make_from_json", 48, Current, 3, 1, 887);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("token",5,1870200174)));
	tr1 = (nstcall = 1, F137_2950(RTCW(arg1), tr1));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F135_2893(loc2));
		tr2 = (nstcall = 1, F1023_8782(RTCW(tr1)));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(3);
		tr1 = RTLNSMART(eif_new_type(1027, 1).id);
		(nstcall = -1, F1023_8726(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(4);
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("expires_at",10,173818996)));
	tr1 = (nstcall = 1, F137_2950(RTCW(arg1), tr1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(5);
		tr1 = (nstcall = 1, F135_2893(loc3));
		tr2 = (nstcall = 1, F1023_8782(RTCW(tr1)));
		loc1 = (EIF_REFERENCE) tr2;
		RTHOOK(6);
		tr1 = (nstcall = 0, F49_1944(Current, loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tr1 = RTLNSMART(eif_new_type(1066, 1).id);
		(nstcall = -1, F1067_10030(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {RUNNER_REGISTRATION_TOKEN}.token */
EIF_REFERENCE F49_1938 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {RUNNER_REGISTRATION_TOKEN}.expires_at */
EIF_REFERENCE F49_1939 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {RUNNER_REGISTRATION_TOKEN}.is_valid */
EIF_BOOLEAN F49_1940 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_valid", 48, Current, 0, 0, 890);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = (nstcall = 1, F614_5999(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb2) {
		tb2 = (nstcall = 0, F49_1941(Current));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RUNNER_REGISTRATION_TOKEN}.is_expired */
EIF_BOOLEAN F49_1941 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_expired", 48, Current, 1, 0, 891);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F1067_10030(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F211_3880(RTCW(loc1), tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RUNNER_REGISTRATION_TOKEN}.time_remaining */
EIF_INTEGER_32 F49_1942 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("time_remaining", 48, Current, 2, 0, 892);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F1067_10030(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1067_10052(RTCW(tr1), loc1));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	ti8_1 = (nstcall = 1, F210_3862(RTCW(loc2)));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RUNNER_REGISTRATION_TOKEN}.to_runner_args */
EIF_REFERENCE F49_1943 (EIF_REFERENCE Current)
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
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_runner_args", 48, Current, 0, 0, 893);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("--token ",8,1068058912);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, tr2));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RUNNER_REGISTRATION_TOKEN}.parse_iso_date */
EIF_REFERENCE F49_1944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("parse_iso_date", 48, Current, 6, 1, 894);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 19L))) {
		RTHOOK(2);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 6L), ((EIF_INTEGER_32) 7L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 9L), ((EIF_INTEGER_32) 10L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 12L), ((EIF_INTEGER_32) 13L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 15L), ((EIF_INTEGER_32) 16L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, ((EIF_INTEGER_32) 18L), ((EIF_INTEGER_32) 19L)));
		ti4_1 = (nstcall = 1, F1023_8791(RTCW(tr1)));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
		(nstcall = -1, F1067_10026(RTCW(tr1), loc1, loc2, loc3, loc4, loc5, loc6));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
		(nstcall = -1, F1067_10030(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {RUNNER_REGISTRATION_TOKEN}._invariant */
void F49_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 30, Current, 0, 0);
	RTIT("token_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("expires_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit31 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
