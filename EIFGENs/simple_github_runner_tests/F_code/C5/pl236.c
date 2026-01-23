/*
 * Code for class PLAIN_TEXT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl236.h"
#include "eif_file.h"
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

/* {PLAIN_TEXT_FILE}.make_with_name */
void F692_6311 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_name", 691, Current, 0, 1, 5864);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("fn_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7163[Dtype(RTCW(arg1))-1026])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F690_6030(Current, arg1));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1031, 1).id);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F690_6089(Current))) {
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

/* {PLAIN_TEXT_FILE}.make_with_path */
void F692_6312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_path", 691, Current, 0, 1, 5865);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F912_7369(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F690_6031(Current, arg1));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1031, 1).id);
	(nstcall = -1, F1023_8726(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F690_6040(Current));
		tb1 = (nstcall = 1, F912_7392(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F690_6089(Current))) {
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

/* {PLAIN_TEXT_FILE}.is_plain_text */
EIF_BOOLEAN F692_6313 (EIF_REFERENCE Current)
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
	
	RTEAA("is_plain_text", 691, Current, 0, 0, 5866);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.support_storable */
EIF_BOOLEAN F692_6314 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {PLAIN_TEXT_FILE}.put_integer */
void F692_6315 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer", 691, Current, 0, 1, 5868);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putint */
void F692_6316 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("putint", 691, Current, 0, 1, 5869);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_32 */
void F692_6317 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer_32", 691, Current, 0, 1, 5870);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_64 */
void F692_6318 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	
	RTEAA("put_integer_64", 691, Current, 0, 1, 5871);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i8_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_16 */
void F692_6319 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
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
	
	RTEAA("put_integer_16", 691, Current, 0, 1, 5872);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i2_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_8 */
void F692_6320 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
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
	
	RTEAA("put_integer_8", 691, Current, 0, 1, 5873);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i1_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_64 */
void F692_6321 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("put_natural_64", 691, Current, 0, 1, 5874);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u8_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural */
void F692_6322 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural", 691, Current, 0, 1, 5875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u4_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_32 */
void F692_6323 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural_32", 691, Current, 0, 1, 5876);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u4_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_16 */
void F692_6324 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	
	RTEAA("put_natural_16", 691, Current, 0, 1, 5877);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u2_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_8 */
void F692_6325 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
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
	
	RTEAA("put_natural_8", 691, Current, 0, 1, 5878);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u1_s1(arg1);
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_boolean */
void F692_6326 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("put_boolean", 691, Current, 0, 1, 5879);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(65,(nstcall = 0, F690_6197), (Current));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(66,(nstcall = 0, F690_6198), (Current));
	}
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putbool */
void F692_6327 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("putbool", 691, Current, 0, 1, 5880);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(65,(nstcall = 0, F690_6197), (Current));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(66,(nstcall = 0, F690_6198), (Current));
	}
	(nstcall = 0, F692_6335(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real */
void F692_6328 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 691, Current, 0, 1, 5881);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	(nstcall = 0, F692_6373(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putreal */
void F692_6329 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("putreal", 691, Current, 0, 1, 5882);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	(nstcall = 0, F692_6373(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real_32 */
void F692_6330 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 691, Current, 0, 1, 5883);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	(nstcall = 0, F692_6373(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_double */
void F692_6331 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 691, Current, 0, 1, 5884);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	(nstcall = 0, F692_6374(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putdouble */
void F692_6332 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("putdouble", 691, Current, 0, 1, 5885);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	(nstcall = 0, F692_6374(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real_64 */
void F692_6333 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 691, Current, 0, 1, 5886);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	(nstcall = 0, F692_6374(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_string_32 */
void F692_6334 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("put_string_32", 691, Current, 0, 1, 5887);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F692_6335(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_string_general */
void F692_6335 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("put_string_general", 691, Current, 4, 1, 5888);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F690_6094(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc4 = (nstcall = 0, F692_6356(Current));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(14, 0x01).id, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = RTOUCR(67,(nstcall = 0, F15_1501), (RTCW(tr1)));
	RTHOOK(5);
	(nstcall = 1, F16_1510(RTCW(loc2), loc4, arg1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F16_1511(RTCW(loc2)));
	if (tb1) {
		RTHOOK(7);
		tr1 = (nstcall = 1, F16_1507(RTCW(loc2)));
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(14, 0x01).id, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc3 = RTOUCR(68,(nstcall = 0, F15_1499), (RTCW(tr1)));
		RTHOOK(9);
		(nstcall = 1, F16_1510(RTCW(loc2), loc3, arg1));
		RTHOOK(10);
		tb1 = (nstcall = 1, F16_1511(RTCW(loc2)));
		if (tb1) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F16_1507(RTCW(loc2)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tb1 = (nstcall = 1, F16_1513(RTCW(loc3), loc4));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(13);
				(nstcall = 1, F16_1510(RTCW(loc3), loc4, loc1));
				RTHOOK(14);
				tb1 = (nstcall = 1, F16_1511(RTCW(loc3)));
				if (tb1) {
					RTHOOK(15);
					tr1 = (nstcall = 1, F16_1507(RTCW(loc3)));
					loc1 = (EIF_REFERENCE) tr1;
				}
			}
		} else {
			RTHOOK(16);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7162[Dtype(RTCW(arg1))-1026])(arg1));
			if (tb1) {
				RTHOOK(17);
				tr1 = (nstcall = 1, F1023_8779(RTCW(arg1)));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(18);
				tr2 = (nstcall = 1, F1023_8785(RTCW(arg1)));
				tr1 = RTLNS(eif_new_type(44, 0x00).id, 44, _OBJSIZ_0_0_0_0_0_0_0_0_);
				loc1 = (nstcall = 0, F45_1814(RTCW(tr1), tr2));
			}
		}
	}
	RTHOOK(19);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4526[dtype-241])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_64 */
void F692_6336 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_64", 691, Current, 0, 0, 5889);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	ti8_1 = (nstcall = 1, F130_2859(RTCW(tr1)));
	*(EIF_INTEGER_64 *)(Current + O4500[dtype-237]) = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer */
void F692_6337 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer", 691, Current, 0, 0, 5890);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(4);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	ti4_1 = (nstcall = 1, F130_2857(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O4498[dtype-237]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readint */
void F692_6338 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readint", 691, Current, 0, 0, 5891);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(4);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	ti4_1 = (nstcall = 1, F130_2857(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O4498[dtype-237]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_32 */
void F692_6339 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_32", 691, Current, 0, 0, 5892);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	ti4_1 = (nstcall = 1, F130_2857(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O4498[dtype-237]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_16 */
void F692_6340 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_16", 691, Current, 0, 0, 5893);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	ti2_1 = (nstcall = 1, F130_2856(RTCW(tr1)));
	*(EIF_INTEGER_16 *)(Current + O4501[dtype-237]) = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_8 */
void F692_6341 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_8", 691, Current, 0, 0, 5894);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	ti1_1 = (nstcall = 1, F130_2855(RTCW(tr1)));
	*(EIF_INTEGER_8 *)(Current + O4502[dtype-237]) = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_64 */
void F692_6342 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_64", 691, Current, 0, 0, 5895);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	tu8_1 = (nstcall = 1, F130_2864(RTCW(tr1)));
	*(EIF_NATURAL_64 *)(Current + O4503[dtype-237]) = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural */
void F692_6343 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural", 691, Current, 0, 0, 5896);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	tu4_1 = (nstcall = 1, F130_2862(RTCW(tr1)));
	*(EIF_NATURAL_32 *)(Current + O4504[dtype-237]) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_32 */
void F692_6344 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_32", 691, Current, 0, 0, 5897);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	tu4_1 = (nstcall = 1, F130_2862(RTCW(tr1)));
	*(EIF_NATURAL_32 *)(Current + O4504[dtype-237]) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_16 */
void F692_6345 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_16", 691, Current, 0, 0, 5898);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	tu2_1 = (nstcall = 1, F130_2861(RTCW(tr1)));
	*(EIF_NATURAL_16 *)(Current + O4506[dtype-237]) = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_8 */
void F692_6346 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_8", 691, Current, 0, 0, 5899);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5611[dtype-691])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	tu1_1 = (nstcall = 1, F130_2860(RTCW(tr1)));
	*(EIF_NATURAL_8 *)(Current + O4507[dtype-237]) = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real */
void F692_6347 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real", 691, Current, 0, 0, 5900);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr4_1 = (nstcall = 0, F692_6370(Current, tp1));
	*(EIF_REAL_32 *)(Current + O4508[dtype-237]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readreal */
void F692_6348 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readreal", 691, Current, 0, 0, 5901);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr4_1 = (nstcall = 0, F692_6370(Current, tp1));
	*(EIF_REAL_32 *)(Current + O4508[dtype-237]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real_32 */
void F692_6349 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32", 691, Current, 0, 0, 5902);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr4_1 = (nstcall = 0, F692_6370(Current, tp1));
	*(EIF_REAL_32 *)(Current + O4508[dtype-237]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_double */
void F692_6350 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_double", 691, Current, 0, 0, 5903);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr8_1 = (nstcall = 0, F692_6371(Current, tp1));
	*(EIF_REAL_64 *)(Current + O4510[dtype-237]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readdouble */
void F692_6351 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readdouble", 691, Current, 0, 0, 5904);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr8_1 = (nstcall = 0, F692_6371(Current, tp1));
	*(EIF_REAL_64 *)(Current + O4510[dtype-237]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real_64 */
void F692_6352 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64", 691, Current, 0, 0, 5905);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr8_1 = (nstcall = 0, F692_6371(Current, tp1));
	*(EIF_REAL_64 *)(Current + O4510[dtype-237]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_to_string */
EIF_INTEGER_32 F692_6353 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("read_to_string", 691, Current, 0, 3, 5906);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F690_6088(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_file", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[dtype-690])(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_position", EX_PRE);
		tb1 = (nstcall = 1, F1023_8738(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("nb_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current + O5436[dtype-689]);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tp2 = (nstcall = 1, F848_7197(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	Result = (nstcall = 0, F690_6210(Current, tp1, tp2, arg3));
	RTHOOK(8);
	(nstcall = 1, F1025_8824(RTCW(arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("nb_char_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("nb_char_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("character_read", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[dtype-690])(Current))) {
			tb1 = (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
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
	return Result;
}

/* {PLAIN_TEXT_FILE}.last_string_32 */
EIF_REFERENCE F692_6354 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {PLAIN_TEXT_FILE}.read_unicode_line */
void F692_6355 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("read_unicode_line", 691, Current, 1, 0, 5908);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4572[dtype-241])(Current));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(14, 0x01).id, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = RTOUCR(67,(nstcall = 0, F15_1501), (RTCW(tr1)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F692_6356(Current));
	(nstcall = 1, F16_1510(RTCW(tr1), loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(4);
	tr1 = (nstcall = 0, F692_6356(Current));
	tb1 = (nstcall = 1, F16_1511(RTCW(tr1)));
	if (tb1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(nstcall = 1, F1032_9166(RTCW(tr1)));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = (nstcall = 0, F692_6356(Current));
		tr3 = (nstcall = 1, F16_1508(RTCW(tr2)));
		(nstcall = 1, F1032_9137(RTCW(tr1), tr3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.encoding */
EIF_REFERENCE F692_6356 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("encoding", 691, Current, 1, 0, 5909);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5601[dtype-691])(Current));
		RTHOOK(4);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("encoding_not_void", EX_POST);
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

/* {PLAIN_TEXT_FILE}.default_encoding */
static EIF_REFERENCE F692_6357_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(69)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("default_encoding", 691, Current, 0, 0, 5845);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(14, 0x01).id, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOUCR(68,(nstcall = 0, F15_1499), (RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_encoding_not_void", EX_POST);
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

EIF_REFERENCE F692_6357 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(69,F692_6357_body,(Current));
}

/* {PLAIN_TEXT_FILE}.set_encoding */
void F692_6358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_encoding", 691, Current, 0, 1, 5846);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("enc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("encoding_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F692_6356(Current)) == arg1)) {
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

/* {PLAIN_TEXT_FILE}.set_utf8_encoding */
void F692_6359 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("set_utf8_encoding", 691, Current, 0, 0, 5847);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(14, 0x01).id, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(68,(nstcall = 0, F15_1499), (RTCW(tr1)));
	(nstcall = 0, F692_6358(Current, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("encoding_set", EX_POST);
		tr1 = (nstcall = 0, F692_6356(Current));
		tr2 = RTLNS(eif_new_type(14, 0x01).id, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTOUCR(68,(nstcall = 0, F15_1499), (RTCW(tr2)));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {PLAIN_TEXT_FILE}.detect_encoding */
void F692_6360 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("detect_encoding", 691, Current, 5, 0, 5848);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		RTTE((nstcall = 0, F690_6090(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F690_6043(Current));
	RTHOOK(3);
	(nstcall = 0, F690_6118(Current));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
		RTHOOK(6);
		loc2 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
		RTHOOK(7);
		switch (loc2) {
			case (EIF_CHARACTER_8) '\357':
				RTHOOK(8);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
					RTHOOK(9);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
					RTHOOK(10);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
					RTHOOK(11);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\273')) {
						RTHOOK(12);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
							RTHOOK(13);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
							RTHOOK(14);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
							RTHOOK(15);
							if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\277')) {
								RTHOOK(16);
								(nstcall = 0, F692_6359(Current));
							} else {
								RTHOOK(17);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
							}
						}
					} else {
						RTHOOK(18);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\377':
				RTHOOK(19);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
					RTHOOK(20);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
					RTHOOK(21);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
					RTHOOK(22);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\376')) {
						RTHOOK(23);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
							RTHOOK(24);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
							RTHOOK(25);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
							RTHOOK(26);
							if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
								RTHOOK(27);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
								RTHOOK(28);
								loc5 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
							}
							RTHOOK(29);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\000') && (EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\000'))) {
								RTHOOK(30);
								tr1 = RTLNS(eif_new_type(15, 0x01).id, 15, _OBJSIZ_2_0_0_0_0_0_0_0_);
								tr2 = RTOUCR(70,(nstcall = 0, F17_1524), (Current));
								(nstcall = -1, F16_1504(RTCW(tr1), tr2));
								(nstcall = 0, F692_6358(Current, tr1));
							} else {
								RTHOOK(31);
								tr1 = RTLNS(eif_new_type(15, 0x01).id, 15, _OBJSIZ_2_0_0_0_0_0_0_0_);
								tr2 = RTOUCR(71,(nstcall = 0, F17_1523), (Current));
								(nstcall = -1, F16_1504(RTCW(tr1), tr2));
								(nstcall = 0, F692_6358(Current, tr1));
								RTHOOK(32);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
								RTHOOK(33);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
							}
						}
					} else {
						RTHOOK(34);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\376':
				RTHOOK(35);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
					RTHOOK(36);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
					RTHOOK(37);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
					RTHOOK(38);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\377')) {
						RTHOOK(39);
						tr1 = RTLNS(eif_new_type(15, 0x01).id, 15, _OBJSIZ_2_0_0_0_0_0_0_0_);
						tr2 = RTOUCR(72,(nstcall = 0, F17_1525), (Current));
						(nstcall = -1, F16_1504(RTCW(tr1), tr2));
						(nstcall = 0, F692_6358(Current, tr1));
					} else {
						RTHOOK(40);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\000':
				RTHOOK(41);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
					RTHOOK(42);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
					RTHOOK(43);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
					RTHOOK(44);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\000')) {
						RTHOOK(45);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
							RTHOOK(46);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
							RTHOOK(47);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
							RTHOOK(48);
							if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\376')) {
								RTHOOK(49);
								if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4519[dtype-241])(Current))) {
									RTHOOK(50);
									(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
									RTHOOK(51);
									loc5 = *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]);
									RTHOOK(52);
									if ((EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\377')) {
										RTHOOK(53);
										tr1 = RTLNS(eif_new_type(15, 0x01).id, 15, _OBJSIZ_2_0_0_0_0_0_0_0_);
										tr2 = RTOUCR(73,(nstcall = 0, F17_1526), (Current));
										(nstcall = -1, F16_1504(RTCW(tr1), tr2));
										(nstcall = 0, F692_6358(Current, tr1));
									} else {
										RTHOOK(54);
										(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
									}
								}
							} else {
								RTHOOK(55);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
							}
						}
					} else {
						RTHOOK(56);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
					}
				}
				break;
			default:
				RTHOOK(57);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
				break;
		}
	}
	RTHOOK(58);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(59);
		(nstcall = 0, F690_6123(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_encoding_bom */
void F692_6361 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_encoding_bom", 691, Current, 1, 0, 5849);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F690_6091(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("at_beginning", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F690_6043(Current)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCV((nstcall = 0, F692_6356(Current))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTOUCR(74,(nstcall = 0, F17_1520), (Current));
	tb1 = (nstcall = 1, F1023_8768(RTCW(loc1), tr1));
	if (tb1) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\357'));
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\273'));
		RTHOOK(7);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\277'));
	} else {
		RTHOOK(8);
		tr1 = RTOUCR(71,(nstcall = 0, F17_1523), (Current));
		tb1 = (nstcall = 1, F1023_8768(RTCW(loc1), tr1));
		if (tb1) {
			RTHOOK(9);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\377'));
			RTHOOK(10);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\376'));
		} else {
			RTHOOK(11);
			tr1 = RTOUCR(72,(nstcall = 0, F17_1525), (Current));
			tb1 = (nstcall = 1, F1023_8768(RTCW(loc1), tr1));
			if (tb1) {
				RTHOOK(12);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\376'));
				RTHOOK(13);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\377'));
			} else {
				RTHOOK(14);
				tr1 = RTOUCR(70,(nstcall = 0, F17_1524), (Current));
				tb1 = (nstcall = 1, F1023_8768(RTCW(loc1), tr1));
				if (tb1) {
					RTHOOK(15);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\377'));
					RTHOOK(16);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\376'));
					RTHOOK(17);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\000'));
					RTHOOK(18);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\000'));
				} else {
					RTHOOK(19);
					tr1 = RTOUCR(73,(nstcall = 0, F17_1526), (Current));
					tb1 = (nstcall = 1, F1023_8768(RTCW(loc1), tr1));
					if (tb1) {
						RTHOOK(20);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\000'));
						RTHOOK(21);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\000'));
						RTHOOK(22);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\376'));
						RTHOOK(23);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4528[dtype-241])(Current, (EIF_CHARACTER_8) '\377'));
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.internal_encoding */
EIF_REFERENCE F692_6362 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {PLAIN_TEXT_FILE}.ctoi_convertor */
static EIF_REFERENCE F692_6363_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(75)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("ctoi_convertor", 691, Current, 0, 0, 5851);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(129, 0x01).id, 129, _OBJSIZ_2_3_0_3_0_0_2_0_);
	(nstcall = -1, F130_2844(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(76,(nstcall = 0, F692_6364), (Current));
	(nstcall = 1, F127_2789(RTCW(Result), tr1));
	RTHOOK(3);
	(nstcall = 1, F127_2788(RTCW(Result), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F127_2787(RTCW(Result), (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F692_6363 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(75,F692_6363_body,(Current));
}

/* {PLAIN_TEXT_FILE}.internal_leading_separators */

EIF_REFERENCE F692_6364 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (76,RTMS_EX_H(" \012\015\011",4,537529609));
}

/* {PLAIN_TEXT_FILE}.is_sequence_an_expected_numeric */
EIF_BOOLEAN F692_6365 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O5609[Dtype(Current)-691]);
}


/* {PLAIN_TEXT_FILE}.read_number_sequence */
void F692_6366 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_number_sequence", 691, Current, 0, 2, 5854);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2724[Dtype(RTCW(arg1))-127])(arg1, arg2));
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + O5609[dtype-691]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[dtype-690])(Current))) {
			tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O5609[dtype-691]);
		}
		if (tb1) break;
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4556[dtype-241])(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5448[dtype-690])(Current))) {
			RTHOOK(6);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2730[Dtype(RTCW(arg1))-127])(arg1, *(EIF_CHARACTER_8 *)(Current + O4496[dtype-237])));
			RTHOOK(7);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2722[Dtype(RTCW(arg1))-127])(arg1));
			*(EIF_BOOLEAN *)(Current + O5609[dtype-691]) = (EIF_BOOLEAN) tb2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_with_no_type */
void F692_6367 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_with_no_type", 691, Current, 0, 0, 5855);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5607[dtype-691])(Current));
	(nstcall = 0, F692_6366(Current, tr1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O5609[dtype-691])) {
		RTHOOK(3);
		(nstcall = 0, F692_6368(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.return_characters */
void F692_6368 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("return_characters", 691, Current, 0, 0, 5856);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O4496[dtype-237]) == (EIF_CHARACTER_8) '\012')) {
		tb1 = (nstcall = 0, F225_4510(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
	}
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5328[dtype-690])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_gi */
EIF_INTEGER_32 F692_6369 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_gi", 691, Current, 0, 1, 5857);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_gi((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_gr */
EIF_REAL_32 F692_6370 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_gr", 691, Current, 0, 1, 5858);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REAL_32) eif_file_gr((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_gd */
EIF_REAL_64 F692_6371 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_gd", 691, Current, 0, 1, 5859);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REAL_64) eif_file_gd((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_pi */
void F692_6372 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pi", 691, Current, 0, 2, 5860);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pi((FILE*) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_pr */
void F692_6373 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pr", 691, Current, 0, 2, 5861);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pr((FILE*) arg1, (EIF_REAL_32) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_pd */
void F692_6374 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pd", 691, Current, 0, 2, 5862);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pd((FILE*) arg1, (EIF_REAL_64) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}._invariant */
void F692_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 235, Current, 0, 0);
	RTIT("plain_text", Current);
	if ((nstcall = 0, F692_6313(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit236 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
