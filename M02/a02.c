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

int main(void) {

    //Var initialize block
    double radonInit;
    double radonH01;
    double radonH02;
    double radonH03;

    //Start block
    printf("Hello! Welcome to this Radon level calculator!\n");
    printf("----------------------------------------------\n");

    //Input block
    printf("\nPlease enter your starting Radon measurement in pCi/L (ie: 12.348792): ");
    scanf("%lf", &radonInit);
    printf("\nYou have entered Radon level: %0.4lf pCi/L\n", radonInit);

    //Calculation block
    radonH01 = radonInit / 2.0;
    radonH02 = radonInit / 4.0;
    radonH03 = radonInit / 16.0;

    //Output block
    printf("\nHere are your Radon levels at future dates: \n");
    printf("Radon levels at day 4: %0.4lf pCi/L\n", radonH01);
    printf("Radon levels at day 8: %0.4lf pCi/L\n", radonH02);
    printf("Radon levels at day 16: %0.4lf pCi/L\n", radonH03);

    //End block
    printf("\nThank you for using this Calculator.\n");

    return 0;
}