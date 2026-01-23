/*
 * Code for class SIMPLE_ZSTRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si227.h"
#include "eif_helpers.h"
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

/* {SIMPLE_ZSTRING}.make */
void F312_5629 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 311, Current, 0, 1, 3743);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,847,976,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,arg1,sizeof(EIF_CHARACTER_8), EIF_TRUE);
	}
	(nstcall = -1, F848_7192(RTCW(tr1), (EIF_CHARACTER_8) '\000', arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = (nstcall = 0, F312_5637(Current));
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {SIMPLE_ZSTRING}.make_empty */
void F312_5630 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_empty", 311, Current, 0, 0, 3744);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F312_5629(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tb1 = (nstcall = 0, F312_5639(Current));
		if (tb1) {
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
}

/* {SIMPLE_ZSTRING}.make_from_string */
void F312_5631 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_string", 311, Current, 0, 1, 3745);
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
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
	(nstcall = 0, F312_5629(Current, ti4_1));
	RTHOOK(3);
	(nstcall = 0, F312_5646(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {SIMPLE_ZSTRING}.make_from_string_8 */
void F312_5632 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_string_8", 311, Current, 0, 1, 3746);
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	(nstcall = 0, F312_5629(Current, ti4_1));
	RTHOOK(3);
	(nstcall = 0, F312_5647(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {SIMPLE_ZSTRING}.make_from_utf_8 */
void F312_5633 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_utf_8", 311, Current, 0, 1, 3747);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("utf8_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	(nstcall = 0, F312_5629(Current, ti4_1));
	RTHOOK(3);
	(nstcall = 0, F312_5648(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SIMPLE_ZSTRING}.item */
EIF_CHARACTER_32 F312_5634 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("item", 311, Current, 2, 1, 3748);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F312_5640(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F848_7194(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_NATURAL_8) 26U))) {
		RTHOOK(4);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = (nstcall = 1, F8_1309(loc2, arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tw1 = (nstcall = 1, F8_1307(loc2, arg1));
			Result = (EIF_CHARACTER_32) tw1;
		} else {
			RTHOOK(6);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\032';
			Result = (EIF_CHARACTER_32) tw1;
		}
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
			RTHOOK(8);
			tw1 = (EIF_CHARACTER_32) loc1;
			Result = (EIF_CHARACTER_32) tw1;
		} else {
			RTHOOK(9);
			tr1 = (nstcall = 0, F312_5667(Current));
			tr2 = *(EIF_REFERENCE *)(Current);
			tc1 = (nstcall = 1, F848_7194(RTCW(tr2), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
			tw1 = (nstcall = 1, F67_2184(RTCW(tr1), tc1));
			Result = (EIF_CHARACTER_32) tw1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.z_code */
EIF_NATURAL_32 F312_5635 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("z_code", 311, Current, 0, 1, 3749);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F312_5640(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = (nstcall = 0, F312_5634(Current, arg1));
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.count */
EIF_INTEGER_32 F312_5636 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
}


/* {SIMPLE_ZSTRING}.capacity */
EIF_INTEGER_32 F312_5637 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("capacity", 311, Current, 0, 0, 3751);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F848_7204(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.utf_8_byte_count */
EIF_INTEGER_32 F312_5638 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("utf_8_byte_count", 311, Current, 2, 0, 3752);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		tw1 = (nstcall = 0, F312_5634(Current, loc1));
		tu4_1 = (EIF_NATURAL_32) tw1;
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(5);
			Result++;
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(7);
				Result += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(9);
					Result += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(10);
					Result += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		RTHOOK(11);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("at_least_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (Result >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.is_empty */
EIF_BOOLEAN F312_5639 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 311, Current, 0, 0, 3753);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
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

/* {SIMPLE_ZSTRING}.valid_index */
EIF_BOOLEAN F312_5640 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_index", 311, Current, 0, 1, 3754);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.has_mixed_encoding */
EIF_BOOLEAN F312_5641 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has_mixed_encoding", 311, Current, 1, 0, 3755);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F8_1308(loc1));
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

/* {SIMPLE_ZSTRING}.is_ascii */
EIF_BOOLEAN F312_5642 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_ascii", 311, Current, 1, 0, 3756);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F312_5641(Current));
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = (nstcall = 1, F848_7194(RTCW(tr1), loc1));
			ti4_2 = (EIF_INTEGER_32) (tc1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 128L));
			RTHOOK(7);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.is_valid_as_string_8 */
EIF_BOOLEAN F312_5643 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_as_string_8", 311, Current, 0, 0, 3757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F312_5641(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.put */
void F312_5644 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("put", 311, Current, 3, 2, 3758);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F312_5640(Current, arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F312_5667(Current));
	tc1 = (nstcall = 1, F67_2182(RTCW(tr1), arg1));
	loc1 = (EIF_CHARACTER_8) tc1;
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\032')) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\032';
		tb1 = (EIF_BOOLEAN)(arg1 != tw1);
	}
	if (tb1) {
		RTHOOK(4);
		(nstcall = 0, F312_5665(Current));
		RTHOOK(5);
		RTCT0("attached unencoded_area as l_unenc", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		(nstcall = 1, F8_1311(loc2, arg1, arg2));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F848_7209(RTCW(tr1), (EIF_CHARACTER_8) '\032', (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F848_7209(RTCW(tr1), loc1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(10);
			(nstcall = 1, F8_1312(loc3, arg2));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("character_set", EX_POST);
		tw1 = (nstcall = 0, F312_5634(Current, arg2));
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {SIMPLE_ZSTRING}.append_character */
void F312_5645 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTEAA("append_character", 311, Current, 2, 1, 3759);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	(nstcall = 0, F312_5666(Current, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))++;
	RTHOOK(3);
	tr1 = (nstcall = 0, F312_5667(Current));
	tc1 = (nstcall = 1, F67_2182(RTCW(tr1), arg1));
	loc1 = (EIF_CHARACTER_8) tc1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\032')) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\032';
		tb1 = (EIF_BOOLEAN)(arg1 != tw1);
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 0, F312_5665(Current));
		RTHOOK(6);
		RTCT0("attached unencoded_area as l_unenc", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		(nstcall = 1, F8_1311(loc2, arg1, ti4_2));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		(nstcall = 1, F848_7209(RTCW(tr1), (EIF_CHARACTER_8) '\032', (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		(nstcall = 1, F848_7209(RTCW(tr1), loc1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("character_appended", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		tw1 = (nstcall = 0, F312_5634(Current, ti4_2));
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {SIMPLE_ZSTRING}.append_string_general */
void F312_5646 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_string_general", 311, Current, 1, 1, 3760);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
	(nstcall = 0, F312_5666(Current, (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7149[Dtype(RTCW(arg1))-1026])(arg1, loc1));
		(nstcall = 0, F312_5645(Current, tw1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("count_increased", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ti4_4))) {
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

/* {SIMPLE_ZSTRING}.append_string_8 */
void F312_5647 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("append_string_8", 311, Current, 1, 1, 3761);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	(nstcall = 0, F312_5666(Current, (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		(nstcall = 1, F848_7209(RTCW(tr1), tc1, ti4_3));
		RTHOOK(6);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))++;
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("count_increased", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SIMPLE_ZSTRING}.append_utf_8 */
void F312_5648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_utf_8", 311, Current, 4, 1, 3762);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("utf8_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O7308[Dtype(arg1)-1025]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, loc1));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tu1_1 = (EIF_NATURAL_8) ti4_1;
		loc3 = (EIF_NATURAL_8) tu1_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			(nstcall = 0, F312_5645(Current, tw1));
			RTHOOK(8);
			loc1++;
		} else {
			RTHOOK(9);
			tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
				RTHOOK(10);
				tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 31L));
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc4 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(11);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) <= loc2)) {
					RTHOOK(12);
					tu4_1 = eif_bit_shift_left(loc4,((EIF_INTEGER_32) 6L));
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					ti4_1 = (EIF_INTEGER_32) (tc1);
					tu1_1 = (EIF_NATURAL_8) ti4_1;
					tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
					tu4_2 = (EIF_NATURAL_32) tu1_2;
					tu4_3 = eif_bit_or(tu4_1,tu4_2);
					loc4 = (EIF_NATURAL_32) tu4_3;
				}
				RTHOOK(13);
				tw1 = (EIF_CHARACTER_32) loc4;
				(nstcall = 0, F312_5645(Current, tw1));
				RTHOOK(14);
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(15);
				tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
					RTHOOK(16);
					tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) <= loc2)) {
						RTHOOK(18);
						tu4_1 = eif_bit_shift_left(loc4,((EIF_INTEGER_32) 6L));
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
						tu4_2 = (EIF_NATURAL_32) tu1_2;
						tu4_3 = eif_bit_or(tu4_1,tu4_2);
						loc4 = (EIF_NATURAL_32) tu4_3;
						RTHOOK(19);
						tu4_1 = eif_bit_shift_left(loc4,((EIF_INTEGER_32) 6L));
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
						tu4_2 = (EIF_NATURAL_32) tu1_2;
						tu4_3 = eif_bit_or(tu4_1,tu4_2);
						loc4 = (EIF_NATURAL_32) tu4_3;
					}
					RTHOOK(20);
					tw1 = (EIF_CHARACTER_32) loc4;
					(nstcall = 0, F312_5645(Current, tw1));
					RTHOOK(21);
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(22);
					tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L))) {
						RTHOOK(23);
						tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 7L));
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						loc4 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(24);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)) <= loc2)) {
							RTHOOK(25);
							tu4_1 = eif_bit_shift_left(loc4,((EIF_INTEGER_32) 6L));
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
							ti4_1 = (EIF_INTEGER_32) (tc1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
							tu4_2 = (EIF_NATURAL_32) tu1_2;
							tu4_3 = eif_bit_or(tu4_1,tu4_2);
							loc4 = (EIF_NATURAL_32) tu4_3;
							RTHOOK(26);
							tu4_1 = eif_bit_shift_left(loc4,((EIF_INTEGER_32) 6L));
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
							ti4_1 = (EIF_INTEGER_32) (tc1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
							tu4_2 = (EIF_NATURAL_32) tu1_2;
							tu4_3 = eif_bit_or(tu4_1,tu4_2);
							loc4 = (EIF_NATURAL_32) tu4_3;
							RTHOOK(27);
							tu4_1 = eif_bit_shift_left(loc4,((EIF_INTEGER_32) 6L));
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5631[Dtype(RTCW(arg1))-723])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L))));
							ti4_1 = (EIF_INTEGER_32) (tc1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 63L));
							tu4_2 = (EIF_NATURAL_32) tu1_2;
							tu4_3 = eif_bit_or(tu4_1,tu4_2);
							loc4 = (EIF_NATURAL_32) tu4_3;
						}
						RTHOOK(28);
						tw1 = (EIF_CHARACTER_32) loc4;
						(nstcall = 0, F312_5645(Current, tw1));
						RTHOOK(29);
						loc1 += ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(30);
						loc1++;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
}

