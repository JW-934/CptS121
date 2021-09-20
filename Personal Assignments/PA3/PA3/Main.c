/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA3
* Date: September 20, 2021
* Description: This program
*/

#include "PA3.h"

int main(void)
{
	FILE* infile = NULL, * outfile = NULL;

	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat","w");

	//Mean of GPAs
	double gpa_sum = 0, gpa1 = 0, gpa2 = 0, gpa3 = 0, gpa4 = 0, gpa5 = 0, unused = 0, gpa_mean = 0;
		
	gpa1 = get_gpa(infile);
	gpa2 = get_gpa(infile);
	gpa3 = get_gpa(infile);
	gpa4 = get_gpa(infile);
	gpa5 = get_gpa(infile);

	gpa_sum = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
	
	gpa_mean = calculate_mean(gpa_sum, 5);
	
	fprintf(outfile, "%.2lf\n", gpa_mean);









	fclose(infile);
	fclose(outfile);
}