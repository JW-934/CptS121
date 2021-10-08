#include "Pointers.h"

int main(void)
{
	int arr[4] = {5, 3, 1, -15};
	
	arr[0] = 10;
	arr[3] = 7;
	//arr[4] = 77; range is 0 to size - 1 so last index available is 3
	
	print_array(arr, 4); // No brackets in function calls, an arrays name is the address of the first element

	//int num1 = 10, num2 = 3, result = 0, rem = 0;

	//printf("Before num1: %d, num2: %d, result: %d, rem:%d\n", num1, num2, result, rem);
	//divide(num1, num2, &result, &rem); // Must be & here not * (result and rem are ints not pointers)
	//printf("After num1: %d, num2: %d, result: %d, rem:%d\n", num1, num2, result, rem);



	//system("pause"); // Press any key to continue
	//system("cls"); // Clear screen


	//int die1 = 0, die2 = 0;
	//int* ptr_die1 = &die1, * ptr_die2 = &die2; // NULL -> doesn't point to anything yet
	//
	//roll_dice (ptr_die1, ptr_die2);
	//printf("die1: %d, die2: %d\n", *ptr_die1, *ptr_die2);

	//die1 = 5;
	//die2 = 3;

	//if (die1 < die2)
	//{
	//	printf("test\n");
	//}

	return 0;
}