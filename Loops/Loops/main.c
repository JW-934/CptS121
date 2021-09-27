// This example illustrates how to work with loops
// History - 9/27 - Discussed while (), for (), do-while ()
//                  loops. Implemented counting loops using
//                  these 3 C looping constructs. Also,
//                  created an end-file control loop with a
//                  while () loop. The end-file control loop
//                  reads all of the integers in the "numbers.txt"
//                  file!

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int count = 1; // initialization expression - control variable
	int number = 0;

	FILE* infile = fopen("numbers.txt", "r");

	while (!feof (infile))
	{
		fscanf(infile, "%d", &number);
		printf("feof file loop: %d\n", number);
	}

	fclose(infile);
	//printf("1\n");
	//printf("2\n");
	//printf("3\n");

	// iterative statement
	while (count <= 10) // () - condition
	{
		printf("while count: %d\n", count);
		//count = count + 1; // update expression - changes the control variable
		//count += 1;
		//++count; // preincrement operator
		count++; // postincrement operator
	}

	// value of count here? 11

	for (count = 0; count < 10; ++count) //same count as earlier, variable not just in for scope
	{
		printf("for count: %d\n", count + 1);
	}

	// value of count here? 10

	count = 0;

	do
	{
		printf("do-while count: %d\n", count + 1);
		count++;
	} while (count < 10);

	return 0;
}