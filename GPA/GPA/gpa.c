/*double f(double x) // function header
{
	return x * x;
}
*/

double get_gp(int class_num)
{
	double gp = 0;

	printf("Enter grade point for class %d: ", class_num);
	scanf("%lf", &gp);


	return gp;
}

int calculate_sum_credits(int c1, int c2, int c3)
{
	return c1 + c2 + c3;
}

double calculate_gpa(double weighted_gp, double sum_credits)
{
	double gpa = 0;

	gpa = weighted_gp / sum_credits;

	return gpa;
}