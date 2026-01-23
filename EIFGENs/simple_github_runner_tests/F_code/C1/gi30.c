/*
 * Code for class GITHUB_RUNNER_CONFIG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gi30.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GITHUB_RUNNER_CONFIG}.make */
void F48_1912 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 47, Current, 0, 0, 875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F817_6857(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("self-hosted",11,106127972);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(tr1))-610])(tr1, tr2));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = RTMS_EX_H("eiffel",6,1917367148);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(tr1))-610])(tr1, tr2));
	RTHOOK(4);
	tr1 = RTMS_EX_H("eiffel-runner",13,129359986);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("simple-eiffel/eiffelstudio:25.02",32,169734962);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("Default",7,1700286580);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {GITHUB_RUNNER_CONFIG}.make_for_repository */
void F48_1913 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("make_for_repository", 47, Current, 0, 3, 876);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("owner_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("repo_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("token_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg3)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F48_1912(Current));
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(7);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTHOOK(8);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_repository_scope", EX_POST);
		tb1 = (nstcall = 0, F48_1925(Current));
		if (tb1) {
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

/* {GITHUB_RUNNER_CONFIG}.make_for_organization */
void F48_1914 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_for_organization", 47, Current, 0, 2, 877);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("org_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("token_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F48_1912(Current));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(6);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_organization_scope", EX_POST);
		tb1 = (nstcall = 0, F48_1926(Current));
		if (tb1) {
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

/* {GITHUB_RUNNER_CONFIG}.owner */
static EIF_REFERENCE F48_1915_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("owner", 47, Current, 0, 0, 878);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

EIF_REFERENCE F48_1915 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F48_1915_body (Current));
		*(EIF_REFERENCE *)(Current) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {GITHUB_RUNNER_CONFIG}.repository */
static EIF_REFERENCE F48_1916_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("repository", 47, Current, 0, 0, 879);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

EIF_REFERENCE F48_1916 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F48_1916_body (Current));
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {GITHUB_RUNNER_CONFIG}.personal_access_token */
static EIF_REFERENCE F48_1917_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("personal_access_token", 47, Current, 0, 0, 880);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

EIF_REFERENCE F48_1917 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F48_1917_body (Current));
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {GITHUB_RUNNER_CONFIG}.runner_name */
EIF_REFERENCE F48_1918 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {GITHUB_RUNNER_CONFIG}.runner_labels */
EIF_REFERENCE F48_1919 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {GITHUB_RUNNER_CONFIG}.runner_group */
EIF_REFERENCE F48_1920 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {GITHUB_RUNNER_CONFIG}.runner_image */
EIF_REFERENCE F48_1921 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {GITHUB_RUNNER_CONFIG}.scope_type */
EIF_INTEGER_32 F48_1922 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_);
}


/* {GITHUB_RUNNER_CONFIG}.is_repository_scope */
EIF_BOOLEAN F48_1925 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_repository_scope", 47, Current, 0, 0, 863);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GITHUB_RUNNER_CONFIG}.is_organization_scope */
EIF_BOOLEAN F48_1926 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_organization_scope", 47, Current, 0, 0, 864);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GITHUB_RUNNER_CONFIG}.api_base_url */

EIF_REFERENCE F48_1927 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (34,RTMS_EX_H("https://api.github.com",22,1868536429));
}

/* {GITHUB_RUNNER_CONFIG}.registration_token_url */
EIF_REFERENCE F48_1928 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("registration_token_url", 47, Current, 0, 0, 866);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F48_1925(Current));
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F48_1927(Current));
		tr2 = RTMS_EX_H("/repos/",7,2144857647);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1915(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/",1,47);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1916(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/actions/runners/registration-token",35,1308799598);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		Result = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 0, F48_1927(Current));
		tr2 = RTMS_EX_H("/orgs/",6,2012640559);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1915(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/actions/runners/registration-token",35,1308799598);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {GITHUB_RUNNER_CONFIG}.runners_url */
EIF_REFERENCE F48_1929 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("runners_url", 47, Current, 0, 0, 867);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F48_1925(Current));
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F48_1927(Current));
		tr2 = RTMS_EX_H("/repos/",7,2144857647);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1915(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/",1,47);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1916(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/actions/runners",16,1495586163);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		Result = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 0, F48_1927(Current));
		tr2 = RTMS_EX_H("/orgs/",6,2012640559);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1915(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/actions/runners",16,1495586163);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {GITHUB_RUNNER_CONFIG}.remove_token_url */
EIF_REFERENCE F48_1930 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("remove_token_url", 47, Current, 0, 0, 868);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F48_1925(Current));
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F48_1927(Current));
		tr2 = RTMS_EX_H("/repos/",7,2144857647);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1915(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/",1,47);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1916(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/actions/runners/remove-token",29,912382062);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		Result = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 0, F48_1927(Current));
		tr2 = RTMS_EX_H("/orgs/",6,2012640559);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		tr1 = (nstcall = 0, F48_1915(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = RTMS_EX_H("/actions/runners/remove-token",29,912382062);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {GITHUB_RUNNER_CONFIG}.set_runner_name */
void F48_1931 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_runner_name", 47, Current, 0, 1, 869);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_empty", EX_PRE);
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
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr1))-1026])(tr1, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {GITHUB_RUNNER_CONFIG}.set_runner_image */
void F48_1932 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_runner_image", 47, Current, 0, 1, 870);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("image_not_empty", EX_PRE);
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
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("image_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr1))-1026])(tr1, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {GITHUB_RUNNER_CONFIG}.add_label */
void F48_1933 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("add_label", 47, Current, 0, 1, 871);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("label_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F614_5999(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (nstcall = 1, F817_6869(RTCW(tr1), arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(tr1))-610])(tr1, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("has_label", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F817_6869(RTCW(tr1), arg1));
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

/* {GITHUB_RUNNER_CONFIG}.set_runner_group */
void F48_1934 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_runner_group", 47, Current, 0, 1, 872);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("group_not_empty", EX_PRE);
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
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {GITHUB_RUNNER_CONFIG}.is_valid */
EIF_BOOLEAN F48_1935 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_valid", 47, Current, 0, 0, 873);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = (nstcall = 0, F48_1915(Current));
	tb5 = (nstcall = 1, F614_5999(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb5) {
		tr1 = (nstcall = 0, F48_1917(Current));
		tb5 = (nstcall = 1, F614_5999(RTCW(tr1)));
		tb4 = (EIF_BOOLEAN) !tb5;
	}
	if (tb4) {
		tb4 = '\01';
		tb5 = (nstcall = 0, F48_1925(Current));
		if (tb5) {
			tr1 = (nstcall = 0, F48_1916(Current));
			tb5 = (nstcall = 1, F614_5999(RTCW(tr1)));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		tb3 = tb4;
	}
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb3 = (nstcall = 1, F614_5999(RTCW(tr1)));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb2 = (nstcall = 1, F614_5999(RTCW(tr1)));
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

/* {GITHUB_RUNNER_CONFIG}._invariant */
void F48_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 29, Current, 0, 0);
	RTIT("scope_valid", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_0_0_0_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("labels_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
