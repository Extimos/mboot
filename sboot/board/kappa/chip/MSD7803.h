////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// ("MStar Confidential Information") by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

// This file is generated by script, please do not edit it directly 
#ifndef _MSD7803_H_
#define _MSD7803_H_

#define PAD_NC 9999
#define PAD_GND 0

#define PIN_1 PAD_SPDIF_OUT
#define PAD_SPDIF_OUT 55
#define GPIO_PAD_55 GPIO54
#ifndef PIN_1_IS_GPIO
#define PIN_1_IS_GPIO 0
#endif 
#ifndef PAD_SPDIF_OUT_IS_GPIO
#define PAD_SPDIF_OUT_IS_GPIO PIN_1_IS_GPIO
#endif 

#define PIN_2 PAD_FUART_RX
#define PAD_FUART_RX 45
#define GPIO_PAD_45 GPIO44
#ifndef PIN_2_IS_GPIO
#define PIN_2_IS_GPIO 0
#endif 
#ifndef PAD_FUART_RX_IS_GPIO
#define PAD_FUART_RX_IS_GPIO PIN_2_IS_GPIO
#endif 

#define PIN_3 PAD_FUART_TX
#define PAD_FUART_TX 44
#define GPIO_PAD_44 GPIO43
#ifndef PIN_3_IS_GPIO
#define PIN_3_IS_GPIO 0
#endif 
#ifndef PAD_FUART_TX_IS_GPIO
#define PAD_FUART_TX_IS_GPIO PIN_3_IS_GPIO
#endif 

#define PIN_4 PAD_FUART_RTS
#define PAD_FUART_RTS 43
#define GPIO_PAD_43 GPIO42
#ifndef PIN_4_IS_GPIO
#define PIN_4_IS_GPIO 0
#endif 
#ifndef PAD_FUART_RTS_IS_GPIO
#define PAD_FUART_RTS_IS_GPIO PIN_4_IS_GPIO
#endif 

#define PIN_5 PAD_FUART_CTS
#define PAD_FUART_CTS 42
#define GPIO_PAD_42 GPIO41
#ifndef PIN_5_IS_GPIO
#define PIN_5_IS_GPIO 0
#endif 
#ifndef PAD_FUART_CTS_IS_GPIO
#define PAD_FUART_CTS_IS_GPIO PIN_5_IS_GPIO
#endif 

#define PIN_6 PAD_I2S_OUT_MUTE
#define PAD_I2S_OUT_MUTE 48
#define GPIO_PAD_48 GPIO47
#ifndef PIN_6_IS_GPIO
#define PIN_6_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_MUTE_IS_GPIO
#define PAD_I2S_OUT_MUTE_IS_GPIO PIN_6_IS_GPIO
#endif 

#define PIN_7 PAD_I2S_OUT_MCK
#define PAD_I2S_OUT_MCK 47
#define GPIO_PAD_47 GPIO46
#ifndef PIN_7_IS_GPIO
#define PIN_7_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_MCK_IS_GPIO
#define PAD_I2S_OUT_MCK_IS_GPIO PIN_7_IS_GPIO
#endif 

#define PIN_8 PAD_I2S_OUT_BCK
#define PAD_I2S_OUT_BCK 49
#define GPIO_PAD_49 GPIO48
#ifndef PIN_8_IS_GPIO
#define PIN_8_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_BCK_IS_GPIO
#define PAD_I2S_OUT_BCK_IS_GPIO PIN_8_IS_GPIO
#endif 

#define PIN_9 PAD_I2S_OUT_WS
#define PAD_I2S_OUT_WS 51
#define GPIO_PAD_51 GPIO50
#ifndef PIN_9_IS_GPIO
#define PIN_9_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_WS_IS_GPIO
#define PAD_I2S_OUT_WS_IS_GPIO PIN_9_IS_GPIO
#endif 

#define PIN_10 PAD_I2S_OUT_SD0
#define PAD_I2S_OUT_SD0 50
#define GPIO_PAD_50 GPIO49
#ifndef PIN_10_IS_GPIO
#define PIN_10_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_SD0_IS_GPIO
#define PAD_I2S_OUT_SD0_IS_GPIO PIN_10_IS_GPIO
#endif 

