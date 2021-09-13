/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA2
* Date: September 8, 2021, Sept. 13, 2021
* Description: This program calculates series resistance, sales tax, pyramid volume,
*			   parallel resistance, character encoding, distance, and general equations
*/

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

#include <stdio.h>
#include <math.h>

int calculate_series_resistance(int r1, int r2, int r3);
char encode_char(char character, int shift);
double calculate_total_sales_tax(double sales_tax_rate, double item_cost);
double calculate_volume_pyramid(double l, double w, double h);
double calc_para_resist(int r1, int r2, int r3);
double find_distance(double x1, double y1, double x2, double y2);
double eval_general_eq(int a, double x, double y, double z);
