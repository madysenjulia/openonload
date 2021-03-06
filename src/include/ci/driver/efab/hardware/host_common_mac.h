/*
** Copyright 2005-2016  Solarflare Communications Inc.
**                      7505 Irvine Center Drive, Irvine, CA 92618, USA
** Copyright 2002-2005  Level 5 Networks Inc.
**
** This program is free software; you can redistribute it and/or modify it
** under the terms of version 2 of the GNU General Public License as
** published by the Free Software Foundation.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
*/

/* This file is autogenerated, do not manually alter.    */
/* If you are in the v5 tree, you can refresh headers    */
/* with the genheader utility in .../v5/scripts          */
#ifndef	HOST_MAC_PROGMODEL_DEFS_H
#define	HOST_MAC_PROGMODEL_DEFS_H

/*------------------------------------------------------------*/
/*
 * FR_AB_MD_TXD_REG(128bit):
 * PHY management transmit data register
 */
#define	FR_AB_MD_TXD_REG_OFST 0x00000c00
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MD_TXD_LBN 0
#define	FRF_AB_MD_TXD_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_MD_RXD_REG(128bit):
 * PHY management receive data register
 */
#define	FR_AB_MD_RXD_REG_OFST 0x00000c10
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MD_RXD_LBN 0
#define	FRF_AB_MD_RXD_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_MD_CS_REG(128bit):
 * PHY management configuration & status register
 */
#define	FR_AB_MD_CS_REG_OFST 0x00000c20
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MD_RD_EN_CMD_LBN 15
#define	FRF_AB_MD_RD_EN_CMD_WIDTH 1
#define	FRF_AB_MD_WR_EN_CMD_LBN 14
#define	FRF_AB_MD_WR_EN_CMD_WIDTH 1
#define	FRF_AB_MD_ADDR_CMD_LBN 13
#define	FRF_AB_MD_ADDR_CMD_WIDTH 1
#define	FRF_AB_MD_PT_LBN 7
#define	FRF_AB_MD_PT_WIDTH 3
#define	FRF_AB_MD_PL_LBN 6
#define	FRF_AB_MD_PL_WIDTH 1
#define	FRF_AB_MD_INT_CLR_LBN 5
#define	FRF_AB_MD_INT_CLR_WIDTH 1
#define	FRF_AB_MD_GC_LBN 4
#define	FRF_AB_MD_GC_WIDTH 1
#define	FRF_AB_MD_PRSP_LBN 3
#define	FRF_AB_MD_PRSP_WIDTH 1
#define	FRF_AB_MD_RIC_LBN 2
#define	FRF_AB_MD_RIC_WIDTH 1
#define	FRF_AB_MD_RDC_LBN 1
#define	FRF_AB_MD_RDC_WIDTH 1
#define	FRF_AB_MD_WRC_LBN 0
#define	FRF_AB_MD_WRC_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_MD_PHY_ADR_REG(128bit):
 * PHY management PHY address register
 */
#define	FR_AB_MD_PHY_ADR_REG_OFST 0x00000c30
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MD_PHY_ADR_LBN 0
#define	FRF_AB_MD_PHY_ADR_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_MD_ID_REG(128bit):
 * PHY management ID register
 */
#define	FR_AB_MD_ID_REG_OFST 0x00000c40
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MD_PRT_ADR_LBN 11
#define	FRF_AB_MD_PRT_ADR_WIDTH 5
#define	FRF_AB_MD_DEV_ADR_LBN 6
#define	FRF_AB_MD_DEV_ADR_WIDTH 5


/*------------------------------------------------------------*/
/*
 * FR_AB_MD_STAT_REG(128bit):
 * PHY management status & mask register
 */
