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
	int numbers[10] = { 10, 1, 5, 7 }, found = 0, target_index = 0, list[] = {2, 4, 6, 9, 11};

	//found = sequential_search(&numbers[0], 4, 7, &target_index); // array names are pointers
	//found = sequential_search(&numbers[0], 4, 13, &target_index);

	//found = binary_search(list, 5, 11, &target_index); // array names are pointers (you can put in an array with name, or &name[0])
	//found = binary_search(&list[0], 5, 12, &target_index);

	// our version of bubble sort places the numbers
	// in the array in ascending order.
	// bubble sort returns a pointer to the sorted
	// array. however, we've not assigned a variable to 
	// it yet. we'll do this on Monday, 10/18.
	bubble_sort(numbers, 8);

	return 0;
}