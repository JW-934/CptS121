/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Date: September 3, 2021, 9-10-21
* Description: Prompts for credits possible in 3 classes, corresponding grade points,
*			   then calculates cumulative GPA
*/

#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

#define PI 3.14159

// function declaration - function prototype
// double f(double x);
double get_gp(int class_num);
int calculate_sum_credits(int c1, int c2, int c3);
double calculate_gpa(double weighted_gp, double sum_credits);

int main(void)
{
	int credits1 = 0, credits2 = 0, credits3 = 0,
		sum_credits = 0;
	double gp1 = 0, gp2 = 0, gp3 = 0, weighted_gp = 0,
		gpa = 0;

	/*printf("Enter grade point for class 1: ");
	scanf("%lf", &gp1);*/

	gp1 = get_gp(1);

	printf("Enter credits for class 1: ");
	scanf("%d", &credits1);
	
	/*printf("Enter grade point for class 2: ");
	scanf("%lf", &gp2);*/

	gp2 = get_gp(2);
	
	printf("Enter credits for class 2: ");
	scanf("%d", &credits2);
	
	/*printf("Enter grade point for class 3: ");
	scanf("%lf", &gp3);*/

	gp3 = get_gp(3);

	printf("Enter credits for class 3: ");
	scanf("%d", &credits3);

	//sum_credits = credits1 + credits2 + credits3;

	sum_credits = calculate_sum_credits(credits1, credits2, credits3);

	weighted_gp = (gp1 * credits1) + (gp2 * credits2) + 
		(gp3 * credits3);

	gpa = calculate_gpa(weighted_gp, sum_credits);

	printf("GPA: %.2lf\n", gpa);


	//result = f(2);


	return 0;
}

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






