#include "ConnectFour.h"

int main(void)
{
	Board the_board;
	
	printf("sizeof struct board: %d\n", sizeof(Board));		// Board takes 680 bytes (use pointers to not use unnecessary memory)

	init_board(&the_board);

	print_board(&the_board);

	Token_color tok = RED;

	printf("token color: %d\n", tok);

	return 0;
}