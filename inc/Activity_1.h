#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file Activity_1.h
 * @author Vinayak K(vinukaralatti@gmail.com)
 * @brief This is the header file of Activity_1
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 	   /**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)           /**< LED Port Number */
#define LED_PIN  (PORTD2)         /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)  /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief This Function to Initialize all the Peripherals and pin configurations
 *
 */
void init_peripheral(void);

/**
 * @brief This Function to turn LED on
 *
 */
void LED_ON();

/**
 * @brief This Function to turn LED off
 *
 */
void LED_OFF();

/**
 * @brief This Function to Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed
 *
 */
int LED(void);

#endif /* __ACTIVITY_1_H__ */
