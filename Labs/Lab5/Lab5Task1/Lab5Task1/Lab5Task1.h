/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task1
* Date: September 29, 2021
* Description: This program reads four salary payments and determines which tax
*			   bracket the recipient falls into.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double read_double(FILE* infile);
double find_sum(double sal1, double sal2, double sal3, double sal4);
char determine_bracket(double sum);