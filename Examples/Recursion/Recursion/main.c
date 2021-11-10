// This example illustrates how to work with recursion.

// History: 11/10 - Discussed the call stack and how it works
//                  with recursion. Implemented a recursive function
//                  for factorial called rec_factorial ().
//          11/8 - Implemented two functions. One that solves
//                 mutliplying 2 numbers together via addition.
//                 Function multiplication_thru_addition () uses
//                 a while loop to solve the problem and
//                 rec_multiplication_thru_addition () uses
//                 recursion instead of a loop to solve the problem.

#include "Recursion.h"

int main(void)
{
	int m = 3, n = 5, result = 0;

	printf("mult thru addition iterative: %d\n",
		result = multiplication_thru_addition(m, n));
	printf("mult thru addition recursively: %d\n",
		result = rec_multiplication_thru_addition(m, n));
	printf("mult thru addition recursively: %d\n",
		result = rec_factorial(n));

	return 0;
}