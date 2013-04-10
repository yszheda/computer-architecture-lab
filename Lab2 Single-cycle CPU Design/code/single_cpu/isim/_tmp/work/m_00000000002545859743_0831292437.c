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
static int ng3[] = {15, 0};



static void I261_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(261, ng0);

LAB2:    xsi_set_current_line(262, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 968);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void A264_1(char *t0)
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
    char *t10;
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
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 1664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 1844);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(264, ng0);

LAB5:    xsi_set_current_line(265, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);
    t3 = (t0 + 1060);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t4 + 4U);
    t10 = (t6 + 4U);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    t23 = (t7 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(269, ng0);

LAB14:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 968);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 4, t5, 32);
    t6 = (t0 + 968);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 4);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 968);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t6 = (t7 + 4U);
    t8 = (t4 + 4U);
    t9 = (t5 + 4U);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB18:    t10 = (t7 + 4U);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(265, ng0);

LAB13:    xsi_set_current_line(266, ng0);
    t29 = (t0 + 652U);
    t30 = *((char **)t29);
    t29 = (t0 + 1060);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 4);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB12;

LAB17:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(271, ng0);

LAB22:    xsi_set_current_line(272, ng0);
    t23 = (t0 + 1060);
    t29 = (t23 + 32U);
    t30 = *((char **)t29);
    t31 = (t0 + 876);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 4);
    goto LAB21;

}


extern void work_m_00000000002545859743_0831292437_init()
{
	static char *pe[] = {(void *)I261_0,(void *)A264_1};
	xsi_register_didat("work_m_00000000002545859743_0831292437", "isim/_tmp/work/m_00000000002545859743_0831292437.didat");
	xsi_register_executes(pe);
}
