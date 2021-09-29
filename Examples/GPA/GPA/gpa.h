/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Date: 9-13-21
* Description: Prompts for credits possible in 3 classes, corresponding grade points,
*			   then calculates cumulative GPA
*/

//#pragma once usually in here

//guard code
#ifndef GPA_H //if not defined,  (can be any name) 
#define GPA_H 

#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

#define PI 3.14159

// function declaration - function prototype
// double f(double x);
double get_gp(int class_num);
int calculate_sum_credits(int c1, int c2, int c3);
double calculate_gpa(double weighted_gp, double sum_credits);


#endif 