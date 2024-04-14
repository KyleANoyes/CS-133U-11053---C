//*** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//*** Remove before submission| ***

// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              Assignment 02
# Date:             Jan 15 2024
# Description:      This program calculates the half-life (H-L) of a Radon
# Input:            Initial radon measurement
# Output:           Initial radon value, H-L 4 days, H-L 8 days, H-L 16 days, 
# Sources:          zyLabs, Assignment psuedocode references
#******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {

    //Var initialize block
    double radonInit;
    double radonH01;
    double radonH02;
    double radonH03;

    //Start block
    printf("Welcome to my Radon Level Calculator!\n");

    //Input block
    printf("\nEnter the amount of Radon detected: ");
    scanf("%lf", &radonInit);

    //Calculation block
    radonH01 = radonInit / pow(2, 1);
    radonH02 = radonInit / pow(2, 2);
    radonH03 = radonInit / pow(2, 4);

    //Output block
    printf("\nHere are your Radon levels at future dates: \n");
    printf("After 4 days: %0.4lf pCi/L\n", radonH01);
    printf("After 8 days: %0.4lf pCi/L\n", radonH02);
    printf("After 16 days: %0.4lf pCi/L\n", radonH03);

    //End block
    printf("\nThank you for using my program!\n");

    return 0;
}