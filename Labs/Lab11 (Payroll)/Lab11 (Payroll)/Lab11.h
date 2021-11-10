/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab11
* Date: November 10, 2021
* Description: This program computes and displays the total 
*			   payroll for hourly employees at a company
*/

#ifndef LAB11_H

#define LAB11_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct employee
{
    char name[100];      // employee's name - last, first
    char title;          // title 'B' or 'M'
    double hours_worked; // total number of hours worked
    double payrate;      // pay rate per hour
    double payment;      // total payment for the pay period – you will compute!
} Employee;

int populate_emp_ary(Employee array[200], FILE* infile);

void print_emp(Employee array[200], int employee);
void calc_payments(Employee array[200], int num_employees);
void print_all_emp(Employee array[200], int num_employees);

double sum_all_payments(Employee array[200], int num_employees);
double avg_payments(Employee array[200], int num_employees);
double min_payment(Employee array[200], int num_employees);
double max_payment(Employee array[200], int num_employees);






#endif
