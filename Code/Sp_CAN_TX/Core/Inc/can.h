/*
 * Can.h
 *
 *  Created on: Feb 10, 2025
 *      Author: sunbeam
 */

#ifndef INC_CAN_H_
#define INC_CAN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"  // Include HAL library

extern CAN_HandleTypeDef hcan1;  // Declare CAN handle

void MX_CAN1_Init(void);  // Function prototype for CAN initialization

#ifdef __cplusplus
}
#endif

#endif /* INC_CAN_H_ */
