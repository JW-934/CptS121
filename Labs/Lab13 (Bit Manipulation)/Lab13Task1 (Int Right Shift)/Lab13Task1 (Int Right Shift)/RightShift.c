/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task1
* Date: December 1, 2021
* Description: This program shifts integer variables to the right by 4 bits.
*/

#include "RightShift.h"

int right_shift_by_4(int number)
{
	return number >> 4;
}

void rec_print_last_int_bits(int number)
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

void print_int_as_bits(int number)
{
	rec_print_last_int_bits(number);

	printf("%d", number % 2);
}