#define	FR_AB_MD_STAT_REG_OFST 0x00000c50
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MD_PINT_LBN 4
#define	FRF_AB_MD_PINT_WIDTH 1
#define	FRF_AB_MD_DONE_LBN 3
#define	FRF_AB_MD_DONE_WIDTH 1
#define	FRF_AB_MD_BSERR_LBN 2
#define	FRF_AB_MD_BSERR_WIDTH 1
#define	FRF_AB_MD_LNFL_LBN 1
#define	FRF_AB_MD_LNFL_WIDTH 1
#define	FRF_AB_MD_BSY_LBN 0
#define	FRF_AB_MD_BSY_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_MAC_STAT_DMA_REG(128bit):
 * Port MAC statistical counter DMA register
 */
#define	FR_AB_MAC_STAT_DMA_REG_OFST 0x00000c60
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MAC_STAT_DMA_CMD_LBN 48
#define	FRF_AB_MAC_STAT_DMA_CMD_WIDTH 1
#define	FRF_AB_MAC_STAT_DMA_ADR_LBN 0
#define	FRF_AB_MAC_STAT_DMA_ADR_WIDTH 48


/*------------------------------------------------------------*/
/*
 * FR_AB_MAC_CTRL_REG(128bit):
 * Port MAC control register
 */
#define	FR_AB_MAC_CTRL_REG_OFST 0x00000c80
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MAC_XOFF_VAL_LBN 16
#define	FRF_AB_MAC_XOFF_VAL_WIDTH 16
#define	FRF_BB_TXFIFO_DRAIN_EN_LBN 7
#define	FRF_BB_TXFIFO_DRAIN_EN_WIDTH 1
#define	FRF_AB_MAC_XG_DISTXCRC_LBN 5
#define	FRF_AB_MAC_XG_DISTXCRC_WIDTH 1
#define	FRF_AB_MAC_BCAD_ACPT_LBN 4
#define	FRF_AB_MAC_BCAD_ACPT_WIDTH 1
#define	FRF_AB_MAC_UC_PROM_LBN 3
#define	FRF_AB_MAC_UC_PROM_WIDTH 1
#define	FRF_AB_MAC_LINK_STATUS_LBN 2
#define	FRF_AB_MAC_LINK_STATUS_WIDTH 1
#define	FRF_AB_MAC_SPEED_LBN 0
#define	FRF_AB_MAC_SPEED_WIDTH 2
#define	FFE_AB_MAC_SPEED_10G 3
#define	FFE_AB_MAC_SPEED_1G 2
#define	FFE_AB_MAC_SPEED_100M 1
#define	FFE_AB_MAC_SPEED_10M 0


/*------------------------------------------------------------*/
/*
 * FR_BB_GEN_MODE_REG(128bit):
 * General Purpose mode register (external interrupt mask)
 */
#define	FR_BB_GEN_MODE_REG_OFST 0x00000c90
/* falconb0=net_func_bar2 */

#define	FRF_BB_XFP_PHY_INT_POL_SEL_LBN 3
#define	FRF_BB_XFP_PHY_INT_POL_SEL_WIDTH 1
#define	FRF_BB_XG_PHY_INT_POL_SEL_LBN 2
#define	FRF_BB_XG_PHY_INT_POL_SEL_WIDTH 1
#define	FRF_BB_XFP_PHY_INT_MASK_LBN 1
#define	FRF_BB_XFP_PHY_INT_MASK_WIDTH 1
#define	FRF_BB_XG_PHY_INT_MASK_LBN 0
#define	FRF_BB_XG_PHY_INT_MASK_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_MAC_MC_HASH_REG0(128bit):
 * Multicast address hash table
 */
#define	FR_AB_MAC_MC_HASH_REG0_OFST 0x00000ca0
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MAC_MCAST_HASH0_LBN 0
#define	FRF_AB_MAC_MCAST_HASH0_WIDTH 128


/*------------------------------------------------------------*/
/*
 * FR_AB_MAC_MC_HASH_REG1(128bit):
 * Multicast address hash table
 */
