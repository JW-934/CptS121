/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA3
* Date: September 20, 2021
* Description: This program calculates and stores GPA Mean, Class Standing Mean, Age Mean,
*			   GPA Standard Deviation, GPA Min, and GPA Max in an output file.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double read_double(FILE* infile);
int read_integer(FILE* infile);
double calculate_sum(double number1, double number2, double number3, double number4, double number5);
double calculate_mean(double sum, int number);
double calculate_deviation(double number, double mean);
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculate_standard_deviation(double variance);
double find_max(double number1, double number2, double number3, double number4, double number5);
double find_min(double number1, double number2, double number3, double number4, double number5);
void print_double(FILE* outfile, double number);
double get_gpa(FILE* infile);
int get_standing(FILE* infile);
double get_age(FILE* infile);