// *** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
// *** Remove before submission| ***

// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Assignment:       7
# Date:             Feb 24, 2024
# Description:      Program to create normalized data set
# Input:            Integer numVals; Integer userInput 
# Output:           Various texts; normalized list
#******************************************************************************/

#include <stdio.h>

int GetUserInput() {
    int i;
    int userInput;

    printf("\n");

    do {
        printf("Please enter a number: ");
        scanf("%d", &userInput);

        if (userInput < 0) {
            printf("Error: Input can not be negative.\n\n");
        }
    } while (userInput < 0);

    return userInput;
}


int GetMaxInt(int listInts[], int numVals) {
    int valueMax;
    int i;

    valueMax = listInts[0];
    for (i = 0; i < numVals; i++) {
        if (listInts[i] > valueMax) {
            valueMax = listInts[i];
        }
    }

    return valueMax;
}


int MakeNormals(int userNum, int valueMax) {
    int calc;

    calc = valueMax - userNum;

    return calc;
}


int OutputData(int listNormals[], int numVals) {
    int i;

    printf("\nThe normalized data list is: \n");

    for (i = 0; i < numVals; i++) {
        printf("%d ", listNormals[i]);
    }

    printf("\n");
}


int main(void) {
    // Declarations
    int userValues[20];
    int valueMax;
    int numVals;
    int listNormals[20];
    int i;

    printf("Hello! Welcome to my data normalization program!\n");

    // Get initial array size
    do {
        printf("\nPlease enter amount of numbers to be normalized.\n");
        printf("Example: 5 for five-following numbers: ");

        scanf("%d", &numVals);

        if (numVals <= 0 || numVals > 20) {
            printf("\nError: Number cannot be negative, zero, or greater than 20\n");
        }
    } while (numVals <= 0 || numVals > 20);

    // Constructor
    for (i = 0; i < numVals; i++) {
        userValues[i] = GetUserInput(userValues, numVals);
    }

    // List analysis
    valueMax = GetMaxInt(userValues, numVals);

    // List alteration for normals. Does not overwrite source data
    for (i = 0; i < numVals; i++) {
        listNormals[i] = MakeNormals(userValues[i], valueMax);
    }

    // Display data to user
    OutputData(listNormals, numVals);

    printf("\nThank you for using this normalization program!\n");

    return 0;
}