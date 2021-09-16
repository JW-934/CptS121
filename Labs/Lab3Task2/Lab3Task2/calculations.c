/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab3Task2
* Date: September 15, 2021
* Description: This program calculates a projectile's flight height and time.
*/

#include "header.h"

double get_theta()
{
	double theta = 0;
	printf("Enter the angle (radians) of elevation: ");
	scanf("%lf", &theta);

	return theta;
}

double get_distance()
{
	double distance = 0;
	printf("Enter the distance (ft) to target: ");
	scanf("%lf", &distance);

	return distance;
}

double get_velocity()
{
	double velocity = 0;
	printf("Enter the projectile velocity (ft/sec): ");
	scanf("%lf", &velocity);

	return velocity;
}

double calculate_time(double theta, double distance, double velocity)
{
	return ((distance) / (velocity * cos(theta)));
}

double calculate_height(double velocity, double theta, double time)
{
	return(velocity * sin(theta) * time - ((G * (time * time)) / 2));
}

double display_time_and_height(double time, double height)
{
	printf("Flight time (sec): %lf\n", time);
	printf("Height of impact: %lf", height);
}