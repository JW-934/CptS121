#include "Pointers.h"

//n1 and n2 are input parameters
//result and remainder pointers are output parameters
void divide(int n1, int n2, int* result_ptr, int* rem_ptr)
{
	*result_ptr = n1 / n2; //* is the indirection operator/dereference operator (accesses indirect value)
	*rem_ptr = n1 % n2;
}

void roll_dice(int* die1_ptr, int* die2_ptr)
{
	*die1_ptr = rand() % 6 + 1;
	*die2_ptr = rand() % 6 + 1;
}

void print_array(int nums[], int number_of_items)
{
	int index = 0;

	for (index = 0; index < number_of_items; ++index) // If <=, would go past the end of the array
	{
		printf("Address: %d, nums[%d]: %d\n", &nums[index], index, nums[index]);
	}
}