/* {SIMPLE_ZSTRING}.prepend_character */
void F312_5649 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prepend_character", 311, Current, 0, 1, 3763);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F312_5650(Current, arg1, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("character_prepended", EX_POST);
		tw1 = (nstcall = 0, F312_5634(Current, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
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

/* {SIMPLE_ZSTRING}.insert_character */
void F312_5650 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("insert_character", 311, Current, 2, 2, 3764);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	(nstcall = 0, F312_5666(Current, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	loc1 = (EIF_INTEGER_32) ti4_2;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 < arg2)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		tc1 = (nstcall = 1, F848_7194(RTCW(tr2), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		(nstcall = 1, F848_7209(RTCW(tr1), tc1, loc1));
		RTHOOK(6);
		loc1--;
	}
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(8);
		(nstcall = 1, F8_1313(loc2, arg2, ((EIF_INTEGER_32) 1L)));
	}
	RTHOOK(9);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))++;
	RTHOOK(10);
	(nstcall = 0, F312_5644(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("character_inserted", EX_POST);
		tw1 = (nstcall = 0, F312_5634(Current, arg2));
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {SIMPLE_ZSTRING}.remove */
void F312_5651 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("remove", 311, Current, 2, 1, 3765);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F312_5640(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(3);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 >= ti4_2)) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		tc1 = (nstcall = 1, F848_7194(RTCW(tr2), loc1));
		(nstcall = 1, F848_7209(RTCW(tr1), tc1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, F8_1312(loc2, arg1));
		RTHOOK(8);
		(nstcall = 1, F8_1313(loc2, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) -1L)));
	}
	RTHOOK(9);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("count_decreased", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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
}

