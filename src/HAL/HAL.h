/*
 * Hardware Abstraction Layer (HAL)
 * 
 * Copyright (C) 2018 Khalid Baheyeldin
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if defined(__MK20DX256__)
  // Teensy 3.2
  #define MCU_STR "Teensy3.2"
  #include "HAL_Teensy_3.2.h"

#elif defined(__MK64FX512__)
  // Teensy 3.5
  #define MCU_STR "Teensy3.5"
  #include "HAL_Teensy_3.5.h"

#elif defined(__MK66FX1M0__)
  // Teensy 3.6
  #define MCU_STR "Teensy3.6"
  #include "HAL_Teensy_3.6.h"

#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
  // Teensy 4.0
  #define MCU_STR "Teensy4.0"
  #include "HAL_Teensy_4.0.h"

#elif defined(ARDUINO_ARCH_SAMD)
  // ARDUINO M0
  #define MCU_STR "ARDUINO M0"
  #include "HAL_ZERO.h"

#elif defined(ESP32)
  // ESP32
  #define MCU_STR "ESP32"
  #include "HAL_ESP32.h"

#elif defined(ESP8266)
  // ESP32
  #define MCU_STR "ESP8266"
  #include "HAL_ESP8266.h"

#else
  #error "Unsupported Platform! If this is a new platform, it needs the appropriate entries in the HAL directory."
#endif

// create null decoration for non-ESP processors
#ifndef IRAM_ATTR
  #define IRAM_ATTR
#endif

#ifndef ICACHE_RAM_ATTR
  #define ICACHE_RAM_ATTR
#endif

#ifndef FPSTR
  #define FPSTR
#endif
