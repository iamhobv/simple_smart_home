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

// get/set AirCondHigh aliases
#define AirCondHigh_TRIS                 TRISAbits.TRISA0
#define AirCondHigh_LAT                  LATAbits.LATA0
#define AirCondHigh_PORT                 PORTAbits.RA0
#define AirCondHigh_ANS                  ANSELbits.ANS0
#define AirCondHigh_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define AirCondHigh_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define AirCondHigh_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define AirCondHigh_GetValue()           PORTAbits.RA0
#define AirCondHigh_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define AirCondHigh_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define AirCondHigh_SetAnalogMode()      do { ANSELbits.ANS0 = 1; } while(0)
#define AirCondHigh_SetDigitalMode()     do { ANSELbits.ANS0 = 0; } while(0)

// get/set AirCondLow aliases
#define AirCondLow_TRIS                 TRISAbits.TRISA1
#define AirCondLow_LAT                  LATAbits.LATA1
#define AirCondLow_PORT                 PORTAbits.RA1
#define AirCondLow_ANS                  ANSELbits.ANS1
#define AirCondLow_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define AirCondLow_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define AirCondLow_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define AirCondLow_GetValue()           PORTAbits.RA1
#define AirCondLow_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define AirCondLow_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define AirCondLow_SetAnalogMode()      do { ANSELbits.ANS1 = 1; } while(0)
#define AirCondLow_SetDigitalMode()     do { ANSELbits.ANS1 = 0; } while(0)

// get/set HeaterHigh aliases
#define HeaterHigh_TRIS                 TRISAbits.TRISA2
#define HeaterHigh_LAT                  LATAbits.LATA2
#define HeaterHigh_PORT                 PORTAbits.RA2
#define HeaterHigh_ANS                  ANSELbits.ANS2
#define HeaterHigh_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define HeaterHigh_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define HeaterHigh_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define HeaterHigh_GetValue()           PORTAbits.RA2
#define HeaterHigh_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define HeaterHigh_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define HeaterHigh_SetAnalogMode()      do { ANSELbits.ANS2 = 1; } while(0)
#define HeaterHigh_SetDigitalMode()     do { ANSELbits.ANS2 = 0; } while(0)

// get/set HeaterLow aliases
#define HeaterLow_TRIS                 TRISAbits.TRISA3
#define HeaterLow_LAT                  LATAbits.LATA3
#define HeaterLow_PORT                 PORTAbits.RA3
#define HeaterLow_ANS                  ANSELbits.ANS3
#define HeaterLow_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define HeaterLow_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define HeaterLow_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define HeaterLow_GetValue()           PORTAbits.RA3
#define HeaterLow_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define HeaterLow_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define HeaterLow_SetAnalogMode()      do { ANSELbits.ANS3 = 1; } while(0)
#define HeaterLow_SetDigitalMode()     do { ANSELbits.ANS3 = 0; } while(0)

// get/set Seg_PIN1 aliases
#define Seg_PIN1_TRIS                 TRISBbits.TRISB0
#define Seg_PIN1_LAT                  LATBbits.LATB0
#define Seg_PIN1_PORT                 PORTBbits.RB0
#define Seg_PIN1_WPU                  WPUBbits.WPUB0
#define Seg_PIN1_ANS                  ANSELHbits.ANS12
#define Seg_PIN1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Seg_PIN1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Seg_PIN1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Seg_PIN1_GetValue()           PORTBbits.RB0
#define Seg_PIN1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Seg_PIN1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Seg_PIN1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Seg_PIN1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Seg_PIN1_SetAnalogMode()      do { ANSELHbits.ANS12 = 1; } while(0)
#define Seg_PIN1_SetDigitalMode()     do { ANSELHbits.ANS12 = 0; } while(0)

// get/set Seg_PIN2 aliases
#define Seg_PIN2_TRIS                 TRISBbits.TRISB1
#define Seg_PIN2_LAT                  LATBbits.LATB1
#define Seg_PIN2_PORT                 PORTBbits.RB1
#define Seg_PIN2_WPU                  WPUBbits.WPUB1
#define Seg_PIN2_ANS                  ANSELHbits.ANS10
#define Seg_PIN2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Seg_PIN2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Seg_PIN2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Seg_PIN2_GetValue()           PORTBbits.RB1
#define Seg_PIN2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Seg_PIN2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Seg_PIN2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Seg_PIN2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Seg_PIN2_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define Seg_PIN2_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set Seg_PIN3 aliases
#define Seg_PIN3_TRIS                 TRISBbits.TRISB2
#define Seg_PIN3_LAT                  LATBbits.LATB2
#define Seg_PIN3_PORT                 PORTBbits.RB2
#define Seg_PIN3_WPU                  WPUBbits.WPUB2
#define Seg_PIN3_ANS                  ANSELHbits.ANS8
#define Seg_PIN3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Seg_PIN3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Seg_PIN3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Seg_PIN3_GetValue()           PORTBbits.RB2
#define Seg_PIN3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Seg_PIN3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Seg_PIN3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Seg_PIN3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Seg_PIN3_SetAnalogMode()      do { ANSELHbits.ANS8 = 1; } while(0)
#define Seg_PIN3_SetDigitalMode()     do { ANSELHbits.ANS8 = 0; } while(0)

// get/set Seg_PIN4 aliases
#define Seg_PIN4_TRIS                 TRISBbits.TRISB3
#define Seg_PIN4_LAT                  LATBbits.LATB3
#define Seg_PIN4_PORT                 PORTBbits.RB3
#define Seg_PIN4_WPU                  WPUBbits.WPUB3
#define Seg_PIN4_ANS                  ANSELHbits.ANS9
#define Seg_PIN4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Seg_PIN4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Seg_PIN4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Seg_PIN4_GetValue()           PORTBbits.RB3
#define Seg_PIN4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Seg_PIN4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Seg_PIN4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Seg_PIN4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Seg_PIN4_SetAnalogMode()      do { ANSELHbits.ANS9 = 1; } while(0)
#define Seg_PIN4_SetDigitalMode()     do { ANSELHbits.ANS9 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

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