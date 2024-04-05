/* 
 * File:   RTC_recieved_data.h
 * Author: adhfj
 *
 * Created on April 3, 2024, 3:22 AM
 */

#ifndef RTC_RECIEVED_DATA_H
#define	RTC_RECIEVED_DATA_H
#include "../../mcc_generated_files/mcc.h"
//#include "../../mcc_generated_files/examples/i2c_master_example.h"

void UART_LoggingDebugData_Recieve_String(uint8_t *String, uint16_t String_Length);
void Divide_Array_Date_Time(uint8_t *date_string,uint8_t *time_string);

#endif	/* RTC_RECIEVED_DATA_H */

