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
 * \brief DMA �ڴ浽�ڴ����̣�ͨ��������ӿ�ʵ��
 *
 * - ʵ������
 *   1. DMA ����ɹ�����ӡ "transfer success";
 *   2. DMA �����������ӡ "transfer failure";
 *
 * \note
 *    ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_9 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_aml166_core_drv_dma_m2m.c src_aml166_core_drv_dma_m2m
 *
 * \internal
 * \par Modification History
 * - 1.00 17-04-11 ari , first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_aml166_core_drv_dma_m2m
 * \copydoc demo_aml166_core_drv_dma_m2m.c
 */

/** [src_aml166_core_drv_dma_m2m] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zlg116.h"
#include "demo_zlg_entries.h"
#include "demo_aml166_core_entries.h"

#define DMA_M2M_CH DMA_CHAN_1 /**< \brief DMA ͨ���� */

/**
 * \brief �������
 */
void demo_aml166_core_drv_dma_m2m_entry (void)
{
    AM_DBG_INFO("demo aml166_core drv dma m2m!\r\n");

    demo_zlg_drv_dma_m2m_entry(DMA_M2M_CH);
}
/** [src_aml166_core_drv_dma_m2m] */

/* end of file */