#define	FR_AB_MAC_MC_HASH_REG1_OFST 0x00000cb0
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_MAC_MCAST_HASH1_LBN 0
#define	FRF_AB_MAC_MCAST_HASH1_WIDTH 128


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_CFG1_REG(32bit):
 * GMAC configuration register 1
 */
#define	FR_AB_GM_CFG1_REG_OFST 0x00000e00
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_SW_RST_LBN 31
#define	FRF_AB_GM_SW_RST_WIDTH 1
#define	FRF_AB_GM_SIM_RST_LBN 30
#define	FRF_AB_GM_SIM_RST_WIDTH 1
#define	FRF_AB_GM_RST_RX_MAC_CTL_LBN 19
#define	FRF_AB_GM_RST_RX_MAC_CTL_WIDTH 1
#define	FRF_AB_GM_RST_TX_MAC_CTL_LBN 18
#define	FRF_AB_GM_RST_TX_MAC_CTL_WIDTH 1
#define	FRF_AB_GM_RST_RX_FUNC_LBN 17
#define	FRF_AB_GM_RST_RX_FUNC_WIDTH 1
#define	FRF_AB_GM_RST_TX_FUNC_LBN 16
#define	FRF_AB_GM_RST_TX_FUNC_WIDTH 1
#define	FRF_AB_GM_LOOP_LBN 8
#define	FRF_AB_GM_LOOP_WIDTH 1
#define	FRF_AB_GM_RX_FC_EN_LBN 5
#define	FRF_AB_GM_RX_FC_EN_WIDTH 1
#define	FRF_AB_GM_TX_FC_EN_LBN 4
#define	FRF_AB_GM_TX_FC_EN_WIDTH 1
#define	FRF_AB_GM_SYNC_RXEN_LBN 3
#define	FRF_AB_GM_SYNC_RXEN_WIDTH 1
#define	FRF_AB_GM_RX_EN_LBN 2
#define	FRF_AB_GM_RX_EN_WIDTH 1
#define	FRF_AB_GM_SYNC_TXEN_LBN 1
#define	FRF_AB_GM_SYNC_TXEN_WIDTH 1
#define	FRF_AB_GM_TX_EN_LBN 0
#define	FRF_AB_GM_TX_EN_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_CFG2_REG(32bit):
 * GMAC configuration register 2
 */
#define	FR_AB_GM_CFG2_REG_OFST 0x00000e10
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_PAMBL_LEN_LBN 12
#define	FRF_AB_GM_PAMBL_LEN_WIDTH 4
#define	FRF_AB_GM_IF_MODE_LBN 8
#define	FRF_AB_GM_IF_MODE_WIDTH 2
#define	FFE_AB_IF_MODE_BYTE_MODE 2
#define	FFE_AB_IF_MODE_NIBBLE_MODE 1
#define	FRF_AB_GM_HUGE_FRM_EN_LBN 5
#define	FRF_AB_GM_HUGE_FRM_EN_WIDTH 1
#define	FRF_AB_GM_LEN_CHK_LBN 4
#define	FRF_AB_GM_LEN_CHK_WIDTH 1
#define	FRF_AB_GM_PAD_CRC_EN_LBN 2
#define	FRF_AB_GM_PAD_CRC_EN_WIDTH 1
#define	FRF_AB_GM_CRC_EN_LBN 1
#define	FRF_AB_GM_CRC_EN_WIDTH 1
#define	FRF_AB_GM_FD_LBN 0
#define	FRF_AB_GM_FD_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_IPG_REG(32bit):
 * GMAC IPG register
 */
#define	FR_AB_GM_IPG_REG_OFST 0x00000e20
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_NONB2B_IPG1_LBN 24
#define	FRF_AB_GM_NONB2B_IPG1_WIDTH 7
#define	FRF_AB_GM_NONB2B_IPG2_LBN 16
#define	FRF_AB_GM_NONB2B_IPG2_WIDTH 7
#define	FRF_AB_GM_MIN_IPG_ENF_LBN 8
#define	FRF_AB_GM_MIN_IPG_ENF_WIDTH 8
#define	FRF_AB_GM_B2B_IPG_LBN 0
#define	FRF_AB_GM_B2B_IPG_WIDTH 7


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_HD_REG(32bit):
 * GMAC half duplex register
 */
