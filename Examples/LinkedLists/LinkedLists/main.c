// This example illustrates how to work
// with dynamic memory and linked lists.

// History: 12/10 - Introduced command line arguments, which
//          are arguments passed into main ().
//          12/6 - Started implementing insert_in_order (). It's not
//          finished yet. Will finish on 12/8.
//          12/3 - Added error checking to make_node (). Implemented
//          insert_at_front () and print_list ().
//          12/1 - started discussing linked lists. designed a 
//          a struct for a Node that will contain grocery store
//          items. implemented a version of make_node ().
//          11/29 - started discussing dynamic memory and malloc ().
//          we request memory at runtime and try to allocate
//          only the necessary memory for our program as we need
//          it.

#include "LinkedList.h"

int main(int argc, char *argv[])
{
	Node* head_ptr = NULL; // list is empty
	int success = 0, num = atoi(argv[1]), count = 0;
	char item[25] = "", *return_ptr = NULL;

	printf("argc: %d, argv[0]: %s, argv[1]: %s\n", argc, argv[0],
		argv[1]);

	/*success = insert_at_front(&head_ptr, "bananas");
	success = insert_at_front(&head_ptr, "steak");
	success = insert_at_front(&head_ptr, "milk");*/
	//printf("--> %s -->\n", head_ptr->grocery_item);
	while (count < num)
	{
		printf("Enter an item: ");
		fgets(item, 25, stdin);
		success = insert_in_order(&head_ptr, item);
		++count;
	}
	/*success = insert_in_order(&head_ptr, "steak");
	success = insert_in_order(&head_ptr, "bananas");
	success = insert_in_order(&head_ptr, "milk");
	success = insert_in_order(&head_ptr, "zucchini");
	success = insert_in_order(&head_ptr, "milk");*/
	print_list(head_ptr);
	return_ptr = delete_front(&head_ptr, item);
	puts("item removed: ");
	puts(return_ptr);
	putchar('\n');
	print_list(head_ptr);
	//int* mem_ptr = NULL;

	//int number = 0, option = 0, count = 0;

	//printf("Enter the number of integers you want on heap: ");
	//scanf("%d", &number);

	//while (count < number)
	//{
	//	// this will cause ultimately a memory "leak"
	//	mem_ptr = malloc(sizeof(int)); // void * - generic pointer
	//	
	//	printf("What integer do you want to use as indirect value: ");
	//	scanf("%d", &option);
	//	*mem_ptr = option;
	//	printf("Number on heap: %d\n", *mem_ptr);

	//	++count;
	//}

	////int n = 42

	////mem_ptr = &n;

	return 0;
}