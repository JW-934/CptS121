/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task1
* Date: September 22, 2021
* Description: This program calculates the user's recommended daily calories.
*/

#include "Header.h"

int get_activity()
{
	int activity;
	printf("1: Sedentary\n");
	printf("2: Low\n");
	printf("3: Moderate\n");
	printf("4: High\n");
	printf("5: Extra\n");
	
	printf("Choose your activity level: ");
	scanf("%d", &activity);

	return activity;
}

char read_char(FILE* infile)
{
	char c = '\0';

	fscanf(infile, "%c", &c);

	return (c);
}


char get_gender(FILE* infile)
{
	char gender = read_char(infile);

	return gender;
}

double get_age(FILE* infile)
{
	double age = read_double(infile);

	return age;
}

double read_double(FILE* infile)
{
	double number = 0;

	fscanf(infile, "%lf", &number);

	return (number);
}

double get_weight(FILE* infile)
{
	double weight = read_double(infile);

	return weight;
}

double get_height(FILE* infile)
{
	double height = read_double(infile);

	return height;
}

double calculate_BMR(double age, char gender, double weight, double height)
{
	double bmr;
	
	if (gender == 'W' || gender == 'w')
	{
		bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
	}
	else
	{
		bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
	}

	return bmr;
}

double calculate_daily_calories(int activity, double bmr)
{
	double calories;
	
	if (activity == 1)
	{
		calories = bmr * 1.2;
	}
	if (activity == 2)
	{
		calories = bmr * 1.375;
	}
	if (activity == 3)
	{
		calories = bmr * 1.55;
	}
	if (activity == 4)
	{
		calories = bmr * 1.725;
	}
	if (activity == 5)
	{
		calories = bmr * 1.9;
	}
	return calories;
}

