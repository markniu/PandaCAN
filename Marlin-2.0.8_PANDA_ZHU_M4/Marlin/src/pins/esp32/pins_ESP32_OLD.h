/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Espressif ESP32 (Tensilica Xtensa LX6) pin assignments
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Espressif ESP32"
#define SERVO0_PIN                       0
//
// I2S (steppers & other output-only pins)
//
//#define I2S_STEPPER_STREAM
////#define I2S_WS                                -1
//#define I2S_BCK                               -1
//#define I2S_DATA                              -1

//
// Limit Switches
//
#define X_MIN_PIN                             35
#define Y_MIN_PIN                             34
#define Z_MIN_PIN                             21

//
// Steppers
//
#define X_STEP_PIN                          100+8+3// 33
#define X_DIR_PIN                           100+8+2// 32
#define X_ENABLE_PIN                         25//25
//#define X_CS_PIN                             0

#define Y_STEP_PIN                          100+8+5// 27
#define Y_DIR_PIN                           100+8+4//26
#define Y_ENABLE_PIN                         25
//#define Y_CS_PIN                            13

#define Z_STEP_PIN                           12
#define Z_DIR_PIN                            14
#define Z_ENABLE_PIN                         25
//#define Z_CS_PIN                             5  // SS_PIN

#define E0_STEP_PIN                         15
#define E0_DIR_PIN                           13
#define E0_ENABLE_PIN                        25
//#define E0_CS_PIN                           21

//
// Temperature Sensors
//
#define TEMP_0_PIN                            36  // Analog Input
#define TEMP_BED_PIN                          39  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                           115
#define FAN_PIN                                 101
#define HEATER_BED_PIN                         114

//
// MicroSD card
//
#define SD_MOSI_PIN                           23
#define SD_MISO_PIN                           19
#define SD_SCK_PIN                            18
#define SDSS                                   5
#define SD_DETECT_PIN            2
//#define USES_SHARED_SPI                           // SPI is shared by SD card with TMC SPI drivers

   #define BEEPER_PIN                  -1//    PB5
    #define BTN_ENC                     -1//   106

    #define BTN_EN1                      -1//    105
    #define BTN_EN2                      -1//     104

    #define LCD_PINS_RS                     107
    #define LCD_PINS_ENABLE                120
    #define LCD_PINS_D4                     121
#define SD_DETECT_PIN                    2
    