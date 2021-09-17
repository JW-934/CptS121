#include "LetterGrade.h"

// precondition: score must be greater than or equal to 0
// precondition: score >= 0
char determine_letter_grade(int score) // function header
{
	char letter_grade = '\0';

	// Please note: our first solution (solution 1) to this function
	// will not be our optimal solution. we're learning
	// not only how to create conditional statements, but
	// to optimize the logic as well!

	// start of solution 1
	// Ranges: A - greater than or equal to 90
	if (score >= 90) // (conditional statement - relational - Boolean)
	{
		// if statement body
		letter_grade = 'A';
	}
	if ((score < 90) && (score >= 80)) // && logical AND (compound condition)
	{
		letter_grade = 'B';
	}
	// we are not done with this solution yet! we know
	// we're going to need more if statements for the other
	// score ranges!
	// end of solution 1

	return letter_grade;
}