#define PAD_SPDIF_IN 9999
#ifndef PAD_SPDIF_IN_IS_GPIO
#define PAD_SPDIF_IN_IS_GPIO 0
#endif 

#define PAD_S_GPIO4 9999
#ifndef PAD_S_GPIO4_IS_GPIO
#define PAD_S_GPIO4_IS_GPIO 0
#endif 

#define PAD_S_GPIO5 9999
#ifndef PAD_S_GPIO5_IS_GPIO
#define PAD_S_GPIO5_IS_GPIO 0
#endif 

#define PIN_74 PAD_UART_RX
#define PAD_UART_RX 8
#define GPIO_PAD_8 GPIO7
#ifndef PIN_74_IS_GPIO
#define PIN_74_IS_GPIO 0
#endif 
#ifndef PAD_UART_RX_IS_GPIO
#define PAD_UART_RX_IS_GPIO PIN_74_IS_GPIO
#endif 

#define PIN_75 PAD_UART_TX
#define PAD_UART_TX 9
#define GPIO_PAD_9 GPIO8
#ifndef PIN_75_IS_GPIO
#define PIN_75_IS_GPIO 0
#endif 
#ifndef PAD_UART_TX_IS_GPIO
#define PAD_UART_TX_IS_GPIO PIN_75_IS_GPIO
#endif 

#define PIN_76 PAD_IRIN
#define PAD_IRIN 5
#define GPIO_PAD_5 GPIO4
#ifndef PIN_76_IS_GPIO
#define PIN_76_IS_GPIO 0
#endif 
#ifndef PAD_IRIN_IS_GPIO
#define PAD_IRIN_IS_GPIO PIN_76_IS_GPIO
#endif 

#define PIN_77 PAD_PWM0
#define PAD_PWM0 10
#define GPIO_PAD_10 GPIO9
#ifndef PIN_77_IS_GPIO
#define PIN_77_IS_GPIO 0
#endif 
#ifndef PAD_PWM0_IS_GPIO
#define PAD_PWM0_IS_GPIO PIN_77_IS_GPIO
#endif 

#define PIN_78 PAD_PWM1
#define PAD_PWM1 11
#define GPIO_PAD_11 GPIO10
#ifndef PIN_78_IS_GPIO
#define PIN_78_IS_GPIO 0
#endif 
#ifndef PAD_PWM1_IS_GPIO
#define PAD_PWM1_IS_GPIO PIN_78_IS_GPIO
#endif 

#define PIN_79 PAD_PWM2
#define PAD_PWM2 12
#define GPIO_PAD_12 GPIO11
#ifndef PIN_79_IS_GPIO
#define PIN_79_IS_GPIO 0
#endif 
#ifndef PAD_PWM2_IS_GPIO
#define PAD_PWM2_IS_GPIO PIN_79_IS_GPIO
#endif 

#define PIN_80 PAD_SM0_SWITCH
#define PAD_SM0_SWITCH 24
#define GPIO_PAD_24 GPIO23
#ifndef PIN_80_IS_GPIO
#define PIN_80_IS_GPIO 0
#endif 
#ifndef PAD_SM0_SWITCH_IS_GPIO
#define PAD_SM0_SWITCH_IS_GPIO PIN_80_IS_GPIO
#endif 

#define PIN_81 PAD_SM0_IO
#define PAD_SM0_IO 17
#define GPIO_PAD_17 GPIO16
#ifndef PIN_81_IS_GPIO
#define PIN_81_IS_GPIO 0
#endif 
#ifndef PAD_SM0_IO_IS_GPIO
#define PAD_SM0_IO_IS_GPIO PIN_81_IS_GPIO
#endif 

#define PIN_82 PAD_SM0_CLK
#define PAD_SM0_CLK 18
#define GPIO_PAD_18 GPIO17
#ifndef PIN_82_IS_GPIO
#define PIN_82_IS_GPIO 0
#endif 
#ifndef PAD_SM0_CLK_IS_GPIO
#define PAD_SM0_CLK_IS_GPIO PIN_82_IS_GPIO
#endif 

