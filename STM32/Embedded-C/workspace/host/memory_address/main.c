/*
 * main.c
 *
 *  Created on: May 12, 2020
 *      Author: Jon Mckay
 */

#include <stdio.h>

int main()
{
	char a1 = 'A';
//	char a2 = 'p';
//	char a3 = 'p';
//	char a4 = 'l';
//	char a5 = 'e';
//	char a6 = ':';
	//char a7 = ')';

	unsigned long int addressOfa1 = (unsigned long int)&a1;

	printf("Address of variable a1 = %X\n", addressOfa1);


	return 0;
}
