/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab5Task4
* Date: September 29, 2021
* Description: This program reads all numbers from Data.txt then calculates
*			   the maximum and minimum values.
*/

#include "Lab5Task4.h"

int main(void)
{
	FILE* infile = NULL;
	FILE* outfile = NULL;

	double max, min, number = 0;

	infile = fopen("Data.txt", "r");

	fscanf(infile, "%lf", &max);
	fscanf(infile, "%lf", &min);

	fclose(infile);

	// Finds maximum
	for (infile = fopen("Data.txt", "r"); !feof(infile); fscanf(infile, "%lf", &number))
	{
		if (number > max)
		{
			max = number;
		}
	}
	fclose(infile);

	printf("Maximum: %lf\n", max);

	// Finds minimum
	for (infile = fopen("Data.txt", "r"); !feof(infile); fscanf(infile, "%lf", &number))
	{
		if (number < min)
		{
			min = number;
		}
	}
	fclose(infile);

	printf("Minimum: %lf\n", min);

	return 0;
}