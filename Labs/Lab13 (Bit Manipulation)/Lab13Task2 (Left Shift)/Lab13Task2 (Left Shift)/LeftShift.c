/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task2
* Date: December 1, 2021
* Description: This program shifts integer variables to the left.
*/

#include "LeftShift.h"

int power2(unsigned int number, unsigned int pow)
{
	return number << pow;
}

void rec_print_last_int_bits(unsigned int number)
{
	number /= 2;

	if (number == 0)
	{
		printf("0");
		return;
	}
	else
	{
		printf("%d", number % 2);
		rec_print_last_int_bits(number);
	}
}

void print_int_as_bits(unsigned int number)
{
	rec_print_last_int_bits(number);

	printf("%d", number % 2);
}