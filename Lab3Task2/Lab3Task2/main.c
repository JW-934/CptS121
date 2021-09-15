/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab3Task2
* Date: September 15, 2021
* Description: This program calculates a projectile's flight height and time.
*/

#include "header.h"

int main(void)
{
	double theta = 0, distance = 0, velocity = 0, time = 0, height = 0;

	theta = get_theta();
	distance = get_distance();
	velocity = get_velocity();

	time = calculate_time(theta, distance, velocity);
	height = calculate_height(velocity, theta, time);

	display_time_and_height(time, height);
}