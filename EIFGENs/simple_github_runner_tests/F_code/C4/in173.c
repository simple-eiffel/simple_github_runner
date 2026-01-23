/*
 * Code for class INET_ADDRESS_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in173.h"
#include <ctype.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET_ADDRESS_FACTORY}.create_any_local */
EIF_REFERENCE F201_3493 (EIF_REFERENCE Current)
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
	
	RTEAA("create_any_local", 200, Current, 0, 0, 2199);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(46,(nstcall = 0, F201_3499), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2787[Dtype(RTCW(tr1))-132])(tr1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("create_any_local_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INET_ADDRESS_FACTORY}.create_loopback */
EIF_REFERENCE F201_3494 (EIF_REFERENCE Current)
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
	
	RTEAA("create_loopback", 200, Current, 0, 0, 2200);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(46,(nstcall = 0, F201_3499), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2788[Dtype(RTCW(tr1))-132])(tr1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("create_any_localhost_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INET_ADDRESS_FACTORY}.create_localhost */
EIF_REFERENCE F201_3495 (EIF_REFERENCE Current)
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
	
	RTEAA("create_localhost", 200, Current, 0, 0, 2201);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(46,(nstcall = 0, F201_3499), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2786[Dtype(RTCW(tr1))-132])(tr1));
	Result = (nstcall = 0, F201_3496(Current, tr2));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(3);
		tr1 = RTMS_EX_H("localhost",9,185724020);
		Result = (nstcall = 0, F201_3496(Current, tr1));
		RTHOOK(4);
		RTCT0("attached Result", EX_CHECK);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.create_from_name */
EIF_REFERENCE F201_3496 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("create_from_name", 200, Current, 1, 1, 2202);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = (nstcall = 0, F201_3501(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F612_5999(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F817_6865(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.create_from_address */
EIF_REFERENCE F201_3497 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("create_from_address", 200, Current, 1, 1, 2203);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_address", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F732_6465(RTCW(arg1)));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_1_0_0_2_0_0_0_0_);
		(nstcall = -1, F189_3306(RTCW(Result), NULL, arg1));
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F732_6465(RTCW(arg1)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L))) {
			RTHOOK(5);
			loc1 = (nstcall = 0, F201_3505(Current, arg1));
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(7);
				Result = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_1_0_0_2_0_0_0_0_);
				(nstcall = -1, F189_3306(RTCW(Result), NULL, loc1));
			} else {
				RTHOOK(8);
				Result = RTLNS(eif_new_type(187, 0x01).id, 187, _OBJSIZ_3_1_0_2_0_0_0_0_);
				(nstcall = -1, F188_3278(RTCW(Result), NULL, arg1));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.create_from_sockaddr */
EIF_REFERENCE F201_3498 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("create_from_sockaddr", 200, Current, 1, 1, 2204);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_sockaddr", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER)) R3325[dtype-200])(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F200_3484(Current)))) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_1_0_0_2_0_0_0_0_);
		(nstcall = -1, F189_3307(RTCW(Result), NULL, arg1));
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F200_3485(Current)))) {
			RTHOOK(6);
			Result = RTLNS(eif_new_type(187, 0x01).id, 187, _OBJSIZ_3_1_0_2_0_0_0_0_);
			(nstcall = -1, F188_3281(RTCW(Result), NULL, arg1));
			RTHOOK(7);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3108[Dtype(RTCW(Result))-187])(Result));
			if ((nstcall = 0, F201_3506(Current, tr1))) {
				RTHOOK(8);
				tr1 = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_1_0_0_2_0_0_0_0_);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3108[Dtype(RTCW(Result))-187])(Result));
				tr2 = (nstcall = 0, F201_3505(Current, tr2));
				(nstcall = -1, F189_3306(RTCW(tr1), NULL, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.impl */
static EIF_REFERENCE F201_3499_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(46)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("impl", 200, Current, 0, 0, 2205);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	if ((nstcall = 0, F131_2869(Current))) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(132, 0x01).id, 132, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(133, 0x01).id, 133, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
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

EIF_REFERENCE F201_3499 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(46,F201_3499_body,(Current));
}

/* {INET_ADDRESS_FACTORY}.get_all_by_name */
EIF_REFERENCE F201_3501 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,loc6);
	RTLR(8,loc4);
	RTLIU(9);
	
	RTEAA("get_all_by_name", 200, Current, 8, 1, 2207);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(3);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(loc2))-1026])(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 1L)));
		RTHOOK(5);
		tr1 = RTOUCR(46,(nstcall = 0, F201_3499), (Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2788[Dtype(RTCW(tr1))-132])(tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, tr2));
	} else {
		RTHOOK(6);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(7);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(loc2))-723])(loc2, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '[')) {
			RTHOOK(8);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2) + O7308[Dtype(loc2)-1025]);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2) + O7308[Dtype(loc2)-1025]);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(loc2))-723])(loc2, ti4_1));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ']');
			}
			if (tb1) {
				RTHOOK(9);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2) + O7308[Dtype(loc2)-1025]);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(loc2))-1026])(loc2, ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
				loc2 = (EIF_REFERENCE) tr1;
				RTHOOK(10);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(11);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(12);
		if ((EIF_BOOLEAN) !loc8) {
			RTHOOK(13);
			tb1 = '\01';
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(loc2))-723])(loc2, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			tb2 = (nstcall = 1, F975_8504(RTCW(tr1)));
			if (!tb2) {
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(loc2))-723])(loc2, ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
			}
			if (tb1) {
				RTHOOK(14);
				loc3 = (nstcall = 0, F201_3503(Current, loc2));
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc3 == NULL)) {
					RTHOOK(16);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R7286[Dtype(RTCW(loc2))-1026])(loc2, (EIF_CHARACTER_8) '%', ((EIF_INTEGER_32) 1L)));
					loc7 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(18);
						loc5 = (nstcall = 0, F201_3502(Current, loc2));
						RTHOOK(19);
						if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) -1L))) {
							RTHOOK(20);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2) + O7308[Dtype(loc2)-1025]);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(loc2))-1026])(loc2, (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1));
							loc6 = (EIF_REFERENCE) tr1;
						}
					}
					RTHOOK(21);
					loc3 = (nstcall = 0, F201_3504(Current, loc2));
				} else {
					RTHOOK(22);
					if (loc1) {
						RTHOOK(23);
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				RTHOOK(24);
				if ((EIF_BOOLEAN) !loc8) {
					RTHOOK(25);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTHOOK(26);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,186,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
						}
						(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 1L)));
						RTHOOK(27);
						ti4_1 = (nstcall = 1, F732_6465(RTCW(loc3)));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
							RTHOOK(28);
							loc4 = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_1_0_0_2_0_0_0_0_);
							(nstcall = -1, F189_3306(RTCW(loc4), NULL, loc3));
						} else {
							RTHOOK(29);
							if ((EIF_BOOLEAN)(loc6 != NULL)) {
								RTHOOK(30);
								loc4 = RTLNS(eif_new_type(187, 0x01).id, 187, _OBJSIZ_3_1_0_2_0_0_0_0_);
								(nstcall = -1, F188_3279(RTCW(loc4), NULL, loc3, loc6));
							} else {
								RTHOOK(31);
								loc4 = RTLNS(eif_new_type(187, 0x01).id, 187, _OBJSIZ_3_1_0_2_0_0_0_0_);
								(nstcall = -1, F188_3280(RTCW(loc4), NULL, loc3, loc5));
							}
						}
						RTHOOK(32);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, loc4));
					}
				}
			} else {
				RTHOOK(33);
				if (loc1) {
					RTHOOK(34);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(35);
					Result = (EIF_REFERENCE) NULL;
				}
			}
			RTHOOK(36);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == NULL) && (EIF_BOOLEAN) !loc8)) {
				RTHOOK(37);
				Result = (nstcall = 0, F201_3510(Current, loc2));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.check_numeric_zone */
EIF_INTEGER_32 F201_3502 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("check_numeric_zone", 200, Current, 5, 1, 2208);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R7286[Dtype(RTCW(arg1))-1026])(arg1, (EIF_CHARACTER_8) '%', ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN) (loc3 > loc2))) break;
			RTHOOK(8);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc3));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) ']')) {
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc3 == (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
					RTHOOK(11);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				}
				RTHOOK(12);
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(13);
				tb1 = EIF_TEST(isdigit(loc4));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(14);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(15);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(16);
					ti4_1 = (EIF_INTEGER_32) (loc4);
					ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 10L)) + (EIF_INTEGER_32) (ti4_1 - ti4_2));
				}
			}
			RTHOOK(17);
			loc3++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.text_to_numeric_format_v4 */
