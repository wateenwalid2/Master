/*
 * main.c
 *
 *  Created on: Jul 26, 2025
 *      Author: soft zone
 */

#define F_CPU 8000000UL
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/delay.h"
#include "../LCD/LCD_CONFIG.h"
#include "../LCD/LCD_INTERFACE.h"
#include "../TWI/TWI_CONFIG.h"
#include "../TWI/TWI_INTERFACE.h"

int main(void)
{
	u8 data_To_Slave[]="HI";
    TWI_MasterInit();
    _delay_ms(100);
    while (1)
    {
    	TWI_StartCondition();
    	TWI_SendAddress(0x20, 0);
    	for(u8 i=0;i<3;i++){
    		TWI_WriteData(data_To_Slave[i]);
    	}
        TWI_Stop();

    }
}