#define	FR_AB_GM_HD_REG_OFST 0x00000e30
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_ALT_BOFF_VAL_LBN 20
#define	FRF_AB_GM_ALT_BOFF_VAL_WIDTH 4
#define	FRF_AB_GM_ALT_BOFF_EN_LBN 19
#define	FRF_AB_GM_ALT_BOFF_EN_WIDTH 1
#define	FRF_AB_GM_BP_NO_BOFF_LBN 18
#define	FRF_AB_GM_BP_NO_BOFF_WIDTH 1
#define	FRF_AB_GM_DIS_BOFF_LBN 17
#define	FRF_AB_GM_DIS_BOFF_WIDTH 1
#define	FRF_AB_GM_EXDEF_TX_EN_LBN 16
#define	FRF_AB_GM_EXDEF_TX_EN_WIDTH 1
#define	FRF_AB_GM_RTRY_LIMIT_LBN 12
#define	FRF_AB_GM_RTRY_LIMIT_WIDTH 4
#define	FRF_AB_GM_COL_WIN_LBN 0
#define	FRF_AB_GM_COL_WIN_WIDTH 10


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_MAX_FLEN_REG(32bit):
 * GMAC maximum frame length register
 */
#define	FR_AB_GM_MAX_FLEN_REG_OFST 0x00000e40
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_MAX_FLEN_LBN 0
#define	FRF_AB_GM_MAX_FLEN_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_TEST_REG(32bit):
 * GMAC test register
 */
#define	FR_AB_GM_TEST_REG_OFST 0x00000e70
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_MAX_BOFF_LBN 3
#define	FRF_AB_GM_MAX_BOFF_WIDTH 1
#define	FRF_AB_GM_REG_TX_FLOW_EN_LBN 2
#define	FRF_AB_GM_REG_TX_FLOW_EN_WIDTH 1
#define	FRF_AB_GM_TEST_PAUSE_LBN 1
#define	FRF_AB_GM_TEST_PAUSE_WIDTH 1
#define	FRF_AB_GM_SHORT_SLOT_LBN 0
#define	FRF_AB_GM_SHORT_SLOT_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_ADR1_REG(32bit):
 * GMAC station address register 1
 */
#define	FR_AB_GM_ADR1_REG_OFST 0x00000f00
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_ADR_B0_LBN 24
#define	FRF_AB_GM_ADR_B0_WIDTH 8
#define	FRF_AB_GM_ADR_B1_LBN 16
#define	FRF_AB_GM_ADR_B1_WIDTH 8
#define	FRF_AB_GM_ADR_B2_LBN 8
#define	FRF_AB_GM_ADR_B2_WIDTH 8
#define	FRF_AB_GM_ADR_B3_LBN 0
#define	FRF_AB_GM_ADR_B3_WIDTH 8


/*------------------------------------------------------------*/
/*
 * FR_AB_GM_ADR2_REG(32bit):
 * GMAC station address register 2
 */
#define	FR_AB_GM_ADR2_REG_OFST 0x00000f10
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GM_ADR_B4_LBN 24
#define	FRF_AB_GM_ADR_B4_WIDTH 8
#define	FRF_AB_GM_ADR_B5_LBN 16
#define	FRF_AB_GM_ADR_B5_WIDTH 8


/*------------------------------------------------------------*/
/*
 * FR_AB_GMF_CFG0_REG(32bit):
 * GMAC FIFO configuration register 0
 */
