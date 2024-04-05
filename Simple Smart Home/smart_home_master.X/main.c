#include "mcc_generated_files/mcc.h"
#include "ECU_Layer/LCD/LCD.h"
#include "ECU_Layer/Temp_Sensor_TC74/temp_sensor_TC74.h"
#include "ECU_Layer/7_SEGMENT/7_seg.h"




//extern variables

Std_ReturnType ret = E_NOT_OK;

//variables

void Air_System(uint8 temp_value );
uint8 temp_value=0;



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
       __delay_ms(25);
       temp_value=TempSensor_TC74_Read_Temp(0x9A);
       Air_System(temp_value);
    }
}
void Air_System(uint8 temp_value ){
    
if(temp_value >= 37){
           AirCondHigh_SetHigh();
           AirCondLow_SetLow();
           HeaterHigh_SetLow();
           HeaterLow_SetLow();
       }
       else if (temp_value <=20){
           AirCondHigh_SetLow();
           AirCondLow_SetLow();
           HeaterHigh_SetHigh();
           HeaterLow_SetLow();
       }
       else if(temp_value <= 37&&temp_value >=20){
           AirCondHigh_SetLow();
           AirCondLow_SetLow();
           HeaterHigh_SetLow();
           HeaterLow_SetLow();
       }
       else {/*Nothing*/}
}