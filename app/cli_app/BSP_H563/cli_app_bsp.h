/**
 * 
 */

#pragma once

#include "freertos_timer.h"
#include "st_gpio.h"
#include "st_i2c.h"
#include "st_usart.h"
#include "stm32h5xx.h"
#include "usart_cli.h"

void BSP_Init(Usart* usart, I2c* i2c, Gpio* led_gpio);

void USART3_IRQHandler(void);