#define	FR_AB_GMF_CFG0_REG_OFST 0x00000f20
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GMF_FTFENRPLY_LBN 20
#define	FRF_AB_GMF_FTFENRPLY_WIDTH 1
#define	FRF_AB_GMF_STFENRPLY_LBN 19
#define	FRF_AB_GMF_STFENRPLY_WIDTH 1
#define	FRF_AB_GMF_FRFENRPLY_LBN 18
#define	FRF_AB_GMF_FRFENRPLY_WIDTH 1
#define	FRF_AB_GMF_SRFENRPLY_LBN 17
#define	FRF_AB_GMF_SRFENRPLY_WIDTH 1
#define	FRF_AB_GMF_WTMENRPLY_LBN 16
#define	FRF_AB_GMF_WTMENRPLY_WIDTH 1
#define	FRF_AB_GMF_FTFENREQ_LBN 12
#define	FRF_AB_GMF_FTFENREQ_WIDTH 1
#define	FRF_AB_GMF_STFENREQ_LBN 11
#define	FRF_AB_GMF_STFENREQ_WIDTH 1
#define	FRF_AB_GMF_FRFENREQ_LBN 10
#define	FRF_AB_GMF_FRFENREQ_WIDTH 1
#define	FRF_AB_GMF_SRFENREQ_LBN 9
#define	FRF_AB_GMF_SRFENREQ_WIDTH 1
#define	FRF_AB_GMF_WTMENREQ_LBN 8
#define	FRF_AB_GMF_WTMENREQ_WIDTH 1
#define	FRF_AB_GMF_HSTRSTFT_LBN 4
#define	FRF_AB_GMF_HSTRSTFT_WIDTH 1
#define	FRF_AB_GMF_HSTRSTST_LBN 3
#define	FRF_AB_GMF_HSTRSTST_WIDTH 1
#define	FRF_AB_GMF_HSTRSTFR_LBN 2
#define	FRF_AB_GMF_HSTRSTFR_WIDTH 1
#define	FRF_AB_GMF_HSTRSTSR_LBN 1
#define	FRF_AB_GMF_HSTRSTSR_WIDTH 1
#define	FRF_AB_GMF_HSTRSTWT_LBN 0
#define	FRF_AB_GMF_HSTRSTWT_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_GMF_CFG1_REG(32bit):
 * GMAC FIFO configuration register 1
 */
#define	FR_AB_GMF_CFG1_REG_OFST 0x00000f30
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GMF_CFGFRTH_LBN 16
#define	FRF_AB_GMF_CFGFRTH_WIDTH 5
#define	FRF_AB_GMF_CFGXOFFRTX_LBN 0
#define	FRF_AB_GMF_CFGXOFFRTX_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_GMF_CFG2_REG(32bit):
 * GMAC FIFO configuration register 2
 */
#define	FR_AB_GMF_CFG2_REG_OFST 0x00000f40
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GMF_CFGHWM_LBN 16
#define	FRF_AB_GMF_CFGHWM_WIDTH 6
#define	FRF_AB_GMF_CFGLWM_LBN 0
#define	FRF_AB_GMF_CFGLWM_WIDTH 6


/*------------------------------------------------------------*/
/*
 * FR_AB_GMF_CFG3_REG(32bit):
 * GMAC FIFO configuration register 3
 */
#define	FR_AB_GMF_CFG3_REG_OFST 0x00000f50
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GMF_CFGHWMFT_LBN 16
#define	FRF_AB_GMF_CFGHWMFT_WIDTH 6
#define	FRF_AB_GMF_CFGFTTH_LBN 0
#define	FRF_AB_GMF_CFGFTTH_WIDTH 6


/*------------------------------------------------------------*/
/*
 * FR_AB_GMF_CFG4_REG(32bit):
 * GMAC FIFO configuration register 4
 */
#define	FR_AB_GMF_CFG4_REG_OFST 0x00000f60
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GMF_HSTFLTRFRM_LBN 0
#define	FRF_AB_GMF_HSTFLTRFRM_WIDTH 18


/*------------------------------------------------------------*/
/*
 * FR_AB_GMF_CFG5_REG(32bit):
 * GMAC FIFO configuration register 5
 */
