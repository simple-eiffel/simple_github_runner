/*
 * Code for class DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di216.h"
#include "eif_dir.h"
#include "eif_file.h"
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

/* {DIRECTORY}.make */
void F245_5220 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 244, Current, 0, 1, 3311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_5221(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.make_with_name */
void F245_5221 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_with_name", 244, Current, 0, 1, 3312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_5257(Current, arg1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.make_with_path */
void F245_5222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_with_path", 244, Current, 0, 1, 3313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F912_7400(RTCW(arg1)));
	(nstcall = 0, F245_5220(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.make_open_read */
void F245_5223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_open_read", 244, Current, 0, 1, 3314);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_5220(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F245_5230(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.create_dir */
void F245_5224 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("create_dir", 244, Current, 0, 0, 3315);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("physical_not_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F245_5268(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.recursive_create_dir */
void F245_5225 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	
	RTEAA("recursive_create_dir", 244, Current, 5, 0, 3316);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F245_5226(Current));
	tr2 = (nstcall = 1, F912_7382(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5222(RTCW(loc1), loc3));
	RTHOOK(3);
	tb1 = (nstcall = 1, F245_5245(RTCW(loc1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,911,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc2 = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F817_6857(RTCW(loc2), ((EIF_INTEGER_32) 10L)));
		RTHOOK(5);
		tr1 = (nstcall = 1, F912_7377(RTCW(loc3)));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			tb2 = (nstcall = 1, F245_5245(RTCW(loc1)));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (tb1) break;
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(loc2))-610])(loc2, loc3));
			RTHOOK(8);
			tr1 = (nstcall = 1, F912_7376(RTCW(loc3)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = (nstcall = 1, F912_7377(RTCW(loc3)));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			(nstcall = 1, F245_5222(RTCW(loc1), loc3));
		}
		RTHOOK(11);
		(nstcall = 1, F817_6889(RTCW(loc2)));
		for (;;) {
			RTHOOK(12);
			tb2 = (nstcall = 1, F774_6552(RTCW(loc2)));
			if (tb2) break;
			RTHOOK(13);
			tr1 = (nstcall = 1, F817_6862(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			(nstcall = 1, F817_6891(RTCW(loc2)));
			RTHOOK(15);
			(nstcall = 1, F245_5222(RTCW(loc1), loc3));
			RTHOOK(16);
			(nstcall = 1, F245_5224(RTCW(loc1)));
			RTHOOK(17);
			tb3 = (nstcall = 1, F245_5245(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb3) {
				RTHOOK(18);
				loc5 = RTLNS(eif_new_type(161, 0x01).id, 161, _OBJSIZ_5_1_0_3_0_0_0_0_);
				RTHOOK(19);
				tr1 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000:\000\000\000 \000\000\000",15,2053611808);
				tr2 = (nstcall = 1, F912_7400(RTCW(loc3)));
				tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
				(nstcall = 1, F139_2998(RTCW(loc5), tr2));
				RTHOOK(20);
				(nstcall = 1, F139_2983(RTCW(loc5)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("physical_exists", EX_POST);
		if ((nstcall = 0, F245_5245(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.path */
EIF_REFERENCE F245_5226 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("path", 244, Current, 0, 0, 3317);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = -1, F912_7365(RTCW(Result), tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("entry_not_empty", EX_POST);
		tb1 = (nstcall = 1, F912_7369(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {DIRECTORY}.readentry */
void F245_5227 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
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
	
	RTEAA("readentry", 244, Current, 0, 0, 3318);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F245_5243(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp1 = (nstcall = 0, F245_5272(Current, tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) = (EIF_POINTER) tp1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(5);
		tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
		tr2 = (nstcall = 1, F264_5363(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.name */
EIF_REFERENCE F245_5228 (EIF_REFERENCE Current)
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
	
	RTEAA("name", 244, Current, 0, 0, 3319);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1023_8782(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("name_not_empty", EX_POST);
		tb1 = (nstcall = 1, F614_5999(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {DIRECTORY}.has_entry */
EIF_BOOLEAN F245_5229 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("has_entry", 244, Current, 4, 1, 3320);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	(nstcall = 1, F245_5232(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F245_5227(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!Result) {
			tb1 = (EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)));
		}
		if (tb1) break;
		RTHOOK(7);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(1025, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
			tr2 = (nstcall = 1, F264_5363(RTCW(tr1), loc2));
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7191[Dtype(RTCW(arg1))-1026])(arg1, tr2));
			Result = (EIF_BOOLEAN) tb2;
		} else {
			RTHOOK(9);
			tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
			tr2 = (nstcall = 1, F264_5362(RTCW(tr1), loc2));
			loc4 = tr2;
			if ((EIF_TRUE)) {
				RTHOOK(10);
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R7191[Dtype(RTCW(arg1))-1026])(arg1, loc4));
				Result = (EIF_BOOLEAN) tb2;
			}
		}
		RTHOOK(11);
		(nstcall = 1, F245_5227(RTCW(loc1)));
		RTHOOK(12);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(13);
	(nstcall = 1, F245_5231(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.open_read */
void F245_5230 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("open_read", 244, Current, 0, 0, 3321);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F245_5269(Current, tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.close */
void F245_5231 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close", 244, Current, 0, 0, 3322);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F245_5243(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	(nstcall = 0, F245_5271(Current, tp1));
	RTHOOK(3);
	tp1 = (nstcall = 0, F1_33(Current));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.start */
void F245_5232 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 244, Current, 0, 0, 3323);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F245_5243(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F245_5270(Current, tp1, tp2));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.change_name */
void F245_5233 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("change_name", 244, Current, 1, 1, 3324);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
	tr2 = (nstcall = 1, F264_5361(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F245_5278(Current, tp1, tp2));
	RTHOOK(5);
	(nstcall = 0, F245_5257(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("name_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.rename_path */
void F245_5234 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("rename_path", 244, Current, 1, 1, 3325);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F912_7369(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F912_7402(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F245_5278(Current, tp1, tp2));
	RTHOOK(6);
	tr1 = (nstcall = 1, F912_7400(RTCW(arg1)));
	(nstcall = 0, F245_5257(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_changed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F912_7400(RTCW(arg1)));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {DIRECTORY}.count */
EIF_INTEGER_32 F245_5235 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("count", 244, Current, 1, 0, 3326);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	(nstcall = 1, F245_5232(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F245_5227(RTCW(loc1)));
	for (;;) {
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		if ((EIF_BOOLEAN)(tp1 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(6);
		Result++;
		RTHOOK(7);
		(nstcall = 1, F245_5227(RTCW(loc1)));
	}
	RTHOOK(8);
	(nstcall = 1, F245_5231(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.entries */
EIF_REFERENCE F245_5236 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("entries", 244, Current, 2, 0, 3327);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,911,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F245_5232(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F245_5227(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F912_7365(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, tr1));
		RTHOOK(8);
		(nstcall = 1, F245_5227(RTCW(loc1)));
		RTHOOK(9);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	(nstcall = 1, F245_5231(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.resolved_entries */
EIF_REFERENCE F245_5237 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("resolved_entries", 244, Current, 3, 0, 3328);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,911,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F245_5232(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F245_5227(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(6);
	loc3 = (nstcall = 0, F245_5226(Current));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F912_7365(RTCW(tr1), loc2));
		tr1 = (nstcall = 1, F912_7389(RTCW(loc3), tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, tr1));
		RTHOOK(9);
		(nstcall = 1, F245_5227(RTCW(loc1)));
		RTHOOK(10);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(11);
	(nstcall = 1, F245_5231(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.linear_representation */
EIF_REFERENCE F245_5238 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("linear_representation", 244, Current, 2, 0, 3329);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F245_5232(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F245_5227(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
		tr2 = (nstcall = 1, F264_5363(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, tr2));
		RTHOOK(8);
		(nstcall = 1, F245_5227(RTCW(loc1)));
		RTHOOK(9);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	(nstcall = 1, F245_5231(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.linear_representation_32 */
EIF_REFERENCE F245_5239 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("linear_representation_32", 244, Current, 3, 0, 3330);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1031,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F817_6857(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F245_5232(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F245_5227(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		loc3 = RTLNS(eif_new_type(911, 0x01).id, 911, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F912_7365(RTCW(loc3), loc2));
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = (nstcall = 1, F912_7400(RTCW(loc3)));
		(nstcall = -1, F1030_9024(RTCW(tr1), tr2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(Result))-610])(Result, tr1));
		RTHOOK(9);
		(nstcall = 1, F245_5227(RTCW(loc1)));
		RTHOOK(10);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(11);
	(nstcall = 1, F245_5231(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.last_entry_32 */
EIF_REFERENCE F245_5240 (EIF_REFERENCE Current)
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
	
	RTEAA("last_entry_32", 244, Current, 0, 0, 3331);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
		tr2 = (nstcall = 1, F264_5362(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.last_entry_8 */
EIF_REFERENCE F245_5241 (EIF_REFERENCE Current)
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
	
	RTEAA("last_entry_8", 244, Current, 0, 0, 3332);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
		tr2 = (nstcall = 1, F264_5363(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.lastentry */
static EIF_REFERENCE F245_5242_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastentry", 244, Current, 0, 0, 3333);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_5242 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_new_type(1027, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_5242_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.is_closed */
EIF_BOOLEAN F245_5243 (EIF_REFERENCE Current)
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
	
	RTEAA("is_closed", 244, Current, 0, 0, 3334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_empty */
EIF_BOOLEAN F245_5244 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 244, Current, 0, 0, 3335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F245_5235(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.exists */
EIF_BOOLEAN F245_5245 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("exists", 244, Current, 0, 0, 3336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F245_5274(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_readable */
EIF_BOOLEAN F245_5246 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_readable", 244, Current, 0, 0, 3337);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F245_5275(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_executable */
EIF_BOOLEAN F245_5247 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_executable", 244, Current, 0, 0, 3338);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F245_5276(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_writable */
EIF_BOOLEAN F245_5248 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_writable", 244, Current, 0, 0, 3339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F245_5277(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.delete */
void F245_5249 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete", 244, Current, 0, 0, 3340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("empty_directory", EX_PRE);
		RTTE((nstcall = 0, F245_5244(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F245_5259(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F245_5273(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.delete_content */
void F245_5250 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete_content", 244, Current, 0, 0, 3341);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_5252(Current, NULL, NULL, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.recursive_delete */
void F245_5251 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("recursive_delete", 244, Current, 0, 0, 3342);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_5250(Current));
	RTHOOK(3);
	if ((nstcall = 0, F245_5244(Current))) {
		RTHOOK(4);
		(nstcall = 0, F245_5249(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.delete_content_with_action */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F245_5252 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc6 = (EIF_POINTER) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc5);
	RTLR(5,loc7);
	RTLR(6,loc1);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLR(9,arg1);
	RTLR(10,arg2);
	RTLR(11,loc2);
	RTLR(12,saved_except);
	RTLIU(13);
	RTXSLS;
	
	RTEAA("delete_content_with_action", 244, Current, 10, 3, 3343);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_file_number", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1029,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = eif_min_int32 (arg3,((EIF_INTEGER_32) 1024L));
	(nstcall = -1, F817_6857(RTCW(tr1), ti4_1));
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc3 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
	RTHOOK(5);
	(nstcall = 1, F264_5390(RTCW(loc3), (EIF_BOOLEAN) 0));
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F245_5223(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	(nstcall = 1, F245_5232(RTCW(loc5)));
	RTHOOK(8);
	(nstcall = 1, F245_5227(RTCW(loc5)));
	RTHOOK(9);
	tp1 = *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_3_0_0_1_0_1_);
	loc6 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(10);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc6 == (nstcall = 0, F1_33(Current)))) {
			tb1 = loc10;
		}
		if (tb1) break;
		RTHOOK(11);
		tr1 = (nstcall = 1, F264_5362(RTCW(loc3), loc6));
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tb2 = '\0';
		tr1 = RTOUCR(134,(nstcall = 0, F245_5264), (Current));
		tb3 = (nstcall = 1, F1023_8771(RTCW(loc7), tr1));
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = RTOUCR(135,(nstcall = 0, F245_5265), (Current));
			tb3 = (nstcall = 1, F1023_8771(RTCW(loc7), tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTHOOK(13);
			tr1 = (nstcall = 0, F245_5226(Current));
			tr2 = (nstcall = 1, F912_7388(RTCW(tr1), loc7));
			loc1 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			tr1 = (nstcall = 1, F912_7400(RTCW(loc1)));
			(nstcall = 1, F264_5389(RTCW(loc3), tr1));
			RTHOOK(15);
			tb2 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_3_0_);
			if (tb2) {
				RTHOOK(16);
				tb2 = '\0';
				tb3 = (nstcall = 1, F264_5370(RTCW(loc3)));
				if ((EIF_BOOLEAN) !tb3) {
					tb3 = (nstcall = 1, F264_5369(RTCW(loc3)));
					tb2 = tb3;
				}
				if (tb2) {
					RTHOOK(17);
					if ((EIF_BOOLEAN)(loc4 != NULL)) {
						RTHOOK(18);
						(nstcall = 1, F245_5222(RTCW(loc4), loc1));
					} else {
						RTHOOK(19);
						tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_3_0_0_1_0_2_0_0_);
						(nstcall = -1, F245_5222(RTCW(tr1), loc1));
						loc4 = (EIF_REFERENCE) tr1;
					}
					RTHOOK(20);
					(nstcall = 1, F245_5253(RTCW(loc4), arg1, arg2, arg3));
				} else {
					RTHOOK(21);
					tb2 = (nstcall = 1, F264_5376(RTCW(loc3)));
					if (tb2) {
						RTHOOK(22);
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							RTHOOK(23);
							(nstcall = 1, F690_6165(RTCW(loc2), loc1));
						} else {
							RTHOOK(24);
							tr1 = RTLNS(eif_new_type(690, 0x01).id, 690, _OBJSIZ_4_6_2_4_1_1_2_1_);
							(nstcall = -1, F690_6031(RTCW(tr1), loc1));
							loc2 = (EIF_REFERENCE) tr1;
						}
						RTHOOK(25);
						(nstcall = 1, F690_6163(RTCW(loc2)));
						RTHOOK(26);
						tr1 = (nstcall = 1, F912_7400(RTCW(loc1)));
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(loc9))-610])(loc9, tr1));
						RTHOOK(27);
						loc8++;
					}
				}
				RTHOOK(28);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc8 >= arg3))) {
					RTHOOK(29);
					if ((EIF_BOOLEAN)(arg1 != NULL)) {
						RTHOOK(30);
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
							*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc9);
					}
					RTHOOK(31);
					if ((EIF_BOOLEAN)(arg2 != NULL)) {
						RTHOOK(32);
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
							*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
						tb3 = tb2;
						loc10 = (EIF_BOOLEAN) tb3;
					}
					RTHOOK(33);
					(nstcall = 1, F817_6916(RTCW(loc9)));
					RTHOOK(34);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		RTHOOK(35);
		(nstcall = 1, F245_5227(RTCW(loc5)));
		RTHOOK(36);
		tp1 = *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_3_0_0_1_0_1_);
		loc6 = (EIF_POINTER) tp1;
	}
	RTHOOK(37);
	(nstcall = 1, F245_5231(RTCW(loc5)));
	RTHOOK(38);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg1 != NULL))) {
		RTHOOK(39);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(40);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tb3 = (nstcall = 1, F245_5243(RTCW(loc5)));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		RTHOOK(41);
		(nstcall = 1, F245_5231(RTCW(loc5)));
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(42);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {DIRECTORY}.recursive_delete_with_action */
void F245_5253 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("recursive_delete_with_action", 244, Current, 1, 3, 3344);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F245_5245(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_5252(Current, arg1, arg2, arg3));
	RTHOOK(3);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
		tb3 = tb2;
		tb1 = (EIF_BOOLEAN) !tb3;
	}
	if (tb1) {
		RTHOOK(4);
		(nstcall = 0, F245_5249(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != NULL))) {
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1022,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				loc1 = RTLNS(typres0.id, 816, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			(nstcall = -1, F817_6857(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5333[Dtype(RTCW(loc1))-610])(loc1, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.dispose */
void F245_5254 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 244, Current, 0, 0, 3345);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F245_5243(Current))) {
		RTHOOK(2);
		(nstcall = 0, F245_5231(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.directory_pointer */
EIF_POINTER F245_5255 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
}


/* {DIRECTORY}.last_entry_pointer */
EIF_POINTER F245_5256 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_);
}


/* {DIRECTORY}.set_name */
void F245_5257 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_name", 244, Current, 0, 1, 3348);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	tr1 = RTOUCR(133,(nstcall = 0, F245_5267), (Current));
	tr2 = (nstcall = 1, F264_5361(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.internal_name */
EIF_REFERENCE F245_5258 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DIRECTORY}.internal_name_pointer */
EIF_REFERENCE F245_5259 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("internal_name_pointer", 244, Current, 1, 0, 3350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.internal_detachable_name_pointer */
static EIF_REFERENCE F245_5260_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("internal_detachable_name_pointer", 244, Current, 0, 0, 3351);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_5260 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(233, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_5260_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.mode */
EIF_INTEGER_32 F245_5261 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
}


/* {DIRECTORY}.current_directory_string */

EIF_REFERENCE F245_5264 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (134,RTMS_EX_H(".",1,46));
}

/* {DIRECTORY}.parent_directory_string */

EIF_REFERENCE F245_5265 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (135,RTMS_EX_H("..",2,11822));
}

/* {DIRECTORY}.directory_separator_string */
static EIF_REFERENCE F245_5266_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(136)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("directory_separator_string", 244, Current, 0, 0, 3357);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
	tc1 = RTOUCB(EIF_CHARACTER_8,89,(nstcall = 1, F42_1687), (RTCW(tr1)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F245_5266 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(136,F245_5266_body,(Current));
}

/* {DIRECTORY}.file_info */
static EIF_REFERENCE F245_5267_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(133)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_info", 244, Current, 0, 0, 3358);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(263, 0x01).id, 263, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F264_5344(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F245_5267 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(133,F245_5267_body,(Current));
}

/* {DIRECTORY}.file_mkdir */
void F245_5268 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_mkdir", 244, Current, 0, 1, 3359);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_mkdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.dir_open */
EIF_POINTER F245_5269 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("dir_open", 244, Current, 0, 1, 3360);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_open((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.dir_rewind */
EIF_POINTER F245_5270 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
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
	
	RTEAA("dir_rewind", 244, Current, 0, 2, 3361);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.dir_close */
void F245_5271 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_close", 244, Current, 0, 1, 3362);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_dir_close(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.eif_dir_next */
EIF_POINTER F245_5272 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_next", 244, Current, 0, 1, 3363);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_next(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_delete */
void F245_5273 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_delete", 244, Current, 0, 1, 3364);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_unlink((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.eif_dir_exists */
EIF_BOOLEAN F245_5274 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_exists", 244, Current, 0, 1, 3365);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_readable */
EIF_BOOLEAN F245_5275 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_is_readable", 244, Current, 0, 1, 3366);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_readable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_executable */
EIF_BOOLEAN F245_5276 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_is_executable", 244, Current, 0, 1, 3367);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_executable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_writable */
EIF_BOOLEAN F245_5277 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_is_writable", 244, Current, 0, 1, 3368);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_rename */
void F245_5278 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_rename", 244, Current, 0, 2, 3369);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_rename((EIF_FILENAME) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}._invariant */
void F245_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 215, Current, 0, 0);
	RTIT("name_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit216 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
