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
	uint32_t height;
	printf("Enter height of pyramid:");
	scanf("%d", &height);

	for(uint32_t i = 1; i <= height; i++){
		for(uint32_t j=i; j > 0; j--){
			printf("%d  ", j);
		}
		printf("\n");
	}
}
