/*
 * main.c
 *
 *  Created on: Jul 11, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int32_t firstNumber = 0;
	int32_t secondNumber = 0;

	printf("Enter a number(integer):");
	scanf("%d", &firstNumber);

	printf("Enter a second number(integer):");
	scanf("%d", &secondNumber);

	if(firstNumber == secondNumber)
	{
		printf("The numbers are equal");
	} else {

		if(firstNumber > secondNumber)
		{
			printf("%d is bigger\n", firstNumber);
		} else {
			printf("%d is bigger\n", secondNumber);
		}
	}
}
