/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

enum {
  PA2,     //D0
  PA3,     //D1
  PA8,     //D2
  PA9,     //D3
  PA10,    //D4
  PA11,    //D5
  PA12,    //D6
  PA13,    //D7
  PA14,    //D8
  PA15,    //D9
  PB2,     //D10
  PB3,     //D11
  PB4,     //D12
  PB5,     //D13
  PB6,     //D14
  PB7,     //D15
  PB8,     //D16
  PB9,     //D17
  PB10,    //D18
  //PB11,  //NC
  PB12,    //D19
  PB13,    //D20
  PB14,    //D21
  PB15,    //D22
  PC6,     //D23
  PC7,     //D24
  PC8,     //D25
  PC9,     //D26
  PC10,    //D27
  PC11,    //D28
  PC12,    //D29
  PC13,    //D30
  PC14,    //D31
  PC15,    //D32
  PD0,     //D33
  PD1,     //D34
  PD2,     //D35
  PD3,     //D36
  PD4,     //D37
  PD5,     //D38
  PD6,     //D39
  PD7,     //D40
  PD8,     //D41
  PD9,     //D42
  PD10,    //D43
  PD11,    //D44
  PD12,    //D45
  PD13,    //D46
  PD14,    //D47
  PD15,    //D48
  PE0,     //D49
  PE1,     //D50
  PE2,     //D51
  PE3,     //D52
  PE4,     //D53
  PE5,     //D54
  PE6,     //D55
  PE7,     //D56
  PE8,     //D57
  PE9,     //D58
  PE10,    //D59
  PE11,    //D60
  PE12,    //D61
  PE13,    //D62
  PE14,    //D63
  PE15,    //D64
  
  // ADC
  PA0,     //D65
  PA1,     //D66
  PA4,     //D67
  PA5,     //D68
  PA6,     //D69
  PA7,     //D70
  PB0,     //D71
  PB1,     //D72
  PC0,     //D73
  PC1,     //D74
  PC2,     //D75
  PC3,     //D76
  PC4,     //D77
  PC5,     //D78
  PEND
};

// This must be a literal with the same value as PEND
#define NUM_DIGITAL_PINS        79
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       14
#define NUM_ANALOG_FIRST        49

// On-board LED pin number
#define LED_BUILTIN             21
#define LED_LD2                 LEDBUILTIN
#define LED_GREEN               LEDBUILTIN

// On-board user button
#define USER_BTN                PC10

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM10

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    2 //Connected to ST-Link
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           0
#define PIN_SERIAL_TX           1

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
