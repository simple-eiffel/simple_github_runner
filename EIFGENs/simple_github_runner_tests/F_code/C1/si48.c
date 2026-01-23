/*
 * Code for class SIMPLE_ISO_8859_15_ZCODEC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si48.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_ISO_8859_15_ZCODEC}.name */

EIF_REFERENCE F68_2186 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (385,RTMS_EX_H("ISO-8859-15",11,1347677237));
}

/* {SIMPLE_ISO_8859_15_ZCODEC}.unicode_table */
EIF_REFERENCE F68_2187 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(386)

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("unicode_table", 67, Current, 2, 0, 965);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,846,973,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 128L),sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	(nstcall = -1, F847_7192(RTCW(tr1), tw1, ((EIF_INTEGER_32) 128L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
	tr2 = (nstcall = 1, F948_7750(RTCW(tr1), ((EIF_INTEGER_32) 31L)));
	tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc1)-280])(loc1));
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
		tw1 = (EIF_CHARACTER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 128L) + ti4_1);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc1)-280])(loc1));
		(nstcall = 1, F847_7209(RTCW(Result), tw1, ti4_1));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc1)-280])(loc1));
	}
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(949, 0x00).id, 949, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 32L);
	tr2 = (nstcall = 1, F948_7750(RTCW(tr1), ((EIF_INTEGER_32) 127L)));
	tr1 = (nstcall = 1, F699_6408(RTCW(tr2)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5046[Dtype(loc2)-280])(loc2));
		if (tb2) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc2)-280])(loc2));
		tw1 = (EIF_CHARACTER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 128L) + ti4_1);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5045[Dtype(loc2)-280])(loc2));
		(nstcall = 1, F847_7209(RTCW(Result), tw1, ti4_1));
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5047[Dtype(loc2)-280])(loc2));
	}
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 8364L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 164L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(9);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 352L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 166L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(10);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 353L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 168L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(11);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 381L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 180L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(12);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 382L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 184L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(13);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 338L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 188L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(14);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 339L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 189L) - ((EIF_INTEGER_32) 128L))));
	RTHOOK(15);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 376L);
	(nstcall = 1, F847_7209(RTCW(Result), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 190L) - ((EIF_INTEGER_32) 128L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("correct_size", EX_POST);
		ti4_1 = (nstcall = 1, F847_7204(Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 128L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

void EIF_Minit48 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
