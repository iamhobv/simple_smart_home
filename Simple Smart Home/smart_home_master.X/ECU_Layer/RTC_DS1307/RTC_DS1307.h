/* 
 * File:   RTC_DS1307.h
 * Author: Mohamed Ehab
 *
 * Created on April 2, 2024, 3:56 AM
 */

#ifndef RTC_DS1307_H
#define	RTC_DS1307_H
#include "../../mcc_generated_files/mcc.h"
#include "../../mcc_generated_files/examples/i2c_master_example.h"

typedef struct {
    uint8_t sec;
    uint8_t min;
    uint8_t hour;
    uint8_t day;
    uint8_t month;
    uint8_t year;  
}RTC_DS1307_t;

RTC_DS1307_t RTC_DS1307_get_data(void);
void UART_LoggingDebugData_Send_String(uint8_t *String, uint16_t String_Length);
#endif	/* RTC_DS1307_H */

