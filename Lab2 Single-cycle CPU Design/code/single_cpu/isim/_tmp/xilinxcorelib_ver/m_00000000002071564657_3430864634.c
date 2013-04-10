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
static int ng0[] = {1, 0};
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 1U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {48U, 0U};
static unsigned int ng6[] = {49U, 0U};
static unsigned int ng7[] = {50U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {51U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {52U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {53U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {54U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {55U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {56U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {57U, 0U};
static unsigned int ng22[] = {9U, 0U};
static unsigned int ng23[] = {65U, 0U};
static unsigned int ng24[] = {10U, 0U};
static unsigned int ng25[] = {66U, 0U};
static unsigned int ng26[] = {11U, 0U};
static unsigned int ng27[] = {67U, 0U};
static unsigned int ng28[] = {12U, 0U};
static unsigned int ng29[] = {68U, 0U};
static unsigned int ng30[] = {13U, 0U};
static unsigned int ng31[] = {69U, 0U};
static unsigned int ng32[] = {14U, 0U};
static unsigned int ng33[] = {70U, 0U};
static unsigned int ng34[] = {15U, 0U};
static unsigned int ng35[] = {97U, 0U};
static unsigned int ng36[] = {98U, 0U};
static unsigned int ng37[] = {99U, 0U};
static unsigned int ng38[] = {100U, 0U};
static unsigned int ng39[] = {101U, 0U};
static unsigned int ng40[] = {102U, 0U};
static const char *ng41 = "ERROR in %m at time %t : NOT A HEX CHARACTER";
static unsigned int ng42[] = {15U, 15U};
static int ng43[] = {4, 0};
static int ng44[] = {8, 0};
static int ng45[] = {48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng46[] = {778922342, 0, 1819239275, 0, 1635016546, 0, 100, 0};
static int ng47[] = {2, 0};
static const char *ng48 = "Error in %m at time %t: c_write_mode = %s is not WRITE_FIRST, READ_FIRST or NO_CHANGE.";
static const char *ng49 = "Invalid Address Warning #1: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng50 = "Invalid Address Warning #2: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng51 = "Invalid Address Warning #3: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng52 = "Invalid Address Warning #4: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng53 = "Invalid Address Warning #5: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";



static int sp_defval(char *t1, char *t2)
{
    char t7[8];
    char t33[8];
    int t0;
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
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t0 = 1;

LAB2:    t3 = (t1 + 9656);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng0)));
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t5 + 4U);
    t10 = (t6 + 4U);
    t11 = *((unsigned int *)t5);
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
        goto LAB6;

LAB3:    if (t20 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    t3 = (t1 + 9748);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t1 + 9472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

LAB7:
LAB10:    t29 = (t1 + 9840);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng0)));
    memset(t33, 0, 8);
    t34 = (t33 + 4U);
    t35 = (t31 + 4U);
    t36 = (t32 + 4U);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB14;

LAB11:    if (t46 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t33) = 1;

LAB14:    t49 = (t33 + 4U);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB15;

LAB16:    t3 = (t1 + 9564);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t6 = (t7 + 4U);
    t8 = (t5 + 4U);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB19;

LAB18:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 1U);
    t9 = (t1 + 9472);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);

LAB17:    goto LAB9;

LAB13:    *((unsigned int *)t33) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB14;

LAB15:    t55 = (t1 + 9564);
    t56 = (t55 + 32U);
    t57 = *((char **)t56);
    t58 = (t1 + 9472);
    xsi_vlogvar_assign_value(t58, t57, 0, 0, 1);
    goto LAB17;

LAB19:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t15 | t16);
    goto LAB18;

}

static int sp_max(char *t1, char *t2)
{
    char t3[8];
    char t4[8];
    char t11[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;

LAB2:    t5 = (t1 + 10024);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t1 + 10116);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4U);
    t13 = (t7 + 4U);
    t14 = (t10 + 4U);
    if (*((unsigned int *)t13) != 0)
        goto LAB4;

LAB3:    if (*((unsigned int *)t14) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t7) > *((unsigned int *)t10))
        goto LAB5;

LAB6:    memset(t4, 0, 8);
    t15 = (t4 + 4U);
    t16 = (t11 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t11);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB11:    t22 = (t4 + 4U);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t22);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t22) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t35, 8);

LAB20:    t36 = (t1 + 9932);
    xsi_vlogvar_assign_value(t36, t3, 0, 0, 1);
    t0 = 0;

LAB1:    return t0;
LAB4:    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;
    goto LAB6;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB11;

LAB12:    t26 = (t1 + 10024);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    goto LAB13;

LAB14:    t33 = (t1 + 10116);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t28, 1, t35, 1);
    goto LAB20;

LAB18:    memcpy(t3, t28, 8);
    goto LAB20;

}

static int sp_a_is_X(char *t1, char *t2)
{
    char t8[8];
    char t17[8];
    char t25[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng1)));
    t4 = (t1 + 10208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 10392);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 10392);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t1 + 1616);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t14 = (t1 + 10300);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t18 = (t1 + 10300);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t1 + 10392);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t17, 1, t16, t20, 2, t23, 32, 1);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    t26 = (t17 + 4U);
    t27 = (t24 + 4U);
    if (*((unsigned int *)t17) != *((unsigned int *)t24))
        goto LAB9;

LAB7:    if (*((unsigned int *)t26) != *((unsigned int *)t27))
        goto LAB9;

LAB8:    *((unsigned int *)t25) = 1;

LAB9:    t28 = (t25 + 4U);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t25);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB10;

LAB11:
LAB12:    t3 = (t1 + 10392);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 10392);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB3;

LAB10:    t34 = ((char*)((ng4)));
    t35 = (t1 + 10208);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    goto LAB12;

}

static int sp_hexstr_conv(char *t1, char *t2)
{
    char t5[8];
    char t14[8];
    char t30[16];
    char t31[8];
    char t32[8];
    char t34[8];
    char t38[8];
    char t46[8];
    char t54[8];
    char t58[8];
    char t60[64];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t59;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng2)));
    t4 = (t1 + 10668);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 10484);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = (t1 + 1616);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t4, 32, t3, 32);
    t6 = (t1 + 10760);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB3:    t3 = (t1 + 10760);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t15 = (t1 + 10576);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4U);
    t19 = (t17 + 4U);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 255U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);

LAB7:    t26 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t26, 8);
    if (t27 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng7)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng9)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng11)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng13)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng15)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng17)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng19)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng21)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng23)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng25)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng27)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB34;

