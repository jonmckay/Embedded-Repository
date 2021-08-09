/*
 * main.c
 *
 *  Created on: June 18, 2020
 *      Author: Jon McKay
 */
#include <stdio.h>

int main(void)
{
	char characterInput1;
	char characterInput2;
	char characterInput3;
	char characterInput4;
	char characterInput5;
	char characterInput6;

	printf("Enter 6 characters: ");
	characterInput1 = getchar();
	getchar();
	characterInput2 = getchar();
	getchar();
	characterInput3 = getchar();
	getchar();
	characterInput4 = getchar();
	getchar();
	characterInput5 = getchar();
	getchar();
	characterInput6 = getchar();

	printf("ASCII codes: %d %d %d %d %d %d", characterInput1, characterInput2, characterInput3, characterInput4, characterInput5, characterInput6);

	getchar();
	return(0);
}
