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

#define _INCLUDE_order_2

/* ======================== */
/* CONTEXT for node order_2 */
/* ======================== */

/* Type for context */
typedef struct {
    real _I0_a;
    real _I1_b;
    real _O0_max;
    real _O1_min;
    real _L1_middle;
    real _L2_middle;
    bool _L3_middle;
    real _L4_middle;
    real _L5_middle;
} _C_order_2;

/* ============== */
/* INITIALISATION */
/* ============== */
extern void order_2_init(_C_order_2 *);

/* =============== */
/* CYCLIC FUNCTION */
/* =============== */
extern void order_2(_C_order_2 *);



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file order_2.h
** End of generation (MM/DD/YYYY) : 07/01/2020 10:03:28
********************************************************************$*/
