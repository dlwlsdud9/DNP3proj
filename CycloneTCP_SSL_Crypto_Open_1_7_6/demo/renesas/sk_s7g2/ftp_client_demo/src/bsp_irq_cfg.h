#ifndef BSP_IRQ_CFG_H_
#define BSP_IRQ_CFG_H_

#define BSP_IRQ_DISABLED 0
#define BSP_IRQ_ENABLED  1

//List of events
#define BSP_IRQ_CFG_PORT_IRQ0           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ1           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ2           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ3           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ4           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ5           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ6           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ7           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ8           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ9           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ10          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ11          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ12          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ13          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PORT_IRQ14          BSP_IRQ_ENABLED
#define BSP_IRQ_CFG_PORT_IRQ15          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC0_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC1_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC2_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC3_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC4_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC5_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC6_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DMAC7_INT           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DTC_COMPLETE        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ICU_SNZCANCEL       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_FCU_FIFERR          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_FCU_FRDYI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_LVD_LVD1            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_LVD_LVD2            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_MOSC_STOP           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SYSTEM_SNZREQ       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_AGT0_AGTI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_AGT0_AGTCMAI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_AGT0_AGTCMBI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_AGT1_AGTI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_AGT1_AGTCMAI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_AGT1_AGTCMBI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IWDT_NMIUNDF        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_WDT_NMIUNDF         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_RTC_ALM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_RTC_PRD             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_RTC_CUP             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC120_ADI          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC120_GBADI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC120_CMPAI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC120_CMPBI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC120_WCMPM        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC120_WCMPUM       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC121_ADI          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC121_GBADI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC121_CMPAI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC121_CMPBI        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC121_WCMPM        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ADC121_WCMPUM       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ACMP_HS0            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ACMP_HS1            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ACMP_HS2            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ACMP_HS3            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ACMP_HS4            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ACMP_HS5            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_USBFS_D0FIFO        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_USBFS_D1FIFO        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_USBFS_USBI          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_USBFS_USBR          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC0_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC0_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC0_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC0_EEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC0_WUI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC1_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC1_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC1_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC1_EEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC2_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC2_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC2_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IIC2_EEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SSI0_SSITXI         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SSI0_SSIRXI         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SSI0_SSIF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SSI1_SSIRT          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SSI1_SSIF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SRC_IDEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SRC_ODFI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SRC_OVFI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SRC_UDFI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SRC_CEFI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PDC_PCDFI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PDC_PCFEI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_PDC_PCERI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CTSU_CTSUWR         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CTSU_CTSURD         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CTSU_CTSUFN         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_KEY_INTKR           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DOC_DOPCI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAC_FERRI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAC_MENDI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAC_OVFI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN0_ERS            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN0_RXF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN0_TXF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN0_RXM            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN0_TXM            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN1_ERS            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN1_RXF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN1_TXF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN1_RXM            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_CAN1_TXM            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IOPORT_GROUP1       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IOPORT_GROUP2       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IOPORT_GROUP3       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_IOPORT_GROUP4       BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ELC_SWEVT0          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ELC_SWEVT1          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_POEG_GROUP0         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_POEG_GROUP1         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_POEG_GROUP2         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_POEG_GROUP3         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT0_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT1_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT2_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT3_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT4_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT5_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT6_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_ADTRGA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT7_ADTRGB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT8_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_CCMPA          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_CCMPB          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_CMPC           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_CMPD           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_CMPE           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_CMPF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_OVF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT9_UDF            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_CCMPA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_CCMPB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_CMPC          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_CMPD          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_CMPE          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_CMPF          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_OVF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT10_UDF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_CCMPA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_CCMPB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_CMPC          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_CMPD          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_CMPE          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_CMPF          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_OVF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT11_UDF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_CCMPA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_CCMPB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_CMPC          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_CMPD          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_CMPE          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_CMPF          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_OVF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT12_UDF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_CCMPA         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_CCMPB         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_CMPC          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_CMPD          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_CMPE          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_CMPF          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_OVF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT13_UDF           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GPT_UVWEDGE         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ETHER_IPLS          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ETHER_MINT          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ETHER_PINT          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ETHER_EINT0         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_ETHER_EINT1         BSP_IRQ_ENABLED
#define BSP_IRQ_CFG_USBHS_D0FIFO        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_USBHS_D1FIFO        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_USBHS_USBIR         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI0_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI0_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI0_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI0_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI0_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI0_RXI_OR_ERI     BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI1_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI1_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI1_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI1_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI1_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI2_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI2_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI2_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI2_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI2_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI3_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI3_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI3_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI3_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI3_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI4_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI4_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI4_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI4_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI4_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI5_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI5_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI5_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI5_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI5_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI6_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI6_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI6_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI6_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI6_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI7_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI7_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI7_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI7_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI7_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI8_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI8_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI8_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI8_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI8_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI9_RXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI9_TXI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI9_TEI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI9_ERI            BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SCI9_AM             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI0_SPRI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI0_SPTI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI0_SPII           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI0_SPEI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI0_SPTEND         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI1_SPRI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI1_SPTI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI1_SPII           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI1_SPEI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SPI1_SPTEND         BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_QSPI_INTR           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC0_ACCS      BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC0_SDIO      BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC0_CARD      BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC0_ODMSDBREQ BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC1_ACCS      BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC1_SDIO      BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC1_CARD      BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_SDHI_MMC1_ODMSDBREQ BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GLCDC_VPOS          BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GLCDC_L1UNDF        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_GLCDC_L2UNDF        BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_DRW_IRQ             BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_JPEG_JEDI           BSP_IRQ_DISABLED
#define BSP_IRQ_CFG_JPEG_JDTI           BSP_IRQ_DISABLED

#endif
