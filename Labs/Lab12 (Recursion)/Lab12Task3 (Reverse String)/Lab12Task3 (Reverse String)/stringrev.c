/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task3
* Date: November 17, 2021
* Description: This program recursively reverses a string.
*/

#include "stringrev.h"

char* string_reverse(char* str_ptr, int strlen)
{
	int index = strlen - 1;
	char temp;
	temp = str_ptr[index];
	str_ptr[index] = *str_ptr;
	*str_ptr = temp;

	--index;

	if (index == 0 || index == (strlen / 2) - 1)
	{
		return *str_ptr;
	}
	else
	{
		string_reverse(str_ptr + 1, index);
	}
	return str_ptr;
}