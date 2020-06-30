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

#include "median.h"

/* ============== */
/* INITIALISATION */
/* ============== */

void median_init(_C_median * _C_)
{
    order_2_init(&(_C_->_C_6_order_2));
    order_2_init(&(_C_->_C_7_order_2));
    order_2_init(&(_C_->_C_8_order_2));
    order_2_init(&(_C_->_C_9_order_2));
    order_2_init(&(_C_->_C_10_order_2));
    order_2_init(&(_C_->_C_11_order_2));
}

/* ========= */
/* MAIN NODE */
/* ========= */

void median(_C_median * _C_)
{
/*#code for node median */
    (_C_->_L1_middle) = (_C_->_I0_Input1);
    (_C_->_L2_middle) = (_C_->_I1_Input2);
    (_C_->_L3_middle) = (_C_->_I2_Input3);
    (_C_->_L4_middle) = (_C_->_I3_Input4);
    (_C_->_L5_middle) = (_C_->_I4_Input5);
/* call to node not expanded order_2 */
/* occurrence number of the node order_2 : 6 */
    (_C_->_C_6_order_2._I0_a) = (_C_->_L4_middle);
    (_C_->_C_6_order_2._I1_b) = (_C_->_L5_middle);
    order_2(&(_C_->_C_6_order_2));
    (_C_->_L17_middle) = (_C_->_C_6_order_2._O0_max);
    (_C_->_L18_middle) = (_C_->_C_6_order_2._O1_min);
/* call to node not expanded order_2 */
/* occurrence number of the node order_2 : 7 */
    (_C_->_C_7_order_2._I0_a) = (_C_->_L3_middle);
    (_C_->_C_7_order_2._I1_b) = (_C_->_L17_middle);
    order_2(&(_C_->_C_7_order_2));
    (_C_->_L19_middle) = (_C_->_C_7_order_2._O0_max);
    (_C_->_L20_middle) = (_C_->_C_7_order_2._O1_min);
/* call to node not expanded order_2 */
/* occurrence number of the node order_2 : 8 */
    (_C_->_C_8_order_2._I0_a) = (_C_->_L2_middle);
    (_C_->_C_8_order_2._I1_b) = (_C_->_L19_middle);
    order_2(&(_C_->_C_8_order_2));
    (_C_->_L21_middle) = (_C_->_C_8_order_2._O0_max);
    (_C_->_L22_middle) = (_C_->_C_8_order_2._O1_min);
/* call to node not expanded order_2 */
/* occurrence number of the node order_2 : 9 */
    (_C_->_C_9_order_2._I0_a) = (_C_->_L1_middle);
    (_C_->_C_9_order_2._I1_b) = (_C_->_L21_middle);
    order_2(&(_C_->_C_9_order_2));
    (_C_->_L23_middle) = (_C_->_C_9_order_2._O0_max);
    (_C_->_L24_middle) = (_C_->_C_9_order_2._O1_min);
/* call to node not expanded order_2 */
/* occurrence number of the node order_2 : 10 */
    (_C_->_C_10_order_2._I0_a) = (_C_->_L24_middle);
    (_C_->_C_10_order_2._I1_b) = (_C_->_L22_middle);
    order_2(&(_C_->_C_10_order_2));
    (_C_->_L25_middle) = (_C_->_C_10_order_2._O0_max);
    (_C_->_L26_middle) = (_C_->_C_10_order_2._O1_min);
/* call to node not expanded order_2 */
/* occurrence number of the node order_2 : 11 */
    (_C_->_C_11_order_2._I0_a) = (_C_->_L26_middle);
    (_C_->_C_11_order_2._I1_b) = (_C_->_L20_middle);
    order_2(&(_C_->_C_11_order_2));
    (_C_->_L27_middle) = (_C_->_C_11_order_2._O0_max);
    (_C_->_L28_middle) = (_C_->_C_11_order_2._O1_min);
    (_C_->_O0_Output1) = (_C_->_L27_middle);
/*#end code for node median */
}



/*$************* SCADE_KCG KCG Version 5.1.1 (build i10) **************
** End of file median.c
** End of generation (MM/DD/YYYY) : 06/30/2020 10:29:21
********************************************************************$*/
