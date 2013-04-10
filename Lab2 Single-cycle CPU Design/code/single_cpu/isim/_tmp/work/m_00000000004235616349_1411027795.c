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
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {14U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {13U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {11U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {192U, 0U};
static unsigned int ng11[] = {249U, 0U};
static unsigned int ng12[] = {164U, 0U};
static unsigned int ng13[] = {176U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {153U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {146U, 0U};
static unsigned int ng18[] = {6U, 0U};
static unsigned int ng19[] = {130U, 0U};
static unsigned int ng20[] = {248U, 0U};
static unsigned int ng21[] = {8U, 0U};
static unsigned int ng22[] = {128U, 0U};
static unsigned int ng23[] = {9U, 0U};
static unsigned int ng24[] = {144U, 0U};
static unsigned int ng25[] = {10U, 0U};
static unsigned int ng26[] = {136U, 0U};
static unsigned int ng27[] = {131U, 0U};
static unsigned int ng28[] = {12U, 0U};
static unsigned int ng29[] = {198U, 0U};
static unsigned int ng30[] = {161U, 0U};
static unsigned int ng31[] = {134U, 0U};
static unsigned int ng32[] = {15U, 0U};
static unsigned int ng33[] = {142U, 0U};
static unsigned int ng34[] = {255U, 0U};
static int ng35[] = {7, 0};



static void A189_0(char *t0)
{
    char t7[8];
    char t18[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 1988);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(189, ng0);

LAB5:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 1148);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 16, t6, 32);
    t8 = (t0 + 1148);
    xsi_vlogvar_generic_wait_assign_value(t8, t7, 2, 0, 0, 16, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 1148);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4U);
    t6 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 14);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 14);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);

LAB6:    t8 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 1240);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);

LAB20:    t5 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng32)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 8, 0LL);

LAB55:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1332);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t18, 0, 8);
    t8 = (t18 + 4U);
    t16 = (t5 + 4U);
    t17 = (t6 + 4U);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t16);
    t13 = *((unsigned int *)t17);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t17);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB59;

LAB56:    if (t22 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t18) = 1;

LAB59:    t25 = (t18 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1056);
    t5 = (t0 + 1056);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    t16 = ((char*)((ng35)));
    xsi_vlog_generic_convert_bit_index(t18, t8, 2, t16, 32, 1);
    t17 = (t18 + 4U);
    t9 = *((unsigned int *)t17);
    t15 = (!(t9));
    if (t15 == 1)
        goto LAB65;

LAB66:
LAB62:    goto LAB2;

LAB7:    xsi_set_current_line(192, ng0);

LAB16:    xsi_set_current_line(193, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t17, t16, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t18) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t5 = (t0 + 1240);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 1332);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 1, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(197, ng0);

LAB17:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t4, t3, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 4);
    *((unsigned int *)t18) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t5 = (t0 + 1240);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 1332);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(202, ng0);

LAB18:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t4, t3, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 8);
    *((unsigned int *)t18) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t5 = (t0 + 1240);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 1332);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 1, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(207, ng0);

LAB19:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t4, t3, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 12);
    *((unsigned int *)t18) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t5 = (t0 + 1240);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4U);
    t4 = (t3 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 1332);
    xsi_vlogvar_generic_wait_assign_value(t5, t18, 2, 0, 0, 1, 0LL);
    goto LAB15;

LAB21:    xsi_set_current_line(214, ng0);
    t6 = ((char*)((ng10)));
    t8 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t8, t6, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB23:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB25:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB27:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB29:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB31:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB33:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB35:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB37:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB39:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB41:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB43:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB45:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB47:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB49:    xsi_set_current_line(228, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB51:    xsi_set_current_line(229, ng0);
    t3 = ((char*)((ng33)));
    t5 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t5, t3, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB58:    *((unsigned int *)t18) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(233, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 1056);
    t34 = (t0 + 1056);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng35)));
    xsi_vlog_generic_convert_bit_index(t33, t36, 2, t37, 32, 1);
    t38 = (t33 + 4U);
    t39 = *((unsigned int *)t38);
    t15 = (!(t39));
    if (t15 == 1)
        goto LAB63;

LAB64:    goto LAB62;

LAB63:    xsi_vlogvar_generic_wait_assign_value(t32, t31, 2, 0, *((unsigned int *)t33), 1, 0LL);
    goto LAB64;

LAB65:    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB66;

}


extern void work_m_00000000004235616349_1411027795_init()
{
	static char *pe[] = {(void *)A189_0};
	xsi_register_didat("work_m_00000000004235616349_1411027795", "isim/_tmp/work/m_00000000004235616349_1411027795.didat");
	xsi_register_executes(pe);
}
