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

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int read_and_sum(FILE* infile);
int check_if_prime(int number);
int calc_sum_digits(int number);

void display_if_prime(int is_prime, int sum);