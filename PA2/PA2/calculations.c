/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA2
* Date: September 8, 2021, Sept. 13, 2021
* Description: This program calculates series resistance, sales tax, pyramid volume,
*			   parallel resistance, character encoding, distance, and general equations
*/

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