/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_14195904947189104653_3383896982_init();
    work_m_02502153425535260118_3133866115_init();
    work_m_05201909810792891690_1351276808_init();
    work_m_06867709249037230254_2725559894_init();
    work_m_10382624440968961068_1756712915_init();
    work_m_14267879737481038099_1200043877_init();
    work_m_12334167492165667404_1912994691_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_12334167492165667404_1912994691");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
