/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task4
* Date: November 17, 2021
* Description: This program is the Tower of Hanoi.
*/

#include "hanoi.h"

void hanoi(char start_peg, char end_peg, char other_peg, int n)
{
	if (n == 1)
	{
		printf("Size 1 disk from peg %c to peg %c\n", start_peg, end_peg);
	}
	else
	{
		hanoi(start_peg, other_peg, end_peg, n - 1);
		printf("Size %d disk from peg %c to peg %c\n", n, start_peg, end_peg);
		hanoi(other_peg, end_peg, start_peg, n - 1);
	}
}