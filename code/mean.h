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

#define _INCLUDE_mean

/* ======================== */
/* CONTEXT for node mean */
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
    real _L6_middle;
    real _L8_middle;
    real _L7_middle;
} _C_mean;

/* ============== */
/* INITIALISATION */
/* ============== */
extern void mean_init(_C_mean *);

/* =============== */
/* CYCLIC FUNCTION */
/* =============== */
extern void mean(_C_mean *);



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file mean.h
** End of generation (MM/DD/YYYY) : 07/01/2020 10:03:28
********************************************************************$*/
