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
static const char *ng0 = "D:/PROGRAMOWANIE/Github/rstryhard/ReceiverTB.vhd";



static void work_a_2659944937_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2659944937_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (7 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (6 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(95, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (5 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(97, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (4 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(99, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (3 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(101, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (2 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(103, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (1 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(105, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t12 = *((unsigned char *)t2);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t12;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(107, ng0);
    t3 = (0.10000000000000001 * 1000000000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    goto LAB2;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

}


extern void work_a_2659944937_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2659944937_2372691052_p_0,(void *)work_a_2659944937_2372691052_p_1};
	xsi_register_didat("work_a_2659944937_2372691052", "isim/ReceiverTB_isim_beh.exe.sim/work/a_2659944937_2372691052.didat");
	xsi_register_executes(pe);
}
