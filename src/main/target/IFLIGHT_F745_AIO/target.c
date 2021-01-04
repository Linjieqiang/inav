/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

const timerHardware_t timerHardware[] = { 
    DEF_TIM(TIM5, CH4, PA3, TIM_USE_PPM,                            0, 0), // PPM

    DEF_TIM(TIM3, CH3, PB0,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,   0, 0), // M1 , DMA1_ST7
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,   0, 0), // M2 , DMA1_ST2
    DEF_TIM(TIM1, CH1, PE9,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,   0, 2), // M3 , DMA2_ST2
    DEF_TIM(TIM1, CH2, PE11, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,   0, 1), // M4 , DMA2_ST4

    DEF_TIM(TIM4, CH1, PD12, TIM_USE_LED,                           0, 0), // LED_STRIP, DMA1_ST0
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);