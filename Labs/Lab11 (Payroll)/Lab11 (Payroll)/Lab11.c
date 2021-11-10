/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab11
* Date: November 10, 2021
* Description: This program computes and displays the total
*			   payroll for hourly employees at a company
*/

#include "Lab11.h"

// Scans payroll.txt for employee information and populates the array
void populate_emp_ary(Employee array[200], FILE* infile)
{
	int i = 0;
	char last_name[20];

	while (!feof(infile))
	{
		fscanf(infile, "%s", array[i].name);
		fscanf(infile, "%s", last_name);
		
		strcat(array[i].name, " ");
		strcat(array[i].name, last_name);

		fscanf(infile, " %c", &(array[i].title));
		fscanf(infile, "%lf", &(array[i].hours_worked));
		fscanf(infile, "%lf", &(array[i].payrate));

		++i;
	}
}

// Prints all fields of an Employee
void print_emp(Employee array[200], int employee)
{
	printf("\nname: %s\n", array[employee].name);
	printf("title: %c\n", array[employee].title);
	printf("hours: %.2lf\n", array[employee].hours_worked);
	printf("payrate: %.2lf\n", array[employee].payrate);
	printf("payment: %.2lf\n", array[employee].payment);
}

// Determines if employee has overtime and calculates their pay
void calc_payments(Employee array[200], int num_employees)
{
	for (int index = 0; index < num_employees; ++index)
	{
		double hours = array[index].hours_worked, overtime = 0, payment = 0;

		if (array[index].hours_worked > 80)
		{
			overtime = hours - 80;
			hours = 80;
		}

		if (array[index].title == 'M')
		{
			payment = (hours * array[index].payrate) + ((1.8 * array[index].payrate)* overtime);
		}
		else if (array[index].title == 'B')
		{
			payment = (hours * array[index].payrate) + ((1.5 * array[index].payrate) * overtime);
		}
		array[index].payment = payment;
	}
}

void print_all_emp(Employee array[200], int num_employees)
{
	for (int i = 0; i < num_employees; ++i)
	{
		print_emp(array, i);
	}
}

double sum_all_payments(Employee array[200], int num_employees)
{
	double sum = 0;

	for (int i = 0; i < num_employees; ++i)
	{
		sum += array[i].payment;
	}
	return sum;
}

double avg_payments(Employee array[200], int num_employees)
{
	double sum = 0;

	for (int i = 0; i < num_employees; ++i)
	{
		sum += array[i].payment;
	}
	return (sum / (double)num_employees);
}

double min_payment(Employee array[200], int num_employees)
{
	double min = array[0].payment;

	for (int i = 1; i < num_employees; ++i)
	{
		if (array[i].payment < min)
		{
			min = array[i].payment;
		}
	}
	return min;
}

double max_payment(Employee array[200], int num_employees)
{
	double max = array[0].payment;

	for (int i = 1; i < num_employees; ++i)
	{
		if (array[i].payment > max)
		{
			max = array[i].payment;
		}
	}
	return max;
}