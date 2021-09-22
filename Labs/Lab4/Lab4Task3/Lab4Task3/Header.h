/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task3
* Date: September 22, 2021
* Description: This program calculates the average, maximum, or minimum of data from a file.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double calculate_average(double number1, double number2, double number3, double number4, double number5);
double find_max(double number1, double number2, double number3, double number4, double number5);
double find_min(double number1, double number2, double number3, double number4, double number5);
double read_double(FILE* infile);
