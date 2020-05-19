/*
 * main.c
 *
 *  Created on: May 19, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add : %d\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Multiply : %x\n", math_mul(0x0FFF1111, 0x0FFF1111));
	printf("Division : %0.2f\n", math_div(0x0FFF1111, 0x0FFF1111));

	return 0;
}
