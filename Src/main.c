
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_hal.h"
#include "cmsis_os.h"
#include "adc.h"
#include "dma.h"
#include "rtc.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* USER CODE BEGIN Includes */
#include "debug.h"
#include "stdint.h"
#include "gprs.h"
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
static osThreadId defThreadId = NULL;
static osTimerId defTimerId = NULL;
static osMutexId defMutexId = NULL;
static osPoolId defPoolId = NULL;
static osMessageQId defMessageQId = NULL;
extern UART_HandleTypeDef huart4;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void MX_FREERTOS_Init(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/
uint8_t tx_msg[512];

static void defTimerProc(void const *argument)
{
	static uint32_t i = 0;
	osStatus status;
	uint32_t *p = NULL;
	i ++;
	p = (uint32_t *)osPoolAlloc(defPoolId);
	if(p){
		*p = i;
		status = osMessagePut(defMessageQId, (uint32_t)p, 100);
		if(status == osOK){
			//sprintf(tx_msg, "put message %x\t%u\t%u\r\n", p, *p, osKernelSysTick());
			
			//RTT_LOG(APP_DEBUG"put message %x\t%u\t%u\r\n", p, *p, osKernelSysTick());		
		}else{
			osPoolFree(defPoolId, p);
		}

	}else{
		//RTT_LOG(APP_DEBUG"alloc memory failed\r\n");		
	}
}

 struct {
	uint8_t sw_no;
	uint8_t status;
 }rsw;
 static void relay_check()
{
	 if(rsw.sw_no){
		 switch(rsw.sw_no)
		 {
	 		case 1:
				HAL_GPIO_WritePin(Contactor1_GPIO_Port, Contactor1_Pin, rsw.status);
				break;
			case 2:
				HAL_GPIO_WritePin(Contactor2_GPIO_Port, Contactor2_Pin, rsw.status);
				break;
			case 3:
				HAL_GPIO_WritePin(Contactor3_GPIO_Port, Contactor3_Pin, rsw.status);
				break;
					
			 case 4:
			 	HAL_GPIO_WritePin(Contactor4_GPIO_Port, Contactor4_Pin, rsw.status);
				 break;
			 case 5:
			 	HAL_GPIO_WritePin(Contactor5_GPIO_Port, Contactor5_Pin, rsw.status);
				 break;
			 case 6:
			 	HAL_GPIO_WritePin(Contactor6_GPIO_Port, Contactor6_Pin, rsw.status);
				 break;
				 
			 case 7:
			 	HAL_GPIO_WritePin(Contactor7_GPIO_Port, Contactor7_Pin, rsw.status);
				 break;
			 case 8:
			 	HAL_GPIO_WritePin(Contactor8_GPIO_Port, Contactor8_Pin, rsw.status);
				 break;
			 case 9:
			 	HAL_GPIO_WritePin(Contactor9_GPIO_Port, Contactor9_Pin, rsw.status);
				 break;
			case 10:
				HAL_GPIO_WritePin(Contactor10_GPIO_Port, Contactor10_Pin, rsw.status);
				break;
		 }
		 
		 rsw.status = 0;
		 rsw.sw_no = 0;
	 }
 }
extern uint16_t mem[28];
static void defTaskThread(void const *argument)
{
	static uint32_t waitMS = 30;
	uint16_t len;
	uint32_t waitingCount = 0;
	osEvent event;
	uint8_t srv1_ip[4] = {116, 85, 12, 46};
	uint8_t srv2_ip[4] = {116, 85, 12, 46};
	//uint8_t srv2_ip[4] = {172, 18, 252, 187};
	osTimerDef(defTimer, defTimerProc);
	osMutexDef(defMutex);
	osPoolDef(defPool, 10, sizeof(uint32_t));
	osMessageQDef(defMessageQ, 10, sizeof(uint32_t));
	M26_init(&huart1);
	osDelay(1000);

	HAL_TIM_Base_Start(&htim1);
	osDelay(1000);
	HAL_TIM_IC_Start_IT(&htim4, TIM_CHANNEL_3);
	HAL_ADC_Start(&hadc1);
	HAL_ADC_Start_DMA(&hadc1, (uint32_t *)mem, 14);
	
	M26_reset();
	M26_socket(0, TCP, 0, 0);
	M26_connect(0, srv1_ip, 6789);
	M26_socket(1, TCP, 0, 0);
	M26_connect(1, srv2_ip, 6789);
	osDelay(1000);
	
  defTimerId = osTimerCreate(osTimer(defTimer), osTimerPeriodic, NULL);
	defMutexId = osMutexCreate(osMutex(defMutex));
	defPoolId = osPoolCreate(osPool(defPool));
	defMessageQId = osMessageCreate(osMessageQ(defMessageQ), NULL);
	osTimerStart(defTimerId, 2000);
	for(;;){
		relay_check();

		event = osMessageGet(defMessageQId, 0xffff);
		waitingCount = osMessageWaiting(defMessageQId);
		if(event.status == osEventMessage){
			osPoolFree(defPoolId, event.value.p);
			sprintf(tx_msg, "%s", "i am sn0\r\n");
			M26_send(0, tx_msg, strlen(tx_msg));
			osDelay(50);
			sprintf(tx_msg, "%s", "i am sn1\r\n");
			M26_send(1, tx_msg, strlen(tx_msg));
			osDelay(50);
			if((len = M26_recv(0, tx_msg, 512)) > 0){
				RTT_LOG(APP_WARNING"sn0 %s", tx_msg);
			}
			osDelay(50);
			if((len = M26_recv(1, tx_msg, 512)) > 0){
				RTT_LOG(APP_NOTICE"sn1 %s", tx_msg);
			}
			//RTT_LOG(APP_INFO"get message %x\t%u waiting:%u\r\n", event.value.p, *(uint32_t *)event.value.p, waitingCount);
			if(waitingCount == 5){
				osDelay(100);
				//M26_ioctl(IO_GET_CSQ, NULL);
				M26_ioctl(IO_GET_STATUS, NULL);
			}
			if(waitingCount > 5){
				waitMS = 1000;
			}else{
				waitMS = 5000;
			}
		}
		osDelay(waitMS);
		osThreadYield();	
	}
}



/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  *
  * @retval None
  */
int main(void)
{
  /* USER CODE BEGIN 1 */


  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
#ifdef RTT_DEBUG
	SEGGER_RTT_Init();
#endif
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_RTC_Init();
  MX_UART4_Init();
  MX_USART1_UART_Init();
  MX_ADC1_Init();
  MX_TIM1_Init();
  MX_TIM4_Init();
  /* USER CODE BEGIN 2 */
	RTT_LOG(APP_DEBUG"start\r\n");
  osThreadDef(defTask, defTaskThread, 0, 0, 128);
  defThreadId = osThreadCreate(osThread(defTask), NULL);


  /* USER CODE END 2 */

  /* Call init function for freertos objects (in freertos.c) */
  MX_FREERTOS_Init();

  /* Start scheduler */
  osKernelStart();
  
  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */

  }
  /* USER CODE END 3 */

}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_PeriphCLKInitTypeDef PeriphClkInit;

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE|RCC_OSCILLATORTYPE_LSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.Prediv1Source = RCC_PREDIV1_SOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  RCC_OscInitStruct.PLL2.PLL2State = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_RTC|RCC_PERIPHCLK_ADC;
  PeriphClkInit.RTCClockSelection = RCC_RTCCLKSOURCE_LSE;
  PeriphClkInit.AdcClockSelection = RCC_ADCPCLK2_DIV6;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

    /**Configure the Systick interrupt time 
    */
  __HAL_RCC_PLLI2S_ENABLE();

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 15, 0);
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  file: The file name as string.
  * @param  line: The line in file as a number.
  * @retval None
  */
void _Error_Handler(char *file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
