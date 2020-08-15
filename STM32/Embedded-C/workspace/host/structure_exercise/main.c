/*
 * main.c
 *
 *  Created on: Aug 14, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>

struct carModel
{
	unsigned int carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct carModel CarBMW = {.carNumber = 2021, .carPrice = 15000, .carMaxSpeed = 220, .carWeight = 1330};
	struct carModel CarHonda = { .carNumber = 4031, .carPrice = 35000, .carMaxSpeed = 160, .carWeight = 1900.96 };

	printf("BMW Car Number: %u, Car Price: %d, Car Max Speed: %d, Car Weight: %f\r\n", CarBMW.carNumber, CarBMW.carPrice, CarBMW.carMaxSpeed, CarBMW.carWeight);
	printf("Honda Car Number: %u, Car Price: %d, Car Max Speed: %d, Car Weight: %f", CarHonda.carNumber, CarHonda.carPrice, CarHonda.carMaxSpeed, CarHonda.carWeight);

	return 0;
}
