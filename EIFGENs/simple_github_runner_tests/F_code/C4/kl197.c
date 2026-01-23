/*
 * Code for class KL_PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl197.h"
#include <math.h>
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

/* {KL_PLATFORM}.boolean_bits */
static EIF_INTEGER_32 F226_4558_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 422)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_bits", 225, Current, 0, 0, 2755);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F225_4531(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F226_4558 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,422,F226_4558_body,(Current));
}

/* {KL_PLATFORM}.character_bits */
static EIF_INTEGER_32 F226_4559_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 423)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_bits", 225, Current, 0, 0, 2756);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("more_than_byte", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 8L))) {
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

EIF_INTEGER_32 F226_4559 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,423,F226_4559_body,(Current));
}

/* {KL_PLATFORM}.double_bits */
static EIF_INTEGER_32 F226_4560_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 424)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_bits", 225, Current, 0, 0, 2757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("more_than_real", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,425,(nstcall = 0, F226_4563), (Current)))) {
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

EIF_INTEGER_32 F226_4560 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,424,F226_4560_body,(Current));
}

/* {KL_PLATFORM}.integer_bits */
static EIF_INTEGER_32 F226_4561_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 426)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_bits", 225, Current, 0, 0, 2758);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("more_than_character", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,423,(nstcall = 0, F226_4559), (Current)))) {
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

EIF_INTEGER_32 F226_4561 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,426,F226_4561_body,(Current));
}

/* {KL_PLATFORM}.pointer_bits */
static EIF_INTEGER_32 F226_4562_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 427)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_bits", 225, Current, 0, 0, 2759);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F225_4544(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F226_4562 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,427,F226_4562_body,(Current));
}

/* {KL_PLATFORM}.real_bits */
static EIF_INTEGER_32 F226_4563_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 425)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_bits", 225, Current, 0, 0, 2760);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F226_4563 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,425,F226_4563_body,(Current));
}

/* {KL_PLATFORM}.boolean_bytes */
static EIF_INTEGER_32 F226_4564_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 428)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_bytes", 225, Current, 0, 0, 2761);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F225_4517(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F226_4564 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,428,F226_4564_body,(Current));
}

/* {KL_PLATFORM}.character_bytes */
static EIF_INTEGER_32 F226_4565_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 429)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_bytes", 225, Current, 0, 0, 2762);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("more_than_byte", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
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

EIF_INTEGER_32 F226_4565 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,429,F226_4565_body,(Current));
}

/* {KL_PLATFORM}.double_bytes */
static EIF_INTEGER_32 F226_4566_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 430)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_bytes", 225, Current, 0, 0, 2763);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("more_than_real", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,431,(nstcall = 0, F226_4569), (Current)))) {
			RTCK;
		} else {
			RTCF;
		}
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

EIF_INTEGER_32 F226_4566 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,430,F226_4566_body,(Current));
}

/* {KL_PLATFORM}.integer_bytes */
static EIF_INTEGER_32 F226_4567_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 432)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_bytes", 225, Current, 0, 0, 2764);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("more_than_character", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,429,(nstcall = 0, F226_4565), (Current)))) {
			RTCK;
		} else {
			RTCF;
		}
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

EIF_INTEGER_32 F226_4567 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,432,F226_4567_body,(Current));
}

/* {KL_PLATFORM}.pointer_bytes */
static EIF_INTEGER_32 F226_4568_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 433)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_bytes", 225, Current, 0, 0, 2765);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F225_4530(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F226_4568 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,433,F226_4568_body,(Current));
}

/* {KL_PLATFORM}.real_bytes */
static EIF_INTEGER_32 F226_4569_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 431)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_bytes", 225, Current, 0, 0, 2766);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F226_4569 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,431,F226_4569_body,(Current));
}

/* {KL_PLATFORM}.minimum_character_code */
static EIF_INTEGER_32 F226_4570_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 418)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minimum_character_code", 225, Current, 0, 0, 2767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
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

EIF_INTEGER_32 F226_4570 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,418,F226_4570_body,(Current));
}

/* {KL_PLATFORM}.maximum_character_code */
static EIF_INTEGER_32 F226_4571_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 419)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_character_code", 225, Current, 0, 0, 2768);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 255L))) {
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

EIF_INTEGER_32 F226_4571 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,419,F226_4571_body,(Current));
}

/* {KL_PLATFORM}.minimum_integer */
static EIF_INTEGER_32 F226_4572_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 417)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minimum_integer", 225, Current, 0, 0, 2769);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr8_1 = (EIF_REAL_64) (Result);
		ti4_1 = RTOUCB(EIF_INTEGER_32,426,(nstcall = 0, F226_4561), (Current));
		tr8_2 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) -2L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 2L)), (EIF_REAL_64) (tr8_2)) * tr8_3))) {
			RTCK;
		} else {
			RTCF;
		}
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

EIF_INTEGER_32 F226_4572 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,417,F226_4572_body,(Current));
}

/* {KL_PLATFORM}.maximum_integer */
static EIF_INTEGER_32 F226_4573_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 313)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_integer", 225, Current, 0, 0, 2770);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) -(EIF_INTEGER_32) (RTOUCB(EIF_INTEGER_32,417,(nstcall = 0, F226_4572), (Current)) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
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

EIF_INTEGER_32 F226_4573 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,313,F226_4573_body,(Current));
}

/* {KL_PLATFORM}.minimum_integer_64 */
static EIF_INTEGER_64 F226_4574_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_64)
	RTOUDB(EIF_INTEGER_64, 434)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minimum_integer_64", 225, Current, 0, 0, 2771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_64) ((EIF_INTEGER_64) RTI64C(0x8000000000000000));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
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

EIF_INTEGER_64 F226_4574 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_64,434,F226_4574_body,(Current));
}

/* {KL_PLATFORM}.maximum_integer_64 */
static EIF_INTEGER_64 F226_4575_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_64)
	RTOUDB(EIF_INTEGER_64, 435)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_integer_64", 225, Current, 0, 0, 2772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_64) ((EIF_INTEGER_64) RTI64C(9223372036854775807));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_64) -(EIF_INTEGER_64) (RTOUCB(EIF_INTEGER_64,434,(nstcall = 0, F226_4574), (Current)) + (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
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

EIF_INTEGER_64 F226_4575 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_64,435,F226_4575_body,(Current));
}

void EIF_Minit197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
