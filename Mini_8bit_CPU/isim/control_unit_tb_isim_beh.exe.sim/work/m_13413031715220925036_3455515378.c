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
static const char *ng0 = "Time=%0t | Opcode=%b | Z=%b | acc_load=%b | acc_sel=%b | pc_load=%b | target=%h";
static const char *ng1 = "/home/ise/Mini_8bit_CPU/control_unit_tb.v";
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {255U, 0U};
static int ng4[] = {0, 0};
static const char *ng5 = "FAIL: LDI control";
static const char *ng6 = "PASS: LDI control";
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "FAIL: ADD control";
static const char *ng9 = "PASS: ADD control";
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {3U, 0U};
static const char *ng12 = "FAIL: NOT control";
static const char *ng13 = "PASS: NOT control";
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {4U, 0U};
static const char *ng16 = "FAIL: SHL control";
static const char *ng17 = "PASS: SHL control";
static unsigned int ng18[] = {12U, 0U};
static unsigned int ng19[] = {5U, 0U};
static int ng20[] = {1, 0};
static const char *ng21 = "FAIL: JZ taken";
static const char *ng22 = "PASS: JZ taken";
static unsigned int ng23[] = {0U, 0U};
static const char *ng24 = "FAIL: JZ not taken";
static const char *ng25 = "PASS: JZ not taken";
static const char *ng26 = "FAIL: NOP control";
static const char *ng27 = "PASS: NOP control";

void Monitor_90_2(char *);
void Monitor_90_2(char *);


static void Monitor_90_2_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1208U);
    t11 = *((char **)t9);
    t9 = (t0 + 1368U);
    t12 = *((char **)t9);
    t9 = (t0 + 1528U);
    t13 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 3, ng0, 8, t0, (char)118, t1, 64, (char)118, t5, 4, (char)118, t8, 1, (char)118, t10, 1, (char)118, t11, 3, (char)118, t12, 1, (char)118, t13, 4);

LAB1:    return;
}

static void Initial_26_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t22[8];
    char t25[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng1);

LAB4:    xsi_set_current_line(28, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(29, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(30, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(32, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB7;

LAB6:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB7;

LAB8:    memset(t7, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t8) != 0)
        goto LAB11;

LAB12:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB13;

LAB14:    memcpy(t33, t7, 8);

LAB15:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(35, ng1);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB28:    xsi_set_current_line(38, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB11:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB13:    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng2)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t20))
        goto LAB17;

LAB16:    t23 = (t21 + 4);
    t24 = (t20 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB17;

LAB18:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t26) != 0)
        goto LAB21;

LAB22:    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t7 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t25) = 1;
    goto LAB22;

LAB21:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB23:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t7 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t7);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB25;

LAB26:    xsi_set_current_line(33, ng1);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB28;

LAB29:    xsi_set_current_line(40, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB31;

LAB30:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB31;

LAB32:    memset(t7, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB36:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB37;

LAB38:    memcpy(t33, t7, 8);

LAB39:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(43, ng1);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB52:    xsi_set_current_line(45, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB35:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB36;

LAB37:    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng7)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t20))
        goto LAB41;

LAB40:    t23 = (t21 + 4);
    t24 = (t20 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB41;

LAB42:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t26) != 0)
        goto LAB45;

LAB46:    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t7 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB39;

LAB41:    *((unsigned int *)t22) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t25) = 1;
    goto LAB46;

LAB45:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB46;

LAB47:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t7 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t7);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB49;

LAB50:    xsi_set_current_line(41, ng1);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB52;

LAB53:    xsi_set_current_line(47, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB55;

LAB54:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB55;

LAB56:    memset(t7, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t8) != 0)
        goto LAB59;

LAB60:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB61;

LAB62:    memcpy(t33, t7, 8);

LAB63:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(50, ng1);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);

LAB76:    xsi_set_current_line(53, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB55:    *((unsigned int *)t4) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t7) = 1;
    goto LAB60;

LAB59:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng11)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t20))
        goto LAB65;

LAB64:    t23 = (t21 + 4);
    t24 = (t20 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB65;

LAB66:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t26) != 0)
        goto LAB69;

LAB70:    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t7 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB63;

LAB65:    *((unsigned int *)t22) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t25) = 1;
    goto LAB70;

