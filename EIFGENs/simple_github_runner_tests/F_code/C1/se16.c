/*
 * Code for class SED_ERROR_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se16.h"
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

/* {SED_ERROR_FACTORY}.new_internal_error */
EIF_REFERENCE F19_1530 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("new_internal_error", 18, Current, 0, 1, 390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_msg_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F18_1527(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SED_ERROR_FACTORY}.new_exception_error */
EIF_REFERENCE F19_1531 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("new_exception_error", 18, Current, 2, 1, 391);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("An exception of type {",22,2036384635);
	(nstcall = -1, F1032_9098(RTCW(loc1), tr1));
	RTHOOK(3);
	tr1 = (nstcall = 1, F1_5(arg1));
	tr2 = (nstcall = 1, F913_7421(RTCW(tr1)));
	(nstcall = 1, F1032_9137(RTCW(loc1), tr2));
	RTHOOK(4);
	tr1 = (nstcall = 1, F139_2987(RTCW(arg1)));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("} with message \"",16,1743242018);
		(nstcall = 1, F1032_9136(RTCW(loc1), tr1));
		RTHOOK(6);
		(nstcall = 1, F1032_9136(RTCW(loc1), loc2));
		RTHOOK(7);
		tr1 = RTMS_EX_H("\" occurred.",11,802258990);
		(nstcall = 1, F1032_9136(RTCW(loc1), tr1));
	} else {
		RTHOOK(8);
		tr1 = RTMS_EX_H("} occurred.",11,1431250990);
		(nstcall = 1, F1032_9136(RTCW(loc1), tr1));
	}
	RTHOOK(9);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F18_1527(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_ERROR_FACTORY}.new_unknown_storable_type */
