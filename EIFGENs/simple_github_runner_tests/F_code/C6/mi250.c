/*
 * Code for class MISMATCH_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi250.h"
#include <eif_retrieve.h>
#include "../C9/ha432.h"
#include "../C6/mi250.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_INFORMATION}.default_create */
void F839_7062 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_create", 838, Current, 0, 0, 9424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F833_6945(Current, ((EIF_INTEGER_32) 5L)));
	RTHOOK(2);
	RTOUCP(283,(nstcall = 0, F839_7072), (Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {MISMATCH_INFORMATION}.class_name */
EIF_REFERENCE F839_7063 (EIF_REFERENCE Current)
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
	
	RTEAA("class_name", 838, Current, 1, 0, 9425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	
	RTHOOK(1);
	RTCT0("attached {STRING_8} item (type_name_key) as r", EX_CHECK);
	tr1 = RTOUCR(157,(nstcall = 0, F839_7066), (Current));
	tr1 = (nstcall = 0, F833_6951(Current, tr1));
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1027, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(2);
	Result = (EIF_REFERENCE) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {MISMATCH_INFORMATION}.stored_version */
EIF_REFERENCE F839_7064 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {MISMATCH_INFORMATION}.current_version */
EIF_REFERENCE F839_7065 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {MISMATCH_INFORMATION}.type_name_key */

EIF_REFERENCE F839_7066 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (157,RTMS_EX_H("_type_name",10,803527013));
}

/* {MISMATCH_INFORMATION}.is_version_mismatched */
EIF_BOOLEAN F839_7067 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("is_version_mismatched", 838, Current, 0, 0, 9429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	Result = (EIF_BOOLEAN) !RTEQ(tr1, tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MISMATCH_INFORMATION}.set_versions */
void F839_7068 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTEAA("set_versions", 838, Current, 0, 2, 9418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("stored_version_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("current_version_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) == arg2)) {
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

/* {MISMATCH_INFORMATION}.out */
EIF_REFERENCE F839_7069 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("out", 838, Current, 2, 0, 9419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV((nstcall = 0, F839_7063(Current)))+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_);
	(nstcall = -1, F1026_8856(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 40L) * ti4_2))));
	RTHOOK(2);
	tr1 = RTMS_EX_H("Attributes of original class ",29,488257824);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
	RTHOOK(3);
	tr1 = (nstcall = 0, F839_7063(Current));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": ",2,14880);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
	RTHOOK(5);
	(nstcall = 1, F1028_8972(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	tr1 = RTMS_EX_H(" item",5,1769481581);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
	RTHOOK(7);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_) - ((EIF_INTEGER_32) 1L)) != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) 's'));
	}
	RTHOOK(9);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '\012'));
	RTHOOK(10);
	(nstcall = 0, F833_6984(Current));
	for (;;) {
		RTHOOK(11);
		if ((nstcall = 0, F833_6979(Current))) break;
		RTHOOK(12);
		loc2 = (nstcall = 0, F833_6958(Current));
		RTHOOK(13);
		tr1 = RTOUCR(157,(nstcall = 0, F839_7066), (Current));
		if (!RTEQ(loc2, tr1)) {
			RTHOOK(14);
			tr1 = RTMS_EX_H("  ",2,8224);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				RTHOOK(16);
				tr1 = RTMS_EX_H("Void",4,1450142052);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
			} else {
				RTHOOK(17);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, loc2));
			}
			RTHOOK(18);
			tr1 = RTMS_EX_H(": ",2,14880);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
			RTHOOK(19);
			loc1 = (nstcall = 0, F833_6957(Current));
			RTHOOK(20);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				RTHOOK(21);
				tr1 = RTMS_EX_H("Void",4,1450142052);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
			} else {
				RTHOOK(22);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(loc1))-0])(loc1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7332[Dtype(RTCW(Result))-1027])(Result, tr1));
			}
			RTHOOK(23);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, (EIF_CHARACTER_8) '\012'));
		}
		RTHOOK(24);
		(nstcall = 0, F833_6985(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {MISMATCH_INFORMATION}.internal_put */
void F839_7070 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("internal_put", 838, Current, 0, 2, 9420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr2 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1026_8859(RTCW(tr2), arg2));
	(nstcall = 0, F833_6991(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {MISMATCH_INFORMATION}.set_string_versions */
void F839_7071 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("set_string_versions", 838, Current, 1, 2, 9421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(1026, 0x01).id, 1026, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F1026_8859(RTCW(loc1), arg1));
		RTHOOK(4);
		tb1 = (nstcall = 1, F1027_8925(RTCW(loc1)));
		if (tb1) {
			RTHOOK(5);
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
		} else {
			RTHOOK(6);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg2 == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(8);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(9);
		loc1 = RTLNS(eif_new_type(1026, 0x01).id, 1026, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F1026_8859(RTCW(loc1), arg2));
		RTHOOK(10);
		tb1 = (nstcall = 1, F1027_8925(RTCW(loc1)));
		if (tb1) {
			RTHOOK(11);
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
		} else {
			RTHOOK(12);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {MISMATCH_INFORMATION}.set_callback_pointers */
static void F839_7072_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTOUDV(283)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_callback_pointers", 838, Current, 0, 0, 9422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	(nstcall = 0, F839_7073(Current, Current, (EIF_POINTER) F833_6999, (EIF_POINTER) F839_7070, (EIF_POINTER) F839_7071));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
#undef Result
}

void F839_7072 (EIF_REFERENCE Current)
{
	GTCX
	RTOUCP(283,F839_7072_body,(Current));
}

/* {MISMATCH_INFORMATION}.set_mismatch_information_access */
void F839_7073 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_mismatch_information_access", 838, Current, 0, 4, 9423);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	{
		EIF_OBJECT larg1 = &arg1;
		EIF_POINTER larg2 = arg2;
		EIF_POINTER larg3 = arg3;
		EIF_POINTER larg4 = arg4;set_mismatch_information_access((EIF_OBJECT) larg1, (EIF_PROCEDURE) larg2, (EIF_PROCEDURE) larg3, (EIF_PROCEDURE) larg4);
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit250 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
