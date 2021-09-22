/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab3Task1
* Date: September 15, 2021
* Description: This program calculates and displays BMI using functions
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_weight(void);
double get_height(void);
double convert_feet_to_inches(double height);
double calculate_bmi(double weight, double height_in);
void display_bmi(double bmi);

int main(void)
{
	double weight = 0, height_in_feet = 0, height_in_inches = 0, bmi = 0;
	
	weight = get_weight();
	height_in_feet = get_height();
	height_in_inches = convert_feet_to_inches(height_in_feet);

	bmi = calculate_bmi(weight, height_in_inches);

	display_bmi(bmi);
}

double get_weight()
{
	double weight = 0;
	printf("Enter your weight (lbs): ");
	scanf("%lf", &weight);
	
	return weight;
}

double get_height()
{
	double height = 0;
	printf("Enter your height (ft): ");
	scanf("%lf", &height);

	return height;
}

double convert_feet_to_inches(double height_in_feet)
{
	double height_in_inches = 0;

	height_in_inches = height_in_feet * 12.0;
	return height_in_inches;
}

double calculate_bmi(double weight, double height_in_inches)
{
	double bmi = 0;
	
	bmi = ((weight / (height_in_inches * height_in_inches)) * 703);

	return bmi;
}

void display_bmi(double bmi)
{
	printf("BMI: %.1lf\n", bmi);
}