#define	FR_AB_GMF_CFG5_REG_OFST 0x00000f70
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_GMF_CFGHDPLX_LBN 22
#define	FRF_AB_GMF_CFGHDPLX_WIDTH 1
#define	FRF_AB_GMF_SRFULL_LBN 21
#define	FRF_AB_GMF_SRFULL_WIDTH 1
#define	FRF_AB_GMF_HSTSRFULLCLR_LBN 20
#define	FRF_AB_GMF_HSTSRFULLCLR_WIDTH 1
#define	FRF_AB_GMF_CFGBYTMODE_LBN 19
#define	FRF_AB_GMF_CFGBYTMODE_WIDTH 1
#define	FRF_AB_GMF_HSTDRPLT64_LBN 18
#define	FRF_AB_GMF_HSTDRPLT64_WIDTH 1
#define	FRF_AB_GMF_HSTFLTRFRMDC_LBN 0
#define	FRF_AB_GMF_HSTFLTRFRMDC_WIDTH 18


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_ADR_LO_REG(128bit):
 * XGMAC address register low
 */
#define	FR_AB_XM_ADR_LO_REG_OFST 0x00001200
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_ADR_LO_LBN 0
#define	FRF_AB_XM_ADR_LO_WIDTH 32


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_ADR_HI_REG(128bit):
 * XGMAC address register high
 */
#define	FR_AB_XM_ADR_HI_REG_OFST 0x00001210
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_ADR_HI_LBN 0
#define	FRF_AB_XM_ADR_HI_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_GLB_CFG_REG(128bit):
 * XGMAC global configuration
 */
#define	FR_AB_XM_GLB_CFG_REG_OFST 0x00001220
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_RMTFLT_GEN_LBN 17
#define	FRF_AB_XM_RMTFLT_GEN_WIDTH 1
#define	FRF_AB_XM_DEBUG_MODE_LBN 16
#define	FRF_AB_XM_DEBUG_MODE_WIDTH 1
#define	FRF_AB_XM_RX_STAT_EN_LBN 11
#define	FRF_AB_XM_RX_STAT_EN_WIDTH 1
#define	FRF_AB_XM_TX_STAT_EN_LBN 10
#define	FRF_AB_XM_TX_STAT_EN_WIDTH 1
#define	FRF_AB_XM_RX_JUMBO_MODE_LBN 6
#define	FRF_AB_XM_RX_JUMBO_MODE_WIDTH 1
#define	FRF_AB_XM_WAN_MODE_LBN 5
#define	FRF_AB_XM_WAN_MODE_WIDTH 1
#define	FRF_AB_XM_INTCLR_MODE_LBN 3
#define	FRF_AB_XM_INTCLR_MODE_WIDTH 1
#define	FRF_AB_XM_CORE_RST_LBN 0
#define	FRF_AB_XM_CORE_RST_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_TX_CFG_REG(128bit):
 * XGMAC transmit configuration
 */
#define	FR_AB_XM_TX_CFG_REG_OFST 0x00001230
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_TX_PROG_LBN 24
#define	FRF_AB_XM_TX_PROG_WIDTH 1
#define	FRF_AB_XM_IPG_LBN 16
#define	FRF_AB_XM_IPG_WIDTH 4
#define	FRF_AB_XM_FCNTL_LBN 10
#define	FRF_AB_XM_FCNTL_WIDTH 1
#define	FRF_AB_XM_TXCRC_LBN 8
#define	FRF_AB_XM_TXCRC_WIDTH 1
#define	FRF_AB_XM_EDRC_LBN 6
#define	FRF_AB_XM_EDRC_WIDTH 1
#define	FRF_AB_XM_AUTO_PAD_LBN 5
#define	FRF_AB_XM_AUTO_PAD_WIDTH 1
#define	FRF_AB_XM_TX_PRMBL_LBN 2
#define	FRF_AB_XM_TX_PRMBL_WIDTH 1
#define	FRF_AB_XM_TXEN_LBN 1
#define	FRF_AB_XM_TXEN_WIDTH 1
#define	FRF_AB_XM_TX_RST_LBN 0
#define	FRF_AB_XM_TX_RST_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_RX_CFG_REG(128bit):
 * XGMAC receive configuration
 */
