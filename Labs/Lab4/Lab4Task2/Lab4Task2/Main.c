/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task2
* Date: September 22, 2021
* Description: This program calculates a baseball player's end of season bonus.
*/

#include "Header.h"

int main(void)
{
	char all_star, regular_season, world_series, gold_glove, silver_slugger, home_run, batting_average;
	double bonus = 0;
	
	//Prompts for awards
	printf("All-Star Game Appearance? (y/n): ");
	scanf(" %c", &all_star);
	
	printf("Regular Season MVP? (y/n): ");
	scanf(" %c", &regular_season);
	
	printf("World Series MVP? (y/n): ");
	scanf(" %c", &world_series);
	
	printf("Gold Glove Award? (y/n): ");
	scanf(" %c", &gold_glove);
	
	printf("Silver Slugger Award? (y/n): ");
	scanf(" %c", &silver_slugger);
	
	printf("Home Run Champ? (y/n): ");
	scanf(" %c", &home_run);
	
	printf("Batting Average Champ? (y/n): ");
	scanf(" %c", &batting_average);

	//Sums up bonuses
	if (all_star == 'y' || all_star == 'Y')
	{
		bonus = bonus + 25000;
	}

	if (regular_season == 'y' || regular_season == 'Y')
	{
		bonus = bonus + 75000;
	}
	
	if (world_series == 'y' || world_series == 'Y')
	{
		bonus = bonus + 100000;
	}

	if (gold_glove == 'y' || gold_glove == 'Y')
	{
		bonus = bonus + 50000;
	}

	if (silver_slugger == 'y' || silver_slugger == 'Y')
	{
		bonus = bonus + 35000;
	}

	if (home_run == 'y' || home_run == 'Y')
	{
		bonus = bonus + 25000;
	}

	if (batting_average == 'y' || batting_average == 'Y')
	{
		bonus = bonus + 25000;
	}

	//Displays bonus
	printf("End of Season Bonus: %.2lf", bonus);
}