LAB35:    t3 = ((char*)((ng29)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB36;

LAB37:    t3 = ((char*)((ng31)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB38;

LAB39:    t3 = ((char*)((ng33)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB40;

LAB41:    t3 = ((char*)((ng35)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB42;

LAB43:    t3 = ((char*)((ng36)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB44;

LAB45:    t3 = ((char*)((ng37)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB46;

LAB47:    t3 = ((char*)((ng38)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB48;

LAB49:    t3 = ((char*)((ng39)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB50;

LAB51:    t3 = ((char*)((ng40)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:
LAB58:    t3 = (t1 + 2528);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB59;

LAB60:
LAB61:    t3 = ((char*)((ng42)));
    t4 = (t1 + 10944);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB56:    t3 = ((char*)((ng2)));
    t4 = (t1 + 10852);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB63:    t3 = (t1 + 10852);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng43)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB64;

LAB65:    t3 = (t1 + 10668);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 10668);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    t3 = (t1 + 10576);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng44)));
    xsi_vlog_unsigned_rshift(t60, 256, t6, 256, t7, 32);
    t8 = (t1 + 10576);
    xsi_vlogvar_assign_value(t8, t60, 0, 0, 256);
    t3 = (t1 + 10760);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 10760);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB3;

LAB8:
LAB57:    t28 = ((char*)((ng1)));
    t29 = (t1 + 10944);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_unary_minus(t5, 32, t3, 32);
    t4 = (t1 + 10760);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB56;

LAB10:    t4 = ((char*)((ng1)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB12:    t4 = ((char*)((ng4)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB14:    t4 = ((char*)((ng8)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB16:    t4 = ((char*)((ng10)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB18:    t4 = ((char*)((ng12)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB20:    t4 = ((char*)((ng14)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB22:    t4 = ((char*)((ng16)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB24:    t4 = ((char*)((ng18)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB26:    t4 = ((char*)((ng20)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB28:    t4 = ((char*)((ng22)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB30:    t4 = ((char*)((ng24)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB32:    t4 = ((char*)((ng26)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB34:    t4 = ((char*)((ng28)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB36:    t4 = ((char*)((ng30)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB38:    t4 = ((char*)((ng32)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB40:    t4 = ((char*)((ng34)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB42:    t4 = ((char*)((ng24)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB44:    t4 = ((char*)((ng26)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB46:    t4 = ((char*)((ng28)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB48:    t4 = ((char*)((ng30)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB50:    t4 = ((char*)((ng32)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB52:    t4 = ((char*)((ng34)));
    t6 = (t1 + 10944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB59:
LAB62:    t7 = xsi_vlog_time(t30, 1000000.000000000, 100.0000000000000);
    xsi_vlogfile_write(1, 0, ng41, 2, t1, (char)118, t30, 64);
    goto LAB61;

LAB64:
LAB66:    t15 = (t1 + 10668);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng43)));
    memset(t31, 0, 8);
    xsi_vlog_signed_multiply(t31, 32, t17, 32, t18, 32);
    t19 = (t1 + 10852);
    t26 = (t19 + 32U);
    t28 = *((char **)t26);
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t31, 32, t28, 32);
    t29 = (t1 + 1616);
    t33 = *((char **)t29);
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t32, 32, t33, 32);
    t29 = (t34 + 4U);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t34);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB67;

LAB68:
LAB69:    t3 = (t1 + 10852);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 10852);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB63;

LAB67:
LAB70:    t35 = (t1 + 10944);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t39 = (t1 + 10944);
    t40 = (t39 + 40U);
    t41 = *((char **)t40);
    t42 = (t1 + 10852);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_index_select_value(t38, 1, t37, t41, 2, t44, 32, 1);
    t45 = (t1 + 10484);
    t47 = (t1 + 10484);
    t48 = (t47 + 40U);
    t49 = *((char **)t48);
    t50 = (t1 + 10668);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng43)));
    memset(t54, 0, 8);
    xsi_vlog_signed_multiply(t54, 32, t52, 32, t53, 32);
    t55 = (t1 + 10852);
    t56 = (t55 + 32U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t54, 32, t57, 32);
    xsi_vlog_generic_convert_bit_index(t46, t49, 2, t58, 32, 1);
    t59 = (t46 + 4U);
    t25 = *((unsigned int *)t59);
    t27 = (!(t25));
    if (t27 == 1)
        goto LAB71;

LAB72:    goto LAB69;

LAB71:    xsi_vlogvar_assign_value(t45, t38, 0, *((unsigned int *)t46), 1);
    goto LAB72;

}

static void N113_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 11420U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5700);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 14756);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 14544);
    *((int *)t10) = 1;

LAB1:    return;
}

static void N118_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 11548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3968U);
    t3 = *((char **)t2);
    t2 = (t0 + 14792);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    t8 = (t7 + 4U);
    t9 = 511U;
    t10 = t9;
    t11 = (t3 + 4U);
    t12 = *((unsigned int *)t3);
    t9 = (t9 & t12);
    t13 = *((unsigned int *)t11);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294966784U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 | t9);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294966784U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 | t10);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 14552);
    *((int *)t18) = 1;

LAB1:    return;
}

static void C156_2(char *t0)
{
    char t25[8];
    char *t1;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 11676U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4232U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t4 = ((char*)((ng0)));
    t5 = (t0 + 1844);
    t6 = *((char **)t5);
    t5 = (t0 + 11592);
    t7 = (t0 + 2812);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 9564);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 9656);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 9748);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 9840);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 11640);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t16 + 132U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 11640);
    t22 = *((char **)t14);
    t14 = (t0 + 9472);
    t23 = (t14 + 32U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 2812);
    t27 = (t0 + 11640);
    t28 = *((char **)t27);
    t27 = (t0 + 11592);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t28, t0, t27, t29);
    t30 = (t0 + 14828);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t34 + 4U);
    t36 = 1U;
    t37 = t36;
    t38 = (t25 + 4U);
    t39 = *((unsigned int *)t25);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 4294967294U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 | t36);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967294U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 | t37);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t45 = (t0 + 14560);
    *((int *)t45) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 11676U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void C157_3(char *t0)
{
    char t25[8];
    char *t1;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 11804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4320U);
    t3 = *((char **)t2);
    t2 = (t0 + 1160);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2452);
    t6 = *((char **)t5);
    t5 = (t0 + 11720);
    t7 = (t0 + 2812);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 9564);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 9656);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 9748);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 9840);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 11768);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t16 + 132U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 11768);
    t22 = *((char **)t14);
    t14 = (t0 + 9472);
    t23 = (t14 + 32U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 2812);
    t27 = (t0 + 11768);
    t28 = *((char **)t27);
    t27 = (t0 + 11720);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t28, t0, t27, t29);
    t30 = (t0 + 14864);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t34 + 4U);
    t36 = 1U;
    t37 = t36;
    t38 = (t25 + 4U);
    t39 = *((unsigned int *)t25);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 4294967294U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 | t36);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967294U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 | t37);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t45 = (t0 + 14568);
    *((int *)t45) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 11804U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void C158_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 11932U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 628);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4U);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t18, 8);

LAB16:    t24 = (t0 + 14900);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 14576);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4056U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t18, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void C159_5(char *t0)
{
    char t25[8];
    char *t1;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 12060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4144U);
    t3 = *((char **)t2);
    t2 = (t0 + 704);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t5 = (t0 + 1920);
    t6 = *((char **)t5);
    t5 = (t0 + 11976);
    t7 = (t0 + 2812);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 9564);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 9656);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 9748);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 9840);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 12024);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t16 + 132U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 12024);
    t22 = *((char **)t14);
    t14 = (t0 + 9472);
    t23 = (t14 + 32U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 2812);
    t27 = (t0 + 12024);
    t28 = *((char **)t27);
    t27 = (t0 + 11976);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t28, t0, t27, t29);
    t30 = (t0 + 14936);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t34 + 4U);
    t36 = 1U;
    t37 = t36;
    t38 = (t25 + 4U);
    t39 = *((unsigned int *)t25);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 4294967294U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 | t36);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967294U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 | t37);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t45 = (t0 + 14584);
    *((int *)t45) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 12060U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void C160_6(char *t0)
{
    char t25[8];
    char *t1;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 12188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 1084);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2224);
    t6 = *((char **)t5);
    t5 = (t0 + 12104);
    t7 = (t0 + 2812);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 9564);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 9656);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 9748);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 9840);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 12152);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t16 + 132U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 12152);
    t22 = *((char **)t14);
    t14 = (t0 + 9472);
    t23 = (t14 + 32U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 2812);
    t27 = (t0 + 12152);
    t28 = *((char **)t27);
    t27 = (t0 + 12104);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t28, t0, t27, t29);
    t30 = (t0 + 14972);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t34 + 4U);
    t36 = 1U;
    t37 = t36;
    t38 = (t25 + 4U);
    t39 = *((unsigned int *)t25);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 4294967294U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 | t36);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967294U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 | t37);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t45 = (t0 + 14592);
    *((int *)t45) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 12188U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void C161_7(char *t0)
{
    char t25[8];
    char *t1;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 12316U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4496U);
    t3 = *((char **)t2);
    t2 = (t0 + 856);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t5 = ((char*)((ng0)));
    t6 = (t0 + 12232);
    t7 = (t0 + 2812);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    t9 = (t0 + 9564);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 9656);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 9748);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 9840);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 1);

