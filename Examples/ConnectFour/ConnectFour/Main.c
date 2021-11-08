// This is the start of the game Connect 4.

// History: 11/8 - Modified the print_board () function
//                 print cells that have tokens as well.
//                 Created a function called place_token ()
//                 that writes a token color to a specific
//                 cell in the game_board. Please complete
//                 the rest of a version of Connect 4 from this
//                 starter code and send it to aofallon@wsu.edu
//                 by Friday, December 17, midnight for up to
//                 2% bonus credit! Please be sure to remove
//                 both debug folders and .zip the project before
//                 you send it via an attachment.
//          11/1 - Added two properties to our Board
//                 struct. Implemented functions
//                 init_board () and print_board ().
//          10/29 - Defined the main components
//                  for Connect 4. Check the ConnectFour.h
//                  file. The enumerated and struct
//                  types required are defined.

#include "ConnectFour.h"

int main(void)
{
	Board the_board = { {{{NONE, {0, 0},NO}}} };
	Token_color tok = BLACK;

	printf("sizeof struct board: %d\n", sizeof(Board));

	init_board(&the_board);
	// although we're not changing the board
	// in print_board, we're passing-by-pointer
	// so that a lot less memory is copied. we
	// try to preserve memory when we can.
	print_board(&the_board);

	place_token(&(the_board.game_board[5][0]), tok);

	print_board(&the_board);

	//printf("token color: %d\n", tok);

	return 0;
}