EIF_REFERENCE F201_3503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("text_to_numeric_format_v4", 200, Current, 3, 1, 2188);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,731,964,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F732_6453(RTCW(Result), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
		RTHOOK(4);
		loc1 = (nstcall = 0, F201_3508(Current, arg1, (EIF_CHARACTER_8) '.'));
		RTHOOK(5);
		ti4_1 = (nstcall = 1, F817_6878(RTCW(loc1)));
		switch (ti4_1) {
			case 1L:
				RTHOOK(6);
				tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
				tb1 = (nstcall = 1, F1023_8758(RTCW(tr1)));
				if (tb1) {
					RTHOOK(7);
					tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
					ti4_1 = (nstcall = 1, F1023_8792(RTCW(tr1)));
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(8);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295))))) {
						RTHOOK(9);
						ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 24L));
						ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_2;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 1L)));
						RTHOOK(10);
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 16777215L));
						ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
						ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 2L)));
						RTHOOK(11);
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
						ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
						ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 3L)));
						RTHOOK(12);
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 4L)));
					} else {
						RTHOOK(13);
						Result = (EIF_REFERENCE) NULL;
					}
				} else {
					RTHOOK(14);
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 2L:
				RTHOOK(15);
				tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
				tb1 = (nstcall = 1, F1023_8758(RTCW(tr1)));
				if (tb1) {
					RTHOOK(16);
					tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
					ti4_1 = (nstcall = 1, F1023_8792(RTCW(tr1)));
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
						RTHOOK(18);
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 1L)));
						RTHOOK(19);
						tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 2L)));
						tb1 = (nstcall = 1, F1023_8758(RTCW(tr1)));
						if (tb1) {
							RTHOOK(20);
							tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 2L)));
							ti4_1 = (nstcall = 1, F1023_8792(RTCW(tr1)));
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(21);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295))))) {
								RTHOOK(22);
								ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
								ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
								tu1_1 = (EIF_NATURAL_8) ti4_2;
								(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 2L)));
								RTHOOK(23);
								ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
								ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
								ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 3L)));
								RTHOOK(24);
								ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 4L)));
							} else {
								RTHOOK(25);
								Result = (EIF_REFERENCE) NULL;
							}
						} else {
							RTHOOK(26);
							Result = (EIF_REFERENCE) NULL;
						}
					}
				} else {
					RTHOOK(27);
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 3L:
				RTHOOK(28);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(29);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(Result == NULL))) break;
					RTHOOK(30);
					tr1 = (nstcall = 1, F817_6863(RTCW(loc1), loc3));
					tb1 = (nstcall = 1, F1023_8758(RTCW(tr1)));
					if (tb1) {
						RTHOOK(31);
						tr1 = (nstcall = 1, F817_6863(RTCW(loc1), loc3));
						ti4_1 = (nstcall = 1, F1023_8792(RTCW(tr1)));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(32);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
							RTHOOK(33);
							ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc3));
						} else {
							RTHOOK(34);
							Result = (EIF_REFERENCE) NULL;
						}
					} else {
						RTHOOK(35);
						Result = (EIF_REFERENCE) NULL;
					}
					RTHOOK(36);
					loc3++;
				}
				RTHOOK(37);
				tb1 = '\0';
				tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 3L)));
				tb2 = (nstcall = 1, F1023_8758(RTCW(tr1)));
				if (tb2) {
					tb1 = (EIF_BOOLEAN)(Result != NULL);
				}
				if (tb1) {
					RTHOOK(38);
					tr1 = (nstcall = 1, F817_6863(RTCW(loc1), ((EIF_INTEGER_32) 3L)));
					ti4_1 = (nstcall = 1, F1023_8792(RTCW(tr1)));
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(39);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 65535L)))) {
						RTHOOK(40);
						ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 8L));
						ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_2;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 3L)));
						RTHOOK(41);
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						(nstcall = 1, F732_6477(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 4L)));
					} else {
						RTHOOK(42);
						Result = (EIF_REFERENCE) NULL;
					}
				} else {
					RTHOOK(43);
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 4L:
				RTHOOK(44);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(45);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 4L)) || (EIF_BOOLEAN)(Result == NULL))) break;
					RTHOOK(46);
					tr1 = (nstcall = 1, F817_6863(RTCW(loc1), loc3));
					tb1 = (nstcall = 1, F1023_8758(RTCW(tr1)));
					if (tb1) {
						RTHOOK(47);
						tr1 = (nstcall = 1, F817_6863(RTCW(loc1), loc3));
						ti4_1 = (nstcall = 1, F1023_8792(RTCW(tr1)));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(48);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
							RTHOOK(49);
							ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc3));
						} else {
							RTHOOK(50);
							Result = (EIF_REFERENCE) NULL;
						}
					} else {
						RTHOOK(51);
						Result = (EIF_REFERENCE) NULL;
					}
					RTHOOK(52);
					loc3++;
				}
				break;
			default:
				RTHOOK(53);
				Result = (EIF_REFERENCE) NULL;
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.text_to_numeric_format_v6 */
EIF_REFERENCE F201_3504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc11 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,loc12);
	RTLR(5,loc13);
	RTLR(6,loc15);
	RTLIU(7);
	
	RTEAA("text_to_numeric_format_v6", 200, Current, 15, 1, 2189);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R7286[Dtype(RTCW(arg1))-1026])(arg1, (EIF_CHARACTER_8) '%', ((EIF_INTEGER_32) 1L)));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 < loc2)) {
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,731,964,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				Result = RTLNS(typres0.id, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
			}
			(nstcall = -1, F732_6453(RTCW(Result), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L)));
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(10);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(11);
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			RTHOOK(12);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc3));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':')) {
				RTHOOK(13);
				loc3++;
				RTHOOK(14);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc3));
				if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) ':')) {
					RTHOOK(15);
					Result = (EIF_REFERENCE) NULL;
				}
			}
			RTHOOK(16);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTHOOK(17);
				loc7 = (EIF_INTEGER_32) loc3;
				RTHOOK(18);
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(19);
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(20);
				loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					RTHOOK(21);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc14 || (EIF_BOOLEAN)(Result == NULL)) || (EIF_BOOLEAN) (loc3 > loc2))) break;
					RTHOOK(22);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc3));
					loc11 = (EIF_CHARACTER_8) tc1;
					RTHOOK(23);
					loc3++;
					RTHOOK(24);
					tr1 = RTLNS(eif_new_type(976, 0x00).id, 976, _OBJSIZ_0_1_0_0_0_0_0_0_);
					*(EIF_CHARACTER_8 *)tr1 = loc11;
					tb1 = (nstcall = 1, F975_8504(RTCW(tr1)));
					if (tb1) {
						RTHOOK(25);
						ti4_1 = eif_bit_shift_left(loc10,((EIF_INTEGER_32) 4L));
						loc10 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(26);
						tu1_1 = (nstcall = 0, F201_3507(Current, loc11));
						ti4_1 = (EIF_INTEGER_32) tu1_1;
						ti4_2 = eif_bit_or(loc10,ti4_1);
						loc10 = (EIF_INTEGER_32) ti4_2;
						RTHOOK(27);
						if ((EIF_BOOLEAN) (loc10 > ((EIF_INTEGER_32) 65535L))) {
							RTHOOK(28);
							Result = (EIF_REFERENCE) NULL;
						} else {
							RTHOOK(29);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					} else {
						RTHOOK(30);
						if ((EIF_BOOLEAN)(loc11 == (EIF_CHARACTER_8) ':')) {
							RTHOOK(31);
							loc7 = (EIF_INTEGER_32) loc3;
							RTHOOK(32);
							if ((EIF_BOOLEAN) !loc9) {
								RTHOOK(33);
								if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) -1L))) {
									RTHOOK(34);
									Result = (EIF_REFERENCE) NULL;
								} else {
									RTHOOK(35);
									loc8 = (EIF_INTEGER_32) loc4;
								}
							} else {
								RTHOOK(36);
								if ((EIF_BOOLEAN) (loc3 > loc2)) {
									RTHOOK(37);
									Result = (EIF_REFERENCE) NULL;
								} else {
									RTHOOK(38);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)) > (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
										RTHOOK(39);
										Result = (EIF_REFERENCE) NULL;
									} else {
										RTHOOK(40);
										ti4_1 = eif_bit_shift_right(loc10,((EIF_INTEGER_32) 8L));
										ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
										tu1_1 = (EIF_NATURAL_8) ti4_2;
										(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc4));
										RTHOOK(41);
										loc4++;
										RTHOOK(42);
										ti4_1 = eif_bit_and(loc10,((EIF_INTEGER_32) 255L));
										tu1_1 = (EIF_NATURAL_8) ti4_1;
										(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc4));
										RTHOOK(43);
										loc4++;
										RTHOOK(44);
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(45);
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									}
								}
							}
						} else {
							RTHOOK(46);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc11 == (EIF_CHARACTER_8) '.') && (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 4L)) <= (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L))))) {
								RTHOOK(47);
								tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R7226[Dtype(RTCW(arg1))-1026])(arg1, loc7, loc2));
								loc12 = (EIF_REFERENCE) tr1;
								RTHOOK(48);
								if ((EIF_BOOLEAN)((nstcall = 0, F201_3509(Current, loc12)) != ((EIF_INTEGER_32) 3L))) {
									RTHOOK(49);
									Result = (EIF_REFERENCE) NULL;
								} else {
									RTHOOK(50);
									loc13 = (nstcall = 0, F201_3503(Current, loc12));
									RTHOOK(51);
									if ((EIF_BOOLEAN)(loc13 == NULL)) {
										RTHOOK(52);
										Result = (EIF_REFERENCE) NULL;
									} else {
										RTHOOK(53);
										loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										for (;;) {
											RTHOOK(54);
											if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 4L))) break;
											RTHOOK(55);
											tu1_1 = (nstcall = 1, F732_6458(RTCW(loc13), loc5));
											(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc4));
											RTHOOK(56);
											loc4++;
											RTHOOK(57);
											loc5++;
										}
										RTHOOK(58);
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(59);
										loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									}
								}
							} else {
								RTHOOK(60);
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				RTHOOK(61);
				if ((EIF_BOOLEAN)(Result != NULL)) {
					RTHOOK(62);
					if (loc9) {
						RTHOOK(63);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)) > (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(64);
							Result = (EIF_REFERENCE) NULL;
						} else {
							RTHOOK(65);
							ti4_1 = eif_bit_shift_right(loc10,((EIF_INTEGER_32) 8L));
							ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_2;
							(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc4));
							RTHOOK(66);
							loc4++;
							RTHOOK(67);
							ti4_1 = eif_bit_and(loc10,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc4));
							RTHOOK(68);
							loc4++;
						}
					}
				}
				RTHOOK(69);
				if ((EIF_BOOLEAN)(Result != NULL)) {
					RTHOOK(70);
					if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) -1L))) {
						RTHOOK(71);
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc8);
						RTHOOK(72);
						if ((EIF_BOOLEAN)(loc4 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(73);
							Result = (EIF_REFERENCE) NULL;
						} else {
							RTHOOK(74);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							for (;;) {
								RTHOOK(75);
								if ((EIF_BOOLEAN) (loc3 >= loc6)) break;
								RTHOOK(76);
								tu1_1 = (nstcall = 1, F732_6458(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc3) - ((EIF_INTEGER_32) 1L))));
								(nstcall = 1, F732_6477(RTCW(Result), tu1_1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) - loc3)));
								RTHOOK(77);
								(nstcall = 1, F732_6477(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc3) - ((EIF_INTEGER_32) 1L))));
								RTHOOK(78);
								loc3++;
							}
							RTHOOK(79);
							loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L));
						}
					}
					RTHOOK(80);
					if ((EIF_BOOLEAN)(loc4 != (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(81);
						Result = (EIF_REFERENCE) NULL;
					} else {
						RTHOOK(82);
						RTCT0("result_attached", EX_CHECK);
						if ((EIF_BOOLEAN)(Result != NULL)) {
							RTCK0;
						} else {
							RTCF0;
						}
						RTHOOK(83);
						loc15 = (nstcall = 0, F201_3505(Current, Result));
						RTHOOK(84);
						if ((EIF_BOOLEAN)(loc15 != NULL)) {
							RTHOOK(85);
							Result = (EIF_REFERENCE) loc15;
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(86);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.convert_from_ipv4_mappedd_address */
EIF_REFERENCE F201_3505 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("convert_from_ipv4_mappedd_address", 200, Current, 1, 1, 2190);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F201_3506(Current, arg1))) {
		RTHOOK(2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,731,964,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F732_6453(RTCW(Result), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) break;
			RTHOOK(5);
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 12L))));
			(nstcall = 1, F732_6477(RTCW(Result), tu1_1, loc1));
			RTHOOK(6);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("valid_array", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ti4_1 = (nstcall = 1, F732_6465(RTCW(Result)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
		}
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
	return Result;
}

/* {INET_ADDRESS_FACTORY}.is_ipv4_mapped_address */
EIF_BOOLEAN F201_3506 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_ipv4_mapped_address", 200, Current, 0, 1, 2191);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_addr", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F732_6465(RTCW(arg1)));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L))) {
		RTHOOK(3);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = '\0';
		tb7 = '\0';
		tb8 = '\0';
		tb9 = '\0';
		tb10 = '\0';
		tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 2L)));
			tb10 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb10) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 3L)));
			tb9 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb9) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
			tb8 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb8) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 5L)));
			tb7 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb7) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 6L)));
			tb6 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb6) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 7L)));
			tb5 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb5) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 8L)));
			tb4 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb4) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 9L)));
			tb3 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb3) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 10L)));
			tb2 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 11L)));
			tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
		}
		if (tb1) {
			tu1_1 = (nstcall = 1, F732_6458(RTCW(arg1), ((EIF_INTEGER_32) 12L)));
			Result = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.hex_character_to_integer */
EIF_NATURAL_8 F201_3507 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hex_character_to_integer", 200, Current, 0, 1, 2192);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
		RTHOOK(2);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
		Result = (EIF_NATURAL_8) tu1_1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
			RTHOOK(4);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
			tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) (tu1_1 + (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L));
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
				RTHOOK(6);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
				tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
				Result = (EIF_NATURAL_8) (EIF_NATURAL_8) (tu1_1 + (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.split */
EIF_REFERENCE F201_3508 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("split", 200, Current, 2, 2, 2193);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1025,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		loc2 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1023_8726(RTCW(loc2)));
		for (;;) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			RTHOOK(7);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
			if ((EIF_BOOLEAN)(tc1 == arg2)) {
				RTHOOK(8);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, loc2));
				RTHOOK(9);
				loc2 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F1023_8726(RTCW(loc2)));
			} else {
				RTHOOK(10);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
				if ((EIF_BOOLEAN)(loc1 == ti4_2)) {
					RTHOOK(11);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
					(nstcall = 1, F1028_8983(RTCW(loc2), tc1));
					RTHOOK(12);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, loc2));
				} else {
					RTHOOK(13);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
					(nstcall = 1, F1028_8983(RTCW(loc2), tc1));
				}
			}
			RTHOOK(14);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.dot_count */
