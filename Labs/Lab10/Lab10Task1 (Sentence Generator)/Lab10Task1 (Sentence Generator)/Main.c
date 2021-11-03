/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab10Task1
* Date: November 3, 2021
* Description: This program generates random sentences.
*/

#include "Lab10Task1.h"

int main(void)
{
	srand((unsigned int)time(NULL));

	char* article[] = {"the", "a", "one", "some", "any"};
	char* noun[] = { "boy", "girl", "dog", "town", "car" };
	char* verb[] = { "drove", "jumped", "ran", "walked", "skipped" };
	char* preposition[] = { "to", "from", "over", "under", "on" };

	for (int i = 0; i < 20; ++i)
	{
		print_rand_sentence(article, noun, verb, preposition);
	}
	/*printf("%d", rand_0_to_4());
	printf("%d", rand_0_to_4());
	printf("%d", rand_0_to_4());*/
}