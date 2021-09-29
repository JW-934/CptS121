/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task3
* Date: September 29, 2021
* Description: This program reads two numbers from data.txt and prints their greatest
*			   common divisor into output.txt.
*/

#include "Lab5Task3.h"

int main(void)
{
	FILE* infile = NULL; FILE* outfile = NULL;
	
	int num1, num2, remainder, old_divisor, new_remainder;

	infile = fopen("data.txt", "r");
	outfile = fopen("output.txt", "w");

	// Reads absolute value of data from data.txt
	num1 = abs(read_int(infile));
	num2 = abs(read_int(infile));

	remainder = num1 % num2;
	old_divisor = num2;

	do
	{
		new_remainder = old_divisor % remainder;
		old_divisor = remainder;
		remainder = new_remainder;
	} while (new_remainder != 0);

	// Prints gcd to output.txt
	print_int(outfile, old_divisor);

	fclose(infile);
	fclose(outfile);

	return 0;
}