/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task3
* Date: September 29, 2021
* Description: This program reads two numbers from data.txt and prints their greatest
*			   common divisor into output.txt.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int read_int(FILE* infile);
void print_int(FILE* outfile, int number);