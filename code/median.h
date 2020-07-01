/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** Command :
** l2C        middle.lus -node middle
**     -noexp @ALL@
**     -keep_named_var
**     -noassert
**     -const
**     -bitwise
**     -loc_ctx
**     -split
**     -no_copy_mem
**     -debug
** date of generation (MM/DD/YYYY): 07/01/2020 10:03:28
** last modification date for middle.lus (MM/DD/YYYY): 07/01/2020 
********************************************************************$*/

#ifndef _INCLUDE_order_2
#    include "order_2.h"
#endif

#define _INCLUDE_median

/* ======================== */
/* CONTEXT for node median */
/* ======================== */

/* Type for context */
typedef struct {
    real _I0_Input1;
    real _I1_Input2;
    real _I2_Input3;
    real _I3_Input4;
    real _I4_Input5;
    real _O0_Output1;
    real _L1_middle;
    real _L2_middle;
    real _L3_middle;
    real _L4_middle;
    real _L5_middle;
    real _L17_middle;
    real _L18_middle;
    real _L19_middle;
    real _L20_middle;
    real _L21_middle;
    real _L22_middle;
    real _L23_middle;
    real _L24_middle;
    real _L29_middle;
    real _L30_middle;
    real _L31_middle;
    real _L32_middle;
    real _L33_middle;
    real _L34_middle;
    _C_order_2 _C_6_order_2;
    _C_order_2 _C_7_order_2;
    _C_order_2 _C_8_order_2;
    _C_order_2 _C_9_order_2;
    _C_order_2 _C_12_order_2;
    _C_order_2 _C_13_order_2;
    _C_order_2 _C_14_order_2;
} _C_median;

/* ============== */
/* INITIALISATION */
/* ============== */
extern void median_init(_C_median *);

/* =============== */
/* CYCLIC FUNCTION */
/* =============== */
extern void median(_C_median *);



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file median.h
** End of generation (MM/DD/YYYY) : 07/01/2020 10:03:28
********************************************************************$*/
