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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Dawid/Szkolnictwo/ISP/rstryhard/reciever.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0189509836_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    int t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)0);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2128U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 2128U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)1);
    if (t5 != 0)
        goto LAB16;

LAB17:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 3632);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2128U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    t7 = (t0 + 2072U);
    xsi_variable_act(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t12 = (t11 + 1);
    t1 = (t0 + 3632);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = (t0 + 2248U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t13 = (t12 / 2);
    t2 = (t11 == t13);
    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB6;

LAB13:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2128U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    t8 = (t0 + 2072U);
    xsi_variable_act(t8);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 3632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t12 = (t11 + 1);
    t1 = (t0 + 3632);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = (t0 + 2248U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t2 = (t11 == t12);
    if (t2 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB6;

LAB18:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t13 = *((int *)t7);
    t6 = (t13 <= 8);
    if (t6 == 1)
        goto LAB24;

LAB25:    t5 = (unsigned char)0;

LAB26:    if (t5 != 0)
        goto LAB21;

LAB23:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 9);
    if (t2 != 0)
        goto LAB27;

LAB28:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t9 = *((char **)t1);
    t16 = *((unsigned char *)t9);
    t1 = (t0 + 1832U);
    t10 = *((char **)t1);
    t17 = *((int *)t10);
    t18 = (t17 - 7);
    t19 = (t18 * -1);
    t20 = (1 * t19);
    t21 = (0U + t20);
    t1 = (t0 + 3696);
    t22 = (t1 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t16;
    xsi_driver_first_trans_delta(t1, t21, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 3760);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t14 = *((int *)t8);
    t15 = (t14 >= 0);
    t5 = t15;
    goto LAB26;

LAB27:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 3824);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    t4 = (t0 + 2072U);
    xsi_variable_act(t4);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

}


extern void work_a_0189509836_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0189509836_3212880686_p_0};
	xsi_register_didat("work_a_0189509836_3212880686", "isim/testinput_isim_beh.exe.sim/work/a_0189509836_3212880686.didat");
	xsi_register_executes(pe);
}
