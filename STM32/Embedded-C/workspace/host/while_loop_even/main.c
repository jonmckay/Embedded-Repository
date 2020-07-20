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
	int32_t startingNum, endingNum;
	int32_t even = 0;

	printf("Enter starting and ending numbers (give a space between two nos): ");
	scanf("%d %d", &startingNum, &endingNum);

	printf("Even numbers are: \n");
	while(startingNum < endingNum){
		if(!(startingNum % 2)) {
			printf("%4d", startingNum);
			even++;
		}
		startingNum++;
	}

	printf("\nTotal Even Numbers: %u\n", even);
}
