
#include "../ECU_Layer/LCD/lcd.h"
#include "mcc.h"
chr_lcd_4bit_t date_time_lcd={
.lcd_rs.port=PORTD_INDEX,
.lcd_rs.pin=PIN0,
.lcd_rs.direction=GPIO_DIRECTION_OUTPUT,
.lcd_rs.logic=GPIO_LOW,

.lcd_en.port=PORTD_INDEX,
.lcd_en.pin=PIN1,
.lcd_en.direction=GPIO_DIRECTION_OUTPUT,
.lcd_en.logic=GPIO_LOW,

.lcd_data[0].port=PORTD_INDEX,
.lcd_data[0].pin=PIN2,
.lcd_data[0].direction=GPIO_DIRECTION_OUTPUT,
.lcd_data[0].logic=GPIO_LOW,

.lcd_data[1].port=PORTD_INDEX,
.lcd_data[1].pin=PIN3,
.lcd_data[1].direction=GPIO_DIRECTION_OUTPUT,
.lcd_data[1].logic=GPIO_LOW,

.lcd_data[2].port=PORTD_INDEX,
.lcd_data[2].pin=PIN4,
.lcd_data[2].direction=GPIO_DIRECTION_OUTPUT,
.lcd_data[2].logic=GPIO_LOW,

.lcd_data[3].port=PORTD_INDEX,
.lcd_data[3].pin=PIN5,
.lcd_data[3].direction=GPIO_DIRECTION_OUTPUT,
.lcd_data[3].logic=GPIO_LOW,
};

void SYSTEM_Initialize(void)
{

    INTERRUPT_Initialize();
    PIN_MANAGER_Initialize();
    OSCILLATOR_Initialize();
    ADC_Initialize();
    TMR0_Initialize();
    EUSART_Initialize();
    lcd_4bit_intialize(&date_time_lcd);
}

void OSCILLATOR_Initialize(void)
{
    // SCS FOSC; OSTS intosc; IRCF 1MHz_HFINTOSC/16; IDLEN disabled; 
    OSCCON = 0x30;
    // INTSRC disabled; PLLEN disabled; TUN 0; 
    OSCTUNE = 0x00;
}


/**
 End of File
*/
