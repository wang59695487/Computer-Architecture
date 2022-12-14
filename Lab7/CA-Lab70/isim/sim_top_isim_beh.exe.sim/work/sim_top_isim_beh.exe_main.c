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
    work_m_00000000001673622508_3632223972_init();
    work_m_00000000001010149997_1125858026_init();
    work_m_00000000002337436571_2269552370_init();
    work_m_00000000000553712429_3102432121_init();
    work_m_00000000000313592621_3823007873_init();
    work_m_00000000003365063128_0612941946_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003365063128_0612941946");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
