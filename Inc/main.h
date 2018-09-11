/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/
#define ADC_NUMBER 14

#define AC9_ADC_Pin GPIO_PIN_0
#define AC9_ADC_GPIO_Port GPIOC
#define AC10_ADC_Pin GPIO_PIN_1
#define AC10_ADC_GPIO_Port GPIOC
#define AC8_ADC_Pin GPIO_PIN_2
#define AC8_ADC_GPIO_Port GPIOC
#define AC7_ADC_Pin GPIO_PIN_3
#define AC7_ADC_GPIO_Port GPIOC
#define ACPE_VADC_Pin GPIO_PIN_0
#define ACPE_VADC_GPIO_Port GPIOA
#define ACL_VADC_Pin GPIO_PIN_1
#define ACL_VADC_GPIO_Port GPIOA
#define TOUCH_ADC_Pin GPIO_PIN_2
#define TOUCH_ADC_GPIO_Port GPIOA
#define AC6_ADC_Pin GPIO_PIN_6
#define AC6_ADC_GPIO_Port GPIOA
#define AC5_ADC_Pin GPIO_PIN_7
#define AC5_ADC_GPIO_Port GPIOA
#define AC4_ADC_Pin GPIO_PIN_4
#define AC4_ADC_GPIO_Port GPIOC
#define AC3_ADC_Pin GPIO_PIN_5
#define AC3_ADC_GPIO_Port GPIOC
#define AC2_ADC_Pin GPIO_PIN_0
#define AC2_ADC_GPIO_Port GPIOB
#define AC1_ADC_Pin GPIO_PIN_1
#define AC1_ADC_GPIO_Port GPIOB
#define Contactor10_Pin GPIO_PIN_8
#define Contactor10_GPIO_Port GPIOD
#define Contactor9_Pin GPIO_PIN_9
#define Contactor9_GPIO_Port GPIOD
#define Contactor8_Pin GPIO_PIN_10
#define Contactor8_GPIO_Port GPIOD
#define Contactor7_Pin GPIO_PIN_11
#define Contactor7_GPIO_Port GPIOD
#define Contactor6_Pin GPIO_PIN_12
#define Contactor6_GPIO_Port GPIOD
#define Contactor5_Pin GPIO_PIN_13
#define Contactor5_GPIO_Port GPIOD
#define Contactor4_Pin GPIO_PIN_14
#define Contactor4_GPIO_Port GPIOD
#define Contactor3_Pin GPIO_PIN_15
#define Contactor3_GPIO_Port GPIOD
#define Contactor2_Pin GPIO_PIN_6
#define Contactor2_GPIO_Port GPIOC
#define Contactor1_Pin GPIO_PIN_7
#define Contactor1_GPIO_Port GPIOC
#define GPRS4G_ON_Pin GPIO_PIN_8
#define GPRS4G_ON_GPIO_Port GPIOA
#define GPRS4G_PWR_Pin GPIO_PIN_12
#define GPRS4G_PWR_GPIO_Port GPIOA

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
