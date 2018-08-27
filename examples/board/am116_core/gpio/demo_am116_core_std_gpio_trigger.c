/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/
/**
 * \file
 * \brief GPIO �����ж����̣�ͨ����׼�ӿ�ʵ��
 *
 * - �������裺
 *   1. �� J14 �� KEY �� PIOA_8 �̽���һ��
 *
 * - ʵ������
 *   1. ���°��� KEY/RES��������� "the gpio interrupt happen!"��
 *
 * \note
 *    ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_9 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_am116_core_std_gpio_trigger.c src_am116_core_std_gpio_trigger
 *
 * \internal
 * \par Modification History
 * - 1.00 17-04-17  nwt, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_am116_core_std_gpio_trigger
 * \copydoc demo_am116_core_std_gpio_trigger.c
 */

/** [src_am116_core_std_gpio_trigger] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zlg116.h"
#include "demo_std_entries.h"

/**
 * \brief �������
 */
void demo_am116_core_std_gpio_trigger_entry (void)
{
    AM_DBG_INFO("demo am116_core std gpio trigger!\r\n");

    demo_std_gpio_trigger_entry(PIOA_8);
}
/** [src_am116_core_std_gpio_trigger] */

/* end of file */