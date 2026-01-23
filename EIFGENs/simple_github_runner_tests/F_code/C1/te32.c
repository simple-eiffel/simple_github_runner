/*
 * Code for class TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "te32.h"
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

/* {TEST_APP}.make */
void F50_1945 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 49, Current, 0, 0, 895);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("=== simple_github_runner Tests ===\012\012",36,1134466058);
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(2);
	(nstcall = 0, F50_1946(Current));
	RTHOOK(3);
	(nstcall = 0, F50_1947(Current));
	RTHOOK(4);
	tr1 = RTMS_EX_H("\012=== Results: ",14,1865877792);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr2 = eif_out__i4_s1(ti4_1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, tr2));
	tr1 = RTMS_EX_H(" passed, ",9,1123470880);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr2 = eif_out__i4_s1(ti4_1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
	tr1 = RTMS_EX_H(" failed ===\012",12,1858702858);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("ALL TESTS PASSED\012",17,1459221002);
		(nstcall = 0, F1_27(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_APP}.run_config_tests */
void F50_1946 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("run_config_tests", 49, Current, 1, 0, 896);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("GITHUB_RUNNER_CONFIG Tests:\012",28,126522890);
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_7_0_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("simple-eiffel",13,1379747180);
	tr3 = RTMS_EX_H("simple_k8s",10,1257462899);
	tr4 = RTMS_EX_H("ghp_test123",11,1841206835);
	(nstcall = -1, F48_1913(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("repo_scope",10,493706085);
	tb1 = (nstcall = 1, F48_1925(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("has_owner",9,1804873074);
	tr2 = (nstcall = 1, F48_1915(RTCW(loc1)));
	tr3 = RTMS_EX_H("simple-eiffel",13,1379747180);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr2))-1026])(tr2, tr3));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("has_repo",8,1599703919);
	tr2 = (nstcall = 1, F48_1916(RTCW(loc1)));
	tr3 = RTMS_EX_H("simple_k8s",10,1257462899);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr2))-1026])(tr2, tr3));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	tb1 = (nstcall = 1, F48_1935(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("reg_url_contains_repo",21,1927244655);
	tr2 = (nstcall = 1, F48_1928(RTCW(loc1)));
	tr3 = RTMS_EX_H("repos",5,1702742899);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7190[Dtype(RTCW(tr2))-1026])(tr2, tr3));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(8);
	tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_7_0_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("simple-eiffel",13,1379747180);
	tr3 = RTMS_EX_H("ghp_test456",11,1841404214);
	(nstcall = -1, F48_1914(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTMS_EX_H("org_scope",9,141383269);
	tb1 = (nstcall = 1, F48_1926(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(10);
	tr1 = RTMS_EX_H("org_url_contains_orgs",21,1202925171);
	tr2 = (nstcall = 1, F48_1928(RTCW(loc1)));
	tr3 = RTMS_EX_H("orgs",4,1869768563);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7190[Dtype(RTCW(tr2))-1026])(tr2, tr3));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(11);
	tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_7_0_0_1_0_0_0_0_);
	(nstcall = -1, F48_1912(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	tr1 = RTMS_EX_H("default_labels_count",20,848391796);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F817_6878(RTCW(tr2)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTHOOK(13);
	tr1 = RTMS_EX_H("linux",5,1769676152);
	(nstcall = 1, F48_1933(RTCW(loc1), tr1));
	RTHOOK(14);
	tr1 = RTMS_EX_H("after_linux_count",17,53835892);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F817_6878(RTCW(tr2)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))));
	RTHOOK(15);
	tr1 = RTMS_EX_H("x64",3,7878196);
	(nstcall = 1, F48_1933(RTCW(loc1), tr1));
	RTHOOK(16);
	tr1 = RTMS_EX_H("after_x64_count",15,899839092);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F817_6878(RTCW(tr2)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))));
	RTHOOK(17);
	tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_7_0_0_1_0_0_0_0_);
	(nstcall = -1, F48_1912(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(18);
	tr1 = RTMS_EX_H("empty_invalid",13,711182948);
	tb1 = (nstcall = 1, F48_1935(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {TEST_APP}.run_token_tests */
void F50_1947 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("run_token_tests", 49, Current, 3, 0, 897);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("\012RUNNER_REGISTRATION_TOKEN Tests:\012",34,2079460106);
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F1067_10030(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1067_10055(RTCW(loc3), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("AABCDEF123456",13,1189529398);
	(nstcall = -1, F49_1936(RTCW(tr1), tr2, loc3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("token_valid",11,908404580);
	tb1 = (nstcall = 1, F49_1940(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("not_expired",11,1345218916);
	tb1 = (nstcall = 1, F49_1941(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("time_remaining_positive",23,820326245);
	ti4_1 = (nstcall = 1, F49_1942(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
	RTHOOK(8);
	tr1 = RTLNS(eif_new_type(136, 0x01).id, 136, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F137_2943(RTCW(tr1)));
	tr2 = (nstcall = 1, F1023_8785(RTMS_EX_H("GHTOKEN123",10,862523443)));
	tr3 = (nstcall = 1, F1023_8785(RTMS_EX_H("token",5,1870200174)));
	tr2 = (nstcall = 1, F137_2966(RTCW(tr1), tr2, tr3));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("2099-12-31T23:59:59Z",20,569122906)));
	tr3 = (nstcall = 1, F1023_8785(RTMS_EX_H("expires_at",10,173818996)));
	tr1 = (nstcall = 1, F137_2966(RTCW(tr2), tr1, tr3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F49_1937(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tr1 = RTMS_EX_H("json_token_valid",16,1615532644);
	tb1 = (nstcall = 1, F49_1940(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(11);
	tr1 = RTMS_EX_H("json_token_value",16,1615535717);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	tr3 = RTMS_EX_H("GHTOKEN123",10,862523443);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr2))-1026])(tr2, tr3));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(12);
	tr1 = RTLNS(eif_new_type(136, 0x01).id, 136, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F137_2943(RTCW(tr1)));
	tr2 = (nstcall = 1, F1023_8785(RTMS_EX_H("EXPIRED",7,1772918084)));
	tr3 = (nstcall = 1, F1023_8785(RTMS_EX_H("token",5,1870200174)));
	tr2 = (nstcall = 1, F137_2966(RTCW(tr1), tr2, tr3));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("2020-01-01T00:00:00Z",20,1711094362)));
	tr3 = (nstcall = 1, F1023_8785(RTMS_EX_H("expires_at",10,173818996)));
	tr1 = (nstcall = 1, F137_2966(RTCW(tr2), tr1, tr3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(13);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F49_1937(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(14);
	tr1 = RTMS_EX_H("expired_token",13,1681754222);
	tb1 = (nstcall = 1, F49_1941(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTHOOK(15);
	tr1 = RTMS_EX_H("expired_invalid",15,1175370596);
	tb1 = (nstcall = 1, F49_1940(RTCW(loc1)));
	(nstcall = 0, F50_1950(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(16);
	tr1 = RTLNS(eif_new_type(1066, 0x01).id, 1066, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F1067_10030(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(17);
	(nstcall = 1, F1067_10055(RTCW(loc3), ((EIF_INTEGER_32) 1L)));
	RTHOOK(18);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("TESTTOKEN",9,997260110);
	(nstcall = -1, F49_1936(RTCW(tr1), tr2, loc3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(19);
	tr1 = RTMS_EX_H("runner_args",11,1279098739);
	tr2 = (nstcall = 1, F49_1943(RTCW(loc1)));
	tr3 = RTMS_EX_H("--token TESTTOKEN",17,81542478);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7293[Dtype(RTCW(tr2))-1026])(tr2, tr3));
	(nstcall = 0, F50_1950(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {TEST_APP}.passed */
EIF_INTEGER_32 F50_1948 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {TEST_APP}.failed */
EIF_INTEGER_32 F50_1949 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
}


/* {TEST_APP}.assert */
void F50_1950 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert", 49, Current, 0, 2, 900);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg2) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("  ",2,8224);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, arg1));
		tr1 = RTMS_EX_H(": PASSED\012",9,122075402);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(3);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_))++;
	} else {
		RTHOOK(4);
		tr1 = RTMS_EX_H("  ",2,8224);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, arg1));
		tr1 = RTMS_EX_H(": FAILED\012",9,1413832714);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(5);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

void EIF_Minit32 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
