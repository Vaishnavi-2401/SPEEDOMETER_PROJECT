#ifndef __TIM_H__
#define __TIM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

extern TIM_HandleTypeDef htim2;  // Declare TIM2 handle (no definition here)

void MX_TIM2_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __TIM_H__ */
