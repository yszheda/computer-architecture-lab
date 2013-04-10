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
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {42U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void A163_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 1532);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(163, ng0);

LAB5:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t5 == 1)
        goto LAB23;

LAB24:
LAB25:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(165, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 3, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 3, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(168, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 3, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(169, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 3, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(170, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 3, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(171, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 3, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(172, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 3, 0LL);
    goto LAB25;

}


extern void work_m_00000000001605163165_2362729609_init()
{
	static char *pe[] = {(void *)A163_0};
	xsi_register_didat("work_m_00000000001605163165_2362729609", "isim/_tmp/work/m_00000000001605163165_2362729609.didat");
	xsi_register_executes(pe);
}
