/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab11
* Date: November 10, 2021
* Description: This program computes and displays the total
*			   payroll for hourly employees at a company
*/

#include "Lab11.h"

int main(void)
{
	FILE* infile = fopen("payroll.txt", "r");

	Employee payroll[200];

	double sum, average, max, min;

	// Scans employee info from payroll.txt, calculates payments and populates
	// employees in array
	populate_emp_ary(payroll, infile);
	fclose(infile);
	//print_all_emp(payroll, 4);
	calc_payments(payroll, 4);
	//print_all_emp(payroll, 4);
	
	// Calculates sum, average, min, and max
	sum = sum_all_payments(payroll, 4);
	average = avg_payments(payroll, 4);
	min = min_payment(payroll, 4);
	max = max_payment(payroll, 4);

	// Opens and prints to paid.txt
	FILE* outfile = fopen("paid.txt", "w");

	fprintf(outfile, "Total: $%.2lf\n", sum);
	fprintf(outfile, "Average: $%.2lf\n", average);
	fprintf(outfile, "Max: $%.2lf\n", max);
	fprintf(outfile, "Min: $%.2lf\n", min);

	printf("paid.txt has been populated.\n");

	fclose(outfile);
}