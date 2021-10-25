// We are practicing with arrays.

// History: 10/22 - We discussed 2-D arrays. 2-D arrays
//                  are represented logically by
//                  rows and columns!
//          10/20 - We started discussing strings. We
//                  discussed and implemented 3 different
//                  ways of implementing strings. We
//                  also looked into boundary issues
//                  with strings and various stdio functions
//                  that allow for us to read strings
//                  from the keyboard and write strings
//                  to the display. Introduced <string.h>.
//                  Briefly discovered how to copy
//                  strings using strcpy ().
//          10/18 - Discussed an implemented the
//                  selection sort algorithm. We 
//                  also discussed constant pointers
//                  and how they're similar to the
//                  context of what the name of an array
//                  represents!
//          10/15 - Discussed potential arrays required
//                  for PA 5. Discussed and implemented
//                  the bubble sort algorithm.
//          10/13 - Implemented binary_search (). Recall
//                  binary search requires that items
//                  it searches are in order. In our
//                  version we implemented a solution
//                  expecting numbers to be in ascending
//                  order.
//          10/11 - Implemented sequential_search (). Sequential
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
	int numbers[10] = { 5, 10, 1, 7, -1, 16, 8, 7 },
		found = 0, 
		target_index = 0, list[] = {2, 4, 6, 9, 11};

	// this is a 2-D array
	char strs[MAX_ROWS][MAX_COLS] = { {'a', 'b', 'c'}, 
	{'d', 'e'} };

	init_2D_array(strs, MAX_ROWS, MAX_COLS);

	char str[25] = {'s', 't', 'r', 'i', 'n', 'g', '\0'}; // can modify contents of string
	char str2[] = "string2"; // can modify contents of string
	const char* str3 = "string3"; // characters are in immutable memory - can't be changed // address can be changed just not the values

	str3 = my_strcat(str, str3); 
	puts(str3); //automatically adds a newline
	fputs(str, stdout); // stdout is the screen // fputs does not add a newline

	printf("\nstrlen (str): %d\n", strlen(str)); // strlen counts all characters besides \0

	// strcmp ()
	// if (str == str2) won't work, use strcmp()
	printf("strcmp (cat, do): %d\n", strcmp("cat", "do"));

	/*system("pause");
	system("cls");*/

	//str = "new string";
	strcpy(str, "new string"); // arr = arr2;
	puts(str);
	// strncpy () copies exactly n number of characters
	// from source string to destination string.
	strncpy(str, "cat", 4); // str can contain 15 characters max
	puts(&str[4]);

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
	int * const ptr = numbers; // similar to what the
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