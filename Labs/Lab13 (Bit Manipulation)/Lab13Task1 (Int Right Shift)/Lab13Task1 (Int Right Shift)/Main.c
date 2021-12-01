/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task1
* Date: December 1, 2021
* Description: This program shifts integer variables to the right by 4 bits.
*/

#include "RightShift.h"

int main(void)
{
	int number = 125;
	
	print_int_as_bits(number);
	putchar('\n');
	number = number >> 4;

	print_int_as_bits(number);
	//putchar('\n');
	//non_rec_print_int_as_bits(number);
	return 0;
}