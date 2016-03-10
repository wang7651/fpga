/*
DPWM0CTRL0.bit.CLA_EN = 1; dpwm can't work
SAMPTRIGCTRL.bit.FE0_TRIG_DPWM0_EN = 1 dpwm can't work
*/
#include "define.h"
#include "gd6101_bank.h"
#include "cyclone_c51.h"



#define PERIOD           (8000)

extern BYTE SFR_BANK;


sfr ACC     	=   0xE0 ;


void init_dpwm0(void) 
{

    //DPWM0CTRL0.bit.PWM_EN = 0;   	//b0,h51,disable locally for init
	//DPWM0CTRL0.bit.CLA_EN = 1;		//b1,default is 1 - use cla
	//DPWM0CTRL0.bit.PWM_MODE = 0; 	//b7:4,normal mode
	SFR_BANK = DPWM0CTRL0_BANK;
	{
		union DPWMCTRL0_REG tmp;
		tmp.all = DPWM0CTRL0.all;
		tmp.bits.PWM_EN = 0;   	//b0,h51,disable locally for init
		tmp.bits.CLA_EN = 1;		//b1,default is 1 - use cla
		tmp.bits.PWM_MODE = 0; 
		DPWM0CTRL0.all = tmp.all;
	}
	
	SFR_BANK = Dpwm0Regs;
	DPWM0PRD.all = PERIOD;       	//h50,use .all for all values, make sure scaling matches.
	DPWM0EV1.all = 0;              //Put event 1 at start of period
	DPWM0EV2.all = PERIOD/4;       //1/4 of period - divide is OK because it's all constants.
	DPWM0EV3.all = PERIOD/2;       //1/2 of period   
	DPWM0EV4.all = (PERIOD * 3)/4; //3/4 of period
	DPWM0SAMPTRIG1.all = (PERIOD * 3)/4; //3/4 of period
	

	//DPWM0CTRL2.bit.SAMPLE_TRIG_1_EN = 1; //b0,h50,enable 1 sample trigger
	WRITE_U32_1bit(DPWM0CTRL2,SAMPLE_TRIG_1_EN,1); 
	
	DPWM0CTRL1.all |= fPWM_A_PROT_DIS|fPWM_B_PROT_DIS;
	//DPWM0CTRL1.bit.EVENT_UP_SEL = 1; //b17:16,h50,update at end of period
	WRITE_U32_bitsH(DPWM0CTRL1,EVENT_UP_SEL,1);
	

    //DPWM0CTRL0.bit.PWM_EN = 1;     //b0,h51,enable locally
	SFR_BANK = DPWM0CTRL0_BANK;
	WRITE_U32_1bit(DPWM0CTRL0,PWM_EN,1); 
}

void init_filter0(void)
{

//PID setup taken from a random topology - lab is for closing loop, not tuning parameters.
	SFR_BANK = Filter0Regs;
	//FILTER0KPCOEF0.bit.KP_COEF_0 = 800;	//h60,.all
	FILTER0KPCOEF0.all = 800;
	
	//FILTER0KICOEF0.bit.KI_COEF_0 = 50;//.all
	FILTER0KICOEF0.all = 50;
	
	//FILTER0KDCOEF0.bit.KD_COEF_0 = 1500;//.all
	FILTER0KDCOEF0.all = 1500;
	
	//FILTER0KDALPHA.bit.KD_ALPHA_0 = -1;//b8:0
	//FILTER0KDALPHA.all = -1;
	WRITE_U32_bits(FILTER0KDALPHA,KD_ALPHA_0,-1);
	
	//FILTER0KICLPHI.bit.KI_CLAMP_HIGH = 0x7FFFFF;//.all
	FILTER0KICLPHI.all = 0x7FFFFF;
	
    //FILTER0KICLPLO.bit.KI_CLAMP_LOW = 0;//.all
	FILTER0KICLPLO.all = 0;
	
	//FILTER0OCLPHI.bit.OUTPUT_CLAMP_HIGH = 0x7FFFFF;//.all
	FILTER0OCLPHI.all = 0x7FFFFF;//0x3FFFF;
	
	//FILTER0OCLPLO.bit.OUTPUT_CLAMP_LOW = 0; //.all
	FILTER0OCLPLO.all =  0;
	
    //FILTER0CTRL.bit.FILTER_EN = 1;
     //b0,enable OK here, because nothing will happen until DPWM and front end are globally enabled
	WRITE_U32_1bit(FILTER0CTRL,FILTER_EN,1); 

	//Better option for handling shoot through - uses full dynamic range of filter

	//FILTERKCOMPA.bit.KCOMP0 = (PERIOD/2) >> 4; 
	  // 13:0,h20,KCOMP is at 4 ns, period is at 250 ps
	SFR_BANK = FILTERKCOMPA_BANK;  
	FILTERKCOMPA.all =  (PERIOD/2) >> 4; 
	//FILTER0CTRL.bit.OUTPUT_MULT_SEL = 0; //b13:12 ,h60,select half period kcomp for output multiplier
	SFR_BANK = FILTER0CTRL_BANK;
	WRITE_U32_bits(FILTER0CTRL,OUTPUT_MULT_SEL,0);
}

