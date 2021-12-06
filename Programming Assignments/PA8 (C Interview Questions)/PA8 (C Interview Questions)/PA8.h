/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA8
* Date: December 3, 2021, December 5, 2021
* Description: This program consists of numerous interview question functions.
*/

#ifndef PA8_H

#define PA8_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct occurrences
{
	int num_occurrences;
	double frequency;
}Occurances;

int binary_search(int list[], int target);
int is_palindrome(char* str, int length);
int sum_primes(unsigned int n);

char* my_str_n_cat(char* dest, char* src, int n);

void bubble_sort(char* array[], int num_strs);
#endif