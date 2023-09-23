/*
 * LegSeg.h
 *
 *  Created on: Sep 22, 2023
 *      Author: Admin
 */

#ifndef INC_LEGSEG_H_
#define INC_LEGSEG_H_



#endif /* INC_LEGSEG_H_ */
#include "main.h"
void display7SEG (int flag,int counter)
{	if(flag ==0)
	{
	HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 1);
	HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 1);
	}
else if(flag ==1)
	{if(counter == 9)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 8)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 7)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 1);
	}
	else if (counter == 6)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 5)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 4)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 3)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 2)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 0);
	}
	else if (counter == 1)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 1);
	}
	else if (counter == 0)
	{
		HAL_GPIO_WritePin(GPIOA, LedsegA_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegB_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegC_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegD_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegE_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegG_Pin, 1);
	}
	}
}
void display7seg (int flag,int counter)
{	if(flag ==0)
	{
	HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,1);
	HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,1);
	HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,1);
	HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 1);
	HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 1);
	}
else if(flag ==1)
	{if(counter == 9)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 8)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 7)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 1);
	}
	else if (counter == 6)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,1);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 5)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,1);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 4)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,1);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 3)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 2)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,1);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 0);
	}
	else if (counter == 1)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,1);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 1);
	}
	else if (counter == 0)
	{
		HAL_GPIO_WritePin(GPIOB,LedsegA1_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegB2_Pin,0);
		HAL_GPIO_WritePin(GPIOB,LedsegCba_Pin,0);
		HAL_GPIO_WritePin(GPIOB, LedsegD4_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, LedsegE5_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegF6_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, LedsegG7_Pin, 1);
	}
	}
}
