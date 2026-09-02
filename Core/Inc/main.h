/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define parlante_Pin GPIO_PIN_13
#define parlante_GPIO_Port GPIOC
#define MARIA1_Pin GPIO_PIN_0
#define MARIA1_GPIO_Port GPIOA
#define MARIA2_Pin GPIO_PIN_1
#define MARIA2_GPIO_Port GPIOA
#define MARIA3_Pin GPIO_PIN_2
#define MARIA3_GPIO_Port GPIOA
#define MARIA4_Pin GPIO_PIN_3
#define MARIA4_GPIO_Port GPIOA
#define MARIA5_Pin GPIO_PIN_4
#define MARIA5_GPIO_Port GPIOA
#define MARIA6_Pin GPIO_PIN_5
#define MARIA6_GPIO_Port GPIOA
#define MARIA7_Pin GPIO_PIN_6
#define MARIA7_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
