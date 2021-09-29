/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task2
* Date: September 29, 2021
* Description: This program reads an unknown number of real values
*			   from a file called “data.txt”. Calculates the average of the real
*			   numbers. Outputs the average of the real numbers to a file called “output.txt”.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double read_double(FILE* infile);