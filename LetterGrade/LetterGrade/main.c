// This program is going to read 3 exam scores from
// a file, determine the letter grades for the exam scores.
// write the letter grades to another file.

// History: 9/17/21 - Discussed more file processing. Implemented
//                    our first piece of code to open an output
//                    file ("grades.txt") for writing. We also
//                    started discussing how to work with
//                    decision/conditional "if" statements.
//                    We did not complete our solution to
//                    the function determine_letter_grade ().
//                    we'll also need to optimize the solution
//                    eventually!

#include "LetterGrade.h"

int main(void)
{
	int score1 = 0, score2 = 0, score3 = 0;
	FILE* infile = NULL, * outfile = NULL;              // in/outfile is just the file's identifier (using the null pointer here)
	char letter_grade1 = '\0', letter_grade2 = '\0',
		letter_grade3 = '\0';

	infile = fopen("scores.dat", "r");			// "filename", "mode"
	outfile = fopen("letterGrade.dat", "w");	// write - output file

	//score1 = fscanf(infile, "%d", &score1);
	fscanf(infile, "%d", &score1);
	fscanf(infile, "%d", &score2);
	fscanf(infile, "%d", &score3);

	letter_grade1 = determine_letter_grade(score1);
	fprintf(outfile, "grade 1: %c\n", letter_grade1);

	// we are not done with determining all letter grades. we'll
	// finish Monday, 9/20

	fclose(infile);
	fclose(outfile);

	return 0;
}