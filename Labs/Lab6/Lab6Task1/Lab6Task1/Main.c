/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task1
* Date: October 6, 2021
* Description: This program reads in each of the integer values
*			   in a file and determines if the sum of the integers is prime.
*			   It will then determine if the sum of the individual digits
*			   in the sum of the integers, is prime.
*/

#include "L6T1.h"

int main(void)
{
	FILE* infile = NULL;
	
	infile = fopen("Numbers.txt", "r");

	//**********Section a**********

	int sum, is_prime;

	// Reads and sums up integers from Numbers.txt
	sum = read_and_sum(infile);

	fclose(infile);

	is_prime = check_if_prime(sum);

	//printf("sum: %d\n", sum);
	//printf("is_prime: %d\n", is_prime);

	// Displays if sum is prime or not
	display_if_prime(is_prime, sum);

	
	
	
	
	//**********Section b**********
	int sum_digits, digit_sum_is_prime;

	// Sums up individual digits
	sum_digits = calc_sum_digits(sum);

	//printf("%d", sum_digits);

	digit_sum_is_prime = check_if_prime(sum_digits);

	// Displays if sum is prime or not
	display_if_prime(digit_sum_is_prime, sum_digits);


	return 0;
}