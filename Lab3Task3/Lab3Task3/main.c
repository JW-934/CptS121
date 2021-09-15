/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab3Task3
* Date: September 15, 2021
* Description: This program prompts the user for exam, lab, and project scores then
*			   calculates the weighted average.
*/

#include "Header.h"

int main(void)
{
	double exam1 = 0, exam2 = 0, lab1 = 0, lab2 = 0, project1 = 0, project2 = 0,
			exam_avg = 0, lab_avg = 0, project_avg = 0, weighted_avg = 0, weighted_exam,
			weighted_lab, weighted_project;
	
	printf("********************EXAM SCORES********************\n");
	exam1 = get_score();
	exam2 = get_score();

	printf("********************LAB SCORES********************\n");
	lab1 = get_score();
	lab2 = get_score();

	printf("********************PROJECT SCORES********************\n");
	project1 = get_score();
	project2 = get_score();

	exam_avg = calculate_average(exam1, exam2);
	lab_avg = calculate_average(lab1, lab2);
	project_avg = calculate_average(project1, project2);

	weighted_exam = (exam_avg * 0.30);
	weighted_lab = (lab_avg * 0.05);
	weighted_project = (project_avg * 0.15);

	weighted_avg = ((weighted_exam + weighted_lab + weighted_project) / 50.0) * 100.0;

	printf("Weighted Average: %.2lf%%", weighted_avg);
}