EIF_INTEGER_32 F201_3509 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("dot_count", 200, Current, 1, 1, 2194);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R7286[Dtype(RTCW(arg1))-1026])(arg1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(4);
		Result++;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R7286[Dtype(RTCW(arg1))-1026])(arg1, (EIF_CHARACTER_8) '.', (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.get_all_by_name_0 */
EIF_REFERENCE F201_3510 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("get_all_by_name_0", 200, Current, 3, 1, 2195);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F201_3511(Current, arg1));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 1L)));
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 == NULL)) break;
			RTHOOK(5);
			ti4_1 = (nstcall = 1, F236_4823(RTCW(loc1)));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F80_2347(loc1));
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				RTHOOK(7);
				loc2 = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_1_0_0_2_0_0_0_0_);
				tp1 = (nstcall = 1, F236_4828(RTCW(loc1)));
				(nstcall = -1, F189_3307(RTCW(loc2), arg1, tp1));
				RTHOOK(8);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, loc2));
			} else {
				RTHOOK(9);
				ti4_1 = (nstcall = 1, F80_2348(loc1));
				if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
					RTHOOK(10);
					if ((nstcall = 0, F131_2869(Current))) {
						RTHOOK(11);
						loc2 = RTLNS(eif_new_type(187, 0x01).id, 187, _OBJSIZ_3_1_0_2_0_0_0_0_);
						tp1 = (nstcall = 1, F236_4828(RTCW(loc1)));
						(nstcall = -1, F188_3281(RTCW(loc2), arg1, tp1));
						RTHOOK(12);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, loc2));
					}
				}
			}
			RTHOOK(13);
			tr1 = (nstcall = 1, F236_4829(RTCW(loc1)));
			loc1 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(14);
		tb1 = (nstcall = 1, F612_5999(RTCW(Result)));
		if (tb1) {
			RTHOOK(15);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.getaddrinfo */
EIF_REFERENCE F201_3511 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("getaddrinfo", 200, Current, 2, 1, 2196);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(198, 0x01).id, 198, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F199_3365(RTCW(loc1), arg1));
	RTHOOK(2);
	tp1 = (nstcall = 1, F199_3387(RTCW(loc1)));
	loc2 = (nstcall = 0, F201_3512(Current, tp1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(235, 0x01).id, 235, _OBJSIZ_0_0_0_0_0_1_0_0_);
		(nstcall = -1, F235_4818(RTCW(Result), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.c_getaddrinfo */
EIF_POINTER F201_3512 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_getaddrinfo", 200, Current, 0, 1, 2197);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) en_getaddrinfo(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.get_sock_family */
EIF_INTEGER_32 F201_3513 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("get_sock_family", 200, Current, 0, 1, 2198);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_family(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit173 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
