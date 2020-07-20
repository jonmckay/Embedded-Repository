/*
 * main.c
 *
 *  Created on: Jul 19, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t counter = 1;
	while(counter <= 10)
	{
		printf("%d\n", counter);
		counter += 1;
	}
}
