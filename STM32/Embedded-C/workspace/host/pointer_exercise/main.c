/*
 * main.c
 *
 *  Created on: Jun 29, 2020
 *      Author: jonmckay
 */


#include <stdio.h>

int main(void)
{
	char data = 100;

	printf("Value of data is: %d\n", data);
	printf("The address of data is: %p\n", &data);

	char* pointerStorage = &data;

	char value = *pointerStorage;

	printf("Read value is : %d\n", value);

	*pointerStorage = 65;

	printf("Value of data is : %d\n", data);
}
