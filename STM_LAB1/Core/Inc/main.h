/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_0
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_1
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_2
#define LED_GREEN_GPIO_Port GPIOA
#define LED_REDA4_Pin GPIO_PIN_4
#define LED_REDA4_GPIO_Port GPIOA
#define LED_YELLOWA5_Pin GPIO_PIN_5
#define LED_YELLOWA5_GPIO_Port GPIOA
#define LED_GREENA6_Pin GPIO_PIN_6
#define LED_GREENA6_GPIO_Port GPIOA
#define LedsegG_Pin GPIO_PIN_15
#define LedsegG_GPIO_Port GPIOB
#define LedsegF_Pin GPIO_PIN_8
#define LedsegF_GPIO_Port GPIOA
#define LedsegE_Pin GPIO_PIN_9
#define LedsegE_GPIO_Port GPIOA
#define LedsegD_Pin GPIO_PIN_10
#define LedsegD_GPIO_Port GPIOA
#define LedsegC_Pin GPIO_PIN_11
#define LedsegC_GPIO_Port GPIOA
#define LedsegB_Pin GPIO_PIN_12
#define LedsegB_GPIO_Port GPIOA
#define LedsegA_Pin GPIO_PIN_13
#define LedsegA_GPIO_Port GPIOA
#define LedsegG7_Pin GPIO_PIN_14
#define LedsegG7_GPIO_Port GPIOA
#define LedsegF6_Pin GPIO_PIN_15
#define LedsegF6_GPIO_Port GPIOA
#define LedsegE5_Pin GPIO_PIN_3
#define LedsegE5_GPIO_Port GPIOB
#define LedsegD4_Pin GPIO_PIN_4
#define LedsegD4_GPIO_Port GPIOB
#define LedsegCba_Pin GPIO_PIN_5
#define LedsegCba_GPIO_Port GPIOB
#define LedsegB2_Pin GPIO_PIN_6
#define LedsegB2_GPIO_Port GPIOB
#define LedsegA1_Pin GPIO_PIN_7
#define LedsegA1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
