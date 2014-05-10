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
    char t23[16];
    char t25[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2928U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 != (unsigned char)1);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2928U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)2);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB6:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2928U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)1);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 2928U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((unsigned char *)t4) = (unsigned char)1;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2688U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2808U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4312);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t12 = (9 - 8);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t5 + t14);
    t8 = (t0 + 4376);
    t11 = (t8 + 56U);
    t15 = *((char **)t11);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4312);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB13:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2688U);
    t5 = *((char **)t1);
    t18 = *((int *)t5);
    t1 = (t0 + 2448U);
    t8 = *((char **)t1);
    t19 = *((int *)t8);
    t1 = (t0 + 2568U);
    t11 = *((char **)t1);
    t20 = *((int *)t11);
    t21 = (t19 / t20);
    t22 = (2 * t21);
    t6 = (t18 == t22);
    if (t6 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 2688U);
    t4 = *((char **)t1);
    t18 = *((int *)t4);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t1 = (t0 + 2568U);
    t8 = *((char **)t1);
    t20 = *((int *)t8);
    t21 = (t19 / t20);
    t22 = (2 * t21);
    t2 = (t18 != t22);
    if (t2 != 0)
        goto LAB21;

LAB22:
LAB17:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2808U);
    t4 = *((char **)t1);
    t18 = *((int *)t4);
    t2 = (t18 == 10);
    if (t2 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB14;

LAB16:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1992U);
    t15 = *((char **)t1);
    t7 = *((unsigned char *)t15);
    t1 = (t0 + 2152U);
    t16 = *((char **)t1);
    t12 = (9 - 9);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t16 + t14);
    t24 = ((IEEE_P_2592010699) + 4024);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 9;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = -1;
    t28 = (1 - 9);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t17 = xsi_base_array_concat(t17, t23, t24, (char)99, t7, (char)97, t1, t25, (char)101);
    t29 = (1U + 9U);
    t9 = (10U != t29);
    if (t9 == 1)
        goto LAB19;

LAB20:    t27 = (t0 + 4440);
    t30 = (t27 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t17, 10U);
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2688U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2808U);
    t4 = *((char **)t1);
    t18 = *((int *)t4);
    t19 = (t18 + 1);
    t1 = (t0 + 2808U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t15 = *((char **)t11);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    xsi_size_not_matching(10U, t29, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2688U);
    t11 = *((char **)t1);
    t28 = *((int *)t11);
    t34 = (t28 + 1);
    t1 = (t0 + 2688U);
    t15 = *((char **)t1);
    t1 = (t15 + 0);
    *((int *)t1) = t34;
    goto LAB17;

LAB23:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB24;

}


extern void work_a_2499495094_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2499495094_3212880686_p_0};
	xsi_register_didat("work_a_2499495094_3212880686", "isim/ReceiverTB_isim_beh.exe.sim/work/a_2499495094_3212880686.didat");
	xsi_register_executes(pe);
}
