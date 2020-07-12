/*
 * main.c
 *
 *  Created on: Jul 12, 2020
 *      Author: jonmckay
 */

#define PI 3.14159265358979323846

#include <stdio.h>
#include <stdint.h>
#include <math.h>

void PrintInstructions();
void CalculateCircleArea();
void CalculateTriangleArea();
void CalculateRectangleArea();
void CalculateSquareArea();
void CalculateTrapezoidArea();

int main(void)
{
	int8_t code;

	PrintInstructions();

	printf("Enter the code here:");
	scanf("%c", &code);

	switch(code){
		case 'c':
			CalculateCircleArea();
			break;
		case 't':
			CalculateTriangleArea();
			break;
		case 'r':
			CalculateRectangleArea();
			break;
		case 's':
			CalculateSquareArea();
			break;
		case 'z':
			CalculateTrapezoidArea();
			break;
		default:
			break;
	}
}

void PrintInstructions()
{
	printf("Area calculation program\n");
	printf("Circle --> c\n");
	printf("Triangle --> t\n");
	printf("Rectangle --> r\n");
	printf("Square --> s\n");
	printf("Trapezoid --> z\n");
}

void CalculateCircleArea()
{
	float radius;
	float area;

	printf("Enter the radius(r):");
	scanf("%f", &radius);

	area = PI * (radius * radius);
	printf("Area is: %f", area);
}

void CalculateTriangleArea()
{
	float base;
	float height;
	double area;

	printf("Enter base: \n");
	scanf("%f", &base);

	printf("Enter height: \n");
	scanf("%f", &height);

	area = (base * height)/2;

	printf("Area is: %lf", area);
}

void CalculateRectangleArea()
{
	int32_t width;
	int32_t height;

	printf("Enter the width: \n");
	scanf("%d", &width);

	printf("Enter the height: \n");
	scanf("%d", &height);

	printf("Area is: %d", width * height);
}

void CalculateSquareArea()
{
	int32_t edgeLength;
	printf("Enter edge length:");
	scanf("%d", &edgeLength);

	edgeLength *= edgeLength;

	printf("Area is: %d", edgeLength);
}

void CalculateTrapezoidArea()
{
	int32_t baseA;
	int32_t baseB;
	int32_t height;
	double area;

	printf("Enter base a size: \n");
	scanf("%d", &baseA);

	printf("Enter base b size: \n");
	scanf("%d", &baseB);

	printf("Enter height: \n");
	scanf("%d", &height);

	area = (1/2) * (baseA + baseB) * height;
	printf("Area is: %lf", area);
}
