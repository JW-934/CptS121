/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task1
* Date: September 22, 2021
* Description: This program calculates the user's recommended daily calories.
*/

#include "Header.h"

int main(void)
{
	FILE* infile = NULL;
	infile = fopen("Data.txt", "r");
	
	int activity = get_activity();		// Prompt for activity

	char gender = get_gender(infile);	//Read gender
	double age = get_age(infile);		//Read age
	double weight = get_weight(infile);	//Read weight
	double height = get_height(infile);	//Read height

	double bmr = calculate_BMR(age, gender, weight, height);

	double calories = calculate_daily_calories(activity, bmr);

	printf("Recommended Daily Calories: %.1lf\n", calories);

	fclose(infile);
}