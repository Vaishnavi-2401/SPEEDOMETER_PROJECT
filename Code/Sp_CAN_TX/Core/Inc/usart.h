/*
 * usart.h
 *
 *  Created on: Feb 10, 2025
 *      Author: sunbeam
 */

#ifndef INC_USART_H_
#define INC_USART_H_

#include "stm32f4xx_hal.h"

extern UART_HandleTypeDef huart2;

void MX_USART2_UART_Init(void);

#endif /* INC_USART_H_ */