LAB4:    t13 = (t0 + 12280);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t16 + 132U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 12280);
    t22 = *((char **)t14);
    t14 = (t0 + 9472);
    t23 = (t14 + 32U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 2812);
    t27 = (t0 + 12280);
    t28 = *((char **)t27);
    t27 = (t0 + 12232);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t28, t0, t27, t29);
    t30 = (t0 + 15008);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t34 + 4U);
    t36 = 1U;
    t37 = t36;
    t38 = (t25 + 4U);
    t39 = *((unsigned int *)t25);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 4294967294U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 | t36);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967294U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 | t37);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t45 = (t0 + 14600);
    *((int *)t45) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 12316U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void I266_8(char *t0)
{
    char t4[64];
    char t21[8];
    char t32[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;

LAB0:    t1 = (t0 + 12444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:
LAB4:    t2 = ((char*)((ng1)));
    t3 = (t0 + 7356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng45)));
    memcpy(t4, t2, 8);
    t3 = (t4 + 8U);
    memset(t3, 0, 56);
    t5 = (t0 + 12360);
    t6 = (t0 + 3532);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    t8 = (t0 + 10576);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 256);

LAB5:    t9 = (t0 + 12408);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t12 + 132U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB7;

LAB6:    t10 = (t0 + 12408);
    t18 = *((char **)t10);
    t10 = (t0 + 10484);
    t19 = (t10 + 32U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 3532);
    t23 = (t0 + 12408);
    t24 = *((char **)t23);
    t23 = (t0 + 12360);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t24, t0, t23, t25);
    t26 = (t0 + 7080);
    xsi_vlogvar_assign_value(t26, t21, 0, 0, 32);
    t2 = (t0 + 1084);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t3, 32, t2, 32);
    t5 = (t21 + 4U);
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = ((char*)((ng2)));
    t3 = (t0 + 8368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 8368);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t0 + 400);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t5, 32, t7, 32);
    t6 = (t21 + 4U);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB15;

LAB16:    t2 = (t0 + 552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t3, 32, t2, 32);
    t5 = (t21 + 4U);
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB19;

LAB20:
LAB21:    t2 = ((char*)((ng2)));
    t3 = (t0 + 8552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 8552);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t0 + 1388);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t5, 32, t7, 32);
    t6 = (t21 + 4U);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB23;

LAB24:    t2 = ((char*)((ng2)));
    t3 = (t0 + 8736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    t2 = (t0 + 8736);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t0 + 1388);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t5, 32, t7, 32);
    t6 = (t21 + 4U);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 7356);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t0 + 5608);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6620);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6988);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6804);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = (t0 + 12360);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB32;

LAB1:    return;
LAB7:    t9 = (t0 + 12444U);
    *((char **)t9) = &&LAB5;
    goto LAB1;

LAB8:    t6 = ((char*)((ng45)));
    memcpy(t4, t6, 8);
    t7 = (t4 + 8U);
    memset(t7, 0, 56);
    t8 = (t0 + 12360);
    t9 = (t0 + 3532);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    t11 = (t0 + 10576);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 256);

LAB11:    t12 = (t0 + 12408);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t15 + 132U);
    t18 = *((char **)t16);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t17 = ((int  (*)(char *, char *))t20)(t0, t13);
    if (t17 != 0)
        goto LAB13;

LAB12:    t13 = (t0 + 12408);
    t22 = *((char **)t13);
    t13 = (t0 + 10484);
    t23 = (t13 + 32U);
    t24 = *((char **)t23);
    memcpy(t32, t24, 8);
    t25 = (t0 + 3532);
    t26 = (t0 + 12408);
    t33 = *((char **)t26);
    t26 = (t0 + 12360);
    t34 = 0;
    xsi_delete_subprogram_invocation(t25, t33, t0, t26, t34);
    t35 = (t0 + 7356);
    xsi_vlogvar_assign_value(t35, t32, 0, 0, 32);
    goto LAB10;

LAB13:    t12 = (t0 + 12444U);
    *((char **)t12) = &&LAB11;
    goto LAB1;

LAB15:    t8 = (t0 + 7080);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 5792);
    t12 = (t0 + 5792);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    t15 = (t0 + 5792);
    t16 = (t15 + 36U);
    t18 = *((char **)t16);
    t19 = (t0 + 8368);
    t20 = (t19 + 32U);
    t22 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t32, t36, t14, t18, 2, 1, t22, 32, 1);
    t23 = (t32 + 4U);
    t37 = *((unsigned int *)t23);
    t17 = (!(t37));
    t24 = (t36 + 4U);
    t38 = *((unsigned int *)t24);
    t39 = (!(t38));
    t40 = (t17 && t39);
    if (t40 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 8368);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t6, 32);
    t7 = (t0 + 8368);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB14;

LAB17:    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t36);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t36), t44);
    goto LAB18;

LAB19:    t6 = ((char*)((ng46)));
    t7 = (t0 + 5792);
    xsi_vlogfile_readmemb(t6, 104, t7, 0, 0, 0, 0);
    goto LAB21;

LAB23:    t8 = (t0 + 7356);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 7448);
    t12 = (t0 + 7448);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    t15 = (t0 + 7448);
    t16 = (t15 + 36U);
    t18 = *((char **)t16);
    t19 = (t0 + 8552);
    t20 = (t19 + 32U);
    t22 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t32, t36, t14, t18, 2, 1, t22, 32, 1);
    t23 = (t32 + 4U);
    t37 = *((unsigned int *)t23);
    t17 = (!(t37));
    t24 = (t36 + 4U);
    t38 = *((unsigned int *)t24);
    t39 = (!(t38));
    t40 = (t17 && t39);
    if (t40 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 8552);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t6, 32);
    t7 = (t0 + 8552);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB22;

LAB25:    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t36);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t36), t44);
    goto LAB26;

LAB28:    t8 = ((char*)((ng2)));
    t9 = (t0 + 7540);
    t10 = (t0 + 7540);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t0 + 7540);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 8736);
    t18 = (t16 + 32U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t32, t36, t12, t15, 2, 1, t19, 32, 1);
    t20 = (t32 + 4U);
    t37 = *((unsigned int *)t20);
    t17 = (!(t37));
    t22 = (t36 + 4U);
    t38 = *((unsigned int *)t22);
    t39 = (!(t38));
    t40 = (t17 && t39);
    if (t40 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 8736);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t6, 32);
    t7 = (t0 + 8736);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB27;

LAB30:    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t36);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t36), t44);
    goto LAB31;

LAB32:    t3 = (t0 + 7356);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t7 = (t0 + 5700);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB1;

}

static void A291_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 12572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 1008);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:    t2 = ((char*)((ng1)));
    t3 = (t0 + 5424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    t12 = (t0 + 6436);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t0 + 5424);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB8;

}

