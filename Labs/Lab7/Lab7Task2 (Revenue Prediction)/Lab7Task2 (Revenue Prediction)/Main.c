/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab7Task2
* Date: October 13, 2021
* Description: This program predicts when revenue will equal/exceed $1 Trillion
*				and generates a table with estimated revenues for every year from
*				1984 to when revenue >= $1 Trillion
*/

#include "Lab7Task2.h"
int main(void)
{
	int trillion_year;
	
	FILE* outfile = NULL;
	outfile = fopen("Output.txt", "w");

	trillion_year = predict_year(1000000);

	for (int year = 1984; year <= trillion_year; ++year)
	{
		fprintf(outfile, "%d Revenue: $%.2lf\n", year, (calc_revenue(year - 1984)*1000000));
	}
	fclose(outfile);
}