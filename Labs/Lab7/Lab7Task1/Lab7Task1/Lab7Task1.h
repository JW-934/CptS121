/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab7Task1
* Date: October 13, 2021
* Description: This program computes the total charge
*				for a customer based on the number of hours of connection
*				time used in a month.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void calc_charges(double hours_used, double* charges_ptr, double* avg_cost_per_hour_ptr);

int read_int(FILE* infile);

double read_double(FILE* infile);
double round_money(double money);