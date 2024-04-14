// *** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
// *** Remove before submission| ***

// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              text
# Date:             text
# Description:      text
# Input:            text
# Output:           text
# Sources:          text
#******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {

    // Declarations
    char beanHeighStr[256] = "";
    double beanHeightNum = 0.0;
    char beanWidthStr[256] = "";
    double beanWidthNum = 0.0;
    int beanDivide = 0;
    double beanEst = 0.0;
    double beanTotal = 0.0;
    double jarHeight = 0.0;
    char userInput[256] = "";
    double userNum = 0;
    int userSplit = 0;
    double dotPos = 0;
    int flagDot = 0;
    int flagSpace = 0;
    int loopMax = 10;
    int i = 0;
    double testA = 0;
    double testB = 1;


    printf("Hello\n");

    // Initial input always yes - starts while loop
    userInput[0] = ("%c", "y"[0]);
    while (("%c", userInput[0]) == ("%c", "y"[0]) || ("%c", userInput[0]) == ("%c", "Y"[0])) {
        printf("\nPlease enter the Length and Height of the Jellybean in CM. \n");
        printf("Format must follow \"xxx yyy\": ");
        // Do not remove this space! It destroys weird trailing scanf data
        scanf("%lf%lf", &testA, &testB);

        //scanf(" %c%c%c%c%c%c%c%c%c", &userInput[0], &userInput[1], &userInput[2], &userInput[3], &userInput[4], &userInput[5], &userInput[6], &userInput[7], &userInput[8]);
        userInput[7] = ("%c", "*"[0]);

        // Seperate the two values. Find " " index in string
        for (i = 0; i < loopMax; i = i + 1) {
            if (("%c", userInput[i]) == ("%c", " "[0])) {
                userSplit = i;
                flagSpace = flagSpace + 1;
            }
            if (i == loopMax && flagSpace != 1) {
                // Data isn't seperated - someone don' goofed"
                printf("\nERROR: User input isn't seperated.\n");
                printf("Please restart this program.\n");
                return 0;
            }
        }
        flagSpace = 0;

        for (i = 0; i < userSplit; i = i + 1) {
            if (("%c", userInput[i]) == ("%c", "."[0])) {
                flagDot = flagDot + 1;
            }
            if (flagDot > 1) {
                printf("\nERROR: Multiple dots detected. Can not parse\n");
                printf("Please restart this program.\n");
                return 0;
            }
            else if (flagDot < 1) {
                dotPos = pow(10, i);
            }
        }
        if (dotPos == 0) {
            dotPos = 1;
        }

        // While loop to convert char into num
        i = 0;
        do {
            if (("%c", userInput[i]) == ("%c", "."[0])) {
                dotPos = dotPos / 10.0;
                i = i - 1;
            }
            else if (("%c", userInput[i]) == ("%c", "0"[0])) {
                userNum = userNum + (0 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "1"[0])) {
                userNum = userNum + (1 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "2"[0])) {
                userNum = userNum + (2 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "3"[0])) {
                userNum = userNum + (3 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "4"[0])) {
                userNum = userNum + (4 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "5"[0])) {
                userNum = userNum + (5 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "6"[0])) {
                userNum = userNum + (6 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "7"[0])) {
                userNum = userNum + (7 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "8"[0])) {
                userNum = userNum + (8 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "9"[0])) {
                userNum = userNum + (9 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else {
                printf("\nERROR: Input contains invalid data\n");
                printf("Please restart this program.\n");
                return 0;
            }
            i = i + 1;
        } while (dotPos >= 1);

        i = i + 1;
        while (i != userSplit) {
            if (("%c", userInput[i - 1]) == ("%c", " "[0])) {
                i = i - 2;
            }
            else if (("%c", userInput[i]) == ("%c", "0"[0])) {
                userNum = userNum + (0 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "1"[0])) {
                userNum = userNum + (1 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "2"[0])) {
                userNum = userNum + (2 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "3"[0])) {
                userNum = userNum + (3 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "4"[0])) {
                userNum = userNum + (4 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "5"[0])) {
                userNum = userNum + (5 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "6"[0])) {
                userNum = userNum + (6 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "7"[0])) {
                userNum = userNum + (7 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "8"[0])) {
                userNum = userNum + (8 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "9"[0])) {
                userNum = userNum + (9 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else {
                printf("\nERROR: Input contains invalid data\n");
                printf("Please restart this program.\n");
                return 0;
            }
            i = i + 1;
        }
        beanHeightNum = userNum;
        userNum = 0.0;
        dotPos = 0;
        i = 0;
        flagDot = 0;

        for (i = 1; userInput[i + userSplit] != ("%c", "*"[0]); i = i + 1) {
            if (("%c", userInput[i + userSplit]) == ("%c", "."[0])) {
                flagDot = flagDot + 1;
            }
            if (flagDot > 1) {
                printf("\nERROR: Multiple dots detected. Can not parse\n");
                printf("Please restart this program.\n");
                return 0;
            }
            else if (flagDot < 1) {
                dotPos = pow(10, (i - 1));
            }
        }
        if (dotPos == 0) {
            dotPos = 1;
        }

        // While loop to convert char into num
        i = userSplit + 1;
        do {
            if (("%c", userInput[i]) == ("%c", "."[0])) {
                dotPos = dotPos / 10.0;
                i = i - 1;
            }
            else if (("%c", userInput[i]) == ("%c", "0"[0])) {
                userNum = userNum + (0 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "1"[0])) {
                userNum = userNum + (1 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "2"[0])) {
                userNum = userNum + (2 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "3"[0])) {
                userNum = userNum + (3 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "4"[0])) {
                userNum = userNum + (4 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "5"[0])) {
                userNum = userNum + (5 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "6"[0])) {
                userNum = userNum + (6 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "7"[0])) {
                userNum = userNum + (7 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "8"[0])) {
                userNum = userNum + (8 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "9"[0])) {
                userNum = userNum + (9 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else {
                printf("\nERROR: Input contains invalid data.\n");
                printf("Please restart this program.\n");
                return 0;
            }
            i = i + 1;
        } while (dotPos >= 1);

        i = i + 1;
        while (userInput[i] != ("%c", "*"[0])) {
            if (("%c", userInput[i - 1]) == ("%c", "*"[0])) {
                userNum = userNum;
                i = i - 2;
            }
            else if (("%c", userInput[i]) == ("%c", "0"[0])) {
                userNum = userNum + (0 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "1"[0])) {
                userNum = userNum + (1 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "2"[0])) {
                userNum = userNum + (2 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "3"[0])) {
                userNum = userNum + (3 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "4"[0])) {
                userNum = userNum + (4 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "5"[0])) {
                userNum = userNum + (5 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "6"[0])) {
                userNum = userNum + (6 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "7"[0])) {
                userNum = userNum + (7 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "8"[0])) {
                userNum = userNum + (8 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else if (("%c", userInput[i]) == ("%c", "9"[0])) {
                userNum = userNum + (9 * dotPos);
                dotPos = dotPos / 10.0;
            }
            else {
                printf("\nERROR: Input contains invalid data\n");
                printf("Please restart this program.\n");
                return 0;
            }
            i = i + 1;
        }
        beanWidthNum = userNum;
        userNum = 0.0;
        dotPos = 0;
        i = 0;
        flagDot = 0;



        printf("\nThis is your bean height: %0.1lf\n", beanHeightNum);
        printf("This is your bean height: %0.1lf\n", beanWidthNum);

        printf("\nWould you like to re-calc this? (Yes/No): \n");
        scanf("%s", &userInput);
    }
    printf("\nGoodbye.");

    return 0;
}