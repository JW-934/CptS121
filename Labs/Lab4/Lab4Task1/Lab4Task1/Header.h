/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task1
* Date: September 22, 2021
* Description: This program calculates the user's recommended daily calories.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int get_activity();
char get_gender(FILE* infile);
char read_char(FILE* infile);
double get_age(FILE* infile);
double read_double(FILE* infile);
double get_weight(FILE* infile);
double get_height(FILE* infile);
double calculate_BMR(double age, char gender, double weight, double height);
double calculate_daily_calories(int activity, double bmr);




