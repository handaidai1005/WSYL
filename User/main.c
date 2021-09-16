#include "CH57x_common.h"
#include "./led/led.h"
#include "./e-ink/e_ink.h"
#include "./Examples/EPD_3in7_test.h"
#include "LTC2453.h"
#include "./ADC/adc.h"
#include "EPD_2IN13_V2.h" 
#include "yl_iic.h"
#include "cgq.h"
#include "FRAM.h"


int main( void )
{
//	UINT32 DEST;
//	 LED_Init ( );
////	E_ink_Init();
//	REF_Init();
//	GPIOB_SetBits(AD_REF_GPIO);
//	LTC2453_Init();  
//	GPIOB_ModeCfg(GPIO_Pin_2,GPIO_ModeOut_PP_5mA);	
//	GPIOB_ResetBits(GPIO_Pin_2);
	
	
//	 BAT_Init(  );
// 	CGQ_Init();
//	DelayMs(500);
//	DelayMs(500);
//		DelayMs(500);
//	DelayMs(500);
//	GPIOB_ResetBits(CGQ_SDA_Pin|CGQ_SCL_Pin);
	
//	EPD_2in13_V2_test();

	FLASH_WriteRead_Task();
	while (1)
		
 	{
		
//		FST800_get();
//			EPD_3in7_test();
//	DEST=JHM1200_get_cal();	
//		DelayMs(500);
//		DelayMs(500);
//		LED_ERR_OFF();
	
//	LTC2453_Task();
//		BAT_REF_ADC();
//		BAT_ADC ();
//		LED_Config();	
	}
}
