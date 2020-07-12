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
	int32_t num1, num2;
	printf("Enter 2 numbers (Put a space between 2 numbers):");
	scanf("%d %d", &num1, &num2);

	printf("Bitwise AND(&) : %d\n", (num1 & num2));
	printf("Bitwise OR(|) : %d\n", (num1 | num2));
	printf("Bitwise XOR(^) : %d\n", (num1 ^ num2));
	printf("Bitwise NOT(~) : %d\n", (~num1));
}
