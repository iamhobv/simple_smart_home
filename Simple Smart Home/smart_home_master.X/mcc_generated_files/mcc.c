#include "mcc.h"
#include "../ECU_Layer/LCD/LCD.h"
#include "../ECU_Layer/7_SEGMENT/7_seg.h"


Std_ReturnType ret = E_NOT_OK;
segment_t clock_segment={
.segment_pins[0].port=PORTD_INDEX,
.segment_pins[0].pin=PIN0,
.segment_pins[0].direction=GPIO_DIRECTION_OUTPUT,
.segment_pins[0].logic=GPIO_LOW,

.segment_pins[1].port=PORTD_INDEX,
.segment_pins[1].pin=PIN1,
.segment_pins[1].direction=GPIO_DIRECTION_OUTPUT,
.segment_pins[1].logic=GPIO_LOW,

.segment_pins[2].port=PORTD_INDEX,
.segment_pins[2].pin=PIN2,
.segment_pins[2].direction=GPIO_DIRECTION_OUTPUT,
.segment_pins[2].logic=GPIO_LOW,

.segment_pins[3].port=PORTD_INDEX,
.segment_pins[3].pin=PIN3,
.segment_pins[3].direction=GPIO_DIRECTION_OUTPUT,
.segment_pins[3].logic=GPIO_LOW,

};




pin_config_t test={
    .port=PORTD_INDEX,
    .pin=PIN6,
    .direction=GPIO_DIRECTION_OUTPUT,
    .logic=GPIO_LOW
};

void SYSTEM_Initialize(void)
{

    INTERRUPT_Initialize();
    I2C_Initialize();
    PIN_MANAGER_Initialize();
    OSCILLATOR_Initialize();
    EUSART_Initialize();
    gpio_pin_intialize(&test);
    seven_segement_intialize(&clock_segment);
    
    
}


void OSCILLATOR_Initialize(void)
{
    // SCS FOSC; OSTS intosc; IRCF 1MHz_HFINTOSC/16; IDLEN disabled; 
    OSCCON = 0x30;
    // INTSRC disabled; PLLEN disabled; TUN 0; 
    OSCTUNE = 0x00;
}

