/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA2
* Date: September 8, 2021, Sept. 13, 2021
* Description: This program calculates series resistance, sales tax, pyramid volume,
*			   parallel resistance, character encoding, distance, and general equations
*/

#include "PA2.h"

int main(void)
{
	//Total series resistance
	int R1 = 0, R2 = 0, R3 = 0, series_resistance = 0;
	
	printf("Enter the values of 3 resistors connected in series (integers): ");
	scanf("%d %d %d", &R1, &R2, &R3);
	
	series_resistance = calculate_series_resistance(R1, R2, R3);
	printf("Series Resistance: %d\n", series_resistance);

	//Total Sales Tax
	double item = 0, tax = 0, total_tax = 0;

	printf("Enter item cost and tax rate percentage (cost, tax): ");
	scanf("%lf, %lf", &item, &tax);

	total_tax = calculate_total_sales_tax(tax, item);
	printf("Total tax: %.3lf\n", total_tax);

	//Volume of right rectangular pyramid
	double length = 0, width = 0, height = 0, volume = 0;

	printf("Enter the dimensions of the right rectangular pyramid (l, w, h): ");
	scanf("%lf, %lf, %lf", &length, &width, &height);

	volume = calculate_volume_pyramid(length, width, height);
	printf("Volume: %.3lf\n", volume);

	//Total parallel resistance
	int newR1 = 0, newR2 = 0, newR3 = 0;
	double parallel_resist = 0;

	printf("Enter the values of 3 resistors connected in parallel (integers): ");
	scanf("%d %d %d", &newR1, &newR2, &newR3);

	parallel_resist = calc_para_resist(newR1, newR2, newR3);
	printf("Total parallel resistance: %.3lf\n", parallel_resist);

	//Character encoding
	char plaintext = ' ', new_char = ' ';
	int shift = 0;

	printf("Enter one character and a shift integer (a, shift): ");
	scanf(" %c, %d", &plaintext, &shift);

	new_char = encode_char(plaintext, shift);
	printf("Encoded Character: %c\n", new_char);

	//Distance between two points
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, distance = 0;

	printf("Enter two coordinate points (x1, y1 x2, y2):");
	scanf("%lf, %lf %lf, %lf", &x1, &y1, &x2, &y2);

	distance = find_distance(x1, y1, x2, y2);
	printf("Distance between points: %.3lf\n", distance);

	//General Equation
	int a = 0;
	double x = 0, y = 0, z = 0, result = 0;
	printf("General equation: enter a, x, y, z (a is an integer): ");
	scanf("%d, %lf, %lf, %lf", &a, &x, &y, &z);

	result = eval_general_eq(a, x, y, z);
	printf("Result: %.3lf\n", result);
}