

#include "mcc_generated_files/mcc.h"
#include "ECU_Layer/LCD/lcd.h"


Std_ReturnType ret = E_NOT_OK;
uint8 star_button=0;

adc_result_t converted_LDR_Value;


void main(void)
{
       // Initialize the device
    SYSTEM_Initialize();

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    INTERRUPT_GlobalInterruptLowEnable();

  
    // Enable the Peripheral Interrupts
     INTERRUPT_PeripheralInterruptEnable();
        
     
    while (1)
    {   
        converted_LDR_Value = ADC_GetConversion(channel_AN0);
       
        
        if (15000 <= converted_LDR_Value){
        Relay_SetHigh();
        }
        else {
        Relay_SetLow();
        }
        
        star_button=Stair_button_GetValue();
        if (star_button == 1){
        Stair_led_SetHigh();
        TMR0_StartTimer();
        }
        else {/*Nothing*/}
        
        
    }
}

