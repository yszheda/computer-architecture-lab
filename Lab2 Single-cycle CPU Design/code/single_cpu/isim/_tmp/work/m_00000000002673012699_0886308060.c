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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {4294967295U, 4294967295U};



static void A143_0(char *t0)
{
    char t3[8];
    char t18[8];
    char t50[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 1532U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 740U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t4 = (t3 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);

LAB6:    t13 = ((char*)((ng1)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 3, t13, 3);
    if (t14 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t14 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t14 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t14 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t14 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 2, 0, 0, 32, 0LL);

LAB19:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 964);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    memset(t51, 0, 8);
    t13 = (t51 + 4U);
    t15 = (t5 + 4U);
    t16 = (t6 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t15);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t19 = (t9 | t12);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t24 = (t20 | t21);
    t25 = (~(t24));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB47;

LAB44:    if (t24 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t51) = 1;

LAB47:    memset(t50, 0, 8);
    t17 = (t50 + 4U);
    t22 = (t51 + 4U);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t51);
    t30 = (t29 & t28);
    t33 = (t30 & 1U);
    if (t33 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t22) != 0)
        goto LAB50;

LAB51:    t23 = (t50 + 4U);
    t34 = *((unsigned int *)t50);
    t35 = *((unsigned int *)t23);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB52;

LAB53:    t37 = *((unsigned int *)t50);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t23) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t50) > 0)
        goto LAB58;

LAB59:    memcpy(t18, t32, 8);

LAB60:    t49 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t49, t18, 1, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(145, ng0);
    t15 = (t0 + 564U);
    t16 = *((char **)t15);
    t15 = (t0 + 652U);
    t17 = *((char **)t15);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t17);
    t21 = (t19 & t20);
    *((unsigned int *)t18) = t21;
    t15 = (t16 + 4U);
    t22 = (t17 + 4U);
    t23 = (t18 + 4U);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB20;

LAB21:
LAB22:    t49 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t49, t18, 2, 0, 0, 32, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 564U);
    t5 = *((char **)t4);
    t4 = (t0 + 652U);
    t6 = *((char **)t4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 | t8);
    *((unsigned int *)t18) = t9;
    t4 = (t5 + 4U);
    t13 = (t6 + 4U);
    t15 = (t18 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t13);
    t12 = (t10 | t11);
    *((unsigned int *)t15) = t12;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB23;

LAB24:
LAB25:    t22 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t22, t18, 2, 0, 0, 32, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 564U);
    t5 = *((char **)t4);
    t4 = (t0 + 652U);
    t6 = *((char **)t4);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t5, 32, t6, 32);
    t4 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t4, t18, 2, 0, 0, 32, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 564U);
    t5 = *((char **)t4);
    t4 = (t0 + 652U);
    t6 = *((char **)t4);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t5, 32, t6, 32);
    t4 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t4, t18, 2, 0, 0, 32, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(149, ng0);
    t4 = (t0 + 652U);
    t5 = *((char **)t4);
    t4 = (t0 + 564U);
    t6 = *((char **)t4);
    memset(t51, 0, 8);
    t4 = (t51 + 4U);
    t13 = (t5 + 4U);
    t15 = (t6 + 4U);
    if (*((unsigned int *)t13) != 0)
        goto LAB27;

LAB26:    if (*((unsigned int *)t15) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB28;

LAB29:    memset(t50, 0, 8);
    t16 = (t50 + 4U);
    t17 = (t51 + 4U);
    t7 = *((unsigned int *)t17);
    t8 = (~(t7));
    t9 = *((unsigned int *)t51);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t17) != 0)
        goto LAB33;

LAB34:    t22 = (t50 + 4U);
    t12 = *((unsigned int *)t50);
    t19 = *((unsigned int *)t22);
    t20 = (t12 || t19);
    if (t20 > 0)
        goto LAB35;

LAB36:    t21 = *((unsigned int *)t50);
    t24 = (~(t21));
    t25 = *((unsigned int *)t22);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t22) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t50) > 0)
        goto LAB41;

LAB42:    memcpy(t18, t31, 8);

LAB43:    t32 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t32, t18, 1, 0, 0, 32, 0LL);
    goto LAB19;

LAB20:    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t18) = (t29 | t30);
    t31 = (t16 + 4U);
    t32 = (t17 + 4U);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t47 & t43);
    t48 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t48 & t44);
    goto LAB22;

LAB23:    t21 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t18) = (t21 | t24);
    t16 = (t5 + 4U);
    t17 = (t6 + 4U);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t41 = (t27 & t26);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t42 = (t30 & t29);
    t33 = (~(t41));
    t34 = (~(t42));
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & t33);
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t34);
    goto LAB25;

LAB27:    *((unsigned int *)t51) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t51) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t50) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t50) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB34;

LAB35:    t23 = ((char*)((ng6)));
    goto LAB36;

LAB37:    t31 = ((char*)((ng7)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t18, 32, t23, 32, t31, 32);
    goto LAB43;

LAB41:    memcpy(t18, t23, 8);
    goto LAB43;

LAB46:    *((unsigned int *)t51) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t50) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t50) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB51;

LAB52:    t31 = ((char*)((ng6)));
    goto LAB53;

LAB54:    t32 = ((char*)((ng7)));
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t18, 32, t31, 32, t32, 32);
    goto LAB60;

LAB58:    memcpy(t18, t31, 8);
    goto LAB60;

}


extern void work_m_00000000002673012699_0886308060_init()
{
	static char *pe[] = {(void *)A143_0};
	xsi_register_didat("work_m_00000000002673012699_0886308060", "isim/_tmp/work/m_00000000002673012699_0886308060.didat");
	xsi_register_executes(pe);
}