static void A299_10(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 12700U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14616);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    t2 = ((char*)((ng1)));
    t3 = (t0 + 6436);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    t27 = ((char*)((ng4)));
    t28 = (t0 + 6436);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 1);
    goto LAB12;

}

static void A307_11(char *t0)
{
    char t5[8];
    char t6[8];
    char t20[8];
    char t21[8];
    char t29[8];
    char t61[8];
    char t75[8];
    char t76[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 12828U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 932);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t14 = (t6 + 4U);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t29, t6, 8);

LAB12:    memset(t61, 0, 8);
    t62 = (t61 + 4U);
    t63 = (t29 + 4U);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t63) != 0)
        goto LAB22;

LAB23:    t69 = (t61 + 4U);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB24;

LAB25:    memcpy(t84, t61, 8);

LAB26:    t116 = (t84 + 4U);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t84);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB34;

LAB35:    t2 = ((char*)((ng1)));
    t3 = (t0 + 5516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 856);
    t19 = *((char **)t18);
    t18 = ((char*)((ng0)));
    memset(t20, 0, 8);
    xsi_vlog_signed_equal(t20, 32, t19, 32, t18, 32);
    memset(t21, 0, 8);
    t22 = (t21 + 4U);
    t23 = (t20 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t23) != 0)
        goto LAB15;

LAB16:    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t21);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t33 = (t6 + 4U);
    t34 = (t21 + 4U);
    t35 = (t29 + 4U);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t21) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB17:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t6 + 4U);
    t44 = (t21 + 4U);
    t45 = *((unsigned int *)t6);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t21);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t55);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t56);
    goto LAB19;

LAB20:    *((unsigned int *)t61) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t61) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t73 = (t0 + 1008);
    t74 = *((char **)t73);
    t73 = ((char*)((ng0)));
    memset(t75, 0, 8);
    xsi_vlog_signed_equal(t75, 32, t74, 32, t73, 32);
    memset(t76, 0, 8);
    t77 = (t76 + 4U);
    t78 = (t75 + 4U);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t75);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t78) != 0)
        goto LAB29;

LAB30:    t85 = *((unsigned int *)t61);
    t86 = *((unsigned int *)t76);
    t87 = (t85 & t86);
    *((unsigned int *)t84) = t87;
    t88 = (t61 + 4U);
    t89 = (t76 + 4U);
    t90 = (t84 + 4U);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t76) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t76) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB30;

LAB31:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t61 + 4U);
    t99 = (t76 + 4U);
    t100 = *((unsigned int *)t61);
    t101 = (~(t100));
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t76);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (~(t106));
    t108 = (t101 & t103);
    t109 = (t105 & t107);
    t110 = (~(t108));
    t111 = (~(t109));
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t110);
    t113 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t113 & t111);
    t114 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t114 & t110);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    goto LAB33;

LAB34:    t122 = (t0 + 6528);
    t123 = (t122 + 32U);
    t124 = *((char **)t123);
    t125 = (t0 + 5516);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB36;

}

static void C315_12(char *t0)
{
    char t4[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 12956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4U);
    t5 = (t3 + 4U);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4U);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t24, t4, 8);

LAB10:    t56 = (t0 + 15044);
    t57 = (t56 + 32U);
    t58 = *((char **)t57);
    t59 = (t58 + 40U);
    t60 = *((char **)t59);
    t61 = (t60 + 4U);
    t62 = 1U;
    t63 = t62;
    t64 = (t24 + 4U);
    t65 = *((unsigned int *)t24);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 & 4294967294U);
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 | t62);
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 4294967294U);
    t70 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t70 | t63);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t71 = (t0 + 14632);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 5200U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4U);
    t18 = (t16 + 4U);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t16);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB14:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4U);
    t29 = (t17 + 4U);
    t30 = (t24 + 4U);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4U);
    t39 = (t17 + 4U);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB17;

}

static void A319_13(char *t0)
{
    char t5[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
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
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 13084U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 6620);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 6620);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:
LAB13:    t27 = (t0 + 5024U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t30 = (t29 + 4U);
    t31 = (t28 + 4U);
    t32 = (t27 + 4U);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t27);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t29) = 1;

LAB17:    t45 = (t29 + 4U);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 5112U);
    t3 = *((char **)t2);
    t2 = (t0 + 6620);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);

LAB20:    goto LAB12;

LAB16:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    t51 = ((char*)((ng1)));
    t52 = (t0 + 6620);
    xsi_vlogvar_generic_wait_assign_value(t52, t51, 2, 0, 0, 1, 0LL);
    goto LAB20;

}

static void A333_14(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 13212U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14648);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:
LAB13:    t27 = (t0 + 4672U);
    t28 = *((char **)t27);
    t27 = (t0 + 6712);
    xsi_vlogvar_generic_wait_assign_value(t27, t28, 2, 0, 0, 32, 0LL);
    t2 = (t0 + 4584U);
    t3 = *((char **)t2);
    t2 = (t0 + 6804);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 9, 0LL);
    t2 = (t0 + 4936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6344);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    goto LAB12;

}

static void A345_15(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 13340U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 1464);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 4936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6252);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    t12 = (t0 + 6344);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t0 + 6252);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB8;

}

static void A355_16(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 13468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14664);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 1464);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 4672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6160);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    t12 = (t0 + 6712);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t0 + 6160);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB8;

}

static void A363_17(char *t0)
{
    char t5[8];
    char t23[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 13596U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 1464);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:
LAB31:    t2 = (t0 + 4584U);
    t3 = *((char **)t2);
    t2 = (t0 + 6068);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 9);
    t2 = (t0 + 4936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t12 = (t2 + 4U);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t12);
    t16 = (t10 ^ t11);
    t17 = (t9 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t5) = 1;

LAB35:    memset(t23, 0, 8);
    t13 = (t23 + 4U);
    t14 = (t5 + 4U);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t14) != 0)
        goto LAB38;

LAB39:    t15 = (t23 + 4U);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t15);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB40;

LAB41:    memcpy(t45, t23, 8);

LAB42:    t59 = (t45 + 4U);
    t78 = *((unsigned int *)t59);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB50;

LAB51:    t2 = (t0 + 5112U);
    t3 = *((char **)t2);
    t2 = (t0 + 6896);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB52:
LAB8:    goto LAB2;

LAB6:
LAB9:    t12 = (t0 + 6804);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t0 + 6068);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 9);
    t2 = (t0 + 6344);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t12 = (t5 + 4U);
    t13 = (t4 + 4U);
    t14 = (t6 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t16 = (t10 ^ t11);
    t17 = (t9 | t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t5) = 1;

LAB13:    memset(t23, 0, 8);
    t15 = (t23 + 4U);
    t24 = (t5 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t24) != 0)
        goto LAB16;

LAB17:    t30 = (t23 + 4U);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB18;

LAB19:    memcpy(t45, t23, 8);

LAB20:    t77 = (t45 + 4U);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 6620);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 6896);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);

LAB30:    goto LAB8;

LAB12:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t23) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB17;

LAB18:    t34 = (t0 + 1692);
    t35 = *((char **)t34);
    t34 = ((char*)((ng47)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t35, 32, t34, 32);
    memset(t37, 0, 8);
    t38 = (t37 + 4U);
    t39 = (t36 + 4U);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t39) != 0)
        goto LAB23;

LAB24:    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t23 + 4U);
    t50 = (t37 + 4U);
    t51 = (t45 + 4U);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t37) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB24;

LAB25:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t23 + 4U);
    t60 = (t37 + 4U);
    t61 = *((unsigned int *)t23);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB27;

