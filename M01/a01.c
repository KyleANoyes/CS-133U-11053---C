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

	printf("Hello! Welcome to the pizza cost calculator.\n");
	printf("Please input the number of small pizza(s) being ordered: ");
	scanf("%d", &numSmall);	
	printf("Please input the number of large pizza(s) being ordered: ");
	scanf("%d", &numLarge);
	
	//Perform early calc here. This will catch weird inputs to halt the program 
	//	before sending garbage data back to the user.
	sumTotal = (numSmall * costSmall) + (numLarge * costLarge);

	printf("\nYou are ordering %d small pizzas\n", numSmall);
	printf("You are ordering %d large pizzas\n", numLarge);

	printf("\nYour order total is: $%d\n", sumTotal);
	printf("----------------------\n");
	printf("%d small pizzas at $5 each is: $%d\n", numSmall, numSmall * costSmall);
	printf("%d large pizzas at $9 each is: $%d\n", numLarge, numLarge * costLarge);

	printf("\nThank you for using this calculator! Please report any bugs found.\n");

	return 0;
}