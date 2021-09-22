/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task3
* Date: September 22, 2021
* Description: This program calculates the average, maximum, or minimum of data from a file.
*/

#include "Header.h"

double calculate_average(double number1, double number2, double number3, double number4, double number5)
{
	return (number1 + number2 + number3 + number4 + number5) / 5.0;
}

double find_max(double number1, double number2, double number3, double number4, double number5)
{
	double max;
	max = number1;

	if (number2 > max)
	{
		max = number2;
	}
	if (number3 > max)
	{
		max = number3;
	}
	if (number4 > max)
	{
		max = number4;
	}
	if (number5 > max)
	{
		max = number5;
	}

	return max;
}

double find_min(double number1, double number2, double number3, double number4, double number5)
{
	double min;
	min = number1;

	if (number2 < min)
	{
		min = number2;
	}
	if (number3 < min)
	{
		min = number3;
	}
	if (number4 < min)
	{
		min = number4;
	}
	if (number5 < min)
	{
		min = number5;
	}

	return min;
}

double read_double(FILE* infile)
{
	double number = 0;

	fscanf(infile, "%lf", &number);

	return (number);
}