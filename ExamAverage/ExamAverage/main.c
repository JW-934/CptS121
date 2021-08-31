/*
	Author: Jesse Watson
	Date: 8-30-21

	Description: This program prompts the user for 3
				 exam scores. Computes the average of
				 the scores. Displays the result.
*/

#define _CRT_SECURE_NO_WARNINGS // Ignore error

#include <stdio.h> // printf (), scanf ()

int main(void)
{
	int score1 = 0, score2 = 0, score3 = 0,
		sum_scores = 0;
	double average = 0.0;
	
	// 1. Prompt the user for exam score 1
	printf("Enter exam score 1: ");
	// 2. Get score 1 from the user
	scanf("%d", &score1);

	// 3. Prompt the user for exam score 2
	printf("Enter exam score 2: ");
	// 4. Get score 2 from the user
	scanf("%d", &score2);
	
	// 5. Prompt the user for exam score 3
	printf("Enter exam score 3: ");
	// 6. Get score 3 from the user
	scanf("%d", &score3);

	// 7. Sum up the scores
	sum_scores = score1 + score2 + score3;
	
	// 8. Compute the average of the scores
	average = (double)sum_scores / 3;

	// 9. Display the average
	printf("Average: %lf\n", average);

	return 0;
}