#define PIN_83 PAD_SM0_CD
#define PAD_SM0_CD 20
#define GPIO_PAD_20 GPIO19
#ifndef PIN_83_IS_GPIO
#define PIN_83_IS_GPIO 0
#endif 
#ifndef PAD_SM0_CD_IS_GPIO
#define PAD_SM0_CD_IS_GPIO PIN_83_IS_GPIO
#endif 

#define PIN_84 PAD_SM0_RST
#define PAD_SM0_RST 19
#define GPIO_PAD_19 GPIO18
#ifndef PIN_84_IS_GPIO
#define PIN_84_IS_GPIO 0
#endif 
#ifndef PAD_SM0_RST_IS_GPIO
#define PAD_SM0_RST_IS_GPIO PIN_84_IS_GPIO
#endif 

#define PIN_85 PAD_SM0_VCC
#define PAD_SM0_VCC 21
#define GPIO_PAD_21 GPIO20
#ifndef PIN_85_IS_GPIO
#define PIN_85_IS_GPIO 0
#endif 
#ifndef PAD_SM0_VCC_IS_GPIO
#define PAD_SM0_VCC_IS_GPIO PIN_85_IS_GPIO
#endif 

#define PIN_87 PAD_SM0_C4
#define PAD_SM0_C4 22
#define GPIO_PAD_22 GPIO21
#ifndef PIN_87_IS_GPIO
#define PIN_87_IS_GPIO 0
#endif 
#ifndef PAD_SM0_C4_IS_GPIO
#define PAD_SM0_C4_IS_GPIO PIN_87_IS_GPIO
#endif 

#define PIN_88 PAD_SM0_C8
#define PAD_SM0_C8 23
#define GPIO_PAD_23 GPIO22
#ifndef PIN_88_IS_GPIO
#define PIN_88_IS_GPIO 0
#endif 
#ifndef PAD_SM0_C8_IS_GPIO
#define PAD_SM0_C8_IS_GPIO PIN_88_IS_GPIO
#endif 

#define PAD_S_GPIO3 9999
#ifndef PAD_S_GPIO3_IS_GPIO
#define PAD_S_GPIO3_IS_GPIO 0
#endif 

#define PIN_89 PAD_GPIO_MCK
#define PAD_GPIO_MCK 54
#define GPIO_PAD_54 GPIO53
#ifndef PIN_89_IS_GPIO
#define PIN_89_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_MCK_IS_GPIO
#define PAD_GPIO_MCK_IS_GPIO PIN_89_IS_GPIO
#endif 

#define PIN_90 PAD_SPI_WP
#define PAD_SPI_WP 53
#define GPIO_PAD_53 GPIO52
#ifndef PIN_90_IS_GPIO
#define PIN_90_IS_GPIO 0
#endif 
#ifndef PAD_SPI_WP_IS_GPIO
#define PAD_SPI_WP_IS_GPIO PIN_90_IS_GPIO
#endif 

#define PIN_95 PAD_I2CM0_SCL
#define PAD_I2CM0_SCL 30
#define GPIO_PAD_30 GPIO29
#ifndef PIN_95_IS_GPIO
#define PIN_95_IS_GPIO 0
#endif 
#ifndef PAD_I2CM0_SCL_IS_GPIO
#define PAD_I2CM0_SCL_IS_GPIO PIN_95_IS_GPIO
#endif 

#define PIN_96 PAD_I2CM0_SDA
#define PAD_I2CM0_SDA 29
#define GPIO_PAD_29 GPIO28
#ifndef PIN_96_IS_GPIO
#define PIN_96_IS_GPIO 0
#endif 
#ifndef PAD_I2CM0_SDA_IS_GPIO
#define PAD_I2CM0_SDA_IS_GPIO PIN_96_IS_GPIO
#endif 

#define PIN_97 PAD_TS0_SYNC
#define PAD_TS0_SYNC 33
#define GPIO_PAD_33 GPIO32
#ifndef PIN_97_IS_GPIO
#define PIN_97_IS_GPIO 0
#endif 
#ifndef PAD_TS0_SYNC_IS_GPIO
#define PAD_TS0_SYNC_IS_GPIO PIN_97_IS_GPIO
#endif 

