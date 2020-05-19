/*
 * type_cast.c
 *
 *  Created on: May 19, 2020
 *      Author: Jon McKay
 */

#include <stdio.h>

int main(void)
{
	unsigned char data = 0x1FFFFFFFA0B0 + 0x1245;	// There will be data lost. The compiler considers these two numbers as longs

	float result = 80 / (float)3;	// The compiler will implicitly cast 80 to a float as well

	printf("Data : %u result : %f \n", data, result);
}