LAB28:    t83 = ((char*)((ng1)));
    t84 = (t0 + 6896);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 1);
    goto LAB30;

LAB34:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB40:    t24 = (t0 + 1692);
    t30 = *((char **)t24);
    t24 = ((char*)((ng47)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t30, 32, t24, 32);
    memset(t37, 0, 8);
    t34 = (t37 + 4U);
    t35 = (t36 + 4U);
    t40 = *((unsigned int *)t35);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t35) != 0)
        goto LAB45;

LAB46:    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t38 = (t23 + 4U);
    t39 = (t37 + 4U);
    t49 = (t45 + 4U);
    t52 = *((unsigned int *)t38);
    t53 = *((unsigned int *)t39);
    t54 = (t52 | t53);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t49);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t37) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t37) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB46;

LAB47:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t57 | t58);
    t50 = (t23 + 4U);
    t51 = (t37 + 4U);
    t61 = *((unsigned int *)t23);
    t62 = (~(t61));
    t63 = *((unsigned int *)t50);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t73 & t71);
    t74 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB49;

LAB50:    t60 = ((char*)((ng1)));
    t77 = (t0 + 6896);
    xsi_vlogvar_assign_value(t77, t60, 0, 0, 1);
    goto LAB52;

}

static void A385_18(char *t0)
{
    char t5[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
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
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 13724U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14680);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:
LAB13:    t27 = (t0 + 5024U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t30 = (t29 + 4U);
    t31 = (t28 + 4U);
    t32 = (t27 + 4U);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t27);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t29) = 1;

LAB17:    t45 = (t29 + 4U);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 6896);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 6988);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 1, 0LL);

LAB20:    goto LAB12;

LAB16:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    t51 = ((char*)((ng2)));
    t52 = (t0 + 6988);
    xsi_vlogvar_generic_wait_assign_value(t52, t51, 1, 0, 0, 1, 0LL);
    goto LAB20;

}

static void I396_19(char *t0)
{
    char t6[8];
    char t12[16];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t15;

LAB0:
LAB2:    t1 = (t0 + 1692);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng2)));
    t3 = xsi_vlog_signed_case_compare(t2, 32, t1, 32);
    if (t3 == 1)
        goto LAB4;

LAB5:    t1 = ((char*)((ng0)));
    t3 = xsi_vlog_signed_case_compare(t2, 32, t1, 32);
    if (t3 == 1)
        goto LAB6;

LAB7:    t1 = ((char*)((ng47)));
    t3 = xsi_vlog_signed_case_compare(t2, 32, t1, 32);
    if (t3 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:
LAB13:    t1 = (t0 + 2528);
    t4 = *((char **)t1);
    t1 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t1, 32);
    t5 = (t6 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_vlog_finish(1);

LAB12:
LAB1:    return;
LAB4:    t4 = ((char*)((ng1)));
    t5 = (t0 + 5976);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 2, 0LL);
    goto LAB12;

LAB6:    t4 = ((char*)((ng4)));
    t5 = (t0 + 5976);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 2, 0LL);
    goto LAB12;

LAB8:    t4 = ((char*)((ng8)));
    t5 = (t0 + 5976);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 2, 0LL);
    goto LAB12;

LAB14:
LAB17:    t13 = xsi_vlog_time(t12, 1000000.000000000, 100.0000000000000);
    t14 = (t0 + 1692);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng48, 3, t0, (char)118, t12, 64, (char)119, t15, 32);
    goto LAB16;

}

static void A414_20(char *t0)
{
    char t5[8];
    char t29[8];
    char t59[8];
    char t72[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
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
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;

LAB0:    t1 = (t0 + 13980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:
LAB13:    t27 = (t0 + 5024U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t30 = (t29 + 4U);
    t31 = (t28 + 4U);
    t32 = (t27 + 4U);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t27);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t29) = 1;

LAB17:    t45 = (t29 + 4U);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB18;

LAB19:
LAB22:    t2 = (t0 + 6252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t7 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t6 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t5) = 1;

LAB26:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB27;

LAB28:
LAB84:    t2 = (t0 + 6068);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 400);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t7 + 4U);
    if (*((unsigned int *)t8) != 0)
        goto LAB86;

LAB85:    if (*((unsigned int *)t21) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB87;

LAB88:    t27 = (t5 + 4U);
    t9 = *((unsigned int *)t27);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB90;

LAB91:    t2 = (t0 + 2528);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t2, 32);
    t4 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB92:
LAB29:
LAB20:    goto LAB12;

LAB16:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:
LAB21:    t51 = (t0 + 7356);
    t52 = (t51 + 32U);
    t53 = *((char **)t52);
    t54 = (t0 + 5608);
    xsi_vlogvar_generic_wait_assign_value(t54, t53, 2, 0, 0, 32, 0LL);
    goto LAB20;

LAB25:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:
LAB30:    t28 = (t0 + 5976);
    t30 = (t28 + 32U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng1)));
    memset(t29, 0, 8);
    t45 = (t29 + 4U);
    t51 = (t31 + 4U);
    t52 = (t32 + 4U);
    t33 = *((unsigned int *)t31);
    t34 = *((unsigned int *)t32);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t51);
    t37 = *((unsigned int *)t52);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t51);
    t41 = *((unsigned int *)t52);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB34;

LAB31:    if (t42 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t29) = 1;

LAB34:    t53 = (t29 + 4U);
    t46 = *((unsigned int *)t53);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB35;

LAB36:    t2 = (t0 + 5976);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t7 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t6 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB54;

LAB51:    if (t18 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t5) = 1;

LAB54:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB55;

LAB56:
LAB71:    t2 = (t0 + 6068);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 400);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t7 + 4U);
    if (*((unsigned int *)t8) != 0)
        goto LAB73;

LAB72:    if (*((unsigned int *)t21) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB74;

LAB75:    t27 = (t5 + 4U);
    t9 = *((unsigned int *)t27);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB77;

LAB78:    t2 = (t0 + 2528);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t2, 32);
    t4 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB79:
LAB57:
LAB37:    goto LAB29;

LAB33:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB34;

LAB35:
LAB38:    t54 = (t0 + 6068);
    t55 = (t54 + 32U);
    t56 = *((char **)t55);
    t57 = (t0 + 400);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t57 = (t59 + 4U);
    t60 = (t56 + 4U);
    t61 = (t58 + 4U);
    if (*((unsigned int *)t60) != 0)
        goto LAB40;

LAB39:    if (*((unsigned int *)t61) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t56) < *((unsigned int *)t58))
        goto LAB41;

LAB42:    t62 = (t59 + 4U);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t59);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB44;

LAB45:    t2 = (t0 + 2528);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t2, 32);
    t4 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB46:    goto LAB37;

LAB40:    *((unsigned int *)t59) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t59) = 1;
    goto LAB42;

LAB44:    t68 = (t0 + 6160);
    t69 = (t68 + 32U);
    t70 = *((char **)t69);
    t71 = (t0 + 5608);
    xsi_vlogvar_generic_wait_assign_value(t71, t70, 2, 0, 0, 32, 0LL);
    goto LAB46;

LAB47:
LAB50:    t6 = xsi_vlog_time(t72, 1000000.000000000, 100.0000000000000);
    t7 = (t0 + 6068);
    t8 = (t7 + 32U);
    t21 = *((char **)t8);
    t27 = (t0 + 6068);
    t28 = (t27 + 32U);
    t30 = *((char **)t28);
    t31 = (t0 + 400);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t29, 0, 8);
    xsi_vlog_signed_minus(t29, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, ng49, 5, t0, (char)118, t72, 64, (char)118, t21, 9, (char)118, t30, 9, (char)119, t29, 32);
    goto LAB49;

