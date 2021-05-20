/*
 * File:   motor_de_passo.c
 * Author: 20185087
 *
 * Created on 20 de Maio de 2021, 15:51
 */

#include "config.h"
#include "delay.h"
#include <xc.h>

void motor_init(void) 
{
    TRISD = 0x00;
    PORTD = 0x00;   
}

void motor_s_horario(void)
{    
    int i;
    
    for(i=0; i<5; i++)
    {
        PORTD = 0x08;
        delay(100);
    
    }

}

