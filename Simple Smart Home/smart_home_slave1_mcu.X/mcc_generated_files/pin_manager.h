/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F46K20
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_AN0 aliases
#define channel_AN0_TRIS                 TRISAbits.TRISA0
#define channel_AN0_LAT                  LATAbits.LATA0
#define channel_AN0_PORT                 PORTAbits.RA0
#define channel_AN0_ANS                  ANSELbits.ANS0
#define channel_AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_AN0_GetValue()           PORTAbits.RA0
#define channel_AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()      do { ANSELbits.ANS0 = 1; } while(0)
#define channel_AN0_SetDigitalMode()     do { ANSELbits.ANS0 = 0; } while(0)

// get/set Relay aliases
#define Relay_TRIS                 TRISAbits.TRISA1
#define Relay_LAT                  LATAbits.LATA1
#define Relay_PORT                 PORTAbits.RA1
#define Relay_ANS                  ANSELbits.ANS1
#define Relay_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Relay_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Relay_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Relay_GetValue()           PORTAbits.RA1
#define Relay_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Relay_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Relay_SetAnalogMode()      do { ANSELbits.ANS1 = 1; } while(0)
#define Relay_SetDigitalMode()     do { ANSELbits.ANS1 = 0; } while(0)

// get/set GUR_AN2 aliases
#define GUR_AN2_TRIS                 TRISAbits.TRISA2
#define GUR_AN2_LAT                  LATAbits.LATA2
#define GUR_AN2_PORT                 PORTAbits.RA2
#define GUR_AN2_ANS                  ANSELbits.ANS2
#define GUR_AN2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define GUR_AN2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define GUR_AN2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define GUR_AN2_GetValue()           PORTAbits.RA2
#define GUR_AN2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define GUR_AN2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define GUR_AN2_SetAnalogMode()      do { ANSELbits.ANS2 = 1; } while(0)
#define GUR_AN2_SetDigitalMode()     do { ANSELbits.ANS2 = 0; } while(0)

// get/set Stair_led aliases
#define Stair_led_TRIS                 TRISBbits.TRISB0
#define Stair_led_LAT                  LATBbits.LATB0
#define Stair_led_PORT                 PORTBbits.RB0
#define Stair_led_WPU                  WPUBbits.WPUB0
#define Stair_led_ANS                  ANSELHbits.ANS12
#define Stair_led_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Stair_led_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Stair_led_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Stair_led_GetValue()           PORTBbits.RB0
#define Stair_led_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Stair_led_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Stair_led_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Stair_led_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Stair_led_SetAnalogMode()      do { ANSELHbits.ANS12 = 1; } while(0)
#define Stair_led_SetDigitalMode()     do { ANSELHbits.ANS12 = 0; } while(0)

// get/set Stair_button aliases
#define Stair_button_TRIS                 TRISBbits.TRISB1
#define Stair_button_LAT                  LATBbits.LATB1
#define Stair_button_PORT                 PORTBbits.RB1
#define Stair_button_WPU                  WPUBbits.WPUB1
#define Stair_button_ANS                  ANSELHbits.ANS10
#define Stair_button_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Stair_button_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Stair_button_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Stair_button_GetValue()           PORTBbits.RB1
#define Stair_button_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Stair_button_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Stair_button_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Stair_button_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Stair_button_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define Stair_button_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set eusart_test_led aliases
#define eusart_test_led_TRIS                 TRISCbits.TRISC5
#define eusart_test_led_LAT                  LATCbits.LATC5
#define eusart_test_led_PORT                 PORTCbits.RC5
#define eusart_test_led_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define eusart_test_led_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define eusart_test_led_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define eusart_test_led_GetValue()           PORTCbits.RC5
#define eusart_test_led_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define eusart_test_led_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/