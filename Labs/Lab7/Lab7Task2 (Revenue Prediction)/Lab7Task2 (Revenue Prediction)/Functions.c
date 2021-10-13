/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab7Task2
* Date: October 13, 2021
* Description: This program predicts when revenue will equal/exceed $1 Trillion
*				and generates a table with estimated revenues for every year from
*				1984 to when revenue >= $1 Trillion
*/

#include "Lab7Task2.h"

// R is in millions
double calc_revenue(int years_since_1984)
{
	return (203.265 * pow(1.071, years_since_1984)); 
}

int predict_year(int target_revenue)
{
	int found = 0, index = 1, year;
	double revenue;

	do
	{
		revenue = calc_revenue(index);
		if (revenue >= target_revenue)
		{
			year = index + 1984;
			found = 1;
		}
		else 
		{
			index++;
		}

	} while (found == 0);
	return year;
}