LAB53:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB54;

LAB55:
LAB58:    t28 = (t0 + 6068);
    t30 = (t28 + 32U);
    t31 = *((char **)t30);
    t32 = (t0 + 400);
    t45 = *((char **)t32);
    memset(t29, 0, 8);
    t32 = (t29 + 4U);
    t51 = (t31 + 4U);
    t52 = (t45 + 4U);
    if (*((unsigned int *)t51) != 0)
        goto LAB60;

LAB59:    if (*((unsigned int *)t52) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t31) < *((unsigned int *)t45))
        goto LAB61;

LAB62:    t53 = (t29 + 4U);
    t33 = *((unsigned int *)t53);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB64;

LAB65:    t2 = (t0 + 2528);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t2, 32);
    t4 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB66:    goto LAB57;

LAB60:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t29) = 1;
    goto LAB62;

LAB64:    t54 = (t0 + 5792);
    t55 = (t54 + 32U);
    t56 = *((char **)t55);
    t57 = (t0 + 5792);
    t58 = (t57 + 40U);
    t60 = *((char **)t58);
    t61 = (t0 + 5792);
    t62 = (t61 + 36U);
    t68 = *((char **)t62);
    t69 = (t0 + 6068);
    t70 = (t69 + 32U);
    t71 = *((char **)t70);
    xsi_vlog_generic_get_array_select_value(t59, 32, t56, t60, t68, 2, 1, t71, 9, 2);
    t73 = (t0 + 5608);
    xsi_vlogvar_generic_wait_assign_value(t73, t59, 2, 0, 0, 32, 0LL);
    goto LAB66;

LAB67:
LAB70:    t6 = xsi_vlog_time(t72, 1000000.000000000, 100.0000000000000);
    t7 = (t0 + 6068);
    t8 = (t7 + 32U);
    t21 = *((char **)t8);
    t27 = (t0 + 6068);
    t28 = (t27 + 32U);
    t30 = *((char **)t28);
    t31 = (t0 + 400);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t29, 0, 8);
    xsi_vlog_signed_minus(t29, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, ng50, 5, t0, (char)118, t72, 64, (char)118, t21, 9, (char)118, t30, 9, (char)119, t29, 32);
    goto LAB69;

LAB73:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t5) = 1;
    goto LAB75;

LAB77:    t28 = (t0 + 5608);
    t30 = (t28 + 32U);
    t31 = *((char **)t30);
    t32 = (t0 + 5608);
    xsi_vlogvar_generic_wait_assign_value(t32, t31, 2, 0, 0, 32, 0LL);
    goto LAB79;

LAB80:
LAB83:    t6 = xsi_vlog_time(t72, 1000000.000000000, 100.0000000000000);
    t7 = (t0 + 6068);
    t8 = (t7 + 32U);
    t21 = *((char **)t8);
    t27 = (t0 + 6068);
    t28 = (t27 + 32U);
    t30 = *((char **)t28);
    t31 = (t0 + 400);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t29, 0, 8);
    xsi_vlog_signed_minus(t29, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, ng51, 5, t0, (char)118, t72, 64, (char)118, t21, 9, (char)118, t30, 9, (char)119, t29, 32);
    goto LAB82;

LAB86:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB88;

LAB87:    *((unsigned int *)t5) = 1;
    goto LAB88;

LAB90:    t28 = (t0 + 5792);
    t30 = (t28 + 32U);
    t31 = *((char **)t30);
    t32 = (t0 + 5792);
    t45 = (t32 + 40U);
    t51 = *((char **)t45);
    t52 = (t0 + 5792);
    t53 = (t52 + 36U);
    t54 = *((char **)t53);
    t55 = (t0 + 6068);
    t56 = (t55 + 32U);
    t57 = *((char **)t56);
    xsi_vlog_generic_get_array_select_value(t29, 32, t31, t51, t54, 2, 1, t57, 9, 2);
    t58 = (t0 + 5608);
    xsi_vlogvar_generic_wait_assign_value(t58, t29, 2, 0, 0, 32, 0LL);
    goto LAB92;

LAB93:
LAB96:    t6 = xsi_vlog_time(t72, 1000000.000000000, 100.0000000000000);
    t7 = (t0 + 6068);
    t8 = (t7 + 32U);
    t21 = *((char **)t8);
    t27 = (t0 + 6068);
    t28 = (t27 + 32U);
    t30 = *((char **)t28);
    t31 = (t0 + 400);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t29, 0, 8);
    xsi_vlog_signed_minus(t29, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, ng52, 5, t0, (char)118, t72, 64, (char)118, t21, 9, (char)118, t30, 9, (char)119, t29, 32);
    goto LAB95;

}

static void A473_21(char *t0)
{
    char t5[8];
    char t21[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t104[8];
    char t117[8];
    char t118[8];
    char t139[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    int t130;
    char *t131;
    unsigned int t132;
    int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;

LAB0:    t1 = (t0 + 14108U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14696);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    memset(t21, 0, 8);
    t22 = (t21 + 4U);
    t23 = (t5 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t29 = (t21 + 4U);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    memcpy(t61, t21, 8);

LAB16:    t93 = (t61 + 4U);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t61);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t21) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 6252);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    t38 = (t37 + 4U);
    t39 = (t35 + 4U);
    t40 = (t36 + 4U);
    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t36);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB20;

LAB17:    if (t50 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t37) = 1;

LAB20:    memset(t53, 0, 8);
    t54 = (t53 + 4U);
    t55 = (t37 + 4U);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t37);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t55) != 0)
        goto LAB23;

LAB24:    t62 = *((unsigned int *)t21);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t21 + 4U);
    t66 = (t53 + 4U);
    t67 = (t61 + 4U);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t53) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t53) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t21 + 4U);
    t76 = (t53 + 4U);
    t77 = *((unsigned int *)t21);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB27;

LAB28:
LAB31:    t99 = (t0 + 6068);
    t100 = (t99 + 32U);
    t101 = *((char **)t100);
    t102 = (t0 + 400);
    t103 = *((char **)t102);
    memset(t104, 0, 8);
    t102 = (t104 + 4U);
    t105 = (t101 + 4U);
    t106 = (t103 + 4U);
    if (*((unsigned int *)t105) != 0)
        goto LAB33;

LAB32:    if (*((unsigned int *)t106) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t101) < *((unsigned int *)t103))
        goto LAB34;

LAB35:    t107 = (t104 + 4U);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t104);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB37;

LAB38:    t2 = (t0 + 2528);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t2, 32);
    t4 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB39:    goto LAB30;

LAB33:    *((unsigned int *)t104) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t104) = 1;
    goto LAB35;