EIF_REFERENCE F19_1532 (EIF_REFERENCE Current)
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
	
	RTEAA("new_unknown_storable_type", 18, Current, 0, 0, 392);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("Unknown storable type.",22,1506875694);
	(nstcall = -1, F18_1527(RTCW(Result), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_ERROR_FACTORY}.new_obsolete_storable_type */
EIF_REFERENCE F19_1533 (EIF_REFERENCE Current)
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
	
	RTEAA("new_obsolete_storable_type", 18, Current, 0, 0, 393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("Obsolete storable type, it might be possible to retrieve the data with the obsolete deserializer.",97,334295854);
	(nstcall = -1, F18_1527(RTCW(Result), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_ERROR_FACTORY}.new_invalid_object_error */
EIF_REFERENCE F19_1534 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("new_invalid_object_error", 18, Current, 0, 1, 394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS32_EX_H("I\000\000\000n\000\000\000v\000\000\000a\000\000\000l\000\000\000i\000\000\000d\000\000\000 \000\000\000r\000\000\000e\000\000\000t\000\000\000r\000\000\000i\000\000\000e\000\000\000v\000\000\000e\000\000\000d\000\000\000 \000\000\000o\000\000\000b\000\000\000j\000\000\000e\000\000\000c\000\000\000t\000\000\000 \000\000\000o\000\000\000f\000\000\000 \000\000\000t\000\000\000y\000\000\000p\000\000\000e\000\000\000 \000\000\000",33,2142919968);
	tr2 = (nstcall = 1, F1_5(arg1));
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr2))-912])(tr2));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr3));
	(nstcall = -1, F18_1527(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {SED_ERROR_FACTORY}.new_object_mismatch_error */
EIF_REFERENCE F19_1535 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("new_object_mismatch_error", 18, Current, 0, 1, 395);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS32_EX_H("U\000\000\000n\000\000\000f\000\000\000i\000\000\000x\000\000\000a\000\000\000b\000\000\000l\000\000\000e\000\000\000 \000\000\000o\000\000\000b\000\000\000j\000\000\000e\000\000\000c\000\000\000t\000\000\000 \000\000\000o\000\000\000f\000\000\000 \000\000\000t\000\000\000y\000\000\000p\000\000\000e\000\000\000 \000\000\000",25,1057138464);
	tr2 = (nstcall = 1, F1_5(arg1));
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr2))-912])(tr2));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr3));
	(nstcall = -1, F18_1527(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {SED_ERROR_FACTORY}.new_format_mismatch */
EIF_REFERENCE F19_1536 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
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
	RTLR(1,tr2);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("new_format_mismatch", 18, Current, 0, 2, 396);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("Storable format mismatch, got ",30,1113866784);
	tr2 = eif_out__u4_s1(arg1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, tr2));
	tr1 = RTMS_EX_H(" but expected ",14,1760902176);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	tr2 = eif_out__u4_s1(arg2);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, tr2));
	tr1 = RTMS_EX_H(".",1,46);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
	(nstcall = -1, F18_1527(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {SED_ERROR_FACTORY}.new_format_mismatch_66 */
EIF_REFERENCE F19_1537 (EIF_REFERENCE Current)
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
	
	RTEAA("new_format_mismatch_66", 18, Current, 0, 0, 397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("Storable created with 6.6 or earlier not using `is_for_fast_retrieval\' cannot be retrieved anymore. Contact EiffelSoftware if you need this functionality.",154,165751854);
	(nstcall = -1, F18_1527(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {SED_ERROR_FACTORY}.new_missing_type_error */
EIF_REFERENCE F19_1538 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("new_missing_type_error", 18, Current, 0, 2, 398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_stored_type_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_adapted_type_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTEQ(arg1, arg2)) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr1 = RTMS_EX_H("Unknown class type ",19,764793888);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, arg1));
		(nstcall = -1, F18_1527(RTCW(Result), tr2));
	} else {
		RTHOOK(5);
		Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr1 = RTMS_EX_H("Unknown class type ",19,764793888);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(tr1)-1026])(tr1, arg1));
		tr1 = RTMS_EX_H(" and unknown adapted class type ",32,1634152736);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr2))-1026])(tr2, tr1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R7298[Dtype(RTCW(tr1))-1026])(tr1, arg2));
		(nstcall = -1, F18_1527(RTCW(Result), tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_ERROR_FACTORY}.new_missing_attribute_error */
EIF_REFERENCE F19_1539 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("new_missing_attribute_error", 18, Current, 1, 2, 399);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_attribute_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr2 = (nstcall = 1, F218_4306(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS32_EX_H("N\000\000\000o\000\000\000 \000\000\000a\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000 \000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000d\000\000\000 \000\000\000\'\000\000\000",20,1822437927);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7206[Dtype(RTCW(arg2))-1026])(arg2));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\' in type ",10,1866515488)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = (nstcall = 1, F1023_8785(RTCW(loc1)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr2));
	(nstcall = -1, F18_1527(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_ERROR_FACTORY}.new_unknown_attribute_type_error */
EIF_REFERENCE F19_1540 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("new_unknown_attribute_type_error", 18, Current, 1, 2, 400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_attribute_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr2 = (nstcall = 1, F218_4306(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS32_EX_H("A\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000 \000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000d\000\000\000 \000\000\000\'\000\000\000",17,469205287);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7206[Dtype(RTCW(arg2))-1026])(arg2));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\' in type ",10,1866515488)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = (nstcall = 1, F1023_8785(RTCW(loc1)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" has an unknown type",20,584101989)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	(nstcall = -1, F18_1527(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_ERROR_FACTORY}.new_storable_version_mismatch_error */
EIF_REFERENCE F19_1541 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLR(6,arg2);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("new_storable_version_mismatch_error", 18, Current, 3, 2, 401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr2 = (nstcall = 1, F218_4306(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr1 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr2 = (nstcall = 1, F218_4314(RTCW(tr1), arg1));
	loc3 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	loc2 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1030_9022(RTCW(loc2), ((EIF_INTEGER_32) 256L)));
	RTHOOK(5);
	tr1 = RTMS32_EX_H("D\000\000\000i\000\000\000f\000\000\000f\000\000\000e\000\000\000r\000\000\000e\000\000\000n\000\000\000t\000\000\000 \000\000\000v\000\000\000e\000\000\000r\000\000\000s\000\000\000i\000\000\000o\000\000\000n\000\000\000 \000\000\000i\000\000\000n\000\000\000 \000\000\000c\000\000\000l\000\000\000a\000\000\000s\000\000\000s\000\000\000 \000\000\000",27,155704352);
	tr2 = (nstcall = 1, F1023_8785(RTCW(loc1)));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(".\012",2,11786)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	(nstcall = 1, F1032_9137(RTCW(loc2), tr1));
	RTHOOK(6);
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("Old version: ",13,753343264)));
	(nstcall = 1, F1032_9137(RTCW(loc2), tr1));
	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg2 == NULL)) {
		RTHOOK(8);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("None",4,1315925605)));
		(nstcall = 1, F1032_9137(RTCW(loc2), tr1));
	} else {
		RTHOOK(9);
		tr1 = (nstcall = 1, F1023_8785(RTCW(arg2)));
		(nstcall = 1, F1032_9137(RTCW(loc2), tr1));
	}
	RTHOOK(10);
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("New version: ",13,1516653600)));
	(nstcall = 1, F1032_9137(RTCW(loc2), tr1));
	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		RTHOOK(12);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("None",4,1315925605)));
		(nstcall = 1, F1032_9137(RTCW(loc2), tr1));
	} else {
		RTHOOK(13);
		(nstcall = 1, F1032_9136(RTCW(loc2), loc3));
	}
	RTHOOK(14);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F18_1527(RTCW(Result), loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_ERROR_FACTORY}.new_attribute_count_mismatch */
