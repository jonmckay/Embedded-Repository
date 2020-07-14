/*
 * main.c
 *
 *  Created on: Jul 13, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>


int main(void)
{
	uint32_t number;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("0x%X\n", number);
	number = number | 0x90;
	printf("0x%X\n", number);
}
