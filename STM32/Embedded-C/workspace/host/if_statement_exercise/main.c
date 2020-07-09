/*
 * main.c
 *
 *  Created on: July 8, 2020
 *      Author: Jon McKay
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if(age >= 18)
		printf("You can vote!");
	else
		printf("You can't vote");

	return 0;
}
