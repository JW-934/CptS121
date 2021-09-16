/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab3Task2
* Date: September 15, 2021
* Description: This program calculates a projectile's flight height and time.
*/

#define _CRT_SECURE_NO_WARNINGS
#define G 32.17

#include <stdio.h>
#include <math.h>

double get_theta();
double get_distance();
double get_velocity();

double calculate_time(double theta, double distance, double velocity);
double calculate_height(double velocity, double theta, double time);

double display_time_and_height(double time, double height);