/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task3
* Date: October 6, 2021
* Description: This program determines the Fibonacci number for the nth term.
*/

#include "L6T3.h"

int main(void)
{
	int n, fibonacci;
	
	n = get_int();

	fibonacci = find_fibonacci(n);

	printf("Fibonacci number at position %d: %d", n, fibonacci);
}