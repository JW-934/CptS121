/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task2
* Date: December 1, 2021
* Description: This program shifts integer variables to the left.
*/

#include "LeftShift.h"

int main(void)
{
	unsigned int number = 10, new_num;

	new_num = power2(number, 2);

	printf("Initial int: %d\n", number);
	printf("Initial bits: ");

	print_int_as_bits(number);
	putchar('\n');

	printf("New int: %d\n", new_num);
	printf("New bits: ");

	print_int_as_bits(new_num);
	return 0;
}