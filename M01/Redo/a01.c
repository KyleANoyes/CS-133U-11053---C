// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              Assignment 01
# Date:             Jan 14 2024
# Description:      This program calculates the cost of a pizza order
# Input:            Int numSmall pizzas, Int numLarge pizzas
# Output:           Total order cost, total cost of smalls, total cost of larges
# Sources:          Pseudocode from Assignment 1
#******************************************************************************/

#include <stdio.h>

int main(void) {
	int costSmall = 5;
	int costLarge = 9;
	int numSmall = 0;
	int numLarge = 0;
	int sumTotal = 0;

	printf("Welcome to my Online Pizza Ordering System!\n");

	printf("\nEnter the number of small pizzas: ");
	scanf("%d", &numSmall);	
	printf("Enter the number of large pizzas: ");
	scanf("%d", &numLarge);
	
	//Perform early calc here. This will catch weird inputs to halt the program 
	//	before sending garbage data back to the user.
	sumTotal = (numSmall * costSmall) + (numLarge * costLarge);

	printf("\nYou ordered %d pizzas.\n", (numSmall + numLarge));
	printf("Your total cost is: $%d\n", sumTotal);

	printf("\nThank you for using my program!\n");

	return 0;
}