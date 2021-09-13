/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Date: September 3, 2021, 9-10-21, 9-13-21
* Description: Prompts for credits possible in 3 classes, corresponding grade points,
*			   then calculates cumulative GPA
*/

#include "gpa.h" // User defined files use double quotes

/*double f(double x) // function header
{
	return x * x;
}
*/

double get_gp(int class_num)
{
	double gp = 0;

	printf("Enter grade point for class %d: ", class_num);
	scanf("%lf", &gp);


	return gp;
}

int calculate_sum_credits(int c1, int c2, int c3)
{
	return c1 + c2 + c3;
}

double calculate_gpa(double weighted_gp, double sum_credits)
{
	double gpa = 0;

	gpa = weighted_gp / sum_credits;

	return gpa;
}