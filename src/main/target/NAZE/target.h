
/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "AFNA" // AFroNAze - NAZE might be considered misleading on Naze clones like the flip32.
#define USE_HARDWARE_REVISION_DETECTION

#define LED0_GPIO   GPIOB
#define LED0_PIN    Pin_3 // PB3 (LED)
#define LED0_PERIPHERAL RCC_APB2Periph_GPIOB
#define LED1_GPIO   GPIOB
#define LED1_PIN    Pin_4 // PB4 (LED)
#define LED1_PERIPHERAL RCC_APB2Periph_GPIOB

#define BEEP_GPIO   GPIOA
#define BEEP_PIN    Pin_12 // PA12 (Beeper)
#define BEEP_PERIPHERAL RCC_APB2Periph_GPIOA

#define BARO_XCLR_GPIO   GPIOC
#define BARO_XCLR_PIN    Pin_13
#define BARO_EOC_GPIO    GPIOC
#define BARO_EOC_PIN     Pin_14
#define BARO_APB2_PERIPHERALS RCC_APB2Periph_GPIOC

#define INVERTER_PIN Pin_2 // PB2 (BOOT1) abused as inverter select GPIO
#define INVERTER_GPIO GPIOB
#define INVERTER_PERIPHERAL RCC_APB2Periph_GPIOB
#define INVERTER_USART USART2

// SPI2
// PB15 28 SPI2_MOSI
// PB14 27 SPI2_MISO
// PB13 26 SPI2_SCK
// PB12 25 SPI2_NSS

#define USE_SPI
#define USE_SPI_DEVICE_2

#define NAZE_SPI_INSTANCE     SPI2
#define NAZE_SPI_CS_GPIO      GPIOB
#define NAZE_SPI_CS_PIN       GPIO_Pin_12
#define NAZE_CS_GPIO_CLK_PERIPHERAL RCC_APB2Periph_GPIOB

#define CUSTOM_FLASHCHIP
// We either have this 16mbit flash chip on SPI or the MPU6500 acc/gyro depending on board revision:
#define M25P16_CS_GPIO        NAZE_SPI_CS_GPIO
#define M25P16_CS_PIN         NAZE_SPI_CS_PIN
#define M25P16_SPI_INSTANCE   NAZE_SPI_INSTANCE

#define MPU6500_CS_GPIO_CLK_PERIPHERAL   NAZE_CS_GPIO_CLK_PERIPHERAL
#define MPU6500_CS_GPIO                  NAZE_SPI_CS_GPIO
#define MPU6500_CS_PIN                   NAZE_SPI_CS_PIN
#define MPU6500_SPI_INSTANCE             NAZE_SPI_INSTANCE


#define USE_FLASHFS

#define USE_FLASH_M25P16

#define USE_EXTI

//#define DEBUG_MPU_DATA_READY_INTERRUPT
#define USE_MPU_DATA_READY_SIGNAL

//#define DEBUG_MAG_DATA_READY_INTERRUPT
#define USE_MAG_DATA_READY_SIGNAL

#define GYRO
#define USE_GYRO_MPU3050
#define USE_GYRO_MPU6050
#define USE_GYRO_MPU6500
#define USE_GYRO_SPI_MPU6500


#define GYRO_MPU3050_ALIGN CW0_DEG
#define GYRO_MPU6050_ALIGN CW0_DEG
#define GYRO_MPU6500_ALIGN CW0_DEG

#define ACC
#define USE_ACC_ADXL345
#define USE_ACC_BMA280
#define USE_ACC_MMA8452
#define USE_ACC_MPU6050
#define USE_ACC_MPU6500
#define USE_ACC_SPI_MPU6500

#define ACC_ADXL345_ALIGN CW270_DEG
#define ACC_MPU6050_ALIGN CW0_DEG
#define ACC_MMA8452_ALIGN CW90_DEG
#define ACC_BMA280_ALIGN CW0_DEG
#define ACC_MPU6500_ALIGN CW0_DEG

#define BARO
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_BMP280

#define MAG
#define USE_MAG_HMC5883

#define MAG_HMC5883_ALIGN CW180_DEG

#define BEEPER
#define LED0
#define LED1
#define INVERTER
//#define DISPLAY

#define SONAR
#define SONAR_PWM_TRIGGER_PIN       Pin_8   // PWM5 (PB8) - 5v tolerant
#define SONAR_PWM_TRIGGER_GPIO      GPIOB
#define SONAR_PWM_ECHO_PIN          Pin_9   // PWM6 (PB9) - 5v tolerant
#define SONAR_PWM_ECHO_GPIO         GPIOB
#define SONAR_PWM_TRIGGER_IO        PB8
#define SONAR_PWM_ECHO_IO           PB9

