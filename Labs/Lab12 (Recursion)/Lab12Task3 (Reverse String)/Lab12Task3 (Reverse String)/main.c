/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task3
* Date: November 17, 2021
* Description: This program recursively reverses a string.
*/

#include "stringrev.h"

int main(void)
{
	char str[20] = "abcdefghij";
	char str2[20] = "abcdefghijk";

	puts(str);

	puts(string_reverse(str, 10));

	puts(str2);

	puts(string_reverse(str2, 11));
}