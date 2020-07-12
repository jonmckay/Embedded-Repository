/*
 * main.c
 *
 *  Created on: Jul 12, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int32_t number;
	printf("Enter a number: ");
	scanf("%d", &number);

	if(number & 1){
		printf("That number is ODD");
	}else {
		printf("That number is EVEN");
	}
}
