/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task1
* Date: September 29, 2021
* Description: This program reads four salary payments and determines which tax
*			   bracket the recipient falls into.
*/

#include "Lab5Task1.h"

int main(void)
{
	double sal1 = 0, sal2 = 0, sal3 = 0, sal4 = 0, total = 0;
	
	FILE* infile = fopen("salaries.txt", "r");

	sal1 = read_double(infile);
	sal2 = read_double(infile);
	sal3 = read_double(infile);
	sal4 = read_double(infile);

	fclose(infile);

	total = find_sum(sal1, sal2, sal3, sal4);

	printf("Tax Bracket: %c", determine_bracket(total));
}