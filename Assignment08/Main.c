// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              Assignment 8
# Date:             March 2nd
# Description:      This program dispalys various calcs given 2 nums
# Input:            Double num1, Double num2
# Output:           Various texts and what the current value of clac is
#******************************************************************************/

#include <stdio.h>
#include "Calculator.h"

int main() {
	Calculator calc = InitCalculator(calc);
	double num1;
	double num2;

	printf("Welcome to my Calculator Program!\n");
	printf("\nEnter 2 numbers and I will do some calculations for you.\n");

	scanf("%lf", &num1);
	scanf("%lf", &num2);

	// 1. The initial value
	printf("\nThe initial value of the data member, value    %.1lf\n", GetValue(calc));

	// 2. The value after adding num1
	calc = Add(num1, calc);
	printf("The value after adding num1                    %.1lf\n", GetValue(calc));

	// 3. The value after multiplying by 3
	calc = Multiply(3, calc);
	printf("The value after multiplying by 3               %.1lf\n", GetValue(calc));

	// 4. The value after subtracting num2
	calc = Subtract(num2, calc);
	printf("The value after subtracting num2               %.1lf\n", GetValue(calc));

	// 5. The value after dividing by 2
	calc = Divide(2, calc);
	printf("The value after dividing by 2                  %.1lf\n", GetValue(calc));

	// 6. The value after calling the Clear() method
	calc = Clear(calc);
	printf("The value after calling the clear() method     %.1lf\n", GetValue(calc));

	printf("\nThank you for using my program!\n");

	return 0;
}