/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task2
* Date: November 17, 2021
* Description: This program recursively finds the sum of the digits of an int.
*/

#include "digitsum.h"

int main(void)
{
	printf("Sum of digits of %d: %d\n", 1337, digit_sum(1337));
	printf("Sum of digits of %d: %d\n", 42, digit_sum(42));
}