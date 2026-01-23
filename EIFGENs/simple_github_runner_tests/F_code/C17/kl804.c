/*
 * Code for class KL_TYPE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl804.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_TYPE}.same_objects */
EIF_BOOLEAN F1043_9333 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("same_objects", 1042, Current, 0, 2, 14145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1043_9334(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_TYPE}.same_detachable_objects */
EIF_BOOLEAN F1043_9334 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("same_detachable_objects", 1042, Current, 4, 2, 14146);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == arg1) || (EIF_BOOLEAN)(arg2 == arg2))) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(5);
			tb1 = '\0';
			tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = arg1;
			loc1 = RTRV(eif_new_type(968, 0x01),tr1);
			if (EIF_TEST(loc1)) {
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6912[Dtype(loc1)-968])(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				Result = '\0';
				tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = arg2;
				loc2 = RTRV(eif_new_type(968, 0x01),tr1);
				if (EIF_TEST(loc2)) {
					tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6912[Dtype(loc2)-968])(loc2));
					Result = tb1;
				}
			} else {
				RTHOOK(7);
				tb1 = '\0';
				tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = arg1;
				loc3 = RTRV(eif_new_type(965, 0x01),tr1);
				if (EIF_TEST(loc3)) {
					tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6878[Dtype(loc3)-965])(loc3));
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(8);
					Result = '\0';
					tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_INTEGER_32 *)tr1 = arg2;
					loc4 = RTRV(eif_new_type(965, 0x01),tr1);
					if (EIF_TEST(loc4)) {
						tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6878[Dtype(loc4)-965])(loc4));
						Result = tb1;
					}
				}
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

void EIF_Minit804 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
