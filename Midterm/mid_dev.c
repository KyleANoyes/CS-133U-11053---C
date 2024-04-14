// *** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
// *** Remove before submission| ***

// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              Midterm
# Date:             Feb 18 2024
# Description:      This is a multiples check of a range of nu,s
# Input:            Int, low; Int, high; Int, multiples; Str, userSelection
# Output:           Test containing 
#******************************************************************************/

#include <stdio.h>

int main(void) {
    // Declarations
    int userLow;
    int userHigh;
    int userMult;
    int numDiff;
    int numDivCount;
    int cycle;
    int keepGoing;
    char userChoice = "";

    // Program start
    printf("\nHello! Welcome to my midterm for CS-133U-11053\n");
    printf("Developer: Kyle Noyes\n");
    printf("Date: February 18th, 2024\n");
    printf("Welcome to this multiples-counter!\n");

    while (userChoice != 'n') {
        keepGoing = 0;

        // Instruction
        printf("\n\nPlease enter 3-whole numbers with the first being your low number, second being\n");
        printf("the high number, and third being the multiples to check between low and high\n");

        // Data input
        printf("\nInput (enter space between nums): ");
        scanf("%d%d%d", &userLow, &userHigh, &userMult);

        // Data validation
        if (userLow >= userHigh) {
            printf("\nInvalid entry, the low number (first) must be less than the high\n");
            keepGoing = 1;
        }
        if (userMult >= userHigh) {
            printf("\nInvalid entry, the multiples (third) must be less than the high\n");
            keepGoing = 1;
        }
        if (userMult == 0) {
            printf("\nInvalid entry, the multiples (third) can not be zero.\n");
            keepGoing = 1;
        }
        if (userLow < 0) {
            printf("\nInvalid entry, the low number (first) can not be a negative number.\n");
            keepGoing = 1;
        }
        if (userHigh < 0) {
            printf("\nInvalid entry, the high number (second) can not be a negative number.\n");
            keepGoing = 1;
        }
        if (userMult < 0) {
            printf("\nInvalid entry, the multiples number (third) can not be a negative number.\n");
            keepGoing = 1;
        }

        // Computation / reporting
        if (keepGoing == 0) {
            numDiff = userHigh - userLow;
            numDivCount = (numDiff / userMult) + 1;
            printf("\nThe number of multiples of %d between %d and %d is: %d\n", userMult, userLow, userHigh, numDivCount);
        }
        else {
            printf("\nPlease try again.\n");
        }

        // Continuation
        printf("\nWould you like to continue? (y/n): ");
        scanf(" %c", &userChoice);
    }

    // Ending message and program terminate
    printf("\nThank you for using my multiples check program!\n");

    return 0;
}