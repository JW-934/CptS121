/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab9Task1
* Date: October 27, 2021
* Description: This program reverses the characters of a string.
*/

#include "Lab9Task1.h"

int main(void)
{
	
	// a. //////////////////////////////////////////////////////////
	char string[] = "Test string";
	
	char* str = string;

	str = string_reverse(str);

	printf("a. Array notation: ");
	puts(str);

	// b. /////////////////////////////////////////////////////////


	char string2[] = "Test string 2";

	char* str2 = string2;

	str2 = str_rev_arithmetic(str2);

	printf("b. Pointer notation: ");
	puts(str2);
}