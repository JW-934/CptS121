/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task3
* Date: October 6, 2021
* Description: This program determines the Fibonacci number for the nth term.
*/

#include "L6T3.h"

int get_int()
{
	int n;

	// Prompts for an integer

	printf("Enter an integer (n) to find the Fibonacci number of: ");
	scanf("%d", &n);

	return n;
}

int find_fibonacci(int n)
{
	int current = 0, prev1 = 0, prev2 = 1;
	
	for (int i = 0; i < n - 1; i++)
	{
		current = prev1 + prev2;
		prev2 = prev1;
		prev1 = current;
		
		//printf("i: %d\n", i);
		//printf("current: %d\n", current);
	}
	return current;
}