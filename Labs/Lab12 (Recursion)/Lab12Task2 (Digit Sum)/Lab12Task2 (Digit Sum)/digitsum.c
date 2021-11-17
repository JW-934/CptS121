/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task2
* Date: November 17, 2021
* Description: This program recursively finds the sum of the digits of an int.
*/

#include "digitsum.h"

int digit_sum(int n)
{
	int sum = n % 10;
	n = n / 10;

	if (n == 0)
	{
		return sum;
	}
	else
	{
		sum += digit_sum(n);
	}
	return sum;
}