/*
 * FuncClock.h
 *
 *  Created on: Sep 23, 2023
 *      Author: Admin
 */

#ifndef INC_FUNCCLOCK_H_
#define INC_FUNCCLOCK_H_



#endif /* INC_FUNCCLOCK_H_ */
#include "main.h"
void clearAllClock()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1);

}
void setClock(int counter)
{
	switch (counter){
		case 1:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 0);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 0);
			break;
		case 0:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
			break;
		default:
			break;
	}

}