#define	FR_AB_XM_RX_CFG_REG_OFST 0x00001240
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_PASS_LENERR_LBN 26
#define	FRF_AB_XM_PASS_LENERR_WIDTH 1
#define	FRF_AB_XM_PASS_CRC_ERR_LBN 25
#define	FRF_AB_XM_PASS_CRC_ERR_WIDTH 1
#define	FRF_AB_XM_PASS_PRMBLE_ERR_LBN 24
#define	FRF_AB_XM_PASS_PRMBLE_ERR_WIDTH 1
#define	FRF_AB_XM_REJ_BCAST_LBN 20
#define	FRF_AB_XM_REJ_BCAST_WIDTH 1
#define	FRF_AB_XM_ACPT_ALL_MCAST_LBN 11
#define	FRF_AB_XM_ACPT_ALL_MCAST_WIDTH 1
#define	FRF_AB_XM_ACPT_ALL_UCAST_LBN 9
#define	FRF_AB_XM_ACPT_ALL_UCAST_WIDTH 1
#define	FRF_AB_XM_AUTO_DEPAD_LBN 8
#define	FRF_AB_XM_AUTO_DEPAD_WIDTH 1
#define	FRF_AB_XM_RXCRC_LBN 3
#define	FRF_AB_XM_RXCRC_WIDTH 1
#define	FRF_AB_XM_RX_PRMBL_LBN 2
#define	FRF_AB_XM_RX_PRMBL_WIDTH 1
#define	FRF_AB_XM_RXEN_LBN 1
#define	FRF_AB_XM_RXEN_WIDTH 1
#define	FRF_AB_XM_RX_RST_LBN 0
#define	FRF_AB_XM_RX_RST_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_MGT_INT_MASK(128bit):
 * documentation to be written for sum_XM_MGT_INT_MASK
 */
#define	FR_AB_XM_MGT_INT_MASK_OFST 0x00001250
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_MSK_STA_INTR_LBN 16
#define	FRF_AB_XM_MSK_STA_INTR_WIDTH 1
#define	FRF_AB_XM_MSK_STAT_CNTR_HF_LBN 9
#define	FRF_AB_XM_MSK_STAT_CNTR_HF_WIDTH 1
#define	FRF_AB_XM_MSK_STAT_CNTR_OF_LBN 8
#define	FRF_AB_XM_MSK_STAT_CNTR_OF_WIDTH 1
#define	FRF_AB_XM_MSK_PRMBLE_ERR_LBN 2
#define	FRF_AB_XM_MSK_PRMBLE_ERR_WIDTH 1
#define	FRF_AB_XM_MSK_RMTFLT_LBN 1
#define	FRF_AB_XM_MSK_RMTFLT_WIDTH 1
#define	FRF_AB_XM_MSK_LCLFLT_LBN 0
#define	FRF_AB_XM_MSK_LCLFLT_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_FC_REG(128bit):
 * XGMAC flow control register
 */
