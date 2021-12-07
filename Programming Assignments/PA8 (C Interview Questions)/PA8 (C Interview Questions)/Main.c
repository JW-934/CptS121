/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA8
* Date: December 3, 2021, December 5, 2021
* Description: This program consists of numerous interview question functions.
*/

#include "PA8.h"

int main(void)
{
	//my_str_n_cat////////////////////////////////////////////////////
	char str1[20] = { "String" }, str2[20] = { "String2" };
	char* str1_ptr = str1, * str2_ptr = str2;

	printf("Dest: ");
	puts(str1_ptr);
	putchar('\0');
	printf("Src: ");
	puts(str2_ptr);
	putchar('\0');

	str1_ptr = my_str_n_cat(str1_ptr, str2_ptr, 3);

	printf("Dest: ");
	puts(str1_ptr);
	putchar('\0');
	printf("Src: ");
	puts(str2_ptr);
	putchar('\0');
	////////////////////////////////////////////////////////////////
	//binary_search/////////////////////////////////////////////////
	int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("Target(4) index : %d\n", binary_search(list, 4, 10));
	printf("Target(12) index : %d\n", binary_search(list, 12, 10));
	////////////////////////////////////////////////////////////////
	//bubble_sort/////////////////////////////////////////////////// unworking
	char* bubstr[4] = { "apple", "bowl", "dentist", "choose"};
	
	printf("%s %s %s %s\n", bubstr[0], bubstr[1], bubstr[2], bubstr[3]);

	bubble_sort(bubstr, 4);

	printf("%s %s %s %s\n", bubstr[0], bubstr[1], bubstr[2], bubstr[3]);
	///////////////////////////////////////////////////////////////
	//is_palindrome////////////////////////////////////////////////


	
	
	return 0;
}