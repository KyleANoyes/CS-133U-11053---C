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

typedef struct Number_struct {
    int num;
} Number;

void Swap(Number* numPtr1, Number* numPtr2) {
    // Store the values at each address location
    int tempData1 = numPtr1->num;
    int tempData2 = numPtr2->num;

    // Assign new value to address locations
    numPtr1->num = tempData2;
    numPtr2->num = tempData1;
}

int main(void) {
    Number* num1;
    Number* num2;

    printf("Welcome to my Swapping Numbers Program!\n");

    printf("\nEnter 2 numbers and I will swap them for you!!\n");
    scanf("%d %d", &num1, &num2);

    printf("\nYou entered:    num1 = %d and num2 = %d\n", num1, num2);

    // Use & to pass the address of this data
    Swap(&num1, &num2);

    printf("After swapping: num1 = %d and num2 = %d\n", num1, num2);

    printf("\nThank you for using my program!\n");

    return 0;
}