#define PIN_98 PAD_TS0_VLD
#define PAD_TS0_VLD 32
#define GPIO_PAD_32 GPIO31
#ifndef PIN_98_IS_GPIO
#define PIN_98_IS_GPIO 0
#endif 
#ifndef PAD_TS0_VLD_IS_GPIO
#define PAD_TS0_VLD_IS_GPIO PIN_98_IS_GPIO
#endif 

#define PIN_99 PAD_TS0_D0
#define PAD_TS0_D0 41
#define GPIO_PAD_41 GPIO40
#ifndef PIN_99_IS_GPIO
#define PIN_99_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D0_IS_GPIO
#define PAD_TS0_D0_IS_GPIO PIN_99_IS_GPIO
#endif 

#define PIN_100 PAD_TS0_D1
#define PAD_TS0_D1 40
#define GPIO_PAD_40 GPIO39
#ifndef PIN_100_IS_GPIO
#define PIN_100_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D1_IS_GPIO
#define PAD_TS0_D1_IS_GPIO PIN_100_IS_GPIO
#endif 

#define PIN_101 PAD_TS0_D2
#define PAD_TS0_D2 39
#define GPIO_PAD_39 GPIO38
#ifndef PIN_101_IS_GPIO
#define PIN_101_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D2_IS_GPIO
#define PAD_TS0_D2_IS_GPIO PIN_101_IS_GPIO
#endif 

#define PIN_102 PAD_TS0_D3
#define PAD_TS0_D3 38
#define GPIO_PAD_38 GPIO37
#ifndef PIN_102_IS_GPIO
#define PIN_102_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D3_IS_GPIO
#define PAD_TS0_D3_IS_GPIO PIN_102_IS_GPIO
#endif 

#define PIN_103 PAD_TS0_D4
#define PAD_TS0_D4 37
#define GPIO_PAD_37 GPIO36
#ifndef PIN_103_IS_GPIO
#define PIN_103_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D4_IS_GPIO
#define PAD_TS0_D4_IS_GPIO PIN_103_IS_GPIO
#endif 

#define PIN_106 PAD_TS0_D5
#define PAD_TS0_D5 36
#define GPIO_PAD_36 GPIO35
#ifndef PIN_106_IS_GPIO
#define PIN_106_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D5_IS_GPIO
#define PAD_TS0_D5_IS_GPIO PIN_106_IS_GPIO
#endif 

#define PIN_107 PAD_TS0_D6
#define PAD_TS0_D6 35
#define GPIO_PAD_35 GPIO34
#ifndef PIN_107_IS_GPIO
#define PIN_107_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D6_IS_GPIO
#define PAD_TS0_D6_IS_GPIO PIN_107_IS_GPIO
#endif 

#define PIN_108 PAD_TS0_D7
#define PAD_TS0_D7 34
#define GPIO_PAD_34 GPIO33
#ifndef PIN_108_IS_GPIO
#define PIN_108_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D7_IS_GPIO
#define PAD_TS0_D7_IS_GPIO PIN_108_IS_GPIO
#endif 

#define PIN_109 PAD_TS0_CLK
#define PAD_TS0_CLK 31
#define GPIO_PAD_31 GPIO30
#ifndef PIN_109_IS_GPIO
#define PIN_109_IS_GPIO 0
#endif 
#ifndef PAD_TS0_CLK_IS_GPIO
#define PAD_TS0_CLK_IS_GPIO PIN_109_IS_GPIO
#endif 

#define PIN_117 PAD_SAR3
#define PAD_SAR3 16
#define GPIO_PAD_16 GPIO15
#ifndef PIN_117_IS_GPIO
#define PIN_117_IS_GPIO 0
#endif 
#ifndef PAD_SAR3_IS_GPIO
#define PAD_SAR3_IS_GPIO PIN_117_IS_GPIO
#endif 

