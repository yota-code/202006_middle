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
** date of generation (MM/DD/YYYY): 06/30/2020 10:29:21
** last modification date for middle.lus (MM/DD/YYYY): 06/30/2020 
********************************************************************$*/

#ifndef _INCLUDE_mean
#    include "mean.h"
#endif

#ifndef _INCLUDE_median
#    include "median.h"
#endif

#define _INCLUDE_middle

/* ======================== */
/* CONTEXT for node middle */
/* ======================== */

/* Type for context */
typedef struct {
    real _I0_Input1;
    real _I1_Input2;
    real _I2_Input3;
    real _I3_Input4;
    real _I4_Input5;
    _int _I5_mode;
    real _O0_Output1;
    real _L1_middle;
    _int _L8_middle;
    _int _L11_middle;
    bool _L9_middle;
    real _L12_middle;
    real _L2_middle;
    real _L3_middle;
    real _L4_middle;
    real _L5_middle;
    real _L6_middle;
    _int _L14_middle;
    _int _L16_middle;
    bool _L15_middle;
    real _L7_middle;
    _int _L13_middle;
    real _L10_middle;
    bool _M_init_middle;
    _C_mean _C_1_mean;
    bool _M_condact_0_middle;
    _C_median _C_1_median;
    bool _M_condact_1_middle;
} _C_middle;

/* ============== */
/* INITIALISATION */
/* ============== */
extern void middle_init(_C_middle *);

/* =============== */
/* CYCLIC FUNCTION */
/* =============== */
extern void middle(_C_middle *);



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file middle.h
** End of generation (MM/DD/YYYY) : 06/30/2020 10:29:21
********************************************************************$*/
