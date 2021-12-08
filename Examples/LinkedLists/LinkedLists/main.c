// This example illustrates how to work
// with dynamic memory and linked lists.

// History: started discussing dynamic memory and malloc ().
//          we request memory at runtime and try to allocate
//          only the necessary memory for our program as we need
//          it/

#include "LinkedList.h"

int main(void)
{
	Node* head_ptr = NULL; // List is empty
	int success = 0;
	char item[25] = "", *return_ptr;

	//success = insert_at_front(&head_ptr, "bananas");
	//success = insert_at_front(&head_ptr, "steak");
	//success = insert_at_front(&head_ptr, "milk"); // last item is at front
	//printf("--> %s -->\n", head_ptr->grocery_item);

	success = insert_in_order(&head_ptr, "steak");
	success = insert_in_order(&head_ptr, "bananas");
	success = insert_in_order(&head_ptr, "milk");
	success = insert_in_order(&head_ptr, "zucchini");
	success = insert_in_order(&head_ptr, "milk"); // duplicates not ignored
	print_list(head_ptr); //does not currently print (replace later)
	return_ptr = delete_front(&head_ptr, item); // & because there will be modification
	puts("item removed: ");
	puts(return_ptr);
	puts('\n');
	print_list(head_ptr);

	//int* mem_ptr = NULL;
	////int n = 42;
	//int number = 0, count = 0, option = 0;

	//printf("Enter the number of integers you want to allocate space for: ");
	//scanf("%d", &number);

	//while (count < number)
	//{
	//	printf("Enter the value you want to store on heap: ");
	//	scanf("%d", &option);
	//	// right now we are allocating space on the heap, but
	//	// also generating memory "leaks" because we
	//	// are only using one pointer!!! we will learn how to 
	//	// fix this during lecture on Wednesday, 12/1.
	//	mem_ptr = malloc(sizeof(int)); // requests integer number of bytes from heap
	//	*mem_ptr = option; // set the indirect value of the pointer
	//	                   // to the number entered by the user.
	//	printf("Value stored on heap: %d\n", *mem_ptr);
	//	++count;
	//}

	//mem_ptr = malloc(sizeof(int)); // void * - generic pointer
	//*mem_ptr = 10;

	////mem_ptr = &n;


	return 0;
}