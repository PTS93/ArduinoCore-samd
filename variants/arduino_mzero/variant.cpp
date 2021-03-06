/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

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

/*
 * Modified 9 December 2016 by Justin Mattair
 *   for MattairTech boards (www.mattairtech.com)
 *
 * See README.md for documentation and pin mapping information
 */


#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
  // 0..13 - Digital pins
  // ----------------------
  // 0/1 - SERCOM/UART (Serial1)
  { PORTA, 11, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT|PIN_ATTR_COM), NOT_ON_TIMER, ADC_Channel19, EXTERNAL_INT_11, GCLK_CCL_NONE }, // RX: SERCOM0/PAD[3]
  { PORTA, 10, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT|PIN_ATTR_COM), NOT_ON_TIMER, ADC_Channel18, EXTERNAL_INT_10, GCLK_CCL_NONE }, // TX: SERCOM0/PAD[2]

  // 2..12
  // Digital Low
  { PORTA,  8, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT|PIN_ATTR_COM), TCC0_CH0, ADC_Channel16, EXTERNAL_INT_NMI, GCLK_CCL_NONE }, // TCC0/WO[0] SDA: SERCOM2/PAD[0]
  { PORTA,  9, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT|PIN_ATTR_COM), TCC0_CH1, ADC_Channel17, EXTERNAL_INT_9, GCLK_CCL_NONE }, // TCC0/WO[1] SCL: SERCOM2/PAD[1]
  { PORTA, 14, PIO_MULTI, (PER_ATTR_DRIVE_STRONG), (PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_14, GCLK_CCL_NONE },
  { PORTA, 15, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_EXTINT), TC3_CH1, No_ADC_Channel, EXTERNAL_INT_15, GCLK_CCL_NONE }, // TC3/WO[1]
  { PORTA, 20, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_EXTINT|PIN_ATTR_COM), TCC0_CH6, No_ADC_Channel, EXTERNAL_INT_4, GCLK_CCL_NONE }, // TCC0/WO[6]
  { PORTA, 21, PIO_MULTI, (PER_ATTR_DRIVE_STRONG), (PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_5, GCLK_CCL_NONE },

  // Digital High
  { PORTA,  6, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TCC1_CH0, ADC_Channel6, EXTERNAL_INT_6, GCLK_CCL_NONE }, // TCC1/WO[0] ADC/AIN[6]
  { PORTA,  7, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_COM), TCC1_CH1, ADC_Channel7, EXTERNAL_INT_7, GCLK_CCL_NONE }, // TCC1/WO[1] ADC/AIN[7]
  { PORTA, 18, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC3_CH0, No_ADC_Channel, EXTERNAL_INT_2, GCLK_CCL_NONE }, // TC3/WO[0] SS: SERCOM1/PAD[2]
  { PORTA, 16, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC2_CH0, No_ADC_Channel, EXTERNAL_INT_0, GCLK_CCL_NONE }, // TCC2/WO[0] MOSI: SERCOM1/PAD[0]
  { PORTA, 19, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT|PIN_ATTR_COM), TCC0_CH3, No_ADC_Channel, EXTERNAL_INT_3, GCLK_CCL_NONE }, // TCC0/WO[3] MISO: SERCOM1/PAD[3]

  // 13 (LED)
  { PORTA, 17, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC2_CH1, No_ADC_Channel, EXTERNAL_INT_1, GCLK_CCL_NONE }, // TCC2/WO[1] SCK: SERCOM1/PAD[1]

  // 14 (GND)
  { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused

  // 15 (AREF)
  { PORTA,  3, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_REF|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel1, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // VREF ADC/AIN[1]
  
  // 16..17 I2C pins (SDA/SCL and also EDBG:SDA/SCL)
  // ----------------------
  { PORTA, 22, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC4_CH0, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SDA: SERCOM3/PAD[0]
  { PORTA, 23, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC4_CH1, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SCL: SERCOM3/PAD[1]
  
  // 18..23 - SPI pins (ICSP:MISO,SCK,MOSI)
  // ----------------------
  { PORTA, 12, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_12, GCLK_CCL_NONE }, // MISO: SERCOM4/PAD[0]
  { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
  { PORTB, 11, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_COM), TC5_CH1, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SCK: SERCOM4/PAD[3]
  { PORTB, 10, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_COM), TC5_CH0, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // MOSI: SERCOM4/PAD[2]
  { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
  { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused

  // 24..29 - Analog pins
  // --------------------
  { PORTA,  2, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DAC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // ADC/AIN[0] / DAC
  { PORTB,  8, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT), NOT_ON_TIMER, ADC_Channel2, EXTERNAL_INT_8, GCLK_CCL_NONE }, // ADC/AIN[2]
  { PORTB,  9, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel3, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // ADC/AIN[3]
  { PORTA,  4, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel4, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // ADC/AIN[4]
  { PORTA,  5, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel5, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // ADC/AIN[5]
  { PORTB,  2, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel10, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // ADC/AIN[10]

  // 30..31 - RX/TX LEDS (PB03/PA27)
  // --------------------
  { PORTB,  3, PIO_OUTPUT, PER_ATTR_DRIVE_STRONG, PIN_ATTR_OUTPUT, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // used as output only
  { PORTA, 27, PIO_OUTPUT, PER_ATTR_DRIVE_STRONG, PIN_ATTR_OUTPUT, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // used as output only

  // 32..34 - USB
  // --------------------
  { PORTA, 28, PIO_MULTI, PER_ATTR_DRIVE_STRONG, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB Host enable
  { PORTA, 24, PIO_COM, PER_ATTR_NONE, PIN_ATTR_COM, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DM
  { PORTA, 25, PIO_COM, PER_ATTR_NONE, PIN_ATTR_COM, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DP

  // 35..46 - EDBG
  // ----------------------
  // 35/36 - EDBG/UART
  { PORTB, 22, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // TX: SERCOM5/PAD[2]
  { PORTB, 23, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // RX: SERCOM5/PAD[3]

	// 37/38 I2C (SDA/SCL and also EDBG:SDA/SCL). These are duplicate entries of pins 16 and 17
	{ PORTA, 22, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC4_CH0, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE }, // SDA: SERCOM3/PAD[0]
	{ PORTA, 23, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC4_CH1, No_ADC_Channel, EXTERNAL_INT_7, GCLK_CCL_NONE }, // SCL: SERCOM3/PAD[1]

	// 39..42 - EDBG/SPI. These are duplicate entries of pins 12, 11, 10, and 13.
	{ PORTA, 19, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT|PIN_ATTR_COM), TCC0_CH3, No_ADC_Channel, EXTERNAL_INT_3, GCLK_CCL_NONE }, // MISO: SERCOM1/PAD[3]
	{ PORTA, 16, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC2_CH0, No_ADC_Channel, EXTERNAL_INT_0, GCLK_CCL_NONE }, // MOSI: SERCOM1/PAD[0]
	{ PORTA, 18, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC3_CH0, No_ADC_Channel, EXTERNAL_INT_2, GCLK_CCL_NONE }, // SS: SERCOM1/PAD[2]
	{ PORTA, 17, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC2_CH1, No_ADC_Channel, EXTERNAL_INT_1, GCLK_CCL_NONE }, // SCK: SERCOM1/PAD[1]

  // 43..46 - EDBG/Digital
  { PORTA, 13, PIO_MULTI, (PER_ATTR_DRIVE_STRONG), (PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_13, GCLK_CCL_NONE }, // EIC/EXTINT[13] PIN_ATN

	// 44..46 These are duplicate entries of pins 7, 8, and 9
	{ PORTA, 21, PIO_MULTI, (PER_ATTR_DRIVE_STRONG), (PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_5, GCLK_CCL_NONE },
	{ PORTA,  6, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TCC1_CH0, ADC_Channel6, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // TCC1/WO[0] ADC/AIN[6]
	{ PORTA,  7, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_TIMER_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_COM), TCC1_CH1, ADC_Channel7, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // TCC1/WO[1] ADC/AIN[7]

	// 47 - Alternate use of A0 (DAC output). This is a duplicate entry of pin 24
	{ PORTA,  2, PIO_MULTI, PER_ATTR_DRIVE_STRONG, (PIN_ATTR_ADC|PIN_ATTR_DAC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // ADC/AIN[0] / DAC
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

#if defined(ONE_UART) || defined(TWO_UART)
Uart Serial( SERCOM_INSTANCE_SERIAL, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ) ;

void SERCOM5_Handler()
{
  Serial.IrqHandler();
}
#endif

#if defined(TWO_UART)
Uart Serial1( SERCOM_INSTANCE_SERIAL1, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM0_Handler()
{
  Serial1.IrqHandler();
}
#endif

