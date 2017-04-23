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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/utp/Desktop/firstprocessor-ronaldfelipse-3d3a6448cdfb3922c3d0108afe146206791c2697/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_43738421_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_674763465_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t44[16];
    char t59[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned char t60;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5563);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB3;

LAB18:    t5 = (t0 + 5569);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB4;

LAB19:    t8 = (t0 + 5575);
    t10 = xsi_mem_cmp(t8, t2, 6U);
    if (t10 == 1)
        goto LAB5;

LAB20:    t11 = (t0 + 5581);
    t13 = xsi_mem_cmp(t11, t2, 6U);
    if (t13 == 1)
        goto LAB6;

LAB21:    t14 = (t0 + 5587);
    t16 = xsi_mem_cmp(t14, t2, 6U);
    if (t16 == 1)
        goto LAB7;

LAB22:    t17 = (t0 + 5593);
    t19 = xsi_mem_cmp(t17, t2, 6U);
    if (t19 == 1)
        goto LAB8;

LAB23:    t20 = (t0 + 5599);
    t22 = xsi_mem_cmp(t20, t2, 6U);
    if (t22 == 1)
        goto LAB9;

LAB24:    t23 = (t0 + 5605);
    t25 = xsi_mem_cmp(t23, t2, 6U);
    if (t25 == 1)
        goto LAB10;

LAB25:    t26 = (t0 + 5611);
    t28 = xsi_mem_cmp(t26, t2, 6U);
    if (t28 == 1)
        goto LAB11;

LAB26:    t29 = (t0 + 5617);
    t31 = xsi_mem_cmp(t29, t2, 6U);
    if (t31 == 1)
        goto LAB12;

LAB27:    t32 = (t0 + 5623);
    t34 = xsi_mem_cmp(t32, t2, 6U);
    if (t34 == 1)
        goto LAB13;

LAB28:    t35 = (t0 + 5629);
    t37 = xsi_mem_cmp(t35, t2, 6U);
    if (t37 == 1)
        goto LAB14;

LAB29:    t38 = (t0 + 5635);
    t40 = xsi_mem_cmp(t38, t2, 6U);
    if (t40 == 1)
        goto LAB15;

LAB30:    t41 = (t0 + 5641);
    t43 = xsi_mem_cmp(t41, t2, 6U);
    if (t43 == 1)
        goto LAB16;

LAB31:
LAB17:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 3232);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(21, ng0);
    t45 = (t0 + 1032U);
    t46 = *((char **)t45);
    t45 = (t0 + 5420U);
    t47 = (t0 + 1192U);
    t48 = *((char **)t47);
    t47 = (t0 + 5436U);
    t49 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t44, t46, t45, t48, t47);
    t50 = (t44 + 12U);
    t51 = *((unsigned int *)t50);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB33;

LAB34:    t54 = (t0 + 3232);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memcpy(t58, t49, 32U);
    xsi_driver_first_trans_fast_port(t54);
    goto LAB2;

LAB4:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB37;

LAB38:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB39;

LAB40:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB41;

LAB42:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t59, t5, t3);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t44, t2, t1, t6, t59);
    t9 = (t44 + 12U);
    t51 = *((unsigned int *)t9);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB43;

LAB44:    t11 = (t0 + 3232);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB9:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB45;

LAB46:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB10:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t59, t5, t3);
    t8 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t44, t2, t1, t6, t59);
    t9 = (t44 + 12U);
    t51 = *((unsigned int *)t9);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB47;

LAB48:    t11 = (t0 + 3232);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB11:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB49;

LAB50:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB12:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_2592010699_sub_43738421_503743352(IEEE_P_2592010699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t51 = *((unsigned int *)t8);
    t52 = (1U * t51);
    t53 = (32U != t52);
    if (t53 == 1)
        goto LAB51;

LAB52:    t9 = (t0 + 3232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB13:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t59, t2, t1, t5, t3);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t53 = *((unsigned char *)t9);
    t8 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t44, t6, t59, t53);
    t11 = (t44 + 12U);
    t51 = *((unsigned int *)t11);
    t52 = (1U * t51);
    t60 = (32U != t52);
    if (t60 == 1)
        goto LAB53;

LAB54:    t12 = (t0 + 3232);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB14:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t59, t2, t1, t5, t3);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t53 = *((unsigned char *)t9);
    t8 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t44, t6, t59, t53);
    t11 = (t44 + 12U);
    t51 = *((unsigned int *)t11);
    t52 = (1U * t51);
    t60 = (32U != t52);
    if (t60 == 1)
        goto LAB55;

LAB56:    t12 = (t0 + 3232);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB15:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t59, t2, t1, t5, t3);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t53 = *((unsigned char *)t9);
    t8 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t44, t6, t59, t53);
    t11 = (t44 + 12U);
    t51 = *((unsigned int *)t11);
    t52 = (1U * t51);
    t60 = (32U != t52);
    if (t60 == 1)
        goto LAB57;

LAB58:    t12 = (t0 + 3232);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB16:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5420U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5436U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t59, t2, t1, t5, t3);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t53 = *((unsigned char *)t9);
    t8 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t44, t6, t59, t53);
    t11 = (t44 + 12U);
    t51 = *((unsigned int *)t11);
    t52 = (1U * t51);
    t60 = (32U != t52);
    if (t60 == 1)
        goto LAB59;

LAB60:    t12 = (t0 + 3232);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB32:;
LAB33:    xsi_size_not_matching(32U, t52, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(32U, t52, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(32U, t52, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(32U, t52, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(32U, t52, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(32U, t52, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(32U, t52, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(32U, t52, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(32U, t52, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(32U, t52, 0);
    goto LAB52;

LAB53:    xsi_size_not_matching(32U, t52, 0);
    goto LAB54;

LAB55:    xsi_size_not_matching(32U, t52, 0);
    goto LAB56;

LAB57:    xsi_size_not_matching(32U, t52, 0);
    goto LAB58;

LAB59:    xsi_size_not_matching(32U, t52, 0);
    goto LAB60;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/tbProcesador_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
