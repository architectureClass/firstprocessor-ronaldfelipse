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

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *IEEE_P_1242562249;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_1242562249_init();
    work_a_3945067802_3212880686_init();
    work_a_3961274036_3212880686_init();
    work_a_0295498852_3212880686_init();
    work_a_2055461089_3212880686_init();
    work_a_1007874614_3212880686_init();
    work_a_4008818513_3212880686_init();
    work_a_0123541133_3212880686_init();
    work_a_2178422333_3212880686_init();
    work_a_2166523021_3212880686_init();
    work_a_0044078052_3212880686_init();
    work_a_0255460366_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_3261551314_3212880686_init();
    work_a_2540214590_3212880686_init();
    work_a_3781366023_3212880686_init();
    work_a_0542593727_3212880686_init();
    work_a_0020175983_3212880686_init();
    work_a_0474098308_3212880686_init();
    work_a_2278414088_3212880686_init();
    work_a_3221725143_3212880686_init();
    work_a_3863512822_3212880686_init();
    work_a_3340157507_2372691052_init();


    xsi_register_tops("work_a_3340157507_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
