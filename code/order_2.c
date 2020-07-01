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

#include "middle_main.h"

#include "order_2.h"

/* ============== */
/* INITIALISATION */
/* ============== */

void order_2_init(_C_order_2 * _C_)
{
}

/* ========= */
/* MAIN NODE */
/* ========= */

void order_2(_C_order_2 * _C_)
{
/*#code for node order_2 */
    (_C_->_L1_middle) = (_C_->_I0_a);
    (_C_->_L2_middle) = (_C_->_I1_b);
    (_C_->_L3_middle) = ((_C_->_L1_middle) >= (_C_->_L2_middle));
    if ((_C_->_L3_middle)) {
	(_C_->_L4_middle) = (_C_->_L1_middle);
    } else {
	(_C_->_L4_middle) = (_C_->_L2_middle);
    }
    (_C_->_O0_max) = (_C_->_L4_middle);
    if ((_C_->_L3_middle)) {
	(_C_->_L5_middle) = (_C_->_L2_middle);
    } else {
	(_C_->_L5_middle) = (_C_->_L1_middle);
    }
    (_C_->_O1_min) = (_C_->_L5_middle);
/*#end code for node order_2 */
}



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file order_2.c
** End of generation (MM/DD/YYYY) : 07/01/2020 10:03:28
********************************************************************$*/