LAB37:    t113 = (t0 + 6160);
    t114 = (t113 + 32U);
    t115 = *((char **)t114);
    t116 = (t0 + 5792);
    t119 = (t0 + 5792);
    t120 = (t119 + 40U);
    t121 = *((char **)t120);
    t122 = (t0 + 5792);
    t123 = (t122 + 36U);
    t124 = *((char **)t123);
    t125 = (t0 + 6068);
    t126 = (t125 + 32U);
    t127 = *((char **)t126);
    xsi_vlog_generic_convert_array_indices(t117, t118, t121, t124, 2, 1, t127, 9, 2);
    t128 = (t117 + 4U);
    t129 = *((unsigned int *)t128);
    t130 = (!(t129));
    t131 = (t118 + 4U);
    t132 = *((unsigned int *)t131);
    t133 = (!(t132));
    t134 = (t130 && t133);
    if (t134 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t135 = *((unsigned int *)t117);
    t136 = *((unsigned int *)t118);
    t137 = (t135 - t136);
    t138 = (t137 + 1);
    xsi_vlogvar_generic_wait_assign_value(t116, t115, 2, 0, *((unsigned int *)t118), t138, 0LL);
    goto LAB41;

LAB42:
LAB45:    t6 = xsi_vlog_time(t139, 1000000.000000000, 100.0000000000000);
    t7 = (t0 + 6068);
    t8 = (t7 + 32U);
    t22 = *((char **)t8);
    t23 = (t0 + 6068);
    t29 = (t23 + 32U);
    t33 = *((char **)t29);
    t34 = (t0 + 400);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t35, 32, t34, 32);
    xsi_vlogfile_write(1, 0, ng53, 5, t0, (char)118, t139, 64, (char)118, t22, 9, (char)118, t33, 9, (char)119, t21, 32);
    goto LAB44;

}

static void A488_22(char *t0)
{
    char t5[8];
    char t21[8];
    char t35[8];
    char t36[8];
    char t44[8];
    char t84[8];
    char t111[8];
    char t112[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    int t124;
    char *t125;
    unsigned int t126;
    int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    int t132;

LAB0:    t1 = (t0 + 14236U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 4848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    memset(t21, 0, 8);
    t22 = (t21 + 4U);
    t23 = (t5 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t29 = (t21 + 4U);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    memcpy(t44, t21, 8);

LAB16:    t76 = (t44 + 4U);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t21) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 1388);
    t34 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_signed_greater(t35, 32, t34, 32, t33, 32);
    memset(t36, 0, 8);
    t37 = (t36 + 4U);
    t38 = (t35 + 4U);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t35);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t38) != 0)
        goto LAB19;

LAB20:    t45 = *((unsigned int *)t21);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t21 + 4U);
    t49 = (t36 + 4U);
    t50 = (t44 + 4U);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t21 + 4U);
    t59 = (t36 + 4U);
    t60 = *((unsigned int *)t21);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB23;

LAB24:
LAB27:    t82 = (t0 + 1388);
    t83 = *((char **)t82);
    t82 = (t0 + 8368);
    xsi_vlogvar_assign_value(t82, t83, 0, 0, 32);

LAB28:    t2 = (t0 + 8368);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t4, 32, t6, 32);
    t7 = (t5 + 4U);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:    goto LAB26;

LAB29:
LAB31:    t8 = (t0 + 5024U);
    t22 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t21, 0, 8);
    t23 = (t21 + 4U);
    t29 = (t22 + 4U);
    t33 = (t8 + 4U);
    t14 = *((unsigned int *)t22);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t33);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t24 = *((unsigned int *)t29);
    t25 = *((unsigned int *)t33);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB35;

LAB32:    if (t26 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t21) = 1;

LAB35:    memset(t35, 0, 8);
    t34 = (t35 + 4U);
    t37 = (t21 + 4U);
    t30 = *((unsigned int *)t37);
    t31 = (~(t30));
    t32 = *((unsigned int *)t21);
    t39 = (t32 & t31);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t37) != 0)
        goto LAB38;

LAB39:    t38 = (t35 + 4U);
    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t38);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB40;

LAB41:    memcpy(t84, t35, 8);

LAB42:    t101 = (t84 + 4U);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t84);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB54;

LAB55:
LAB62:    t2 = (t0 + 8368);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t6, 32);
    t7 = (t5 + 4U);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB63;

LAB64:
LAB69:    t2 = (t0 + 7448);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 7448);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t22 = (t0 + 7448);
    t23 = (t22 + 36U);
    t29 = *((char **)t23);
    t33 = (t0 + 8368);
    t34 = (t33 + 32U);
    t37 = *((char **)t34);
    t38 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t37, 32, t38, 32);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t29, 2, 1, t21, 32, 1);
    t48 = (t0 + 7448);
    t49 = (t0 + 7448);
    t50 = (t49 + 40U);
    t58 = *((char **)t50);
    t59 = (t0 + 7448);
    t76 = (t59 + 36U);
    t82 = *((char **)t76);
    t83 = (t0 + 8368);
    t85 = (t83 + 32U);
    t86 = *((char **)t85);
    xsi_vlog_generic_convert_array_indices(t35, t36, t58, t82, 2, 1, t86, 32, 1);
    t87 = (t35 + 4U);
    t9 = *((unsigned int *)t87);
    t68 = (!(t9));
    t88 = (t36 + 4U);
    t10 = *((unsigned int *)t88);
    t69 = (!(t10));
    t124 = (t68 && t69);
    if (t124 == 1)
        goto LAB70;

LAB71:
LAB65:    t2 = (t0 + 8368);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t6, 32);
    t7 = (t5 + 4U);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB72;

LAB73:
LAB78:    t2 = (t0 + 7540);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 7540);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t22 = (t0 + 7540);
    t23 = (t22 + 36U);
    t29 = *((char **)t23);
    t33 = (t0 + 8368);
    t34 = (t33 + 32U);
    t37 = *((char **)t34);
    t38 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t37, 32, t38, 32);
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t8, t29, 2, 1, t21, 32, 1);
    t48 = (t0 + 7540);
    t49 = (t0 + 7540);
    t50 = (t49 + 40U);
    t58 = *((char **)t50);
    t59 = (t0 + 7540);
    t76 = (t59 + 36U);
    t82 = *((char **)t76);
    t83 = (t0 + 8368);
    t85 = (t83 + 32U);
    t86 = *((char **)t85);
    xsi_vlog_generic_convert_array_indices(t35, t36, t58, t82, 2, 1, t86, 32, 1);
    t87 = (t35 + 4U);
    t9 = *((unsigned int *)t87);
    t68 = (!(t9));
    t88 = (t36 + 4U);
    t10 = *((unsigned int *)t88);
    t69 = (!(t10));
    t124 = (t68 && t69);
    if (t124 == 1)
        goto LAB79;

LAB80:
LAB74:
LAB56:    t2 = (t0 + 8368);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t4, 32, t6, 32);
    t7 = (t0 + 8368);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB28;

LAB34:    *((unsigned int *)t21) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t35) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB39;

LAB40:    t48 = (t0 + 4848U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t50 = (t36 + 4U);
    t58 = (t49 + 4U);
    t59 = (t48 + 4U);
    t45 = *((unsigned int *)t49);
    t46 = *((unsigned int *)t48);
    t47 = (t45 ^ t46);
    t51 = *((unsigned int *)t58);
    t52 = *((unsigned int *)t59);
    t53 = (t51 ^ t52);
    t54 = (t47 | t53);
    t55 = *((unsigned int *)t58);
    t56 = *((unsigned int *)t59);
    t57 = (t55 | t56);
    t60 = (~(t57));
    t61 = (t54 & t60);
    if (t61 != 0)
        goto LAB46;

LAB43:    if (t57 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t36) = 1;

LAB46:    memset(t44, 0, 8);
    t76 = (t44 + 4U);
    t82 = (t36 + 4U);
    t62 = *((unsigned int *)t82);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t82) != 0)
        goto LAB49;

LAB50:    t67 = *((unsigned int *)t35);
    t70 = *((unsigned int *)t44);
    t71 = (t67 & t70);
    *((unsigned int *)t84) = t71;
    t83 = (t35 + 4U);
    t85 = (t44 + 4U);
    t86 = (t84 + 4U);
    t72 = *((unsigned int *)t83);
    t73 = *((unsigned int *)t85);
    t74 = (t72 | t73);
    *((unsigned int *)t86) = t74;
    t75 = *((unsigned int *)t86);
    t77 = (t75 != 0);
    if (t77 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    *((unsigned int *)t36) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t44) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t44) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB50;