#define SONAR_TRIGGER_PIN           Pin_0   // RX7 (PB0) - only 3.3v ( add a 1K Ohms resistor )
#define SONAR_TRIGGER_GPIO          GPIOB
#define SONAR_ECHO_PIN              Pin_1   // RX8 (PB1) - only 3.3v ( add a 1K Ohms resistor )
#define SONAR_ECHO_GPIO             GPIOB
#define SONAR_TRIGGER_IO            PB0
#define SONAR_ECHO_IO               PB1

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2
#define SERIAL_PORT_COUNT 5

#define SOFTSERIAL_1_TIMER TIM3
#define SOFTSERIAL_1_TIMER_RX_HARDWARE 4 // PWM 5
#define SOFTSERIAL_1_TIMER_TX_HARDWARE 5 // PWM 6
#define SOFTSERIAL_2_TIMER TIM3
#define SOFTSERIAL_2_TIMER_RX_HARDWARE 6 // PWM 7
#define SOFTSERIAL_2_TIMER_TX_HARDWARE 7 // PWM 8

#define USE_UART1_TX_DMA

// UART3 only on NAZE32_SP - Flex Port
#define UART3_RX_PIN Pin_11
#define UART3_TX_PIN Pin_10
#define UART3_GPIO GPIOB
#define UART3_APB1_PERIPHERALS RCC_APB1Periph_USART3
#define UART3_APB2_PERIPHERALS RCC_APB2Periph_GPIOB

#define USE_I2C
#define I2C_DEVICE (I2CDEV_2)

// #define SOFT_I2C // enable to test software i2c
// #define SOFT_I2C_PB1011 // If SOFT_I2C is enabled above, need to define pinout as well (I2C1 = PB67, I2C2 = PB1011)
// #define SOFT_I2C_PB67


#define USE_ADC
#define BOARD_HAS_VOLTAGE_DIVIDER

#define ADC_INSTANCE                ADC1
#define ADC_ABP2_PERIPHERAL         RCC_APB2Periph_ADC1
#define ADC_AHB_PERIPHERAL          RCC_AHBPeriph_DMA1
#define ADC_DMA_CHANNEL             DMA1_Channel1

#define ADC0_GPIO                   GPIOB
#define ADC0_GPIO_PIN               GPIO_Pin_1
#define ADC0_CHANNEL                ADC_Channel_9

#define ADC1_GPIO                   GPIOA
#define ADC1_GPIO_PIN               GPIO_Pin_4
#define ADC1_CHANNEL                ADC_Channel_4

#define ADC2_GPIO                   GPIOA
#define ADC2_GPIO_PIN               GPIO_Pin_1
#define ADC2_CHANNEL                ADC_Channel_1

#define ADC3_GPIO                   GPIOA
#define ADC3_GPIO_PIN               GPIO_Pin_5
#define ADC3_CHANNEL                ADC_Channel_5

#define ADC_CHANNEL_COUNT 4

#define ADC_AMPERAGE     ADC_CHANNEL0
#define ADC_BATTERY     ADC_CHANNEL1
#define ADC_RSSI        ADC_CHANNEL2
#define ADC_EXTERNAL    ADC_CHANNEL3


#define LED_STRIP
#define LED_STRIP_TIMER TIM3
#define WS2811_DMA_TC_FLAG           DMA1_FLAG_TC6
#define WS2811_DMA_HANDLER_IDENTIFER DMA1Channel6Descriptor

#define GPS
#define GTUNE
#define BLACKBOX
#define TELEMETRY
#define SERIAL_RX
#define USE_SERVOS
#define USE_CLI

#define SPEKTRUM_BIND
// UART2, PA3
#define BIND_PORT  GPIOA
#define BIND_PIN   Pin_3

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// alternative defaults for AlienFlight F1 target
#ifdef ALIENFLIGHT
#undef TARGET_BOARD_IDENTIFIER
#define TARGET_BOARD_IDENTIFIER "AFF1" // AlienFlight F1.
#undef BOARD_HAS_VOLTAGE_DIVIDER
#undef GTUNE

#define DEFAULT_RX_FEATURE FEATURE_RX_SERIAL
#define DEFAULT FEATURES FEATURE_MOTOR_STOP

#define HARDWARE_BIND_PLUG

// Hardware bind plug at PB5 (Pin 41)
#define BINDPLUG_PORT  GPIOB
#define BINDPLUG_PIN   Pin_5
#endif
// IO - assuming all IOs on 48pin package
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC (BIT(13)|BIT(14)|BIT(15))
