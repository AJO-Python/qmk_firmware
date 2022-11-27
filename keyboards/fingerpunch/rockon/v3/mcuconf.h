/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was auto-generated by:
 *    `qmk chibios-confupdate -i keyboards/tkw/grandiceps/mcuconf.h -r platforms/chibios/BLACKPILL_STM32_F411/configs/mcuconf.h`
 */

#pragma once

#include_next "mcuconf.h"

#undef STM32_SPI_USE_SPI0
#define STM32_SPI_USE_SPI0 TRUE

// Added because of this error at compile time
/*
Compiling: keyboards/fingerpunch/ffkb_byomcu/v3/matrix_74hc595_spi.c                               In file included from ./lib/chibios/os/hal/include/hal_spi_v2.h:146:0,
                 from ./lib/chibios/os/hal/include/hal_spi.h:31,
                 from ./lib/chibios/os/hal/include/hal.h:315,
                 from platforms/chibios/platform_deps.h:18,
                 from quantum/quantum.h:18,
                 from keyboards/fingerpunch/ffkb_byomcu/v3/matrix_74hc595_spi.c:3:
./lib/chibios/os/hal/ports/STM32/LLD/SPIv1/hal_spi_v2_lld.h:282:2: error: #error "SPI driver activated but no SPI peripheral assigned"
 #error "SPI driver activated but no SPI peripheral assigned"
  ^~~~~
 [ERRORS]
*/
#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1 TRUE

#undef STM32_ST_USE_TIMER
#define STM32_ST_USE_TIMER 5

#undef STM32_GPT_USE_TIM4
#define STM32_GPT_USE_TIM4 TRUE

#undef STM32_PWM_USE_TIM2
#define STM32_PWM_USE_TIM2 TRUE
