/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Date: September 3, 2021
* Description: Prompts for credits possible in 3 classes, corresponding grade points,
*/

#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main(void)
{
	int credits1 = 0, credits2 = 0, credits3 = 0;
	double gp1 = 0, gp2 = 0, gp3 = 0;

	printf("Enter grade point for class 1: ");
	scanf("%lf", &gp1);

	printf("Enter credits for class 1: ");
	scanf("%d", &credits1);
	
	printf("Enter grade point for class 2: ");
	scanf("%lf", &gp2);

	printf("Enter credits for class 2: ");
	scanf("%d", &credits2);
	
	printf("Enter grade point for class 3: ");
	scanf("%lf", &gp3);

	printf("Enter credits for class 3: ");
	scanf("%d", &credits3);








	return 0;
}