LAB69:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB70;

LAB71:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t7 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t7);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB73;

LAB74:    xsi_set_current_line(48, ng1);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB76;

LAB77:    xsi_set_current_line(55, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB79;

LAB78:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB79;

LAB80:    memset(t7, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t8) != 0)
        goto LAB83;

LAB84:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB85;

LAB86:    memcpy(t33, t7, 8);

LAB87:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(58, ng1);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);

LAB100:    xsi_set_current_line(61, ng1);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(62, ng1);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(63, ng1);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB79:    *((unsigned int *)t4) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t7) = 1;
    goto LAB84;

LAB83:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB84;

LAB85:    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng15)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t20))
        goto LAB89;

LAB88:    t23 = (t21 + 4);
    t24 = (t20 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB89;

LAB90:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t26) != 0)
        goto LAB93;

LAB94:    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t7 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB87;

LAB89:    *((unsigned int *)t22) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t25) = 1;
    goto LAB94;

LAB93:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB94;

LAB95:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t7 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t7);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB97;

LAB98:    xsi_set_current_line(56, ng1);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB100;

LAB101:    xsi_set_current_line(65, ng1);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB103;

LAB102:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB103;

LAB104:    memset(t7, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t8) != 0)
        goto LAB107;

LAB108:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB109;

LAB110:    memcpy(t33, t7, 8);

LAB111:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(68, ng1);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);

LAB124:    xsi_set_current_line(70, ng1);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(71, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB103:    *((unsigned int *)t4) = 1;
    goto LAB104;

LAB105:    *((unsigned int *)t7) = 1;
    goto LAB108;

LAB107:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB108;

LAB109:    t20 = (t0 + 1528U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng19)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t20))
        goto LAB113;

LAB112:    t23 = (t21 + 4);
    t24 = (t20 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB113;

LAB114:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t26) != 0)
        goto LAB117;

LAB118:    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t7 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB111;

LAB113:    *((unsigned int *)t22) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t25) = 1;
    goto LAB118;

LAB117:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB118;

LAB119:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t7 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t7);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB121;

LAB122:    xsi_set_current_line(66, ng1);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    goto LAB124;

LAB125:    xsi_set_current_line(73, ng1);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB127;

LAB126:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB127;

LAB128:    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(76, ng1);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);

LAB131:    xsi_set_current_line(79, ng1);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(80, ng1);
    t2 = (t0 + 2968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB132;
    goto LAB1;

LAB127:    *((unsigned int *)t4) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(74, ng1);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    goto LAB131;

LAB132:    xsi_set_current_line(81, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB134;

LAB133:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB134;

LAB135:    memset(t7, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t8) != 0)
        goto LAB138;

LAB139:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB140;

LAB141:    memcpy(t33, t7, 8);

LAB142:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(84, ng1);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);

LAB155:    xsi_set_current_line(86, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

LAB134:    *((unsigned int *)t4) = 1;
    goto LAB135;

LAB136:    *((unsigned int *)t7) = 1;
    goto LAB139;

LAB138:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB139;

LAB140:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng23)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t20))
        goto LAB144;

LAB143:    t23 = (t21 + 4);
    t24 = (t20 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB144;

LAB145:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t26) != 0)
        goto LAB148;

LAB149:    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t7 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB142;

LAB144:    *((unsigned int *)t22) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t25) = 1;
    goto LAB149;

LAB148:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB149;

LAB150:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t7 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t7);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB152;

LAB153:    xsi_set_current_line(82, ng1);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    goto LAB155;

}

static void Initial_89_1(char *t0)
{

LAB0:    xsi_set_current_line(89, ng1);

LAB2:    xsi_set_current_line(90, ng1);
    Monitor_90_2(t0);

LAB1:    return;
}

void Monitor_90_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3464);
    t2 = (t0 + 3976);
    xsi_vlogfile_monitor((void *)Monitor_90_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_13413031715220925036_3455515378_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Initial_89_1,(void *)Monitor_90_2};
	xsi_register_didat("work_m_13413031715220925036_3455515378", "isim/control_unit_tb_isim_beh.exe.sim/work/m_13413031715220925036_3455515378.didat");
	xsi_register_executes(pe);
}
