// This example illustrates how to work with recursion.

// History: 11/8 - Implemented two functions. One that solves
//                 mutliplying 2 numbers together via addition.
//                 Function multiplication_thru_addition () uses
//                 a while loop to solve the problem and
//                 rec_multiplication_thru_addition () uses
//                 recursion instead of a loop to solve the problem.

#include "Recursion.h"

int main(void)
{
	printf("mult thru addition iterative: %d\n",
		multiplication_thru_addition(4, 3));
	printf("mult thru addition recursively: %d\n",
		rec_multiplication_thru_addition(4, 3));

	return 0;
}