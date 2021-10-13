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

int main(void)
{
	FILE* infile = NULL; FILE* outfile = NULL;

	infile = fopen("Input.txt", "r");
	outfile = fopen("Output.txt", "w");

	int month, year, customer_num;
	double hours_used = 0, charges, avg_cost_per_hour, rounded_charges, rounded_avg_hourly_cost;

	month = read_int(infile);
	year = read_int(infile);
	
	while(!feof(infile))
	{
		// Read data from infile
		customer_num = read_int(infile);
		hours_used = read_double(infile);

		calc_charges(hours_used, &charges, &avg_cost_per_hour);

		rounded_charges = round_money(charges);
		rounded_avg_hourly_cost = round_money(avg_cost_per_hour);

		fprintf(outfile, "Customer #: %d\nTotal charges: $%.2lf\nAverage cost per hour: $%.2lf\n\n", customer_num, rounded_charges, rounded_avg_hourly_cost);

	}

	fclose(infile);
	fclose(outfile);

}