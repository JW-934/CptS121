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

//void non_rec_print_int_as_bits(int number)
//{
//	int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;
//
//	bit1 = number % 2;
//	bit2 = (number / 2) % 2;
//	number /= 2;
//	bit3 = (number / 2) % 2;
//	number /= 2;
//	bit4 = (number / 2) % 2;
//	number /= 2;
//	bit5 = (number / 2) % 2;
//	number /= 2;
//	bit6 = (number / 2) % 2;
//	number /= 2;
//	bit7 = (number / 2) % 2;
//	number /= 2;
//	bit8 = (number / 2) % 2;
//	
//	printf("%d%d%d%d%d%d%d%d", bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8);
//}