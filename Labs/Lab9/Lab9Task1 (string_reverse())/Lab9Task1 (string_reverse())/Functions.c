/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab9Task1
* Date: October 27, 2021
* Description: This program reverses the characters of a string.
*/

#include "Lab9Task1.h"

// Reverses characters in string
char* string_reverse(char* str)
{
	int length = my_strlen(str), k;
	char temp;

	k = length - 1; // Set to last character in string

	for (int i = 0; i < length / 2; ++i)
	{
		temp = str[i];

		str[i] = str[k];
		str[k] = temp;

		--k;
	}
	return str;
}

// Reverses characters in string with only pointer notation and arithmetic
char* str_rev_arithmetic(char* str)
{
	int length = my_strlen(str), k;
	char temp;

	k = length - 1; // Set to last character in string

	for (int i = 0; i < length / 2; ++i)
	{
		
		temp = *(str + i);

		*(str + i) = *(str + k);
		*(str + k) = temp;

		--k;
	}
	return str;
}

// Counts elements in string
int my_strlen(char* str)
{
	int length = 0; 
	for (int i = 0; str[i] != '\0'; ++i)
	{
		length += 1;
	}
	return length;
}