/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Jon
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t studentsAge[100];
	printf("Size of an array = %u\n", sizeof(studentsAge));
	printf("Base address of array %p\n", &studentsAge);
	return 0;
}
