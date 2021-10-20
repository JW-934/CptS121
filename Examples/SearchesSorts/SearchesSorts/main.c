//// We are practicing with arrays.
//
//// History: 10/11 - Implemented sequential_search (). Sequential
////                  search navigates an array or list and 
////                  looks for a specific target value in the
////                  array. If it finds the target, then
////                  our version returns 1 for yes, we found it;
////                  0 otherwise. Our version also returns the
////                  index at which we found the target via
////                  an output parameter or pointer. We started
////                  discussing another algorith called binary
////                  search.
//
//#include "SearchesSorts.h"
//
//int main(void)
//{
//	int numbers[10] = { 10, 1, 5, 7, -1, 16, 8, 7}, found = 0, target_index = 0, list[] = {2, 4, 6, 9, 11};
//
//	const int* const ptr = numbers; // stores a constant address to an integer (assigns address of array to ptr)
//
//	int* sort_ptr = NULL;
//		// if const int* const ptr then it cannot be edited
//		// ptr[2] == numbers[2]
//
//
//
//
//		//found = sequential_search(&numbers[0], 4, 7, &target_index); // array names are pointers
//		//found = sequential_search(&numbers[0], 4, 13, &target_index);
//
//		//found = binary_search(list, 5, 11, &target_index); // array names are pointers (you can put in an array with name, or &name[0])
//		//found = binary_search(&list[0], 5, 12, &target_index);
//
//
//		//ptr = bubble_sort(numbers, 8);
//
//	sort_ptr = bubble_sort(numbers, 8);
//
//
//	return 0;
//}

#include "SearchesSorts.h"

int main(void)
{
	int numbers[10] = { 5, 10, 1, 7, -1, 16, 8, 7 },
		found = 0,
		target_index = 0, list[] = { 2, 4, 6, 9, 11 };

	char str[15] = { 's', 't', 'r', 'i', 'n', 'g', '\0' }; // can modify contents of string
	char str2[] = "string2"; // can modify contents of string
	const char* str3 = "string3"; // characters are in immutable memory - can't be changed

	//str = "new string";
	strcpy(str, "new string");

	printf("str: %s\n", str);
	printf("str: %s\n", str2);
	str[3] = 'o';
	printf("str: %s\n", str);
	printf("str3: %s\n", str3);
	printf("str3[2]: %c\n", str3[2]);
	//	str3[3] = 'o'; // can't change character because immutable memory

	puts(str3);
	puts("Enter a string: ");
	//scanf("%s", str); // scanf () stops at whitespace with %s
	// grab an entire line or string with whitespaces
	//gets(str); // unsafe - can run beyond end of array
	fgets(str, 10, stdin); // reads at most 10 - 1 characters from the keyboard;
						   // allows for the '\0' to be entered at the end of the sequence.
	puts(str); // display a string to the screen


	// read right to left - ptr is a variable
	// that contains a constant address (the address
	// can't be modified) to an integer (the integer
	// can be modified)!
	int* const ptr = numbers; // similar to what the
							   // name of an array provides

	int* sort_ptr = NULL;

	//found = sequential_search(&numbers[0], 4, 7, &target_index);
	//found = sequential_search(&numbers[0], 4, 12, &target_index);

	//found = binary_search(list, 5, 11, &target_index);
	//found = binary_search(list, 5, 12, &target_index);

	// our version of bubble sort places the numbers
	// in the array in ascending order.
	// bubble sort returns a pointer to the sorted
	// array. however, we've not assigned a variable to 
	// it yet. we'll do this on Monday, 10/18.
	//numbers = bubble_sort(numbers, 8);
	//ptr = bubble_sort(numbers, 8);
	//sort_ptr = bubble_sort(numbers, 8);
	//printf("sort_ptr[2]: %d\n", sort_ptr[2]);
	//printf("numbers[2]: %d\n", numbers[2]);

	sort_ptr = selection_sort(numbers, 8);

	return 0;
}