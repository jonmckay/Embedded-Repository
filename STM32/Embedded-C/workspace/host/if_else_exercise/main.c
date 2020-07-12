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
	float firstNumber = 0;
	float secondNumber = 0;

	printf("Enter a number(integer):");
	scanf("%f", &firstNumber);

	printf("Enter a second number(integer):");
	scanf("%f", &secondNumber);

	int32_t n1, n2;

	n1 = firstNumber;
	n2 = secondNumber;

	if((n1 != firstNumber) || (n2 != secondNumber)){
		printf("Warning ! comparing only integer part\n");
	}

	if(n1 == n2)
	{
		printf("The numbers are equal");
	} else {

		if(n1 > n2)
		{
			printf("%d is bigger\n", n1);
		} else {
			printf("%d is bigger\n", n2);
		}
	}
}
