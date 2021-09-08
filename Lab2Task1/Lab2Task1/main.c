/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab2Task1
* Date: September 8, 2021
* Description: This program outputs the equation 
*			   of the perpendicular bisector of the line segment 
*			   between two points, calculates BMI, and calculates
*			   BCS Score.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	// Perpendicular bisector calculations
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, slope = 0, midx = 0, midy = 0, bisector_slope = 0,
		bisector_yint = 0;
	
	// Prompt for points
	printf("Enter the coordinates of two points (x, y x2, y2): ");
	scanf("%lf, %lf %lf, %lf", &x1, &y1, &x2, &y2);

	// Find slope
	slope = (y2 - y1) / (x2 - x1);

	// Find midpoint
	midx = (x1 + x2) / 2;
	midy = (y1 + y2) / 2;

	// Find slope of perpendicular bisector
	bisector_slope = (double)-1 / slope;

	// Find y intercept of bisector
	bisector_yint = midy - (bisector_slope * midx);
	
	// Display result
	printf("Equation of perpendicular bisector for points (%.1lf, %.1lf) and (%.1lf, %.1lf): y = %.1lfx + %.1lf", x1, y1, x2, y2, bisector_slope, bisector_yint);
	
	// BMI Calculations
	double weight = 0, height = 0, height_inches = 0;
	
	// Prompt for weight and height
	printf("Enter your weight(lbs) and height(ft) (w h): ");
	scanf("%lf %lf", &weight, &height);
	
	// Convert feet to inches
	height_inches = height * 12;

	// Display BMI
	printf("BMI: %lf", (weight / (height_inches * height_inches)) * 703);

	//BCS Score
	
	double harris_poll = 0, coaches_poll = 0, computer_ranking = 0;
	
	
	//Prompt for harris poll, coaches poll, and computer ranking
	printf("Enter harris poll, coaches poll, and computer ranking scores (harris, coaches, computer): ");
	scanf("%lf, %lf, %lf", &harris_poll, &coaches_poll, &computer_ranking);

	//Display BCS Score
	printf("BCS Score: %lf", ((harris_poll / 2850.0) + (coaches_poll / 1475.0) + computer_ranking) / 3.0);

	return 0;
}