/*
 * main.c
 *
 *  Created on: June 28, 2020
 *      Author: Jon McKay
 */

#include <stdio.h>

int main(void)
{
	double charge, chargeE;
	double electrons;

	printf("Enter the charge:");
	scanf("%lf", &charge);

	printf("Enter the charge of an electron:");
	scanf("%le", &chargeE);

	electrons = (charge / chargeE) * -1;

	printf("Total number of electrons = %le\n", electrons);
	printf("Total number of electrons = %lf\n", electrons);

	printf("press enter to exit the application\n");
	while(getchar() != '\n')
	{

	}
	getchar();

	return 0;
}