#define	FR_AB_XM_FC_REG_OFST 0x00001270
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_PAUSE_TIME_LBN 16
#define	FRF_AB_XM_PAUSE_TIME_WIDTH 16
#define	FRF_AB_XM_RX_MAC_STAT_LBN 11
#define	FRF_AB_XM_RX_MAC_STAT_WIDTH 1
#define	FRF_AB_XM_TX_MAC_STAT_LBN 10
#define	FRF_AB_XM_TX_MAC_STAT_WIDTH 1
#define	FRF_AB_XM_MCNTL_PASS_LBN 8
#define	FRF_AB_XM_MCNTL_PASS_WIDTH 2
#define	FRF_AB_XM_REJ_CNTL_UCAST_LBN 6
#define	FRF_AB_XM_REJ_CNTL_UCAST_WIDTH 1
#define	FRF_AB_XM_REJ_CNTL_MCAST_LBN 5
#define	FRF_AB_XM_REJ_CNTL_MCAST_WIDTH 1
#define	FRF_AB_XM_ZPAUSE_LBN 2
#define	FRF_AB_XM_ZPAUSE_WIDTH 1
#define	FRF_AB_XM_XMIT_PAUSE_LBN 1
#define	FRF_AB_XM_XMIT_PAUSE_WIDTH 1
#define	FRF_AB_XM_DIS_FCNTL_LBN 0
#define	FRF_AB_XM_DIS_FCNTL_WIDTH 1


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_PAUSE_TIME_REG(128bit):
 * XGMAC pause time register
 */
#define	FR_AB_XM_PAUSE_TIME_REG_OFST 0x00001290
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_TX_PAUSE_CNT_LBN 16
#define	FRF_AB_XM_TX_PAUSE_CNT_WIDTH 16
#define	FRF_AB_XM_RX_PAUSE_CNT_LBN 0
#define	FRF_AB_XM_RX_PAUSE_CNT_WIDTH 16


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_TX_PARAM_REG(128bit):
 * XGMAC transmit parameter register
 */
#define	FR_AB_XM_TX_PARAM_REG_OFST 0x000012d0
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_TX_JUMBO_MODE_LBN 31
#define	FRF_AB_XM_TX_JUMBO_MODE_WIDTH 1
#define	FRF_AB_XM_MAX_TX_FRM_SIZE_HI_LBN 19
#define	FRF_AB_XM_MAX_TX_FRM_SIZE_HI_WIDTH 11
#define	FRF_AB_XM_MAX_TX_FRM_SIZE_LO_LBN 16
#define	FRF_AB_XM_MAX_TX_FRM_SIZE_LO_WIDTH 3
#define	FRF_AB_XM_PAD_CHAR_LBN 0
#define	FRF_AB_XM_PAD_CHAR_WIDTH 8


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_RX_PARAM_REG(128bit):
 * XGMAC receive parameter register
 */
#define	FR_AB_XM_RX_PARAM_REG_OFST 0x000012e0
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_MAX_RX_FRM_SIZE_HI_LBN 3
#define	FRF_AB_XM_MAX_RX_FRM_SIZE_HI_WIDTH 11
#define	FRF_AB_XM_MAX_RX_FRM_SIZE_LO_LBN 0
#define	FRF_AB_XM_MAX_RX_FRM_SIZE_LO_WIDTH 3


/*------------------------------------------------------------*/
/*
 * FR_AB_XM_MGT_INT_MSK_REG(128bit):
 * XGMAC management interrupt mask register
 */
#define	FR_AB_XM_MGT_INT_MSK_REG_OFST 0x000012f0
/* falcona0,falconb0=net_func_bar2,falcona0=char_func_bar0 */

#define	FRF_AB_XM_STAT_CNTR_OF_LBN 9
#define	FRF_AB_XM_STAT_CNTR_OF_WIDTH 1
#define	FRF_AB_XM_STAT_CNTR_HF_LBN 8
#define	FRF_AB_XM_STAT_CNTR_HF_WIDTH 1
#define	FRF_AB_XM_PRMBLE_ERR_LBN 2
#define	FRF_AB_XM_PRMBLE_ERR_WIDTH 1
#define	FRF_AB_XM_RMTFLT_LBN 1
#define	FRF_AB_XM_RMTFLT_WIDTH 1
#define	FRF_AB_XM_LCLFLT_LBN 0
#define	FRF_AB_XM_LCLFLT_WIDTH 1


#endif /* HOST_MAC_PROGMODEL_DEFS_H */
