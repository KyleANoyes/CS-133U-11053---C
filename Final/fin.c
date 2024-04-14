// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              Final
# Date:             March 18th, 2024
# Description:      This program will calculate percent of even numbers in list
# Input:            Int arrSize, Int arrayValue[index]
# Output:           Double percentEven, string of final calculation results
#******************************************************************************/

#include <stdio.h>

double getPercentEven(int indexTotal, int *numList) {
    // Declare local function vars
    int index;
    double numEven = 0;
    double percEven;
    int calcOddEven;

    // Parse every num in array
    for (index = 0; index < indexTotal; index++) {
        // Store index num into own var, easier to debug
        calcOddEven = numList[index];

        // Check if num % 2 == 0. If so, numEven++
        if (calcOddEven % 2 == 0) {
            numEven = numEven + 1;
        }
    }

    // Store calc outside return for safety. Multiple 100 for real percent
    percEven = (numEven / indexTotal) * 100;

    return percEven;
}

int main(void) {
    // Declare local function vars
    int arrSize;
    int i;
    double percentEven;

    // Welcome and instruction message
    printf("Welcome to my Final.\n");
    printf("How many numbers would you like in your list?\n");

    // Get the total array size
    scanf("%d", &arrSize);

    /// Push given array size into newly declared array
    int numArr[arrSize];
    
    // If array > 0, run full program. Else, skip and assign 0
    if (arrSize > 0) {
        // Prompt user for next nums
        printf("\nPlease enter the values for your list separated by a space: \n");

        // For-loop can take single input and add to all indexies
        for (i = 0; i < arrSize; i++) {
            scanf("%d", &numArr[i]);
        }

        // Call function getPercentEven, get num return
        percentEven = getPercentEven(arrSize, numArr);
    }
    else {
        percentEven = 0;
    }

    // Output data to user and print Goodbye message
    printf("\nThe percent of even values: %.1f%%\n", percentEven);
    printf("Thank you for using my program!\n");

    // Return 0 to end program
    return 0;
}