void init_loop_mux(void)
{
	SFR_BANK = LoopMuxRegs;
	//DPWMMUX.bit.DPWM0_FILTER_SEL = 0; //b2:0,h20 use filter 0 for DPWM 0
	WRITE_U32_bits0(DPWMMUX,DPWM0_FILTER_SEL);
	//SAMPTRIGCTRL.bit.FE0_TRIG_DPWM0_EN = 1; //b0,h20,use DPWM0 for filter0 sample trigger
	WRITE_U32_1bit(SAMPTRIGCTRL,FE0_TRIG_DPWM0_EN,1);	
}

void global_enable(void)
{
	union GLBEN_REG glben_store; //collect global enable bits for simultaneous use

	glben_store.all = 0;

	glben_store.bits.DPWM0_EN = 1;//b0 //DPWM0_GLB_EN

	glben_store.bits.FE_CTRL0_EN = 1;//b8

	//GLBEN = glben_store;//h21
	SFR_BANK = GLBEN_BANK;
	GLBEN.all = glben_store.all;
}
void init_front_end0(void)
{
	SFR_BANK = FeCtrl0Regs;
	//EADCDAC0.bit.DAC_VALUE = 0;//h80,b13:0, DACSTAT.dac0_i[9:0]
	WRITE_U32_bits(EADCDAC0,DAC_VALUE,0*16); //EADCDAC.DAC_VALUE[13:0]
	//EADCCTRL0.bit.AFE_GAIN = 2;//h80,b5:4
	WRITE_U32_bits(EADCCTRL0,AFE_GAIN,2);
	SARCTRL0.all = 0x28600000+1;
	EADCCTRL0.all = 0x2030L;
	
	SARCTRL0.all = 0x28600000+0;
}
int u16,tmp;
BYTE gain;
void main()
{
    u16=tmp=gain=0;
	//init_pmbus();
	init_dpwm0();
	init_filter0();
	init_loop_mux();
	init_front_end0();
	
	
	
	global_enable();
	//ram_eadcdac = FeCtrl0Regs.EADCDAC.bit.DAC_VALUE; //initialize hyperknob
	//SFR_BANK = FeCtrl0Regs;
	//SARCTRL0.all = 0x28600000+1;
	
	//EADCCTRL0.all = 0x2030L;
	/*
	SFR_BANK = LoopMuxRegs;
	WRITE_U32_bits0(DPWMMUX,DPWM0_FILTER_SEL);
	WRITE_U32_1bit(SAMPTRIGCTRL,FE0_TRIG_DPWM0_EN,1);
	*/
	SFR_BANK = FeCtrl0Regs;
	
	
	for(;;)
	{
		//tmp++;
		//if (tmp==10){
			//tmp=0;
		//	u16++;
			//gain++;
			//if (gain>=4) gain=0;
		/*
			SFR_BANK = Dpwm0Regs;
			ACC = 0xa0;
			DPWM0CTRL1.all |= fPWM_A_PROT_DIS|fPWM_B_PROT_DIS;
			ACC = 0xa1;
			DPWM0CTRL1.all &= ~fPWM_A_PROT_DIS & ~fPWM_B_PROT_DIS;
			ACC = 0xa2;
			DPWM0CTRL1.all |= fPWM_A_PROT_DIS|fPWM_B_PROT_DIS;
			ACC = 0xa3;
			DPWM0CTRL1.all &= ~fPWM_A_PROT_DIS & ~fPWM_B_PROT_DIS;
			*/
			//SARCTRL0.all = 0x28600000+0;

			//SARCTRL0.all = 0x28600000+1;
			//WRITE_U32_bits(EADCCTRL0,AFE_GAIN,gain);
		//}
		
	}
}