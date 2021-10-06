/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task2
* Date: October 6, 2021
* Description: This program determines the factorial
*			   of n, represented n!, where n is entered by the user.
*/

#include "L6T2.h"

int main(void)
{
	int number, factorial;
	
	printf("**********Factorial Finder**********");
	
	number = get_int();

	// In case 0 or 1 is entered (Special cases)
	check_for_special_values(number);

	factorial = calc_factorial(number);

	print_factorial(number, factorial);

	return 0;
}