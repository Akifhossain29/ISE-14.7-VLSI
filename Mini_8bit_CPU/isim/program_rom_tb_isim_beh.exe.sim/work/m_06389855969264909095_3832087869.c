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
static const char *ng0 = "Time=%0t | Address=%h | Instruction=%h";
static const char *ng1 = "/home/ise/Mini_8bit_CPU/program_rom_tb.v";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {511U, 0U};
static const char *ng4 = "FAIL: LDI instruction";
static const char *ng5 = "PASS: LDI instruction";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {1792U, 0U};
static const char *ng8 = "FAIL: NOT instruction";
static const char *ng9 = "PASS: NOT instruction";
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3077U, 0U};
static const char *ng12 = "FAIL: JZ instruction";
static const char *ng13 = "PASS: JZ instruction";
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {529U, 0U};
static const char *ng16 = "FAIL: ADD instruction";
static const char *ng17 = "PASS: ADD instruction";
static unsigned int ng18[] = {6U, 0U};
static unsigned int ng19[] = {2048U, 0U};
static const char *ng20 = "FAIL: SHL instruction";
static const char *ng21 = "PASS: SHL instruction";
static unsigned int ng22[] = {9U, 0U};
static const char *ng23 = "FAIL: NOP instruction";
static const char *ng24 = "PASS: NOP instruction";

void Monitor_64_2(char *);
void Monitor_64_2(char *);


static void Monitor_64_2_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t1, 64, (char)118, t5, 4, (char)118, t7, 12);

LAB1:    return;
}

static void Initial_14_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng1);

LAB4:    xsi_set_current_line(16, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(17, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(18, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB7;

LAB6:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB7;

LAB8:    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(21, ng1);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB11:    xsi_set_current_line(23, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(24, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(19, ng1);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB11;

LAB12:    xsi_set_current_line(25, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB14;

LAB13:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB14;

LAB15:    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(28, ng1);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB18:    xsi_set_current_line(31, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(32, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(26, ng1);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB18;

LAB19:    xsi_set_current_line(33, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB21;

LAB20:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB21;

LAB22:    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(36, ng1);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);

LAB25:    xsi_set_current_line(38, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(34, ng1);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB25;

LAB26:    xsi_set_current_line(40, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB28;

LAB27:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB28;

LAB29:    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(43, ng1);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);

LAB32:    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(47, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(41, ng1);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB32;

LAB33:    xsi_set_current_line(48, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB35;

LAB34:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB35;

LAB36:    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(51, ng1);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);

LAB39:    xsi_set_current_line(53, ng1);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB35:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(49, ng1);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    goto LAB39;

LAB40:    xsi_set_current_line(55, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB42;

LAB41:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB42;

LAB43:    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(58, ng1);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);

LAB46:    xsi_set_current_line(60, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

LAB42:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(56, ng1);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    goto LAB46;

}

static void Initial_63_1(char *t0)
{

LAB0:    xsi_set_current_line(63, ng1);

LAB2:    xsi_set_current_line(64, ng1);
    Monitor_64_2(t0);

LAB1:    return;
}

void Monitor_64_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2664);
    t2 = (t0 + 3176);
    xsi_vlogfile_monitor((void *)Monitor_64_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_06389855969264909095_3832087869_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Initial_63_1,(void *)Monitor_64_2};
	xsi_register_didat("work_m_06389855969264909095_3832087869", "isim/program_rom_tb_isim_beh.exe.sim/work/m_06389855969264909095_3832087869.didat");
	xsi_register_executes(pe);
}
