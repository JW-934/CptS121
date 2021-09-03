/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021
* Programming Assignment: PA1
* Date: September 2, 2021
*/

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592653
#include <stdio.h>
#include <math.h>
 
int main(void)
{
//1. Total series resistance
	int R1 = 0, R2 = 0, R3 = 0;

	printf("Enter the values of 3 resistors connected in series (integers): ");
	scanf("%d %d %d", &R1, &R2, &R3);
	printf("Total series resistance: %d\n", (R1 + R2 + R3));

//2. Sales tax
	double item = 0, tax = 0, total = 0;
	
	printf("Enter item cost and tax rate percentage (cost, tax):");
	scanf("%lf, %lf", &item, &tax);
	printf("Total tax: %lf\n", (item * (tax / 100)));

//3. Volume of a right rectangular pyramid
	double length = 0, width = 0, height = 0;
	
	printf("Enter the dimensions of the right rectangular pyramid (l, w, h): ");
	scanf("%lf, %lf, %lf", &length, &width, &height);
	printf("The volume of the pyramid is: %lf\n", (length * width * height) / 3);
	
//4. Total parallel resistance
	int newR1 = 0, newR2 = 0, newR3 = 0;

	printf("Enter the values of 3 resistors connected in parallel (integers): ");
	scanf("%d %d %d", &newR1, &newR2, &newR3);
	printf("Total parallel resistance: %f\n", ((double)1 / (((double)1 / newR1) + ((double)1 / newR2) + ((double)1 / newR3))));
	
//5. Character encoding
	char plaintext = ' ';
	int shift = 0;
	
	printf("Enter one character and a shift integer (a, shift): ");
	scanf("%c, %d", &plaintext, &shift);
	printf("Encoded character: %c\n", (plaintext - 'a') + 'A' - shift);
	
//6. Distance between two points
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	
	printf("Enter two coordinate points (x1, y1 x2, y2):");
	scanf("%lf, %lf %lf, %lf", &x1, &y1, &x2, &y2);
	printf("Distance between points : %lf\n", sqrt((pow(x1-x2, 2) + pow(y1-y2, 2))));
	
	
//7. General equation
	int a = 0;
	double x = 0, y = 0, z = 0;
	printf("Enter a, x, y, z (a is an integer): ");
	scanf("%d, %lf, %lf, %lf", &a, &x, &y, &z);
	printf("New y: %lf\n", (y / ((double)3 / 17) - z + (x / (a % 2)) + PI));
	
	return 0;
}
