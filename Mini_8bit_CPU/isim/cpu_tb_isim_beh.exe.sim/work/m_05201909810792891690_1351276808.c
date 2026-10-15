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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Mini_8bit_CPU/control_unit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {12U, 0U};



static void Always_25_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4840);
    *((int *)t2) = 1;
    t3 = (t0 + 4552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(60, ng0);

LAB33:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB20:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(38, ng0);

LAB21:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(43, ng0);

LAB22:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(48, ng0);

LAB23:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(53, ng0);

LAB24:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2728U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB28;

LAB25:    if (t19 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t7) = 1;

LAB28:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB19;

LAB27:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(54, ng0);

LAB32:    xsi_set_current_line(55, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 3448);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2568U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t8 = (t0 + 3608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB31;

}


extern void work_m_05201909810792891690_1351276808_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_05201909810792891690_1351276808", "isim/cpu_tb_isim_beh.exe.sim/work/m_05201909810792891690_1351276808.didat");
	xsi_register_executes(pe);
}
