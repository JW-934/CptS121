/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab8Task1
* Date: October 20, 2021
* Description: This program populates an array with integers from a file then reverses the items.
*/

#include "Header.h"

int read_int(FILE* infile)
{
	int number = 0;

	fscanf(infile, "%d", &number);

	return (number);
}