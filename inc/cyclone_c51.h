 
//build.h+cyclone_adc.h+cyclone_cim.h+cyclone_dec.h+cyclone_defines.h+cyclone_device.h tst4
 
//==========================================================================================
// build.h
// Build Information, automatically generated on 12/09/11 16:06:22. 
// DO NOT MODIFY BY HAND.
//==========================================================================================
//#define BUILD_NUMBER  129
//#define RELEASE_SUB   8
//###########################################################################
//
// FILE:  cyclone_adc.h
//
// TITLE: Cyclone 12-bit Analog-to-Digital Converter Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with cyclone_adc.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2008. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_ADC_H
//#define CYCLONE_ADC_H


//#endif
//*******//
 //===============================================================================
 // 12-bit Analog-to-Digital Converter Individual Register Bit Definitions
 //===============================================================================

 //-----------------------------------------------------------------------------
 // ADC Control Register 1 bit definitions
 //-----------------------------------------------------------------------------
 struct ADCCTRL_BITS {       // bits  description
  uint16 EXT_TRIG_DLY:8;     // 31:24 External ADC Trigger Delay
  uint16 EXT_TRIG_GPIO_VAL:1;   // 23   ADC External Trigger GPIO Value
  uint16 EXT_TRIG_GPIO_DIR:1;   // 22   ADC External Trigger GPIO Direction
  uint16 EXT_TRIG_GPIO_EN:1;   // 21   ADC External Trigger GPIO Enable
  uint16 EXT_TRIG_EN:1;      // 20   External ADC Trigger Enable
  uint16 EXT_TRIG_SEL:4;     // 19:16 External ADC Trigger Select
	
  uint16 SAMPLING_SEL:3;     // 15:13 Sampling Select 
  uint16 ADC_SEL_REF:1;      // 12   ADC Reference Select 
  uint16 ADC_ROUND:1;       // 11   ADC Rounding Enable
  uint16 BYPASS_EN:3;       // 10:8  Dual Sample and Hold Bypass
  uint16 MAX_CONV:4;       // 7:4  Maximum Number of Conversions
  uint16 SINGLE_SWEEP:1;     // 3   Single Loop Sweep Select
  uint16 SW_START:1;       // 2   Software start of conversion
  uint16 ADC_INT_EN:1;      // 1   ADC End of Conversion Interrupt
  uint16 ADC_EN:1;        // 0   ADC Enable
 }; 
 union ADCCTRL_REG {
  Uint32         all;
  struct ADCCTRL_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // ADC Status Register
 //-----------------------------------------------------------------------------
 struct ADCSTAT_BITS {      // bits  description
 uint16 rsvd:16; // 31:7 Reserved
 
 uint16 ADC_INT:1; // 0 Latched Interrupt
 uint16 ADC_INT_RAW:1; // 1 End of Conversion Status, Raw
 uint16 ADC_EXT_TRIG_VAL:1; // 2 ADC External Trigger Pin Value
 uint16 CURRENT_CH:4; // 6:3 Current Channel
 uint16 rsvd1:9; // 31:7 Reserved
 };
 union ADCSTAT_REG {
  Uint32         all;
  struct ADCSTAT_BITS   bits;
 };

 //-------------------------------------------------------------------------------
 // ADC Test Control Register bit definitions
 // (Reserved for TI use)
 //-------------------------------------------------------------------------------
 struct ADCTSTCTRL_BITS {     // bits  description
 uint16 rsvd1:16; // 31:10 reserved
 
 uint16 ADC_TEST_EN:1; // 0 ADC test
 uint16 rsvd0:5; // 5:1 Reserved
 uint16 TEST_CH_SEL:4; // 9:6 Test channel select
 uint16 rsvd2:6; // 31:10 reserved
 };
 union ADCTSTCTRL_REG {
  Uint32         all;
  struct ADCTSTCTRL_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // ADC Sequence Select 0 Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCSEQSEL0_BITS {     // bits  description
 uint16 SEQ2:4; // 19:16 Conversion #2 channel
 uint16 SEQ2_SH:1; // 20 Dual channel sequence select
 uint16 rsvd2:3; // 23:21 reserved
 uint16 SEQ3:4; // 27:24 Conversion #3 channel
 uint16 SEQ3_SH:1; // 28 Dual channel sequence select
 uint16 rsvd3:3; // 31:29 reserved
 
 uint16 SEQ0:4; // 3:0 Conversion #0
 uint16 SEQ0_SH:1; // 4 Dual channel sequence select
 uint16 rsvd0:3; // 7:5 reserved
 uint16 SEQ1:4; // 11:8 Conversion #1 channel
 uint16 SEQ1_SH:1; // 12 Dual channel sequence select
 uint16 rsvd1:3; // 15:13 reserved
 };
 union ADCSEQSEL0_REG {
  Uint32         all;
  struct ADCSEQSEL0_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // ADC Sequence Select 1 Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCSEQSEL1_BITS {     // bits  description
 uint16 SEQ6:4; // 19:16 Conversion #6 channel
 uint16 SEQ6_SH:1; // 20 Dual channel sequence select
 uint16 rsvd2:3; // 23:21 reserved
 uint16 SEQ7:4; // 27:24 Conversion #7 channel
 uint16 SEQ7_SH:1; // 28 Dual channel sequence select
 uint16 rsvd3:3; // 31:29 reserved

 uint16 SEQ4:4; // 3:0 Conversion #4
 uint16 SEQ4_SH:1; // 4 Dual channel sequence select
 uint16 rsvd0:3; // 7:5 reserved
 uint16 SEQ5:4; // 11:8 Conversion #5 channel
 uint16 SEQ5_SH:1; // 12 Dual channel sequence select
 uint16 rsvd1:3; // 15:13 reserved
 };
 union ADCSEQSEL1_REG {
  Uint32         all;
  struct ADCSEQSEL1_BITS   bits;
 }; 
 
 //-----------------------------------------------------------------------------
 // ADC Sequence Select 2 Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCSEQSEL2_BITS {     // bits  description
 uint16 SEQ10:4; // 19:16 Conversion #10 channel
 uint16 SEQ10_SH:1; // 20 Dual channel sequence select
 uint16 rsvd2:3; // 23:21 reserved
 uint16 SEQ11:4; // 27:24 Conversion #11 channel
 uint16 SEQ11_SH:1; // 28 Dual channel sequence select
 uint16 rsvd3:3; // 31:29 reserved

 uint16 SEQ8:4; // 3:0 Conversion #8
 uint16 SEQ8_SH:1; // 4 Dual channel sequence select
 uint16 rsvd0:3; // 7:5 reserved
 uint16 SEQ9:4; // 11:8 Conversion #9 channel
 uint16 SEQ9_SH:1; // 12 Dual channel sequence select
 uint16 rsvd1:3; // 15:13 reserved
 };
 union ADCSEQSEL2_REG {
  Uint32         all;
  struct ADCSEQSEL2_BITS   bits;
 };  
 
 //-----------------------------------------------------------------------------
 // ADC Sequence Select 3 Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCSEQSEL3_BITS {     // bits  description
 uint16 SEQ14:4; // 19:16 Conversion #14 channel
 uint16 SEQ14_SH:1; // 20 Dual channel sequence select
 uint16 rsvd2:3; // 23:21 reserved
 uint16 SEQ15:4; // 27:24 Conversion #15 channel
 uint16 SEQ15_SH:1; // 28 Dual channel sequence select
 uint16 rsvd3:3; // 31:29 reserved

   uint16 SEQ12:4; // 3:0 Conversion #12
 uint16 SEQ12_SH:1; // 4 Dual channel sequence select
 uint16 rsvd0:3; // 7:5 reserved
 uint16 SEQ13:4; // 11:8 Conversion #13 channel
 uint16 SEQ13_SH:1; // 12 Dual channel sequence select
 uint16 rsvd1:3; // 15:13 reserved
 };
 union ADCSEQSEL3_REG {
  Uint32         all;
  struct ADCSEQSEL3_BITS   bits;
 }; 

 //-----------------------------------------------------------------------------
 // ADC Result Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCRESULT_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:12 reserved
  
  uint16 RESULT:12;       // 11:0  Conversion result
  uint16 rsvd1:4;        // 31:12 reserved
 };
 union ADCRESULT_REG {
  Uint32         all;
  struct ADCRESULT_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // ADC Averaged Result Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCAVGRESULT_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:12 reserved
  
  uint16 RESULT:12;       // 11:0  Conversion result
  uint16 rsvd1:4;        // 31:12 reserved
 };
 union ADCAVGRESULT_REG {
  Uint32         all;
  struct ADCAVGRESULT_BITS  bits;
 }; 

 //-----------------------------------------------------------------------------
 // ADC Digital Compare Limits x Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCCOMPLIM_BITS {     // bits  description
 uint16 UPPER_LIMIT:12; // 27:16 Upper limit
 uint16 rsvd1:4; // 31:28 reserved

 uint16 LOWER_LIMIT:12; // 11:0 Lower
 uint16 rsvd0:4; // 15:12 reserved
 };
 union ADCCOMPLIM_REG {
  Uint32         all;
  struct ADCCOMPLIM_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // ADC Digital Comparator Enable Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCCOMPEN_BITS {     // bits  description
  uint16 rsvd2:4;        // 31:28 reserved
  uint16 COMP5_UP_INT_EN:1;   // 27   Comparator 5 Upper Interrupt Enable
  uint16 COMP5_LO_INT_EN:1;   // 26   Comparator 5 Lower Interrupt Enable
  uint16 COMP4_UP_INT_EN:1;   // 25   Comparator 4 Upper Interrupt Enable
  uint16 COMP4_LO_INT_EN:1;   // 24   Comparator 4 Lower Interrupt Enable
  uint16 COMP3_UP_INT_EN:1;   // 23   Comparator 3 Upper Interrupt Enable
  uint16 COMP3_LO_INT_EN:1;   // 22   Comparator 3 Lower Interrupt Enable
  uint16 COMP2_UP_INT_EN:1;   // 21   Comparator 2 Upper Interrupt Enable
  uint16 COMP2_LO_INT_EN:1;   // 20   Comparator 2 Lower Interrupt Enable
  uint16 COMP1_UP_INT_EN:1;   // 19   Comparator 1 Upper Interrupt Enable
  uint16 COMP1_LO_INT_EN:1;   // 18   Comparator 1 Lower Interrupt Enable
  uint16 COMP0_UP_INT_EN:1;   // 17   Comparator 0 Upper Interrupt Enable
  uint16 COMP0_LO_INT_EN:1;   // 16   Comparator 0 Lower Interrupt Enable

  uint16 COMP0_EN:1;       // 0   Digital comparator 0 enable
  uint16 COMP1_EN:1;       // 1   Digital comparator 1 enable
  uint16 COMP2_EN:1;       // 2   Digital comparator 2 enable
  uint16 COMP3_EN:1;       // 3   Digital comparator 3 enable
  uint16 COMP4_EN:1;       // 4   Digital comparator 4 enable
  uint16 COMP5_EN:1;       // 5   Digital comparator 5 enable
  uint16 rsvd0:2;        // 7:6  reserved
  uint16 COMP0_DATA_SEL:1;    // 8   Comparator 0 Data Select
  uint16 COMP1_DATA_SEL:1;    // 9   Comparator 1 Data Select
  uint16 COMP2_DATA_SEL:1;    // 10   Comparator 2 Data Select
  uint16 COMP3_DATA_SEL:1;    // 11   Comparator 3 Data Select
  uint16 COMP4_DATA_SEL:1;    // 12   Comparator 4 Data Select
  uint16 COMP5_DATA_SEL:1;    // 13   Comparator 5 Data Select
  uint16 rsvd1:2;        // 15:14 Reserved
 };
 union ADCCOMPEN_REG {
  Uint32          all;
  struct ADCCOMPEN_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // ADC Digital Comparator Results Register bit definitions
 //-----------------------------------------------------------------------------
 struct ADCCOMPRESULT_BITS {    // bits  description
	uint16 DCOMP0_LO_RAW:1;     // 16   Comparator 0 Lower Limit Raw Result
	uint16 DCOMP0_UP_RAW:1;     // 17   Comparator 0 Upper Limit Raw Result
	uint16 DCOMP1_LO_RAW:1;     // 18   Comparator 1 Lower Limit Raw Result
	uint16 DCOMP1_UP_RAW:1;     // 19   Comparator 1 Upper Limit Raw Result
	uint16 DCOMP2_LO_RAW:1;     // 20   Comparator 2 Lower Limit Raw Result
	uint16 DCOMP2_UP_RAW:1;     // 21   Comparator 2 Upper Limit Raw Result
	uint16 DCOMP3_LO_RAW:1;     // 22   Comparator 3 Lower Limit Raw Result
	uint16 DCOMP3_UP_RAW:1;     // 23   Comparator 3 Upper Limit Raw Result
	uint16 DCOMP4_LO_RAW:1;     // 24   Comparator 4 Lower Limit Raw Result
	uint16 DCOMP4_UP_RAW:1;     // 25   Comparator 4 Upper Limit Raw Result
	uint16 DCOMP5_LO_RAW:1;     // 26   Comparator 5 Lower Limit Raw Result
	uint16 DCOMP5_UP_RAW:1;     // 27   Comparator 5 Upper Limit Raw Result
    uint16 rsvd1:4;         // 31:28 Reserved
                      	
	uint16 DCOMP0_LO_INT:1;     // 0   Comparator 5 Lower Limit Latch Result
	uint16 DCOMP0_UP_INT:1;     // 1   Comparator 5 Upper Limit Latch Result
	uint16 DCOMP1_LO_INT:1;     // 2   Comparator 5 Lower Limit Latch Result
	uint16 DCOMP1_UP_INT:1;     // 3   Comparator 5 Upper Limit Latch Result
	uint16 DCOMP2_LO_INT:1;     // 4   Comparator 5 Lower Limit Latch Result
	uint16 DCOMP2_UP_INT:1;     // 5   Comparator 5 Upper Limit Latch Result
	uint16 DCOMP3_LO_INT:1;     // 6   Comparator 5 Lower Limit Latch Result
	uint16 DCOMP3_UP_INT:1;     // 7   Comparator 5 Upper Limit Latch Result
	uint16 DCOMP4_LO_INT:1;     // 8   Comparator 5 Lower Limit Latch Result
	uint16 DCOMP4_UP_INT:1;     // 9   Comparator 5 Upper Limit Latch Result
	uint16 DCOMP5_LO_INT:1;     // 10   Comparator 5 Lower Limit Latch Result
	uint16 DCOMP5_UP_INT:1;     // 11   Comparator 5 Upper Limit Latch Result
	uint16 rsvd0:4;         // 15:12 Reserved
 };
 union ADCCOMPRESULT_REG {
  Uint32         all;
  struct ADCCOMPRESULT_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // ADC Averaging Control Register Bit Definitions
 //-----------------------------------------------------------------------------
 struct ADCAVGCTRL_BITS {     // bits  description
	uint16 AVG4_EN:1;        // 16   Averaging Module 4 Enable
	uint16 AVG4_CONFIG:2;      // 18:17 Averaging Module 4 Configuration
	uint16 rsvd4:1;         // 19   Reserved
	uint16 AVG5_EN:1;        // 20   Averaging Module 5 Enable
	uint16 AVG5_CONFIG:2;      // 22:21 Averaging Module 5 Configuration
  uint16 rsvd5:9;         // 31:23 Reserved
          	
	uint16 AVG0_EN:1;        // 0   Averaging Module 0 Enable
	uint16 AVG0_CONFIG:2;      // 2:1  Averaging Module 0 Configuration
  uint16 rsvd0:1;         // 3   Reserved
  uint16 AVG1_EN:1;        // 4   Averaging Module 1 Enable
	uint16 AVG1_CONFIG:2;      // 6:5  Averaging Module 1 Configuration
	uint16 rsvd1:1;         // 7   Reserved
	uint16 AVG2_EN:1;        // 8   Averaging Module 2 Enable
	uint16 AVG2_CONFIG:2;      // 10:9  Averaging Module 2 Configuration
	uint16 rsvd2:1;         // 11   Reserved
	uint16 AVG3_EN:1;        // 12   Averaging Module 3 Enable
	uint16 AVG3_CONFIG:2;      // 14:13 Averaging Module 3 Configuration
	uint16 rsvd3:1;         // 15   Reserved
 };
 union ADCAVGCTRL_REG {
  Uint32         all;
  struct ADCAVGCTRL_BITS    bits;
 };


 //===========================================================================
 // ADC Module Register File
 //
 //struct ADC_REGS {
  extern union ADCCTRL_REG    ADCCTRL;     // ADC Control Register
  extern union ADCSTAT_REG    ADCSTAT;     // ADC Status Register
  extern union ADCTSTCTRL_REG   ADCTSTCTRL;   // ADC Test Control Register
  extern union ADCSEQSEL0_REG   ADCSEQSEL0;   // ADC Sequencer Select Register 0
  extern union ADCSEQSEL1_REG   ADCSEQSEL1;   // ADC Sequencer Select Register 1
  extern union ADCSEQSEL2_REG   ADCSEQSEL2;   // ADC Sequencer Select Register 2
  extern union ADCSEQSEL3_REG   ADCSEQSEL3;   // ADC Sequencer Select Register 3
  extern union ADCRESULT_REG   ADCRESULT[16];  // ADC Conversion Result 0:15
  extern union ADCAVGRESULT_REG  ADCAVGRESULT[6]; // ADC Averaged Conversion Result 0:5 
  extern union ADCCOMPLIM_REG   ADCCOMPLIM[6];  // ADC Digital Compare Limits Register 0:5
  extern union ADCCOMPEN_REG   ADCCOMPEN;    // ADC Digital Compare Enable Register
  extern union ADCCOMPRESULT_REG ADCCOMPRESULT;  // ADC Digital Compare Result Register
  extern union ADCAVGCTRL_REG   ADCAVGCTRL;   // ADC Averaging Control Register
// };
 
 //-----------------------------------------------------------------------------
 // ADC Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct ADC_REGS AdcRegs;
//*******//
 


//#endif // end of CYCLONE_ADC_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_cim.h
//
// TITLE: Cyclone Central Interrupt Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with Spartan_Cim.h.
//    |       |   | Updated for 1.0 Memory map document.
// 2.00 | 13 Jun 2011 | FW  | Updated for 2p0 Memory map document; 
//              | Added Interrupt names.
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2008. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_CIM_H
//#define CYCLONE_CIM_H


//#endif


//===========================================================================
// Central Interrupt Module Individual Register Bit Definitions
//

//-------------------------------------------------
// IRQ Index Offset Vector Register bit definitions
//
struct IRQIVEC_BITS {       // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
  
  uint16 IRQIVEC:8;       // 7:0  Index vector
  uint16 rsvd1:8;        // 31:8  reserved
};
union IRQIVEC_REG {
  Uint32         all;
  struct IRQIVEC_BITS  bits;
};

//-------------------------------------------------
// FIQ Index Offset Vector Register bit definitions
//
//struct FIQIVEC_BITS {       // bits  description
//  uint16 rsvd0:24;        // 31:8  reserved
//  uint16 FIQIVEC:8;       // 7:0  Index vector
//};
//union FIQIVEC_REG {
//  Uint32         all;
//  struct FIQIVEC_BITS  bits;
//};

//-------------------------------------------------
// FIQ/IRQ Program Control Register bit definitions
//
struct FIRQPR_BITS {          // bits  description
 uint16 FIRQ_PWM1_COMP:1; // 16 Interrupt 16, 16-bit Timer PWM1 counter overflow or Compare interrupt
 uint16 FIRQ_PWM0_COMP:1; // 17 Interrupt 17, 16-bit Timer PWM0 counter overflow or Compare interrupt
 uint16 FIRQ_TMR_OVFL:1; // 18 Interrupt 18, 24-bit Timer counter overflow interrupt
 uint16 FIRQ_TMR_CAPT1:1; // 19 Interrupt 19, 24-bit Timer Capture 1 interrupt
 uint16 FIRQ_TMR_COMP1:1; // 20 Interrupt 20, 24-bit Timer Compare 1 interrupt
 uint16 FIRQ_TMR_CAPT0:1; // 21 Interrupt 21, 24-bit Timer Capture 0 interrupt
 uint16 FIRQ_TMR_COMP0:1; // 22 Interrupt 22, 24-bit Timer Compare 0 interrupt
 uint16 FIRQ_CPCC:1; // 23 Interrupt 23, CPCC Interrupt, Mode switched in CPCC module Flag needs to be read for details
 uint16 FIRQ_ADC_CONV:1; // 24 Interrupt 24, ADC-12 End of Conversion Interrupt
 uint16 FIRQ_FAULT_MUX:1; // 25 Interrupt 25, Fault Mux Interrupt
 uint16 FIRQ_DPWM3:1; // 26 Interrupt 26, Every(1-16)DPWM3 switching cycles or CLF flag shutdown Interrupt
 uint16 FIRQ_DPWM2:1; // 27 Interrupt 27, Every(1-16)DPWM2 switching cycles or CLF flag shutdown Interrupt
 uint16 FIRQ_DPWM1:1; // 28 Interrupt 28, Every(1-16)DPWM1 switching cycles or CLF flag shutdown Interrupt
 uint16 FIRQ_DPWM0:1; // 29 Interrupt 29, Every(1-16)DPWM0 switching cycles or CLF flag shutdown Interrupt
 uint16 FIRQ_FAULT_PIN:1; // 30 Interrupt 30, Fault Pin Interrupt
 uint16 FIRQ_SYS_SOFT:1; // 31 Interrupt 31, System Software Interrupt

  uint16 FIRQ_BRWN_OUT:1; // 0 Interrupt 0, Brownout
 uint16 FIRQ_EXT_INT:1; // 1 Interrupt 1, Interrupt on one or all external input pins
 uint16 FIRQ_WTDG_RSET:1; // 2 Interrupt 2, Interrupt from watchdog exceeded (reset)
 uint16 FIRQ_WTDG_WAKE:1; // 3 Interrupt 3, Wakeup interrupt when watchdog equals half of set watch time
 uint16 FIRQ_UART_ERR:1; // 4 Interrupt 4, UART or SCI error Interrupt. Frame, parity or Overrun
 uint16 FIRQ_UART1_RX:1; // 5 Interrupt 5, UART1 RX buffer has a byte
 uint16 FIRQ_UART1_TX:1; // 6 Interrupt 6, UART1 TX buffer empty
 uint16 FIRQ_UART2_RX:1; // 7 Interrupt 7, UART2 RX buffer has a byte
 uint16 FIRQ_UART2_TX:1; // 8 Interrupt 8, UART2 TX buffer empty
 uint16 FIRQ_PMBUS:1; // 9 Interrupt 9, PMBus related interrupt
 uint16 FIRQ_DIGI_COMP:1; // 10 Interrupt 10, Digital comparator interrupt
 uint16 FIRQ_FRONT_END0:1; // 11 Interrupt 11, Front End 0 Interrupt
 uint16 FIRQ_FRONT_END1:1; // 12 Interrupt 12, Front End 1 Interrupt
 uint16 FIRQ_FRONT_END2:1; // 13 Interrupt 13, Front End 2 Interrupt
 uint16 FIRQ_PWM3_COMP:1; // 14 Interrupt 14, 16-bit Timer PWM3 counter overflow or Compare interrupt
 uint16 FIRQ_PWM2_COMP:1; // 15 Interrupt 15, 16-bit Timer PWM2 counter overflow or Compare interrupt
};
union FIRQPR_REG {
  Uint32         all;
  struct FIRQPR_BITS   bits;
};

//-------------------------------------------------
// Pending Interrupt Read Location Register bit definitions
//
struct INTREQ_BITS {           // bits  description
 uint16 INTREQ_PWM1_COMP:1; // 16 Interrupt 16, 16-bit Timer PWM1 counter overflow or Compare interrupt
 uint16 INTREQ_PWM0_COMP:1; // 17 Interrupt 17, 16-bit Timer PWM0 counter overflow or Compare interrupt
 uint16 INTREQ_TMR_OVFL:1; // 18 Interrupt 18, 24-bit Timer counter overflow interrupt
 uint16 INTREQ_TMR_CAPT1:1; // 19 Interrupt 19, 24-bit Timer Capture 1 interrupt
 uint16 INTREQ_TMR_COMP1:1; // 20 Interrupt 20, 24-bit Timer Compare 1 interrupt
 uint16 INTREQ_TMR_CAPT0:1; // 21 Interrupt 21, 24-bit Timer Capture 0 interrupt
 uint16 INTREQ_TMR_COMP0:1; // 22 Interrupt 22, 24-bit Timer Compare 0 interrupt
 uint16 INTREQ_CPCC:1; // 23 Interrupt 23, CPCC Interrupt, Mode switched in CPCC module Flag needs to be read for details
 uint16 INTREQ_ADC_CONV:1; // 24 Interrupt 24, ADC-12 End of Conversion Interrupt
 uint16 INTREQ_FAULT_MUX:1; // 25 Interrupt 25, Fault Mux Interrupt
 uint16 INTREQ_DPWM3:1; // 26 Interrupt 26, Every(1-16)DPWM3 switching cycles or CLF flag shutdown Interrupt
 uint16 INTREQ_DPWM2:1; // 27 Interrupt 27, Every(1-16)DPWM2 switching cycles or CLF flag shutdown Interrupt
 uint16 INTREQ_DPWM1:1; // 28 Interrupt 28, Every(1-16)DPWM1 switching cycles or CLF flag shutdown Interrupt
 uint16 INTREQ_DPWM0:1; // 29 Interrupt 29, Every(1-16)DPWM0 switching cycles or CLF flag shutdown Interrupt
 uint16 INTREQ_FAULT_PIN:1; // 30 Interrupt 30, Fault Pin Interrupt
 uint16 INTREQ_SYS_SOFT:1; // 31 Interrupt 31, System Software Interrupt

 uint16 INTREQ_BRWN_OUT:1; // 0 Interrupt 0, Brownout
 uint16 INTREQ_EXT_INT:1; // 1 Interrupt 1, Interrupt on one or all external input pins
 uint16 INTREQ_WTDG_RSET:1; // 2 Interrupt 2, Interrupt from watchdog exceeded (reset)
 uint16 INTREQ_WTDG_WAKE:1; // 3 Interrupt 3, Wakeup interrupt when watchdog equals half of set watch time
 uint16 INTREQ_UART_ERR:1; // 4 Interrupt 4, UART or SCI error Interrupt. Frame, parity or Overrun
 uint16 INTREQ_UART1_RX:1; // 5 Interrupt 5, UART1 RX buffer has a byte
 uint16 INTREQ_UART1_TX:1; // 6 Interrupt 6, UART1 TX buffer empty
 uint16 INTREQ_UART2_RX:1; // 7 Interrupt 7, UART2 RX buffer has a byte
 uint16 INTREQ_UART2_TX:1; // 8 Interrupt 8, UART2 TX buffer empty
 uint16 INTREQ_PMBUS:1; // 9 Interrupt 9, PMBus related interrupt
 uint16 INTREQ_DIGI_COMP:1; // 10 Interrupt 10, Digital comparator interrupt
 uint16 INTREQ_FRONT_END0:1; // 11 Interrupt 11, Front End 0 Interrupt
 uint16 INTREQ_FRONT_END1:1; // 12 Interrupt 12, Front End 1 Interrupt
 uint16 INTREQ_FRONT_END2:1; // 13 Interrupt 13, Front End 2 Interrupt
 uint16 INTREQ_PWM3_COMP:1; // 14 Interrupt 14, 16-bit Timer PWM3 counter overflow or Compare interrupt
 uint16 INTREQ_PWM2_COMP:1; // 15 Interrupt 15, 16-bit Timer PWM2 counter overflow or Compare interrupt
};
union INTREQ_REG {
  Uint32         all;
  struct INTREQ_BITS   bits;
};

//-------------------------------------------------
// Interrupt Request Mask Register bit definitions
//
struct REQMASK_BITS {       // bits  description
 uint16 REQMASK_PWM1_COMP:1; // 16 Interrupt 16, 16-bit Timer PWM1 counter overflow or Compare interrupt
 uint16 REQMASK_PWM0_COMP:1; // 17 Interrupt 17, 16-bit Timer PWM0 counter overflow or Compare interrupt
 uint16 REQMASK_TMR_OVFL:1; // 18 Interrupt 18, 24-bit Timer counter overflow interrupt
 uint16 REQMASK_TMR_CAPT1:1; // 19 Interrupt 19, 24-bit Timer Capture 1 interrupt
 uint16 REQMASK_TMR_COMP1:1; // 20 Interrupt 20, 24-bit Timer Compare 1 interrupt
 uint16 REQMASK_TMR_CAPT0:1; // 21 Interrupt 21, 24-bit Timer Capture 0 interrupt
 uint16 REQMASK_TMR_COMP0:1; // 22 Interrupt 22, 24-bit Timer Compare 0 interrupt
 uint16 REQMASK_CPCC:1; // 23 Interrupt 23, CPCC Interrupt, Mode switched in CPCC module Flag needs to be read for details
 uint16 REQMASK_ADC_CONV:1; // 24 Interrupt 24, ADC-12 End of Conversion Interrupt
 uint16 REQMASK_FAULT_MUX:1; // 25 Interrupt 25, Fault Mux Interrupt
 uint16 REQMASK_DPWM3:1; // 26 Interrupt 26, Every(1-16)DPWM3 switching cycles or CLF flag shutdown Interrupt
 uint16 REQMASK_DPWM2:1; // 27 Interrupt 27, Every(1-16)DPWM2 switching cycles or CLF flag shutdown Interrupt
 uint16 REQMASK_DPWM1:1; // 28 Interrupt 28, Every(1-16)DPWM1 switching cycles or CLF flag shutdown Interrupt
 uint16 REQMASK_DPWM0:1; // 29 Interrupt 29, Every(1-16)DPWM0 switching cycles or CLF flag shutdown Interrupt
 uint16 REQMASK_FAULT_PIN:1; // 30 Interrupt 30, Fault Pin Interrupt
 uint16 REQMASK_SYS_SOFT:1; // 31 Interrupt 31, System Software Interrupt

 uint16 REQMASK_BRWN_OUT:1; // 0 Interrupt 0, Brownout
 uint16 REQMASK_EXT_INT:1; // 1 Interrupt 1, Interrupt on one or all external input pins
 uint16 REQMASK_WTDG_RSET:1; // 2 Interrupt 2, Interrupt from watchdog exceeded (reset)
 uint16 REQMASK_WTDG_WAKE:1; // 3 Interrupt 3, Wakeup interrupt when watchdog equals half of set watch time
 uint16 REQMASK_UART_ERR:1; // 4 Interrupt 4, UART or SCI error Interrupt. Frame, parity or Overrun
 uint16 REQMASK_UART1_RX:1; // 5 Interrupt 5, UART1 RX buffer has a byte
 uint16 REQMASK_UART1_TX:1; // 6 Interrupt 6, UART1 TX buffer empty
 uint16 REQMASK_UART2_RX:1; // 7 Interrupt 7, UART2 RX buffer has a byte
 uint16 REQMASK_UART2_TX:1; // 8 Interrupt 8, UART2 TX buffer empty
 uint16 REQMASK_PMBUS:1; // 9 Interrupt 9, PMBus related interrupt
 uint16 REQMASK_DIGI_COMP:1; // 10 Interrupt 10, Digital comparator interrupt
 uint16 REQMASK_FRONT_END0:1; // 11 Interrupt 11, Front End 0 Interrupt
 uint16 REQMASK_FRONT_END1:1; // 12 Interrupt 12, Front End 1 Interrupt
 uint16 REQMASK_FRONT_END2:1; // 13 Interrupt 13, Front End 2 Interrupt
 uint16 REQMASK_PWM3_COMP:1; // 14 Interrupt 14, 16-bit Timer PWM3 counter overflow or Compare interrupt
 uint16 REQMASK_PWM2_COMP:1; // 15 Interrupt 15, 16-bit Timer PWM2 counter overflow or Compare interrupt
};
union REQMASK_REG {
  Uint32         all;
  struct REQMASK_BITS  bits;
};


//===========================================================================
// Central Interrupt Manager Module Register File
//
//struct CIM_REGS {
  extern union IRQIVEC_REG  IRQIVEC;   // IRQ Index Offset Vector Register
  //extern union FIQIVEC_REG  FIQIVEC;   // FIQ Index Offset Vector Register            
  //uint16        RSVD;    // Reserved (address spacer)
  extern union FIRQPR_REG   FIRQPR;   // FIQ/IRQ Program Control Register
  extern union INTREQ_REG   INTREQ;   // Pending Interrupt Read Location
  extern union REQMASK_REG  REQMASK;   // Interrupt Mask Register
//};

//---------------------------------------------------------------------------
// Central Interrupt Manager Module External References & Function Declarations:
//
//extern volatile struct CIM_REGS CimRegs;

//===========================================================================


//#endif // end of CYCLONE_CIM_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_dec.h
//
// TITLE: Cyclone Address Manager Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with Spartan_Dec.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2008. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_DEC_H
//#define CYCLONE_DEC_H


//#endif

//===========================================================================
// Address Manager Module Individual Register Bit Definitions
//

 //-----------------------------------------------------------------------------
 // Memory Fine Base Address High Register 0 bit definitions
 //-----------------------------------------------------------------------------
 struct MFBAHR0_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
  
  uint16 ADDRESS:16;       // 15:0  Address[31:16]
 };
 union MFBAHR0_REG {
  Uint32         all;
  struct MFBAHR0_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Memory Fine Base Address Low Register 0 bit definitions
 //-----------------------------------------------------------------------------
 struct MFBALR0_BITS {      // bits  description
 uint16 rsvd2:16; // 31:16 reserved
 
 uint16 PRIV:1; // 0 Privilege mode
 uint16 RONLY:1; // 1 Read-only protection
 uint16 rsvd0:2; // 3:2 reserved
 uint16 BLOCK_SIZE:4; // 7:4 Block size
 uint16 MS:1; // 8 Memory map select
 uint16 rsvd1:1; // 9 reserved
 uint16 ADDRESS:6; // 15:10 Address[15:10]
 };
 union MFBALR0_REG {
  Uint32         all;
  struct MFBALR0_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Memory Fine Base Address High Registers 1-17 bit definitions
 //-----------------------------------------------------------------------------
 struct MFBAHRX_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
  
  uint16 ADDRESS:16;       // 15:0  Address[31:16]
 };
 union MFBAHRX_REG {
  Uint32         all;
  struct MFBAHRX_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Memory Fine Base Address Low Registers 1-3 bit definitions
 //-----------------------------------------------------------------------------
 struct MFBALRX_BITS {      // bits  description
 uint16 rsvd2:16; // 31:16 reserved
 
 uint16 PRIV:1; // 0 Privilege mode
 uint16 RONLY:1; // 1 Read-only protection
 uint16 rsvd0:2; // 3:2 reserved
 uint16 BLOCK_SIZE:4; // 7:4 Block size
 uint16 rsvd1:1; // 8 reserved
 uint16 AW:1; // 9 Auto-wait-on-write
 uint16 ADDRESS:6; // 15:10 Address[15:10]
 };
 union MFBALRX_REG {
  Uint32         all;
  struct MFBALRX_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Memory Fine Base Address Low Registers 4-17 bit definitions
 //-----------------------------------------------------------------------------
 struct MFBALRY_BITS {      // bits  description
 uint16 rsvd1:16; // 31:16 reserved
 
 uint16 PRIV:1; // 0 Privilege mode
 uint16 RONLY:1; // 1 Read-only protection
 uint16 rsvd0:7; // 8:2 reserved
 uint16 AW:1; // 9 Auto-wait-on-write
 uint16 ADDRESS:6; // 15:10 Address[15:10]
 };
 union MFBALRY_REG {
  Uint32         all;
  struct MFBALRY_BITS  bits;
 }; 

 //-----------------------------------------------------------------------------
 // Program Flash Control Register bit definitions
 //-----------------------------------------------------------------------------
// struct PFLASHCTRL_BITS {     // bits  description
//  uint16 rsvd1:20;        // 31:12 reserved
//  uint16 BUSY:1;         // 11   Flash busy
//  uint16 INFO_BLOCK_ENA:1;    // 10   Info block enable
//  uint16 PAGE_ERASE:1;      // 9   Page erase enable
//  uint16 MASS_ERASE:1;      // 8   Mass erase enable
//  uint16 rsvd0:3;        // 7:5  reserved
//  uint16 PAGE_SEL:5;       // 4:0  Page selection
// };
// union PFLASHCTRL_REG {
//  Uint32         all;
//  struct PFLASHCTRL_BITS   bits;
// };
 
 //-----------------------------------------------------------------------------
 // Data Flash Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct DFLASHCTRL_BITS {     // bits  description
 uint16 rsvd1:16; // 31:12 reserved
 
 uint16 PAGE_SEL:6; // 5:0 Page
 uint16 rsvd0:2; // 7:6 reserved
 uint16 MASS_ERASE:1; // 8 Mass erase enable
 uint16 PAGE_ERASE:1; // 9 Page erase enable
 uint16 INFO_BLOCK_ENA:1; // 10 Info block enable
 uint16 BUSY:1; // 11 Flash busy
 uint16 rsvd2:4; // 31:12 reserved
 };
 union DFLASHCTRL_REG {
  Uint32         all;
  struct DFLASHCTRL_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Flash Interlock Register bit definitions
 //-----------------------------------------------------------------------------
 struct FLASHILOCK_BITS {    // bits  description
  uint16 INTERLOCK_KEY2:16;   // 31:0  Interlock Key
  uint16 INTERLOCK_KEY1:16;
 };
 union FLASHILOCK_REG {
  Uint32         all;
  struct FLASHILOCK_BITS   bits;
 };

 //=============================================================================
 // Address Manager Module Register File
 //=============================================================================
 //struct DEC_REGS {
  extern union MFBAHR0_REG    MFBAHR0;    // Memory Fine Base Address High Register 0
  extern union MFBALR0_REG    MFBALR0;    // Memory Fine Base Address Low Register 0
  extern union MFBAHRX_REG    MFBAHR1;    // Memory Fine Base Address High Register 1
  extern union MFBALRX_REG    MFBALR1;    // Memory Fine Base Address Low Register 1
  extern union MFBAHRX_REG    MFBAHR2;    // Memory Fine Base Address High Register 2
  extern union MFBALRX_REG    MFBALR2;    // Memory Fine Base Address Low Register 2
  extern union MFBAHRX_REG    MFBAHR3;    // Memory Fine Base Address High Register 3
  extern union MFBALRX_REG    MFBALR3;    // Memory Fine Base Address Low Register 3
  extern union MFBAHRX_REG    MFBAHR4;    // Memory Fine Base Address High Register 4
  extern union MFBALRY_REG    MFBALR4;    // Memory Fine Base Address Low Register 4
  extern union MFBAHRX_REG    MFBAHR5;    // Memory Fine Base Address High Register 5
  extern union MFBALRY_REG    MFBALR5;    // Memory Fine Base Address Low Register 5
  extern union MFBAHRX_REG    MFBAHR6;    // Memory Fine Base Address High Register 6
  extern union MFBALRY_REG    MFBALR6;    // Memory Fine Base Address Low Register 6
  extern union MFBAHRX_REG    MFBAHR7;    // Memory Fine Base Address High Register 7
  extern union MFBALRY_REG    MFBALR7;    // Memory Fine Base Address Low Register 7
  extern union MFBAHRX_REG    MFBAHR8;    // Memory Fine Base Address High Register 8
  extern union MFBALRY_REG    MFBALR8;    // Memory Fine Base Address Low Register 8
  extern union MFBAHRX_REG    MFBAHR9;    // Memory Fine Base Address High Register 9
  extern union MFBALRY_REG    MFBALR9;    // Memory Fine Base Address Low Register 9
  extern union MFBAHRX_REG    MFBAHR10;    // Memory Fine Base Address High Register 10
  extern union MFBALRY_REG    MFBALR10;    // Memory Fine Base Address Low Register 10
  extern union MFBAHRX_REG    MFBAHR11;    // Memory Fine Base Address High Register 11
  extern union MFBALRY_REG    MFBALR11;    // Memory Fine Base Address Low Register 11
  extern union MFBAHRX_REG    MFBAHR12;    // Memory Fine Base Address High Register 12
  extern union MFBALRY_REG    MFBALR12;    // Memory Fine Base Address Low Register 12
  extern union MFBAHRX_REG    MFBAHR13;    // Memory Fine Base Address High Register 13
  extern union MFBALRY_REG    MFBALR13;    // Memory Fine Base Address Low Register 13
  extern union MFBAHRX_REG    MFBAHR14;    // Memory Fine Base Address High Register 14
  extern union MFBALRY_REG    MFBALR14;    // Memory Fine Base Address Low Register 14
  extern union MFBAHRX_REG    MFBAHR15;    // Memory Fine Base Address High Register 15
  extern union MFBALRY_REG    MFBALR15;    // Memory Fine Base Address Low Register 15
  extern union MFBAHRX_REG    MFBAHR16;    // Memory Fine Base Address High Register 16
  extern union MFBALRY_REG    MFBALR16;    // Memory Fine Base Address Low Register 16
  extern union MFBAHRX_REG    MFBAHR17;    // Memory Fine Base Address High Register 17
  extern union MFBALRY_REG    MFBALR17;    // Memory Fine Base Address Low Register 17
  //extern union PFLASHCTRL_REG   PFLASHCTRL;   // Program Flash Control Register
  extern union DFLASHCTRL_REG   DFLASHCTRL;   // Data Flash Control Register
  extern union FLASHILOCK_REG   FLASHILOCK;   // Program Flash Interlock Register
 //};
 
 //---------------------------------------------------------------------------
 // Address Manager Module External References & Function Declarations:
 //
 //extern volatile struct DEC_REGS DecRegs;
 
//===========================================================================


//#endif // end of CYCLONE_DEC_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_defines.h
//
// TITLE: Cyclone Constant Definitions.
//
// NOTES:
// 1) This file contains some convenient constant definitions for use with
//   the .byte and .half options of the peripheral register structures.
//
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 14 Jun 2011 | F.W. | Added CIM, Global I/O defines
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2011. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_DEFINES_H
//#define CYCLONE_DEFINES_H


//#endif


//=========================================================================================
// CIM module definitions
//=========================================================================================
// FIRQPR, INTREQ, REQMASK Registers
// interrupts listed highest priority to lowest priority:
//#define CIMINT_ALL_SYS_SOFT		(0x80000000)	// 31	System Software Interrupt					
//#define CIMINT_ALL_FAULT_PIN	(0x40000000)	// 30	Fault Pin Interrupt		
//#define CIMINT_ALL_DPWM0		(0x20000000)	// 29	Every(1-16)DPWM0 switching cycles or CLF flag shutdown Interrupt		
//#define CIMINT_ALL_DPWM1		(0x10000000)	// 28	Every(1-16)DPWM1 switching cycles or CLF flag shutdown Interrupt			 						
//#define CIMINT_ALL_DPWM2		(0x08000000)	// 27	Every(1-16)DPWM2 switching cycles or CLF flag shutdown Interrupt			 						
//#define CIMINT_ALL_DPWM3		(0x04000000)	// 26	Every(1-16)DPWM3 switching cycles or CLF flag shutdown Interrupt		 						
//#define CIMINT_ALL_FAULT_MUX	(0x02000000)	// 25	Fault Mux Interrupt			 				
//#define CIMINT_ALL_ADC_CONV		(0x01000000)	// 24	ADC-12 End of Conversion Interrupt			 						
//#define CIMINT_ALL_CPCC			(0x00800000)	// 23	CPCC Interrupt, Mode switched in CPCC module Flag needs to be read for details			 			
//#define CIMINT_ALL_TMR_COMP0	(0x00400000)	// 22	24-bit Timer Compare 0 interrupt			 			
//#define CIMINT_ALL_TMR_CAPT0	(0x00200000)	// 21	24-bit Timer Capture 0 interrupt									
//#define CIMINT_ALL_TMR_COMP1	(0x00100000)	// 20	24-bit Timer Compare 1 interrupt		
//#define CIMINT_ALL_TMR_CAPT1	(0x00080000)	// 19	24-bit Timer Capture 1 interrupt	
//#define CIMINT_ALL_TMR_OVFL		(0x00040000)	// 18	24-bit Timer counter overflow interrupt							
//#define CIMINT_ALL_PWM0_COMP	(0x00020000)	// 17	16-bit Timer PWM0 counter overflow or Compare interrupt			 					
//#define CIMINT_ALL_PWM1_COMP	(0x00010000)	// 16	16-bit Timer PWM1 counter overflow or Compare interrupt			 					
//#define CIMINT_ALL_PWM2_COMP	(0x00008000)	// 15	16-bit Timer PWM2 counter overflow or Compare interrupt			 					
//#define CIMINT_ALL_PWM3_COMP	(0x00004000)	// 14	16-bit Timer PWM3 counter overflow or Compare interrupt			 					
//#define CIMINT_ALL_FRONT_END2	(0x00002000)	// 13	Front End 2 Interrupt			 					
//#define CIMINT_ALL_FRONT_END1	(0x00001000)	// 12	Front End 1 Interrupt			 					
//#define CIMINT_ALL_FRONT_END0	(0x00000800)	// 11	Front End 0 Interrupt				
//#define CIMINT_ALL_DIGI_COMP 	(0x00000400)	// 10	Digital comparator interrupt		
//#define CIMINT_ALL_PMBUS		(0x00000200)	// 9	PMBus related interrupt			 				
//#define CIMINT_ALL_UART2_TX		(0x00000100)	// 8	UART2 TX buffer empty			 						
//#define CIMINT_ALL_UART2_RX		(0x00000080)	// 7	UART2 RX buffer has a byte			 				
//#define CIMINT_ALL_UART1_TX		(0x00000040)	// 6	UART1 TX buffer empty			 		
//#define CIMINT_ALL_UART1_RX		(0x00000020)	// 5	UART1 RX buffer has a byte 		
//#define CIMINT_ALL_UART_ERR		(0x00000010)	// 4	UART or SCI error Interrupt. Frame, parity or Overrun			 	
//#define CIMINT_ALL_WTDG_WAKE	(0x00000008)	// 3	Wakeup interrupt when watchdog equals half of set watch time			 	
//#define CIMINT_ALL_WTDG_RSET	(0x00000004)	// 2	Interrupt from watchdog exceeded (reset)			 	
//#define CIMINT_ALL_EXT_INT	  (0x00000002)	// 1	Interrupt on one or all external input pins			 					
//#define CIMINT_ALL_BRWN_OUT		(0x00000001)	// 0	Brown Out Interrupt			 					


//=========================================================================================
// Global I/O definitions
//=========================================================================================
//Bit positions:
//#define FAULT3_GLBIO_BIT_POSITION        (29)
//#define ADC_EXT_TRIG_GLBIO_BIT_POSITION     (28)
//#define TCK_GLBIO_BIT_POSITION          (27)
//#define TDO_GLBIO_BIT_POSITION          (26)
//#define TMS_GLBIO_BIT_POSITION          (25)
//#define TDI_GLBIO_BIT_POSITION          (24)
//#define SCI_TX1_GLBIO_BIT_POSITION        (23)
//#define SCI_TX0_GLBIO_BIT_POSITION        (22)
//#define SCI_RX1_GLBIO_BIT_POSITION        (21)
//#define SCI_RX0_GLBIO_BIT_POSITION        (20)
//#define TMR_CAP_GLBIO_BIT_POSITION        (19)
//#define TMR_PWM1_GLBIO_BIT_POSITION       (18)
//#define TMR_PWM0_GLBIO_BIT_POSITION       (17)
//#define PMBUS_CLK_GLBIO_BIT_POSITION       (16)
//#define PMBUS_DATA_GLBIO_BIT_POSITION      (15)
//#define CONTROL_GLBIO_BIT_POSITION        (14)
//#define ALERT_GLBIO_BIT_POSITION         (13)
//#define EXT_INT_GLBIO_BIT_POSITION        (12)
//#define FAULT2_GLBIO_BIT_POSITION        (11)
//#define FAULT1_GLBIO_BIT_POSITION        (10)
//#define FAULT0_GLBIO_BIT_POSITION         (9)
//#define SYNC_GLBIO_BIT_POSITION          (8)
//#define DPWM3B_GLBIO_BIT_POSITION         (7)
//#define DPWM3A_GLBIO_BIT_POSITION         (6)
//#define DPWM2B_GLBIO_BIT_POSITION         (5)
//#define DPWM2A_GLBIO_BIT_POSITION         (4)
//#define DPWM1B_GLBIO_BIT_POSITION         (3)
//#define DPWM1A_GLBIO_BIT_POSITION         (2)
//#define DPWM0B_GLBIO_BIT_POSITION         (1)
//#define DPWM0A_GLBIO_BIT_POSITION         (0)

//Bit masks:
//#define FAULT3_GLBIO_BIT_MASK         (1 << FAULT3_GLBIO_BIT_POSITION) 
//#define ADC_EXT_TRIG_GLBIO_BIT_MASK      (1 << ADC_EXT_TRIG_GLBIO_BIT_POSITION)     
//#define TCK_GLBIO_BIT_MASK          (1 << TCK_GLBIO_BIT_POSITION)          
//#define TDO_GLBIO_BIT_MASK          (1 << TDO_GLBIO_BIT_POSITION)          
//#define TMS_GLBIO_BIT_MASK          (1 << TMS_GLBIO_BIT_POSITION)          
//#define TDI_GLBIO_BIT_MASK          (1 << TDI_GLBIO_BIT_POSITION)          
//#define SCI_TX1_GLBIO_BIT_MASK        (1 << SCI_TX1_GLBIO_BIT_POSITION)        
//#define SCI_TX0_GLBIO_BIT_MASK        (1 << SCI_TX0_GLBIO_BIT_POSITION)       
//#define SCI_RX1_GLBIO_BIT_MASK        (1 << SCI_RX1_GLBIO_BIT_POSITION)        
//#define SCI_RX0_GLBIO_BIT_MASK        (1 << SCI_RX0_GLBIO_BIT_POSITION)        
//#define TMR_CAP_GLBIO_BIT_MASK        (1 << TMR_CAP_GLBIO_BIT_POSITION)        
//#define TMR_PWM1_GLBIO_BIT_MASK        (1 << TMR_PWM1_GLBIO_BIT_POSITION)       
//#define TMR_PWM0_GLBIO_BIT_MASK        (1 << TMR_PWM0_GLBIO_BIT_POSITION)       
//#define PMBUS_CLK_GLBIO_BIT_MASK       (1 << PMBUS_CLK_GLBIO_BIT_POSITION)       
//#define PMBUS_DATA_GLBIO_BIT_MASK       (1 << PMBUS_DATA_GLBIO_BIT_POSITION)      
//#define CONTROL_GLBIO_BIT_MASK        (1 << CONTROL_GLBIO_BIT_POSITION)        
//#define ALERT_GLBIO_BIT_MASK         (1 << ALERT_GLBIO_BIT_POSITION)         
//#define EXT_INT_GLBIO_BIT_MASK        (1 << EXT_INT_GLBIO_BIT_POSITION)        
//#define FAULT2_GLBIO_BIT_MASK         (1 << FAULT2_GLBIO_BIT_POSITION)        
//#define FAULT1_GLBIO_BIT_MASK         (1 << FAULT1_GLBIO_BIT_POSITION)        
//#define FAULT0_GLBIO_BIT_MASK         (1 << FAULT0_GLBIO_BIT_POSITION)        
//#define SYNC_GLBIO_BIT_MASK          (1 << SYNC_GLBIO_BIT_POSITION)          
//#define DPWM3B_GLBIO_BIT_MASK         (1 << DPWM4B_GLBIO_BIT_POSITION)         
//#define DPWM3A_GLBIO_BIT_MASK         (1 << DPWM4A_GLBIO_BIT_POSITION)         
//#define DPWM2B_GLBIO_BIT_MASK         (1 << DPWM3B_GLBIO_BIT_POSITION)         
//#define DPWM2A_GLBIO_BIT_MASK         (1 << DPWM3A_GLBIO_BIT_POSITION)         
//#define DPWM1B_GLBIO_BIT_MASK         (1 << DPWM2B_GLBIO_BIT_POSITION)         
//#define DPWM1A_GLBIO_BIT_MASK         (1 << DPWM2A_GLBIO_BIT_POSITION)         
//#define DPWM0B_GLBIO_BIT_MASK         (1 << DPWM1B_GLBIO_BIT_POSITION)         
//#define DPWM0A_GLBIO_BIT_MASK         (1 << DPWM1A_GLBIO_BIT_POSITION)  


//=========================================================================================


//#endif // end of CYCLONE_DEFINES_H definition

//=========================================================================================
// End of file
//=========================================================================================
//###########################################################################
//
// FILE:  Cyclone_Device.h
//
// TITLE: Cyclone Device Definitions.
//
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with Spartan_Device.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_DEVICE_H
//#define CYCLONE_DEVICE_H



//#endif

//===========================================================================
// For Portability, It Is Recommended To Use Following Data Type Definitions
//
////#ifndef CYCLONE_DATA_TYPES
//#define CYCLONE_DATA_TYPES
//	typedef signed char     int8;
//	typedef char         Uint8;
//	typedef short        int16;
//	typedef unsigned short    Uint16;
//	typedef int         int32;
//	typedef unsigned int     uint16;
//
//	typedef	Uint16	PM11; 	// PMBus literal format. Top 5 bits are exponent,
			   	// bottom 11 bits are signed integer
//#endif


//===========================================================================
// Include All Peripheral Structure Definitions:
//
//#include "cyclone_adc.h"     // ADC Registers
//#include "cyclone_cim.h"     // CIM Registers
//#include "cyclone_dec.h"     // DEC Registers
//#include "cyclone_dpwm.h"    // DPWM Registers
////#include "cyclone_errlog.h"   // ERRLOG Register (for simulation only)
//#include "cyclone_fault_mux.h"  // Fault Mux Registers
//#include "cyclone_fe_ctrl.h"   // Front End Control Registers
//#include "cyclone_filter.h"   // FLTR Registers
//#include "cyclone_gio.h"     // GIO Registers
//#include "cyclone_loop_mux.h"  // Loop Mux Registers
//#include "cyclone_misc_analog.h" // Misc Analog Registers
//#include "cyclone_mmc.h"     // MMC Registers
//#include "cyclone_pmbus.h"    // PMBus Registers
//#include "cyclone_sys.h"     // SYS Registers
//#include "cyclone_timer.h"    // SYS Registers
//#include "cyclone_uart.h"    // UART Registers

//===========================================================================


//#endif // end of CYCLONE_DEVICE_H definition


//===========================================================================
// End of file
//===========================================================================
//cyclone_dpwm.h+cyclone_dpwm_test.h+cyclone_errlog.h+cyclone_fault_mux.h+cyclone_fe_ctrl.h tst5

//###############################################################################
//
// FILE:  cyclone_dpwm.h
//
// TITLE: Cyclone Digital PWM Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 07 Oct 2009 | CMF | Started with Spartan_Dpwm.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_DPWM_H
//#define CYCLONE_DPWM_H


//#endif

//*******//
 //=============================================================================
 // DPWM Individual Register Bit Definitions
 //=============================================================================
 
 //-----------------------------------------------------------------------------
 // DPWM Control Register 0 bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMCTRL0_BITS {        // bits  Description
 uint16 MASTER_SYNC_CNTL_SEL:1; // 16 Master Sync Control
 uint16 MIN_DUTY_MODE:2; // 18:17 Minimum Duty Cycle Clamp Select
 uint16 CBC_ADV_CNT_EN:1; // 19 Cycle-by-Cycle Current Limit Enable
 uint16 CBC_PWM_AB_EN:1; // 20 Cycle-by-Cycle Current Limit Mode
 uint16 MULTI_MODE_CLA_A_OFF:1; // 21 Controls PWM-A Output in Multi-Output Mode
 uint16 MULTI_MODE_CLA_B_OFF:1; // 22 Controls PWM-B Output in Multi-Output Mode
 uint16 CBC_PWM_C_EN:1; // 23 Cycle-by-Cycle PWM C Enable
 uint16 PWM_A_INTRA_MUX:4; // 27:24 PWM A Intramux Configuration
 uint16 PWM_B_INTRA_MUX:4; // 31:28 PWM B Intramux Configuration	
	
 uint16 PWM_EN:1; // 0 PWM
 uint16 CLA_EN:1; // 1 PWM input selection - enable CLA input
 uint16 PWM_A_INV:1; // 2 PWM A polarity inversion
 uint16 PWM_B_INV:1; // 3 PWM B polarity inversion
 uint16 PWM_MODE:4; // 7:4 Configures DPWM mode of operation
 uint16 BLANK_A_EN:1; // 8 PWM A Comparator Blanking Enable
 uint16 BLANK_B_EN:1; // 9 PWM B Comparator Blanking Enable
 uint16 PWM_A_FLT_POL:1; // 10 PWM A Fault Polarity
 uint16 PWM_B_FLT_POL:1; // 11 PWM B Fault Polarity
 uint16 RESON_MODE_FIXED_DUTY_EN:1; // 12 Controls Pulse Width in Resonance Mode
 uint16 CBC_SYNC_CUR_LIMIT_EN:1; // 13 Cycle-by-Cycle Sync Current Limit
 uint16 D_ENABLE:1; // 14 1-D Enable
 uint16 MSYNC_SLAVE_EN:1; // 15 Internal sync enable
 };
 union DPWMCTRL0_REG {
  Uint32         all;
  struct DPWMCTRL0_BITS bits;
 };
#define bPWM_EN 0x0001L
#define bCLA_EN 0x0002L
#define bPWM_A_INV 0x0004L
#define bPWM_B_INV 0x0008L
#define bPWM_MODE 0x00f0L
 //-----------------------------------------------------------------------------
 // DPWM Control Register 1 bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMCTRL1_BITS {      // bits  description
  uint16 EVENT_UP_SEL:2;      // 17:16 PWM Update mode
  uint16 AUTO_MODE_SEL:1;     // 18   Auto Mode Switching Select
  uint16 CBC_BSIDE_ACTIVE_EN:1;  // 19   Cycle-by-Cycle B Side Active Enable
  uint16 EXT_SYNC_EN:1;	     // 20   Slave DPWM to external sync
  uint16 CLA_SCALE:3;       // 23:21 CLA scaling select
  uint16 SYNC_OUT_DIV_SEL:4;    // 27:24 Sync out divider select
  uint16 CLA_DUTY_ADJ_EN:1;    // 28   Current/Flux Balancing Adjustment Enable
  uint16 BURST_EN:1;        // 29   Burst (Light Load) Mode enable
  uint16 SYNC_FET_EN:1;      // 30   SyncFET Mode Enable
  uint16 PRESET_EN:1;       // 31   Preset Counter Enable
	
	uint16 HIRES_DIS:1;       // 0   Hi-resolution disable
  uint16 ALL_PHASE_CLK_ENA:1;   // 1   All phase clock enable
  uint16 HIRES_SCALE:2;      // 3:2  Hi-resolution scale select
  uint16 PWM_A_PROT_DIS:1;     // 4   PWM A async protection disable
  uint16 PWM_B_PROT_DIS:1;     // 5   PWM B async protection disable
  uint16 SFRAME_EN:1;       // 6   PWM single frame mode select
  uint16 PWM_HR_MULTI_OUT_EN:1;  // 7   PWM High Res Multi-Mode Output Enable
  uint16 GPIO_A_EN:1;       // 8   PWM A output enable in GPIO mode
  uint16 GPIO_A_VAL:1;       // 9   PWM A output in GPIO mode
  uint16 GPIO_B_EN:1;       // 10   PWM B output enable in GPIO mode
  uint16 GPIO_B_VAL:1;       // 11   PWM B output in GPIO mode
  uint16 PWM_A_OE:1;        // 12   PWM A output enable
  uint16 PWM_B_OE:1;        // 13   PWM B output enable
  uint16 GLOBAL_PERIOD_EN:1;    // 14   PWM Global Period Enable
  uint16 CHECK_OVERRIDE:1;     // 15   Override PWM checks for invalid config
  
 };
 union DPWMCTRL1_REG {
  Uint32         all;
  struct DPWMCTRL1_BITS bits;
 };
 #define fPWM_A_PROT_DIS 0x0010L     // 4   PWM A async protection disable
 #define fPWM_B_PROT_DIS 0x0020L     // 5  
 //-----------------------------------------------------------------------------
 // DPWM Control Register 2 Bit Definitions
 //-----------------------------------------------------------------------------
 struct DPWMCTRL2_BITS {       // bits  description
  uint16 rsvd0:16;          // 31:16 Reserved
	
	uint16 SAMPLE_TRIG_1_EN:1;     // 0   Sample Trigger 1 Enable
	uint16 SAMPLE_TRIG_2_EN:1;     // 1   Sample Trigger 2 Enable
	uint16 SAMPLE_TRIG1_MODE:2;    // 3:2  Sample Trigger Configuration
	uint16 SAMPLE_TRIG1_OVERSAMPLE:2; // 5:4  Configures Oversampling function
	uint16 IDE_DETECT_EN:1;      // 6   IDE Detect Enable
	uint16 IDE_DUTY_B_EN:1;      // 7   IDE Duty Cycle Side B Enable
	uint16 FILTER_DUTY_SEL:2;     // 9:8  Selects DPWM Duty for Mode Switching
	uint16 RESON_DEADTIME_COMP_EN:1;  // 10   Selects how CLA Duty used in calculations
	uint16 PEAK_CUR_HR_CTRL:1;     // 11   Enables High Res in Peak Current Mode
  uint16 SYNC_IN_DIV_RATIO:4;    // 15:12 External Sync In Divide Ratio
                  
 };
 union DPWMCTRL2_REG {
  Uint32         all;
  struct DPWMCTRL2_BITS bits;
 };
#define bSAMPLE_TRIG_1_EN 0x0001L  // 0   Sample Trigger 1 Enable
#define bSAMPLE_TRIG_2_EN 0x0002L
 //-----------------------------------------------------------------------------
 // DPWM Period Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMPRD_BITS {       // bits  description
	uint16 PRD2:2; //14;      // 17:4  PWM Period - clock periods + 1
  uint16 rsvd1:14;         // 31:18 reserved
	
	uint16 rsvd0:4;         // 3:0  Reserved
  uint16 PRD1:12; //14;      // 17:4  PWM Period - clock periods + 1
 };
 union DPWMPRD_REG {
  Uint32         all;
  struct DPWMPRD_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM Event 1 Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMEV1_BITS {       // bits  description
  uint16 EVENT1H:2;        // 17:4  Event 1 configuration
  uint16 rsvd1:14;         // 31:18 reserved
  
  uint16 rsvd0:4;         // 3:0  Reserved
	uint16 EVENT1L:12;        // 17:4  Event 1 configuration
 };
 union DPWMEV1_REG {
  Uint32         all;
  struct DPWMEV1_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Event 2 Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMEV2_BITS {       // bits  description
  
  uint16 EVENT2H:2;        // 17:0  Event 2 configuration
	uint16 rsvd0:14;         // 31:18 reserved
	
	uint16 EVENT2L:16;        // 17:0  Event 2 configuration
 };
 union DPWMEV2_REG {
  Uint32         all;
  struct DPWMEV2_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM Event 3 Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMEV3_BITS {       // bits  description
	uint16 EVENT3H:2;        // 17:0  Event 3 configuration
  uint16 rsvd0:14;         // 31:18 reserved
	
  uint16 EVENT3L:16;        // 17:0  Event 3 configuration
 };
 union DPWMEV3_REG {
  Uint32         all;
  struct DPWMEV3_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM Event 4 Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMEV4_BITS {       // bits  description
  uint16 EVENT4H:2;        // 17:0  Event 4 configuration
  uint16 rsvd0:14;         // 31:18 reserved
	
  uint16 EVENT4L:16;        // 17:0  Event 4 configuration
 };
 union DPWMEV4_REG {
  Uint32         all;
  struct DPWMEV4_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Sample Trigger 1 Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMSAMPTRIG1_BITS {    // bits  description
  uint16 SAMPLE_TRIGGER2:2;    // 17:6  Sample trigger configuration
  uint16 rsvd1:14;         // 31:12 reserved
  
  uint16 rsvd0:6;         // 5:0  reserved
	uint16 SAMPLE_TRIGGER1:10;    // 17:6  Sample trigger configuration
 };
 union DPWMSAMPTRIG1_REG {
  Uint32         all;
  struct DPWMSAMPTRIG1_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Sample Trigger 2 Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMSAMPTRIG2_BITS {    // bits  description
  uint16 SAMPLE_TRIGGER2:2;    // 17:6  Sample trigger configuration
  uint16 rsvd1:14;         // 31:12 reserved
  
  uint16 rsvd0:6;         // 5:0  reserved
	uint16 SAMPLE_TRIGGER1:10;    // 17:6  Sample trigger configuration
 };
 union DPWMSAMPTRIG2_REG {
  Uint32         all;
  struct DPWMSAMPTRIG2_BITS  bits;
 }; 

 //-----------------------------------------------------------------------------
 // DPWM Phase Trigger Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMPHASETRIG_BITS {    // bits  description
  uint16 PHASE_TRIGGER2:2;     // 17:4  Phase trigger configuration
  uint16 rsvd1:14;         // 31:14 reserved
  
  uint16 rsvd0:4;         // 3:0  Reserved
	uint16 PHASE_TRIGGER1:12;     // 17:4  Phase trigger configuration
 };
 union DPWMPHASETRIG_REG {
  Uint32         all;
  struct DPWMPHASETRIG_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Cycle Adjust A Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMCYCADJA_BITS {     // bits  description
  uint16 rsvd0:16;         // 31:16 Reserved
  uint16 CYCLE_ADJUST_A:16;    // 15:0  Cycle Adjust A
 };
 union DPWMCYCADJA_REG {
  Uint32         all;
  struct DPWMCYCADJA_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Cycle Adjust B Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMCYCADJB_BITS {     // bits  description
  uint16 rsvd0:16;         // 31:16 Reserved
  int16 CYCLE_ADJUST_B:16;    // 15:0  Cycle Adjust B
 };
 union DPWMCYCADJB_REG {
  Uint32         all;
  struct DPWMCYCADJB_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Period Adjust Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMPERADJ_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:16 Reserved
  int16 PERIOD_ADJUST:16;    // 15:0  Period Adjust 
 };
 union DPWMPERADJ_REG {
  Uint32          all;
  struct DPWMPERADJ_BITS  bits;
 }; 


//-----------------------------------------------------------------------------
 // DPWM Fault Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct DPWMFLTCTRL_BITS {     // bits  description
  uint16 AB_MAX_COUNT:4;      // 20:16 Fault AB Cycle Max Count
  uint16 rsvd1:4;         // 23:21 Reserved
  uint16 CBC_MAX_COUNT:4;     // 28:24 Cycle-by-Cycle Max Count
  uint16 rsvd0:2;         // 29   Reserved
  uint16 CBC_FAULT_EN:1;      // 30   CBC Fault Module Enable
  uint16 ALL_FAULT_EN:1;      // 31   Fault Module Enable
	
	uint16 A_MAX_COUNT:4;      // 4:0  Fault AB Cycle Max Count
	uint16 rsvd3:4;         // 7:5  Reserved
	uint16 B_MAX_COUNT:4;      // 12:8  Fault AB Cycle Max Count
  uint16 rsvd2:4;         // 15:13 Reserved
 };
 union DPWMFLTCTRL_REG {
  Uint32          all;
  struct DPWMFLTCTRL_BITS  bits;
 };
 //-----------------------------------------------------------------------------
 // DPWM Overflow Register
 //-----------------------------------------------------------------------------
 struct DPWMOVERFLOW_BITS {     // bits  description
  uint16 rsvd0:16;         // 31:8  Reserved
	
	uint16 OVERFLOW:4;        // 3:0  DPWM Overflow status
	uint16 GPIO_A_IN:1;       // 4   Input value of PWM A
	uint16 GPIO_B_IN:1;       // 5   Input value of PWM B 
	uint16 PWM_A_CHECK:1;      // 6   Value of PWM A Internal Check
  uint16 PWM_B_CHECK:1;      // 7   Value of PWM B Internal Check
	uint16 rsvd1:8;
 };
 union DPWMOVERFLOW_REG {
  Uint32          all;
  struct DPWMOVERFLOW_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Interrupt Register
 //-----------------------------------------------------------------------------
 struct DPWMINT_BITS {       // bits  description
  uint16 INT:1;          // 16   Interrupt Status
  uint16 PRD:1;          // 17   PWM Period Interrupt Flag
	uint16 FLT_CBC:1;        // 18   Fault CBC Flag 
	uint16 FLT_AB:1;         // 19   Fault AB Flag
	uint16 FLT_B:1;         // 20   Fault B Flag
	uint16 FLT_A:1;         // 21   Fault A Flag
	uint16 MODE_SWITCH:1;      // 22   Mode Switching Flag
  uint16 rsvd0:9;         // 31:23 Reserved
	
	uint16 PRD_INT_SCALE:4;     // 3:0  End-of-Period Interrupt Scale
	uint16 PRD_INT_EN:1;       // 4   End-of-Period Interrupt Enable
  uint16 FLT_CBC_INT_EN:1;     // 5   Fault CBC Interrupt Enable
	uint16 FLT_AB_INT_EN:1;     // 6   Fault AB Interrupt Enable
	uint16 FLT_B_INT_EN:1;      // 7   Fault B Interrupt Enable
	uint16 FLT_A_INT_EN:1;      // 8   Fault A Interrupt Enable
	uint16 MODE_SWITCH_INT_EN:1;   // 9   Mode Switching Interrupt Enable
	uint16 MODE_SWITCH_FLAG_EN:1;  // 10   Mode Switching Flag Enable
	uint16 MODE_SWITCH_FLAG_CLR:1;  // 11   Mode Switching Flag Clear
  uint16 rsvd1:4;         // 15:12 Reserved
 };
 union DPWMINT_REG {
  Uint32          all;
  struct DPWMINT_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Counter Preset Register
 //-----------------------------------------------------------------------------
 struct DPWMCNTPRE_BITS {     // bits   Description
  uint16 PRESET2:2;        // 17:4   Preset DPWM Counter value
	uint16 rsvd1:14;        // 31:14  Reserved
	
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 PRESET1:12;        // 17:4   Preset DPWM Counter value
 };
 union DPWMCNTPRE_REG {
  Uint32         all;
  struct DPWMCNTPRE_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Blanking A Begin Register
 //-----------------------------------------------------------------------------
 struct DPWMBLKABEG_BITS {     // bits   Description
  uint16 BLANK_A_BEGIN2:2;     // 17:4   Start of PWM A Comparator Blanking
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 BLANK_A_BEGIN1:12;     // 17:4   Start of PWM A Comparator Blanking
 };
 union DPWMBLKABEG_REG {
  Uint32         all;
  struct DPWMBLKABEG_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Blanking A End Register
 //-----------------------------------------------------------------------------
 struct DPWMBLKAEND_BITS {     // bits   Description
  uint16 BLANK_A_END2:2;      // 17:4   End of PWM A Comparator Blanking
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 BLANK_A_END1:12;      // 17:4   End of PWM A Comparator Blanking
 };
 union DPWMBLKAEND_REG {
  Uint32         all;
  struct DPWMBLKAEND_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Blanking B Begin Register
 //-----------------------------------------------------------------------------
 struct DPWMBLKBBEG_BITS {     // bits   Description
  uint16 BLANK_B_BEGIN2:2;     // 17:4   Start of PWM B Comparator Blanking
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 BLANK_B_BEGIN1:12;     // 17:4   Start of PWM B Comparator Blanking
 };
 union DPWMBLKBBEG_REG {
  Uint32         all;
  struct DPWMBLKBBEG_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Blanking A End Register
 //-----------------------------------------------------------------------------
 struct DPWMBLKBEND_BITS {     // bits   Description
  uint16 BLANK_B_END2:2;      // 17:4   End of PWM B Comparator Blanking
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 BLANK_B_END1:12;      // 17:4   End of PWM B Comparator Blanking
 };
 union DPWMBLKBEND_REG {
  Uint32         all;
  struct DPWMBLKBEND_BITS bits;
 };


//-----------------------------------------------------------------------------
 // DPWM Minimum Duty Cycle High Register
 //-----------------------------------------------------------------------------
 struct DPWMMINDUTYHI_BITS {    // bits   Description
  uint16 MIN_DUTY_HIGH2:2;    // 17:4   Minimum Duty High Threshold
  uint16 rsvd1:14;        // 31:18  Reserved
  
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 MIN_DUTY_HIGH1:12;    // 17:4   Minimum Duty High Threshold
 };//.bit.MIN_DUTY_HIGH
 union DPWMMINDUTYHI_REG {
  Uint32          all;
  struct DPWMMINDUTYHI_BITS bits;
 };
 //-----------------------------------------------------------------------------
 // DPWM Minimum Duty Cycle Low Register
 //-----------------------------------------------------------------------------
 struct DPWMMINDUTYLO_BITS {    // bits   Description
  uint16 MIN_DUTY_LOW2:2;     // 17:4   Minimum Duty Low Threshold
  uint16 rsvd1:14;        // 31:18  Reserved
  
  uint16 rsvd0:4;         // 3:0   Reserved
	uint16 MIN_DUTY_LOW1:12;     // 17:4   Minimum Duty Low Threshold
 };
 union DPWMMINDUTYLO_REG {
  Uint32          all;
  struct DPWMMINDUTYLO_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Adaptive Sample Register
 //-----------------------------------------------------------------------------
 struct DPWMADAPTIVE_BITS {    // bits  Description
  uint16 rsvd0:16;        // 31:12  Reserved
	
  uint16 ADAPT_SAMP:12;      // 11:0  Adaptive Sample Adjust
	uint16 rsvd1:4;        // 31:12  Reserved
 };
 union DPWMADAPTIVE_REG {
  Uint32          all;
  struct DPWMADAPTIVE_BITS bits;
 }; 
 
 //-----------------------------------------------------------------------------
 // DPWM Fault Status Register
 //-----------------------------------------------------------------------------
 struct DPWMFLTSTAT_BITS {     // bits  Description
  uint16 rsvd0:16;        // 31:6  Reserved
	
	uint16 FLT_CBC:1;        // 0    Current Limit Detection
	uint16 FLT_AB:1;        // 1    Fault AB Detection
	uint16 FLT_B:1;         // 2    Fault B Detection
	uint16 FLT_A:1;         // 3    Fault A Detection
	uint16 IDE_DETECT:1;      // 4    IDE Detect Indication
  uint16 BURST:1;         // 5    Burst Mode
  uint16 rsvd1:10;        // 31:6  Reserved        
 };
 union DPWMFLTSTAT_REG {
  Uint32          all;
  struct DPWMFLTSTAT_BITS bits;
 };  

 //-----------------------------------------------------------------------------
 // DPWM Auto Switch High Upper Thresh Register
 //-----------------------------------------------------------------------------
 struct DPWMAUTOSWHIUPTHRESH_BITS { // bits  Description
  uint16 AUTO_SWITCH_HIGH_UPPER2:2; // 17:4  Auto Switch High Threshold
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;          // 3:0   Reserved
	uint16 AUTO_SWITCH_HIGH_UPPER1:12; // 17:4  Auto Switch High Threshold
 };
 union DPWMAUTOSWHIUPTHRESH_REG {
  Uint32         all;
  struct DPWMAUTOSWHIUPTHRESH_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM Auto Switch High Lower Thresh Register
 //-----------------------------------------------------------------------------
 struct DPWMAUTOSWHILOWTHRESH_BITS { // bits  Description
  uint16 AUTO_SWITCH_HIGH_LOWER2:2; // 17:4  Auto Switch High Threshold
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;          // 3:0   Reserved
	uint16 AUTO_SWITCH_HIGH_LOWER1:12; // 17:4  Auto Switch High Threshold
 };
 union DPWMAUTOSWHILOWTHRESH_REG {
  Uint32         all;
  struct DPWMAUTOSWHILOWTHRESH_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // DPWM Auto Switch Low Upper Thresh Register
 //-----------------------------------------------------------------------------
 struct DPWMAUTOSWLOUPTHRESH_BITS{  // bits  Description
  uint16 AUTO_SWITCH_LOW_UPPER2:2; // 17:4  Auto Switch Low Threshold
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;          // 3:0   Reserved
	uint16 AUTO_SWITCH_LOW_UPPER1:12; // 17:4  Auto Switch Low Threshold
 };
 union DPWMAUTOSWLOUPTHRESH_REG {
  Uint32         all;
  struct DPWMAUTOSWLOUPTHRESH_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // DPWM Auto Switch Low Lower Thresh Register
 //-----------------------------------------------------------------------------
 struct DPWMAUTOSWLOLOWTHRESH_BITS{ // bits  Description
  uint16 AUTO_SWITCH_LOW_LOWER2:2; // 17:4  Auto Switch Low Threshold
  uint16 rsvd1:14;         // 31:18  Reserved
  
  uint16 rsvd0:4;          // 3:0   Reserved
	uint16 AUTO_SWITCH_LOW_LOWER1:12; // 17:4  Auto Switch Low Threshold
 };
 union DPWMAUTOSWLOLOWTHRESH_REG {
  Uint32         all;
  struct DPWMAUTOSWLOLOWTHRESH_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // DPWM Auto Config Max Register
 //-----------------------------------------------------------------------------
 struct DPWMAUTOMAX_BITS {       // bits  Description
  uint16 MASTER_SYNC_CNTL_SEL:1;    // 16   Master Sync Control
  uint16 rsvd2:2;           // 18:17  Reserved
  uint16 CBC_ADV_CNT_EN:1;       // 19   Cycle-by-Cycle Current Limit Enable
  uint16 CBC_PWM_AB_EN:1;       // 20   Cycle-by-Cycle Current Limit Mode
  uint16 rsvd1:1;           // 21   Reserved
  uint16 MULTI_MODE_CLA_B_OFF:1;    // 22   Controls PWM-B Output in Multi-Output Mode
  uint16 CBC_PWM_C_EN:1;        // 23   Cycle-by-Cycle PWM C Enable
  uint16 PWM_A_INTRA_MUX:4;      // 27:24  PWM A Intramux Configuration
  uint16 PWM_B_INTRA_MUX:4;      // 31:28  PWM B Intramux Configuration
	
	uint16 rsvd6:1;           // 0    Reserved
  uint16 CLA_EN:1;           // 1    PWM input selection - enable CLA input
  uint16 rsvd5:2;           // 3:2   Reserved
  uint16 PWM_MODE:4;          // 7:4   Configures DPWM mode of operation
		//Dpwm0Regs.DPWMAUTOMAX.bit.PWM_MODE
		//0 = Normal Mode (Default)	1 = Resonant Mode
		//2 = Multi-Output Mode		3 = Triangular Mode
		//4 = Leading Mode
  uint16 rsvd4:4;           // 11:8   Reserved
  uint16 RESON_MODE_FIXED_DUTY_EN:1;  // 12   Controls Pulse Width in Resonance Mode
  uint16 CBC_SYNC_CUR_LIMIT_EN:1;   // 13   Cycle-by-Cycle Sync Current Limit Enable
  uint16 rsvd3:2;           // 15:14  Reserved
 };
 union DPWMAUTOMAX_REG {
  Uint32         all;
  struct DPWMAUTOMAX_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Auto Config Mid Register
 //-----------------------------------------------------------------------------
 struct DPWMAUTOMID_BITS {       // bits  Description
  uint16 MASTER_SYNC_CNTL_SEL:1;    // 16   Master Sync Control
  uint16 rsvd2:2;           // 18:17  Reserved
  uint16 CBC_ADV_CNT_EN:1;       // 19   Cycle-by-Cycle Current Limit Enable
  uint16 CBC_PWM_AB_EN:1;       // 20   Cycle-by-Cycle Current Limit Mode
  uint16 rsvd1:1;           // 21   Reserved
  uint16 MULTI_MODE_CLA_B_OFF:1;    // 22   Controls PWM-B Output in Multi-Output Mode
  uint16 CBC_PWM_C_EN:1;        // 23   Cycle-by-Cycle PWM C Enable
  uint16 PWM_A_INTRA_MUX:4;      // 27:24  PWM A Intramux Configuration
  uint16 PWM_B_INTRA_MUX:4;      // 31:28  PWM B Intramux Configuration
	
	uint16 rsvd6:1;           // 0    Reserved
  uint16 CLA_EN:1;           // 1    PWM input selection - enable CLA input
  uint16 rsvd5:2;           // 3:2   Reserved
  uint16 PWM_MODE:4;          // 7:4   Configures DPWM mode of operation
  uint16 rsvd4:4;           // 11:8   Reserved
  uint16 RESON_MODE_FIXED_DUTY_EN:1;  // 12   Controls Pulse Width in Resonance Mode
  uint16 CBC_SYNC_CUR_LIMIT_EN:1;   // 13   Cycle-by-Cycle Sync Current Limit Enable
  uint16 rsvd3:2;           // 15:14  Reserved
 };
 union DPWMAUTOMID_REG {
  Uint32         all;
  struct DPWMAUTOMID_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // DPWM Edge PWM Generation Control Register
 //-----------------------------------------------------------------------------
 struct DPWMEDGEGEN_BITS {       // bits  Description
  uint16 EDGE_EN:1;          // 16   Enables Edge Generate Module
  uint16 rsvd0:15;           // 31:17  Reserved
	
	uint16 B_OFF_EDGE:3;         // 2:0   B Off Edge Trigger Select
  uint16 rsvd4:1;           // 3    Reserved
  uint16 B_ON_EDGE:3;         // 6:4   B On Edge Trigger Select
  uint16 rsvd3:1;           // 7    Reserved
  uint16 A_OFF_EDGE:3;         // 10:8  A Off Edge Trigger Select
  uint16 rsvd2:1;           // 11   Reserved
  uint16 A_ON_EDGE:3;         // 14:12  A On Edge Trigger Select
  uint16 rsvd1:1;           // 15   Reserved
 };
 union DPWMEDGEGEN_REG {
  Uint32         all;
  struct DPWMEDGEGEN_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM Filter Duty Read Register
 //-----------------------------------------------------------------------------
 struct DPWMFILTERDUTYREAD_BITS {    // bits  Description
  uint16 FILTER_DUTY2:2;        // 17:0  Filter Duty
  uint16 rsvd0:14;           // 31:18  Reserved
	
  uint16 FILTER_DUTY1:16;        // 17:0  Filter Duty
 };
 union DPWMFILTERDUTYREAD_REG {
  Uint32         all;
  struct DPWMFILTERDUTYREAD_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // DPWM BIST Status Register
 //-----------------------------------------------------------------------------
 struct DPWMBISTSTAT_BITS {      // bits   Description
  uint16 rsvd0:16;          // 31:15  Reserved
	
  uint16 BIST_CNT:15;         // 14:0   BIST Count
	uint16 rsvd1:1;          // 31:15  Reserved
 };
 union DPWMBISTSTAT_REG {
  Uint32         all;
  struct DPWMBISTSTAT_BITS    bits;
 };

 

 //-----------------------------------------------------------------------------
 // DPWM Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct DPWM_REGS Dpwm0Regs;
 //extern volatile struct DPWM_REGS Dpwm1Regs;
 //extern volatile struct DPWM_REGS Dpwm2Regs;
 //extern volatile struct DPWM_REGS Dpwm3Regs;
//*******//
//===========================================================================


//#endif // end of CYCLONE_DPWM_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
// cyclone_dpwm_test.h
// FILE:  cyclone_dpwm_test.h
//
// TITLE: Cyclone Digital PWM Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 07 Oct 2009 | CMF | Started with Spartan_Dpwm.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_DPWM_H
//#define CYCLONE_DPWM_H


//#endif

 
 

 //=============================================================================
 // DPWM Module Register File
 //=============================================================================
// struct DPWM_REGS {//Dpwm0Regs,Dpwm1Regs,Dpwm2Regs,Dpwm3Regs
  extern union DPWMCTRL0_REG DPWM0CTRL0,DPWM1CTRL0,DPWM2CTRL0,DPWM3CTRL0; 	// DPWM Control Register 0
			//Dpwm0Regs.DPWMCTRL0.bit.PWM_B_INTRA_MUX = 
			//Dpwm0Regs.DPWMCTRL0.all =
  extern union DPWMCTRL1_REG DPWM0CTRL1,DPWM1CTRL1,DPWM2CTRL1,DPWM3CTRL1;	// DPWM Control Register 1	
  extern union DPWMCTRL2_REG DPWM0CTRL2;	// DPWM Control Register 2
  extern union DPWMPRD_REG DPWM0PRD,DPWM1PRD,DPWM2PRD,DPWM3PRD;		// DPWM Period Register
  extern union DPWMEV1_REG DPWM0EV1,DPWM1EV1,DPWM2EV1,DPWM3EV1;		// DPWM Event 1 Register
  extern union DPWMEV2_REG DPWM0EV2,DPWM1EV2,DPWM2EV2,DPWM3EV2;		// DPWM Event 2 Register
  extern union DPWMEV3_REG DPWM0EV3,DPWM1EV3,DPWM2EV3,DPWM3EV3;		// DPWM Event 3 Register
  extern union DPWMEV4_REG DPWM0EV4,DPWM1EV4,DPWM2EV4,DPWM3EV4;		// DPWM Event 4 Register
  extern union DPWMSAMPTRIG1_REG DPWM0SAMPTRIG1;	// DPWM Sample Trigger 1
  extern union DPWMSAMPTRIG2_REG DPWM0SAMPTRIG2;	// DPWM Sample Trigger 2
  extern union DPWMPHASETRIG_REG DPWM0PHASETRIG;	// DPWM Phase Trigger
  extern union DPWMCYCADJA_REG  DPWMCYCADJA;	// DPWM Cycle Adjust A
  extern union DPWMCYCADJB_REG  DPWMCYCADJB;	// DPWM Cycle Adjust B
  extern union DPWMPERADJ_REG  DPWMPERADJ;		// DPWM Period Adjust Register
  extern union DPWMFLTCTRL_REG  DPWMFLTCTRL;	// DPWM Fault Control
  extern union DPWMOVERFLOW_REG DPWMOVERFLOW;	// DPWM Overflow Register
  extern union DPWMINT_REG  DPWMINT;			// DPWM Interrupt Register
  extern union DPWMCNTPRE_REG  DPWMCNTPRE;		// DPWM Counter Preset
  extern union DPWMBLKABEG_REG  DPWMBLKABEG;	// DPWM Blanking A Begin
  extern union DPWMBLKAEND_REG  DPWMBLKAEND;	// DPWM Blanking A End
  extern union DPWMBLKBBEG_REG  DPWMBLKBBEG;	// DPWM Blanking B Begin
  extern union DPWMBLKBEND_REG  DPWMBLKBEND;	// DPWM Blanking B End
  extern union DPWMMINDUTYHI_REG DPWMMINDUTYHI;	// DPWM Minimum Duty Cycle High
	    //Dpwm0Regs.DPWMMINDUTYHI.bit.MIN_DUTY_HIGH = 
			//Dpwm0Regs.DPWMMINDUTYHI.all =
  extern union DPWMMINDUTYLO_REG DPWMMINDUTYLO;	// DPWM Minimum Duty Cycle Low
  extern union DPWMADAPTIVE_REG DPWMADAPTIVE;	// DPWM Adaptive Sample
  extern union DPWMFLTSTAT_REG  DPWMFLTSTAT;	// DPWM Fault Status Register 
  extern union DPWMAUTOSWHIUPTHRESH_REG  DPWMAUTOSWHIUPTHRESH;
											// DPWM Auto Switch High Upper Thresh
  extern union DPWMAUTOSWHILOWTHRESH_REG  DPWMAUTOSWHILOWTHRESH;
											// DPWM Auto Switch High Lower Thresh
  extern union DPWMAUTOSWLOUPTHRESH_REG  DPWMAUTOSWLOUPTHRESH;
											// DPWM Auto Switch Low Upper Thresh Register
  extern union DPWMAUTOSWLOLOWTHRESH_REG  DPWMAUTOSWLOLOWTHRESH;
											// DPWM Auto Switch Low Lower Thresh Register
  extern union DPWMAUTOMAX_REG  DPWM0AUTOMAX,DPWM1AUTOMAX,DPWM2AUTOMAX,DPWM3AUTOMAX;	// DPWM Auto Config Max
  extern union DPWMAUTOMID_REG  DPWMAUTOMID;	// DPWM Auto Config Mid
  extern union DPWMEDGEGEN_REG  DPWMEDGEGEN;	// DPWM Edge PWM Generation Control Register
  extern union DPWMFILTERDUTYREAD_REG   DPWMFILTERDUTYREAD;
											// DPWM Filter Duty Read Register
  extern union DPWMBISTSTAT_REG DPWMBISTSTAT;	// DPWM BIST Status Register
 //};

//*******// 

//===========================================================================


//#endif // end of CYCLONE_DPWM_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_errlog.h
//
// TITLE: Cyclone Errlog Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 18 Aug 2009 | CMF | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_ERRLOG_H
//#define CYCLONE_ERRLOG_H


//#endif

//===========================================================================
// Errlog Individual Register Bit Definitions
//

//-------------------------------------------------
// Memory Fine Base Address High Register 0 bit definitions
//
//struct ERRLOG_BITS {      // bits  description
// uint16 ERRLOG_STATUS2:15;   // 30:0  Errlog Status Bits
// uint16 ERRLOG_BUSY:1;     // 31   Errlog Busy Bit
// 
// uint16 ERRLOG_STATUS1:16;   // 30:0  Errlog Status Bits
//};
//union ERRLOG_REG {
//  Uint32         all;
//  struct ERRLOG_BITS  bits;
//};

//===========================================================================
// Address Manager Module Register File
//
//struct ERRLOG_REGS {
//  extern union ERRLOG_REG    ERRLOG;    // Memory Fine Base Address High Register 0
//};

//---------------------------------------------------------------------------
// Address Manager Module External References & Function Declarations:
//
//extern volatile struct ERRLOG_REGS ErrlogRegs;

//===========================================================================


//#endif // end of CYCLONE_ERRLOG_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
//
// FILE:  cyclone_fault_mux.h
//
// TITLE: Cyclone Fault Mux Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 20 Aug 2009 | CMF | Initial Revision
//    |       |   | 
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_FAULT_MUX_H
//#define CYCLONE_FAULT_MUX_H


//#endif

//*******//
 //=============================================================================
 // Fault Mux Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // Analog Comparator Control 0 Register
 //-----------------------------------------------------------------------------
 struct ACOMPCTRL0_BITS {     // bits  description
  uint16 rsvd2:1;         // 16:15 Reserved
  uint16 ACOMP_B_INT_EN:1;    // 17   Analog Comparator B Interrupt Enable
  uint16 ACOMP_B_POL:1;      // 18   Analog Comparator B Polarity
  uint16 ACOMP_B_SEL:3;      // 21:19 Analog Comparator B Select
  uint16 rsvd4:2;         // 23:22 Reserved
  uint16 ACOMP_B_THRESH:7;    // 30:24 Analog Comparator B Threshold
  uint16 rsvd3:1;         // 31   Reserved
	
	uint16 ACOMP_EN:1;       // 0   Analog Comparator A Enable
  uint16 ACOMP_A_INT_EN:1;    // 1   Analog Comparator A Interrupt Enable
  uint16 ACOMP_A_POL:1;      // 2   Analog Comparator A Polarity
  uint16 ACOMP_A_SEL:3;      // 5:3  Analog Comparator A Select
  uint16 rsvd0:2;         // 7:6  Reserved
  uint16 ACOMP_A_THRESH:7;    // 14:8  Analog Comparator A Threshold
  uint16 rsvd1:1;         // 16:15 Reserved
 }; 
 union ACOMPCTRL0_REG {
  Uint32          all;
  struct ACOMPCTRL0_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Analog Comparator Control 1 Register
 //-----------------------------------------------------------------------------
 struct ACOMPCTRL1_BITS {     // bits  description
 uint16 ACOMP_D_OUT_EN:1; // 16 Analog Comparator D DAC Output Enable
 uint16 ACOMP_D_INT_EN:1; // 17 Analog Comparator D Interrupt Enable
 uint16 ACOMP_D_POL:1; // 18 Analog Comparator D Polarity
 uint16 ACOMP_D_SEL:3; // 21:19 Analog Comparator D Select
 uint16 rsvd3:2; // 23:22 Reserved
 uint16 ACOMP_D_THRESH:7; // 30:24 Analog Comparator D Threshold
 uint16 rsvd4:1; // 31 Reserved

 uint16 rsvd0:1; // 0
 uint16 ACOMP_C_INT_EN:1; // 1 Analog Comparator C Interrupt Enable
 uint16 ACOMP_C_POL:1; // 2 Analog Comparator C Polarity
 uint16 ACOMP_C_SEL:3; // 5:3 Analog Comparator C Select
 uint16 rsvd1:2; // 7:6 Reserved
 uint16 ACOMP_C_THRESH:7; // 14:8 Analog Comparator C Threshold
 uint16 rsvd2:1; // 15 Reserved
 }; 
 union ACOMPCTRL1_REG {
  Uint32          all;
  struct ACOMPCTRL1_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Analog Comparator Control 2 Register
 //-----------------------------------------------------------------------------
 struct ACOMPCTRL2_BITS {     // bits  description
 
 uint16 ACOMP_F_OUT_EN:1; // 16 Analog Comparator F DAC Output Enable
 uint16 ACOMP_F_INT_EN:1; // 17 Analog Comparator F Interrupt Enable
 uint16 ACOMP_F_POL:1; // 18 Analog Comparator F Polarity
 uint16 ACOMP_F_SEL:3; // 21:19 Analog Comparator F Select
 uint16 ACOMP_F_REF_SEL:1; // 22 Analog Comparator F Ref Select
 uint16 rsvd3:1; // 23 Reserved
 uint16 ACOMP_F_THRESH:7; // 30:24 Analog Comparator F Threshold
 uint16 rsvd4:1; // 31 Reserved

 uint16 ACOMP_E_OUT_EN:1; // 0 Analog Comparator E DAC Output
 uint16 ACOMP_E_INT_EN:1; // 1 Analog Comparator E Interrupt Enable
 uint16 ACOMP_E_POL:1; // 2 Analog Comparator E Polarity
 uint16 ACOMP_E_SEL:3; // 5:3 Analog Comparator E Select
 uint16 rsvd1:2; // 7:6 Reserved
 uint16 ACOMP_E_THRESH:7; // 14:8 Analog Comparator E Threshold
 uint16 rsvd2:1; // 15 Reserved
 }; 
 union ACOMPCTRL2_REG {
  Uint32          all;
  struct ACOMPCTRL2_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Analog Comparator Control 3 Register
 //-----------------------------------------------------------------------------
 struct ACOMPCTRL3_BITS {     // bits  description
 uint16 rsvd3:16; // 31:15 Reserved
 
 uint16 ACOMP_G_OUT_EN:1; // 0 Analog Comparator G DAC Output
 uint16 ACOMP_G_INT_EN:1; // 1 Analog Comparator G Interrupt Enable
 uint16 ACOMP_G_POL:1; // 2 Analog Comparator G Polarity
 uint16 ACOMP_G_SEL:3; // 5:3 Analog Comparator G Select
 uint16 rsvd1:2; // 7:6 Reserved
 uint16 ACOMP_G_THRESH:7; // 14:8 Analog Comparator G Threshold
 uint16 rsvd2:1; // 31:15 Reserved

 }; 
 union ACOMPCTRL3_REG {
  Uint32          all;
  struct ACOMPCTRL3_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // External Fault Control Register
 //-----------------------------------------------------------------------------
 struct EXTFAULTCTRL_BITS {    // Bits  Description
 uint16 rsvd0:16; // 31:12 Reserved
 
 uint16 FAULT0_DET_EN:1; // 0 External FAULT[0] Detection
 uint16 FAULT1_DET_EN:1; // 1 External FAULT[1] Detection Enable
 uint16 FAULT2_DET_EN:1; // 2 External FAULT[2] Detection Enable
 uint16 FAULT3_DET_EN:1; // 3 External FAULT[3] Detection Enable
 uint16 FAULT0_INT_EN:1; // 4 External FAULT[0] Interrupt Enable
 uint16 FAULT1_INT_EN:1; // 5 External FAULT[1] Interrupt Enable
 uint16 FAULT2_INT_EN:1; // 6 External FAULT[2] Interrupt Enable
 uint16 FAULT3_INT_EN:1; // 7 External FAULT[3] Interrupt Enable
 uint16 FAULT0_POL:1; // 8 External FAULT[0] Polarity
 uint16 FAULT1_POL:1; // 9 External FAULT[1] Polarity
 uint16 FAULT2_POL:1; // 10 External FAULT[2] Polarity
 uint16 FAULT3_POL:1; // 11 External FAULT[3] Polarity
 uint16 rsvd1:4; // 31:12 Reserved
 };
 union EXTFAULTCTRL_REG {
  Uint32          all;
  struct EXTFAULTCTRL_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Fault Mux Interrupt Status Register
 //-----------------------------------------------------------------------------
 struct FAULTMUXINTSTAT_BITS {   // bits  description
 uint16 DCOMP3:1; // 16 Digital Comparator 3 Interrupt Status
 uint16 rsvd0:15; // 31:17 Reserved

 uint16 ACOMP_A:1; // 0 Analog Comparator A Interrupt
 uint16 ACOMP_B:1; // 1 Analog Comparator B Interrupt Status
 uint16 ACOMP_C:1; // 2 Analog Comparator C Interrupt Status
 uint16 ACOMP_D:1; // 3 Analog Comparator D Interrupt Status
 uint16 ACOMP_E:1; // 4 Analog Comparator E Interrupt Status
 uint16 ACOMP_F:1; // 5 Analog Comparator F Interrupt Status
 uint16 ACOMP_G:1; // 6 Analog Comparator G Interrupt Status
 uint16 DCM_DETECT:1; // 7 Discontinuous Conduction Mode
 uint16 FAULT0:1; // 8 External FAULT[0] Detect Interrupt Status
 uint16 FAULT1:1; // 9 External FAULT[1] Detect Interrupt Status
 uint16 FAULT2:1; // 10 External FAULT[2] Detect Interrupt Status
 uint16 FAULT3:1; // 11 External FAULT[3] Detect Interrupt Status
 uint16 LFO_FAIL:1; // 12 Low Frequency Oscillator Failure
 uint16 DCOMP0:1; // 13 Digital Comparator 0 Interrupt Status
 uint16 DCOMP1:1; // 14 Digital Comparator 1 Interrupt Status
 uint16 DCOMP2:1; // 15 Digital Comparator 2 Interrupt Status
 };
 union FAULTMUXINTSTAT_REG {
  Uint32         all;
  struct FAULTMUXINTSTAT_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Fault Mux Raw Status Register
 //-----------------------------------------------------------------------------
 struct FAULTMUXRAWSTAT_BITS {   // bits  description
 uint16 DCOMP3:1; // 16 Digital Comparator 3 Raw Status
 uint16 rsvd0:15; // 31:17 Reserved

 uint16 ACOMP_A:1; // 0 Analog Comparator A Raw
 uint16 ACOMP_B:1; // 1 Analog Comparator B Raw Status
 uint16 ACOMP_C:1; // 2 Analog Comparator C Raw Status
 uint16 ACOMP_D:1; // 3 Analog Comparator D Raw Status
 uint16 ACOMP_E:1; // 4 Analog Comparator E Raw Status
 uint16 ACOMP_F:1; // 5 Analog Comparator F Raw Status
 uint16 ACOMP_G:1; // 6 Analog Comparator G Raw Status
 uint16 DCM_DETECT:1; // 7 Discontinuous Conduction Mode
 uint16 FAULT0:1; // 8 External FAULT[0] Detect Raw Status
 uint16 FAULT1:1; // 9 External FAULT[1] Detect Raw Status
 uint16 FAULT2:1; // 10 External FAULT[2] Detect Raw Status
 uint16 FAULT3:1; // 11 External FAULT[2] Detect Raw Status
 uint16 LFO_FAIL:1; // 12 Low Frequency Oscillator Failure
 uint16 DCOMP0:1; // 13 Digital Comparator 0 Raw Status
 uint16 DCOMP1:1; // 14 Digital Comparator 1 Raw Status
 uint16 DCOMP2:1; // 15 Digital Comparator 2 Raw Status
 };
 union FAULTMUXRAWSTAT_REG {
  Uint32         all;
  struct FAULTMUXRAWSTAT_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Comparator Ramp Control 0 Register
 //-----------------------------------------------------------------------------
 struct COMPRAMP0_BITS {      // Bits  Description
 uint16 STEP_SIZE2:12; // 27:10 Comparator Ramp Step Size
 uint16 START_VALUE_SEL:4; // 31:28 Selects Ramp Start Value
 
 uint16 RAMP_EN:1; // 0 Ramp
 uint16 DPWM0_TRIG_EN:1; // 1 DPWM0 Trigger Enable
 uint16 DPWM1_TRIG_EN:1; // 2 DPWM1 Trigger Enable
 uint16 DPWM2_TRIG_EN:1; // 3 DPWM2 Trigger Enable
 uint16 DPWM3_TRIG_EN:1; // 4 DPWM3 Trigger Enable
 uint16 CLKS_PER_STEP:5; // 9:5 Clocks per Ramp Step
 uint16 STEP_SIZE1:6; // 27:10 Comparator Ramp Step Size
 };
 union COMPRAMP0_REG {
  Uint32          all;
  struct COMPRAMP0_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Digital Comparator Control 0 Register 
 //-----------------------------------------------------------------------------
 struct DCOMPCTRL0_BITS {     // Bits  Description
 uint16 FE_SEL2:2; // 17:15 Digital Comparator Front End Select
 uint16 COMP_POL:1; // 18 Digital Comparator Polarity Select
 uint16 rsvd0:5; // 23:19 Reserved
 uint16 CNT_THRESH:8; // 31:24 Digital Comparator Counter Threshold

 int16 THRESH:11; // 10:0 Digital Comparator
 uint16 COMP_EN:1; // 11 Digital Comparator Enable 
 uint16 INT_EN:1; // 12 Digital Comparator Interrupt Enable
 uint16 CNT_CONFIG:1; // 13 Digital Comparator Counter Configuration
 uint16 CNT_CLR:1; // 14 Digital Comparator Counter Clear
 uint16 FE_SEL1:1;
  };
 union DCOMPCTRL0_REG {     
  Uint32          all;
  struct DCOMPCTRL0_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Digital Comparator Control 1 Register 
 //-----------------------------------------------------------------------------
 struct DCOMPCTRL1_BITS {     // Bits  Description
 uint16 FE_SEL2:2; // 17:15 Digital Comparator Front End Select
 uint16 COMP_POL:1; // 18 Digital Comparator Polarity Select
 uint16 rsvd0:5; // 23:19 Reserved
 uint16 CNT_THRESH:8; // 31:24 Digital Comparator Counter Threshold

 int16 THRESH:11; // 10:0 Digital Comparator
 uint16 COMP_EN:1; // 11 Digital Comparator Enable
 uint16 INT_EN:1; // 12 Digital Comparator Interrupt Enable
 uint16 CNT_CONFIG:1; // 13 Digital Comparator Counter Configuration
 uint16 CNT_CLR:1; // 14 Digital Comparator Counter Clear
 uint16 FE_SEL1:1; 
 };
 union DCOMPCTRL1_REG {     
  Uint32          all;
  struct DCOMPCTRL1_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Digital Comparator Control 2 Register 
 //-----------------------------------------------------------------------------
 struct DCOMPCTRL2_BITS {     // Bits  Description
 uint16 FE_SEL2:2; // 17:15 Digital Comparator Front End Select
 uint16 COMP_POL:1; // 18 Digital Comparator Polarity Select
 uint16 rsvd0:5; // 23:19 Reserved
 uint16 CNT_THRESH:8; // 31:24 Digital Comparator Counter Threshold

 int16 THRESH:11; // 10:0 Digital Comparator
 uint16 COMP_EN:1; // 11 Digital Comparator Enable
 uint16 INT_EN:1; // 12 Digital Comparator Interrupt Enable
 uint16 CNT_CONFIG:1; // 13 Digital Comparator Counter Configuration
 uint16 CNT_CLR:1; // 14 Digital Comparator Counter Clear
 uint16 FE_SEL1:1; 
 };
 union DCOMPCTRL2_REG {     
  Uint32          all;
  struct DCOMPCTRL2_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Digital Comparator Control 3 Register 
 //-----------------------------------------------------------------------------
 struct DCOMPCTRL3_BITS {     // Bits  Description
 uint16 FE_SEL2:2; // 17:15 Digital Comparator Front End Select
 uint16 COMP_POL:1; // 18 Digital Comparator Polarity Select
 uint16 rsvd0:5; // 23:19 Reserved
 uint16 CNT_THRESH:8; // 31:24 Digital Comparator Counter Threshold
 
 int16 THRESH:11; // 10:0 Digital Comparator Threshold
 uint16 COMP_EN:1; // 11 Digital Comparator Enable
 uint16 INT_EN:1; // 12 Digital Comparator Interrupt Enable
 uint16 CNT_CONFIG:1; // 13 Digital Comparator Counter Configuration
 uint16 CNT_CLR:1; // 14 Digital Comparator Counter Clear
 uint16 FE_SEL1:1;
 };
 union DCOMPCTRL3_REG {     
  Uint32          all;
  struct DCOMPCTRL3_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Digital Comparator Counter Status Register
 //-----------------------------------------------------------------------------
 struct DCOMPCNTSTAT_BITS {    // Bits  Description
  uint16 DCOMP2_CNT:8; // 23:16 Digital Comparator 2 Counter
 uint16 DCOMP3_CNT:8; // 31:24 Digital Comparator 3 Counter
 
   uint16 DCOMP0_CNT:8; // 7:0 Digital Comparator 2
 uint16 DCOMP1_CNT:8; // 15:8 Digital Comparator 3 Counter
 };
 union DCOMPCNTSTAT_REG {
  Uint32          all;
  struct DCOMPCNTSTAT_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 0 Current Limit Control Register
 //-----------------------------------------------------------------------------
 struct DPWM0CLIM_BITS {      // Bits  Description
 uint16 ANALOG_PCM_EN:1; // 16 Analog Peak Current Detection Enable
 uint16 rsvd0:15; // 31:17 Reserved
 
 uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Current Limit Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Current Limit Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Current Limit Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Current Limit Enable
 uint16 DIG_PCM_EN:1; // 11 Digital Peak Current Detection Enable
 uint16 DCOMP0_EN:1; // 12 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 13 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 14 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 15 Digital Comparator 3 Enable
 };
 union DPWM0CLIM_REG {
  Uint32          all;
  struct DPWM0CLIM_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 0 Fault AB Detction Register
 //-----------------------------------------------------------------------------
 struct DPWM0FLTABDET_BITS {    // Bits  Description
 uint16 rsvd0:16; // 31:15 Reserved 
  
 uint16 ACOMP_A_EN:1; // 0 Analog Comparator A
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[2] Enable
 uint16 DCOMP0_EN:1; // 11 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 12 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 13 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 14 Digital Comparator 3 Enable
 uint16 rsvd1:1; // 31:15 Reserved
 };
 union DPWM0FLTABDET_REG {
  Uint32         all;
  struct DPWM0FLTABDET_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 0 Fault Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM0FAULTDET_BITS {    // Bits  Description
 uint16 PWMB_ACOMP_A_EN:1; // 16 PWM B Analog Comparator A Enable
 uint16 PWMB_ACOMP_B_EN:1; // 17 PWM B Analog Comparator B Enable
 uint16 PWMB_ACOMP_C_EN:1; // 18 PWM B Analog Comparator C Enable
 uint16 PWMB_ACOMP_D_EN:1; // 19 PWM B Analog Comparator D Enable
 uint16 PWMB_ACOMP_E_EN:1; // 20 PWM B Analog Comparator E Enable
 uint16 PWMB_ACOMP_F_EN:1; // 21 PWM B Analog Comparator F Enable
 uint16 PWMB_ACOMP_G_EN:1; // 22 PWM B Analog Comparator G Enable
 uint16 PWMB_FAULT0_EN:1; // 23 PWM B Fault[0] Enable
 uint16 PWMB_FAULT1_EN:1; // 24 PWM B Fault[1] Enable
 uint16 PWMB_FAULT2_EN:1; // 25 PWM B Fault[2] Enable
 uint16 PWMB_FAULT3_EN:1; // 26 PWM B Fault[3] Enable
 uint16 PWMB_DCOMP0_EN:1; // 27 PWM B Digital Comparator 0 Enable
 uint16 PWMB_DCOMP1_EN:1; // 28 PWM B Digital Comparator 1 Enable
 uint16 PWMB_DCOMP2_EN:1; // 29 PWM B Digital Comparator 2 Enable
 uint16 PWMB_DCOMP3_EN:1; // 30 PWM B Digital Comparator 3 Enable
 uint16 rsvd1:1; // 31 Reserved
 
 uint16 PWMA_ACOMP_A_EN:1; // 0 PWM A Analog Comparator A
 uint16 PWMA_ACOMP_B_EN:1; // 1 PWM A Analog Comparator B Enable
 uint16 PWMA_ACOMP_C_EN:1; // 2 PWM A Analog Comparator C Enable
 uint16 PWMA_ACOMP_D_EN:1; // 3 PWM A Analog Comparator D Enable
 uint16 PWMA_ACOMP_E_EN:1; // 4 PWM A Analog Comparator E Enable
 uint16 PWMA_ACOMP_F_EN:1; // 5 PWM A Analog Comparator F Enable
 uint16 PWMA_ACOMP_G_EN:1; // 6 PWM A Analog Comparator G Enable
 uint16 PWMA_FAULT0_EN:1; // 7 PWM A Fault[0] Enable
 uint16 PWMA_FAULT1_EN:1; // 8 PWM A Fault[1] Enable
 uint16 PWMA_FAULT2_EN:1; // 9 PWM A Fault[2] Enable
 uint16 PWMA_FAULT3_EN:1; // 10 PWM A Fault[2] Enable
 uint16 PWMA_DCOMP0_EN:1; // 11 PWM B Digital Comparator 0 Enable
 uint16 PWMA_DCOMP1_EN:1; // 12 PWM B Digital Comparator 1 Enable
 uint16 PWMA_DCOMP2_EN:1; // 13 PWM B Digital Comparator 2 Enable
 uint16 PWMA_DCOMP3_EN:1; // 14 PWM B Digital Comparator 3 Enable
 uint16 rsvd0:1; // 15 Reserved
 };
 union DPWM0FAULTDET_REG {
  Uint32          all;
  struct DPWM0FAULTDET_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 0 IDE Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM0IDEDET_BITS {     // Bits  Desciption
 uint16 rsvd0:16; // 31:7 Reserved
 
 uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 rsvd1:9; // 31:7 Reserved
 };
 union DPWM0IDEDET_REG {
  Uint32          all;
  struct DPWM0IDEDET_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 1 Current Limit Control Register
 //-----------------------------------------------------------------------------
 struct DPWM1CLIM_BITS {      // Bits  Description
 uint16 ANALOG_PCM_EN:1; // 16 Analog Peak Current Detection Enable
 uint16 rsvd0:15; // 31:17 Reserved
  
 uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Current Limit Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Current Limit Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Current Limit Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Current Limit Enable
 uint16 DIG_PCM_EN:1; // 11 Digital Peak Current Detection Enable
 uint16 DCOMP0_EN:1; // 12 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 13 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 14 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 15 Digital Comparator 3 Enable
 };
 union DPWM1CLIM_REG {
  Uint32          all;
  struct DPWM1CLIM_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 1 Fault AB Detction Register
 //-----------------------------------------------------------------------------
 struct DPWM1FLTABDET_BITS {    // Bits  Description
 uint16 rsvd0:16; // 31:15 Reserved 
  
  uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable 
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Enable
 uint16 DCOMP0_EN:1; // 11 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 12 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 13 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 14 Digital Comparator 3 Enable
 uint16 rsvd1:1; // 31:15 Reserved
 };
 union DPWM1FLTABDET_REG {
  Uint32         all;
  struct DPWM1FLTABDET_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 1 Fault Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM1FAULTDET_BITS {    // Bits  Description
 uint16 PWMB_ACOMP_A_EN:1; // 16 PWM B Analog Comparator A Enable
 uint16 PWMB_ACOMP_B_EN:1; // 17 PWM B Analog Comparator B Enable
 uint16 PWMB_ACOMP_C_EN:1; // 18 PWM B Analog Comparator C Enable
 uint16 PWMB_ACOMP_D_EN:1; // 19 PWM B Analog Comparator D Enable
 uint16 PWMB_ACOMP_E_EN:1; // 20 PWM B Analog Comparator E Enable
 uint16 PWMB_ACOMP_F_EN:1; // 21 PWM B Analog Comparator F Enable
 uint16 PWMB_ACOMP_G_EN:1; // 22 PWM B Analog Comparator G Enable
 uint16 PWMB_FAULT0_EN:1; // 23 PWM B Fault[0] Enable
 uint16 PWMB_FAULT1_EN:1; // 24 PWM B Fault[1] Enable
 uint16 PWMB_FAULT2_EN:1; // 25 PWM B Fault[2] Enable
 uint16 PWMB_FAULT3_EN:1; // 26 PWM B Fault[3] Enable
 uint16 PWMB_DCOMP0_EN:1; // 27 PWM B Digital Comparator 0 Enable
 uint16 PWMB_DCOMP1_EN:1; // 28 PWM B Digital Comparator 1 Enable
 uint16 PWMB_DCOMP2_EN:1; // 29 PWM B Digital Comparator 2 Enable
 uint16 PWMB_DCOMP3_EN:1; // 30 PWM B Digital Comparator 3 Enable
 uint16 rsvd1:1; // 31 Reserved 
 
 uint16 PWMA_ACOMP_A_EN:1; // 0 PWM A Analog Comparator A Enable 
 uint16 PWMA_ACOMP_B_EN:1; // 1 PWM A Analog Comparator B Enable
 uint16 PWMA_ACOMP_C_EN:1; // 2 PWM A Analog Comparator C Enable
 uint16 PWMA_ACOMP_D_EN:1; // 3 PWM A Analog Comparator D Enable
 uint16 PWMA_ACOMP_E_EN:1; // 4 PWM A Analog Comparator E Enable
 uint16 PWMA_ACOMP_F_EN:1; // 5 PWM A Analog Comparator F Enable
 uint16 PWMA_ACOMP_G_EN:1; // 6 PWM A Analog Comparator G Enable
 uint16 PWMA_FAULT0_EN:1; // 7 PWM A Fault[0] Enable
 uint16 PWMA_FAULT1_EN:1; // 8 PWM A Fault[1] Enable
 uint16 PWMA_FAULT2_EN:1; // 9 PWM A Fault[2] Enable
 uint16 PWMA_FAULT3_EN:1; // 10 PWM A Fault[3] Enable
 uint16 PWMA_DCOMP0_EN:1; // 11 PWM B Digital Comparator 0 Enable
 uint16 PWMA_DCOMP1_EN:1; // 12 PWM B Digital Comparator 1 Enable
 uint16 PWMA_DCOMP2_EN:1; // 13 PWM B Digital Comparator 2 Enable
 uint16 PWMA_DCOMP3_EN:1; // 14 PWM B Digital Comparator 3 Enable
 uint16 rsvd0:1; // 15 Reserved
  
 };
 union DPWM1FAULTDET_REG {
  Uint32          all;
  struct DPWM1FAULTDET_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 1 IDE Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM1IDEDET_BITS {     // Bits  Desciption
 uint16 rsvd0:16; // 31:7 Reserved 
  
   uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable 
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 rsvd1:9;
 };
 union DPWM1IDEDET_REG {
  Uint32          all;
  struct DPWM1IDEDET_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 2 Current Limit Control Register
 //-----------------------------------------------------------------------------
 struct DPWM2CLIM_BITS {      // Bits  Description
 uint16 ANALOG_PCM_EN:1; // 16 Analog Peak Current Detection Enable
 uint16 rsvd0:15; // 31:17 Reserved
  
 uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Current Limit Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Current Limit Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Current Limit Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Current Limit Enable
 uint16 DIG_PCM_EN:1; // 11 Digital Peak Current Detection Enable
 uint16 DCOMP0_EN:1; // 12 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 13 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 14 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 15 Digital Comparator 3 Enable
 };
 union DPWM2CLIM_REG {
  Uint32          all;
  struct DPWM2CLIM_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 2 Fault AB Detction Register
 //-----------------------------------------------------------------------------
 struct DPWM2FLTABDET_BITS {    // Bits  Description
 uint16 rsvd0:16; // 31:15 Reserved 
  
  uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable 
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Enable
 uint16 DCOMP0_EN:1; // 11 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 12 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 13 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 14 Digital Comparator 3 Enable
 uint16 rsvd1:1;
 };
 union DPWM2FLTABDET_REG {
  Uint32         all;
  struct DPWM2FLTABDET_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 2 Fault Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM2FAULTDET_BITS {    // Bits  Description
 uint16 PWMB_ACOMP_A_EN:1; // 16 PWM B Analog Comparator A Enable
 uint16 PWMB_ACOMP_B_EN:1; // 17 PWM B Analog Comparator B Enable
 uint16 PWMB_ACOMP_C_EN:1; // 18 PWM B Analog Comparator C Enable
 uint16 PWMB_ACOMP_D_EN:1; // 19 PWM B Analog Comparator D Enable
 uint16 PWMB_ACOMP_E_EN:1; // 20 PWM B Analog Comparator E Enable
 uint16 PWMB_ACOMP_F_EN:1; // 21 PWM B Analog Comparator F Enable
 uint16 PWMB_ACOMP_G_EN:1; // 22 PWM B Analog Comparator G Enable
 uint16 PWMB_FAULT0_EN:1; // 23 PWM B Fault[0] Enable
 uint16 PWMB_FAULT1_EN:1; // 24 PWM B Fault[1] Enable
 uint16 PWMB_FAULT2_EN:1; // 25 PWM B Fault[2] Enable
 uint16 PWMB_FAULT3_EN:1; // 25 PWM B Fault[3] Enable
 uint16 PWMB_DCOMP0_EN:1; // 27 PWM B Digital Comparator 0 Enable
 uint16 PWMB_DCOMP1_EN:1; // 28 PWM B Digital Comparator 1 Enable
 uint16 PWMB_DCOMP2_EN:1; // 29 PWM B Digital Comparator 2 Enable
 uint16 PWMB_DCOMP3_EN:1; // 30 PWM B Digital Comparator 3 Enable
 uint16 rsvd1:1; // 31 Reserved  

  uint16 PWMA_ACOMP_A_EN:1; // 0 PWM A Analog Comparator A Enable 
 uint16 PWMA_ACOMP_B_EN:1; // 1 PWM A Analog Comparator B Enable
 uint16 PWMA_ACOMP_C_EN:1; // 2 PWM A Analog Comparator C Enable
 uint16 PWMA_ACOMP_D_EN:1; // 3 PWM A Analog Comparator D Enable
 uint16 PWMA_ACOMP_E_EN:1; // 4 PWM A Analog Comparator E Enable
 uint16 PWMA_ACOMP_F_EN:1; // 5 PWM A Analog Comparator F Enable
 uint16 PWMA_ACOMP_G_EN:1; // 6 PWM A Analog Comparator G Enable
 uint16 PWMA_FAULT0_EN:1; // 7 PWM A Fault[0] Enable
 uint16 PWMA_FAULT1_EN:1; // 8 PWM A Fault[1] Enable
 uint16 PWMA_FAULT2_EN:1; // 9 PWM A Fault[2] Enable
 uint16 PWMA_FAULT3_EN:1; // 10 PWM A Fault[3] Enable
 uint16 PWMA_DCOMP0_EN:1; // 11 PWM B Digital Comparator 0 Enable
 uint16 PWMA_DCOMP1_EN:1; // 12 PWM B Digital Comparator 1 Enable
 uint16 PWMA_DCOMP2_EN:1; // 13 PWM B Digital Comparator 2 Enable
 uint16 PWMA_DCOMP3_EN:1; // 14 PWM B Digital Comparator 3 Enable
 uint16 rsvd0:1; // 15 Reserved
 
 };
 union DPWM2FAULTDET_REG {
  Uint32          all;
  struct DPWM2FAULTDET_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 2 IDE Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM2IDEDET_BITS {     // Bits  Desciption
 uint16 rsvd0:16; // 31:7 Reserved 
  
   uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 rsvd1:9;
 
 };
 union DPWM2IDEDET_REG {
  Uint32          all;
  struct DPWM2IDEDET_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 3 Current Limit Control Register
 //-----------------------------------------------------------------------------
 struct DPWM3CLIM_BITS {      // Bits  Description
 uint16 ANALOG_PCM_EN:1; // 16 Analog Peak Current Detection Enable
 uint16 rsvd0:15; // 31:17 Reserved
  
   uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Current Limit Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Current Limit Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Current Limit Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Current Limit Enable
 uint16 DIG_PCM_EN:1; // 11 Digital Peak Current Detection Enable
 uint16 DCOMP0_EN:1; // 12 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 13 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 14 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 15 Digital Comparator 3 Enable
 
 };
 union DPWM3CLIM_REG {
  Uint32          all;
  struct DPWM3CLIM_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 3 Fault AB Detction Register
 //-----------------------------------------------------------------------------
 struct DPWM3FLTABDET_BITS {    // Bits  Description
 uint16 rsvd0:16; // 31:15 Reserved
 
   uint16 ACOMP_A_EN:1; // 0 Analog Comparator A Enable
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 FAULT0_EN:1; // 7 External FAULT[0] Enable
 uint16 FAULT1_EN:1; // 8 External FAULT[1] Enable
 uint16 FAULT2_EN:1; // 9 External FAULT[2] Enable
 uint16 FAULT3_EN:1; // 10 External FAULT[3] Enable
 uint16 DCOMP0_EN:1; // 11 Digital Comparator 0 Enable
 uint16 DCOMP1_EN:1; // 12 Digital Comparator 1 Enable
 uint16 DCOMP2_EN:1; // 13 Digital Comparator 2 Enable
 uint16 DCOMP3_EN:1; // 14 Digital Comparator 3 Enable
 uint16 rsvd1:1;
 

 };
 union DPWM3FLTABDET_REG {
  Uint32         all;
  struct DPWM3FLTABDET_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // DPWM 3 Fault Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM3FAULTDET_BITS {    // Bits  Description
 uint16 PWMB_ACOMP_A_EN:1; // 16 PWM B Analog Comparator A Enable
 uint16 PWMB_ACOMP_B_EN:1; // 17 PWM B Analog Comparator B Enable
 uint16 PWMB_ACOMP_C_EN:1; // 18 PWM B Analog Comparator C Enable
 uint16 PWMB_ACOMP_D_EN:1; // 19 PWM B Analog Comparator D Enable
 uint16 PWMB_ACOMP_E_EN:1; // 20 PWM B Analog Comparator E Enable
 uint16 PWMB_ACOMP_F_EN:1; // 21 PWM B Analog Comparator F Enable
 uint16 PWMB_ACOMP_G_EN:1; // 22 PWM B Analog Comparator G Enable
 uint16 PWMB_FAULT0_EN:1; // 23 PWM B Fault[0] Enable
 uint16 PWMB_FAULT1_EN:1; // 24 PWM B Fault[1] Enable
 uint16 PWMB_FAULT2_EN:1; // 25 PWM B Fault[2] Enable
 uint16 PWMB_FAULT3_EN:1; // 26 PWM B Fault[3] Enable
 uint16 PWMB_DCOMP0_EN:1; // 27 PWM B Digital Comparator 0 Enable
 uint16 PWMB_DCOMP1_EN:1; // 28 PWM B Digital Comparator 1 Enable
 uint16 PWMB_DCOMP2_EN:1; // 29 PWM B Digital Comparator 2 Enable
 uint16 PWMB_DCOMP3_EN:1; // 30 PWM B Digital Comparator 3 Enable
 uint16 rsvd1:1; // 31 Reserved
 
 uint16 PWMA_ACOMP_A_EN:1; // 0 PWM A Analog Comparator A
 uint16 PWMA_ACOMP_B_EN:1; // 1 PWM A Analog Comparator B Enable
 uint16 PWMA_ACOMP_C_EN:1; // 2 PWM A Analog Comparator C Enable
 uint16 PWMA_ACOMP_D_EN:1; // 3 PWM A Analog Comparator D Enable
 uint16 PWMA_ACOMP_E_EN:1; // 4 PWM A Analog Comparator E Enable
 uint16 PWMA_ACOMP_F_EN:1; // 5 PWM A Analog Comparator F Enable
 uint16 PWMA_ACOMP_G_EN:1; // 6 PWM A Analog Comparator G Enable
 uint16 PWMA_FAULT0_EN:1; // 7 PWM A Fault[0] Enable
 uint16 PWMA_FAULT1_EN:1; // 8 PWM A Fault[1] Enable
 uint16 PWMA_FAULT2_EN:1; // 9 PWM A Fault[2] Enable
 uint16 PWMA_FAULT3_EN:1; // 10 PWM A Fault[3] Enable
 uint16 PWMA_DCOMP0_EN:1; // 11 PWM B Digital Comparator 0 Enable
 uint16 PWMA_DCOMP1_EN:1; // 12 PWM B Digital Comparator 1 Enable
 uint16 PWMA_DCOMP2_EN:1; // 13 PWM B Digital Comparator 2 Enable
 uint16 PWMA_DCOMP3_EN:1; // 14 PWM B Digital Comparator 3 Enable
 uint16 rsvd0:1; // 15 Reserved
 
 };
 union DPWM3FAULTDET_REG {
  Uint32         all;
  struct DPWM3FAULTDET_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DPWM 3 IDE Detection Register
 //-----------------------------------------------------------------------------
 struct DPWM3IDEDET_BITS {     // Bits  Desciption
 uint16 rsvd0:16; // 31:7 Reserved
 
 uint16 ACOMP_A_EN:1; // 0 Analog Comparator A
 uint16 ACOMP_B_EN:1; // 1 Analog Comparator B Enable
 uint16 ACOMP_C_EN:1; // 2 Analog Comparator C Enable
 uint16 ACOMP_D_EN:1; // 3 Analog Comparator D Enable
 uint16 ACOMP_E_EN:1; // 4 Analog Comparator E Enable
 uint16 ACOMP_F_EN:1; // 5 Analog Comparator F Enable
 uint16 ACOMP_G_EN:1; // 6 Analog Comparator G Enable
 uint16 rsvd1:9; // 31:7 Reserved

 };
 union DPWM3IDEDET_REG {
  Uint32          all;
  struct DPWM3IDEDET_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // HFO Fail Detect Register
 //-----------------------------------------------------------------------------
 struct HFOFAILDET_BITS {      // Bits  Description
  uint16 HFO_FAIL_THRESH2:2;    // 17:1  High Frequency Oscillator Fail Threshold
  uint16 rsvd0:14;         // 31:18 Reserved
  
  uint16 HFO_DETECT_EN:1;     // 0   High Frequency Oscillator Fail Detect Enable
  uint16 HFO_FAIL_THRESH1:15;    // 17:1  High Frequency Oscillator Fail Threshold
  
 };
 union HFOFAILDET_REG {
  Uint32          all;
  struct HFOFAILDET_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // LFO Fail Detect Register
 //-----------------------------------------------------------------------------
 struct LFOFAILDET_BITS {      // Bits  Description
 uint16 rsvd0:16; // 31:6 Reserved
 
 uint16 LFO_DETECT_EN:1; // 0 Low Frequency Oscillator Fail Detect
 uint16 LFO_FAIL_INT_EN:1; // 1 Low Frequency Oscillator Fail Interrupt Enable
 uint16 LFO_FAIL_THRESH:5; // 6:2 Low Frequency Oscillator Fail Threshold
 uint16 rsvd1:9; // 31:6 Reserved
  
 };
 union LFOFAILDET_REG {
  Uint32          all;
  struct LFOFAILDET_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // IDE Control Register
 //-----------------------------------------------------------------------------
 struct IDECTRL_BITS {       // Bits  Description
 uint16 DCM_LIMIT_L:8; // 23:16 DCM Lower Hysteresis 
 uint16 DCM_LIMIT_H:8; // 31:24 DCM Upper Hysteresis 
 
 uint16 IDE_KD:13; // 12:0 IDE KD Factor used to calculate 
 uint16 DCM_INT_EN:1; // 13 DCM Interrupt Enable 
 uint16 rsvd0:2; // 15:14 Reserved 
 

 };
 union IDECTRL_REG {
  Uint32          all;
  struct IDECTRL_BITS   bits;
 };

 //=============================================================================
 // Fault Mux Module Register File
 //=============================================================================
// struct FAULT_MUX_REGS {
  extern union ACOMPCTRL0_REG    ACOMPCTRL0;    // Analog Comparator Control 0 Register
  extern union ACOMPCTRL1_REG    ACOMPCTRL1;    // Analog Comparator Control 1 Register
  extern union ACOMPCTRL2_REG    ACOMPCTRL2;    // Analog Comparator Control 2 Register
  extern union ACOMPCTRL3_REG    ACOMPCTRL3;    // Analog Comparator Control 3 Register
  extern union EXTFAULTCTRL_REG   EXTFAULTCTRL;   // External Fault Control Register
  extern union FAULTMUXINTSTAT_REG  FAULTMUXINTSTAT; // Fault Mux Interrupt Status Register
  extern union FAULTMUXRAWSTAT_REG  FAULTMUXRAWSTAT; // Fault Mux Raw Status Register
  extern union COMPRAMP0_REG     COMPRAMP0;    // Comparator Ramp Control 0 Register
  extern union DCOMPCTRL0_REG    DCOMPCTRL0;    // Digital Comparator Control 0 Register
  extern union DCOMPCTRL1_REG    DCOMPCTRL1;    // Digital Comparator Control 1 Register
  extern union DCOMPCTRL2_REG    DCOMPCTRL2;    // Digital Comparator Control 2 Register
  extern union DCOMPCTRL3_REG    DCOMPCTRL3;    // Digital Comparator Control 3 Register
  extern union DCOMPCNTSTAT_REG   DCOMPCNTSTAT;   // Digital Comparator Counter Status Register
  extern union DPWM0CLIM_REG     DPWM0CLIM;    // DPWM 0 Current Limit Control Register
  extern union DPWM0FLTABDET_REG   DPWM0FLTABDET;  // DPWM 0 Fault AB Detection Register
  extern union DPWM0FAULTDET_REG   DPWM0FAULTDET;  // DPWM 0 Fault Detection Register
  extern union DPWM0IDEDET_REG    DPWM0IDEDET;   // DPWM 0 IDE Detection Register
  extern union DPWM1CLIM_REG     DPWM1CLIM;    // DPWM 1 Current Limit Control Register
  extern union DPWM1FLTABDET_REG   DPWM1FLTABDET;  // DPWM 1 Fault AB Detection Register
  extern union DPWM1FAULTDET_REG   DPWM1FAULTDET;  // DPWM 1 Fault Detection Register
  extern union DPWM1IDEDET_REG    DPWM1IDEDET;   // DPWM 1 IDE Detection Register
  extern union DPWM2CLIM_REG     DPWM2CLIM;    // DPWM 2 Current Limit Control Register
  extern union DPWM2FLTABDET_REG   DPWM2FLTABDET;  // DPWM 2 Fault AB Detection Register
  extern union DPWM2FAULTDET_REG   DPWM2FAULTDET;  // DPWM 2 Fault Detection Register
  extern union DPWM2IDEDET_REG    DPWM2IDEDET;   // DPWM 2 IDE Detection Register
  extern union DPWM3CLIM_REG     DPWM3CLIM;    // DPWM 3 Current Limit Control Register
  extern union DPWM3FLTABDET_REG   DPWM3FLTABDET;  // DPWM 3 Fault AB Detection Register
  extern union DPWM3FAULTDET_REG   DPWM3FAULTDET;  // DPWM 3 Fault Detection Register
  extern union DPWM3IDEDET_REG    DPWM3IDEDET;   // DPWM 3 IDE Detection Register
  extern union HFOFAILDET_REG    HFOFAILDET;    // High Frequency Oscillator Fail Detect Register
  extern union LFOFAILDET_REG    LFOFAILDET;    // Low Frequency Oscillator Fail Detect Register
  extern union IDECTRL_REG IDECTRL;     // IDE Control Register
// };
 
 //-----------------------------------------------------------------------------
 // Fault Mux Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct FAULT_MUX_REGS FaultMuxRegs;
//*******//



//#endif // end of CYCLONE_LOOP_MUX_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
//
// FILE:  cyclone_fe_ctrl.h
//
// TITLE: Cyclone Front End Control Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2009 | CMF | Initial Revision
//    |       |   | 
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_FE_CTRL_H
//#define CYCLONE_FE_CTRL_H


//#endif
//*******//
 //=============================================================================
 // Front End Control Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // Ramp Control Register
 //-----------------------------------------------------------------------------
 struct RAMPCTRL_BITS {      // bits  description
 uint16 SYNC_FET_RAMP_START:14; // 29:16 SyncFET Ramp Start Value 
 uint16 rsvd1:2; // 31:30 Reserved  
 
 uint16 RAMP_EN:1; // 0 Ramp 
 uint16 FIRMWARE_START:1; // 1 Start ramp with firmware 
 uint16 CONTROL_EN:1; // 2 Sync ramp to Control assertion 
 uint16 SLAVE_DELAY_EN:1; // 3 Sync ramp to Master Delay Complete 
 uint16 SLAVE_COMP_EN:1; // 4 Sync ramp to Master Complete 
 uint16 MASTER_SEL:2; // 6:5 Master Ramp I/F Select 
 uint16 SYNC_FET_EN:1; // 7 Enable use of Ramp for SyncFET 
 uint16 PCM_START_SEL:1; // 8 Peak Current Mode Start Select 
 uint16 PREBIAS_INT_EN:1; // 9 Pre-Bias Complete Interrupt Enable 
 uint16 RAMP_DLY_INT_EN:1; // 10 Ramp Delay Complete Interrupt Enable 
 uint16 RAMP_COMP_INT_EN:1; // 11 Ramp Complete Interrupt Enable 
 uint16 RAMP_SAT_EN:1; // 12 Ramp Saturation Enable 
 uint16 ANALOG_PCM_INT_EN:1; // 13 Analog Peak Current Interrupt Enable 
 uint16 rsvd0:2; // 15:14 Reserved 
 }; 
 union RAMPCTRL_REG {
  Uint32          all;
  struct RAMPCTRL_BITS   bits;
 };
#define bRAMP_EN            0x0001L  // 0 Ramp 
#define bFIRMWARE_START		0x0002L 
 
 //-----------------------------------------------------------------------------
 // Ramp Status Register
 //-----------------------------------------------------------------------------
 struct RAMPSTAT_BITS {      // bits  description
 uint16 rsvd0:16; // 31:13 Reserved 
 
 uint16 PREBIAS_STATUS:1; // 0 Prebias 
 uint16 RAMP_DLY_STATUS:1; // 1 Ramp Delay Indication 
 uint16 RAMP_COMP_STATUS:1; // 2 Ramp Complete Indication 
 uint16 RAMP_BUSY:1; // 3 Ramp Busy Indication 
 uint16 PREBIAS_BUSY:1; // 4 Prebias Busy Indication 
 uint16 EADC_EOC:1; // 5 EADC End of Conversion 
 uint16 EADC_SAT_LOW:1; // 6 EADC Saturation Low 
 uint16 EADC_SAT_HIGH:1; // 7 EADC Saturation High 
 uint16 PREBIAS_INT_STATUS:1; // 8 Prebias Complete Latched Status 
 uint16 RAMP_DLY_INT_STATUS:1; // 9 Ramp Delay Complete Latched Status 
 uint16 RAMP_COMP_INT_STATUS:1; // 10 Ramp Complete Latched Status 
 uint16 ANALOG_PCM_INT_STATUS:1; // 11 Analog Peak Current Latched Status 
 uint16 EADC_DONE_RAW:1; // 12 EADC Conversion Raw Status 
 uint16 rsvd1:3; // 31:13 Reserved 

 };
 union RAMPSTAT_REG {
  Uint32          all;
  struct RAMPSTAT_BITS   bits;
 };
#define bRAMP_BUSY 0x008L  // 3 
 //-----------------------------------------------------------------------------
 // Ramp Cycle Register
 //-----------------------------------------------------------------------------
 struct RAMPCYCLE_BITS {      // bits  Description
  BYTE rsvd1:8;         // 31:24 Reserved
	
  uint16 DELAY_CYCLES:16;     // 23:8  Number of Delay Cycles before ramp
	
	BYTE SWITCH_CYC_PER_STEP:7;  // 6:0  Number of switching cycles per step
  BYTE rsvd0:1;         // 7   Reserved
  
 };
 union RAMPCYCLE_REG {
  Uint32          all;
  struct RAMPCYCLE_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // EADC DAC Value Register
 //-----------------------------------------------------------------------------
 struct EADCDAC_BITS {       // Bits  Description
 uint16 rsvd1:16; // 31:16 Reserved  
 uint16 DAC_VALUE:14; // 13:0 DAC 
 uint16 rsvd0:1; // 14 Reserved 
 uint16 DAC_DITHER_EN:1; // 15 DAC Dithering Enable 
 };
 union EADCDAC_REG {
  Uint32         all;
  struct EADCDAC_BITS   bits;
 };
#define bDAC_DITHER_EN 0x008000L  // 15
 //-----------------------------------------------------------------------------
 // Ramp DAC Ending Value Register
 //-----------------------------------------------------------------------------
 struct RAMPDACEND_BITS {     // Bits  Description
  uint16 rsvd1:16;        // 31:14 Reserved
  uint16 RAMP_DAC_VALUE:14;    // 13:0  Ramp Ending DAC Value
  uint16 rsvd2:2;  
 };
 union RAMPDACEND_REG {
  Uint32         all;
  struct RAMPDACEND_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // DAC Step Register
 //-----------------------------------------------------------------------------
 struct DACSTEP_BITS {      // Bits  Description
  uint16 DAC_STEP2:2;
  uint16 rsvd0:14;        // 31:18 Reserved
  uint16 DAC_STEP1:16;      // 17:0  DAC Step
 };
 union DACSTEP_REG {
  Uint32         all;
  struct DACSTEP_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // DAC Saturation Step Register 
 //-----------------------------------------------------------------------------
 struct DACSATSTEP_BITS {     // Bits  Description 
  uint16 rsvd0:16;        // 31:14 Reserved
  uint16 DAC_SAT_STEP:14;    // 13:0  DAC SaturationStep
  uint16 rsvd2:2;
 };
 union DACSATSTEP_REG {
  Uint32         all;
  struct DACSATSTEP_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // EADC Trim Register
 //-----------------------------------------------------------------------------
 struct EADCTRIM_BITS {     // Bits  Description 
 uint16 GAIN2_TRIM:6; // 21:16 Gain2 Trim
 uint16 rsvd2:2; // 23:22 Reserved
 uint16 GAIN3_TRIM:6; // 29:24 Gain3 Trim
 uint16 rsvd3:2; // 31:30 Reserved
 
   uint16 GAIN0_TRIM:6; // 5:0 Gain0 Trim
 uint16 rsvd0:2; // 7:6 Reserved
 uint16 GAIN1_TRIM:6; // 13:8 Gain1 Trim
 uint16 rsvd1:2; // 15:14 Reserved
 

 };
 union EADCTRIM_REG {
  Uint32         all;
  struct EADCTRIM_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // EADC Control Register 
 //-----------------------------------------------------------------------------
 struct EADCCTRL_BITS {      // Bits  Description 
 uint16 SCFE_CNT_INIT:4; // 19:16 Initial Value for Switched Cap Front End Counter 
 uint16 SCFE_CNT_RST:1; // 20 Switched Cap Front End Counter Reset 
 uint16 FRAME_SYNC_EN:1; // 21 Frame Sync Enable 
 uint16 SAMP_TRIG_SCALE:4; // 25:22 Sample Trigger Scale 
 uint16 EN_HYST_LOW:1; // 26 Decrease comparator trip point 
 uint16 EN_HYST_HIGH:1; // 27 Increase comparator trip point 
 uint16 D2S_COMP_EN:1; // 28 Analog Front End Ramp Comparator Enable 
 uint16 rsvd0:3; // 31:29 Reserved 
 
 uint16 EADC_ENA:1; // 0 EADC 
 uint16 SCFE_ENA:1; // 1 SCFE Enable 
 uint16 SCFE_CLK_DIV_2:1; // 2 Front End sampling select 
 uint16 SCFE_GAIN_FILTER_SEL:1; // 3 SCFE Gain Filter Enable 
 uint16 AFE_GAIN:2; // 5:4 AFE Gain Setting 
 uint16 EADC_MODE:3; // 8:6 EADC Mode Select 
 uint16 AVG_MODE_SEL:2; // 10:9 Averaging Mode Select 
 uint16 AVG_SPATIAL_EN:1; // 11 Averaging Spatial Enable 
 uint16 AVG_WEIGHT_EN:1; // 12 Averaging Weight Enable 
 uint16 AUTO_GAIN_SHIFT_EN:1; // 13 Auto Gain Shifting Enable 
 uint16 AUTO_GAIN_SHIFT_MODE:1; // 14 Auto Gain Shifting Mode Select 
 uint16 EADC_INV:1; // 15 Invert EADC Data 
 };
 union EADCCTRL_REG {
  Uint32         all;
  struct EADCCTRL_BITS  bits;
 };
  
 //-----------------------------------------------------------------------------
 // Analog Control Register
 //-----------------------------------------------------------------------------
 struct ACTRL_BITS {       // Bits  Description 
 uint16 rsvd1:16; // 31:16 Reserved 
 
 uint16 ANALOG_ENA:1; // 0 Analog Front 
 uint16 EXT_V_SE_SEL:1; // 1 Selects V_SE 
 uint16 INT_REF_SEL:1; // 2 Internal Reference Select 
 uint16 EADC_OFFSET_CAL:1; // 3 EADC Offset Calibration 
 uint16 EADC_GAIN_CAL:1; // 4 EADC Gain Calibration 
 uint16 rsvd0:3; // 7:5 Reserved 
 uint16 EADC_REF_EN:1; // 8 EADC Reference Enable 
 uint16 EADC_REF_RESET:1; // 9 EADC Reference Reset 
 uint16 EADC_REF_TRIM:6; // 15:10 EADC Reference Trim 
 };
 union ACTRL_REG {
  Uint32         all;
  struct ACTRL_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Pre-Bias Control Register 0 
 //-----------------------------------------------------------------------------
 struct PREBIASCTRL0_BITS {    // Bits  Description 
 uint16 PRE_BIAS_EN:1; // 16 Prebias Enable 
 uint16 PRE_BIAS_POL:1; // 17 Prebias polarity 
 uint16 rsvd0:14; // 31:18 Reserved 
 
 uint16 PRE_BIAS_LIMIT:8; // 7:0 Prebias 
 uint16 PRE_BIAS_RANGE:8; // 15:8 Prebias Range

 };
 union PREBIASCTRL0_REG {
  Uint32          all;
  struct PREBIASCTRL0_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Pre-Bias Control Register 1 
 //-----------------------------------------------------------------------------
 struct PREBIASCTRL1_BITS {    // Bits  Description 
 uint16 SAMPLES_PER_ADJ:8; // 23:16 Samples per adjustment 
 uint16 rsvd1:8; // 31:24 Reserved 
 
 uint16 MAX_DAC_ADJ:14; // 13:0 Maximum DAC 
 uint16 rsvd0:2; // 15:14 Reserved 
 };
 union PREBIASCTRL1_REG {
  Uint32          all;
  struct PREBIASCTRL1_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // SAR Control Register
 //-----------------------------------------------------------------------------
 struct SARCTRL_BITS {       // Bits  Description 
 uint16 EADC_WINDOW_1:8; // 23:16 EADC Window 1 Setting
 uint16 EADC_WINDOW_2:8; // 31:24 EADC Window 2 Setting
 
 uint16 SAR_RESOLUTION:2; // 1:0 SAR Final Resolution
 uint16 rsvd0:6; // 7:2 Reserved
 uint16 SAR_RANGE:8; // 15:8 SAR Range Setting
 };
 union SARCTRL_REG {
  Uint32          all;
  struct SARCTRL_BITS    bits;
 };
 
 //-----------------------------------------------------------------------------
 // SAR Timing Register
 //-----------------------------------------------------------------------------
 struct SARTIMING_BITS {      // Bits  Description
 uint16 rsvd2:16; // 31:11 Reserved 
 
 uint16 SAR_TIMING_LOWER:3; // 2:0 SAR Timing setting for lower 
 uint16 rsvd0:1; // 3 Reserved 
 uint16 SAR_TIMING_MID:3; // 6:4 SAR Timing setting for mid bits 
 uint16 rsvd1:1; // 7 Reserved 
 uint16 SAR_TIMING_UPPER:3; // 10:8 SAR Timing setting for upper bits 
 uint16 rsvd3:5; // 31:11 Reserved 

 };
 union SARTIMING_REG {
  Uint32          all;
  struct SARTIMING_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // EADC Value Register
 //-----------------------------------------------------------------------------
 struct EADCVALUE_BITS {      // Bits  Description 
 uint16 ABS_VALUE:10; // 25:16 Absolute Value 
 uint16 rsvd1:6; // 31:26 Reserved 
 
  int16 ERROR_VALUE:9;      // 8:0  Error Value
	 uint16 rsvd0:5; // 13:9 
 uint16 EADC_SAT_LOW:1; // 14 Saturation Low Indicator 
 uint16 EADC_SAT_HIGH:1; // 15 Saturation High Indicator 
 };
 union EADCVALUE_REG {
  Uint32         all;
  struct EADCVALUE_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // EADC Raw Value Register
 //-----------------------------------------------------------------------------
 struct EADCRAWVALUE_BITS {    // Bits  Description
  uint16 rsvd0:16;        // 31:9  Reserved
  int16 RAW_ERROR_VALUE:9;    // 8:0  Raw Error Value
  uint16 rsvd2:7;
 };
 union EADCRAWVALUE_REG {
  Uint32          all;
  struct EADCRAWVALUE_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // DAC Status Register 
 //-----------------------------------------------------------------------------
 struct DACSTAT_BITS {       // Bits  Description 
  uint16 rsvd0:16;        // 31:10 Reserved
  uint16 DAC_VALUE:10;      // 9:0  Current DAC Value
  uint16 rsvd2:6;
 };
 union DACSTAT_REG {
  Uint32         all;
  struct DACSTAT_BITS  bits;
 };

 //=============================================================================
 // Front End Control Module Register File
 //=============================================================================
// struct FE_CTRL_REGS {//FeCtrl0Regs, FeCtrl1Regs, FeCtrl2Regs
  extern union RAMPCTRL_REG    RAMPCTRL0;     // Ramp Control Register
			//FeCtrl0Regs.RAMPCTRL.bit.SYNC_FET_RAMP_START  
			//FeCtrl0Regs.RAMPCTRL.all
  extern union RAMPSTAT_REG    RAMPSTAT0;     // Ramp Status Register
  extern union RAMPCYCLE_REG    RAMPCYCLE0;    // Ramp Cycle Register
  extern union EADCDAC_REG     EADCDAC0,EADCDAC1,EADCDAC2;     // EADC DAC Value Register
  extern union RAMPDACEND_REG   RAMPDACEND0;    // Ramp DAC Ending Value Register
  extern union DACSTEP_REG     DACSTEP0;     // DAC Step Register
  extern union DACSATSTEP_REG   DACSATSTEP0;    // DAC Saturation Step Register
  extern union EADCTRIM_REG    EADCTRIM0;     // EADC Trim Register
  extern union EADCCTRL_REG    EADCCTRL0,EADCCTRL1,EADCCTRL2;     // EADC Control Register
  extern union EADCCTRL_REG    EDACCTRL0,EDACCTRL1,EDACCTRL2;
  extern union EADCCTRL_REG    EADCCTRL0,EADCCTRL1,EADCCTRL2;
  extern union ACTRL_REG      ACTRL;      // Analog Control Register
  extern union PREBIASCTRL0_REG  PREBIASCTRL0;   // Pre-bias Control Register 0
  extern union PREBIASCTRL1_REG  PREBIASCTRL1;   // Pre-bias Control Register 1
  extern union SARCTRL_REG     SARCTRL0;     // SAR Control Register
  extern union SARTIMING_REG    SARTIMING0;    // SAR Timing Register
  extern union EADCVALUE_REG    EADCVALUE0;    // EADC Value Register
  extern union EADCRAWVALUE_REG  EADCRAWVALUE0;   // EADC Raw Value Register
  extern union DACSTAT_REG     DACSTAT0;     // Current DAC Value Register
// };
 
 //-----------------------------------------------------------------------------
 // ADC Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct FE_CTRL_REGS FeCtrl0Regs;
 //extern volatile struct FE_CTRL_REGS FeCtrl1Regs;
 //extern volatile struct FE_CTRL_REGS FeCtrl2Regs;
//*******//



//#endif // end of CYCLONE_FE_CTRL_H definition

//===========================================================================
// End of file
//===========================================================================
//cyclone_filter.h+cyclone_gio.h+cyclone_loop_mux.h+cyclone_misc_analog.h+cyclone_mmc.h tst6

//###############################################################################
//
// FILE:  cyclone_filter.h
//
// TITLE: Cyclone Filter Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2009 | CMF | Initial Revision
//    |       |   | 
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_FILTER_H
//#define CYCLONE_FILTER_H


//#endif
//*******//
 //=============================================================================
 // Filter Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // Filter Status Register
 //-----------------------------------------------------------------------------
 struct FILTERSTATUS_BITS {    // bits  description
 uint16 rsvd0:16; // 31:5 Reserved 
 
 uint16 KI_YN_HIGH_CLAMP:1; // 0 KI Feedback Clamp High 
 uint16 KI_YN_LOW_CLAMP:1; // 1 KI Feedback Clamp Low Indication 
 uint16 YN_HIGH_CLAMP:1; // 2 Output Clamp High Indication 
 uint16 YN_LOW_CLAMP:1; // 3 Output Clamp Low Indication 
 uint16 FILTER_BUSY:1; // 4 Filter Busy Indication 
 uint16 rsvd1:11; // 31:5 Reserved 

 }; 
 union FILTERSTATUS_REG {
  struct FILTERSTATUS_BITS   bits;
  Uint32         all; 
 };
 
 //-----------------------------------------------------------------------------
 // Filter Control Register
 //-----------------------------------------------------------------------------
 struct FILTERCTRL_BITS {     // bits  description
 uint16 rsvd0:16; // 31:16 Reserved 
 
 uint16 FILTER_EN:1; // 0 Filter 
 uint16 USE_CPU_SAMPLE:1; // 1 Use CPU Sample 
 uint16 FORCE_START:1; // 2 Software Filter Calculation 
 uint16 KI_OFF:1; // 3 Turns off KI Branch 
 uint16 KD_OFF:1; // 4 Turns off KD Branch 
 uint16 KP_OFF:1; // 5 Turns off KP Branch 
 uint16 KI_STALL:1; // 6 Stalls KI Branch 
 uint16 KD_STALL:1; // 7 Stalls KD Branch 
 uint16 NL_MODE:1; // 8 Selects Non-linear Mode 
 uint16 YN_SCALE:3;//11:9
 uint16 OUTPUT_MULT_SEL:2; // 13:12 Output Multiplicand Select int16 OUTPUT_SCALE:3; // 11:9 Output Scaling 
 uint16 PERIOD_MULT_SEL:1; // 14 Period Multiplier Select 
 uint16 KI_ADDER_MODE:1; // 15 KI Adder Mode Select 
 };
 union FILTERCTRL_REG {
  struct FILTERCTRL_BITS   bits;
  Uint32         all;
 };
 
 //-----------------------------------------------------------------------------
 // CPU XN Register 
 //-----------------------------------------------------------------------------
 struct CPUXN_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:9  Reserved
  
  int16 CPU_SAMPLE:9;      // 8:0  CPU Sample
  uint16 rsvd2:7;
 };
 union CPUXN_REG {
  struct CPUXN_BITS    bits;
  Uint32         all;
 };

 //-----------------------------------------------------------------------------
 // Filter XN Read Register
 //-----------------------------------------------------------------------------
 struct FILTERXNREAD_BITS {      // bits  description
 int16 XN_M1:9; // 24:16 XN_M1 Value
 uint16 rsvd1:7; // 31:25 Reserved
 
   int16 XN:9; // 8:0 XN Value
 uint16 rsvd0:7; // 15:9 Reserved
 };
 union FILTERXNREAD_REG {
  struct FILTERXNREAD_BITS bits;
  Uint32          all;
 };
 
 //-----------------------------------------------------------------------------
 // Filter KI_YN Read Register
 //-----------------------------------------------------------------------------
 struct FILTERKIYNREAD_BITS {     // bits  description
  int16 KI_YN2:8;   
  uint16 rsvd0:8;         // 31:24 Reserved
  
  int16 KI_YN1:16;        // 23:0  KI_YN Value
 };
 union FILTERKIYNREAD_REG {
  struct FILTERKIYNREAD_BITS bits;
  Uint32         all;  
 };  
  
 //-----------------------------------------------------------------------------
 // Filter KD_YN Read Register
 //-----------------------------------------------------------------------------
 struct FILTERKDYNREAD_BITS {     // bits  description
  int16 KD_YN2:8;
  uint16 rsvd0:8;          // 31:24 Reserved
  
  int16 KD_YN1:16;          // 23:0  KD_YN Value
 };
 union FILTERKDYNREAD_REG {
  struct FILTERKDYNREAD_BITS bits;
  Uint32         all; 
 };  

 //-----------------------------------------------------------------------------
 // Filter YN Read Register
 //-----------------------------------------------------------------------------
 struct FILTERYNREAD_BITS {      // bits  description
  int16 YN2:8; 
  uint16 rsvd0:8;          // 31:24 Reserved
  
  int16 YN1:16;           // 23:0  YN Value
 };
 union FILTERYNREAD_REG {
  struct FILTERYNREAD_BITS  bits;
  Uint32         all; 
 }; 

 //-----------------------------------------------------------------------------
 // Coefficient Configuration Register
 //-----------------------------------------------------------------------------
 struct COEFCONFIG_BITS {     // bits  description
 uint16 BIN4_CONFIG:3; // 18:16 Bin4 Configuration 
 uint16 BIN4_ALPHA:1; // 19 Bin4 Alpha Configuration 
 uint16 BIN5_CONFIG:3; // 22:20 Bin5 Configuration 
 uint16 BIN5_ALPHA:1; // 23 Bin5 Alpha Configuration 
 uint16 BIN6_CONFIG:3; // 26:24 Bin6 Configuration 
 uint16 BIN6_ALPHA:1; // 27 Bin6 Alpha Configuration 
 uint16 rsvd0:4; // 31:28 Reserved 
 
 uint16 BIN0_CONFIG:3; // 2:0 Bin0 
 uint16 BIN0_ALPHA:1; // 3 Bin0 Alpha Configuration 
 uint16 BIN1_CONFIG:3; // 6:4 Bin1 Configuration 
 uint16 BIN1_ALPHA:1; // 7 Bin1 Alpha Configuration 
 uint16 BIN2_CONFIG:3; // 10:8 Bin2 Configuration 
 uint16 BIN2_ALPHA:1; // 11 Bin2 Alpha Configuration 
 uint16 BIN3_CONFIG:3; // 14:12 Bin3 Configuration 
 uint16 BIN3_ALPHA:1; // 15 Bin3 Alpha Configuration 
 

 };
 union COEFCONFIG_REG {
  struct COEFCONFIG_BITS bits;
  Uint32          all; 
 };
 
 //-----------------------------------------------------------------------------
 // Filter KP Coefficient 0 Register
 //-----------------------------------------------------------------------------
 struct FILTERKPCOEF0_BITS {    // bits  description
  int16 KP_COEF_1:16;       // 31:16 KP Coefficient 1
  
  int16 KP_COEF_0:16;       // 15:0  KP Coefficient 0
 };
 union FILTERKPCOEF0_REG {
  struct FILTERKPCOEF0_BITS bits;
  Uint32          all; 
 };
 
 //-----------------------------------------------------------------------------
 // Filter KP Coefficient 1 Register
 //-----------------------------------------------------------------------------
 struct FILTERKPCOEF1_BITS {    // bits  description
  int16 rsvd0:16;         // 31:16 Reserved
  
  int16 KP_COEF_2:16;       // 15:0  KP Coefficient 2
 };
 union FILTERKPCOEF1_REG {
  struct FILTERKPCOEF1_BITS bits;
  Uint32          all;
 };
 
 //-----------------------------------------------------------------------------
 // Filter KI Coefficient 0 Register
 //-----------------------------------------------------------------------------
 struct FILTERKICOEF0_BITS {    // bits  description
  int16 KI_COEF_1:16;       // 31:16 KI Coefficient 1
  
  int16 KI_COEF_0:16;       // 15:0  KI Coefficient 0
 };
 union FILTERKICOEF0_REG {  
  struct FILTERKICOEF0_BITS bits;
	Uint32          all;
 };
 
 //-----------------------------------------------------------------------------
 // Filter KI Coefficient 1 Register
 //-----------------------------------------------------------------------------
 struct FILTERKICOEF1_BITS {    // bits  description
  int16 KI_COEF_3:16;       // 31:16 KI Coefficient 3
  
  int16 KI_COEF_2:16;       // 15:0  KI Coefficient 2
 };
 union FILTERKICOEF1_REG {
  struct FILTERKICOEF1_BITS bits;
  Uint32          all;
 }; 

 //-----------------------------------------------------------------------------
 // Filter KD Coefficient 0 Register
 //-----------------------------------------------------------------------------
 struct FILTERKDCOEF0_BITS {    // bits  description
  int16 KD_COEF_1:16;       // 31:16 KD Coefficient 1
  
  int16 KD_COEF_0:16;       // 15:0  KD Coefficient 0
 };
 union FILTERKDCOEF0_REG {
  struct FILTERKDCOEF0_BITS bits;
  Uint32          all;
 }; 

 //-----------------------------------------------------------------------------
 // Filter KD Coefficient 1 Register
 //-----------------------------------------------------------------------------
 struct FILTERKDCOEF1_BITS {   // bits  description
  uint16 rsvd0:16;       // 31:16 Reserved
  
  int16 KD_COEF_2:16;     // 15:0  KD Coefficient 2
 };
 union FILTERKDCOEF1_REG {
  struct FILTERKDCOEF1_BITS bits;
  Uint32          all; 
 }; 
 
 //-----------------------------------------------------------------------------
 // Filter KD Alpha Register
 //-----------------------------------------------------------------------------
 struct FILTERKDALPHA_BITS {   // bits  description 
  int16 KD_ALPHA_1:16;     // 24:16 KD Alpha 1 Value
  //uint16 rsvd1:7;        // 31:25 Reserved
  
  int16 KD_ALPHA_0:9;     // 8:0  KD Alpha 0 Value
  uint16 rsvd0:7;        // 15:9  Reserved
  
 };
 union FILTERKDALPHA_REG {
  struct FILTERKDALPHA_BITS bits;
  Uint32          all;  
 };
 
 //-----------------------------------------------------------------------------
 // Filter Non-Linear Limit Register 0
 //-----------------------------------------------------------------------------
 struct FILTERNL0_BITS {     // bits  description 
  int16 LIMIT1:9;       // 24:16 Non-Linear Limit 1 Value
  uint16 rsvd1:7;        // 31:25 Reserved
  
  
  int16 LIMIT0:9;       // 8:0  Non-Linear Limit 0 Value
  uint16 rsvd0:7;        // 15:9  Reserved
 };
 union FILTERNL0_REG {
  struct FILTERNL0_BITS   bits;
  Uint32          all; 
 }; 

 //-----------------------------------------------------------------------------
 // Filter Non-Linear Limit Register 1
 //-----------------------------------------------------------------------------
 struct FILTERNL1_BITS {     // bits  description 
  int16 LIMIT3:9;       // 24:16 Non-Linear Limit 3 Value
  uint16 rsvd1:7;        // 31:25 Reserved
	
	int16 LIMIT2:9;       // 8:0  Non-Linear Limit 2 Value
  uint16 rsvd0:7;        // 15:9  Reserved
  
 };
 union FILTERNL1_REG {
  struct FILTERNL1_BITS bits;
  Uint32          all; 
 };  

 //-----------------------------------------------------------------------------
 // Filter Non-Linear Limit Register 2
 //-----------------------------------------------------------------------------
 struct FILTERNL2_BITS {     // bits  description 
	int16 LIMIT5:9;       // 24:16 Non-Linear Limit 5 Value
  uint16 rsvd1:7;        // 31:25 Reserved
  
  int16 LIMIT4:9;       // 8:0  Non-Linear Limit 4 Value
	uint16 rsvd0:7;        // 15:9  Reserved
 };
 union FILTERNL2_REG {
  struct FILTERNL2_BITS bits;
  Uint32         all;
 };    

 //-----------------------------------------------------------------------------
 // Filter KI Feedback Clamp High Register
 //-----------------------------------------------------------------------------
 struct FILTERKICLPHI_BITS {    // bits  description 
  int16 KI_CLAMP_HIGH2:8;     // 23:0  KI Clamp High
  uint16 rsvd0:8;         // 31:24 Reserved
  
  int16 KI_CLAMP_HIGH1:16;     // 23:0  KI Clamp High
 };
 union FILTERKICLPHI_REG {
  struct FILTERKICLPHI_BITS bits;
  Uint32          all;
 };

 //-----------------------------------------------------------------------------
 // Filter KI Feedback Clamp Low Register
 //-----------------------------------------------------------------------------
 struct FILTERKICLPLO_BITS {   // bits  description 
  int16 KI_CLAMP_LOW2:8;    // 23:0  KI Clamp Low
  uint16 rsvd0:8;        // 31:24 Reserved
  
  int16 KI_CLAMP_LOW1:16;    // 23:0  KI Clamp Low
 };
 union FILTERKICLPLO_REG {
  struct FILTERKICLPLO_BITS bits;
  Uint32          all;
 };

 //-----------------------------------------------------------------------------
 // Filter YN Clamp High Register
 //-----------------------------------------------------------------------------
 struct FILTERYNCLPHI_BITS {   // Bits  Description
  int16 YN_CLAMP_HIGH2:8;
  uint16 rsvd0:8;        // 31:24 Reserved
  int16 YN_CLAMP_HIGH1:16;   // 23:0  YN Clamp High
 };
 union FILTERYNCLPHI_REG {
  struct FILTERYNCLPHI_BITS bits;
  int16           all; 
 };

 //-----------------------------------------------------------------------------
 // Filter YN Clamp Low Register
 //-----------------------------------------------------------------------------
 struct FILTERYNCLPLO_BITS {   // Bits  Description
 int16 YN_CLAMP_LOW2:8;
  uint16 rsvd0:8;        // 31:24 Reserved
  int16 YN_CLAMP_LOW1:16;    // 23:0  YN Clamp High
 };
 union FILTERYNCLPLO_REG {
  struct FILTERYNCLPLO_BITS bits;
  int16           all;
 };

 //-----------------------------------------------------------------------------
 // Filter Output Clamp High Register
 //-----------------------------------------------------------------------------
 struct FILTEROCLPHI_BITS {     // Bits  description
  uint16 OUTPUT_CLAMP_HIGH2:2;   // 17:0  Output Clamp High
  uint16 rsvd0:14;         // 31:18 Reserved
  
  uint16 OUTPUT_CLAMP_HIGH1:16;   // 17:0  Output Clamp High
 };
 union FILTEROCLPHI_REG {
  struct FILTEROCLPHI_BITS bits;
  Uint32          all;
 };
  
 //-----------------------------------------------------------------------------
 // Filter Output Clamp Low Register
 //-----------------------------------------------------------------------------
 struct FILTEROCLPLO_BITS {     // Bits  description
  uint16 OUTPUT_CLAMP_LOW2:2;   // 17:0  Output Clamp Low
  uint16 rsvd0:14;         // 31:18 Reserved
  
  uint16 OUTPUT_CLAMP_LOW1:16;   // 17:0  Output Clamp Low
 };
 union FILTEROCLPLO_REG {
  struct FILTEROCLPLO_BITS bits;
  Uint32          all;
 };

 //-----------------------------------------------------------------------------
 // Filter Preset Register
 //-----------------------------------------------------------------------------
 struct FILTERPRESET_BITS {    // Bits  Description
  
  uint16 rsvd0:4;        // 31:28 Reserved
  uint16 PRESET_EN:1;      // 27   Filter Preset Enable
  uint16 PRESET_REG_SEL:3;    // 26:24 Filter Preset Select
  int16 PRESET_VALUE2:8;
  int16 PRESET_VALUE1:16;    // 23:0  Filter Preset Value
 };
 union FILTERPRESET_REG {
  struct FILTERPRESET_BITS bits;
  Uint32          all;
 };

 //=============================================================================
 // Filter Module Register File
 //=============================================================================
// struct FILTER_REGS {
  extern union FILTERSTATUS_REG   FILTERSTATUS;    // Filter Status Register
  extern union FILTERCTRL_REG    FILTER0CTRL,FILTER1CTRL,FILTER2CTRL;     // Filter Control Register
  extern union CPUXN_REG  CPUXN0,CPUXN1,CPUXN2;       // CPU XN Register
  extern union FILTERXNREAD_REG   FILTERXNREAD;    // Filter XN Read Register
  extern union FILTERKIYNREAD_REG  FILTER0KIYNREAD;   // Filter KI YN Read Register
  extern union FILTERKDYNREAD_REG  FILTER0KDYNREAD;   // Filter KD YN Read Register
  extern union FILTERYNREAD_REG   FILTER0YNREAD;    // Filter YN Read Register  
  extern union COEFCONFIG_REG    COEFCONFIG;     // Coefficient Configuration Register
  extern union FILTERKPCOEF0_REG   FILTER0KPCOEF0;   // Filter KP Coefficient 0 Register
  extern union FILTERKPCOEF1_REG   FILTER0KPCOEF1;   // Filter KP Coefficient 1 Register
  extern union FILTERKICOEF0_REG   FILTER0KICOEF0;   // Filter KI Coefficient 0 Register
  extern union FILTERKICOEF1_REG   FILTER0KICOEF1;   // Filter KI Coefficient 1 Register
  extern union FILTERKDCOEF0_REG   FILTER0KDCOEF0;   // Filter KD Coefficient 0 Register
  extern union FILTERKDCOEF1_REG   FILTER0KDCOEF1;   // Filter KD Coefficient 1 Register
  extern union FILTERKDALPHA_REG   FILTER0KDALPHA;   // Filter KD Alpha Register
  extern union FILTERNL0_REG     FILTER0NL0;     // Filter Non-Linear Limit 0 Register
  extern union FILTERNL1_REG     FILTER0NL1;     // Filter Non-Linear Limit 1 Register
  extern union FILTERNL2_REG     FILTER0NL2;     // Filter Non-Linear Limit 2 Register
  extern union FILTERKICLPHI_REG   FILTER0KICLPHI;   // Filter KI Feedback Clamp High Register
  extern union FILTERKICLPLO_REG   FILTER0KICLPLO;   // Filter KI Feedback Clamp Low Register
  extern union FILTERYNCLPHI_REG   FILTER0YNCLPHI;   // Filter Yn Clamp High Register
  extern union FILTERYNCLPLO_REG   FILTER0YNCLPLO;   // Filter Yn Clamp Low Register
  extern union FILTEROCLPHI_REG   FILTER0OCLPHI;    // Filter Output Clamp High Register
  extern union FILTEROCLPLO_REG   FILTER0OCLPLO;    // Filter Output Clamp Low Register
  extern union FILTERPRESET_REG   FILTER0PRESET;    // Filter Preset Register
// };
 
 //-----------------------------------------------------------------------------
 // ADC Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct FILTER_REGS Filter0Regs;
 //extern volatile struct FILTER_REGS Filter1Regs;
 //extern volatile struct FILTER_REGS Filter2Regs;
//*******//



//#endif // end of CYCLONE_FILTER_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_gio.h
//
// TITLE: Cyclone Device Gio Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with Spartan_Gio.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2008. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_GIO_H
//#define CYCLONE_GIO_H


//#endif

//===============================================================================
// GIO Individual Register Bit Definitions
//===============================================================================

 //-----------------------------------------------------------------------------
 // Fault Port I/O Direction Register bit definitions 
 //-----------------------------------------------------------------------------
 struct FAULTDIR_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:7  reserved
  uint16 rsvd1:9; 
  uint16 TMS_DIR:1;        // 6   TMS Pin Direction in GPIO Mode
  uint16 TDI_DIR:1;        // 5   TDI Pin Direction in GPIO Mode
  uint16 TDO_DIR:1;        // 4   TDO Pin Direction in GPIO Mode
  uint16 FLT3_DIR:1;       // 3   FAULT[3] Pin Direction
  uint16 FLT2_DIR:1;       // 2   FAULT[2] Pin Direction
  uint16 FLT1_DIR:1;       // 1   FAULT[1] Pin Direction
  uint16 FLT0_DIR:1;       // 0   FAULT[0] Pin Direction
 };
 union FAULTDIR_REG {
  Uint32         all;
  struct FAULTDIR_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Fault Port In Register bit definitions 
 //-----------------------------------------------------------------------------
 struct FAULTIN_BITS {       // bits  description
  uint16 rsvd0:16;        // 31:7  reserved
   uint16 rsvd1:9;
  uint16 TMS_IN:1;        // 6   TMS Input Value in GPIO Mode
  uint16 TDI_IN:1;        // 5   TDI Input Value in GPIO Mode
  uint16 TDO_IN:1;        // 4   TDO Input Value in GPIO Mode
  uint16 FLT3_IN:1;        // 3   FAULT[3] Input Value
  uint16 FLT2_IN:1;        // 2   FAULT[2] Input Value
  uint16 FLT1_IN:1;        // 1   FAULT[1] Input Value
  uint16 FLT0_IN:1;        // 0   FAULT[0] Input Value
 };
 union FAULTIN_REG {
  Uint32         all;
  struct FAULTIN_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Fault Port Output Register bit definitions 
 //-----------------------------------------------------------------------------
 struct FAULTOUT_BITS {      // bits  description
  uint16 rsvd1:16;        // 31:7  reserved
   uint16 rsvd2:9;
  uint16 TMS_OUT:1;        // 6   TMS pin output data
  uint16 TDI_OUT:1;        // 5   TDI pin output data
  uint16 rsvd0:1;         // 4   TDO pin output data
  uint16 FLT3_OUT:1;       // 3   FAULT[3] pin output data
  uint16 FLT2_OUT:1;       // 2   FAULT[2] pin output data
  uint16 FLT1_OUT:1;       // 1   FAULT[1] pin output data
  uint16 FLT0_OUT:1;       // 0   FAULT[0] pin output data
 };
 union FAULTOUT_REG {
  Uint32         all;
  struct FAULTOUT_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // Fault Port Interrupt Enable Register bit definitions 
 //-----------------------------------------------------------------------------
 struct FAULTINTENA_BITS {     // bits  description
 uint16 rsvd0:16; // 31:7 reserved  
 
 uint16 FLT0_INT_EN:1; // 0 FAULT[0] pin interrupt 
 uint16 FLT1_INT_EN:1; // 1 FAULT[1] pin interrupt enable 
 uint16 FLT2_INT_EN:1; // 2 FAULT[2] pin interrupt enable 
 uint16 FLT3_INT_EN:1; // 3 FAULT[3] pin interrupt enable 
 uint16 TDO_INT_EN:1; // 4 TDO pin interrupt enable 
 uint16 TDI_INT_EN:1; // 5 TDI pin interrupt enable 
 uint16 TMS_INT_EN:1; // 6 TMS pin interrupt enable 
 uint16 rsvd1:9; // 31:7 reserved 
 };
 union FAULTINTENA_REG {
  Uint32          all;
  struct FAULTINTENA_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // Fault Port Interrupt Polarity Register bit definitions 
 //-----------------------------------------------------------------------------
 struct FAULTINTPOL_BITS {     // bits  description
 uint16 rsvd0:16; // 31:7 reserved 
 
 uint16 FLT0_INT_POL:1; // 0 FAULT[0] pin interrupt 
 uint16 FLT1_INT_POL:1; // 1 FAULT[1] pin interrupt polarity 
 uint16 FLT2_INT_POL:1; // 2 FAULT[2] pin interrupt polarity 
 uint16 FLT3_INT_POL:1; // 3 FAULT[3] pin interrupt polarity 
 uint16 TDO_INT_POL:1; // 4 TDO pin interrupt polarity 
 uint16 TDI_INT_POL:1; // 5 TDI pin interrupt polarity 
 uint16 TMS_INT_POL:1; // 6 TMS pin interrupt polarity 
 uint16 rsvd1:9; // 31:7 reserved 
 
 };
 union FAULTINTPOL_REG {
  Uint32          all;
  struct FAULTINTPOL_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // Fault Port Interrupt Pending Register bit definitions 
 //-----------------------------------------------------------------------------
 struct FAULTINTPEND_BITS {    // bits  description
 uint16 rsvd0:16; // 31:7 reserved 
 
 uint16 FLT0_INT_PEND:1; // 0 FAULT[0] pin interrupt 
 uint16 FLT1_INT_PEND:1; // 1 FAULT[1] pin interrupt flag 
 uint16 FLT2_INT_PEND:1; // 2 FAULT[2] pin interrupt flag 
 uint16 FLT3_INT_PEND:1; // 3 FAULT[3] pin interrupt flag 
 uint16 TDO_INT_PEND:1; // 4 TDO pin interrupt flag 
 uint16 TDI_INT_PEND:1; // 5 TDI pin interrupt flag 
 uint16 TMS_INT_PEND:1; // 6 TMS pin interrupt flag 
 uint16 rsvd1:9; // 31:7 reserved 

 };
 union FAULTINTPEND_REG {
  Uint32          all;
  struct FAULTINTPEND_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // External Interrupt I/O Direction Register bit definitions 
 //-----------------------------------------------------------------------------
 struct EXTINTDIR_BITS {      // bits  description
  uint16 rsvd0:16;         // 31:1  reserved
  uint16 rsvd1:15;
  uint16 EXT_INT_DIR:1;      // 0   External Interrupt Pin Direction 
 };
 union EXTINTDIR_REG {
  Uint32         all;
  struct EXTINTDIR_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // External Interrupt Input Register bit definitions 
 //-----------------------------------------------------------------------------
 struct EXTINTIN_BITS {       // bits  description
  uint16 rsvd0:16;         // 31:1  reserved
  uint16 rsvd1:15;
  uint16 EXT_INT_IN:1;       // 0   External Interrupt Pin Input Value
 };
 union EXTINTIN_REG {
  Uint32         all;
  struct EXTINTIN_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // External Interrupt Output Register bit definitions 
 //-----------------------------------------------------------------------------
 struct EXTINTOUT_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:1  reserved
  uint16 rsvd1:15;
  uint16 EXTINT_OUT:1;      // 0   External Interrupt pin output data
 };
 union EXTINTOUT_REG {
  Uint32         all;
  struct EXTINTOUT_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // External Interrupt Enable Register bit definitions 
 //-----------------------------------------------------------------------------
 struct EXTINTENA_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:1  reserved
  
  uint16 EXT_INT_EN:1;      // 0   External Interrupt pin interrupt enable
  uint16 rsvd1:15;
 };
 union EXTINTENA_REG {
  Uint32         all;
  struct EXTINTENA_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // External Interrupt Polarity Register bit definitions 
 //-----------------------------------------------------------------------------
 struct EXTINTPOL_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:1  reserved
	
  uint16 EXT_INT_POL:1;      // 0   External Interrupt pin interrupt polarity
	uint16 rsvd1:15;        // 31:1  reserved
 };
 union EXTINTPOL_REG {
  Uint32         all;
  struct EXTINTPOL_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // External Interrupt Pending Register bit definitions 
 //-----------------------------------------------------------------------------
 struct EXTINTPEND_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:1  reserved
	
  uint16 EXT_INT_PEND:1;     // 0   External Interrupt pin interrupt flag
	uint16 rsvd1:15;        // 31:1  reserved
 };
 union EXTINTPEND_REG {
  Uint32         all;
  struct EXTINTPEND_BITS bits;
 }; 

 //=============================================================================
 // GIO Module Register File
 //=============================================================================
 //struct GIO_REGS {
  extern union FAULTDIR_REG   FAULTDIR;   // Fault Port Direction Register
  extern union FAULTIN_REG    FAULTIN;    // Fault Port Input Data
  extern union FAULTOUT_REG   FAULTOUT;   // Fault Port Output Data
  //uint16          RSVD_3;    // Reserved
  //uint16          RSVD_2;    // Reserved
  extern union FAULTINTENA_REG  FAULTINTENA;  // Fault Port Interrupt Enable Register
  extern union FAULTINTPOL_REG  FAULTINTPOL;  // Fault Port Interrupt Polarity Register
  extern union FAULTINTPEND_REG FAULTINTPEND; // Fault Port Interrupt Pending Register
  extern union EXTINTDIR_REG   EXTINTDIR;   // External Interrupt Direction Register
  extern union EXTINTIN_REG   EXTINTIN;   // External Interrupt Input Data
  extern union EXTINTOUT_REG   EXTINTOUT;   // External Interrupt Output Data
  //uint16          RSVD_1;    // Reserved
  //uint16          RSVD_0;    // Reserved
  extern union EXTINTENA_REG   EXTINTENA;   // External Interrupt Enable Register
  extern union EXTINTPOL_REG   EXTINTPOL;   // External Interrupt Polarity Register
  extern union EXTINTPEND_REG  EXTINTPEND;  // External Interrupt Pending Register
 //};

 //---------------------------------------------------------------------------
 // GIO Module External References & Function Declarations:
 //
 //extern volatile struct GIO_REGS GioRegs;
 
 //===========================================================================


//#endif // end of CYCLONE_GIO_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
//
// FILE:  cyclone_loop_mux.h
//
// TITLE: Cyclone Loop Mux Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2009 | CMF | Initial Revision
//    |       |   | 
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_LOOP_MUX_H
//#define CYCLONE_LOOP_MUX_H


//#endif

 //=============================================================================
 // Loop Mux Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // Front End Control 0 Mux Register
 //-----------------------------------------------------------------------------
 struct FECTRL0MUX_BITS {     // bits  description
 uint16 rsvd0:16; // 31:14 Reserved 
 
 uint16 DPWM0_A_TRIG_EN:1; // 0 Front End DPWM0 PWM-A Trig 
 uint16 DPWM1_A_TRIG_EN:1; // 1 Front End DPWM1 PWM-A Trig Enable 
 uint16 DPWM2_A_TRIG_EN:1; // 2 Front End DPWM2 PWM-A Trig Enable 
 uint16 DPWM3_A_TRIG_EN:1; // 3 Front End DPWM3 PWM-A Trig Enable 
 uint16 DPWM0_B_TRIG_EN:1; // 4 Front End DPWM0 PWM-B Trig Enable 
 uint16 DPWM1_B_TRIG_EN:1; // 5 Front End DPWM1 PWM-B Trig Enable 
 uint16 DPWM2_B_TRIG_EN:1; // 6 Front End DPWM2 PWM-B Trig Enable 
 uint16 DPWM3_B_TRIG_EN:1; // 7 Front End DPWM3 PWM-B Trig Enable 
 uint16 DPWM0_FRAME_SYNC_EN:1; // 8 Front End DPWM3 Frame Sync Enable 
 uint16 DPWM1_FRAME_SYNC_EN:1; // 9 Front End DPWM3 Frame Sync Enable 
 uint16 DPWM2_FRAME_SYNC_EN:1; // 10 Front End DPWM3 Frame Sync Enable 
 uint16 DPWM3_FRAME_SYNC_EN:1; // 11 Front End DPWM3 Frame Sync Enable 
 uint16 NL_SEL:2; // 13:12 Front End NL Limit Select 
 uint16 rsvd1:2; // 31:14 Reserved 
 }; 
 union FECTRL0MUX_REG {
  Uint32          all;
  struct FECTRL0MUX_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Front End Control 1 Mux Register
 //-----------------------------------------------------------------------------
 struct FECTRL1MUX_BITS {     // bits  description
   uint16 rsvd0:16; // 31:14 Reserved
 
 uint16 DPWM0_A_TRIG_EN:1; // 0 Front End DPWM0 PWM-A Trig Enable
 uint16 DPWM1_A_TRIG_EN:1; // 1 Front End DPWM1 PWM-A Trig Enable
 uint16 DPWM2_A_TRIG_EN:1; // 2 Front End DPWM2 PWM-A Trig Enable
 uint16 DPWM3_A_TRIG_EN:1; // 3 Front End DPWM3 PWM-A Trig Enable
 uint16 DPWM0_B_TRIG_EN:1; // 4 Front End DPWM0 PWM-B Trig Enable
 uint16 DPWM1_B_TRIG_EN:1; // 5 Front End DPWM1 PWM-B Trig Enable
 uint16 DPWM2_B_TRIG_EN:1; // 6 Front End DPWM2 PWM-B Trig Enable
 uint16 DPWM3_B_TRIG_EN:1; // 7 Front End DPWM3 PWM-B Trig Enable
 uint16 DPWM0_FRAME_SYNC_EN:1; // 8 Front End DPWM3 Frame Sync Enable
 uint16 DPWM1_FRAME_SYNC_EN:1; // 9 Front End DPWM3 Frame Sync Enable
 uint16 DPWM2_FRAME_SYNC_EN:1; // 10 Front End DPWM3 Frame Sync Enable
 uint16 DPWM3_FRAME_SYNC_EN:1; // 11 Front End DPWM3 Frame Sync Enable
 uint16 NL_SEL:2; // 13:12 Front End NL Limit Select
 uint16 rsvd1:2;
 }; 
 union FECTRL1MUX_REG {
  Uint32          all;
  struct FECTRL1MUX_BITS  bits;
 };
#define bDPWM0_A_TRIG_EN     0x000001L
#define bDPWM0_FRAME_SYNC_EN 0x000100L
 //-----------------------------------------------------------------------------
 // Front End Control 2 Mux Register
 //-----------------------------------------------------------------------------
 struct FECTRL2MUX_BITS {     // bits  description
 uint16 rsvd1:16; // 31:14 Reserved
 
 uint16 DPWM0_A_TRIG_EN:1; // 0 Front End DPWM0 PWM-A Trig
 uint16 DPWM1_A_TRIG_EN:1; // 1 Front End DPWM1 PWM-A Trig Enable
 uint16 DPWM2_A_TRIG_EN:1; // 2 Front End DPWM2 PWM-A Trig Enable
 uint16 DPWM3_A_TRIG_EN:1; // 3 Front End DPWM3 PWM-A Trig Enable
 uint16 DPWM0_B_TRIG_EN:1; // 4 Front End DPWM0 PWM-B Trig Enable
 uint16 DPWM1_B_TRIG_EN:1; // 5 Front End DPWM1 PWM-B Trig Enable
 uint16 DPWM2_B_TRIG_EN:1; // 6 Front End DPWM2 PWM-B Trig Enable
 uint16 DPWM3_B_TRIG_EN:1; // 7 Front End DPWM3 PWM-B Trig Enable
 uint16 DPWM0_FRAME_SYNC_EN:1; // 8 Front End DPWM3 Frame Sync Enable
 uint16 DPWM1_FRAME_SYNC_EN:1; // 9 Front End DPWM3 Frame Sync Enable
 uint16 DPWM2_FRAME_SYNC_EN:1; // 10 Front End DPWM3 Frame Sync Enable
 uint16 DPWM3_FRAME_SYNC_EN:1; // 11 Front End DPWM3 Frame Sync Enable
 uint16 NL_SEL:2; // 13:12 Front End NL Limit Select
 uint16 rsvd0:2; // 31:14 Reserved

 }; 
 union FECTRL2MUX_REG {
  Uint32          all;
  struct FECTRL2MUX_BITS  bits;
 };
 //#define bDPWM0_A_TRIG_EN 0x00001L
 //-----------------------------------------------------------------------------
 // Sample Trigger Control Register
 //-----------------------------------------------------------------------------
 struct SAMPTRIGCTRL_BITS {    // bits  description
 uint16 rsvd0:16; // 31:12 Reserved
 
 uint16 FE0_TRIG_DPWM0_EN:1; // 0 Front End 0 DPWM 1 Trig
 uint16 FE0_TRIG_DPWM1_EN:1; // 1 Front End 0 DPWM 1 Trig Enable
 uint16 FE0_TRIG_DPWM2_EN:1; // 2 Front End 0 DPWM 2 Trig Enable
 uint16 FE0_TRIG_DPWM3_EN:1; // 3 Front End 0 DPWM 3 Trig Enable
 uint16 FE1_TRIG_DPWM0_EN:1; // 4 Front End 1 DPWM 1 Trig Enable
 uint16 FE1_TRIG_DPWM1_EN:1; // 5 Front End 1 DPWM 1 Trig Enable
 uint16 FE1_TRIG_DPWM2_EN:1; // 6 Front End 1 DPWM 2 Trig Enable
 uint16 FE1_TRIG_DPWM3_EN:1; // 7 Front End 1 DPWM 3 Trig Enable
 uint16 FE2_TRIG_DPWM0_EN:1; // 8 Front End 2 DPWM 1 Trig Enable
 uint16 FE2_TRIG_DPWM1_EN:1; // 9 Front End 2 DPWM 1 Trig Enable
 uint16 FE2_TRIG_DPWM2_EN:1; // 10 Front End 2 DPWM 2 Trig Enable
 uint16 FE2_TRIG_DPWM3_EN:1; // 11 Front End 2 DPWM 3 Trig Enable
 uint16 rsvd1:4; // 31:12 Reserved
 };
 union SAMPTRIGCTRL_REG {
  Uint32          all;
  struct SAMPTRIGCTRL_BITS bits;
 };
#define bFE0_TRIG_DPWM0_EN 0x0001L
 //-----------------------------------------------------------------------------
 // External DAC Control Register
 //-----------------------------------------------------------------------------
 struct EXTDACCTRL_BITS {     // Bits  Description
 uint16 DAC1_SEL:3; // 18:16 DAC 1 Select
 uint16 rsvd2:5; // 23:19 Reserved
 uint16 DAC2_SEL:3; // 26:24 DAC 2 Select
 uint16 rsvd3:5; // 31:27 Reserved
 
   uint16 EXT_DAC0_EN:1; // 0 External DAC 0 Enable
 uint16 EXT_DAC1_EN:1; // 1 External DAC 1 Enable
 uint16 EXT_DAC2_EN:1; // 2 External DAC 2 Enable
 uint16 rsvd0:5; // 7:3 Reserved
 uint16 DAC0_SEL:3; // 10:8 DAC 0 Select
 uint16 rsvd1:5; // 15:11 Reserved
 

 };
 union EXTDACCTRL_REG {
  Uint32          all;
  struct EXTDACCTRL_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Filter Mux Register 
 //-----------------------------------------------------------------------------
 struct FILTERMUX_BITS {     // Bits  Description 
  uint16 FILTER0_FFWD_SEL:1;  // 16   Filter 0 Feedforward Select
  uint16 FILTER1_FFWD_SEL:1;  // 17   Filter 1 Feedforward Select
  uint16 FILTER2_FFWD_SEL:1;  // 18   Filter 2 Feedforward Select
  uint16 rsvd2:5;        // 23:19 Reserved
  uint16 FILTER0_KCOMP_SEL:2;  // 25:24 Filter 0 KComp Select
  uint16 FILTER1_KCOMP_SEL:2;  // 27:26 Filter 1 KComp Select
  uint16 FILTER2_KCOMP_SEL:2;  // 29:28 Filter 2 KComp Select
  uint16 rsvd3:2;        // 31:30 Reserved

  uint16 FILTER0_FE_SEL:2;   // 1:0  Filter 0 Front End Select
  uint16 FILTER1_FE_SEL:2;   // 3:2  Filter 1 Front End Select
  uint16 FILTER2_FE_SEL:2;   // 5:4  Filter 2 Front End Select
  uint16 rsvd0:2;        // 7:6  Reserved 
  uint16 FILTER0_PER_SEL:2;   // 9:8  Filter 0 Switching Period Select
  uint16 FILTER1_PER_SEL:2;   // 11:10 Filter 1 Switching Period Select
  uint16 FILTER2_PER_SEL:2;   // 13:12 Filter 2 Switching Period Select
  uint16 rsvd1:2;        // 15:14 Reserved 
 };
 union FILTERMUX_REG {
  Uint32          all;
  struct FILTERMUX_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // Filter KComp A Register
 //-----------------------------------------------------------------------------
 struct FILTERKCOMPA_BITS {   // Bits  Description
  uint16 KCOMP1:16;      // 29:16  KCOMP1 Value
  //uint16 rsvd1:2;       // 31:30  Reserved
	
	uint16 KCOMP0:16;      // 13:0  KCOMP0 Value
  //uint16 rsvd0:2;       // 15:14  Reserved
 };
 union FILTERKCOMPA_REG {
  Uint32          all;
  struct FILTERKCOMPA_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Filter KComp B Register
 //-----------------------------------------------------------------------------
 struct FILTERKCOMPB_BITS {   // Bits  Description
  uint16 rsvd1:16;       // 31:14  Reserved
	
  uint16 KCOMP2:14;      // 13:0  KCOMP2 Value
	uint16 rsvd2:2;       // 31:14  Reserved
 };
 union FILTERKCOMPB_REG {
  Uint32          all;
  struct FILTERKCOMPB_BITS bits;
 };  

 //-----------------------------------------------------------------------------
 // DPWM Mux Register 
 //-----------------------------------------------------------------------------
 struct DPWMMUX_BITS {      // Bits  Description
  uint16 DPWM2_SYNC_SEL:2;   // 17:16  DPWM2 Sync Select
  uint16 DPWM3_SYNC_SEL:2;   // 19:18  DPWM3 Sync Select
  uint16 rsvd0:4;        // 23:20  Reserved
  uint16 DPWM0_SYNC_FET_SEL:2; // 25:24  DPWM0 Sync Fet Ramp Select
  uint16 DPWM1_SYNC_FET_SEL:2; // 27:26  DPWM1 Sync Fet Ramp Select
  uint16 DPWM2_SYNC_FET_SEL:2; // 29:28  DPWM2 Sync Fet Ramp Select
  uint16 DPWM3_SYNC_FET_SEL:2; // 31:30  DPWM3 Sync Fet Ramp Select
	
  uint16 DPWM0_FILTER_SEL:3;  // 2:0   DPWM0 Filter Select
  uint16 DPWM1_FILTER_SEL:3;  // 5:3   DPWM1 Filter Select
  uint16 DPWM2_FILTER_SEL:3;  // 8:6   DPWM2 Filter Select
  uint16 DPWM3_FILTER_SEL:3;  // 11:9  DPWM3 Filter Select
  uint16 DPWM0_SYNC_SEL:2;   // 13:12  DPWM0 Sync Select
  uint16 DPWM1_SYNC_SEL:2;   // 15:14  DPWM1 Sync Select
 };
 union DPWMMUX_REG {
  Uint32          all;
  struct DPWMMUX_BITS    bits;
 };
#define  bDPWM0_FILTER_SEL 0x0007L   // 2:0
 //-----------------------------------------------------------------------------
 // Constant Power Control Register (CPCTRL)
 //-----------------------------------------------------------------------------
 struct CPCTRL_BITS {     // Bits  Description
  uint16 rsvd1:16;      // 31:16  Reserved
	
	
  uint16 CPCC_EN:1;      // 0    Constant Power Constant Current Enable
  uint16 CPCC_CONFIG:1;    // 1    Constant Power/Current Configuration
  uint16 CPCC_INT_EN:1;    // 2    Constant Power/Current Interrupt Enable
  uint16 DIVISOR_SEL:2;    // 4:3   Select Divisor Value
  uint16 THRESH_SEL:3;    // 7:5   Select Input Threshold for CPCC
  uint16 CLOOP_SEL:2;     // 9:8   Select Current Loop for Loop Switching
  uint16 VLOOP_SEL:2;     // 11:10  Select Voltage Loop for Loop Switching
  uint16 VLOOP_FREEZE_EN:1;  // 12   Enables freeze of Voltage Loop Integration in CC Mode
  uint16 LOWER_COMP_EN:1;   // 13   Enable comparison of duty cycle in loop switching
  uint16 FW_DIVISOR_EN:1;   // 14   Enable Firwmare Divisor for Constant Power Calculation
  uint16 DAC_COMP_EN:1;    // 15   Enables DAC Setpoint comparison
 };
 union CPCTRL_REG {
  Uint32          all;
  struct CPCTRL_BITS    bits;
 };

 //-----------------------------------------------------------------------------
 // Constant Power Nominal Threshold Register (CPNOM)
 //-----------------------------------------------------------------------------
 struct CPNOM_BITS {       // Bits  Description
  uint16 NOM_CURRENT_UPPER:10;  // 25:16  Nominal Current Upper Threshold
  uint16 rsvd1:6;        // 31:26  Reserved
	
  uint16 NOM_CURRENT_LOWER:10;  // 9:0   Nominal Current Lower Threshold
  uint16 rsvd0:6;        // 15:10  Reserved
 };
 union CPNOM_REG {
  Uint32          all;
  struct CPNOM_BITS     bits;
 };

 //-----------------------------------------------------------------------------
 // Constant Power Max Threshold Register (CPMAX)
 //-----------------------------------------------------------------------------
 struct CPMAX_BITS {       // Bits  Description
  uint16 MAX_CURRENT_UPPER:10; // 25:16  Maximum Current Upper Threshold
  uint16 rsvd1:6;        // 31:26  Reserved
	
  uint16 MAX_CURRENT_LOWER:10; // 9:0   Maximum Current Lower Threshold
  uint16 rsvd0:6;        // 15:10  Reserved
 };
 union CPMAX_REG {
  Uint32          all;
  struct CPMAX_BITS    bits;
 };

 //-----------------------------------------------------------------------------
 // Constant Power Configuration Register (CPCONFIG)
 //-----------------------------------------------------------------------------
 struct CPCONFIG_BITS {     // Bits  Description
  uint16 MAX_CURRENT:10;    // 25:16  Maximum Current 
  uint16 rsvd1:6;        // 31:26  Reserved
	
  uint16 NOM_VOLTAGE:10;    // 9:0   Nominal Voltage
  uint16 rsvd0:6;        // 15:10  Reserved
 };
 union CPCONFIG_REG {
  Uint32          all;
  struct CPCONFIG_BITS   bits;
 }; 
 
 //-----------------------------------------------------------------------------
 // Constant Power Max Power Register (CPMAXPWR)
 //-----------------------------------------------------------------------------
 struct CPMAXPWR_BITS {     // Bits  Description
	uint16 MAX_POWER2:4;     // 19:0  Maximum Power
  uint16 rsvd0:12;       // 31:20  Reserved
	
  uint16 MAX_POWER1:16;     // 19:0  Maximum Power
 };
 union CPMAXPWR_REG {
  Uint32          all;
  struct CPMAXPWR_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Constant Power Integrator Threshold Register (CPINTTHRESH)
 //-----------------------------------------------------------------------------
 struct CPINTTHRESH_BITS {   // Bits   Description
  uint16 INT_THRESH2:8;    // 23:0   Signed Integrator Threshold
  uint16 rsvd0:8;       // 31:24  Reserved
	
  uint16 INT_THRESH1:16;    // 23:0   Signed Integrator Threshold
 };
 union CPINTTHRESH_REG {
  Uint32          all;
  struct CPINTTHRESH_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Constant Power Firmware Divisor Register (CPFWDIVISOR)
 //-----------------------------------------------------------------------------
 struct CPFWDIVISOR_BITS {   // Bits   Description
  uint16 rsvd0:16;       // 31:10  Reserved
	
  uint16 FW_DIVISOR:10;    // 9:0   Firmware configurable divisor
	uint16 rsvd1:6;       // 31:10  Reserved
 };
 union CPFWDIVISOR_REG {
  Uint32          all;
  struct CPFWDIVISOR_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Constant Power Status Register (CPSTAT)
 //-----------------------------------------------------------------------------
 struct CPSTAT_BITS {      // Bits   Description
  uint16 rsvd0:16;       // 31:9   Reserved
	
  uint16 CV_TO_CP_INT:1;    // 0    Constant Voltage to Power Interrupt
  uint16 CP_TO_CV_INT:1;    // 1    Constant Power to Voltage Interrupt
  uint16 CP_TO_CC_INT:1;    // 2    Constant Power to Current Interrupt
  uint16 CC_TO_CP_INT:1;    // 3    Constant Current to Power Interrupt
  uint16 CV_TO_CC_INT:1;    // 4    Constant Voltage to Current Interrupt
  uint16 CC_TO_CV_INT:1;    // 5    Constant Current to Voltage Interrupt
  uint16 CONSTANT_VOLT:1;   // 6    Constant Voltage Mode Indication
  uint16 CONSTANT_PWR:1;    // 7    Constant Power Mode Indication
  uint16 CONSTANT_CUR:1;    // 8    Constant Current Mode Indication
	uint16 rsvd1:7;       // 31:9   Reserved
 };
 union CPSTAT_REG {
  Uint32          all;
  struct CPSTAT_BITS    bits;
 };

 //-----------------------------------------------------------------------------
 // Cycle Adjustment Control Register
 //-----------------------------------------------------------------------------
 struct CYCADJCTRL_BITS {   // Bits  Description
  uint16 rsvd0:16;      // 31:10  Reserved
	
  uint16 CYC_ADJ_EN:1;    // 0    Cycle Adjustment Enable
  uint16 FIRST_SAMPLE_SEL:2; // 2:1   First Cycle Adjustment Select
  uint16 SECOND_SAMPLE_SEL:2; // 4:3   Second Cycle Adjustment Select
  uint16 CYC_ADJ_SYNC:2;   // 6:5   Cycle Adjustment Sync
  uint16 CYC_ADJ_GAIN:3;   // 9:7   Cycle Adjustment Gain
	uint16 rsvd1:6;      // 31:10  Reserved
 };
 union CYCADJCTRL_REG {
  Uint32          all;
  struct CYCADJCTRL_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Cycle Adjustment Limit Register
 //-----------------------------------------------------------------------------
 struct CYCADJLIM_BITS {     // Bits  Description
  uint16 CYC_ADJ_UPPER_LIMIT:13; // 28:16  Cycle Adjustment Upper Limit
  uint16 rsvd1:3;        // 31:29  Reserved
	
  uint16 CYC_ADJ_LOWER_LIMIT:13; // 12:0  Cycle Adjustment Lower Limit
  uint16 rsvd0:3;        // 15:13  Reserved
 };
 union CYCADJLIM_REG {
  Uint32          all;
  struct CYCADJLIM_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Cycle Adjustment Status Register
 //-----------------------------------------------------------------------------
 struct CYCADJSTAT_BITS {   // Bits  Description
  uint16 CYC_ADJ_CAL:13;   // 28:16  Cycle Adjustment Calculation
  uint16 rsvd1:3;       // 31:29  Reserved

  uint16 CYC_ADJ_ERROR:10;  // 9:0   Cycle Adjustment Error
  uint16 rsvd0:6;       // 15:10  Reserved
 };
 union CYCADJSTAT_REG {
  Uint32          all;
  struct CYCADJSTAT_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Global Enable Register
 //-----------------------------------------------------------------------------
 struct GLBEN_BITS {      // Bits  Description
  uint16 rsvd1:16;      // 31:11  Reserved
	
  uint16 DPWM0_EN:1;     // 0    Global Enable for DPWM Module 0
  uint16 DPWM1_EN:1;     // 1    Global Enable for DPWM Module 1
  uint16 DPWM2_EN:1;     // 2    Global Enable for DPWM Module 2
  uint16 DPWM3_EN:1;     // 3    Global Enable for DPWM Module 3
  uint16 rsvd0:4;       // 7:4   Reserved
  uint16 FE_CTRL0_EN:1;    // 8    Global Enable for Front End Control 0
  uint16 FE_CTRL1_EN:1;    // 9    Global Enable for Front End Control 1
  uint16 FE_CTRL2_EN:1;    // 10   Global Enable for Front End Control 2
  uint16 rsvd2:5;      // 31:11  Reserved
 };
#define bDPWM0_EN 0x0001L
#define bDPWM1_EN 0x0002L
#define bDPWM2_EN 0x0004L
#define bDPWM3_EN 0x0008L
 union GLBEN_REG {
  Uint32         all;
  struct GLBEN_BITS   bits;
 };
#define bFE_CTRL0_EN 0x00100L     // 8 
 //-----------------------------------------------------------------------------
 // PWM Global Period Register
 //-----------------------------------------------------------------------------
 struct PWMGLBPER_BITS {    // Bits  Description
  uint16 PRD2:2;       // 17:4  Global DPWM Period Value
  uint16 rsvd1:14;      // 31:18  Reserved
  
  uint16 rsvd0:4;       // 3:0   Reserved
	uint16 PRD1:12;       // 17:4  Global DPWM Period Value
 };
 union PWMGLBPER_REG {
  Uint32          all;
  struct PWMGLBPER_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Sync Control Register
 //-----------------------------------------------------------------------------
 struct SYNCCTRL_BITS {    // Bits  Description
  uint16 rsvd0:16;      // 31:6  Reserved

  uint16 SYNC_DIR:1;     // 0    Sync Pin Direction
  uint16 SYNC_OUT:1;     // 1    Sync GPIO Value
  uint16 SYNC_MUX_SEL:3;   // 4:2   Sync Select
  uint16 SYNC_IN:1;      // 5    Sync pin value
	uint16 rsvd1:10;      // 31:6  Reserved
 };
 union SYNCCTRL_REG {
  Uint32          all;
  struct SYNCCTRL_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Light Load Control Register
 //-----------------------------------------------------------------------------
 struct LLCTRL_BITS {     // Bits   Description
  uint16 DPWM_ON_TIME2:10;  // 25:8   DPWM On Time during Light Load Mode
  uint16 rsvd1:6;      // 31:26  Reserved

  uint16 LL_EN:1;      // 0    Light Load Enable
  uint16 LL_FILTER_SEL:2;  // 2:1   Light Load Filter Select
  uint16 CYCLE_CNT_EN:1;   // 3    Cycle Counter Enable
  uint16 rsvd0:4;      // 7:4   Reserved
  uint16 DPWM_ON_TIME1:8;  // 25:8   DPWM On Time during Light Load Mode
 };
 union LLCTRL_REG {
  Uint32          all;
  struct LLCTRL_BITS    bits;
 }; //LLCTRL.bits.DPWM_ON_TIME1 = (on_time&0x0ff); LLCTRL.bits.DPWM_ON_TIME2 = (on_time>>8);
 
 //-----------------------------------------------------------------------------
 // Light Load Enable Threshold Register
 //-----------------------------------------------------------------------------
 struct LLENTHRESH_BITS {    // Bits   Description
  uint16 TURN_ON_THRESH2:2;  // 17:0   Filter Data Threshold to turn on burst mode
  uint16 rsvd0:6;       // 23:18  Reserved
  uint16 CYCLE_CNT_THRESH:8;  // 31:24  Switching Cycle Counter Threshold for turning on burst mode
	
  uint16 TURN_ON_THRESH1:16;  // 17:0   Filter Data Threshold to turn on burst mode
 };
 union LLENTHRESH_REG {
  Uint32          all;
  struct LLENTHRESH_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Light Load Disable Threshold Register
 //-----------------------------------------------------------------------------
 struct LLDISTHRESH_BITS {    // Bits   Description
  uint16 TURN_OFF_THRESH2:2;  // 17:0   Filter Data Threshold to turn off burst mode
  uint16 rsvd0:14;       // 31:18  Reserved
	
  uint16 TURN_OFF_THRESH1:16;  // 17:0   Filter Data Threshold to turn off burst mode
 };
 union LLDISTHRESH_REG {
  Uint32          all;
  struct LLDISTHRESH_BITS  bits;
 }; 

 //-----------------------------------------------------------------------------
 // Digital Peak Current Mode Control Register
 //-----------------------------------------------------------------------------
 struct DPCMCTRL_BITS {     // Bits   Description
  uint16 BLANKING_TIME:10;   // 25:16   Blanking Time Window
  uint16 rsvd1:6;       // 31:26   Reserved

  uint16 PCM_EN:1;       // 0     Peak Current Mode Enable
  uint16 AUTO_SLOPE_EN:1;   // 1     Automatic Current Slope Calculation Enable
  uint16 PCM_FE_SEL:2;     // 3:2    Peak Current Mode Front End Select
  uint16 PCM_FILTER_SEL:2;   // 5:4    Peak Current Mode Filter Select
  uint16 PCM_LATCH_EN:1;    // 6     PCM Latch Enable
  uint16 rsvd0:1;       // 7     Reserved
  uint16 ROUNDING_WINDOW:8;  // 15:8   Rounding Window
 };
 union DPCMCTRL_REG {
  Uint32          all;
  struct DPCMCTRL_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Digital Peak Current Mode Slope Register
 //-----------------------------------------------------------------------------
 struct DPCMSLOPE_BITS {    // Bits   Description
  uint16 DAC_OFFSET:14;    // 29:16  Programmable Offset for DAC Slope Comp Ramp
  uint16 rsvd1:2;       // 31:30  Reserved
	
  uint16 CURRENT_SLOPE:14;   // 13:0   Configures slope of Sensed Current
  uint16 rsvd0:2;       // 15:14  Reserved
 };
 union DPCMSLOPE_REG {
  Uint32         all;
  struct DPCMSLOPE_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // Analog Peak Current Mode Control Register
 //-----------------------------------------------------------------------------
 struct APCMCTRL_BITS {     // Bits   Description
  uint16 rsvd0:16;       // 31:4   Reserved
	
  uint16 PCM_EN:1;       // 0    Analog Peak Current Mode Enable
  uint16 PCM_FE_SEL:2;     // 2:1   Analog Peak Current Front End Select
  uint16 PCM_LATCH_EN:1;    // 3    PCM Latch Enable
	uint16 rsvd1:12;       // 31:4   Reserved
 };
 union APCMCTRL_REG {
  Uint32          all;
  struct APCMCTRL_BITS   bits;
 }; 

 //-----------------------------------------------------------------------------
 // Loop Mux Test Register
 //-----------------------------------------------------------------------------
 struct LOOPMUXTEST_BITS {   // Bits   Description
  uint16 BIST_TRIM_TEST_EN:1; // 16    BIST Trim Test Enable
  uint16 BIST_EN:1;      // 17    BIST Enable
  uint16 BIST_COMP:1;     // 18    BIST Complete Flag
  uint16 rsvd0:13;       // 31:19  Reserved
	
  uint16 AFE_GAIN:2;      // 1:0   AFE Gain
  uint16 GAIN_TRIM:6;     // 7:2   EADC Gain Trim
  uint16 EADC_REF_EN:1;    // 8    EADC Reference Enable
  uint16 EADC_REF_RESET:1;   // 9    EADC Reference Reset
  uint16 EADC_REF_TRIM:6;   // 15:10  EADC Ref Trim
 };
 union LOOPMUXTEST_REG {
  Uint32         all;
  struct LOOPMUXTEST_BITS bits;
 };

 //=============================================================================
 // Loop Mux Module Register File
 //=============================================================================
// struct LOOP_MUX_REGS {
  extern union FECTRL0MUX_REG    FECTRL0MUX;    // Front End Control 0 Mux Register
  extern union FECTRL1MUX_REG    FECTRL1MUX;    // Front End Control 1 Mux Register
  extern union FECTRL2MUX_REG    FECTRL2MUX;    // Front End Control 2 Mux Register
  extern union SAMPTRIGCTRL_REG   SAMPTRIGCTRL;   // Sample Trigger Control Register
  extern union EXTDACCTRL_REG    EXTDACCTRL;    // External DAC Control Register
  extern union FILTERMUX_REG    FILTERMUX;     // Filter Mux Register
  extern union FILTERKCOMPA_REG   FILTERKCOMPA;   // Filter KCOMP A Register
  extern union FILTERKCOMPB_REG   FILTERKCOMPB;   // Filter KCOMP B Register
  extern union DPWMMUX_REG     DPWMMUX;      // DPWM Mux Register
  extern union CPCTRL_REG CPCTRL;      // Constant Power Control Register
  extern union CPNOM_REG CPNOM;       // Constant Power Nominal Threshold Register
  extern union CPMAX_REG CPMAX;       // Constant Power Maximum Threshold Register
  extern union CPCONFIG_REG     CPCONFIG;     // Constant Power Configuration Register
  extern union CPMAXPWR_REG     CPMAXPWR;     // Constant Power Maximum Power Register
  extern union CPINTTHRESH_REG   CPINTTHRESH;    // Constant Power Integrator Threshold Register
  extern union CPFWDIVISOR_REG   CPFWDIVISOR;    // Constant Power Firmware Divisor Register
  extern union CPSTAT_REG CPSTAT;      // Constant Power Status Register
  extern union CYCADJCTRL_REG    CYCADJCTRL;    // Cycle Adjustment Control
  extern union CYCADJLIM_REG    CYCADJLIM;     // Cycle Adjustment Limit Register
  extern union CYCADJSTAT_REG    CYCADJSTAT;    // Cycle Adjustment Status Register
  extern union GLBEN_REG GLBEN;       // Global Enable Register
  extern union PWMGLBPER_REG    PWMGLBPER;     // PWM Global Period Register
  extern union SYNCCTRL_REG     SYNCCTRL;     // Sync Control Register
  extern union LLCTRL_REG LLCTRL;      // Light Load Control Register
  extern union LLENTHRESH_REG    LLENTHRESH;    // Light Load Enable Threshold Register
  extern union LLDISTHRESH_REG   LLDISTHRESH;    // Light Load Disable Threshold Register
  extern union DPCMCTRL_REG     DPCMCTRL;     // Digital Peak Current Mode Control Register
  extern union DPCMSLOPE_REG    DPCMSLOPE;     // Digital Peak Current Mode Slope Register
  extern union APCMCTRL_REG     APCMCTRL;     // Analog Peak Current Mode Control Register
  extern union LOOPMUXTEST_REG   LOOPMUXTEST;    // Loop Mux Test Register
 //};
 
 //-----------------------------------------------------------------------------
 // Loop Mux Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct LOOP_MUX_REGS LoopMuxRegs;




//#endif // end of CYCLONE_LOOP_MUX_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
//
// FILE:  cyclone_misc_analog.h
//
// TITLE: Cyclone Miscellaneous Analog Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2009 | CMF | Initial Revision
//    |       |   | 
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_MISC_ANALOG_H
//#define CYCLONE_MISC_ANALOG_H


//#endif

 //=============================================================================
 // Miscellaneous Analog Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // Clock Trim Register
 //-----------------------------------------------------------------------------
// struct CLKTRIM_BITS {       // bits  description
//  uint16 rsvd1:17;        // 31:15 Reserved
//  uint16 HFO_CLK_TRIM:7;     // 14:8  HFO Clock Trim
//  uint16 HFO_SEL_RANGE:2;     // 7:6  HFO Select Range
//  uint16 HFO_LN_FILTER_EN:1;   // 5   HFO Filter Enable
//  uint16 LFO_DISABLE:1;      // 4   LFO Disable
//  uint16 HFO_THERM_TRIM:3;    // 3:1  HFO Therm Trim
//  uint16 HFO_ENABLE:1;      // 0   HFO Enable
// }; 
// union CLKTRIM_REG {
//  Uint32         all;
//  struct CLKTRIM_BITS   bits;
// };

 //-----------------------------------------------------------------------------
 // Bandgap Trim Register
 //-----------------------------------------------------------------------------
 struct BGTRIM_BITS {       // bits  description 
  uint16 rsvd0:14;        // 31:18 Reserved
  uint16 BG_GAIN_TRIM:7;     // 17:11 Bandgap Gain Trim
  uint16 BG_SPARE_TRIM:2;     // 10:9  Bandgap Spare Trim
  uint16 BG_TEMP_TRIM:9;     // 8:0  Bandgap Temp Trim
 };
 union BGTRIM_REG {
  Uint32         all;
  struct BGTRIM_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // AFE Control Register
 //-----------------------------------------------------------------------------
 struct AFECTRL_BITS {      // bits  description 
  uint16 rsvd0:16;        // 31:16 Reserved
	
	uint16 ANALOG_MUX_A_SEL:3;   // 2:0  Analog Mux A Select
  uint16 AFE_MUX_SEL:3;     // 5:3  Analog Front End Mux Select
  uint16 ANALOG_TEST_EN:1;    // 6   Enable Analog Test Points
  uint16 VREG_FLASH_DIS:1;    // 7   2.6V Regulator Disable
  uint16 VREG_3P3_DIS:1;     // 8   3.3V Regulator Disable
  uint16 ANALOG_MUX_B_SEL:3;   // 11:9  Analog Mux B Select
  uint16 COMP_DAC_TEST:1;    // 12   Comparator DAC Test
  uint16 AFE_VIN_MUX:1;     // 13   Isolation Buffer Selection Test
  uint16 AFE_MUX_CH_SEL:2;    // 15:14 AFE Mux Channel Select
 };
 union AFECTRL_REG {
  Uint32         all;
  struct AFECTRL_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // AFE Miscellaneous Register
 //-----------------------------------------------------------------------------
 struct AFEMISC_BITS {      // bits  description 
  uint16 rsvd1:16;       // 31:8  Reserved
  uint16 rsvd0:4;        // 3:0  Reserved	
  uint16 V33_TRIM:4;      // 7:4  V33 Trim Bits
  uint16 rsvd2:8;       // 31:8  Reserved
 };
 union AFEMISC_REG {
  Uint32         all;
  struct AFEMISC_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // Package ID Register
 //-----------------------------------------------------------------------------
// struct PKGID_BITS {       // bits  description 
//  uint16 rsvd0:30;       // 31:1  Reserved
//	
//  uint16 PKG_ID:2;       // 1:0  Package ID
// };
// union PKGID_REG {
//  Uint32         all;
//  struct PKGID_BITS    bits;
// };

 //-----------------------------------------------------------------------------
 // Brownout Register
 //-----------------------------------------------------------------------------
 struct BROWNOUT_BITS {     // bits  description 
 uint16 rsvd0:16; // 31:3 Reserved
 
 uint16 COMP_EN:1; // 0 Brownout
 uint16 INT_EN:1; // 1 Brownout Interrupt Enable
 uint16 INT:1; // 2 Brownout Interrupt Latched Status
 uint16 rsvd1:13; // 31:3 Reserved
 };
 union BROWNOUT_REG {
  Uint32         all;
  struct BROWNOUT_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Global I/O Enable Register
 //-----------------------------------------------------------------------------
 struct GLBIOEN_BITS {     // bits  description 
	uint16 PMBUS_CLK_IO_EN:1;     // bit 16
	uint16 TMR_PWM0_IO_EN:1;     // bit 17
	uint16 TMR_PWM1_IO_EN:1;     // bit 18
	uint16 TMR_CAP_IO_EN:1;      // bit 19
	uint16 SCI_RX0_IO_EN:1;      // bit 20
	uint16 SCI_RX1_IO_EN:1;      // bit 21
	uint16 SCI_TX0_IO_EN:1;      // bit 22 
	uint16 SCI_TX1_IO_EN:1;      // bit 23 
	uint16 TDI_IO_EN:1;        // bit 24
	uint16 TMS_IO_EN:1;        // bit 25
  uint16 TDO_IO_EN:1;        // bit 26
	uint16 TCK_IO_EN:1;        // bit 27
	uint16 ADC_EXT_TRIG_IO_EN:1;   // bit 28
	uint16 FAULT3_IO_EN:1;      // bit 29
  uint16 rsvd0:2;       // 31:30 Reserved
	
	uint16 DPWM0A_IO_EN:1;      // bit 0	
	uint16 DPWM0B_IO_EN:1;      // bit 1
  uint16 DPWM1A_IO_EN:1;      // bit 2
	uint16 DPWM1B_IO_EN:1;      // bit 3
	uint16 DPWM2A_IO_EN:1;      // bit 4
	uint16 DPWM2B_IO_EN:1;      // bit 5
  uint16 DPWM3A_IO_EN:1;      // bit 6
	uint16 DPWM3B_IO_EN:1;      // bit 7
	uint16 SYNC_IO_EN:1;       // bit 8
	uint16 FAULT0_IO_EN:1;      // bit 9
  uint16 FAULT1_IO_EN:1;      // bit 10
	uint16 FAULT2_IO_EN:1;      // bit 11
	uint16 EXT_INT_IO_EN:1;      // bit 12
	uint16 ALERT_IO_EN:1;       // bit 13
  uint16 CONTROL_IO_EN:1;      // bit 14
	uint16 PMBUS_DATA_IO_EN:1;    // bit 15
 };
 union GLBIOEN_REG {
  Uint32         all;
  struct GLBIOEN_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Global I/O Output Enable Register
 //-----------------------------------------------------------------------------
 struct GLBIOOE_BITS {     // bits  description 
	uint16 PMBUS_CLK_IO_OE:1;     // bit 16
	uint16 TMR_PWM0_IO_OE:1;     // bit 17
  uint16 TMR_PWM1_IO_OE:1;     // bit 18
	uint16 TMR_CAP_IO_OE:1;      // bit 19
	uint16 SCI_RX0_IO_OE:1;      // bit 20
	uint16 SCI_RX1_IO_OE:1;      // bit 21
  uint16 SCI_TX0_IO_OE:1;      // bit 22
	uint16 SCI_TX1_IO_OE:1;      // bit 23
	uint16 TDI_IO_OE:1;        // bit 24
	uint16 TMS_IO_OE:1;        // bit 25
  uint16 TDO_IO_OE:1;        // bit 26
	uint16 TCK_IO_OE:1;        // bit 27
	uint16 ADC_EXT_TRIG_IO_OE:1;   // bit 28
	uint16 FAULT3_IO_OE:1;      // bit 29
  uint16 rsvd0:2;       // 31:30 Reserved
	
	uint16 DPWM0A_IO_OE:1;      // bit 0
	uint16 DPWM0B_IO_OE:1;      // bit 1
  uint16 DPWM1A_IO_OE:1;      // bit 2
	uint16 DPWM1B_IO_OE:1;      // bit 3
	uint16 DPWM2A_IO_OE:1;      // bit 4
	uint16 DPWM2B_IO_OE:1;      // bit 5
  uint16 DPWM3A_IO_OE:1;      // bit 6
	uint16 DPWM3B_IO_OE:1;      // bit 7
	uint16 SYNC_IO_OE:1;       // bit 8
	uint16 FAULT0_IO_OE:1;      // bit 9
  uint16 FAULT1_IO_OE:1;      // bit 10
	uint16 FAULT2_IO_OE:1;      // bit 11
	uint16 EXT_INT_IO_OE:1;      // bit 12
	uint16 ALERT_IO_OE:1;       // bit 13
  uint16 CONTROL_IO_OE:1;      // bit 14
	uint16 PMBUS_DATA_IO_OE:1;    // bit 15
 };
 union GLBIOOE_REG {
  Uint32         all;
  struct GLBIOOE_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Global I/O Open Drain Enable Register
 //-----------------------------------------------------------------------------
 struct GLBIOOD_BITS {     // bits  description 
	uint16 PMBUS_CLK_IO_OD:1;     // bit 16
	uint16 TMR_PWM0_IO_OD:1;     // bit 17
	uint16 TMR_PWM1_IO_OD:1;     // bit 18
	uint16 TMR_CAP_IO_OD:1;      // bit 19
	uint16 SCI_RX0_IO_OD:1;      // bit 20
	uint16 SCI_RX1_IO_OD:1;      // bit 21
	uint16 SCI_TX0_IO_OD:1;      // bit 22
	uint16 SCI_TX1_IO_OD:1;      // bit 23
	uint16 TDI_IO_OD:1;        // bit 24
	uint16 TMS_IO_OD:1;        // bit 25
  uint16 TDO_IO_OD:1;        // bit 26
	uint16 TCK_IO_OD:1;        // bit 27
	uint16 ADC_EXT_TRIG_IO_OD:1;   // bit 28
	uint16 FAULT3_IO_OD:1;      // bit 29
	uint16 rsvd0:2;       // 31:30 Reserved
	
	uint16 DPWM0A_IO_OD:1;      // bit 0 
	uint16 DPWM0B_IO_OD:1;      // bit 1
	uint16 DPWM1A_IO_OD:1;      // bit 2
	uint16 DPWM1B_IO_OD:1;      // bit 3
	uint16 DPWM2A_IO_OD:1;      // bit 4
	uint16 DPWM2B_IO_OD:1;      // bit 5
	uint16 DPWM3A_IO_OD:1;      // bit 6
	uint16 DPWM3B_IO_OD:1;      // bit 7
	uint16 SYNC_IO_OD:1;       // bit 8
	uint16 FAULT0_IO_OD:1;      // bit 9
	uint16 FAULT1_IO_OD:1;      // bit 10
	uint16 FAULT2_IO_OD:1;      // bit 11
	uint16 EXT_INT_IO_OD:1;      // bit 12
	uint16 ALERT_IO_OD:1;       // bit 13
	uint16 CONTROL_IO_OD:1;      // bit 14
	uint16 PMBUS_DATA_IO_OD:1;    // bit 15
 };
 union GLBIOOD_REG {
  Uint32         all;
  struct GLBIOOD_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // Global I/O Value Register
 //-----------------------------------------------------------------------------
 struct GLBIOVAL_BITS {    // bits  description 
	uint16 PMBUS_CLK_IO_VALUE:1;     // bit 16
	uint16 TMR_PWM0_IO_VALUE:1;     // bit 17
	uint16 TMR_PWM1_IO_VALUE:1;     // bit 18
	uint16 TMR_CAP_IO_VALUE:1;      // bit 19
	uint16 SCI_RX0_IO_VALUE:1;      // bit 20
	uint16 SCI_RX1_IO_VALUE:1;      // bit 21
	uint16 SCI_TX0_IO_VALUE:1;      // bit 22
	uint16 SCI_TX1_IO_VALUE:1;      // bit 23
  uint16 TDI_IO_VALUE:1;        // bit 24
	uint16 TMS_IO_VALUE:1;        // bit 25
	uint16 TDO_IO_VALUE:1;        // bit 26
	uint16 TCK_IO_VALUE:1;        // bit 27
  uint16 ADC_EXT_TRIG_IO_VALUE:1;   // bit 28
	uint16 FAULT3_IO_VALUE:1;      // bit 29
	uint16 rsvd0:2;       // 31:30 Reserved
	
	uint16 DPWM0A_IO_VALUE:1;      // bit 0
	uint16 DPWM0B_IO_VALUE:1;      // bit 1
  uint16 DPWM1A_IO_VALUE:1;      // bit 2
	uint16 DPWM1B_IO_VALUE:1;      // bit 3
	uint16 DPWM2A_IO_VALUE:1;      // bit 4
	uint16 DPWM2B_IO_VALUE:1;      // bit 5
  uint16 DPWM3A_IO_VALUE:1;      // bit 6
	uint16 DPWM3B_IO_VALUE:1;      // bit 7
	uint16 SYNC_IO_VALUE:1;       // bit 8
	uint16 FAULT0_IO_VALUE:1;      // bit 9
  uint16 FAULT1_IO_VALUE:1;      // bit 10
	uint16 FAULT2_IO_VALUE:1;      // bit 11
	uint16 EXT_INT_IO_VALUE:1;      // bit 12
	uint16 ALERT_IO_VALUE:1;       // bit 13
  uint16 CONTROL_IO_VALUE:1;      // bit 14
	uint16 PMBUS_DATA_IO_VALUE:1;    // bit 15
 };
 union GLBIOVAL_REG {
  Uint32          all;
  struct GLBIOVAL_BITS   bits;
 }; 

 //-----------------------------------------------------------------------------
 // Global I/O Read Value Register
 //-----------------------------------------------------------------------------
 struct GLBIOREAD_BITS {    // bits  description
	uint16 PMBUS_CLK_IO_READ:1;     // bit 16
	uint16 TMR_PWM0_IO_READ:1;     // bit 17
  uint16 TMR_PWM1_IO_READ:1;     // bit 18
	uint16 TMR_CAP_IO_READ:1;      // bit 19
	uint16 SCI_RX0_IO_READ:1;      // bit 20
	uint16 SCI_RX1_IO_READ:1;      // bit 21
  uint16 SCI_TX0_IO_READ:1;      // bit 22
	uint16 SCI_TX1_IO_READ:1;      // bit 23
	uint16 TDI_IO_READ:1;        // bit 24
	uint16 TMS_IO_READ:1;        // bit 25
  uint16 TDO_IO_READ:1;        // bit 26
	uint16 TCK_IO_READ:1;        // bit 27
	uint16 ADC_EXT_TRIG_IO_READ:1;   // bit 28
	uint16 FAULT3_IO_READ:1;      // bit 29 
  uint16 rsvd0:2;       // 31:30 Reserved
	
	uint16 DPWM0A_IO_READ:1;      // bit 0
	uint16 DPWM0B_IO_READ:1;      // bit 1
  uint16 DPWM1A_IO_READ:1;      // bit 2
	uint16 DPWM1B_IO_READ:1;      // bit 3
	uint16 DPWM2A_IO_READ:1;      // bit 4
	uint16 DPWM2B_IO_READ:1;      // bit 5
  uint16 DPWM3A_IO_READ:1;      // bit 6
	uint16 DPWM3B_IO_READ:1;      // bit 7
	uint16 SYNC_IO_READ:1;       // bit 8
	uint16 FAULT0_IO_READ:1;      // bit 9
  uint16 FAULT1_IO_READ:1;      // bit 10
	uint16 FAULT2_IO_READ:1;      // bit 11
	uint16 EXT_INT_IO_READ:1;      // bit 12
	uint16 ALERT_IO_READ:1;       // bit 13
  uint16 CONTROL_IO_READ:1;      // bit 14
	uint16 PMBUS_DATA_IO_READ:1;    // bit 15
 };
 union GLBIOREAD_REG {
  Uint32          all;
  struct GLBIOREAD_BITS  bits;
 }; 

 //-----------------------------------------------------------------------------
 // Temperature Sensor Register
 //-----------------------------------------------------------------------------
// struct TEMPSENCTRL_BITS {   // bits  description
//  uint16 rsvd0:25;      // 31:7  Reserved
//  uint16 TEMP_SENSE_TRIM:6;  // 6:1  Temperature Sensor Trim
//  uint16 TEMP_SENSE_DIS:1;  // 0   Temperature Sensor Disable
// };
// union TEMPSENCTRL_REG {
//  Uint32          all;
//  struct TEMPSENCTRL_BITS bits;
// };

 //-----------------------------------------------------------------------------
 // I/O Mux Control Register
 //-----------------------------------------------------------------------------
 struct IOMUX_BITS {     // bits  description
 uint16 rsvd0:16; // 31:10 Reserved
 uint16 PMBUS_MUX_SEL:1; // 0 PMBus Pins Mux
 uint16 UART_MUX_SEL:1; // 1 UART Pins Mux Control
 uint16 SYNC_MUX_SEL:2; // 3:2 SYNC Pins Mux Control
 uint16 JTAG_DATA_MUX_SEL:2;// 5:4 JTAG Data Pins Mux Control
 uint16 JTAG_CLK_MUX_SEL:2; // 7:6 JTAG Data Pins Mux Control
 uint16 EXT_TRIG_MUX_SEL:2; // 9:8 EXT TRIG Pins Mux Control
 uint16 rsvd1:6; // 31:10 Reserved

 };
 union IOMUX_REG {
  Uint32          all;
  struct IOMUX_BITS    bits;
 };

 //-----------------------------------------------------------------------------
 // Current Sharing Trim Register
 //-----------------------------------------------------------------------------
// struct CSTRIM_BITS {     // bits  Description
//  uint16 rsvd1:20;      // 31:12  Reserved
//  uint16 CURRENT_TRIM:4;   // 11:8  Current Sharing Current Trim
//  uint16 rsvd0:3;      // 7:5   Reserved
//  uint16 RESISTOR_TRIM:5;  // 4:0   Current Sharing Resistor Trim
// };
// union CSTRIM_REG {
//  Uint32          all;
//  struct CSTRIM_BITS    bits;
// };
 
 //-----------------------------------------------------------------------------
 // Current Sharing Control Register
 //-----------------------------------------------------------------------------
 struct CSCTRL_BITS {        // bits  Description
  uint16 DPWM_DUTY:8;       // 23:16  DPWM Duty/Pulse Width for Cur Share
  uint16 rsvd1:8;         // 31:24  Reserved

  uint16 TEST_MODE:4;       // 3:0   Current Sharing Test Mode
  uint16 rsvd0:4;         // 7:4   Reserved	
  uint16 DPWM_PERIOD:8;      // 15:8  DPWM Period for Current Share
 };
 union CSCTRL_REG {
  Uint32          all;
  struct CSCTRL_BITS    bits;
 };

 //-----------------------------------------------------------------------------
 // Temperature Reference Register
 //-----------------------------------------------------------------------------
// struct TEMPREF_BITS {    // bits  Description
//  uint16 rsvd0:20;      // 31:12  Reserved
//  uint16 TEMP_REF:12;    // 11:0  Temperature Reference 
// };
// union TEMPREF_REG {
//  Uint32          all;
//  struct TEMPREF_BITS   bits;
// };

 //-----------------------------------------------------------------------------
 // Clock Gating Control Register (CLKGATECTRL)
 //-----------------------------------------------------------------------------
 struct PWRDISCTRL_BITS {  // bits  Description
  uint16 CPCC_CLK_EN:1;   // 16   Constant Power/Constant Current Clock Enable
  uint16 PCM_CLK_EN:1;   // 17   Peak Current Mode Clock Enable
  uint16 rsvd0:14;     // 31:18  Reserved
	
	uint16 TIMER_CLK_EN:1;  // 0    Timer Clock Enable
  uint16 GIO_CLK_EN:1;   // 1    GIO Clock Enable
  uint16 PMBUS_CLK_EN:1;  // 2    PMBus I/F Clock Enable
  uint16 ADC12_CLK_EN:1;  // 3    ADC12 Control Clock Enable
  uint16 SCI0_CLK_EN:1;   // 4    SCI0 Clock Enable
  uint16 SCI1_CLK_EN:1;   // 5    SCI1 Clock Enable
  uint16 DPWM0_CLK_EN:1;  // 6    DPWM4 Clock Enable
  uint16 DPWM1_CLK_EN:1;  // 7    DPWM4 Clock Enable
  uint16 DPWM2_CLK_EN:1;  // 8    DPWM4 Clock Enable
  uint16 DPWM3_CLK_EN:1;  // 9    DPWM4 Clock Enable
  uint16 FE_CTRL0_CLK_EN:1; // 10   Front End Control 2 Clock Enable
  uint16 FE_CTRL1_CLK_EN:1; // 11   Front End Control 2 Clock Enable
  uint16 FE_CTRL2_CLK_EN:1; // 12   Front End Control 2 Clock Enable
  uint16 FILTER0_CLK_EN:1; // 13   Filter 0 Clock Enable
  uint16 FILTER1_CLK_EN:1; // 14   Filter 1 Clock Enable
  uint16 FILTER2_CLK_EN:1; // 15   Filter 2 Clock Enable
 };
 union PWRDISCTRL_REG {
  Uint32         all;
  struct PWRDISCTRL_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // Bias Trim Register (BIASTRIM)
 //-----------------------------------------------------------------------------
// struct BIASTRIM_BITS {   // bits   Description
//  uint16 rsvd0:25;     // 31:7   Reserved
//  uint16 ADC12_BOOST:1;  // 6    ADC12 Boost 
//  uint16 IBIAS_TRIM:6;   // 5:0   IBias Trim Bits
// };
// union BIASTRIM_REG {
//  Uint32         all;
//  struct BIASTRIM_BITS  bits;
// };

 //=============================================================================
 // Miscellaneous Analog Module Register File
 //=============================================================================
 //struct MISC_ANALOG_REGS {//MiscAnalogRegs
  //extern union CLKTRIM_REG    CLKTRIM;	//Clock Trim Register
  extern union BGTRIM_REG    BGTRIM;		//Bandgap Trim Register
  extern union AFECTRL_REG    AFECTRL;	//AFE Control Register
  extern union AFEMISC_REG    AFEMISC;	//AFE Control Register
  //extern union PKGID_REG     PKGID;		//Package ID Register
  extern union BROWNOUT_REG   BROWNOUT;	//Brownout Register
  extern union GLBIOEN_REG    GLBIOEN;	//Global I/O Enable Register
		//MiscAnalogRegs.GLBIOEN.bit.TMR_PWM0_IO_EN
  extern union GLBIOOE_REG    GLBIOOE;	//Global I/O Output Enable
  extern union GLBIOOD_REG    GLBIOOD;	//Global I/O Open Drain Enable
  extern union GLBIOVAL_REG   GLBIOVAL;	//Global I/O Value
  extern union GLBIOREAD_REG   GLBIOREAD;	//Global I/O Read Value Register
  //extern union TEMPSENCTRL_REG  TEMPSENCTRL;//Temperature Sensor Register
  extern union IOMUX_REG     IOMUX;		//I/O Mux Control Register
  //extern union CSTRIM_REG    CSTRIM;		//Current Sharing Trim Register
  extern union CSCTRL_REG    CSCTRL;		//Current Sharing Control Register
  //extern union TEMPREF_REG    TEMPREF;	//Temperature Reference Register
  extern union PWRDISCTRL_REG  PWRDISCTRL;	//Clock Gating Control Register (CLKGATECTRL)
  //extern union BIASTRIM_REG   BIASTRIM;	//Bias Trim Register (BIASTRIM)
 //};

 //-----------------------------------------------------------------------------
 // ADC Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct MISC_ANALOG_REGS MiscAnalogRegs;




//#endif // end of CYCLONE_FE_CTRL_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_mmc.h
//
// TITLE: Cyclone Memory Controller Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with Spartan_Mmc.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2008. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_MMC_H
//#define CYCLONE_MMC_H


//#endif

//===========================================================================
// Memory Controller Module Individual Register Bit Definitions
//

//-------------------------------------------------
// Static Memory Control Register bit definitions
//
//struct SMCTRL_BITS {       // bits  description
//  uint16 rsvd2:18;        // 31:14 reserved
//  uint16 LEAD:2;         // 13:12 Address setup time cycles (write)
//  uint16 TRAIL:3;        // 11:9  Trailing wait states (read/write)
//  uint16 rsvd1:1;        // 8   reserved
//  uint16 ACTIVE:4;        // 7:4  Wait states (read/write)
//  uint16 ENDIAN:1;        // 3   Endian mode
//  uint16 rsvd0:1;        // 2   reserved
//  uint16 WIDTH:2;        // 1:0  Data width
//};
//union SMCTRL_REG {
//  Uint32         all;
//  struct SMCTRL_BITS   bits;
//};

//-------------------------------------------------
// Write Control Register bit definitions
//
struct WCTRL_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:2  reserved
  
  uint16 WBUF_ENA:1;       // 0   Write buffer enable
  uint16 TRAIL_OVR:1;      // 1   Write trailing wait state override
  uint16 rsvd1:14;        // 31:2  reserved
};
union WCTRL_REG {
  uint16       all;
  struct WCTRL_BITS  bits;
};

//-------------------------------------------------
// Peripheral Control Register bit definitions
//
struct PCTRL_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:1  reserved
  
  uint16 PBUF_ENA:1;       // 0   Peripheral enable
  uint16 rsvd1:15;
};
union PCTRL_REG {
  Uint32         all;
  struct PCTRL_BITS   bits;
};

//-------------------------------------------------
// Peripheral Location Register bit definitions
//
struct PLOC_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
  uint16 LOC15:1;        // 15   Peripheral 15 location
  uint16 LOC14:1;        // 14   Peripheral 14 location
  uint16 LOC13:1;        // 13   Peripheral 13 location
  uint16 LOC12:1;        // 12   Peripheral 12 location
  uint16 LOC11:1;        // 11   Peripheral 11 location
  uint16 LOC10:1;        // 10   Peripheral 10 location
  uint16 LOC9:1;         // 9   Peripheral 9 location
  uint16 LOC8:1;         // 8   Peripheral 8 location
  uint16 LOC7:1;         // 7   Peripheral 7 location
  uint16 LOC6:1;         // 6   Peripheral 6 location
  uint16 LOC5:1;         // 5   Peripheral 5 location
  uint16 LOC4:1;         // 4   Peripheral 4 location
  uint16 LOC3:1;         // 3   Peripheral 3 location
  uint16 LOC2:1;         // 2   Peripheral 2 location
  uint16 LOC1:1;         // 1   Peripheral 1 location
  uint16 LOC0:1;         // 0   Peripheral 0 location
};
union PLOC_REG {
  Uint32         all;
  struct PLOC_BITS   bits;
};

//-------------------------------------------------
// Peripheral Protection Register bit definitions
//
struct PPROT_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
  uint16 PROT15:1;        // 15   Peripheral 15 protection
  uint16 PROT14:1;        // 14   Peripheral 14 protection
  uint16 PROT13:1;        // 13   Peripheral 13 protection
  uint16 PROT12:1;        // 12   Peripheral 12 protection
  uint16 PROT11:1;        // 11   Peripheral 11 protection
  uint16 PROT10:1;        // 10   Peripheral 10 protection
  uint16 PROT9:1;        // 9   Peripheral 9 protection
  uint16 PROT8:1;        // 8   Peripheral 8 protection
  uint16 PROT7:1;        // 7   Peripheral 7 protection
  uint16 PROT6:1;        // 6   Peripheral 6 protection
  uint16 PROT5:1;        // 5   Peripheral 5 protection
  uint16 PROT4:1;        // 4   Peripheral 4 protection
  uint16 PROT3:1;        // 3   Peripheral 3 protection
  uint16 PROT2:1;        // 2   Peripheral 2 protection
  uint16 PROT1:1;        // 1   Peripheral 1 protection
  uint16 PROT0:1;        // 0   Peripheral 0 protection
};
union PPROT_REG {
  Uint32         all;
  struct PPROT_BITS  bits;
};

//===========================================================================
// Memory Controller Module Register File
//
//struct MMC_REGS {
//  union SMCTRL_REG   SMCTRL;   // Static Memory Control Register
//  uint16        RSVD[0xA];  // Reserved (address spacer)
//  union WCTRL_REG   WCTRL;    // Write Control Register
//  union PCTRL_REG   PCTRL;    // Peripheral Control Register
//  union PLOC_REG    PLOC;    // Peripheral Location Register
//  union PPROT_REG   PPROT;    // Peripheral Protection Register
//};

//---------------------------------------------------------------------------
// Memory Controller Module External References & Function Declarations:
//
//extern volatile struct MMC_REGS MmcRegs;

//===========================================================================


//#endif // end of CYCLONE_MMC_H definition

//===========================================================================
// End of file
//===========================================================================
//cyclone_pmbus.h+cyclone_sys.h+cyclone_timer.h+cyclone_uart.h+date.h tst7

//###############################################################################
//
// FILE:  cyclone_pmbus.h
//
// TITLE: Cyclone PMBus Interface Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2008 | CMF | Started with Spartan_Pmbus.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_PMBUS_H
//#define CYCLONE_PMBUS_H


//#endif

 //=============================================================================
 // PMBus Interface Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // PMBus Control Register 1 bit definitions
 //-----------------------------------------------------------------------------
 struct PMBCTRL1_BITS {      // bits  description
  uint16 rsvd0:11;        // 31:21 reserved
  uint16 PRC_CALL:1;       // 20   Process call message enable
  uint16 GRP_CMD:1;        // 19   Group command message enable
  uint16 PEC_ENA:1;        // 18   PEC byte enable
  uint16 EXT_CMD:1;        // 17   Extended command enable
  uint16 CMD_ENA:1;        // 16   Command word enable
  uint16 BYTE_COUNT:8;      // 15:8  Byte count
  uint16 SLAVE_ADDR:7;      // 7:1  Slave address
  uint16 RW:1;          // 0   Read/write indicator
 };
 union PMBCTRL1_REG {
  Uint32          all;
  struct PMBCTRL1_BITS   bits;
 };
 
 //-----------------------------------------------------------------------------
 // PMBus Transmit Data Buffer bit definitions
 //
 // No bitfields are defined for PMBTXBUF because writing
 // to any of the four data bytes triggers the PMBus
 // transmission. Therefore, we force the user to always
 // write to all four bytes at the same time.
 //-----------------------------------------------------------------------------
// struct PMBTXBUF_BITS {      // bits  description
//  uint16 ALL:32;         // 31:0  All the bits
// };
// union PMBTXBUF_REG {
//  Uint32          all;
//  struct PMBTXBUF_BITS   bits;
// };

 //-----------------------------------------------------------------------------
 // PMBus Receive Data Buffer bit definitions
 //-----------------------------------------------------------------------------
// struct PMBRXBUF_BITS {      // bits  description
//  uint16 BYTE3:8;        // 31:24 Byte3
//  uint16 BYTE2:8;        // 16:23 Byte2
//  uint16 BYTE1:8;        // 8:15  Byte1
//  uint16 BYTE0:8;        // 0:7  Byte0
// };
//	struct PMBRXBUF_BYTES {       // bits  description
//	  Uint8 BYTE3;         // 31:24 reserved
//	  Uint8 BYTE2;         // 16:23 Byte #2
//	  Uint8 BYTE1;         // 8:15  Byte #1
//	  Uint8 BYTE0;         // 0:7  Byte #0
// };
// union PMBRXBUF_REG {
//  Uint32          all;
//  struct PMBRXBUF_BITS   bits;
//	struct PMBRXBUF_BYTES	byte;
// };
 
 //-----------------------------------------------------------------------------
 // PMBus Acknowledge Register bit definitions
 //-----------------------------------------------------------------------------
// struct PMBACK_BITS {       // bits  description
//  uint16 rsvd0:31;        // 31:1  reserved
//  uint16 ACK:1;         // 0   Acknowledge enable
// };
// struct PMBACK_BYTES {       // bits  description
//  Uint8 BYTE3;         // 31:24 reserved
//  Uint8 BYTE2;         // 16:23 Byte #2
//  Uint8 BYTE1;         // 8:15  Byte #1
//  Uint8 BYTE0;         // 0:7  Byte #0
// };
// union PMBACK_REG {
//  Uint32         all;
//  struct PMBACK_BITS  bits;
//	struct PMBACK_BYTES	byte;
// };
 
 //-----------------------------------------------------------------------------
 // PMBus Status Register bit definitions
 //-----------------------------------------------------------------------------
// struct PMBST_BITS {        // bits Description
//  uint16 rsvd0:10;        // 31:22 reserved
//  uint16 SCL_RAW:1;       // 21   PMBus Clock Status
//  uint16 SDA_RAW:1;       // 20   PMBus Data Status
//  uint16 CONTROL_RAW:1;     // 19   Control Raw Status
//  uint16 ALERT_RAW:1;      // 18   Alert Raw Status
//  uint16 CONTROL_EDGE:1;     // 17   Control Signal Edge Detected
//  uint16 ALERT_EDGE:1;      // 16   Alert signal detected flag
//  uint16 MASTER:1;        // 15   Master/Slave mode flag
//  uint16 LOST_ARB:1;       // 14   Lost arbitration flag
//  uint16 BUS_FREE:1;       // 13   Bus free flag
//  uint16 UNIT_BUSY:1;      // 12   Unit busy flag
//  uint16 RPT_START:1;      // 11   Repeated start condition flag
//  uint16 SLAVE_ADDR_READY:1;   // 10   Slave address ready flag
//  uint16 CLK_HIGH_TIMEOUT:1;   // 9   Clock high timeout flag
//  uint16 CLK_LOW_TIMEOUT:1;   // 8   Clock low timeout flag
//  uint16 PEC_VALID:1;      // 7   PEC valid flag
//  uint16 NACK:1;         // 6   NACK condition received flag
//  uint16 EOM:1;         // 5   End of message flag
//  uint16 DATA_REQUEST:1;     // 4   Data request flag
//  uint16 DATA_READY:1;      // 3   Data ready flag
//  uint16 RD_BYTE_COUNT:3;    // 2:0  Read byte count
// };

//struct PMBST_BYTES {       // bits  description
//  Uint8 rsvd3;         // 31:24 reserved
//  Uint8 BYTE2;         // 16:23 Byte #2
//  Uint8 BYTE1;         // 8:15  Byte #1
//  Uint8 BYTE0;         // 0:7  Byte #0
//};

//struct PMBST_HALFS {       // bits  description
//  Uint16 HALF1;         // 31:16 Half #1
//  Uint16 HALF0;         // 15:0  Half #0
//};

// Allow access to the bit fields or entire register
//union PMBST_REG {
//  Uint32         all;
//  struct PMBST_BITS   bits;
//  struct PMBST_BYTES   byte;
//  struct PMBST_HALFS   half;
//};

 //-----------------------------------------------------------------------------
 // PMBus Interrupt Mask Register bit definitions
 //-----------------------------------------------------------------------------
 struct PMBINTM_BITS {       // bits  description
  uint16 rsvd0:16;        // 31:10 reserved
  uint16 rsvd1:6;        // 31:10 reserved
  uint16 CLK_HIGH_DETECT:1;    // 9   Clock High Detection Interrupt mask
  uint16 LOST_ARB:1;       // 8   Lost arbitration interrupt mask
  uint16 CONTROL:1;        // 7   Remote module control asserted interrupt mask
  uint16 ALERT:1;         // 6   Alert signal detected interrupt mask
  uint16 EOM:1;          // 5   End of message interrupt mask
  uint16 SLAVE_ADDR_READY:1;   // 4   Slave address ready interrupt mask
  uint16 DATA_REQUEST:1;     // 3   Data request interrupt mask
  uint16 DATA_READY:1;      // 2   Data ready interrupt mask
  uint16 BUS_LOW_TIMEOUT:1;    // 1   Bus low timeout interrupt mask
  uint16 BUS_FREE:1;       // 0   Bus free interrupt mask
 };
 union PMBINTM_REG {
  Uint32         all;
  struct PMBINTM_BITS   bits;
 };

 //-----------------------------------------------------------------------------
 // PMBus Control Register 2 bit definitions
 //-----------------------------------------------------------------------------
 struct PMBCTRL2_BITS {      // bits  description
  uint16 rsvd0:9;        // 31:23 reserved
  uint16 RX_BYTE_ACK_CNT:2;   // 22:21 Num bytes to auto acknowledge in slave mode.
  uint16 MAN_CMD:1;       // 20   Manual command acknowledge mode
  uint16 TX_PEC:1;        // 19   Transmited PEC flag
  uint16 TX_COUNT:3;       // 18:16 Transmit byte count
  uint16 PEC_ENA:1;       // 15   Enable PEC processing
  uint16 SLAVE_MASK:7;      // 14:8  Slave mask
  uint16 MAN_SLAVE_ACK:1;    // 7   Manual slave acknowledge mode enable
  uint16 SLAVE_ADDR:7;      // 6:0  Slave address
 };
// struct PMBCTRL2_BYTES {      // bits  description
//  Uint8 rsvd3;         // 31:24 reserved
//  Uint8 BYTE2;         // 16:23 Byte #2
//  Uint8 BYTE1;         // 8:15  Byte #1
//  Uint8 BYTE0;         // 0:7  Byte #0
//};

//struct PMBCTRL2_HALFS {      // bits  description
//  Uint16 HALF1;         // 31:16 Half #1
//  Uint16 HALF0;         // 15:0  Half #0
//};

// Allow access to the bit fields or entire register
//union PMBCTRL2_REG {
//  Uint32          all;
//  struct PMBCTRL2_BITS   bits;
//  struct PMBCTRL2_BYTES  byte;
//  struct PMBCTRL2_HALFS  half;
//};
 
 //-----------------------------------------------------------------------------
 // PMBus Hold Slave Address Register bit definitions
 //-----------------------------------------------------------------------------
// struct PMBHSA_BITS {       // bits  description
//  uint16 rsvd0:24;        // 31:8  reserved
//  uint16 SLAVE_ADDR:7;      // 7:1  Stored address acknowledged by slave
//  uint16 SLAVE_RW:1;       // 0   Stored R/W bit from slave acknowledge
// };
// union PMBHSA_REG {
//  Uint32         all;
//  struct PMBHSA_BITS   bits;
// };
 
 //-----------------------------------------------------------------------------
 // PMBus Miscellaneous Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct PMBCTRL3_BITS {      // bits  description
  uint16 rsvd0:9;        // 31:23 reserved
  uint16 MASTER_EN:1;      // 22   Master Mode Enable
  uint16 SLAVE_EN:1;       // 21   Slave Mode Enable
  uint16 CLK_LO_DIS:1;      // 20   Clock Low Timeout Disable
  uint16 IBIAS_B_EN:1;      // 19   IBias B enable
  uint16 IBIAS_A_EN:1;      // 18   IBias A enable
  uint16 SCL_DIR:1;       // 17   Clock Pin GPIO Direction
  uint16 SCL_VALUE:1;      // 16   Clock Pin GPIO Value
  uint16 SCL_MODE:1;       // 15   Clock Pin GPIO Mode
  uint16 SDA_DIR:1;       // 14   Clock Pin GPIO Direction
  uint16 SDA_VALUE:1;      // 13   Clock Pin GPIO Value
  uint16 SDA_MODE:1;       // 12   Clock Pin GPIO Mode
  uint16 CNTL_DIR:1;       // 11   Direction of control pins in GPIO mode
  uint16 CNTL_VALUE:1;      // 10   Output value of control pins in GPIO mode
  uint16 CNTL_MODE:1;      // 9   Configures mode of control pins
  uint16 ALERT_DIR:1;      // 8   Alert Pin GPIO Direction
  uint16 ALERT_VALUE:1;     // 7   Value of Alert pin in GPIO mode
  uint16 ALERT_MODE:1;      // 6   Configures mode of Alert pin
  uint16 CNTL_INT_EDGE:1;    // 5   Control interrupt edge select
  uint16 FAST_MODE_PLUS:1;    // 4   Fast mode plus enable
  uint16 FAST_MODE:1;      // 3   Fast mode enable
  uint16 BUS_LO_INT_EDGE:1;   // 2   Bus low timeout interrupt edge select
  uint16 ALERT_EN:1;       // 1   Alert enable
  uint16 RESET:1;        // 0   PMBus Master reset
 };
 union PMBCTRL3_REG {
  Uint32         all;
  struct PMBCTRL3_BITS  bits;
 };
 
 //=============================================================================
 // PMBus Interface Register File
 //=============================================================================
// struct PMBUS_REGS {
  extern union PMBCTRL1_REG  PMBCTRL1;  // PMBus Control Register 1
  //extern union PMBTXBUF_REG  PMBTXBUF;  // PMBus Transmit Data Buffer
  //extern union PMBRXBUF_REG  PMBRXBUF;  // PMBus Receive Data Buffer
  //extern union PMBACK_REG   PMBACK;   // PMBus Acknowledge Register
  //extern union PMBST_REG   PMBST;    // PMBus Status Register
  extern union PMBINTM_REG  PMBINTM;   // PMBus Interrupt Mask Register
  //extern union PMBCTRL2_REG  PMBCTRL2;  // PMBus Control Register 2
  //extern union PMBHSA_REG   PMBHSA;   // PMBus Hold Slave Address Register
  extern union PMBCTRL3_REG  PMBCTRL3;  // PMBus Control Register 3
// };
 
 //---------------------------------------------------------------------------
 // PMBus Interface External References & Function Declarations:
 //
 //extern volatile struct PMBUS_REGS PMBusRegs;
 
 //===========================================================================


//#endif // end of CYCLONE_PMBUS_H definition

//===========================================================================
// End of file
//===========================================================================
//###########################################################################
//
// FILE:  cyclone_sys.h
//
// TITLE: Cyclone System Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###########################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 12 Aug 2009 | CMF | Started with Spartan_Sys.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2008. All rights reserved.
//###########################################################################

////#ifndef CYCLONE_SYS_H
//#define CYCLONE_SYS_H


//#endif

//===========================================================================
// System Module Individual Register Bit Definitions
//

//-------------------------------------------------
// Clock Control Register bit definitions
//
struct CLKCNTL_BITS {      // bits  description
 uint16 rsvd3:16;        // 31:10 reserved
 uint16 rsvd4:6;
 uint16 M_DIV_RATIO:2;     // 9:8  MCLK (processor clock) divide ratio
 uint16 rsvd2:1;        // 7   reserved
 uint16 CLKSR:2;        // 6:5  CLKOUT pin source
 uint16 rsvd1:1;        // 4   reserved
 uint16 CLKDOUT:1;       // 3   CLKOUT pin output data
 uint16 rsvd0:1;        // 2   Reserved
 uint16 ARM_MODE:2;       // 1:0  ARM Mode
};
union CLKCNTL_REG {
  Uint32         all;
  struct CLKCNTL_BITS  bits;
};

//-------------------------------------------------
// System Exception Control Register bit definitions
//
struct SYSECR_BITS {       // bits  description
  uint16 rsvd1:16;        // 31:16 reserved
  uint16 RESET:2;        // 15:14 Software reset
  uint16 rsvd0:11;        // 13:3  reserved
  uint16 PACCOVR:1;       // 2   Peripheral access violation override
  uint16 ACCOVR:1;        // 1   Memory access reset override
  uint16 ILLOVR:1;        // 0   Illegal address reset override
};
union SYSECR_REG {
  Uint32         all;
  struct SYSECR_BITS   bits;
};

//-------------------------------------------------
// System Exception Status Register bit definitions
//
struct SYSESR_BITS {       // bits  description
  uint16 rsvd1:16;        // 31:16 reserved
  
  uint16 PORRST:1;        // 15   Power-up reset flag
  uint16 CLKRST:1;        // 14   Clock fail flag
  uint16 WDRST:1;        // 13   Watchdog reset flag
  uint16 ILLMODE:1;       // 12   Illegal mode flag
  uint16 ILLADR:1;        // 11   Illegal address access flag 
  uint16 ILLACC:1;        // 10   Illegal memory access flag
  uint16 PILLACC:1;       // 9   Peripheral illegal access flag
  uint16 ILLMAP:1;        // 8   Illegal address map flag
  uint16 SWRST:1;        // 7   Software reset flag
  uint16 rsvd0:7;        // 6:0  reserved
};
union SYSESR_REG {
  Uint32         all;
  struct SYSESR_BITS   bits;
};

//-------------------------------------------------
// Abort Exception Status Register bit definitions
//
struct ABRTESR_BITS {       // bits  description
  uint16 rsvd1:16;        // 31:16 reserved
  
  uint16 rsvd0:13;        // 12:0  reserved   
  uint16 PACCVIO:1;       // 13   Peripheral access violation error
  uint16 MEMABT:1;        // 14   Memory access abort
  uint16 ADRABT:1;        // 15   Illegal address abort
};
union ABRTESR_REG {
  Uint32         all;
  struct ABRTESR_BITS  bits;
};

//-------------------------------------------------
// Global Status Register bit definitions
//
struct GLBSTAT_BITS {       // bits  description
  uint16 rsvd1:16;        // 31:8  reserved
  
  uint16 rsvd0:4;        // 3:0  reserved
  uint16 MPUACC:1;        // 4   MPU illegal access flag
  uint16 MPUADDR:1;       // 5   MPU illegal address flag
  uint16 SYSACC:1;        // 6   System illegal access flag
  uint16 SYSADDR:1;       // 7   System illegal address flag
  uint16 rsvd2:8;        // 31:8  reserved
};
union GLBSTAT_REG {
  Uint32         all;
  struct GLBSTAT_BITS  bits;
};

//-------------------------------------------------
// Device Identification Register bit definitions
//
struct DEV_BITS {         // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
  
  uint16 DEV:16;         // 15:0  Device identification code
};
union DEV_REG {
  Uint32         all;
  struct DEV_BITS    bits;
};

//-------------------------------------------------
// System Software Interrupt Flag Register bit definitions
//
struct SSIF_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:1  reserved
  
  uint16 SSIFLAG:1;       // 0   System software interrupt flag
  uint16 rsvd1:15;        // 31:1  reserved
};
union SSIF_REG {
  Uint32         all;
  struct SSIF_BITS    bits;
};

//-------------------------------------------------
// System Software Interrupt Request Register bit definitions
//
struct SSIR_BITS {        // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
  
  uint16 SSDATA:8;        // 7:0  System software interrupt data
  uint16 SSKEY:8;        // 15:8  System software interrupt request key
};
union SSIR_REG {
  Uint32         all;
  struct SSIR_BITS    bits;
};


//===========================================================================
// System Module Register File
//
//struct SYS_REGS {
  extern union CLKCNTL_REG  CLKCNTL;    // Clock Control Register
  //uint16        RSVD[3];    // Reserved (address spacer)
  extern union SYSECR_REG   SYSECR;    // System Exception Control Register
  extern union SYSESR_REG   SYSESR;    // System Exception Status Register
  extern union ABRTESR_REG  ABRTESR;    // Abort Exception Status Register
  extern union GLBSTAT_REG  GLBSTAT;    // Global Status Register
  extern union DEV_REG    DEV;      // Device Identification Register
  //uint16        RSVD1[1];   // Reserved (address spacer)
  extern union SSIF_REG    SSIF;     // System Software Interrupt Flag Register
  extern union SSIR_REG    SSIR;     // System Software Interrupt Request Register
//};

//---------------------------------------------------------------------------
// System Module External References & Function Declarations:
//
//extern volatile struct SYS_REGS SysRegs;

//===========================================================================


//#endif // end of CYCLONE_SYS_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
//
// FILE:  cyclone_timer.h
//
// TITLE: Cyclone Timer Module Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2009 | CMF | Started with Spartan_Timer.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_TIMER_H
//#define CYCLONE_TIMER_H


//#endif

 //=============================================================================
 // TIMER Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // T24 Counter Data Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CNTDAT_BITS {     // bits  description
	uint16 CNT_DAT2:8;       // 23:0  Counter data
  uint16 rsvd0:8;        // 31:24 reserved
	
  uint16 CNT_DAT1:16;       // 23:0  Counter data
 };
 union T24CNTDAT_REG {
  Uint32         all;
  struct T24CNTDAT_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // T24 Counter Control/Status Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CNTCTRL_BITS {     // bits  description
  uint16 rsvd1:16;        // 31:16 reserved
	
	uint16 OV_FLAG:1;       // 0   Overflow event flag
  uint16 OV_INT_ENA:1;      // 1   Overflow interrupt enable
  uint16 EXT_CLK_SEL:1;     // 2   External clock select
  uint16 rsvd0:5;        // 7:3  reserved
  uint16 PRESCALE:8;       // 15:8  Prescale value
 };
 union T24CNTCTRL_REG {
  Uint32          all;
  struct T24CNTCTRL_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // T24 Capture Data Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CAPDAT_BITS {     // bits  description
  uint16 CAP_DAT2:8;       // 23:0  Counter data
  uint16 rsvd0:8;        // 31:24 reserved
	
  uint16 CAP_DAT1:16;       // 23:0  Counter data
 };
 union T24CAPDAT_REG {
  Uint32         all;
  struct T24CAPDAT_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // T24 Capture Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CAPCTRL_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:6  reserved
	
	uint16 CAP_INT_FLAG:1;     // 0   Capture event flag
  uint16 CAP_INT_ENA:1;     // 1   Capture interrupt enable
  uint16 EDGE:2;         // 3:2  Edge select
  uint16 CAP_SEL:2;       // 5:4  Capture Pin Select
  uint16 rsvd1:10;        // 31:6  reserved
 };
 union T24CAPCTRL_REG {
  Uint32          all;
  struct T24CAPCTRL_BITS  bits;
 };
	
 
 //-----------------------------------------------------------------------------
 // T24 I/O Control and Data Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CAPIO_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:3  reserved   
	
	uint16 TCAP_DIR:1;       // 0   TCAP0 pin direction
	uint16 TCAP_OUT:1;       // 1   TCAP0 pin output data
  uint16 TCAP_IN:1;       // 2   TCAP0 pin input data
  uint16 rsvd1:13;        // 31:3  reserved  
 };
 union T24CAPIO_REG {
  Uint32         all;
  struct T24CAPIO_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // T24 Compare Data Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CMPDAT_BITS {     // bits  description
  uint16 CMP_DAT2:8;       // 23:0  Compare data
  uint16 rsvd0:8;        // 31:24 reserved
	
  uint16 CMP_DAT1:16;       // 23:0  Compare data
 };
 union T24CMPDAT_REG {
  Uint32         all;
  struct T24CMPDAT_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // T24 Compare Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct T24CMPCTRL_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:2  reserved
	
	uint16 CMP_INT_FLAG:1;     // 0   Compare event flag
  uint16 CMP_INT_ENA:1;     // 1   Compare interrupt enable
	uint16 rsvd1:14;        // 31:2  reserved
 };
 union T24CMPCTRL_REG {
  Uint32          all;
  struct T24CMPCTRL_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // PWMx Counter Data Register bit definitions
 //-----------------------------------------------------------------------------
 struct T16PWMXCNTDAT_BITS {   // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
	
  uint16 CNT_DAT:16;       // 15:0  Counter data
 };
 union T16PWMXCNTDAT_REG {
  Uint32         all;
  struct T16PWMXCNTDAT_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // PWMx Counter Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct T16PWMXCNTCTRL_BITS {   // bits  description
  uint16 rsvd1:16;        // 31:16 reserved
	
	uint16 OV_INT_FLAG:1;     // 0   Overflow interrupt flag
  uint16 OV_INT_ENA:1;      // 1   Overflow interrupt enable
  uint16 CMP_RESET_ENA:1;    // 2   Counter reset from compare action enable
  uint16 SW_RESET:1;       // 3   Software reset
  uint16 SYNC_EN:1;       // 4   Counter Sync Enable
  uint16 SYNC_SEL:2;       // 6:5  Counter Sync Select
  uint16 rsvd0:1;        // 7   Reserved
  uint16 PRESCALE:8;       // 15:8  Prescale value
 };
 union T16PWMXCNTCTRL_REG {
  Uint32         all;
  struct T16PWMXCNTCTRL_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // PWMx Compare y Data Register bit definitions
 //-----------------------------------------------------------------------------
 struct T16PWMXCMPYDAT_BITS {   // bits  description
  uint16 rsvd0:16;        // 31:16 reserved
	
  uint16 CMP_DAT:16;       // 15:0  Compare data
 };
 union T16PWMXCMPYDAT_REG {
  Uint32         all;
  struct T16PWMXCMPYDAT_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // PWM0 Compare Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct T16PWM0CMPCTRL_BITS {   // bits  description
  uint16 rsvd0:16;        // 31:13 reserved
	
	uint16 CMP0_INT_FLAG:1;    // 0   Compare 0 interrupt flag
  uint16 CMP0_INT_ENA:1;     // 1   Compare 0 interrupt enable
  uint16 CMP1_INT_FLAG:1;    // 2   Compare 1 interrupt flag
  uint16 CMP1_INT_ENA:1;     // 3   Compare 1 interrupt enable
  uint16 PWM_OUT_ACTION0:2;   // 5:4  TPWMx pin output action on T16CMP0DR match
  uint16 PWM_OUT_ACTION1:2;   // 7:6  TPWMx pin output action on T16CMP1DR match
  uint16 PWM_OUT_DRV:1;     // 8   TPMWx pin output control
  uint16 PWM_OUT_ENA:1;     // 9   TPWMx pin output enable
  uint16 PWM_OUT:1;       // 10   TPWMx pin output data
  uint16 PWM_IN:1;        // 11   TPWMx pin state
  uint16 SHADOW:1;        // 12   PWM update control
  uint16 rsvd1:3;        // 31:13 reserved
 };
 union T16PWM0CMPCTRL_REG {
  Uint32         all;
  struct T16PWM0CMPCTRL_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // PWMx Compare Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct T16PWMXCMPCTRL_BITS {   // bits  description
  uint16 rsvd1:16;        // 31:13 reserved
	
	uint16 CMP0_INT_FLAG:1;    // 0   Compare 0 interrupt flag
	uint16 CMP0_INT_ENA:1;     // 1   Compare 0 interrupt enable
	uint16 CMP1_INT_FLAG:1;    // 2   Compare 1 interrupt flag
  uint16 CMP1_INT_ENA:1;     // 3   Compare 1 interrupt enable
  uint16 PWM_OUT_ACTION0:2;   // 5:4  TPWMx pin output action on T16CMP0DR match
  uint16 PWM_OUT_ACTION1:2;   // 7:6  TPWMx pin output action on T16CMP1DR match
  uint16 PWM_OUT_DRV:1;     // 8   TPMWx pin output control
  uint16 PWM_OUT_ENA:1;     // 9   TPWMx pin output enable
  uint16 PWM_OUT:1;       // 10   TPWMx pin output data
  uint16 PWM_IN:1;        // 11   TPWMx pin state
  uint16 SHADOW:1;        // 12   PWM update control
  uint16 rsvd2:3;        // 31:13 reserved
 };
 union T16PWMXCMPCTRL_REG {
  Uint32         all;
  struct T16PWMXCMPCTRL_BITS  bits;
 };
 
 //-----------------------------------------------------------------------------
 // Watchdog Status Register bit definitions
 //-----------------------------------------------------------------------------
 struct WDST_BITS {       // bits  description
  uint16 rsvd0:16;       // 31:4  reserved
  uint16 rsvd1:12;	
  uint16 WAKE_EV_RAW:1;     // 3   Watchdog Wake Event Raw Status
  uint16 WD_EV_RAW:1;      // 2   Watchdog Event Raw Status
  uint16 WAKE_EV_INT:1;     // 1   Watchdog Wake Event Interrupt Status
  uint16 WD_EV_INT:1;     // 0   Watchdog Event Interrupt Status
 };
 union WDST_REG {
  Uint32         all;
  struct WDST_BITS    bits;
 };

 //-----------------------------------------------------------------------------
 // Watchdog Control Register bit definitions
 //-----------------------------------------------------------------------------
 struct WDCTRL_BITS {       // bits  description
  uint16 rsvd1:16;        // 31:15 reserved
  uint16 rsvd2:1;	
  uint16 WD_PERIOD:7;        // 14:8  WD period
	
  uint16 rsvd0:1;        // 7   reserved
  uint16 PROTECT:1;       // 6   Watchdog protect bit - active low.
  uint16 CPU_RESET_EN:1;     // 5   WD reset of CPU enable
  uint16 WDRST_INT_EN:1;     // 4   WD reset event interrupt enable
  uint16 WKEV_INT_EN:1;     // 3   WD wake event interrupt enable
  uint16 WKEV_EN:1;       // 2   WD wake event enable
  uint16 WDRST_EN:1;       // 1   WD reset event enable
  uint16 CNT_RESET:1;      // 0   WD reset
 };
 union WDCTRL_REG {
  Uint32         all;
  struct WDCTRL_BITS   bits;
 };

 //=============================================================================
 // Timer Module Register File
 //=============================================================================
 //struct TIMER_REGS {
  extern union T24CNTDAT_REG    T24CNTDAT;    // T24 Counter Data Register
  extern union T24CNTCTRL_REG   T24CNTCTRL;    // T24 Counter Control/Status Register
  extern union T24CAPDAT_REG    T24CAPDAT;    // T24 Capture Data Register
  //uint16           RSVD[2];     // Reserved (address spacer)
  extern union T24CAPCTRL_REG   T24CAPCTRL;    // T24 Capture Control Register
  //uint16           RSVD1[2];     // Reserved (address spacer)
  extern union T24CAPIO_REG    T24CAPIO;     // T24 I/O Control and Data Register
  extern union T24CMPDAT_REG    T24CMPDAT0;    // T24 Compare Data Register
  extern union T24CMPDAT_REG    T24CMPDAT1;    // T24 Compare Data Register
  extern union T24CMPCTRL_REG   T24CMPCTRL0;   // T24 Compare Control Register
  extern union T24CMPCTRL_REG   T24CMPCTRL1;   // T24 Compare Control Register
  extern union T16PWMXCNTDAT_REG  T16PWM0CNTDAT;  // PWM0 Counter Data Register
  extern union T16PWMXCNTCTRL_REG T16PWM0CNTCTRL;  // PWM0 Counter Control Register
  extern union T16PWMXCMPYDAT_REG T16PWM0CMP0DAT;  // PWM0 Compare Channel 0 Data Register
  extern union T16PWMXCMPYDAT_REG T16PWM0CMP1DAT;  // PWM0 Compare Channel 1 Data Register
  extern union T16PWM0CMPCTRL_REG T16PWM0CMPCTRL;  // PWM0 Compare Control Register
  //uint16           RSVD4[4];     // Reserved (address spacer)
  extern union T16PWMXCNTDAT_REG  T16PWM1CNTDAT;  // PWM1 Counter Data Register
  extern union T16PWMXCNTCTRL_REG T16PWM1CNTCTRL;  // PWM1 Counter Control Register
  extern union T16PWMXCMPYDAT_REG T16PWM1CMP0DAT;  // PWM1 Compare Channel 0 Data Register
  extern union T16PWMXCMPYDAT_REG T16PWM1CMP1DAT;  // PWM1 Compare Channel 1 Data Register
  extern union T16PWMXCMPCTRL_REG T16PWM1CMPCTRL;  // PWM1 Compare Control Register
  extern union T16PWMXCNTDAT_REG  T16PWM2CNTDAT;  // PWM2 Counter Data Register
  extern union T16PWMXCNTCTRL_REG T16PWM2CNTCTRL;  // PWM2 Counter Control Register
  extern union T16PWMXCMPYDAT_REG T16PWM2CMP0DAT;  // PWM2 Compare Channel 0 Data Register
  extern union T16PWMXCMPYDAT_REG T16PWM2CMP1DAT;  // PWM2 Compare Channel 1 Data Register
  extern union T16PWMXCMPCTRL_REG T16PWM2CMPCTRL;  // PWM2 Compare Control Register
  extern union T16PWMXCNTDAT_REG  T16PWM3CNTDAT;  // PWM3 Counter Data Register
  extern union T16PWMXCNTCTRL_REG T16PWM3CNTCTRL;  // PWM3 Counter Control Register
  extern union T16PWMXCMPYDAT_REG T16PWM3CMP0DAT;  // PWM3 Compare Channel 0 Data Register
  extern union T16PWMXCMPYDAT_REG T16PWM3CMP1DAT;  // PWM3 Compare Channel 1 Data Register
  extern union T16PWMXCMPCTRL_REG T16PWM3CMPCTRL;  // PWM3 Compare Control Register
  extern union WDST_REG WDST;       // Watchdog Status Register
  extern union WDCTRL_REG     WDCTRL;      // Watchdog Control Register
 //};


 //-----------------------------------------------------------------------------
 // Timer Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct TIMER_REGS TimerRegs;

 //===========================================================================


//#endif // end of CYCLONE_TIMER_H definition

//===========================================================================
// End of file
//===========================================================================
//###############################################################################
//
// FILE:  cyclone_uart.h
//
// TITLE: Cyclone Uart Register Definitions.
//
// NOTES:
// 1) Bitfields have been defined for big-endian only.
//###############################################################################
//
// Ver | dd mmm yyyy | Who | Description of changes
// ======|=============|======|==============================================
// 1.00 | 19 Aug 2009 | CMF | Started with Spartan_Uart.h.
//    |       |   | Updated for 1.0 Memory map document.
//    |       |   |
//
// Texas Instruments, Inc
// Copyright Texas Instruments 2009. All rights reserved.
//###############################################################################

////#ifndef CYCLONE_UART_H
//#define CYCLONE_UART_H


//#endif

 //=============================================================================
 // UART Individual Register Bit Definitions
 //=============================================================================

 //-----------------------------------------------------------------------------
 // UART Control Register 0 bit definitions
 //-----------------------------------------------------------------------------
 struct UARTCTRL0_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved 
  uint16 rsvd1:8;		
  uint16 STOP:1;         // 7   Prescaler for clock
  uint16 PARITY:1;        // 6   Parity selection
  uint16 PARITY_ENA:1;      // 5   Parity enable
  uint16 SYNC_MODE:1;      // 4   Sync mode selection
  uint16 ADDR_MODE:1;      // 3   Address mode selection
  uint16 DATA_SIZE:3;      // 2:0  TX and RX data size
 };
 union UARTCTRL0_REG {
  Uint32         all;
  struct UARTCTRL0_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // UART Receive Status Register bit definitions
 //-----------------------------------------------------------------------------
 struct UARTRXST_BITS {      // bits  description
  uint16 rsvd0:16;        // 31:5  reserved
  uint16 rsvd1:11;		
  uint16 RX_IDLE:1;       // 4   RX idle status 
  uint16 SLEEP:1;        // 3   Sleep
  uint16 RX_RDY:1;        // 2   RX ready status
  uint16 RX_WAKE:1;       // 1   RX wake status
  uint16 RX_ENA:1;        // 0   RX enable
 };
 union UARTRXST_REG {
  Uint32         all;
  struct UARTRXST_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // UART Transmit Status Register bit definitions
 //-----------------------------------------------------------------------------
 struct UARTTXST_BITS {      // bits  description
  uint16 rsvd1:16;        // 31:8  reserved
  uint16 rsvd2:8;		
  uint16 CONTINUE:1;       // 7   Continue
  uint16 LOOPBACK:1;       // 6   Loopback enable
  uint16 rsvd0:2;        // 5:4  reserved
  uint16 TX_EMPTY:1;       // 3   TX empty
  uint16 TX_RDY:1;        // 2   TX ready status
  uint16 TX_WAKE:1;       // 1   TX wake status
  uint16 TX_ENA:1;        // 0   TX enable
 };
 union UARTTXST_REG {
  Uint32         all;
  struct UARTTXST_BITS  bits;
 };

 //-----------------------------------------------------------------------------
 // UART Control Register 3 bit definitions
 //-----------------------------------------------------------------------------
 struct UARTCTRL3_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
  uint16 rsvd1:8;		
  uint16 SW_RESET:1;       // 7   Software reset
  uint16 POWERDOWN:1;      // 6   Power down
  uint16 CLOCK:1;        // 5   Clock select
  uint16 RX_INT_ENA:1;      // 4   RX interrupt enable
  uint16 TX_INT_ENA:1;      // 3   TX interrupt enable
  uint16 WAKEUP_INT_ENA:1;    // 2   Wakeup interrupt enable
  uint16 BRKDT_INT_ENA:1;    // 1   Break detect interrupt enable
  uint16 ERR_INT_ENA:1;     // 0   RX error interrupt enable
 };
 union UARTCTRL3_REG {
  Uint32         all;
  struct UARTCTRL3_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // UART Interrupt Status Register bit definitions
 //-----------------------------------------------------------------------------
 struct UARTINTST_BITS {     // bits  description
  uint16 rsvd1:16;        // 31:8  reserved
  uint16 rsvd2:8;		
  uint16 BUS_BUSY:1;       // 7   RX bus busy flag
  uint16 rsvd0:1;        // 6   reserved
  uint16 FRAME_ERR:1;      // 5   RX framing error flag
  uint16 OVERRUN_ERR:1;     // 4   RX overrun error flag
  uint16 PARITY_ERR:1;      // 3   RX parity error flag
  uint16 WAKEUP_INT:1;      // 2   Wakeup interrupt flag
  uint16 BRKDT_INT:1;      // 1   Break detect interrupt flag
  uint16 RX_ERR:1;        // 0   RX error flag
 };
 union UARTINTST_REG {
  Uint32         all;
  struct UARTINTST_BITS bits;
 }; 

 //-----------------------------------------------------------------------------
 // UART Baud Divisor High Byte Register bit definitions
 //-----------------------------------------------------------------------------
 struct UARTHBAUD_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
	
  uint16 BAUD_DIV_H:8;      // 7:0  High byte of baud divisor
  uint16 rsvd1:8;
 };
 union UARTHBAUD_REG {
  Uint32         all;
  struct UARTHBAUD_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // UART Baud Divisor Middle Byte Register bit definitions
 //-----------------------------------------------------------------------------
 struct UARTMBAUD_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
	
  uint16 BAUD_DIV_M:8;      // 7:0  Middle byte of baud divisor
  uint16 rsvd1:8;
 };
 union UARTMBAUD_REG {
  Uint32         all;
  struct UARTMBAUD_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // UART Baud Divisor Low Byte Register bit definitions
 //-----------------------------------------------------------------------------
 struct UARTLBAUD_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
	
  uint16 BAUD_DIV_L:8;      // 7:0  Low byte of baud divisor
  uint16 rsvd1:8;
 };
 union UARTLBAUD_REG {
  Uint32         all;
  struct UARTLBAUD_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // UART Receive Buffer bit definitions
 //-----------------------------------------------------------------------------
 struct UARTRXBUF_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
	
  uint16 RXDAT:8;        // 7:0  Receive data
  uint16 rsvd1:8;
 };
 union UARTRXBUF_REG {
  Uint32         all;
  struct UARTRXBUF_BITS bits;
 };
 
 //-----------------------------------------------------------------------------
 // UART Transmit Buffer bit definitions
 //-----------------------------------------------------------------------------
 struct UARTTXBUF_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:8  reserved
	
  uint16 TXDAT:8;        // 7:0  Transmit data
  uint16 rsvd1:8;
 };
 union UARTTXBUF_REG {
  Uint32         all;
  struct UARTTXBUF_BITS bits;
 };

 //-----------------------------------------------------------------------------
 // UART Pin Control Register 1 bit definitions
 //-----------------------------------------------------------------------------
 struct UARTIOCTRL_BITS {     // bits  description
  uint16 rsvd0:16;        // 31:4  reserved
  uint16 rsvd1:12;	
  uint16 DATA_IN:1;       // 3   Input data from pin
  uint16 DATA_OUT:1;       // 2   Output data to pin
  uint16 IO_FUNC:1;       // 1   Pin function
  uint16 IO_DIR:1;        // 0   Pin direction
 };
 union UARTIOCTRL_REG {
  Uint32         all;
  struct UARTIOCTRL_BITS bits;
 };
 
 //=============================================================================
 // UART Module Register File
 //=============================================================================
 //struct UART_REGS { 
  extern union UARTCTRL0_REG UARTCTRL0;    // UART Control Register 0
  extern union UARTRXST_REG  UARTRXST;    // UART Receive Status Register
  extern union UARTTXST_REG  UARTTXST;    // UART Transmit Status Register
  extern union UARTCTRL3_REG UARTCTRL3;    // UART Control Register 3
  extern union UARTINTST_REG UARTINTST;    // UART Interrupt Status Register
  extern union UARTHBAUD_REG UARTHBAUD;    // UART Baud Divisor High Byte Register
  extern union UARTMBAUD_REG UARTMBAUD;    // UART Baud Divisor Middle Byte Register
  extern union UARTLBAUD_REG UARTLBAUD;    // UART Baud Divisor Low Byte Register
  //uint16        RSVD[1];     // Reserved (address spacer)
  extern union UARTRXBUF_REG UARTRXBUF;    // UART Receive Buffer
  extern union UARTTXBUF_REG UARTTXBUF;    // UART Transmit Buffer
  extern union UARTIOCTRL_REG UARTIOCTRLSCLK; // UART SCLK Pin Control Register
  extern union UARTIOCTRL_REG UARTIOCTRLRX;  // UART RX Pin Control Register
  extern union UARTIOCTRL_REG UARTIOCTRLTX;  // UART TX Pin Control Register
 //};
 
 
 //-----------------------------------------------------------------------------
 // UART Module External References & Function Declarations:
 //-----------------------------------------------------------------------------
 //extern volatile struct UART_REGS Uart0Regs;
 //extern volatile struct UART_REGS Uart1Regs;
 
 //=============================================================================


//#endif // end of CYCLONE_UART_H definition

//===========================================================================
// End of file
//===========================================================================
//date.h
//#define BUILD_DATE 111209
//function_definitions.h+Global_IO.h+include.h+pmbus.h+pmbus_coefficients.h tst8











//+Global_IO.h
//#define FAULT3_GLBIO_BIT_POSITION        (29)
//#define ADC_EXT_TRIG_GLBIO_BIT_POSITION     (28)
//#define TCK_GLBIO_BIT_POSITION          (27)
//#define TDO_GLBIO_BIT_POSITION          (26)
//#define TMS_GLBIO_BIT_POSITION          (25)
//#define TDI_GLBIO_BIT_POSITION          (24)
//#define SCI_TX1_GLBIO_BIT_POSITION        (23)
//#define SCI_TX0_GLBIO_BIT_POSITION        (22)
//#define SCI_RX1_GLBIO_BIT_POSITION        (21)
//#define SCI_RX0_GLBIO_BIT_POSITION        (20)
//#define TMR_CAP_GLBIO_BIT_POSITION        (19)
//#define TMR_PWM1_GLBIO_BIT_POSITION       (18)
//#define TMR_PWM0_GLBIO_BIT_POSITION       (17)
//#define PMBUS_CLK_GLBIO_BIT_POSITION       (16)
//#define PMBUS_DATA_GLBIO_BIT_POSITION      (15)
//#define CONTROL_GLBIO_BIT_POSITION        (14)
//#define ALERT_GLBIO_BIT_POSITION         (13)
//#define EXT_INT_GLBIO_BIT_POSITION        (12)
//#define FAULT2_GLBIO_BIT_POSITION        (11)
//#define FAULT1_GLBIO_BIT_POSITION        (10)
//#define FAULT0_GLBIO_BIT_POSITION         (9)
//#define SYNC_GLBIO_BIT_POSITION          (8)
//#define DPWM4B_GLBIO_BIT_POSITION         (7)
//#define DPWM4A_GLBIO_BIT_POSITION         (6)
//#define DPWM3B_GLBIO_BIT_POSITION         (5)
//#define DPWM3A_GLBIO_BIT_POSITION         (4)
//#define DPWM2B_GLBIO_BIT_POSITION         (3)
//#define DPWM2A_GLBIO_BIT_POSITION         (2)
//#define DPWM1B_GLBIO_BIT_POSITION         (1)
//#define DPWM1A_GLBIO_BIT_POSITION         (0)



//#define FAULT3_GLBIO_BIT_MASK         (1 << FAULT3_GLBIO_BIT_POSITION) 
//#define ADC_EXT_TRIG_GLBIO_BIT_MASK      (1 << ADC_EXT_TRIG_GLBIO_BIT_POSITION)     
//#define TCK_GLBIO_BIT_MASK          (1 << TCK_GLBIO_BIT_POSITION)          
//#define TDO_GLBIO_BIT_MASK          (1 << TDO_GLBIO_BIT_POSITION)          
//#define TMS_GLBIO_BIT_MASK          (1 << TMS_GLBIO_BIT_POSITION)          
//#define TDI_GLBIO_BIT_MASK          (1 << TDI_GLBIO_BIT_POSITION)          
//#define SCI_TX1_GLBIO_BIT_MASK        (1 << SCI_TX1_GLBIO_BIT_POSITION)        
//#define SCI_TX0_GLBIO_BIT_MASK        (1 << SCI_TX0_GLBIO_BIT_POSITION)       
//#define SCI_RX1_GLBIO_BIT_MASK        (1 << SCI_RX1_GLBIO_BIT_POSITION)        
//#define SCI_RX0_GLBIO_BIT_MASK        (1 << SCI_RX0_GLBIO_BIT_POSITION)        
//#define TMR_CAP_GLBIO_BIT_MASK        (1 << TMR_CAP_GLBIO_BIT_POSITION)        
//#define TMR_PWM1_GLBIO_BIT_MASK        (1 << TMR_PWM1_GLBIO_BIT_POSITION)       
//#define TMR_PWM0_GLBIO_BIT_MASK        (1 << TMR_PWM0_GLBIO_BIT_POSITION)       
//#define PMBUS_CLK_GLBIO_BIT_MASK       (1 << PMBUS_CLK_GLBIO_BIT_POSITION)       
//#define PMBUS_DATA_GLBIO_BIT_MASK       (1 << PMBUS_DATA_GLBIO_BIT_POSITION)      
//#define CONTROL_GLBIO_BIT_MASK        (1 << CONTROL_GLBIO_BIT_POSITION)        
//#define ALERT_GLBIO_BIT_MASK         (1 << ALERT_GLBIO_BIT_POSITION)         
//#define EXT_INT_GLBIO_BIT_MASK        (1 << EXT_INT_GLBIO_BIT_POSITION)        
//#define FAULT2_GLBIO_BIT_MASK         (1 << FAULT2_GLBIO_BIT_POSITION)        
//#define FAULT1_GLBIO_BIT_MASK         (1 << FAULT1_GLBIO_BIT_POSITION)        
//#define FAULT0_GLBIO_BIT_MASK         (1 << FAULT0_GLBIO_BIT_POSITION)        
//#define SYNC_GLBIO_BIT_MASK          (1 << SYNC_GLBIO_BIT_POSITION)          
//#define DPWM4B_GLBIO_BIT_MASK         (1 << DPWM4B_GLBIO_BIT_POSITION)         
//#define DPWM4A_GLBIO_BIT_MASK         (1 << DPWM4A_GLBIO_BIT_POSITION)         
//#define DPWM3B_GLBIO_BIT_MASK         (1 << DPWM3B_GLBIO_BIT_POSITION)         
//#define DPWM3A_GLBIO_BIT_MASK         (1 << DPWM3A_GLBIO_BIT_POSITION)         
//#define DPWM2B_GLBIO_BIT_MASK         (1 << DPWM2B_GLBIO_BIT_POSITION)         
//#define DPWM2A_GLBIO_BIT_MASK         (1 << DPWM2A_GLBIO_BIT_POSITION)         
//#define DPWM1B_GLBIO_BIT_MASK         (1 << DPWM1B_GLBIO_BIT_POSITION)         
//#define DPWM1A_GLBIO_BIT_MASK         (1 << DPWM1A_GLBIO_BIT_POSITION)         //include.h

//#include "Cyclone_Device.h"   // UCD30xx Headers Include File
//include.h

//#include "software_interrupts.h"
//#include "system_defines.h"
//#include "function_definitions.h"
//#include "variables.h"
//#include "pmbus.h"
//#include "pmbus_commands.h"
//#include "pmbus_coefficients.h"

////#ifdef PMBUS_COEFFICIENTS
////#include "pmbus_coefficients.h"
////#endif



//pmbus.h
//===========================================================================
// PMBus Module (PmbusReg) Constant Definitions
//
//#include "system_defines.h"

//#define PMBCTRL1_BYTE2_PRC_CALL 0x10	// 20   Process call message enable
//#define PMBCTRL1_BYTE2_GRP_CMD	8		// 19   Group command message enable
//#define PMBCTRL1_BYTE2_PEC_ENA	4		// 18   PEC byte enable
//#define PMBCTRL1_BYTE2_EXT_CMD	2		// 17   Extended command enable
//#define PMBCTRL1_BYTE2_CMD_ENA	1		// 16   Command word enable

//#define PMBCTRL1_BYTE0_RW		1		// 0   Read/write indicator

//#define PMBCTRL1_ALL_PRC_CALL	0x100000	// 20   Process call message enable
//#define PMBCTRL1_ALL_GRP_CMD	0x80000		// 19   Group command message enable
//#define PMBCTRL1_ALL_PEC_ENA	0x40000		// 18   PEC byte enable
//#define PMBCTRL1_ALL_EXT_CMD	0x20000		// 17   Extended command enable
//#define PMBCTRL1_ALL_CMD_ENA	0x10000		// 16   Command word enable

//#define PMBACK_BYTE0_ACK 1 //0 pmbus acknowledge enable

//#define PMBINTM_BYTE1_LOST_ARB			1		// 8   Lost arbitration interrupt mask

//#define PMBINTM_BYTE0_CONTROL			0x80	// 7   Remote module control asserted interrupt mask
//#define PMBINTM_BYTE0_ALERT				0x40	// 6   Alert signal detected interrupt mask
//#define PMBINTM_BYTE0_EOM				0x20	// 5   End of message interrupt mask
//#define PMBINTM_BYTE0_SLAVE_ADDR_READY	0x10	// 4   Slave address ready interrupt mask
//#define PMBINTM_BYTE0_DATA_REQUEST		8		// 3   Data request interrupt mask
//#define PMBINTM_BYTE0_DATA_READY			4		// 2   Data ready interrupt mask
//#define PMBINTM_BYTE0_BUS_LOW_TIMEOUT	2		// 1   Bus low timeout interrupt mask
//#define PMBINTM_BYTE0_BUS_FREE			1		// 0   Bus free interrupt mask

//#define PMBINTM_HALF0_LOST_ARB			0x10000		// 8   Lost arbitration interrupt mask

//#define PMBCTRL2_HALF0_PEC_ENA			0x8000	// 15   Enable PEC processing

//#define PMBHSA_BYTE0_SLAVE_ADDR_MASK	0xf7	// 7:1  Stored address acknowledged by slave
//#define PMBHSA_BYTE0_SLAVE_RW			1		// 0   Stored R/W bit from slave acknowledge

//#define PMBCTRL3_BYTE0_CNTL_INT_EDGE		0x20	// 5   Control interrupt edge select
//#define PMBCTRL3_BYTE0_FAST_MODE_PLUS_ENA	0x10	// 4   Fast mode plus enable
//#define PMBCTRL3_BYTE0_FAST_MODE_ENA		8		// 3   Fast mode enable
//#define PMBCTRL3_BYTE0_BUS_LO_INT_EDGE		4		// 2   Bus low timeout interrupt edge select
//#define PMBCTRL3_BYTE0_ALERT_ENA			2		// 1   Alert enable
//#define PMBCTRL3_BYTE0_RESET				1		// 0   PMBus Master reset


//=========================================================================================
// PMBus module definitions
//=========================================================================================
	// PMBST Register
//#define PMBST_ALL_CONTROL_RAW			(0x00080000)	// 19 Control Pin Raw status
//#define PMBST_ALL_ALERT_RAW				(0x00040000)	// 18 Alert Pin Raw status 
//#define PMBST_ALL_CONTROL_EDGE			(0x00020000)	// 17 Remote module control asserted flag
//#define PMBST_ALL_ALERT_EDGE			(0x00010000)	// 16 Alert signal detected flag
//#define PMBST_ALL_MASTER					(0x00008000)	// 15 Master/Slave mode flag
//#define PMBST_ALL_LOST_ARB					(0x00004000)	// 14 Lost arbitration flag
//#define PMBST_ALL_BUS_FREE					(0x00002000)	// 13 Bus free flag
//#define PMBST_ALL_UNIT_BUSY					(0x00001000)	// 12 Unit busy flag
//#define PMBST_ALL_RPT_START					(0x00000800)	// 11 Repeated start condition flag
//#define PMBST_ALL_SLAVE_ADDR_READY			(0x00000400)	// 10 Slave address ready flag
//#define PMBST_ALL_CLK_HIGH_TIMEOUT			(0x00000200)	// 9  Clock high timeout flag
//#define PMBST_ALL_CLK_LOW_TIMEOUT			(0x00000100)	// 8  Clock low timeout flag
//#define PMBST_ALL_PEC_VALID					(0x00000080)	// 7  PEC valid flag
//#define PMBST_ALL_NACK						(0x00000040)	// 6  NACK condition received flag
//#define PMBST_ALL_EOM						(0x00000020)	// 5  End of message flag
//#define PMBST_ALL_DATA_REQUEST				(0x00000010)	// 4  Data request flag
//#define PMBST_ALL_DATA_READY				(0x00000008)	// 3  Data ready flag
//#define PMBST_ALL_RD_BYTE_COUNT				(0x00000007)	// 2:0 Read byte count mask

// ***KKN***HEM	It would be nice to get rid of these _BYTE0_ and _HALF0_ values. 
// *** 			Requires change to _ALL_ in multiple places in pmbus.c.
//#define PMBST_HALF0_MASTER					(0x8000)		// 15 Master/Slave mode flag
//#define PMBST_HALF0_LOST_ARB				(0x4000)		// 14 Lost arbitration flag
//#define PMBST_HALF0_BUS_FREE				(0x2000)		// 13 Bus free flag
//#define PMBST_HALF0_UNIT_BUSY				(0x1000)		// 12 Unit busy flag
//#define PMBST_HALF0_RPT_START				(0x0800)		// 11 Repeated start condition flag
//#define PMBST_HALF0_SLAVE_ADDR_READY		(0x0400)		// 10 Slave address ready flag
//#define PMBST_HALF0_CLK_HIGH_TIMEOUT		(0x0200)		// 9  Clock high timeout flag
//#define PMBST_HALF0_CLK_LOW_TIMEOUT			(0x0100)		// 8  Clock low timeout flag
//#define PMBST_HALF0_PEC_VALID				(0x0080)		// 7  PEC valid flag
//#define PMBST_HALF0_NACK					(0x0040)		// 6  NACK condition received flag
//#define PMBST_HALF0_EOM						(0x0020)		// 5  End of message flag
//#define PMBST_HALF0_DATA_REQUEST			(0x0010)		// 4  Data request flag
//#define PMBST_HALF0_DATA_READY				(0x0008)		// 3  Data ready flag
//#define PMBST_HALF0_RD_BYTE_COUNT			(0x0007)		// 2:0 Read byte count mask

//#define PMBST_BYTE0_PEC_VALID				(0x80)			// 7  PEC valid flag
//#define PMBST_BYTE0_NACK					(0x40)			// 6  NACK condition received flag
//#define PMBST_BYTE0_EOM						(0x20)			// 5  End of message flag
//#define PMBST_BYTE0_DATA_REQUEST			(0x10)			// 4  Data request flag
//#define PMBST_BYTE0_DATA_READY				(0x08)			// 3  Data ready flag
//#define PMBST_BYTE0_RD_BYTE_COUNT			(0x07)			// 2:0 Read byte count mask


	// PMBCTRL2 Register
//#define PMBCTRL2_ALL_RX_BYTE_ACK_CNT		(0x00600000)	// 22:21 Received byte acknowledge count	
//#define PMBCTRL2_ALL_MAN_CMD				(0x00100000)	// 20   Manual command acknowledge mode
//#define PMBCTRL2_ALL_TX_PEC					(0x00080000)	// 19   Transmited PEC flag
//#define PMBCTRL2_ALL_TX_COUNT				(0x00070000)	// 18:16 Transmit byte count
//#define PMBCTRL2_ALL_PEC_ENA				(0x00008000)	// 15   Enable PEC processing
//#define PMBCTRL2_ALL_SLAVE_MASK				(0x00007F00)	// 14:8  Slave mask
//#define PMBCTRL2_ALL_MAN_SLAVE_ACK			(0x00000080)	// 7   Manual slave acknowledge mode enable
//#define PMBCTRL2_ALL_SLAVE_ADDR				(0x0000007F)	// 6:0  Slave address

//#define PMBCTRL2_BYTE2_RX_BYTE_ACK_CNT		(0x60)			// 22:21 Received byte acknowledge count	
//#define PMBCTRL2_BYTE2_MAN_CMD				(0x10)			// 20   Manual command acknowledge mode
//#define PMBCTRL2_BYTE2_TX_PEC				(0x08)			// 19   Transmited PEC flag
//#define PMBCTRL2_BYTE2_TX_COUNT				(0x07)			// 18:16 Transmit byte count
//#define PMBCTRL2_BYTE1_PEC_ENA				(0x80)			// 15   Enable PEC processing
//#define PMBCTRL2_BYTE1_SLAVE_MASK			(0x7F)			// 14:8  Slave mask
//#define PMBCTRL2_BYTE0_MAN_SLAVE_ACK		(0x80)			// 7   Manual slave acknowledge mode enable
//#define PMBCTRL2_BYTE0_SLAVE_ADDR			(0x7F)			// 6:0  Slave address


//=========================================================================================


//#define	NUM_CLA_BYTES				25		// Bytes in CLA gains structure (pmbus use).

////EXTERN char	status_cml;	 // STATUS_CML (Communication, Logic, and Memory) for entire board
	//#define	CML_INVALID_CMD			(7)		// Invalid or Unsupported Command Received
	//#define	CML_INVALID_DATA		(6)		// Invalid or Unsupported Data Received
	//#define	CML_PEC_FAILED			(5)		// Packet Error Check Failed
	//#define	CML_MEMORY_FAULT	 	(4)		// Memory Fault Detected
	//#define	CML_PROC_FAULT			(3)		// Processor Fault Detected
	//#define	CML_RSVD2 				(2)		// Reserved
	//#define	CML_COMM_OTHER_FAULT	(1)		// Unlisted communication fault
	//#define	CML_OTHER_FAULT			(0)		// Other Memory or Logic fault has occurred


// These error codes are masks based on bits in the CML_STATUS byte. This allows the
// pmbus_error_handler() function to do a simple 'OR' instead of a big 'switch' statement.
//#define	PMBUS_INVALID_CMD		(1<<CML_INVALID_CMD)		// bit7 Invalid or Unsupported Command Received
//#define	PMBUS_INVALID_DATA		(1<<CML_INVALID_DATA)		// bit6 Invalid or Unsupported Data Received
//#define	PMBUS_PEC_FAILED		(1<<CML_PEC_FAILED)			// bit5 Packet Error Check Failed
//#define	PMBUS_MEMORY_FAULT	 	(1<<CML_MEMORY_FAULT)	 	// bit4 Memory Fault Detected
//#define	PMBUS_PROC_FAULT		(1<<CML_PROC_FAULT)			// bit3 Processor Fault Detected
//#define	PMBUS_RSVD2 			(1<<CML_RSVD2) 				// bit2 Reserved
//#define	PMBUS_COMM_OTHER_FAULT	(1<<CML_COMM_OTHER_FAULT)	// bit1 Unlisted communication fault
//#define	PMBUS_OTHER_FAULT		(1<<CML_OTHER_FAULT)		// bit0 Other Memory or Logic fault has occurred


//#define PMBUS_SUCCESS        0

//#define PMBUS_INVALID_DATA     (1<<CML_INVALID_DATA)

//#define PMBUS_BUFFER_SIZE 40
//#define PMBST_HALF0_CHECK_BITS (PMBST_BYTE0_EOM + PMBST_BYTE0_DATA_READY + PMBST_BYTE0_DATA_REQUEST + PMBST_BYTE0_PEC_VALID + PMBST_HALF0_CLK_LOW_TIMEOUT + PMBST_HALF0_CLK_HIGH_TIMEOUT)
//#define PMBCTRL2_HALF0_SLAVE_ADDRESS_MASK_DISABLE 0x7f00 //any bits cleared in slave address mask make that bit a don't care

//#define PMBUS_STATE_IDLE 0
//#define PMBUS_STATE_WRITE_BLOCK 1
//#define PMBUS_STATE_READ_BLOCK 2
//#define PMBUS_STATE_READ_WAIT_FOR_EOM 3

////#define program_flash_integrity_word *((volatile uint16 *) 0x7ffc)

////#if (PFC_TYPE == 0)//interleave PFC: FE0 + CLA1 + DPWM1 + DPWM2
	//#define SETUP_ID    "VERSION1|PFC000"			
////#elif(PFC_TYPE == 1)//single phase PFC: FE0 + CLA1 + DPWM1
	//#define SETUP_ID    "VERSION1|PFC001"
////#elif(PFC_TYPE == 2)//bridgeless PFC: FE1 + FE2 + CLA1 + DPWM1 + DPWM2
	//#define SETUP_ID    "VERSION1|PFC002"
//#endif

////#define MFR_REVISION  	"0.0.0"//fixed length
////#define DEVICE_ID      "UCD3100ISO1|1.0.2|090707"//fixed length
////#define DEVICE_ID_LENGTH   24

//#define DEVICE      	 UCD3100ISO1 				//Device Name
//#define MFR_ID				"TI"						//Hardware Manufacturer
//#define MFR_MODEL			"UCD3138PFCEVM-028"			//Hardware Model
//#define MFR_REVISION  	"A"						//Hardware revision

//#define SETUP_ID_LENGTH 	sizeof(SETUP_ID)
//#define MFR_ID_LENGTH 		sizeof(MFR_ID)
//#define MFR_MODEL_LENGTH 	sizeof(MFR_MODEL)
//#define MFR_REVISION_LENGTH sizeof(MFR_REVISION)


////////////////////////////////////////////////////////////////
//the commands that shows bit masking of which PMBUS commands 
//are supported
//CMD_DCDC_PAGED, CMD_DCDC_NONPAGED, CMD_PFC 
// 
//cmd-->lower nibble 
// #   0123 4567  89AB CDEF
//higher
//nibble
//0  0b0000 0000, 0b0000 0000, command codes from 0x00 to 0x0F
//1  0b0000 0000, 0b0000 0000, command codes from 0x10 to 0x1F
//2  0b0000 0000, 0b0000 0000, command codes from 0x20 to 0x2F
//3  0b0000 0000, 0b0000 0000, command codes from 0x30 to 0x3F
//4  0b0000 0000, 0b0000 0000, command codes from 0x40 to 0x4F
//5  0b0000 0000, 0b0000 0000, command codes from 0x50 to 0x5F
//6  0b0000 0000, 0b0000 0000, command codes from 0x60 to 0x6F
//7  0b0000 0000, 0b0000 0000, command codes from 0x70 to 0x7F
//8  0b0000 0000, 0b0000 0000, command codes from 0x80 to 0x8F
//9  0b0000 0000, 0b0000 0000, command codes from 0x90 to 0x9F
//A  0b0000 0000, 0b0000 0000, command codes from 0xA0 to 0xAF
//B  0b0000 0000, 0b0000 0000, command codes from 0xB0 to 0xBF
//C  0b0000 0000, 0b0000 0000, command codes from 0xC0 to 0xCF
//D  0b0000 0000, 0b0000 0000, command codes from 0xD0 to 0xDF
//E  0b0000 0000, 0b0000 0000, command codes from 0xE0 to 0xEF
//F  0b0000 0000, 0b0000 0000, command codes from 0xF0 to 0xFF
					
//specify the supported DCDC paged commands

//specify the supported PFC commands
#define CMD_PFC \
              {0x00, 0x00, \
              0x60, 0x00, \
              0xC0, 0x00, \
              0x10, 0x00, \
              0x80, 0x00, \
              0x00, 0x00, \
              0x00, 0x00, \
              0x00, 0x00, \
              0x00, 0x10, \
              0x04, 0xF0, \
              0x00, 0x00, \
              0x00, 0x00, \
              0x00, 0x00, \
              0x00, 0x60, \
              0x3F, 0x00, \
              0x85, 0x04 \
              }     

//specify the supported PFC commands - necessary for GUI, even if we're only a PFC
#define CMD_DCDC \
 						  {0x00, 0x00, \
              0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0xD0, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00, \
							0x00, 0x00 \
							}

//#define DEBUG_0_TEXT "Debug 0"
//#define DEBUG_1_TEXT "Debug 1"
//#define DEBUG_2_TEXT "Debug 2"
//#define DEBUG_3_TEXT "Debug 3"
//#define DEBUG_4_TEXT "Debug 4"
//#define DEBUG_5_TEXT "Debug 5"
//#define DEBUG_6_TEXT "Debug 6"
//#define DEBUG_7_TEXT "Debug 7"

////EXTERN Uint8 gui_constant_pointer;
////EXTERN Uint8 user_ram_00;


///////////////////////////////////////////////////////////////
//variables for PARM_INFO and PARM_VAR
///////////////////////////////////////////////////////////////
// Memory limits used by the PARM_INFO and PARM_VALUE commands.
//#define	RAM_START_ADDRESS	0x00019000	// Beginning of RAM
//#define	RAM_END_ADDRESS		0x00019FFF	// End of RAM
//#define RAM_LENGTH			(RAM_END_ADDRESS - RAM_START_ADDRESS + 1)			

// Allow access to peripherals, but not core ARM regs.
//#define	REG_START_ADDRESS	0xFFF7d100	// Beginning of Register space
//#define	REG_END_ADDRESS		0xFFF7fdff	// End of Register space
//#define REG_LENGTH			(REG_END_ADDRESS - REG_START_ADDRESS + 1)

// Allow read-only access to Data Flash
//#define	DFLASH_START_ADDRESS	0x00018800	// Beginning of DFLASH
//#define	DFLASH_END_ADDRESS		0x00018FFF	// End of DFLASH
//#define DFLASH_LENGTH			(DFLASH_END_ADDRESS - DFLASH_START_ADDRESS + 1)			

// Allow read-only access to Constants in Program Flash 
//#define	PFLASH_CONST_START_ADDRESS	0x00000000	// Beginning of PFLASH Constants
//#define	PFLASH_CONST_END_ADDRESS  	0x00007FFF	// End of PFLASH Constants
//#define PFLASH_CONST_LENGTH			(PFLASH_CONST_END_ADDRESS - PFLASH_CONST_START_ADDRESS + 1)			

// Allow read-only access to Program in Program Flash 
//#define	PFLASH_PROG_START_ADDRESS	0x00000000	// Beginning of PFLASH Program
//#define	PFLASH_PROG_END_ADDRESS  	0x00007FFF	// End of PFLASH Program
//#define PFLASH_PROG_LENGTH			(PFLASH_PROG_END_ADDRESS - PFLASH_PROG_START_ADDRESS + 1)			


 //Cyclone 2 extra addresses
//#define LOOP_MUX_START_ADDRESS 0x00020000
//#define LOOP_MUX_LENGTH     0x00000078

//#define FAULT_MUX_START_ADDRESS 0x00030000
//#define FAULT_MUX_LENGTH    0x00000080

//#define ADC_START_ADDRESS    0x00040000
//#define ADC_LENGTH       0x00000098

//#define DPWM3_START_ADDRESS   0x00050000
//#define DPWM3_LENGTH      0x0000008c

//#define FILTER2_START_ADDRESS  0x00060000
//#define FILTER2_LENGTH     0x00000064

//#define DPWM2_START_ADDRESS   0x00070000
//#define DPWM2_LENGTH      0x0000008c

//#define FE_CTRL2_START_ADDRESS 0x00080000
//#define FE_CTRL2_LENGTH     0x00000044

//#define FILTER1_START_ADDRESS  0x00090000
//#define FILTER1_LENGTH     0x00000064

//#define DPWM1_START_ADDRESS   0x000a0000
//#define DPWM1_LENGTH      0x0000008c

//#define FE_CTRL1_START_ADDRESS 0x000b0000
//#define FE_CTRL1_LENGTH     0x00000044

//#define FILTER0_START_ADDRESS  0x000c0000
//#define FILTER0_LENGTH     0x00000064

//#define DPWM0_START_ADDRESS   0x000d0000
//#define DPWM0_LENGTH      0x0000008c

//#define FE_CTRL0_START_ADDRESS 0x000e0000
//#define FE_CTRL0_LENGTH     0x00000044

//#define SYSTEM_REGS_START_ADDRESS 0xfffffd00
//#define SYSTEM_REGS_LENGTH    0x2d0

//#define	NUM_MEMORY_SEGMENTS	19	// 19 memory segments for Cyclone 2




//pmbus_coefficients.h

struct PFC_SETPOINT_STRUCT	//for PFC configuration
{
	uint16 VOUT_COMMAND;
	uint16 VOUT_OV_LIMIT;
	uint16 FREQUENCY;
};

struct PFC_CAL_STRUCT	//for PFC calibration
{
	uint16 VOUT_CAL_OFFSET;
};


//for voltage loop coefficients
struct PI_GAINS_STRUCT
{
	int32 KP;
	int32 KI;
	int32 KP_NL;
	int32 KI_NL;
	int32 NL_THRESHOLD;
};

struct FILTER_MISC_REG_BITS
{
  uint16 rsvd0:16;        	// 31:5 Reserved
	
	uint16 SAMPLE_TRIG1_OVERSAMPLE:2; 	// 1:0  Configures Oversampling function
	uint16 AFE_GAIN:2;					// 3:2	`AFE Gain
  uint16 NL_MODE:1;     			// 4   NL_MODE - stored in Filter Control Register
	uint16 rsvd1:11;        	// 31:5 Reserved
};

union FILTER_MISC_REG
{
  struct FILTER_MISC_REG_BITS bits;
  uint16         		all;
};

//for current loop coefficients
//typedef struct
//{
//	struct PFC_SETPOINT_STRUCT	PFC_SETPOINT;		// PFC setpoint configuration
//	struct PFC_CAL_STRUCT		PFC_CAL;			// PFC calibration
//	struct PI_GAINS_STRUCT		PI_GAINS;			// voltage loop gains
//	union COEFCONFIG_REG    COEFCONFIG;     // Coefficient Configuration Register
//	union FILTERKPCOEF0_REG   FILTERKPCOEF0;   // Filter KP Coefficient 0 Register
//	union FILTERKPCOEF1_REG   FILTERKPCOEF1;   // Filter KP Coefficient 1 Register
//	union FILTERKICOEF0_REG   FILTERKICOEF0;   // Filter KI Coefficient 0 Register
//	union FILTERKICOEF1_REG   FILTERKICOEF1;   // Filter KI Coefficient 1 Register
//	union FILTERKDCOEF0_REG   FILTERKDCOEF0;   // Filter KD Coefficient 0 Register
//	union FILTERKDCOEF1_REG   FILTERKDCOEF1;   // Filter KD Coefficient 1 Register
//	union FILTERKDALPHA_REG   FILTERKDALPHA;   // Filter KD Alpha Register
//	union FILTERNL0_REG     FILTERNL0;     // Filter Non-Linear Limit 0 Register
//	union FILTERNL1_REG     FILTERNL1;     // Filter Non-Linear Limit 1 Register
//	union FILTERNL2_REG     FILTERNL2;     // Filter Non-Linear Limit 2 Register
//	union FILTER_MISC_REG		FILTERMISC;			// Nonlinear mode,AFE gain,oversample
//}PFC_CONFIG_STRUCT;

//EXTERN PFC_CONFIG_STRUCT pfc_config_in_ram;

//#define PFC_CAL_DEFAULT	{0}
//							 KP,		ki			kp_nl		ki-nl,		nonlinear threshold
//#define PI_GAINS_DEFAULT	{0x06000,	0x00F5,		0x15000,	0x0500,		15}

//						reserved BIN6ALPHA BIN6CONFIG BIN5ALPHA BIN5CONFIG BIN4ALPHA BIN4CONFIG BIN3ALPHA BIN3CONFIG BIN2ALPHA BIN2CONFIG BIN1ALPHA BIN1CONFIG BIN0ALPHA BIN0CONFIG
//#define COEFCONFIG_DEFAULT 	{0,		0,		 0,		 0,			0,		  0,		0,			0,		 0,		0,			0,		 0,		0,		 0,		0}

//								researved	KP_COEF_2
//#define FILTERKPCOEF1_DEFAULT	{0,			0}

//								KI_COEF_3	KI_COEF_2
//#define FILTERKICOEF1_DEFAULT	{0,			0}

//								researved	KD_COEF_2
//#define FILTERKDCOEF1_DEFAULT	{0,			0}

//								researved	LIMIT1		researved 	LIMIT0
//#define FILTERNL0_DEFAULT		{0,			16, 			0,			8}

//								researved	LIMIT3		researved 	LIMIT2
//#define FILTERNL1_DEFAULT		{0,			32,			0,			24}

//								researved	LIMIT5		researved 	LIMIT4
//#define FILTERNL2_DEFAULT		{0,			48, 		0,			40}

//#if(PFC_TYPE == 0)//interleave PFC
	//								vout_command,	vout_ov_limit, 	frequency
	//#define PFC_SETPOINT_DEFAULT	{390,      435, 			100}

	//								KP_COEF_1	KP_COEF_0
	//#define FILTERKPCOEF0_DEFAULT	{2000,		1000}

	//								KI_COEF_1	KI_COEF_0
	//#define FILTERKICOEF0_DEFAULT	{120,		60}

	//								KD_COEF_1	KD_COEF_0
	//#define FILTERKDCOEF0_DEFAULT	{10,		4000}

	//								researved	KD_ALPHA_1	researved 	KD_ALPHA_0
	//#define FILTERKDALPHA_DEFAULT	{0,			-1, 		0,			-1}

	//								researved	NL_MODE		AFE_GAIN 	SAMPLE_TRIG1_OVERSAMPLE
	//#define FILTERMISC_DEFAULT		{0,			1, 			1,			3}

//#elif(PFC_TYPE == 1)//single phase PFC
	//								vout_command,	vout_ov_limit, 	frequency
	//#define PFC_SETPOINT_DEFAULT	{390,      435, 			100}

	//								KP_COEF_1	KP_COEF_0
	//#define FILTERKPCOEF0_DEFAULT	{3000,		500}

	//								KI_COEF_1	KI_COEF_0
	//#define FILTERKICOEF0_DEFAULT	{140,		20}

	//								KD_COEF_1	KD_COEF_0
	//#define FILTERKDCOEF0_DEFAULT	{10,		1000}

	//								researved	KD_ALPHA_1	researved 	KD_ALPHA_0
	//#define FILTERKDALPHA_DEFAULT	{0,			-1, 		0,			100}

	//								researved	NL_MODE		AFE_GAIN 	SAMPLE_TRIG1_OVERSAMPLE
	//#define FILTERMISC_DEFAULT		{0,			1, 			1,			3}
//#elif(PFC_TYPE == 2) //bridgeless PFC
	//								vout_command,	vout_ov_limit, 	frequency
	//#define PFC_SETPOINT_DEFAULT	{390,      435, 			65}

	//								KP_COEF_1	KP_COEF_0
	//#define FILTERKPCOEF0_DEFAULT	{800,		800}

	//								KI_COEF_1	KI_COEF_0
	//#define FILTERKICOEF0_DEFAULT	{1200,		900}

	//								KD_COEF_1	KD_COEF_0
	//#define FILTERKDCOEF0_DEFAULT	{1000,		100}

	//								researved	KD_ALPHA_1	researved 	KD_ALPHA_0
	//#define FILTERKDALPHA_DEFAULT	{0,			-1, 		0,			-1}

	//								researved	NL_MODE		AFE_GAIN 	SAMPLE_TRIG1_OVERSAMPLE
	//#define FILTERMISC_DEFAULT		{0,			1, 			1,			0}
//#endif

/*
// #define PFC_CONFIG_DEFAULT \
// {\
//	PFC_SETPOINT_DEFAULT,\
//	PFC_CAL_DEFAULT,\
//	PI_GAINS_DEFAULT,\
//	COEFCONFIG_DEFAULT,\
//	FILTERKPCOEF0_DEFAULT,\
//	FILTERKPCOEF1_DEFAULT,\
//	FILTERKICOEF0_DEFAULT,\
//	FILTERKICOEF1_DEFAULT,\
//	FILTERKDCOEF0_DEFAULT,\
//	FILTERKDCOEF1_DEFAULT,\
//	FILTERKDALPHA_DEFAULT,\
//	FILTERNL0_DEFAULT,\
//	FILTERNL1_DEFAULT,\
//	FILTERNL2_DEFAULT,\
//	FILTERMISC_DEFAULT\
//}
*/

//pmbus_commands.h+PMBus_commands_V1_2.h+software_interrupts.h+system_defines.h+variables.h tst9

//pmbus_commands.h
//PMBus Version 1.2 command number constants:

//#define PMBUS_CMD_PAGE                      0x00
//#define PMBUS_CMD_OPERATION                    0x01
//#define PMBUS_CMD_ON_OFF_CONFIG                  0x02
//#define PMBUS_CMD_CLEAR_FAULTS                  0x03
//#define PMBUS_CMD_PHASE                      0x04
//#define PMBUS_CMD_PAGE_PLUS_WRITE                 0x05
//#define PMBUS_CMD_PAGE_PLUS_READ                 0x06
                                 // 0x07-0x0F Reserved
//#define PMBUS_CMD_WRITE_PROTECT                  0x10
//#define PMBUS_CMD_STORE_DEFAULT_ALL                0x11
//#define PMBUS_CMD_RESTORE_DEFAULT_ALL               0x12
//#define PMBUS_CMD_STORE_DEFAULT_CODE               0x13
//#define PMBUS_CMD_RESTORE_DEFAULT_CODE              0x14
//#define PMBUS_CMD_STORE_USER_ALL                 0x15
//#define PMBUS_CMD_RESTORE_USER_ALL                0x16
//#define PMBUS_CMD_STORE_USER_CODE                 0x17
//#define PMBUS_CMD_RESTORE_USER_CODE                0x18
//#define PMBUS_CMD_CAPABILITY                   0x19
//#define PMBUS_CMD_QUERY                      0x1A
//#define PMBUS_CMD_SMBALERT_MASK                  0x1B
                                 // 0x1C - 0x1F Reserved
//#define PMBUS_CMD_VOUT_MODE                    0x20
//#define PMBUS_CMD_VOUT_COMMAND                  0x21
//#define PMBUS_CMD_VOUT_TRIM                    0x22
//#define PMBUS_CMD_VOUT_CAL_OFFSET                 0x23
//#define PMBUS_CMD_VOUT_MAX                    0x24
//#define PMBUS_CMD_VOUT_MARGIN_HIGH                0x25
//#define PMBUS_CMD_VOUT_MARGIN_LOW                 0x26
//#define PMBUS_CMD_VOUT_TRANSITION_RATE              0x27
//#define PMBUS_CMD_VOUT_DROOP                   0x28
//#define PMBUS_CMD_VOUT_SCALE_LOOP                 0x29
//#define PMBUS_CMD_VOUT_SCALE_MONITOR               0x2A
                                 // 0x2B - 0x2F Reserved
//#define PMBUS_CMD_COEFFICIENTS                  0x30
//#define PMBUS_CMD_POUT_MAX                    0x31
//#define PMBUS_CMD_MAX_DUTY                    0x32
//#define PMBUS_CMD_FREQUENCY_SWITCH                0x33
                                 // 0x34 Reserved
//#define PMBUS_CMD_VIN_ON                     0x35
//#define PMBUS_CMD_VIN_OFF                     0x36
//#define PMBUS_CMD_INTERLEAVE                   0x37
//#define PMBUS_CMD_IOUT_CAL_GAIN                  0x38
//#define PMBUS_CMD_IOUT_CAL_OFFSET                 0x39
//#define PMBUS_CMD_FAN_CONFIG_1_2                 0x3A
//#define PMBUS_CMD_FAN_COMMAND_1                  0x3B
//#define PMBUS_CMD_FAN_COMMAND_2                  0x3C
//#define PMBUS_CMD_FAN_CONFIG_3_4                 0x3D
//#define PMBUS_CMD_FAN_COMMAND_3                  0x3E
//#define PMBUS_CMD_FAN_COMMAND_4                  0x3F
//#define PMBUS_CMD_VOUT_OV_FAULT_LIMIT               0x40
//#define PMBUS_CMD_VOUT_OV_FAULT_RESPONSE             0x41
//#define PMBUS_CMD_VOUT_OV_WARN_LIMIT               0x42
//#define PMBUS_CMD_VOUT_UV_WARN_LIMIT               0x43
//#define PMBUS_CMD_VOUT_UV_FAULT_LIMIT               0x44
//#define PMBUS_CMD_VOUT_UV_FAULT_RESPONSE             0x45
//#define PMBUS_CMD_IOUT_OC_FAULT_LIMIT               0x46
//#define PMBUS_CMD_IOUT_OC_FAULT_RESPONSE             0x47
//#define PMBUS_CMD_IOUT_OC_LV_FAULT_LIMIT             0x48
//#define PMBUS_CMD_IOUT_OC_LV_FAULT_RESPONSE            0x49
//#define PMBUS_CMD_IOUT_OC_WARN_LIMIT               0x4A
//#define PMBUS_CMD_IOUT_UC_FAULT_LIMIT               0x4B
//#define PMBUS_CMD_IOUT_UC_FAULT_RESPONSE             0x4C
                                 // 0x4D ֠0x4E Reserved
//#define PMBUS_CMD_OT_FAULT_LIMIT                 0x4F
//#define PMBUS_CMD_OT_FAULT_RESPONSE                0x50
//#define PMBUS_CMD_OT_WARN_LIMIT                  0x51
//#define PMBUS_CMD_UT_WARN_LIMIT                  0x52
//#define PMBUS_CMD_UT_FAULT_LIMIT                 0x53
//#define PMBUS_CMD_UT_FAULT_RESPONSE                0x54
//#define PMBUS_CMD_VIN_OV_FAULT_LIMIT               0x55
//#define PMBUS_CMD_VIN_OV_FAULT_RESPONSE              0x56
//#define PMBUS_CMD_VIN_OV_WARN_LIMIT                0x57
//#define PMBUS_CMD_VIN_UV_WARN_LIMIT                0x58
//#define PMBUS_CMD_VIN_UV_FAULT_LIMIT               0x59
//#define PMBUS_CMD_VIN_UV_FAULT_RESPONSE              0x5A
//#define PMBUS_CMD_IIN_OC_FAULT_LIMIT               0x5B // (For CBC current limit)
//#define PMBUS_CMD_IIN_OC_FAULT_RESPONSE              0x5C
//#define PMBUS_CMD_IIN_OC_WARN_LIMIT                0x5D
//#define PMBUS_CMD_POWER_GOOD_ON                  0x5E
//#define PMBUS_CMD_POWER_GOOD_OFF                 0x5F
//#define PMBUS_CMD_TON_DELAY                    0x60
//#define PMBUS_CMD_TON_RISE                    0x61
//#define PMBUS_CMD_TON_MAX_FAULT_LIMIT               0x62
//#define PMBUS_CMD_TON_MAX_FAULT_RESPONSE             0x63
//#define PMBUS_CMD_TOFF_DELAY                   0x64
//#define PMBUS_CMD_TOFF_FALL                    0x65
//#define PMBUS_CMD_TOFF_MAX_WARN_LIMIT               0x66
                                 //0x67 Reserved  Deleted in PMBus Ver 1.1
//#define PMBUS_CMD_POUT_OP_FAULT_LIMIT               0x68
//#define PMBUS_CMD_POUT_OP_FAULT_RESPONSE             0x69
//#define PMBUS_CMD_POUT_OP_WARN_LIMIT               0x6A
//#define PMBUS_CMD_PIN_OP_WARN_LIMIT                0x6B
                                 // 0x6C - 0x77 Reserved
//#define PMBUS_CMD_STATUS_BYTE                   0x78
//#define PMBUS_CMD_STATUS_WORD                   0x79
//#define PMBUS_CMD_STATUS_VOUT                   0x7A
//#define PMBUS_CMD_STATUS_IOUT                   0x7B
//#define PMBUS_CMD_STATUS_INPUT                  0x7C
//#define PMBUS_CMD_STATUS_TEMPERATURE               0x7D
//#define PMBUS_CMD_STATUS_CML                   0x7E
//#define PMBUS_CMD_STATUS_OTHER                  0x7F
//#define PMBUS_CMD_STATUS_MFR_SPECIFIC               0x80
//#define PMBUS_CMD_STATUS_FANS_1_2                 0x81
//#define PMBUS_CMD_STATUS_FANS_3_4                 0x82
                                 // 0x83 - 0x85 Reserved
//#define PMBUS_CMD_READ_EIN                    0x86
//#define PMBUS_CMD_READ_EOUT                    0x87
//#define PMBUS_CMD_READ_VIN                    0x88
//#define PMBUS_CMD_READ_IIN                    0x89
//#define PMBUS_CMD_READ_VCAP                    0x8A
//#define PMBUS_CMD_READ_VOUT                    0x8B
//#define PMBUS_CMD_READ_IOUT                    0x8C
//#define PMBUS_CMD_READ_TEMPERATURE_1               0x8D
//#define PMBUS_CMD_READ_TEMPERATURE_2               0x8E
//#define PMBUS_CMD_READ_TEMPERATURE_3               0x8F
//#define PMBUS_CMD_READ_FAN_SPEED_1                0x90
//#define PMBUS_CMD_READ_FAN_SPEED_2                0x91
//#define PMBUS_CMD_READ_FAN_SPEED_3                0x92
//#define PMBUS_CMD_READ_FAN_SPEED_4                0x93
//#define PMBUS_CMD_READ_DUTY_CYCLE                 0x94
//#define PMBUS_CMD_READ_FREQUENCY                 0x95
//#define PMBUS_CMD_READ_POUT                    0x96
//#define PMBUS_CMD_READ_PIN                    0x97
//#define PMBUS_CMD_PMBUS_REVISION                 0x98
//#define PMBUS_CMD_MFR_ID                     0x99
//#define PMBUS_CMD_MFR_MODEL                    0x9A
//#define PMBUS_CMD_MFR_REVISION                  0x9B
//#define PMBUS_CMD_MFR_LOCATION                  0x9C
//#define PMBUS_CMD_MFR_DATE                    0x9D
//#define PMBUS_CMD_MFR_SERIAL                   0x9E
//#define PMBUS_CMD APP_PROFILE_SUPPORT               0x9F
//#define PMBUS_CMD_MFR_VIN_MIN                   0xA0
//#define PMBUS_CMD_MFR_VIN_MAX                   0xA1
//#define PMBUS_CMD_MFR_IIN_MAX                   0xA2
//#define PMBUS_CMD_MFR_PIN_MAX                   0xA3
//#define PMBUS_CMD_MFR_VOUT_MIN                  0xA4
//#define PMBUS_CMD_MFR_VOUT_MAX                  0xA5
//#define PMBUS_CMD_MFR_IOUT_MAX                  0xA6
//#define PMBUS_CMD_MFR_POUT_MAX                  0xA7
//#define PMBUS_CMD_MFR_TAMBIENT_MAX                0xA8
//#define PMBUS_CMD_MFR_TAMBIENT_MIN                0xA9
//#define PMBUS_CMD_MFR_EFFICIENCY_LL                0xAA
//#define PMBUS_CMD_MFR_EFFICIENCY_HL                0xAB
//#define PMBUS_CMD_MFR_PIN_ACURRACY                0xAC
//#define PMBUS_CMD_MFR_IC_DEVICE                  0xAD
//#define PMBUS_CMD_MFR_IC_DEVICE_REV                0xAE
                                 // 0xAF Reserved
//#define PMBUS_CMD_USER_DATA_00                  0xB0
//#define PMBUS_CMD_USER_DATA_01                  0xB1
//#define PMBUS_CMD_USER_DATA_02                  0xB2
//#define PMBUS_CMD_USER_DATA_03                  0xB3
//#define PMBUS_CMD_USER_DATA_04                  0xB4
//#define PMBUS_CMD_USER_DATA_05                  0xB5
//#define PMBUS_CMD_USER_DATA_06                  0xB6
//#define PMBUS_CMD_USER_DATA_07                  0xB7
//#define PMBUS_CMD_USER_DATA_08                  0xB8
//#define PMBUS_CMD_USER_DATA_09                  0xB9
//#define PMBUS_CMD_USER_DATA_10                  0xBA
//#define PMBUS_CMD_USER_DATA_11                  0xBB
//#define PMBUS_CMD_USER_DATA_12                  0xBC
//#define PMBUS_CMD_USER_DATA_13                  0xBD
//#define PMBUS_CMD_USER_DATA_14                  0xBE
//#define PMBUS_CMD_USER_DATA_15                  0xBF
//#define PMBUS_CMD_MFR_MAX_TEMP_1                 0xC0
//#define PMBUS_CMD_MFR_MAX_TEMP_2                 0xC1
//#define PMBUS_CMD_MFR_MAX_TEMP_3                 0xC2
                                 // 0xC3-0xCF Reserved
//#define PMBUS_CMD_MFR_LIGHT_LOAD_ENB               0xD0
//#define PMBUS_CMD_MFR_SPECIFIC_01                 0xD1
//#define PMBUS_CMD_MFR_SPECIFIC_02                 0xD2
//#define PMBUS_CMD_MFR_CLA_LOOP		               0xD3
//#define PMBUS_CMD_MFR_CLA_BANK                  0xD4
//#define PMBUS_CMD_MFR_CLA_GAINS                  0xD5
//#define PMBUS_CMD_MFR_SPECIFIC_06                 0xD6
//#define PMBUS_CMD_MFR_SPECIFIC_07                 0xD7
//#define PMBUS_CMD_MFR_SPECIFIC_08                 0xD8
//#define PMBUS_CMD_ROM_MODE                    0xD9
//#define PMBUS_CMD_USER_RAM_00                   0xDA
//#define PMBUS_CMD_MFR_PHASE_CONTROL                0xDB
//#define PMBUS_CMD_MFR_IOUT_OC_FAULT_LIMIT_LOW           0xDC
//#define PMBUS_CMD_MFR_VIN_SCALE                  0xDD
//#define PMBUS_CMD_MFR_VIN_OFFSET                 0xDE
//#define PMBUS_CMD_MFR_READ_TEMPERATURE_4             0xDF
//#define PMBUS_CMD_MFR_OT_LIMIT_1                 0xE0
//#define PMBUS_CMD_MFR_OT_LIMIT_2                 0xE1
//#define PMBUS_CMD_MFR_PARM_INFO                  0xE2
//#define PMBUS_CMD_MFR_PARM_VALUE                 0xE3
//#define PMBUS_CMD_MFR_CMDS_DCDC_PAGED               0xE4
//#define PMBUS_CMD_MFR_CMDS_DCDC_NONPAGED             0xE5
//#define PMBUS_CMD_MFR_CMDS_PFC                  0xE6
//#define PMBUS_CMD_MFR_SETUP_ID                  0xE7
//#define PMBUS_CMD_MFR_OT_LIMIT_3                 0xE8
//#define PMBUS_CMD_MFR_OT_LIMIT_4                 0xE9
//#define PMBUS_CMD_MFR_DEADBAND_CONFIG               0xEA
//#define PMBUS_CMD_MFR_PIN_CAL_A                  0xEB
//#define PMBUS_CMD_MFR_PIN_CAL_B                  0xEC
//#define PMBUS_CMD_MFR_PIN_CAL_C                  0xED
//#define PMBUS_CMD_MFR_PIN_CAL_D                  0xEE
//#define PMBUS_CMD_MFR_TEMP_CAL_OFFSET               0xEF
//#define PMBUS_CMD_MFR_DEBUG_BUFFER                0xF0
//#define PMBUS_CMD_MFR_TEMP_CAL_GAIN                0xF1
//#define PMBUS_CMD_MFR_STATUS_BIT_MASK               0xF2
//#define PMBUS_CMD_MFR_SPECIFIC_35                 0xF3
//#define PMBUS_CMD_MFR_SPECIFIC_36                 0xF4
//#define PMBUS_CMD_MFR_GUI_CONSTANTS                0xF5
//#define PMBUS_CMD_MFR_SPECIFIC_38                 0xF6
//#define PMBUS_CMD_MFR_PI_COEFFICIENTS               0xF7
//#define PMBUS_CMD_MFR_VOUT_CAL_MONITOR              0xF8
//#define PMBUS_CMD_ROM_MODE_WITH_PASSWORD             0xF9
//#define PMBUS_CMD_MFR_SPECIFIC_42                 0xFA
//#define PMBUS_CMD_MFR_SPECIFIC_43                 0xFB
//#define PMBUS_CMD_MFR_SPECIFIC_44                 0xFC
//#define PMBUS_CMD_MFR_DEVICE_ID                  0xFD
//#define PMBUS_CMD_MFR_SPECIFIC_COMMAND              0xFE
//#define PMBUS_CMD_PMBUS_COMMAND_EXT                0xFF






 
//PMBus_commands_V1_2.h
//PMBus Version 1.2 command number constants:

 

//#define PMBUS_CMD_PAGE                      0x00
//#define PMBUS_CMD_OPERATION                    0x01
//#define PMBUS_CMD_ON_OFF_CONFIG                  0x02
//#define PMBUS_CMD_CLEAR_FAULTS                  0x03
//#define PMBUS_CMD_PHASE                      0x04
//#define PMBUS_CMD_PAGE_PLUS_WRITE                 0x05
//#define PMBUS_CMD_PAGE_PLUS_READ                 0x06
                                 // 0x07-0x0F Reserved
//#define PMBUS_CMD_WRITE_PROTECT                  0x10
//#define PMBUS_CMD_STORE_DEFAULT_ALL                0x11
//#define PMBUS_CMD_RESTORE_DEFAULT_ALL               0x12
//#define PMBUS_CMD_STORE_DEFAULT_CODE               0x13
//#define PMBUS_CMD_RESTORE_DEFAULT_CODE              0x14
//#define PMBUS_CMD_STORE_USER_ALL                 0x15
//#define PMBUS_CMD_RESTORE_USER_ALL                0x16
//#define PMBUS_CMD_STORE_USER_CODE                 0x17
//#define PMBUS_CMD_RESTORE_USER_CODE                0x18
//#define PMBUS_CMD_CAPABILITY                   0x19
//#define PMBUS_CMD_QUERY                      0x1A
//#define PMBUS_CMD_SMBALERT_MASK                  0x1B
                                 // 0x1C - 0x1F Reserved
//#define PMBUS_CMD_VOUT_MODE                    0x20
//#define PMBUS_CMD_VOUT_COMMAND                  0x21
//#define PMBUS_CMD_VOUT_TRIM                    0x22
//#define PMBUS_CMD_VOUT_CAL_OFFSET                 0x23
//#define PMBUS_CMD_VOUT_MAX                    0x24
//#define PMBUS_CMD_VOUT_MARGIN_HIGH                0x25
//#define PMBUS_CMD_VOUT_MARGIN_LOW                 0x26
//#define PMBUS_CMD_VOUT_TRANSITION_RATE              0x27
//#define PMBUS_CMD_VOUT_DROOP                   0x28
//#define PMBUS_CMD_VOUT_SCALE_LOOP                 0x29
//#define PMBUS_CMD_VOUT_SCALE_MONITOR               0x2A
                                 // 0x2B - 0x2F Reserved
//#define PMBUS_CMD_COEFFICIENTS                  0x30
//#define PMBUS_CMD_POUT_MAX                    0x31
//#define PMBUS_CMD_MAX_DUTY                    0x32
//#define PMBUS_CMD_FREQUENCY_SWITCH                0x33
                                 // 0x34 Reserved
//#define PMBUS_CMD_VIN_ON                     0x35
//#define PMBUS_CMD_VIN_OFF                     0x36
//#define PMBUS_CMD_INTERLEAVE                   0x37
//#define PMBUS_CMD_IOUT_CAL_GAIN                  0x38
//#define PMBUS_CMD_IOUT_CAL_OFFSET                 0x39
//#define PMBUS_CMD_FAN_CONFIG_1_2                 0x3A
//#define PMBUS_CMD_FAN_COMMAND_1                  0x3B
//#define PMBUS_CMD_FAN_COMMAND_2                  0x3C
//#define PMBUS_CMD_FAN_CONFIG_3_4                 0x3D
//#define PMBUS_CMD_FAN_COMMAND_3                  0x3E
//#define PMBUS_CMD_FAN_COMMAND_4                  0x3F
//#define PMBUS_CMD_VOUT_OV_FAULT_LIMIT               0x40
//#define PMBUS_CMD_VOUT_OV_FAULT_RESPONSE             0x41
//#define PMBUS_CMD_VOUT_OV_WARN_LIMIT               0x42
//#define PMBUS_CMD_VOUT_UV_WARN_LIMIT               0x43
//#define PMBUS_CMD_VOUT_UV_FAULT_LIMIT               0x44
//#define PMBUS_CMD_VOUT_UV_FAULT_RESPONSE             0x45
//#define PMBUS_CMD_IOUT_OC_FAULT_LIMIT               0x46
//#define PMBUS_CMD_IOUT_OC_FAULT_RESPONSE             0x47
//#define PMBUS_CMD_IOUT_OC_LV_FAULT_LIMIT             0x48
//#define PMBUS_CMD_IOUT_OC_LV_FAULT_RESPONSE            0x49
//#define PMBUS_CMD_IOUT_OC_WARN_LIMIT               0x4A
//#define PMBUS_CMD_IOUT_UC_FAULT_LIMIT               0x4B
//#define PMBUS_CMD_IOUT_UC_FAULT_RESPONSE             0x4C
                                 // 0x4D ֠0x4E Reserved
//#define PMBUS_CMD_OT_FAULT_LIMIT                 0x4F
//#define PMBUS_CMD_OT_FAULT_RESPONSE                0x50
//#define PMBUS_CMD_OT_WARN_LIMIT                  0x51
//#define PMBUS_CMD_UT_WARN_LIMIT                  0x52
//#define PMBUS_CMD_UT_FAULT_LIMIT                 0x53
//#define PMBUS_CMD_UT_FAULT_RESPONSE                0x54
//#define PMBUS_CMD_VIN_OV_FAULT_LIMIT               0x55
//#define PMBUS_CMD_VIN_OV_FAULT_RESPONSE              0x56
//#define PMBUS_CMD_VIN_OV_WARN_LIMIT                0x57
//#define PMBUS_CMD_VIN_UV_WARN_LIMIT                0x58
//#define PMBUS_CMD_VIN_UV_FAULT_LIMIT               0x59
//#define PMBUS_CMD_VIN_UV_FAULT_RESPONSE              0x5A
//#define PMBUS_CMD_IIN_OC_FAULT_LIMIT               0x5B // (For CBC current limit)
//#define PMBUS_CMD_IIN_OC_FAULT_RESPONSE              0x5C
//#define PMBUS_CMD_IIN_OC_WARN_LIMIT                0x5D
//#define PMBUS_CMD_POWER_GOOD_ON                  0x5E
//#define PMBUS_CMD_POWER_GOOD_OFF                 0x5F
//#define PMBUS_CMD_TON_DELAY                    0x60
//#define PMBUS_CMD_TON_RISE                    0x61
//#define PMBUS_CMD_TON_MAX_FAULT_LIMIT               0x62
//#define PMBUS_CMD_TON_MAX_FAULT_RESPONSE             0x63
//#define PMBUS_CMD_TOFF_DELAY                   0x64
//#define PMBUS_CMD_TOFF_FALL                    0x65
//#define PMBUS_CMD_TOFF_MAX_WARN_LIMIT               0x66
                                 //0x67 Reserved  Deleted in PMBus Ver 1.1
//#define PMBUS_CMD_POUT_OP_FAULT_LIMIT               0x68
//#define PMBUS_CMD_POUT_OP_FAULT_RESPONSE             0x69
//#define PMBUS_CMD_POUT_OP_WARN_LIMIT               0x6A
//#define PMBUS_CMD_PIN_OP_WARN_LIMIT                0x6B
                                 // 0x6C - 0x77 Reserved
//#define PMBUS_CMD_STATUS_BYTE                   0x78
//#define PMBUS_CMD_STATUS_WORD                   0x79
//#define PMBUS_CMD_STATUS_VOUT                   0x7A
//#define PMBUS_CMD_STATUS_IOUT                   0x7B
//#define PMBUS_CMD_STATUS_INPUT                  0x7C
//#define PMBUS_CMD_STATUS_TEMPERATURE               0x7D
//#define PMBUS_CMD_STATUS_CML                   0x7E
//#define PMBUS_CMD_STATUS_OTHER                  0x7F
//#define PMBUS_CMD_STATUS_MFR_SPECIFIC               0x80
//#define PMBUS_CMD_STATUS_FANS_1_2                 0x81
//#define PMBUS_CMD_STATUS_FANS_3_4                 0x82
                                 // 0x83 - 0x85 Reserved
//#define PMBUS_CMD_READ_EIN                    0x86
//#define PMBUS_CMD_READ_EOUT                    0x87
//#define PMBUS_CMD_READ_VIN                    0x88
//#define PMBUS_CMD_READ_IIN                    0x89
//#define PMBUS_CMD_READ_VCAP                    0x8A
//#define PMBUS_CMD_READ_VOUT                    0x8B
//#define PMBUS_CMD_READ_IOUT                    0x8C
//#define PMBUS_CMD_READ_TEMPERATURE_1               0x8D
//#define PMBUS_CMD_READ_TEMPERATURE_2               0x8E
//#define PMBUS_CMD_READ_TEMPERATURE_3               0x8F
//#define PMBUS_CMD_READ_FAN_SPEED_1                0x90
//#define PMBUS_CMD_READ_FAN_SPEED_2                0x91
//#define PMBUS_CMD_READ_FAN_SPEED_3                0x92
//#define PMBUS_CMD_READ_FAN_SPEED_4                0x93
//#define PMBUS_CMD_READ_DUTY_CYCLE                 0x94
//#define PMBUS_CMD_READ_FREQUENCY                 0x95
//#define PMBUS_CMD_READ_POUT                    0x96
//#define PMBUS_CMD_READ_PIN                    0x97
//#define PMBUS_CMD_PMBUS_REVISION                 0x98
//#define PMBUS_CMD_MFR_ID                     0x99
//#define PMBUS_CMD_MFR_MODEL                    0x9A
//#define PMBUS_CMD_MFR_REVISION                  0x9B
//#define PMBUS_CMD_MFR_LOCATION                  0x9C
//#define PMBUS_CMD_MFR_DATE                    0x9D
//#define PMBUS_CMD_MFR_SERIAL                   0x9E
//#define PMBUS_CMD APP_PROFILE_SUPPORT               0x9F 
//#define PMBUS_CMD_MFR_VIN_MIN                   0xA0
//#define PMBUS_CMD_MFR_VIN_MAX                   0xA1
//#define PMBUS_CMD_MFR_IIN_MAX                   0xA2
//#define PMBUS_CMD_MFR_PIN_MAX                   0xA3
//#define PMBUS_CMD_MFR_VOUT_MIN                  0xA4
//#define PMBUS_CMD_MFR_VOUT_MAX                  0xA5
//#define PMBUS_CMD_MFR_IOUT_MAX                  0xA6
//#define PMBUS_CMD_MFR_POUT_MAX                  0xA7
//#define PMBUS_CMD_MFR_TAMBIENT_MAX                0xA8
//#define PMBUS_CMD_MFR_TAMBIENT_MIN                0xA9
//#define PMBUS_CMD_MFR_EFFICIENCY_LL                0xAA
//#define PMBUS_CMD_MFR_EFFICIENCY_HL                0xAB
//#define PMBUS_CMD_MFR_PIN_ACURRACY                0xAC
//#define PMBUS_CMD_MFR_IC_DEVICE                  0xAD
//#define PMBUS_CMD_MFR_ IC_DEVICE_REV               0xAE
                                 // 0xAF Reserved                                                
//#define PMBUS_CMD_USER_DATA_00                  0xB0   
//#define PMBUS_CMD_USER_DATA_01                  0xB1   
//#define PMBUS_CMD_USER_DATA_02                  0xB2   
//#define PMBUS_CMD_USER_DATA_03                  0xB3   
//#define PMBUS_CMD_USER_DATA_04                  0xB4
//#define PMBUS_CMD_USER_DATA_05                  0xB5
//#define PMBUS_CMD_USER_DATA_06                  0xB6
//#define PMBUS_CMD_USER_DATA_07                  0xB7
//#define PMBUS_CMD_USER_DATA_08                  0xB8
//#define PMBUS_CMD_USER_DATA_09                  0xB9
//#define PMBUS_CMD_USER_DATA_10                  0xBA
//#define PMBUS_CMD_USER_DATA_11                  0xBB
//#define PMBUS_CMD_USER_DATA_12                  0xBC
//#define PMBUS_CMD_USER_DATA_13                  0xBD
//#define PMBUS_CMD_USER_DATA_14                  0xBE
//#define PMBUS_CMD_USER_DATA_15                  0xBF
//#define PMBUS_CMD_MFR_MAX_TEMP_1                 0xC0
//#define PMBUS_CMD_MFR_MAX_TEMP_2                 0xC1 
//#define PMBUS_CMD_MFR_MAX_TEMP_3                 0xC2 
                                 // 0xC3-0xCF Reserved                                            
//#define PMBUS_CMD_MFR_LIGHT_LOAD_ENB               0xD0   
//#define PMBUS_CMD_MFR_SPECIFIC_01                 0xD1
//#define PMBUS_CMD_MFR_SPECIFIC_02                 0xD2                     
//#define PMBUS_CMD_MFR_SPECIFIC_03                 0xD3   
//#define PMBUS_CMD_MFR_SPECIFIC_04                 0xD4   
//#define PMBUS_CMD_MFR_SPECIFIC_05                 0xD5   
//#define PMBUS_CMD_MFR_SPECIFIC_06                 0xD6               
//#define PMBUS_CMD_MFR_SPECIFIC_07                 0xD7   
//#define PMBUS_CMD_MFR_SPECIFIC_08                 0xD8   
//#define PMBUS_CMD_ROM_MODE                    0xD9   
//#define PMBUS_CMD_USER_RAM_00                   0xDA               
//#define PMBUS_CMD_MFR_PHASE_CONTROL                0xDB               
//#define PMBUS_CMD_MFR_IOUT_OC_FAULT_LIMIT_LOW           0xDC                                                  
//#define PMBUS_CMD_MFR_VIN_SCALE                  0xDD  
//#define PMBUS_CMD_MFR_VIN_OFFSET                 0xDE  
//#define PMBUS_CMD_MFR_READ_TEMPERATURE_4             0xDF  
//#define PMBUS_CMD_MFR_OT_LIMIT_1                 0xE0   
//#define PMBUS_CMD_MFR_OT_LIMIT_2                 0xE1   
//#define PMBUS_CMD_MFR_PARM_INFO                  0xE2   
//#define PMBUS_CMD_MFR_PARM_VALUE                 0xE3   
//#define PMBUS_CMD_MFR_CMDS_DCDC_PAGED               0xE4   
//#define PMBUS_CMD_MFR_CMDS_DCDC_NONPAGED             0xE5   
//#define PMBUS_CMD_MFR_CMDS_PFC                  0xE6   
//#define PMBUS_CMD_MFR_SETUP_ID                  0xE7   
//#define PMBUS_CMD_MFR_OT_LIMIT_3                 0xE8   
//#define PMBUS_CMD_MFR_OT_LIMIT_4                 0xE9   
//#define PMBUS_CMD_MFR_DEADBAND_CONFIG               0xEA  
//#define PMBUS_CMD_MFR_PIN_CAL_A                  0xEB  
//#define PMBUS_CMD_MFR_PIN_CAL_B                  0xEC        
//#define PMBUS_CMD_MFR_PIN_CAL_C                  0xED  
//#define PMBUS_CMD_MFR_PIN_CAL_D                  0xEE                                      
//#define PMBUS_CMD_MFR_TEMP_CAL_OFFSET               0xEF  
//#define PMBUS_CMD_MFR_DEBUG_BUFFER                0xF0   
//#define PMBUS_CMD_MFR_TEMP_CAL_GAIN                0xF1   
//#define PMBUS_CMD_MFR_STATUS_BIT_MASK               0xF2   
//#define PMBUS_CMD_MFR_SPECIFIC_35                 0xF3                                             
//#define PMBUS_CMD_MFR_SPECIFIC_36                 0xF4   
//#define PMBUS_CMD_MFR_SPECIFIC_37                 0xF5                                       
//#define PMBUS_CMD_MFR_SPECIFIC_38                 0xF6                                             
//#define PMBUS_CMD_MFR_SPECIFIC_39                 0xF7                                       
//#define PMBUS_CMD_MFR_VOUT_CAL_MONITOR              0xF8                                       
//#define PMBUS_CMD_ROM_MODE_WITH_PASSWORD             0xF9                                       
//#define PMBUS_CMD_MFR_SPECIFIC_42                 0xFA                                      
//#define PMBUS_CMD_MFR_SPECIFIC_43                 0xFB                                      
//#define PMBUS_CMD_MFR_SPECIFIC_44                 0xFC                                      
//#define PMBUS_CMD_MFR_DEVICE_ID                  0xFD                    
//#define PMBUS_CMD_MFR_SPECIFIC_COMMAND              0xFE  
//#define PMBUS_CMD_PMBUS_COMMAND_EXT                0xFF  


//software_interrupts.h
//#pragma SWI_ALIAS (erase_data_flash_segment, 0)
//void erase_data_flash_segment(Uint8 segment);
//
//#pragma SWI_ALIAS (erase_dflash_segment_no_delay, 1)
//void erase_dflash_segment_no_delay(Uint8 segment);
//
//#pragma SWI_ALIAS (write_data_flash_word, 3)
//void write_data_flash_word(unsigned long * address,unsigned long data);
//
//#pragma SWI_ALIAS (enable_fast_interrupt, 4)
//void enable_fast_interrupt(void);
//
//#pragma SWI_ALIAS (disable_fast_interrupt, 5)
//void disable_fast_interrupt(void);
//
//#pragma SWI_ALIAS (enable_interrupt, 6)
//void enable_interrupt(void);
//
//#pragma SWI_ALIAS (disable_interrupt, 7)
//void disable_interrupt(void);
//
//#pragma SWI_ALIAS (write_firqpr, 8)
//void write_firqpr(unsigned long value);
//
//#pragma SWI_ALIAS (write_reqmask, 9)
//void write_reqmask(unsigned long value);
//
//#pragma SWI_ALIAS (clear_integrity_word, 12)
//void clear_integrity_word(void);
//
//#pragma SWI_ALIAS(write_data_flash_block, 13)
//void write_data_flash_block();
//
//#pragma SWI_ALIAS (set_tfa_mode, 20)
//void set_tfa_mode(void);
//
//#pragma SWI_ALIAS (clear_tfa_mode, 21)
//void clear_tfa_mode(void);

//system_defines.h

//PFC type defines: choose the right type, DO NOT CHNAGE THE VALUES!
////#define PFC_TYPE 0		//for interleave PFC with shunt sensing
//#define PFC_TYPE 1		//for single phase PFC with shunt sensing
////#define PFC_TYPE 2		//for bridgeless PFC with CT sensing

//#if(PFC_TYPE == 0)//if interleave PFC
//	//#define CURRENT_BALANCE (1) //1: enable current balance
//#elif(PFC_TYPE == 1)//if single phase PFC
	////#define ZVS_CONTROL (1)//1: enable ZVS control
	//#define T_r (10560)//high res(250ps), 2640ns, oscillate period
//#endif

////#define VOLTAGE_LOOP_DISABLE (1)//for opened voltage loop, comment this out for closed voltage loop


// Memory allocation constants
//#define DATA_FLASH_START_ADDRESS 	(0x18800)
//#define DATA_FLASH_END_ADDRESS 		(0x18fff)
//#define DATA_FLASH_LENGTH			(DATA_FLASH_END_ADDRESS - DATA_FLASH_START_ADDRESS + 1)
//#define	DATA_FLASH_SEGMENT_SIZE		(32)
//#define	DATA_FLASH_NUM_SEGMENTS		(DATA_FLASH_LENGTH / DATA_FLASH_SEGMENT_SIZE)

//#define MFBALRX_BYTE0_BLOCK_SIZE_2K   	(0x20)

//#define MFBALRX_BYTE0_RONLY					(0x02)		  // 1   Read-only protection

// Flash Error codes
//#define FLASH_SUCCESS 				(0)
//#define FLASH_INVALID_SEGMENT 		(1)
//#define	FLASH_INVALID_ADDRESS		(2)
//#define	FLASH_MISCOMPARE			(3)

//#define NULL						(0)

//Vbus measurement defines
//#define VBUS_FULL_RANGE (558) //full range of ADC for VBUS
//#define VBUS_FULL_RANGE_TEXT "558" //sent to model for design of voltage loop.
//#define VBUS_TO_VAC_SCALING ((int)((VBUS_FULL_RANGE * 32768)/VAC_FULL_RANGE))
//#define VBUS_POWER_GOOD_ON ((int32)((385*4096)/VBUS_FULL_RANGE))//385V
//#define VBUS_POWER_GOOD_OFF ((int32)((380*4096)/VBUS_FULL_RANGE))//380V

//Vac measurement defines
//#define VAC_FULL_RANGE (394) //full range of ADC (+-394)
//#define VAC_FR_SQ (VAC_FULL_RANGE * VAC_FULL_RANGE)
//#define VAC_MIN_ON (85.0) // minimum Vin to turn on PFC
//#define VAC_MIN_OFF (80.0) // minimum Vin to turn off PFC
//#define VAC_MIN_ON_SQ (VAC_MIN_ON * VAC_MIN_ON)
//#define VAC_MIN_OFF_SQ (VAC_MIN_OFF * VAC_MIN_OFF)
//#define VAC_MIN_ON_SQ_AVG ((int32)((VAC_MIN_ON_SQ/VAC_FR_SQ) * 32768))//Q15 ratio of squares of minimum operating voltage and VAC full range
//#define VAC_MIN_OFF_SQ_AVG ((int32)((VAC_MIN_OFF_SQ/VAC_FR_SQ) * 32768))//Q15 ratio of squares of minimum operating voltage and VAC full range
////#define VAC_TO_VBUS_SCALING ((int)((VAC_FULL_RANGE * 32768)/VBUS_FULL_RANGE))
//#define AC_DROP_V_RECT_THRESHOLD (88) //calculated for 80 volts at 1 millisecond
//#define AC_UNDROPPED_THRESHOLD (0x656) //threshold for vin squared average to indicate ac is back
//#define AC_DROP_COUNT_MAX (10)

//feedforward gain
//#if(PFC_TYPE == 0)//if interleave PFC
	//#define K_FEED_FORWARD ((int32)(.16 * 0x7FFFFFFF))//Q31, and .32 is dimensionless, selected to avoid overflow
//#else//single phase or bridgeless PFC
	//#define K_FEED_FORWARD ((int32)(.32 * 0x7FFFFFFF))//Q31, and .15 is dimensionless, selected to avoid overflow
//#endif

//switching frequency defines
//#define SWITCH_FREQ_NUMERATOR (250000) //numerator to divide by KHz to get period.
//#define MAX_SWITCH_FREQ (110) //KHz.
//#define MIN_SWITCH_FREQ (60) //KHz.
//#define DITHER_PERIOD (100000) //number of timer ticks for one dither half cycle.
//#define SWITCH_FREQ_OFFSET (55) //offset from secondary/primary communication byte to real value.

 //ADC results assignment
//#define VBUS_CHANNEL (0)
//#define AC_L_CHANNEL (1)
//#define AC_N_CHANNEL (2)
//#define NUMBER_OF_ADC_CHANNELS_ACTIVE (3)//how many ADC channels are used
//#define VRECT_SQUARED_SLOW_AVERAGE_SHIFT (15)

//voltage loop defines
//#define PI_I_HIGH_LIMIT ((1 << 27)-1)
//#define PI_I_LOW_LIMIT (-1 << 27)
//#define PI_OUTPUT_HIGH_LIMIT (32767) //max Q15 number
//#define PI_OUTPUT_LOW_LIMIT (0) //min Q15 number

//OCP/OVP defines
//#if(PFC_TYPE == 0)//if interleave PFC
	//#define OC_COMPARATOR (120)
//#else//single phase or bridgeless PFC
	//#define OC_COMPARATOR (120)
//#endif

//#define VBUS_DPWM_OFF_LEVEL ((int32)((420*4096)/VBUS_FULL_RANGE)) //420V
//#define VBUS_DPWM_ON_LEVEL ((int32)((380*4096)/VBUS_FULL_RANGE)) //380V

//UART related
//#define UART_BYTES (10) //serial receive buffer size
//#define UART_TX_TIME (10000) //number of timer interrupts between transmissions on serial port

//variables.h
//this file contains all global variables


//#ifdef MAIN 					// If it is the main routine
	//#define EXTERN	 			// 	it isn't extern, so define it as nothing
//#else 							// If it isn't the main routine
	//#define //EXTERN extern 		// 	it is extern
//#endif
/***
struct PROPORTIONAL_INTEGTRAL_STRUCTURE 
{
	int32 p;
	int32 i;
	int32 kp;
	int32 ki;
	int32 kp_nl;
	int32 ki_nl;
	int32 nl_threshold;
	int32 output;
	int32 output_filtered;
};

typedef enum
{
	STATE_IDLE,
	STATE_RELAY_BOUNCE,	
	STATE_RAMP_UP,				
	STATE_PFC_ON,	
	STATE_PFC_HICCUP,
	STATE_PFC_SHUT_DOWN		
} SUPPLY_STATE;

typedef enum
{
	I_STATE_1,
	I_STATE_2,	
	I_STATE_3,				
	I_STATE_4,				
	I_STATE_5				
} INTERRUPT_STATE;

struct INTERRUPT_VARIABLES
{
	//stuff for ADC measurement
	uint16 adc_raw[NUMBER_OF_ADC_CHANNELS_ACTIVE];
	uint16 adc_avg[NUMBER_OF_ADC_CHANNELS_ACTIVE];

	//stuff for Vin
	uint16 vin_raw;	//Vinح̥ ADC counts
	uint16 vin_sum;	//Vin's AD Counts Summary
	uint16 vin_filtered;	//Vinڌï̡ʺΈ
	uint16 vin_squared;		//VinŭŨ
	uint16 vin_squared_slow_average;
	uint16 vin_squared_average;	//VinŭŨʺŭǡ
	
	//stuff for Vout
	uint16 vbus_scaled; 	//scale vbus to match scale of vin
	uint16 vbus_target;	 	//sacled in ADC counts
	uint16 vbus_voltage; 	//scaled in volts
	uint16 vbus_setpoint; 	//scaled in ADC counts

	uint16 positive;
	uint16 i_target_average; //average current command
	uint16 i_target_sensed; //instantanous current command
	uint16 i_target_offset;
	uint16 sample_trigger_offset;
	uint16 numerator_1;
	uint16 numerator_2;
	uint16 numerator_3;
	uint16 numerator_4;
	uint16 denominator;
	uint16 vff_multiplier;
	uint16 min_vin;
	uint16 interrupt_counter_1;
	uint16 ramp_up_step;
	uint16 cla_output_filtered;

	// stuff for ac drop detection
	uint16 ac_drop_count;
	uint16 ac_drop;
	uint16 ac_drop_recovery_not_complete;
	uint16 vin_squared_for_ac_drop;

	// stuff for half cycle measurement
	uint16 negative_cycle_count;
	uint16 negative_cycle_counter;
	uint16 negative_vin_squared_accumulate;

	uint16 positive_cycle_count;
	uint16 positive_cycle_counter;
	uint16 positive_vin_squared_accumulate;

	Uint8 pwm_on;

	//stuff for frequency dither
	uint16 switching_period;
	uint16 dither_max_period;
	uint16 dither_min_period;
	uint16 dither_step;
	uint16 period_times_2_14;
 	Uint8 dither_direction; //1 if going up, 0 if going down in dither.

 	//stuff for EMI CAP compensation	
 	int16 cir_buff[64]; //64buffer for vin
	int32 cir_buff_ptr; //pointer for spot in cir buff;
	int32 cir_buff_delay; //delay for waveform from circular buffer.

 	struct PROPORTIONAL_INTEGTRAL_STRUCTURE pis;
	INTERRUPT_STATE interrupt_state;
	SUPPLY_STATE supply_state;
};

struct STATUS_0_BITS
{
	int32 reserved_0:27;
	int32 ot:1;
	int32 vdc_uv:1;
	int32 vdc_ov:1;
	int32 vac_uv:1;
	int32 vac_ov:1;
};
union STATUS_0
{
	int32 all;
	struct STATUS_0_BITS bits;
};

struct STATUS_1_BITS
{
	int32 reserved_0:25;
	int32 phase_b_off:1;
	int32 phase_a_off:1;
	int32 burst_mode:1;
	int32 sleep_mode:1;
	int32 dither_enabled:1;
	int32 pout_mode:1;
	int32 calibrating:1;
};

union STATUS_1
{
	int32 all;
	struct STATUS_1_BITS bits;
};
*/

/*
#define DPWM0CTRL0_BANK 0x50
#define DPWM1CTRL0_BANK 0x70 DPWMCTRL0
#define DPWM2CTRL0_BANK 0xa0
#define DPWM3CTRL0_BANK 0xd0
#define DPWM0CTRL1_BANK 0x50
#define DPWM1CTRL1_BANK 0x70
#define DPWM2CTRL1_BANK 0xa0
#define DPWM3CTRL1_BANK 0xd0
#define DPWM0CTRL2_BANK 0x50
#define DPWM1CTRL2_BANK 0x70
#define DPWM2CTRL2_BANK 0xa0
#define DPWM3CTRL2_BANK 0xd0
#define DPWM0PRD_BANK 0x50
#define DPWM1PRD_BANK 0x70
#define DPWM2PRD_BANK 0xa0
#define DPWM3PRD_BANK 0xd0
#define DPWM0EV1_BANK 0x50
#define DPWM1EV1_BANK 0x70
#define DPWM2EV1_BANK 0xa0
#define DPWM3EV1_BANK 0xd0
#define DPWM0EV2_BANK 0x50
#define DPWM1EV2_BANK 0x70
#define DPWM2EV2_BANK 0xa0
#define DPWM3EV2_BANK 0xd0
#define DPWM0EV3_BANK 0x50
#define DPWM1EV3_BANK 0x70
#define DPWM2EV3_BANK 0xa0
#define DPWM3EV3_BANK 0xd0
#define DPWM0EV4_BANK 0x50
#define DPWM1EV4_BANK 0x70
#define DPWM2EV4_BANK 0xa0
#define DPWM3EV4_BANK 0xd0  DPWMEV4
#define DPWM0SAMPTRIG1_BANK 0x50
#define DPWM1SAMPTRIG1_BANK 0x70
#define DPWM2SAMPTRIG1_BANK 0xa0
#define DPWM3SAMPTRIG1_BANK 0xd0
#define DPWM0SAMPTRIG2_BANK 0x50
#define DPWM1SAMPTRIG2_BANK 0x70
#define DPWM2SAMPTRIG2_BANK 0xa0
#define DPWM3SAMPTRIG2_BANK 0xd0
#define DPWM0PHASETRIG_BANK 0x50
#define DPWM1PHASETRIG_BANK 0x70
#define DPWM2PHASETRIG_BANK 0xa0
#define DPWM3PHASETRIG_BANK 0xd0
#define DPWM0CYCADJA_BANK 0x50
#define DPWM1CYCADJA_BANK 0x70
#define DPWM2CYCADJA_BANK 0xa0
#define DPWM3CYCADJA_BANK 0xd0
#define DPWM0CYCADJB_BANK 0x50
#define DPWM1CYCADJB_BANK 0x70
#define DPWM2CYCADJB_BANK 0xa0
#define DPWM3CYCADJB_BANK 0xd0
#define DPWM0RESDUTY_BANK 0x50
#define DPWM1RESDUTY_BANK 0x70
#define DPWM2RESDUTY_BANK 0xa0
#define DPWM3RESDUTY_BANK 0xd0
#define DPWM0FLTCTRL_BANK 0x50
#define DPWM1FLTCTRL_BANK 0x70
#define DPWM2FLTCTRL_BANK 0xa0
#define DPWM3FLTCTRL_BANK 0xd0
#define DPWM0OVERFLOW_BANK 0x50
#define DPWM1OVERFLOW_BANK 0x70
#define DPWM2OVERFLOW_BANK 0xa0
#define DPWM3OVERFLOW_BANK 0xd0
#define DPWM0INT_BANK 0x50
#define DPWM1INT_BANK 0x70
#define DPWM2INT_BANK 0xa0
#define DPWM3INT_BANK 0xd0
#define DPWM0CNTPRE_BANK 0x50
#define DPWM1CNTPRE_BANK 0x70
#define DPWM2CNTPRE_BANK 0xa0
#define DPWM3CNTPRE_BANK 0xd0
#define DPWM0BLKABEG_BANK 0x50
#define DPWM1BLKABEG_BANK 0x70
#define DPWM2BLKABEG_BANK 0xa0
#define DPWM3BLKABEG_BANK 0xd0
#define DPWM0BLKAEND_BANK 0x50
#define DPWM1BLKAEND_BANK 0x70
#define DPWM2BLKAEND_BANK 0xa0
#define DPWM3BLKAEND_BANK 0xd0
#define DPWM0BLKBBEG_BANK 0x50
#define DPWM1BLKBBEG_BANK 0x70
#define DPWM2BLKBBEG_BANK 0xa0
#define DPWM3BLKBBEG_BANK 0xd0
#define DPWM0BLKBEND_BANK 0x50
#define DPWM1BLKBEND_BANK 0x70
#define DPWM2BLKBEND_BANK 0xa0
#define DPWM3BLKBEND_BANK 0xd0
#define DPWM0MINDUTYHI_BANK 0x50
#define DPWM1MINDUTYHI_BANK 0x70
#define DPWM2MINDUTYHI_BANK 0xa0
#define DPWM3MINDUTYHI_BANK 0xd0
#define DPWM0MINDUTYLO_BANK 0x50
#define DPWM1MINDUTYLO_BANK 0x70
#define DPWM2MINDUTYLO_BANK 0xa0
#define DPWM3MINDUTYLO_BANK 0xd0
#define DPWM0ADAPTIVE_BANK 0x50
#define DPWM1ADAPTIVE_BANK 0x70
#define DPWM2ADAPTIVE_BANK 0xa0
#define DPWM3ADAPTIVE_BANK 0xd0
#define DPWM0FLTSTAT_BANK 0x50
#define DPWM1FLTSTAT_BANK 0x70
#define DPWM2FLTSTAT_BANK 0xa0
#define DPWM3FLTSTAT_BANK 0xd0
#define DPWM0AUTOMAX_BANK 0x50 DPWMAUTOMAX
#define DPWM1AUTOMAX_BANK 0x70
#define DPWM2AUTOMAX_BANK 0xa0
#define DPWM3AUTOMAX_BANK 0xd0
#define DPWM0AUTOMID_BANK 0x52 //
#define DPWM1AUTOMID_BANK 0x72
#define DPWM2AUTOMID_BANK 0xa2
#define DPWM3AUTOMID_BANK 0xd2
#define DPWM0EDGEGEN_BANK 0x51 //
#define DPWM1EDGEGEN_BANK 0x71
#define DPWM2EDGEGEN_BANK 0xa1
#define DPWM3EDGEGEN_BANK 0xd1
#define DPWM0FILTERDUTYREAD_BANK 0x51 //
#define DPWM1FILTERDUTYREAD_BANK 0x71
#define DPWM2FILTERDUTYREAD_BANK 0xa1
#define DPWM3FILTERDUTYREAD_BANK 0xd1
#define DPWM0ADCPDREF_BANK 0x51 //
#define DPWM1ADCPDREF_BANK 0x71
#define DPWM2ADCPDREF_BANK 0xa1
#define DPWM3ADCPDREF_BANK 0xd1
#define DPWM0ADCPDIS_BANK 0x51 //
#define DPWM1ADCPDIS_BANK 0x71
#define DPWM2ADCPDIS_BANK 0xa1
#define DPWM3ADCPDIS_BANK 0xd1
#define FILTER0STATUS_BANK 0x60
#define FILTER1STATUS_BANK 0x90
#define FILTER2STATUS_BANK 0xc0
#define FILTER0CTRL_BANK 0x60  FILTERCTRL
#define FILTER1CTRL_BANK 0x90
#define FILTER2CTRL_BANK 0xc0
#define CPUXN0_BANK 0x60
#define CPUXN1_BANK 0x90
#define CPUXN2_BANK 0xc0
#define FILTER0XNREAD_BANK 0x60
#define FILTER1XNREAD_BANK 0x90
#define FILTER2XNREAD_BANK 0xc0
#define FILTER0KIYNREAD_BANK 0x60
#define FILTER1KIYNREAD_BANK 0x90
#define FILTER2KIYNREAD_BANK 0xc0
#define FILTER0KDYNREAD_BANK 0x60
#define FILTER1KDYNREAD_BANK 0x90
#define FILTER2KDYNREAD_BANK 0xc0
#define FILTER0YNREAD_BANK 0x60
#define FILTER1YNREAD_BANK 0x90
#define FILTER2YNREAD_BANK 0xc0
#define COEFCONFIG0_BANK 0x60
#define COEFCONFIG1_BANK 0x90
#define COEFCONFIG2_BANK 0xc0
#define FILTER0KPCOEF0_BANK 0x60
#define FILTER1KPCOEF0_BANK 0x90
#define FILTER2KPCOEF0_BANK 0xc0
#define FILTER0KPCOEF1_BANK 0x60
#define FILTER1KPCOEF1_BANK 0x90
#define FILTER2KPCOEF1_BANK 0xc0
#define FILTER0KICOEF0_BANK 0x60
#define FILTER1KICOEF0_BANK 0x90
#define FILTER2KICOEF0_BANK 0xc0
#define FILTER0KICOEF1_BANK 0x60
#define FILTER1KICOEF1_BANK 0x90
#define FILTER2KICOEF1_BANK 0xc0
#define FILTER0KDCOEF0_BANK 0x60
#define FILTER1KDCOEF0_BANK 0x90
#define FILTER2KDCOEF0_BANK 0xc0
#define FILTER0KDCOEF1_BANK 0x60
#define FILTER1KDCOEF1_BANK 0x90
#define FILTER2KDCOEF1_BANK 0xc0
#define FILTER0KDALPHA_BANK 0x60
#define FILTER1KDALPHA_BANK 0x90
#define FILTER2KDALPHA_BANK 0xc0
#define FILTER0NL0_BANK 0x60
#define FILTER1NL0_BANK 0x90
#define FILTER2NL0_BANK 0xc0
#define FILTER0NL1_BANK 0x60
#define FILTER1NL1_BANK 0x90
#define FILTER2NL1_BANK 0xc0
#define FILTER0NL2_BANK 0x60
#define FILTER1NL2_BANK 0x90
#define FILTER2NL2_BANK 0xc0
#define FILTER0KICLPHI_BANK 0x60
#define FILTER1KICLPHI_BANK 0x90
#define FILTER2KICLPHI_BANK 0xc0
#define FILTER0KICLPLO_BANK 0x60
#define FILTER1KICLPLO_BANK 0x90
#define FILTER2KICLPLO_BANK 0xc0
#define FILTER0YNCLPHI_BANK 0x60
#define FILTER1YNCLPHI_BANK 0x90
#define FILTER2YNCLPHI_BANK 0xc0
#define FILTER0YNCLPLO_BANK 0x60
#define FILTER1YNCLPLO_BANK 0x90
#define FILTER2YNCLPLO_BANK 0xc0
#define FILTER0OCLPHI_BANK 0x60
#define FILTER1OCLPHI_BANK 0x90
#define FILTER2OCLPHI_BANK 0xc0
#define FILTER0OCLPLO_BANK 0x60
#define FILTER1OCLPLO_BANK 0x90
#define FILTER2OCLPLO_BANK 0xc0
#define FILTER0PRESET_BANK 0x60
#define FILTER1PRESET_BANK 0x90
#define FILTER2PRESET_BANK 0xc0
#define RAMPCTRL0_BANK 0x80
#define RAMPCTRL1_BANK 0xb0
#define RAMPCTRL2_BANK 0xe0
#define RAMPSTAT0_BANK 0x80
#define RAMPSTAT1_BANK 0xb0
#define RAMPSTAT2_BANK 0xe0
#define RAMPCYCLE0_BANK 0x80
#define RAMPCYCLE1_BANK 0xb0
#define RAMPCYCLE2_BANK 0xe0
#define EADCDAC0_BANK 0x80
#define EADCDAC1_BANK 0xb0
#define EADCDAC2_BANK 0xe0
#define RAMPDACEND0_BANK 0x80
#define RAMPDACEND1_BANK 0xb0
#define RAMPDACEND2_BANK 0xe0
#define DACSTEP0_BANK 0x80
#define DACSTEP1_BANK 0xb0
#define DACSTEP2_BANK 0xe0
#define DACSATSTEP0_BANK 0x80
#define DACSATSTEP1_BANK 0xb0
#define DACSATSTEP2_BANK 0xe0
#define EDACCTRL0_BANK 0x80
#define EDACCTRL1_BANK 0xb0
#define EDACCTRL2_BANK 0xe0
#define EADCCTRL0_BANK 0x80
#define EADCCTRL1_BANK 0xb0
#define EADCCTRL2_BANK 0xe0
#define SARCTRL0_BANK 0x80
#define SARCTRL1_BANK 0xb0
#define SARCTRL2_BANK 0xe0
#define EADCVALUE0_BANK 0x80
#define EADCVALUE1_BANK 0xb0
#define EADCVALUE2_BANK 0xe0
#define EADCRAWVALUE0_BANK 0x80
#define EADCRAWVALUE1_BANK 0xb0
#define EADCRAWVALUE2_BANK 0xe0
#define DACSTAT0_BANK 0x80
#define DACSTAT1_BANK 0xb0
#define DACSTAT2_BANK 0xe0
#define FECTRL0MUX_BANK 0x20
#define FECTRL1MUX_BANK 0x20
#define FECTRL2MUX_BANK 0x20
#define EXTDACCTRL_BANK 0x20
#define FILTERMUX_BANK 0x20
#define FILTERKCOMPA_BANK 0x20
#define FILTERKCOMPB_BANK 0x20
#define DPWMMUX_BANK 0x20
#define GLBEN_BANK 0x20
#define PWMGLBPRD_BANK 0x20
#define SYNCCTRL_BANK 0x20
#define PCMCTRL_BANK 0x20
#define SAMPTRIGCTRL_BANK 0x20
#define CYCADJCTRL_BANK 0x20
#define CYCADJLIM_BANK 0x20
#define CYCADJSTAT_BANK 0x20
#define LLCTRL_BANK 0x20
#define LLENTHRESH_BANK 0x20
#define LLDISTHRESH_BANK 0x20
#define EXTFAULTCTRL_BANK 0x30
#define FAULTMXINTSTAT_BANK 0x30
#define FAULTMXRAWSTAT_BANK 0x30
#define DCOMPCTRL0_BANK 0x30
#define DCOMPCTRL1_BANK 0x30
#define DCOMPCTRL2_BANK 0x30
#define DCOMPCTRL3_BANK 0x30
#define DCOMPCNTSTAT_BANK 0x30
#define DPWM0CLIM_BANK 0x30 //
#define DPWM0FLTABDET_BANK 0x30 //
#define DPWM0FLTDET_BANK 0x30 //
#define DPWM1CLIM_BANK 0x30
#define DPWM1FLTABDET_BANK 0x30
#define DPWM1FLTDET_BANK 0x30
#define DPWM2CLIM_BANK 0x30
#define DPWM2FLTABDET_BANK 0x30
#define DPWM2FLTDET_BANK 0x30
#define DPWM3CLIM_BANK 0x30
#define DPWM3FLTABDET_BANK 0x30
#define DPWM3FLTDET_BANK 0x30
#define ACOMPCTRL0_BANK 0x30
#define ACOMPCTRL1_BANK 0x30
#define ACOMPCTRL2_BANK 0x30
#define ACOMPCTRL3_BANK 0x30
#define COMPRAMP0_BANK 0x30
#define IDECTRL_BANK 0x31
#define ADCCTRL_BANK 0x40
#define ADCSTAT_BANK 0x40
#define ADCSEQSEL0_BANK 0x40
#define ADCSEQSEL1_BANK 0x40
#define ADCSEQSEL2_BANK 0x40
#define ADCSEQSEL3_BANK 0x40
#define ADCRESULT0_BANK 0x40
#define ADCRESULT1_BANK 0x40
#define ADCRESULT2_BANK 0x40
#define ADCRESULT3_BANK 0x40
#define ADCRESULT4_BANK 0x40
#define ADCRESULT5_BANK 0x40
#define ADCRESULT6_BANK 0x40
#define ADCRESULT7_BANK 0x40
#define ADCRESULT8_BANK 0x40
#define ADCRESULT9_BANK 0x40
#define ADCRESULT10_BANK 0x40
#define ADCRESULT11_BANK 0x40
#define ADCRESULT12_BANK 0x40
#define ADCRESULT13_BANK 0x40
#define ADCRESULT14_BANK 0x40
#define ADCRESULT15_BANK 0x40
#define ADCAVGRESULT0_BANK 0x40
#define ADCAVGRESULT1_BANK 0x40
#define ADCAVGRESULT2_BANK 0x40
#define ADCAVGRESULT3_BANK 0x40
#define ADCAVGRESULT4_BANK 0x40
#define ADCAVGRESULT5_BANK 0x40
#define ADCCOMPLIM0_BANK 0x40
#define ADCCOMPLIM1_BANK 0x40
#define ADCCOMPLIM2_BANK 0x40
#define ADCCOMPLIM3_BANK 0x41
#define ADCCOMPLIM4_BANK 0x41
#define ADCCOMPLIM5_BANK 0x41
#define ADCCOMPEN_BANK 0x41
#define ADCCOMPRESULT_BANK 0x41
#define ADCAVGCTRL_BANK 0x41
*/
/*

*/