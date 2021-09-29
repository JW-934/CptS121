/* Example of math libraries */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // printf(), scanf()
#include <math.h> // sqrt (), pow (), sin (), cos (), tan ()

int main(void)
{
	double d1 = 0.0;
	int i1 = 0;
	char character1 = '\0'; // \0 is the null character

	printf("Enter a double precision value: ");
	scanf("%lf", &d1);

	printf("sqrt (%lf) = %lf\n", d1, sqrt(d1));

	printf("Enter an int: ");
	scanf("%d", &i1);
	
	printf("pow (%d, %lf) = %lf\n", i1, d1, pow(i1, d1));
	
	return 0;
}