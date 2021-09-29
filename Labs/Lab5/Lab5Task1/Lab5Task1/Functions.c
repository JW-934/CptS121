/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task1
* Date: September 29, 2021
* Description: This program reads four salary payments and determines which tax
*			   bracket the recipient falls into.
*/

#include "Lab5Task1.h"

double read_double(FILE* infile)
{
	double number = 0;

	fscanf(infile, "%lf", &number);

	return (number);
}

double find_sum(double sal1, double sal2, double sal3, double sal4)
{
	return sal1 + sal2 + sal3 + sal4;
}

char determine_bracket(double sum)
{
	if (sum > 200000)
	{
		return 'h';
	}
	if (sum <= 200000 && sum >= 15000)
	{
		return 'm';
	}
	else 
	{
		return 'l';
	}
}