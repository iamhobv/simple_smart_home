/* 
 * File:   temp_sensor_TC74.h
 * Author: adhfj
 *
 * Created on April 3, 2024, 5:31 AM
 */

#ifndef TEMP_SENSOR_TC74_H
#define	TEMP_SENSOR_TC74_H

#include "../../mcc_generated_files/mcc.h"
#include "../../mcc_generated_files/examples/i2c_master_example.h"

uint8_t TempSensor_TC74_Read_Temp(i2c_address_t TC74_Address);


#endif	/* TEMP_SENSOR_TC74_H */

