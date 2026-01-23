#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* EQA_SYSTEM_PATH extend */
void _A9_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EQA_SYSTEM_PATH extend */
void __A9_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, op_2);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_REFERENCE _A1059_271 ( EIF_REFERENCE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F247_10521)(closed [1].it_r);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_REFERENCE __A1059_271 ( EIF_REFERENCE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F247_10521)(closed [1].it_r);
}

	/* PROCEDURE [G#1] call */
void _A384_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* PROCEDURE [G#1] call */
void __A384_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EQA_TEST_SET clean */
void _A29_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_BOOLEAN), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_b);
}

	/* EQA_TEST_SET clean */
void __A29_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_BOOLEAN), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_b);
}

	/* EQA_EVALUATOR invoke_routine */
void _A218_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_i4);
}

	/* EQA_EVALUATOR invoke_routine */
void __A218_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, op_2, closed [2].it_i4);
}

	/* MISMATCH_INFORMATION wipe_out */
void A250_98 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F833_6999)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A250_162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F839_7070)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A250_163 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F839_7071)(Current, arg1, arg2);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A253_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F844_10552)(closed [1].it_r, open [1].it_r);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void __A253_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F844_10552)(closed [1].it_r, op_2);
}


#ifdef __cplusplus
}
#endif
