/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task4
* Date: November 17, 2021
* Description: This program is the Tower of Hanoi.
*/

#include "hanoi.h"

void hanoi(char from_peg, char to_peg, char aux_peg, int n)
{
	if (n == 1)
	{
		printf("Size 1 disk from peg %c to peg %c\n", from_peg, to_peg);
	}
	else
	{
		hanoi(from_peg, aux_peg, to_peg, n - 1);
		printf("Size %d disk from peg %c to peg %c\n", n, from_peg, to_peg);
		hanoi(aux_peg, to_peg, from_peg, n - 1);
	}
}