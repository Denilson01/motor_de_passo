/*
 * File:   main.c
 * Author: 20185087
 *
 * Created on 20 de Maio de 2021, 15:50
 */

#include "config.h"
#include "delay.h"
#include "config_motor.h"
#include <xc.h>

void main(void) 
{
    motor_init();
    
    while(1)
    {
        motor_s_horario();
    }
    
    return;
}