EIF_REFERENCE F19_1542 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("new_attribute_count_mismatch", 18, Current, 1, 2, 402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr2 = (nstcall = 1, F218_4306(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS32_EX_H("A\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000 \000\000\000c\000\000\000o\000\000\000u\000\000\000n\000\000\000t\000\000\000 \000\000\000m\000\000\000i\000\000\000s\000\000\000m\000\000\000a\000\000\000t\000\000\000c\000\000\000h\000\000\000 \000\000\000i\000\000\000n\000\000\000 \000\000\000c\000\000\000l\000\000\000a\000\000\000s\000\000\000s\000\000\000 \000\000\000",34,1559632672);
	tr2 = (nstcall = 1, F1023_8785(RTCW(loc1)));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" Expected ",10,344965152)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	ti4_1 = (nstcall = 1, F218_4321(RTCW(tr2), arg1));
	tr2 = eif_out__i4_s1(ti4_1);
	tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr3));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(", Received ",11,1344412448)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = eif_out__i4_s1(arg2);
	tr3 = (nstcall = 1, F1023_8785(RTCW(tr2)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr3));
	(nstcall = -1, F18_1527(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_ERROR_FACTORY}.new_attribute_mismatch */
EIF_REFERENCE F19_1543 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("new_attribute_mismatch", 18, Current, 0, 4, 403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_attribute_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_attribute_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_received_attribute_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	Result = RTLNS(eif_new_type(17, 0x01).id, 17, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS32_EX_H("A\000\000\000t\000\000\000t\000\000\000r\000\000\000i\000\000\000b\000\000\000u\000\000\000t\000\000\000e\000\000\000 \000\000\000m\000\000\000i\000\000\000s\000\000\000m\000\000\000a\000\000\000t\000\000\000c\000\000\000h\000\000\000 \000\000\000i\000\000\000n\000\000\000 \000\000\000c\000\000\000l\000\000\000a\000\000\000s\000\000\000s\000\000\000 \000\000\000",28,158713888);
	tr2 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr3 = (nstcall = 1, F218_4306(RTCW(tr2), arg1));
	tr2 = (nstcall = 1, F1023_8785(RTCW(tr3)));
	tr2 = (nstcall = 1, F1032_9156(tr1, tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(" for attribute \'",16,1026730023)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = (nstcall = 1, F1023_8785(RTCW(arg2)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("\'. Expected ",12,952971296)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr3 = (nstcall = 1, F218_4306(RTCW(tr2), arg3));
	tr2 = (nstcall = 1, F1023_8785(RTCW(tr3)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr2));
	tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(", Received ",11,1344412448)));
	tr1 = (nstcall = 1, F1032_9156(RTCW(tr2), tr1));
	tr2 = RTOUCR(154,(nstcall = 0, F19_1544), (Current));
	tr3 = (nstcall = 1, F218_4306(RTCW(tr2), arg4));
	tr2 = (nstcall = 1, F1023_8785(RTCW(tr3)));
	tr2 = (nstcall = 1, F1032_9156(RTCW(tr1), tr2));
	(nstcall = -1, F18_1527(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_ERROR_FACTORY}.internal */
static EIF_REFERENCE F19_1544_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(154)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("internal", 18, Current, 0, 0, 404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(217, 0x01).id, 217, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

EIF_REFERENCE F19_1544 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(154,F19_1544_body,(Current));
}

void EIF_Minit16 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