/* {SIMPLE_ZSTRING}.wipe_out */
void F312_5652 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("wipe_out", 311, Current, 1, 0, 3766);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 1, F8_1314(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("empty", EX_POST);
		tb1 = (nstcall = 0, F312_5639(Current));
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

/* {SIMPLE_ZSTRING}.to_string_32 */
EIF_REFERENCE F312_5653 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("to_string_32", 311, Current, 1, 0, 3767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1031, 0x01).id, 1031, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	(nstcall = -1, F1030_9022(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tw1 = (nstcall = 0, F312_5634(Current, loc1));
		(nstcall = 1, F1032_9150(RTCW(Result), tw1));
		RTHOOK(5);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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

/* {SIMPLE_ZSTRING}.to_string_8 */
EIF_REFERENCE F312_5654 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("to_string_8", 311, Current, 1, 0, 3768);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		tb1 = (nstcall = 0, F312_5643(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	(nstcall = -1, F1026_8856(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 >= ti4_1)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = (nstcall = 1, F848_7194(RTCW(tr1), loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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

/* {SIMPLE_ZSTRING}.to_utf_8 */
EIF_REFERENCE F312_5655 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("to_utf_8", 311, Current, 2, 0, 3769);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1027, 0x01).id, 1027, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 0, F312_5638(Current));
	(nstcall = -1, F1026_8856(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tw1 = (nstcall = 0, F312_5634(Current, loc1));
		tu4_1 = (EIF_NATURAL_32) tw1;
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) loc2;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(8);
				tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 6L));
				tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 192L)),tu4_1);
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
				RTHOOK(9);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),tu4_1);
				tc1 = (EIF_CHARACTER_8) tu4_2;
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(11);
					tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 12L));
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 224L)),tu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
					RTHOOK(12);
					tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
					RTHOOK(13);
					tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),tu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
				} else {
					RTHOOK(14);
					tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 18L));
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 240L)),tu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
					RTHOOK(15);
					tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 12L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
					RTHOOK(16);
					tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 6L));
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
					RTHOOK(17);
					tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),tu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R7336[Dtype(RTCW(Result))-1027])(Result, tc1));
				}
			}
		}
		RTHOOK(18);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.as_string_32 */
