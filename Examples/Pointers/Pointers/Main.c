#include "Pointers.h"

int main(void)
{
	int num1 = 10, num2 = 3, result = 0, rem = 0;

	printf("Before num1: %d, num2: %d, result: %d, rem:%d\n", num1, num2, result, rem);
	divide(num1, num2, &result, &rem); // Must be & here not * (result and rem are ints not pointers)
	printf("After num1: %d, num2: %d, result: %d, rem:%d\n", num1, num2, result, rem);



	system("pause"); // Press any key to continue
	system("cls"); // Clear screen


	int die1 = 0, die2 = 0;
	int* ptr_die1 = &die1, * ptr_die2 = &die2; // NULL -> doesn't point to anything yet
	
	roll_dice (ptr_die1, ptr_die2);
	printf("die1: %d, die2: %d\n", *ptr_die1, *ptr_die2);

	return 0;
}