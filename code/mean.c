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

#include "middle_main.h"

#include "mean.h"

/* ============== */
/* INITIALISATION */
/* ============== */

void mean_init(_C_mean * _C_)
{
}

/* ========= */
/* MAIN NODE */
/* ========= */

void mean(_C_mean * _C_)
{
/*#code for node mean */
    (_C_->_L1_middle) = (_C_->_I0_Input1);
    (_C_->_L2_middle) = (_C_->_I1_Input2);
    (_C_->_L3_middle) = (_C_->_I2_Input3);
    (_C_->_L4_middle) = (_C_->_I3_Input4);
    (_C_->_L5_middle) = (_C_->_I4_Input5);
    (_C_->_L6_middle) =
	(((((_C_->_L1_middle) + (_C_->_L2_middle)) + (_C_->_L3_middle)) +
	  (_C_->_L4_middle)) + (_C_->_L5_middle));
    (_C_->_O0_Output1) = (_C_->_L6_middle) / 5;
/*#end code for node mean */
}



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file mean.c
** End of generation (MM/DD/YYYY) : 06/30/2020 10:29:21
********************************************************************$*/
