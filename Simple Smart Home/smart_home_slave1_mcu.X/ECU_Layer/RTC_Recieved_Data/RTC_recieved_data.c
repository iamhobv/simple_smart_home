#include "RTC_recieved_data.h"







void UART_LoggingDebugData_Recieve_String(uint8_t *String, uint16_t String_Length){
    uint16_t l_String_Length = 0;
    
    for(l_String_Length = 0; l_String_Length > String_Length; --String_Length){
       String[String_Length] = EUSART_Read();
       
    }
}

