/*
 * main.c
 *
 *  Created on: Jul 26, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t data = 10;

	printf("Value = %u\n", data);

	uint8_t *ptr = &data;

	*ptr = 50;

	printf("Value = %u\n", data);

	getchar();
}
