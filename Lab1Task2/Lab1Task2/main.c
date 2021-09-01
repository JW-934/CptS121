/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab1Task2
* Date: September 1, 2021
* Description: This program 
*/

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#define PI 3.141592653


#include <stdio.h> // necessary to use printf () and scanf ()



int main(void) // the starting point for all C programs

{

    // we need to request memory for

    int number1_int = 0, number2_int = 0; // 2 variable declarations - reserves two memory blocks for integers and sets them to 0's

    double number1_float = 0.0, number2_float = 0.0; // reserves two memory blocks for numbers with high precision (floating-point)



    printf("Enter two integer values: "); // ask the user

    scanf("%d%d", &number1_int, &number2_int); // read the integers typed through the keyboard - %d is for "decimal", i.e. integers



    printf("Enter two floating-point values: "); // ask the user

    scanf("%lf%lf", &number1_float, &number2_float); // read the integers typed through the keyboard - %lf is for "long float", i.e. double precision numbers



    // place all code for the subtasks/operations below here

    // Add number1_int and number2_int together and print the result as an integer value
    printf("Sum of Int 1 and 2: %d\n", number1_int + number2_int);

    //  Subtract number1_float from number2_float and print the result as a floating-point value
    printf("Difference of Float 1 and 2: %lf\n", number2_float - number1_float);

    //Multiply number1_int by number1_float and print the result as an integer value
    printf("Int 1 * Float 2: %d\n", (int)(number1_int * number1_float));

    //Divide number1_int by number2_int and print the result as an integer and a floating-point value
    printf("Int 1 / Int 2: Int: %d, Float: %lf\n", number1_int / number2_int, (double)number1_int / number2_int);

    //Divide number1_int by number2_float and print the result as an integer and a floating-point value
    printf("Int 1 / Float 2: Int: %d, Float: %f\n", number1_int / (int)number2_float, (float)number1_int / number2_float);
    
    //Explicitly cast number1_int as a floating-point value and divide by number2_int. Print the result as a floating-point value.
    printf("Int 1 (casted to double) / Int 2: %lf\n", (double)number1_int / number2_int);
    
    //Try to mod number1_float by number2_float. Does the program compile? If not, fix it so that it does.
    printf("Float 1 %% Float 2: %d\n", (int)number1_float % (int)number2_float);
    
    //Determine if number1_int and number2_int are even or odd. Print 0 if even and 1 if odd. You may not use “if” statements. Use the mod operator instead.
    printf("Int 1 Odd: %d Int 2 Odd: %d\n", number1_int % 2, number2_int % 2);


    //b. Prompts the user for inputs into Ohm’s Law and determines the voltage. Print the voltage value.
    int current = 0, resistance = 0;
    
    printf("Enter Current and Circuit Resistance (Integers): ");
    scanf("%d", &current);
    scanf("%d", &resistance);
    printf("Voltage: %d", current * resistance);
    
    //c. Prompts the user for inputs into Joule’s Law and determines the power. Print the power value.
    int voltage = 0, joulesResistance = 0;

    printf("Enter Voltage and Circuit Resistance (Integers): ");
    scanf("%d", &voltage);
    scanf("%d", &joulesResistance);
    printf("Power: %d", (voltage * voltage) / joulesResistance);
    
    //d. Prompts the user for inputs into the third order polynomial equation provided and determines the y value. Print the y value.
    int a = 0, b = 0, c = 0, d = 0, x = 0, y = 0;
    printf("Enter a, b, c, d, and x (Integers): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
    printf("y = %lf", (double)(3 * (a * (x * x * x)) + ((double)1 / 4) * (b * (x * x)) + (10 * (c * x)) + (-5 * d)));
 

    //e. Prompts the user for inputs into the circumference of circle equation provided and determines the circumference value
    double radius = 0;
    printf("Enter a circle's radius: ");
    scanf("%lf", &radius);
    printf("Circumference: %lf", (2 * PI * radius));

    return 0; // return a success status (value 0) indicating the program worked fine

} // end of the main () function