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
	scanf("%c %c %c %c %c %c", &characterInput1, &characterInput2, &characterInput3, &characterInput4, &characterInput5, &characterInput6);

	printf("ASCII codes: %d %d %d %d %d %d", characterInput1, characterInput2, characterInput3, characterInput4, characterInput5, characterInput6);
}
