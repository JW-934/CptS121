/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA2
* Date: September 8, 2021
* Description: This program 
*/

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

#include <stdio.h>
#include <math.h>

int calculate_series_resistance(int r1, int r2, int r3);
double calculate_total_sales_tax(double sales_tax_rate, double item_cost);
double calculate_volume_pyramid(double l, double w, double h);
double calc_para_resist(int r1, int r2, int r3);
char encode_char(char character, int shift);
double find_distance(double x1, double y1, double x2, double y2);
double eval_general_eq(int a, double x, double y, double z);

int main(void)
{
	////Total series resistance
	//int R1 = 0, R2 = 0, R3 = 0, series_resistance = 0;
	//
	//printf("Enter the values of 3 resistors connected in series (integers): ");
	//scanf("%d %d %d", &R1, &R2, &R3);
	//
	//series_resistance = calculate_series_resistance(R1, R2, R3);
	//printf("Series Resistance: %d", series_resistance);

	////Total Sales Tax
	//double item = 0, tax = 0, total_tax = 0;

	//printf("Enter item cost and tax rate percentage (cost, tax):");
	//scanf("%lf, %lf", &item, &tax);

	//total_tax = calculate_total_sales_tax(tax, item);
	//printf("Total tax: %.2lf", total_tax);

	////Volume of right rectangular pyramid
	//double length = 0, width = 0, height = 0, volume = 0;

	//printf("Enter the dimensions of the right rectangular pyramid (l, w, h): ");
	//scanf("%lf, %lf, %lf", &length, &width, &height);

	//volume = calculate_volume_pyramid(length, width, height);
	//printf("Volume: %.2lf", volume);

	////Total parallel resistance
	//int newR1 = 0, newR2 = 0, newR3 = 0;
	//double parallel_resist = 0;

	//printf("Enter the values of 3 resistors connected in parallel (integers): ");
	//scanf("%d %d %d", &newR1, &newR2, &newR3);

	//parallel_resist = calc_para_resist(newR1, newR2, newR3);
	//printf("Total parallel resistance: %.2lf", parallel_resist);

	////Character encoding
	//char plaintext = ' ', new_char = ' ';
	//int shift = 0;

	//printf("Enter one character and a shift integer (a, shift): ");
	//scanf("%c, %d", &plaintext, &shift);

	//new_char = encode_char(plaintext, shift);
	//printf("Encoded Character: %c", new_char);

	////Distance between two points
	//double x1 = 0, x2 = 0, y1 = 0, y2 = 0, distance = 0;

	//printf("Enter two coordinate points (x1, y1 x2, y2):");
	//scanf("%lf, %lf %lf, %lf", &x1, &y1, &x2, &y2);

	//distance = find_distance(x1, y1, x2, y2);
	//printf("Distance between points: %.2lf", distance);

	//General Equation
	int a = 0;
	double x = 0, y = 0, z = 0, result = 0;
	printf("General equation: enter a, x, y, z (a is an integer): ");
	scanf("%d, %lf, %lf, %lf", &a, &x, &y, &z);

	result = eval_general_eq(a, x, y, z);
	printf("Result: %.2lf", result);









}

int calculate_series_resistance(int r1, int r2, int r3)
{
	return (r1 + r2 + r3);
}

double calculate_total_sales_tax(double sales_tax_rate, double item_cost)
{
	return(item_cost * (sales_tax_rate / 100));
}

double calculate_volume_pyramid(double l, double w, double h)
{
	return((l * w * h) / 3.0);
}

double calc_para_resist(int r1, int r2, int r3)
{
	return (1.0 / ((1.0 / r1) + (1.0 / r2) + (1.0 / r3)));
}

char encode_char(char character, int shift) 
{
	return((character - 'a') + 'A' - shift);
}

double find_distance(double x1, double y1, double x2, double y2)
{
	return(sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2))));
}

double eval_general_eq(int a, double x, double y, double z)
{
	return((y / (3.0 / 17) - z + (x / (a % 2)) + PI));
}








