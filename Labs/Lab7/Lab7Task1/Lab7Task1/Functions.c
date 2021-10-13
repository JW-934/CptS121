/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab7Task1
* Date: October 13, 2021
* Description: This program computes the total charge
*				for a customer based on the number of hours of connection
*				time used in a month.
*/

#include "Lab7Task1.h"

void calc_charges(double hours_used, double* charges_ptr, double* avg_cost_per_hour_ptr)
{
	double charges = 0, temp_hours_used;

	temp_hours_used = hours_used;
	
	if (hours_used >= 10)
	{
		charges += 79.90;
		temp_hours_used -= 10;

		charges += temp_hours_used * 1.99;
	}
	else
	{
		charges = temp_hours_used * 7.99;
	}
	*charges_ptr = charges;
	*avg_cost_per_hour_ptr = charges / hours_used;
}

double read_double(FILE* infile)
{
	double number = 0;

	fscanf(infile, "%lf", &number);

	return (number);
}

int read_int(FILE* infile)
{
	int number = 0;

	fscanf(infile, "%d", &number);

	return (number);
}

double round_money(double money)
{
	return floor((money * 100) + 0.5) / 100; // floor cuts off the decimal places but keeps it a double
}