/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/workspace/single_cpu/help.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {25000, 0};



static void I243_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(243, ng0);

LAB2:    xsi_set_current_line(244, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(245, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 788);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void A247_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 1484U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 1664);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(247, ng0);

LAB5:    xsi_set_current_line(248, ng0);
    t3 = (t0 + 880);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 16, t6, 32);
    t8 = (t0 + 880);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(249, ng0);
    t2 = (t0 + 880);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t6 = (t7 + 4U);
    t8 = (t4 + 4U);
    t9 = (t5 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
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
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    t22 = (t7 + 4U);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(249, ng0);

LAB13:    xsi_set_current_line(250, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 880);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 16);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4U);
    t6 = (t4 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    *((unsigned int *)t7) = t11;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB15;

LAB14:    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 1U);
    t8 = (t0 + 788);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB12;

LAB15:    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t12 | t13);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t14 | t15);
    goto LAB14;

}


extern void work_m_00000000002748227714_3978753181_init()
{
	static char *pe[] = {(void *)I243_0,(void *)A247_1};
	xsi_register_didat("work_m_00000000002748227714_3978753181", "isim/_tmp/work/m_00000000002748227714_3978753181.didat");
	xsi_register_executes(pe);
}
