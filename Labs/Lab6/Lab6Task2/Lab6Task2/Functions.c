/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task2
* Date: October 6, 2021
* Description: This program determines the factorial
*			   of n, represented n!, where n is entered by the user.
*/

#include "L6T2.h"

// Gets a valid integer from the user
int get_int()
{
	int n = -1, temp;

	// Prompts for an integer until a positive one is entered
	do
	{
		printf("\nEnter an integer to find the factorial of: ");
		scanf("%d", &temp);

		if (temp < 0)
		{
			printf("\nNumber cannot be negative. Try again.\n");
		}
		else
		{
			n = temp;
		}
	} while (n < 0);
	//printf("n = %d", n);
	return n;
}

// In case 0 or 1 is entered (Special cases)
void check_for_special_values(int number)
{
	if (number == 1)
	{
		printf("\n1! = 1");
		return 0;
	}
	if (number == 0)
	{
		printf("\n0! = 1");
		return 0;
	}
}

int calc_factorial(int number)
{
	int factorial, next_term = 1;

	factorial = number * (number - 1);

	for (int i = 2; i < number; i++)
	{
		next_term = number - i;

		factorial = factorial * next_term;
		//printf("funct factorial: %d", factorial);
	}

	return factorial;
}

void print_factorial(int number, int factorial)
{
	printf("\n%d! = %d\n", number, factorial);
}