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
	//if (score >= 90) // (conditional statement - relational - Boolean)
	//{
	//	// if statement body
	//	letter_grade = 'A';
	//}
	//if ((score < 90) && (score >= 80)) // && logical AND (compound condition)
	//{
	//	letter_grade = 'B';
	//}
	//if (score >= 70 && score < 80)
	//{
	//	letter_grade = 'C';
	//}
	//if (score >= 60 && score < 70)
	//{
	//	letter_grade = 'D';
	//}
	//if (score < 60)
	//{
	//	letter_grade = 'F';
	//}
	
	
	if (score >= 90)
	{
		letter_grade = 'A';
	}
	else if (score < 90) // else only activated if prior if is false
	{
		letter_grade = 'B';
	}
	else if (score >= 70)
	{
		letter_grade = 'C';
	}
	else if (score >= 60)
	{
		letter_grade = 'D';
	}
	else // else does not use a condition, this one only runs if all others false
	{
		letter_grade = 'F';
	}
	
	
	// we are not done with this solution yet! we know
	// we're going to need more if statements for the other
	// score ranges!
	// end of solution 1

	return letter_grade;
}