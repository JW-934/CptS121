#ifndef RECURSION_H
#define RECURSION_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// m * n = ?
// precondition: m > 0, n > 0
// m + m + ... + m --> n times
int multiplication_thru_addition(int m, int n);

// m * n = ?
// precondition: m > 0, n > 0
// m + m + ... + m --> n times
int rec_multiplication_thru_addition(int m, int n);

// factorial n! = n * (n-1)!
// precondition: n >= 0
// given: 0! = 1
int rec_factorial(int n);

// fibonacci n = fib(n - 1) + fib(n - 2)
// given: term 1 = 0, term 2 = 1
// precondition: n >= 1
int rec_fib(int n);

char* rec_str_cpy(char* dest_ptr, const char* src_ptr);

#endif
