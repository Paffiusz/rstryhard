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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/PROGRAMOWANIE/Github/rstryhard/reciever.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2499495094_3212880686_p_0(char *t0)
{
    char t25[16];
    char t27[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 3048U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 != (unsigned char)2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t2 = *((unsigned char *)t5);
    t3 = (t2 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB6:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t2 = *((unsigned char *)t5);
    t3 = (t2 == (unsigned char)1);
    if (t3 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t2 = *((unsigned char *)t5);
    t3 = (t2 == (unsigned char)2);
    if (t3 != 0)
        goto LAB26;

LAB27:
LAB17:    goto LAB3;

LAB5:    xsi_set_current_line(63, ng0);
    t5 = (t0 + 3048U);
    t15 = *((char **)t5);
    t5 = (t15 + 0);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2688U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2808U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4432);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    t5 = (t0 + 1992U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t3 = t14;
    goto LAB10;

LAB11:    t5 = (t0 + 3048U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 != (unsigned char)1);
    t4 = t11;
    goto LAB13;

LAB14:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2152U);
    t6 = *((char **)t1);
    t16 = (9 - 8);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t6 + t18);
    t9 = (t0 + 4496);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4432);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2808U);
    t6 = *((char **)t1);
    t21 = *((int *)t6);
    t1 = (t0 + 2448U);
    t9 = *((char **)t1);
    t22 = *((int *)t9);
    t1 = (t0 + 2568U);
    t12 = *((char **)t1);
    t23 = *((int *)t12);
    t24 = (t22 / t23);
    t4 = (t21 == t24);
    if (t4 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 2808U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t1 = (t0 + 2448U);
    t6 = *((char **)t1);
    t22 = *((int *)t6);
    t1 = (t0 + 2568U);
    t9 = *((char **)t1);
    t23 = *((int *)t9);
    t24 = (t22 / t23);
    t2 = (t21 != t24);
    if (t2 != 0)
        goto LAB24;

LAB25:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1992U);
    t15 = *((char **)t1);
    t7 = *((unsigned char *)t15);
    t1 = (t0 + 2152U);
    t19 = *((char **)t1);
    t16 = (9 - 9);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t19 + t18);
    t26 = ((IEEE_P_2592010699) + 4024);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 9;
    t29 = (t28 + 4U);
    *((int *)t29) = 1;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t30 = (1 - 9);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;
    t20 = xsi_base_array_concat(t20, t25, t26, (char)99, t7, (char)97, t1, t27, (char)101);
    t31 = (1U + 9U);
    t8 = (10U != t31);
    if (t8 == 1)
        goto LAB22;

LAB23:    t29 = (t0 + 4560);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t20, 10U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t2 = *((unsigned char *)t5);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 4624);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB20;

LAB22:    xsi_size_not_matching(10U, t31, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2808U);
    t12 = *((char **)t1);
    t30 = *((int *)t12);
    t36 = (t30 + 1);
    t1 = (t0 + 2808U);
    t15 = *((char **)t1);
    t1 = (t15 + 0);
    *((int *)t1) = t36;
    goto LAB20;

LAB26:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2688U);
    t6 = *((char **)t1);
    t21 = *((int *)t6);
    t1 = (t0 + 2448U);
    t9 = *((char **)t1);
    t22 = *((int *)t9);
    t1 = (t0 + 2568U);
    t12 = *((char **)t1);
    t23 = *((int *)t12);
    t24 = (t22 / t23);
    t30 = (2 * t24);
    t4 = (t21 == t30);
    if (t4 != 0)
        goto LAB28;

LAB30:    t1 = (t0 + 2688U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t1 = (t0 + 2448U);
    t6 = *((char **)t1);
    t22 = *((int *)t6);
    t1 = (t0 + 2568U);
    t9 = *((char **)t1);
    t23 = *((int *)t9);
    t24 = (t22 / t23);
    t30 = (2 * t24);
    t2 = (t21 != t30);
    if (t2 != 0)
        goto LAB33;

LAB34:
LAB29:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t2 = (t21 == 10);
    if (t2 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB17;

LAB28:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1992U);
    t15 = *((char **)t1);
    t7 = *((unsigned char *)t15);
    t1 = (t0 + 2152U);
    t19 = *((char **)t1);
    t16 = (9 - 9);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t19 + t18);
    t26 = ((IEEE_P_2592010699) + 4024);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 9;
    t29 = (t28 + 4U);
    *((int *)t29) = 1;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t36 = (1 - 9);
    t31 = (t36 * -1);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;
    t20 = xsi_base_array_concat(t20, t25, t26, (char)99, t7, (char)97, t1, t27, (char)101);
    t31 = (1U + 9U);
    t8 = (10U != t31);
    if (t8 == 1)
        goto LAB31;

LAB32:    t29 = (t0 + 4560);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t20, 10U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2688U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t22 = (t21 + 1);
    t1 = (t0 + 2928U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t22;
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t2 = *((unsigned char *)t5);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 4624);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB29;

LAB31:    xsi_size_not_matching(10U, t31, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2688U);
    t12 = *((char **)t1);
    t36 = *((int *)t12);
    t37 = (t36 + 1);
    t1 = (t0 + 2688U);
    t15 = *((char **)t1);
    t1 = (t15 + 0);
    *((int *)t1) = t37;
    goto LAB29;

LAB35:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3048U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB36;

}


extern void work_a_2499495094_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2499495094_3212880686_p_0};
	xsi_register_didat("work_a_2499495094_3212880686", "isim/ReceiverTB_isim_beh.exe.sim/work/a_2499495094_3212880686.didat");
	xsi_register_executes(pe);
}
