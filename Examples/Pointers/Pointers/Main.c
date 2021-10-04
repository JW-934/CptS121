#include "Pointers.h"

int main(void)
{
	int num1 = 10, num2 = 3, result = 0, rem = 0;

	printf("Before num1: %d, num2: %d, result: %d, rem:%d\n", num1, num2, result, rem);
	divide(num1, num2, &result, &rem);
	printf("After num1: %d, num2: %d, result: %d, rem:%d\n", num1, num2, result, rem);

	return 0;
}