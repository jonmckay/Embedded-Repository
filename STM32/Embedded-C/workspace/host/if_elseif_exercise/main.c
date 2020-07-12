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
	uint64_t totalIncome;
	double tempIncome;
	uint64_t tax;

	printf("Enter your total income:");
	scanf("%lf", &tempIncome);

	totalIncome = (uint64_t) tempIncome;

	if(totalIncome <= 9525){
		tax = 0;
	} else if (totalIncome >= 9526 && totalIncome <= 38700){
		tax = totalIncome * 0.12;
	} else if (totalIncome >= 38701 && totalIncome <= 82500){
		tax = totalIncome * 0.22;
	} else {
		tax = (totalIncome * 0.32) + 1000;
	}

	printf("Tax Payable: %llu\n", tax);
}
