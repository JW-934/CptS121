// We are practicing with arrays.

// History: 10/11 - Implemented sequential_search (). Sequential
//                  search navigates an array or list and 
//                  looks for a specific target value in the
//                  array. If it finds the target, then
//                  our version returns 1 for yes, we found it;
//                  0 otherwise. Our version also returns the
//                  index at which we found the target via
//                  an output parameter or pointer. We started
//                  discussing another algorith called binary
//                  search.

#include "SearchesSorts.h"

int main(void)
{
	int numbers[10] = { 10, 1, 5, 7, -1, 16, 8, 7}, found = 0, target_index = 0, list[] = {2, 4, 6, 9, 11};

	const int* const ptr = numbers; // stores a constant address to an integer (assigns address of array to ptr)

	int* sort_ptr = NULL;
		// if const int* const ptr then it cannot be edited
		// ptr[2] == numbers[2]




		//found = sequential_search(&numbers[0], 4, 7, &target_index); // array names are pointers
		//found = sequential_search(&numbers[0], 4, 13, &target_index);

		//found = binary_search(list, 5, 11, &target_index); // array names are pointers (you can put in an array with name, or &name[0])
		//found = binary_search(&list[0], 5, 12, &target_index);


		//ptr = bubble_sort(numbers, 8);

	sort_ptr = bubble_sort(numbers, 8);


	return 0;
}