LAB51:    t78 = *((unsigned int *)t84);
    t79 = *((unsigned int *)t86);
    *((unsigned int *)t84) = (t78 | t79);
    t87 = (t35 + 4U);
    t88 = (t44 + 4U);
    t80 = *((unsigned int *)t35);
    t81 = (~(t80));
    t89 = *((unsigned int *)t87);
    t90 = (~(t89));
    t91 = *((unsigned int *)t44);
    t92 = (~(t91));
    t93 = *((unsigned int *)t88);
    t94 = (~(t93));
    t68 = (t81 & t90);
    t69 = (t92 & t94);
    t95 = (~(t68));
    t96 = (~(t69));
    t97 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t97 & t95);
    t98 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t98 & t96);
    t99 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t99 & t95);
    t100 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t100 & t96);
    goto LAB53;

LAB54:
LAB57:    t107 = (t0 + 7356);
    t108 = (t107 + 32U);
    t109 = *((char **)t108);
    t110 = (t0 + 7448);
    t113 = (t0 + 7448);
    t114 = (t113 + 40U);
    t115 = *((char **)t114);
    t116 = (t0 + 7448);
    t117 = (t116 + 36U);
    t118 = *((char **)t117);
    t119 = (t0 + 8368);
    t120 = (t119 + 32U);
    t121 = *((char **)t120);
    xsi_vlog_generic_convert_array_indices(t111, t112, t115, t118, 2, 1, t121, 32, 1);
    t122 = (t111 + 4U);
    t123 = *((unsigned int *)t122);
    t124 = (!(t123));
    t125 = (t112 + 4U);
    t126 = *((unsigned int *)t125);
    t127 = (!(t126));
    t128 = (t124 && t127);
    if (t128 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng2)));
    t3 = (t0 + 7540);
    t4 = (t0 + 7540);
    t6 = (t4 + 40U);
    t7 = *((char **)t6);
    t8 = (t0 + 7540);
    t22 = (t8 + 36U);
    t23 = *((char **)t22);
    t29 = (t0 + 8368);
    t33 = (t29 + 32U);
    t34 = *((char **)t33);
    xsi_vlog_generic_convert_array_indices(t5, t21, t7, t23, 2, 1, t34, 32, 1);
    t37 = (t5 + 4U);
    t9 = *((unsigned int *)t37);
    t68 = (!(t9));
    t38 = (t21 + 4U);
    t10 = *((unsigned int *)t38);
    t69 = (!(t10));
    t124 = (t68 && t69);
    if (t124 == 1)
        goto LAB60;

LAB61:    goto LAB56;

LAB58:    t129 = *((unsigned int *)t111);
    t130 = *((unsigned int *)t112);
    t131 = (t129 - t130);
    t132 = (t131 + 1);
    xsi_vlogvar_generic_wait_assign_value(t110, t109, 2, 0, *((unsigned int *)t112), t132, 0LL);
    goto LAB59;

LAB60:    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t21);
    t127 = (t11 - t12);
    t128 = (t127 + 1);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, *((unsigned int *)t21), t128, 0LL);
    goto LAB61;

LAB63:
LAB66:    t8 = (t0 + 5608);
    t22 = (t8 + 32U);
    t23 = *((char **)t22);
    t29 = (t0 + 7448);
    t33 = (t0 + 7448);
    t34 = (t33 + 40U);
    t37 = *((char **)t34);
    t38 = (t0 + 7448);
    t48 = (t38 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 8368);
    t58 = (t50 + 32U);
    t59 = *((char **)t58);
    xsi_vlog_generic_convert_array_indices(t21, t35, t37, t49, 2, 1, t59, 32, 1);
    t76 = (t21 + 4U);
    t14 = *((unsigned int *)t76);
    t68 = (!(t14));
    t82 = (t35 + 4U);
    t15 = *((unsigned int *)t82);
    t69 = (!(t15));
    t124 = (t68 && t69);
    if (t124 == 1)
        goto LAB67;

LAB68:    goto LAB65;

LAB67:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t35);
    t127 = (t16 - t17);
    t128 = (t127 + 1);
    xsi_vlogvar_generic_wait_assign_value(t29, t23, 2, 0, *((unsigned int *)t35), t128, 0LL);
    goto LAB68;

LAB70:    t11 = *((unsigned int *)t35);
    t12 = *((unsigned int *)t36);
    t127 = (t11 - t12);
    t128 = (t127 + 1);
    xsi_vlogvar_generic_wait_assign_value(t48, t5, 2, 0, *((unsigned int *)t36), t128, 0LL);
    goto LAB71;

LAB72:
LAB75:    t8 = (t0 + 6988);
    t22 = (t8 + 32U);
    t23 = *((char **)t22);
    t29 = (t0 + 7540);
    t33 = (t0 + 7540);
    t34 = (t33 + 40U);
    t37 = *((char **)t34);
    t38 = (t0 + 7540);
    t48 = (t38 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 8368);
    t58 = (t50 + 32U);
    t59 = *((char **)t58);
    xsi_vlog_generic_convert_array_indices(t21, t35, t37, t49, 2, 1, t59, 32, 1);
    t76 = (t21 + 4U);
    t14 = *((unsigned int *)t76);
    t68 = (!(t14));
    t82 = (t35 + 4U);
    t15 = *((unsigned int *)t82);
    t69 = (!(t15));
    t124 = (t68 && t69);
    if (t124 == 1)
        goto LAB76;

LAB77:    goto LAB74;

LAB76:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t35);
    t127 = (t16 - t17);
    t128 = (t127 + 1);
    xsi_vlogvar_generic_wait_assign_value(t29, t23, 2, 0, *((unsigned int *)t35), t128, 0LL);
    goto LAB77;

LAB79:    t11 = *((unsigned int *)t35);
    t12 = *((unsigned int *)t36);
    t127 = (t11 - t12);
    t128 = (t127 + 1);
    xsi_vlogvar_generic_wait_assign_value(t48, t5, 2, 0, *((unsigned int *)t36), t128, 0LL);
    goto LAB80;

}

static void A527_23(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 14364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 1388);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 7540);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 7540);
    t12 = (t6 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 7540);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 6528);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 1);
    t2 = (t0 + 7448);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 7448);
    t12 = (t6 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 7448);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 5700);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:
LAB9:    t12 = (t0 + 5608);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t0 + 5700);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    t2 = (t0 + 6988);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 6528);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB8;

}


extern void xilinxcorelib_ver_m_00000000002071564657_3430864634_init()
{
	static char *pe[] = {(void *)N113_0,(void *)N118_1,(void *)C156_2,(void *)C157_3,(void *)C158_4,(void *)C159_5,(void *)C160_6,(void *)C161_7,(void *)I266_8,(void *)A291_9,(void *)A299_10,(void *)A307_11,(void *)C315_12,(void *)A319_13,(void *)A333_14,(void *)A345_15,(void *)A355_16,(void *)A363_17,(void *)A385_18,(void *)I396_19,(void *)A414_20,(void *)A473_21,(void *)A488_22,(void *)A527_23};
	static char *se[] = {(void *)sp_defval,(void *)sp_max,(void *)sp_a_is_X,(void *)sp_hexstr_conv};
	xsi_register_didat("xilinxcorelib_ver_m_00000000002071564657_3430864634", "isim/_tmp/xilinxcorelib_ver/m_00000000002071564657_3430864634.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
