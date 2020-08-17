/*
 * main.c
 *
 *  Created on: Aug 16, 2020
 *      Author: jonmckay
 */

#include <stdio.h>
#include <stdint.h>

struct DataSet
{
	char data1;
	int data2;
	char data3;
	short data4;
};

void displayMemberElements(struct DataSet *pData);

int main(void)
{
	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	displayMemberElements(&data);

	return 0;
}

void displayMemberElements(struct DataSet *pData)
{
	printf("data1 = %X\n", pData->data1);
	printf("data1 = %X\n", pData->data2);
	printf("data1 = %X\n", pData->data3);
	printf("data1 = %X\n", pData->data4);
}
