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
    work_m_00000000003261253453_1733832700_init();
    work_m_00000000002353221080_4066630463_init();
    work_m_00000000003325072776_3674772129_init();
    work_m_00000000003152640694_0886308060_init();
    work_m_00000000003960033078_2536533753_init();
    work_m_00000000000090417157_2138213552_init();
    work_m_00000000002214435246_2058220583_init();
    work_m_00000000002417127464_3681164983_init();
    work_m_00000000001459401644_3102742382_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001459401644_3102742382");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
