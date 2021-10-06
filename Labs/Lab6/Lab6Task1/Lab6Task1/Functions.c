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

// Read integers from file and sum them
int read_and_sum(FILE* infile)
{
	int sum = 0, number;

	while (!feof(infile))
	{
		fscanf(infile, "%d", &number);
		sum = sum + number;
	}
	return sum;
}

// Checks if number is prime
int check_if_prime(int number)
{
	int is_prime = 1, rem;

	for (int i = 2; i < (int)sqrt(number) + 1; i++) // Test divisibility by each number before the number's sqrt
	{
		rem = number % i;
	
		if (rem == 0)
		{
			is_prime = 0;
		}
	}
	//printf("inside funct isprime: %d\n", is_prime);
	
	return is_prime;
}

void display_if_prime(int is_prime, int sum)
{
	if (is_prime == 1)
	{
		printf("%d is prime.\n", sum);
	}
	if (is_prime == 0)
	{
		printf("%d is not prime.\n", sum);
	}
}

// Sums up individual digits
int calc_sum_digits(int number)
{
	int digit_sum = 0;

	digit_sum = number % 10;

	while (number != 0)
	{
		number = number / 10;
		digit_sum += number % 10;
	}
	return digit_sum;
}