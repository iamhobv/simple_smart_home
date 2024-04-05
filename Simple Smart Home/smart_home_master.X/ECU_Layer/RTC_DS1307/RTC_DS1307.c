/* 
 * File:   RTC_DS1307.c
 * Author: Mohamed Ehab
 *
 * Created on April 2, 2024, 3:56 AM
 */

#include "RTC_DS1307.h"

void Print_RTC_DS1307 (void);
void UART_LoggingDebugData_Send_String(uint8_t *String, uint16_t String_Length);
void Print_RTC_DS1307_Date_Time (void);

static RTC_DS1307_t time_date_data;
static uint8_t RTC_Date_Pack[10]; 

RTC_DS1307_t RTC_DS1307_get_data(void)
{
    time_date_data.sec   = I2C_Read1ByteRegister(0xD0, 0x00);
    time_date_data.min   = I2C_Read1ByteRegister(0xD0, 0x01);
    time_date_data.hour  = I2C_Read1ByteRegister(0xD0, 0x02);
    //time_date_data.day   = I2C_Read1ByteRegister(0xD0, 0x04);
   // time_date_data.month = I2C_Read1ByteRegister(0xD0, 0x05);
    //time_date_data.year  = I2C_Read1ByteRegister(0xD0, 0x06);
    
    Print_RTC_DS1307_Date_Time();

    
    return time_date_data;
}

void Print_RTC_DS1307_Date_Time (void){ 
    /*RTC_Date_Pack[0] = ((time_date_data.day >> 4) + 0x30);
    RTC_Date_Pack[1] = ((time_date_data.day & 0x0F) + 0x30);
    RTC_Date_Pack[2] = '-';
    RTC_Date_Pack[3] = ((time_date_data.month >> 4) + 0x30);
    RTC_Date_Pack[4] = ((time_date_data.month & 0x0F) + 0x30);
    RTC_Date_Pack[5] = '-';
    RTC_Date_Pack[6] = ((time_date_data.year >> 4) + 0x30);
    RTC_Date_Pack[7] = ((time_date_data.year & 0x0F) + 0x30);
    
    RTC_Date_Pack[8] = '\r';
  */
    RTC_Date_Pack[1]  = ((time_date_data.hour >> 4) + 0x30);
    RTC_Date_Pack[2] = ((time_date_data.hour & 0x0F) + 0x30);
    RTC_Date_Pack[3] = ':';
    RTC_Date_Pack[4] = ((time_date_data.min >> 4) + 0x30);
    RTC_Date_Pack[5] = ((time_date_data.min & 0x0F) + 0x30);
    RTC_Date_Pack[6] = ':';
    RTC_Date_Pack[7] = ((time_date_data.sec >> 4) + 0x30);
    RTC_Date_Pack[8] = ((time_date_data.sec & 0x0F) + 0x30);
    
    RTC_Date_Pack[9] = '\r';
    
    
    UART_LoggingDebugData_Send_String(RTC_Date_Pack, 10);
}


void UART_LoggingDebugData_Send_String(uint8_t *String, uint16_t String_Length){
    uint16_t l_String_Length = 0;
    for(l_String_Length = 0; l_String_Length < String_Length; ++l_String_Length){
        EUSART_Write(*String++);
    }
}