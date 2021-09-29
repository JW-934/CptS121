/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task2
* Date: September 29, 2021
* Description: This program reads an unknown number of real values 
*			   from a file called “data.txt”. Calculates the average of the real 
*			   numbers. Outputs the average of the real numbers to a file called “output.txt”.
*/

#include "Lab5Task2.h"

int main(void)
{
	FILE* infile = NULL;
	FILE* outfile = NULL;

	infile = fopen("data.txt", "r");
	outfile = fopen("output.txt", "w");

	double total = 0, average = 0, values = 0;
	
	// Read and sum values from file
	while (!feof(infile))
	{
		total = total + read_double(infile);
		++values;
	}

	// Prints average to output.txt
	fprintf(outfile, "Average: %lf\n", (total / values));

	fclose(infile);
	fclose(outfile);
}