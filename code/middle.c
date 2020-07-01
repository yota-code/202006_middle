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

#include "middle.h"

/* ============== */
/* INITIALISATION */
/* ============== */

void middle_init(_C_middle * _C_)
{
    mean_init(&(_C_->_C_1_mean));
    (_C_->_M_condact_0_middle) = true;
    median_init(&(_C_->_C_1_median));
    (_C_->_M_condact_1_middle) = true;
    (_C_->_M_init_middle) = true;
}

/* ========= */
/* MAIN NODE */
/* ========= */

void middle(_C_middle * _C_)
{
/*#code for node middle */
    (_C_->_L1_middle) = (_C_->_I0_Input1);
    (_C_->_L8_middle) = (_C_->_I5_mode);
    (_C_->_L11_middle) = 1;
    (_C_->_L9_middle) = ((_C_->_L8_middle) == (_C_->_L11_middle));
    (_C_->_L12_middle) = (real) 0.0;
    (_C_->_L2_middle) = (_C_->_I1_Input2);
    (_C_->_L3_middle) = (_C_->_I2_Input3);
    (_C_->_L4_middle) = (_C_->_I3_Input4);
    (_C_->_L5_middle) = (_C_->_I4_Input5);
/* begin condact */
    if ((_C_->_L9_middle)) {
/* occurrence number of the node mean : 1 */
/* call to node not expanded mean */
/* occurrence number of the node mean : 1 */
	(_C_->_C_1_mean._I0_Input1) = (_C_->_L1_middle);
	(_C_->_C_1_mean._I1_Input2) = (_C_->_L2_middle);
	(_C_->_C_1_mean._I2_Input3) = (_C_->_L3_middle);
	(_C_->_C_1_mean._I3_Input4) = (_C_->_L4_middle);
	(_C_->_C_1_mean._I4_Input5) = (_C_->_L5_middle);
	mean(&(_C_->_C_1_mean));
	(_C_->_L6_middle) = (_C_->_C_1_mean._O0_Output1);
	(_C_->_M_condact_0_middle) = false;
    } else {
	if (_C_->_M_init_middle) {
	    (_C_->_L6_middle) = (_C_->_L12_middle);
	}
    }
/* end condact */
    (_C_->_L14_middle) = (_C_->_I5_mode);
    (_C_->_L16_middle) = 2;
    (_C_->_L15_middle) = ((_C_->_L14_middle) == (_C_->_L16_middle));
/* begin condact */
    if ((_C_->_L15_middle)) {
/* occurrence number of the node median : 1 */
/* call to node not expanded median */
/* occurrence number of the node median : 1 */
	(_C_->_C_1_median._I0_Input1) = (_C_->_L1_middle);
	(_C_->_C_1_median._I1_Input2) = (_C_->_L2_middle);
	(_C_->_C_1_median._I2_Input3) = (_C_->_L3_middle);
	(_C_->_C_1_median._I3_Input4) = (_C_->_L4_middle);
	(_C_->_C_1_median._I4_Input5) = (_C_->_L5_middle);
	median(&(_C_->_C_1_median));
	(_C_->_L7_middle) = (_C_->_C_1_median._O0_Output1);
	(_C_->_M_condact_1_middle) = false;
    } else {
	if (_C_->_M_init_middle) {
	    (_C_->_L7_middle) = (_C_->_L12_middle);
	}
    }
/* end condact */
    (_C_->_L13_middle) = (_C_->_I5_mode);
    switch ((_C_->_L13_middle)) {
    case 1:
	(_C_->_L10_middle) = (_C_->_L6_middle);
	break;
    case 2:
	(_C_->_L10_middle) = (_C_->_L7_middle);
	break;
    default:
	(_C_->_L10_middle) = (_C_->_L12_middle);
	break;
    }
    (_C_->_O0_Output1) = (_C_->_L10_middle);
    (_C_->_M_init_middle) = false;
/*#end code for node middle */
}



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file middle.c
** End of generation (MM/DD/YYYY) : 07/01/2020 10:03:28
********************************************************************$*/