#define PIN_118 PAD_SAR2
#define PAD_SAR2 15
#define GPIO_PAD_15 GPIO14
#ifndef PIN_118_IS_GPIO
#define PIN_118_IS_GPIO 0
#endif 
#ifndef PAD_SAR2_IS_GPIO
#define PAD_SAR2_IS_GPIO PIN_118_IS_GPIO
#endif 

#define PIN_119 PAD_SAR1
#define PAD_SAR1 14
#define GPIO_PAD_14 GPIO13
#ifndef PIN_119_IS_GPIO
#define PIN_119_IS_GPIO 0
#endif 
#ifndef PAD_SAR1_IS_GPIO
#define PAD_SAR1_IS_GPIO PIN_119_IS_GPIO
#endif 

#define PIN_120 PAD_SAR0
#define PAD_SAR0 13
#define GPIO_PAD_13 GPIO12
#ifndef PIN_120_IS_GPIO
#define PIN_120_IS_GPIO 0
#endif 
#ifndef PAD_SAR0_IS_GPIO
#define PAD_SAR0_IS_GPIO PIN_120_IS_GPIO
#endif 

#define PIN_124 PAD_HDMI_CEC
#define PAD_HDMI_CEC 6
#define GPIO_PAD_6 GPIO5
#ifndef PIN_124_IS_GPIO
#define PIN_124_IS_GPIO 0
#endif 
#ifndef PAD_HDMI_CEC_IS_GPIO
#define PAD_HDMI_CEC_IS_GPIO PIN_124_IS_GPIO
#endif 

#define PIN_125 PAD_HDMI_HPD
#define PAD_HDMI_HPD 7
#define GPIO_PAD_7 GPIO6
#ifndef PIN_125_IS_GPIO
#define PIN_125_IS_GPIO 0
#endif 
#ifndef PAD_HDMI_HPD_IS_GPIO
#define PAD_HDMI_HPD_IS_GPIO PIN_125_IS_GPIO
#endif 

#define PAD_S_GPIO0 9999
#ifndef PAD_S_GPIO0_IS_GPIO
#define PAD_S_GPIO0_IS_GPIO 0
#endif 

#define PAD_S_GPIO1 9999
#ifndef PAD_S_GPIO1_IS_GPIO
#define PAD_S_GPIO1_IS_GPIO 0
#endif 

#define PAD_S_GPIO2 9999
#ifndef PAD_S_GPIO2_IS_GPIO
#define PAD_S_GPIO2_IS_GPIO 0
#endif 

#define PIN_153 PAD_PWR_CTRL
#define PAD_PWR_CTRL 46
#define GPIO_PAD_46 GPIO45
#ifndef PIN_153_IS_GPIO
#define PIN_153_IS_GPIO 0
#endif 
#ifndef PAD_PWR_CTRL_IS_GPIO
#define PAD_PWR_CTRL_IS_GPIO PIN_153_IS_GPIO
#endif 

#define PIN_154 PAD_HSYNC_OUT
#define PAD_HSYNC_OUT 56
#define GPIO_PAD_56 GPIO55
#ifndef PIN_154_IS_GPIO
#define PIN_154_IS_GPIO 0
#endif 
#ifndef PAD_HSYNC_OUT_IS_GPIO
#define PAD_HSYNC_OUT_IS_GPIO PIN_154_IS_GPIO
#endif 

#define PIN_156 PAD_VSYNC_OUT
#define PAD_VSYNC_OUT 57
#define GPIO_PAD_57 GPIO56
#ifndef PIN_156_IS_GPIO
#define PIN_156_IS_GPIO 0
#endif 
#ifndef PAD_VSYNC_OUT_IS_GPIO
#define PAD_VSYNC_OUT_IS_GPIO PIN_156_IS_GPIO
#endif 


