/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA3
* Date: September 20, 2021
* Description: This program calculates and stores GPA Mean, Class Standing Mean, Age Mean,
*			   GPA Standard Deviation, GPA Min, and GPA Max in an output file.
*/

#include "PA3.h"

int main(void)
{
	FILE* infile = NULL, * outfile = NULL;

	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat","w");

	//Mean of GPAs
	double gpa_sum, gpa1, gpa2, gpa3, gpa4, gpa5, unused, gpa_mean;
		
	gpa1 = get_gpa(infile);
	gpa2 = get_gpa(infile);
	gpa3 = get_gpa(infile);
	gpa4 = get_gpa(infile);
	gpa5 = get_gpa(infile);

	gpa_sum = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
	gpa_mean = calculate_mean(gpa_sum, 5);
	
	print_double(outfile, gpa_mean);

	//Mean of class standing
	infile = fopen("input.dat", "r");
	//int stand1, stand2, stand3, stand4, stand5;
	double stand_sum, stand_mean;

	int stand1 = get_standing(infile);
	int stand2 = get_standing(infile);
	int stand3 = get_standing(infile);
	int stand4 = get_standing(infile);
	int stand5 = get_standing(infile);

	// testing: printf("Stands: %d %d %d %d %d\n", stand1, stand2, stand3, stand4, stand5);

	stand_sum = calculate_sum(stand1, stand2, stand3, stand4, stand5);
	stand_mean = calculate_mean(stand_sum, 5);
	
	print_double(outfile, stand_mean);
	
	//Mean of ages
	infile = fopen("input.dat", "r");

	double age_sum, age_mean;

	double age1 = get_age(infile);
	double age2 = get_age(infile);
	double age3 = get_age(infile);
	double age4 = get_age(infile);
	double age5 = get_age(infile);

	age_sum = calculate_sum(age1, age2, age3, age4, age5);
	age_mean = calculate_mean(age_sum, 5);

	print_double(outfile, age_mean);

	//GPA Standard Deviation
	double deviation1, deviation2, deviation3, deviation4, deviation5, variance, standard_dev;

	deviation1 = calculate_deviation(gpa1, gpa_mean);
	deviation2 = calculate_deviation(gpa2, gpa_mean);
	deviation3 = calculate_deviation(gpa3, gpa_mean);
	deviation4 = calculate_deviation(gpa4, gpa_mean);
	deviation5 = calculate_deviation(gpa5, gpa_mean);

	variance = calculate_variance(deviation1, deviation2, deviation3, deviation4, deviation5, 5);
	
	standard_dev = calculate_standard_deviation(variance);
	
	print_double(outfile, standard_dev);
	
	//GPA Min
	double gpa_min;

	gpa_min = find_min(gpa1, gpa2, gpa3, gpa4, gpa5);
	
	print_double(outfile, gpa_min);
	
	//GPA Max
	double gpa_max;

	gpa_max = find_max(gpa1, gpa2, gpa3, gpa4, gpa5);
	
	print_double(outfile, gpa_max);
	
	
	fclose(infile);
	fclose(outfile);
}