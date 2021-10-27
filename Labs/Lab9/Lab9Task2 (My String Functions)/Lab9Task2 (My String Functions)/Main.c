/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab9Task2
* Date: October 27, 2021
* Description: This program tests my_strcpy, my_strcat, my_strcmp, and my_strlen.
*/

#include "Lab9Task2.h"

int main(void)
{
	// my_strcmp test ///////////////////////////////////////////////////////////
	char string[] = "B", string2[] = "C", string3[] = "A", string4[] = "B";

	char* str = string, * str2 = string2, * str3 = string3, * str4 = string4;

	int result = my_strcmp(str, str2);
	int result2 = my_strcmp(str, str3);
	int result3 = my_strcmp(str, str4);
	
	printf("Before strcmp: %d\n", result);
	printf("\nAfter strcmp: %d\n", result2);
	printf("\nSame strcmp: %d\n\n", result3);

	// my_strcpy test //////////////////////////////////////////////////////////
	char source[] = "Source text", destination[] = "Destination text";

	char* src = source, * dest = destination;

	dest = my_strcpy(dest, src);

	printf("strcpy destination string: ");
	puts(dest);

	// my_strcat test /////////////////////////////////////////////////////////
	char source2[] = "Source text", destination2[60] = "Destination text";

	char* src2 = source2, * dest2 = destination2;

	dest2 = my_strcat(dest2, src2);

	printf("\nstrcat destination string: ");
	puts(dest2);

	//printf("%d", my_strlen(dest2));

	return 0;
}