EIF_REFERENCE F312_5656 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("as_string_32", 311, Current, 0, 0, 3770);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F312_5653(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.is_equal */
EIF_BOOLEAN F312_5657 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_equal", 311, Current, 1, 1, 3771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			tw1 = (nstcall = 0, F312_5634(Current, loc1));
			tw2 = (nstcall = 1, F312_5634(RTCW(arg1), loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
			RTHOOK(7);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F312_5658(Current, arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F312_5658(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {SIMPLE_ZSTRING}.is_less */
EIF_BOOLEAN F312_5658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_less", 311, Current, 2, 1, 3772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_0_);
	ti4_3 = eif_min_int32 (ti4_1,ti4_2);
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || Result)) {
			tw1 = (nstcall = 0, F312_5634(Current, loc1));
			tw2 = (nstcall = 1, F312_5634(RTCW(arg1), loc1));
			tb1 = (EIF_BOOLEAN) (tw1 > tw2);
		}
		if (tb1) break;
		RTHOOK(5);
		tw1 = (nstcall = 0, F312_5634(Current, loc1));
		tw2 = (nstcall = 1, F312_5634(RTCW(arg1), loc1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tw1 < tw2);
		RTHOOK(6);
		loc1++;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) (loc1 > loc2))) {
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_0_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("asymmetric", EX_POST);
		tb2 = '\01';
		if (Result) {
			tb3 = (nstcall = 1, F312_5658(RTCW(arg1), Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
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
	return Result;
}

/* {SIMPLE_ZSTRING}.same_string */
EIF_BOOLEAN F312_5659 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("same_string", 311, Current, 1, 1, 3773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7185[Dtype(RTCW(arg1))-1026])(arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			tw1 = (nstcall = 0, F312_5634(Current, loc1));
			tw2 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R7149[Dtype(RTCW(arg1))-1026])(arg1, loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
			RTHOOK(7);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.copy_of */
EIF_REFERENCE F312_5660 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("copy_of", 311, Current, 0, 0, 3774);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	(nstcall = -1, F312_5629(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F312_5653(Current));
	(nstcall = 1, F312_5646(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("different_object", EX_POST);
		if ((EIF_BOOLEAN)(Result != Current)) {
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

/* {SIMPLE_ZSTRING}.substring */
EIF_REFERENCE F312_5661 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("substring", 311, Current, 1, 2, 3775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
	(nstcall = -1, F312_5629(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		RTHOOK(7);
		tw1 = (nstcall = 0, F312_5634(Current, loc1));
		(nstcall = 1, F312_5645(RTCW(Result), tw1));
		RTHOOK(8);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("correct_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_2_0_0_0_);
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	return Result;
}

/* {SIMPLE_ZSTRING}.new_cursor */
EIF_REFERENCE F312_5662 (EIF_REFERENCE Current)
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
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("new_cursor", 311, Current, 0, 0, 3776);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(281, 0x01).id, 281, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F282_5517(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {SIMPLE_ZSTRING}.area */
EIF_REFERENCE F312_5663 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_ZSTRING}.unencoded_area */
EIF_REFERENCE F312_5664 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SIMPLE_ZSTRING}.ensure_unencoded_area */
void F312_5665 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("ensure_unencoded_area", 311, Current, 0, 0, 3779);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(2);
		tr1 = RTLNSMART(eif_new_type(7, 0).id);
		(nstcall = -1, F8_1306(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* {SIMPLE_ZSTRING}.grow_if_needed */
void F312_5666 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("grow_if_needed", 311, Current, 1, 1, 3780);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F312_5637(Current));
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		RTHOOK(2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,847,976,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 3L)) / ((EIF_INTEGER_32) 2L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		}
		(nstcall = -1, F848_7192(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 3L)) / ((EIF_INTEGER_32) 2L))));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		(nstcall = 1, F848_7216(RTCW(loc1), tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1));
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("sufficient", EX_POST);
		ti4_1 = (nstcall = 0, F312_5637(Current));
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
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

/* {SIMPLE_ZSTRING}.codec */
EIF_REFERENCE F312_5667 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("codec", 311, Current, 0, 0, 3781);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F312_5668(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZSTRING}.shared_codec */
EIF_REFERENCE F312_5668 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(294)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("shared_codec", 311, Current, 0, 0, 3782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
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

/* {SIMPLE_ZSTRING}._invariant */
void F312_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 226, Current, 0, 0);
	RTIT("count_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_bounded", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_2 = (nstcall = 0, F312_5637(Current));
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("area_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit227 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
