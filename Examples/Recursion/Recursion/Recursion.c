#include "Recursion.h"

// m * n = ?
// precondition: m > 0, n > 0
// m + m + ... + m --> n times
int multiplication_thru_addition(int m, int n)
{
	int result = 0;

	while (n > 0)
	{
		result += m; // add 1 more m to the result
		--n; // ensures that we add m to itself n times
	}

	return result;
}

// m * n = ?
// precondition: m > 0, n > 0
// m + m + ... + m --> n times
int rec_multiplication_thru_addition(int m, int n)
{
	// this is a recursive function
	int result = 0;

	// simple case or base case?
	if (n == 1)
	{
		result = m; // multiplying m * 1
	}
	else
	{
		// recursive steps - non simple cases
		result = m + rec_multiplication_thru_addition(m, n - 1);
	}

	return result;
}

// factorial n! = n * (n-1)!
// precondition: n >= 0
// given: 0! = 1
int rec_factorial(int n)
{
	int result = 0;

	// base case?
	if (n == 0)
	{
		result = 1;
	}
	else
	{
		// recursive step
		result = n * rec_factorial(n - 1);
	}

	return result;
}

int rec_fib(int n)
{
	int result = 0;

	if (n == 1) // could be eliminated bc result is already 0 (base case)
	{
		result = 0;
	}
	else if (n == 2) // base case
	{
		result = 1;
	}
	else // recursive step
	{
		result = rec_fib(n - 1) + rec_fib(n - 2);
	}
	return result;
}