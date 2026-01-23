/*
 * Code for class RT_EXTENSION_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt92.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_EXTENSION_GENERAL}.debugger_type_string */
EIF_REFERENCE F118_2694 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("debugger_type_string", 117, Current, 0, 1, 1406);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1_5(arg1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION_GENERAL}.tilda_equal_evaluation */
EIF_BOOLEAN F118_2695 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("tilda_equal_evaluation", 117, Current, 0, 2, 1407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) RTEQ(arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION_GENERAL}.is_equal_evaluation */
EIF_BOOLEAN F118_2696 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("is_equal_evaluation", 117, Current, 0, 2, 1408);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_b_attached", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(arg1))-0])(arg1, tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION_GENERAL}.equal_sign_evaluation */
EIF_BOOLEAN F118_2697 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("equal_sign_evaluation", 117, Current, 0, 2, 1396);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) RTCEQ(arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION_GENERAL}.saved_object_to */
EIF_REFERENCE F118_2698 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("saved_object_to", 117, Current, 1, 2, 1397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(690, 0x01).id, 690, _OBJSIZ_4_6_2_4_1_1_2_1_);
	(nstcall = -1, F690_6030(RTCW(loc1), arg2));
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = '\01';
		tb3 = (nstcall = 1, F690_6065(RTCW(loc1)));
		if (!(EIF_BOOLEAN) !tb3) {
			tb3 = (nstcall = 1, F690_6069(RTCW(loc1)));
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		(nstcall = 1, F690_6104(RTCW(loc1)));
		RTHOOK(5);
		tr1 = RTCCL(arg1);
		(nstcall = 1, F690_6161(RTCW(loc1), tr1));
		RTHOOK(6);
		(nstcall = 1, F690_6117(RTCW(loc1)));
		RTHOOK(7);
		Result = (EIF_REFERENCE) RTCCL(arg1);
	} else {
		RTHOOK(8);
		Result = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION_GENERAL}.object_loaded_from */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F118_2699 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(10);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc4);
	RTLR(5,arg1);
	RTLR(6,loc5);
	RTLR(7,Result);
	RTLR(8,Current);
	RTLR(9,saved_except);
	RTLIU(10);
	RTXSLS;
	
	RTEAA("object_loaded_from", 117, Current, 5, 2, 1398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(690, 0x01).id, 690, _OBJSIZ_4_6_2_4_1_1_2_1_);
		(nstcall = -1, F690_6030(RTCW(tr1), arg2));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tb1 = '\0';
		tb2 = (nstcall = 1, F690_6065(RTCW(loc2)));
		if (tb2) {
			tb2 = (nstcall = 1, F690_6068(RTCW(loc2)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			(nstcall = 1, F690_6100(RTCW(loc2)));
			RTHOOK(6);
			tr1 = (nstcall = 1, F690_6057(RTCW(loc2)));
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			(nstcall = 1, F690_6117(RTCW(loc2)));
			RTHOOK(8);
			loc4 = RTCCL(arg1);
			if (EIF_TEST(loc4)) {
				RTHOOK(9);
				tb1 = '\0';
				loc5 = RTCCL(loc1);
				if (EIF_TEST(loc5)) {
					tr1 = RTCCL(loc5);
					tb2 = (nstcall = 1, F1_7(loc4, tr1));
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(10);
					tr1 = RTCCL(loc5);
					(nstcall = 1, F1_16(loc4, tr1));
					RTHOOK(11);
					Result = (EIF_REFERENCE) RTCCL(loc4);
				}
			} else {
				RTHOOK(12);
				Result = (EIF_REFERENCE) RTCCL(loc1);
			}
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	} else {
		RTHOOK(14);
		Result = (EIF_REFERENCE) RTCCL(arg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(15);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(16);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(17);
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_EXTENSION_GENERAL}.object_runtime_info */
EIF_REFERENCE F118_2700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("object_runtime_info", 117, Current, 1, 1, 1399);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		Result = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1030_9022(RTCW(Result), ((EIF_INTEGER_32) 0L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("class_name=",11,372000573)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_4(arg1));
		tr2 = (nstcall = 1, F1023_8785(RTCW(tr1)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr2));
		RTHOOK(5);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(";",1,59)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(6);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("type_name=",10,1035693629)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F1_5(arg1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6309[Dtype(RTCW(tr1))-912])(tr1));
		(nstcall = 1, F1032_9137(RTCW(Result), tr2));
		RTHOOK(8);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(";",1,59)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(9);
		loc1 = RTLNS(eif_new_type(218, 0x01).id, 218, _OBJSIZ_0_0_0_0_0_0_0_0_);
		RTHOOK(10);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("dynamic_type=",13,257036861)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(11);
		tr1 = RTCCL(arg1);
		ti4_1 = (nstcall = 1, F219_4333(RTCW(loc1), tr1));
		(nstcall = 1, F1032_9140(RTCW(Result), ti4_1));
		RTHOOK(12);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(";",1,59)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(13);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("field_count=",12,1701268029)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(14);
		tr1 = RTCCL(arg1);
		ti4_1 = (nstcall = 1, F219_4379(RTCW(loc1), tr1));
		(nstcall = 1, F1032_9140(RTCW(Result), ti4_1));
		RTHOOK(15);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(";",1,59)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(16);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("deep_physical_size=",19,448823101)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(17);
		tr1 = RTCCL(arg1);
		tu8_1 = (nstcall = 1, F219_4384(RTCW(loc1), tr1));
		(nstcall = 1, F1032_9147(RTCW(Result), tu8_1));
		RTHOOK(18);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H(";",1,59)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(19);
		tr1 = (nstcall = 1, F1023_8785(RTMS_EX_H("physical_size=",14,1420008509)));
		(nstcall = 1, F1032_9137(RTCW(Result), tr1));
		RTHOOK(20);
		tr1 = RTCCL(arg1);
		tu8_1 = (nstcall = 1, F219_4383(RTCW(loc1), tr1));
		(nstcall = 1, F1032_9147(RTCW(Result), tu8_1));
	} else {
		RTHOOK(21);
		Result = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1023_8726(RTCW(Result)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit92 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