// PADS group name to index
#define PADS_DDCR           1223
#define PADS_DDCR2          1224
#define PADS_TS0            1225
#define PADS_TS1            1226
#define PADS_GPIO1_GPIO2    1227
#define PADS_LHSYNC2_LVSYNC2 1228
#define PADS_PCI_AD20_AD21  1229
#define PADS_PCI            1230
#define PADS_PCM            1231
#define PADS_SAR            1232
#define PADS_DOUT           1233
#define PADS_DIN            1234
#define PADS_I2S            1235
#define PADS_PF             1236
#define PADS_EMAC           1237
#define PADS_TCON           1238
#define PADS_UART1_MODE1    1239
#define PADS_UART1_MODE2    1240
#define PADS_UART1_MODE3    1241
#define PADS_UART2_MODE1    1242
#define PADS_UART2_MODE2    1243
#define PADS_UART2_MODE3    1244
#define PADS_ET_MODE0       1245
#define PADS_ET_MODE1       1246
#define PADS_ET_MODE2       1247
#define PADS_ET_MODE3       1248
#define PADS_MIIC           1249
#define PADS_PF_MODE1       1250
#define PADS_PF_MODE2       1251
#define PADS_PF_MODE3       1252
#define PADS_SPI_CZ1        1253
#define PADS_SPI_CZ2        1254
#define PADS_SPI_CZ3        1255
#define PADS_DDCR3          1256

// chip capbilities
#define CHIP_HAS_BT656_IN          0
#define CHIP_HAS_TS0               1
#define CHIP_HAS_TS1               0
#define CHIP_HAS_LVDS_10BIT_X2     1
#define CHIP_HAS_LVDS_8BIT_X2      1
#define CHIP_HAS_LVDS_8BIT_X1      1
#define CHIP_HAS_CIMAX             0
#define CHIP_HAS_USB_P0            1
#define CHIP_HAS_USB_P1            1
#define CHIP_HAS_USBVBUS0          0
#define CHIP_HAS_USBVBUS1          0
#define CHIP_HAS_UART1_MODE1       1
#define CHIP_HAS_UART1_MODE2       1
#define CHIP_HAS_UART1_MODE3       1
#define CHIP_HAS_PCMCIA1           0
#define CHIP_HAS_PCMCIA2           0
#define CHIP_HAS_PCMCIA            0
#define CHIP_HAS_UART2_MODE1       1
#define CHIP_HAS_UART2_MODE2       1
#define CHIP_HAS_UART2_MODE3       1
#define CHIP_HAS_RGB_A             1
#define CHIP_HAS_RGB_B             1
#define CHIP_HAS_RGB_C             1
#define CHIP_HAS_HDMI_A            1
#define CHIP_HAS_HDMI_B            1
#define CHIP_HAS_HDMI_C            1
#define CHIP_HAS_SPI_CZ1           1
#define CHIP_HAS_SPI_CZ2           0
#define CHIP_HAS_SPI_CZ3           0
#define CHIP_HAS_DDCR              1
#define CHIP_HAS_DDCR2             1
#define CHIP_HAS_TCON              1
#define CHIP_HAS_ET_MODE0_MII      1
#define CHIP_HAS_ET_MODE0_RMII     1
#define CHIP_HAS_ET_MODE1_MII      1
#define CHIP_HAS_ET_MODE1_RMII     1
#define CHIP_HAS_ET_MODE2_MII      1
#define CHIP_HAS_ET_MODE2_RMII     1
#define CHIP_HAS_I2S_IN            1
#define CHIP_HAS_I2S_OUT           1
#define CHIP_HAS_SPDIF_IN          0
#define CHIP_HAS_SPDIF_OUT         1
#define CHIP_HAS_DDR_A_CMD         1
#define CHIP_HAS_DDR_A_DATA        1
#define CHIP_HAS_DDR_B_CMD         1
#define CHIP_HAS_DDR_B_DATA        1
#define CHIP_USE_PCM_CDN_IN_PCM2   0
#define CHIP_USE_I2S_IN_IN_PCM     0
#define CHIP_USE_I2S_OUT_IN_PCM    0
#define CHIP_USE_SPDIF_IN_IN_PCM   0
#define CHIP_USE_SPDIF_OUT_IN_PCM  0
#define CHIP_USE_IIC_IN_DDCR2      0
#define CHIP_USE_PWM2_IN_GPIO14    0
#define CHIP_USE_PWM3_IN_GPIO15    0

// chip additional information
#define CHIP_FAMILY_TYPE           CHIP_FAMILY_KAPPA

#endif /* _MSD7803_H_*/