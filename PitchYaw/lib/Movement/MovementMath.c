// This is the Library file for the movement functionality of the two servos
// PWMs will be abstracted as functions in this file to be more efficiently used in the main c. 
//
// 6/21/26
// File written by David Fuad Dueiri
//---------------------------------------------------------------------------------

#ifndef MOVEMENTMATH_H
#define MOVEMENTMATH_H

#include <stdint.h>
#include <stdio.h>
#include "MovementMath.h"

/*
 * Include the STM32 HAL headers provided by PlatformIO (STM32Cube framework).
 * For the STM32F103C8 target (env: genericSTM32F103C8) the primary header is
 * "stm32f1xx_hal.h".
 */
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_tim.h"
#include "stm32f1xx_hal_gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

// Public APIs for MovementMath (add prototypes here)

#ifdef __cplusplus
}
#endif






#endif // MOVEMENTMATH_H