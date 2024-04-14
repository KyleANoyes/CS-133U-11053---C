//*** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//*** Remove before submission| ***

// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Lab:              Assignment 03
# Date:             Jan 21 2024
# Description:      This is a program to play Rock, Paper Scissors! with the comp
# Input:            User selection of "r", "p" or "s" for hand
# Output:           The computers hand; outcome of game user hand vs. comp hand
# Sources:          zyLabs, Assignment psuedocode references
#******************************************************************************/

#include <stdio.h>
#include <time.h>

int main(void) {

    //Declarations
    int randomNum;
    char handComp = "";
    char handUser = "";
    char userInput = "";
    char rock = 'R';
    char paper = 'P';
    char scissors = 'S';


    //Input
    printf("Welcome to the Rock Paper Scissors Game!\n");

    printf("\nWhat is your play User?\n");
    printf("Enter r, p, or s: ");
    scanf(" %c", &userInput);

    //Input validation and Sanitation
    //Using variable assignment for easy alterations if needed in future uses of this code.
    if (userInput == 'r' || userInput == 'R') {
        handUser = rock;
    }
    else if (userInput == 'p' || userInput == 'P') {
        handUser = paper;
    }
    else if (userInput == 's' || userInput == 'S') {
        handUser = scissors;
    }
    else {
        //Input is invalid or I was a dummy. Probably the latter, but 
        // this will catch rogue data too
        printf("\nInvalid play. Run the program again!\n", userInput);
        return 0;
    }

    //Generate computer choice
    srand((int)time(0));
    randomNum = rand() % 3;
    if (randomNum == 0) {
        handComp = rock;
    }
    else if (randomNum == 1) {
        handComp = paper;
    }
    else if (randomNum == 2) {
        handComp = scissors;
    }
    else {
        //else if failure catch. This should never be reached, but will 
        // fail safely. Allows for scalability too
        printf("!Catostrophic failiure. How did you even manage this!?!\n");
        return 0;
    }
    printf("Computer plays %c\n", handComp);


    //Check play conditions
    //Not a huge fan of these string checks, but works for now
    if (handUser == handComp) {
        printf("\nIt's a tie!\n");
    }
    else if (handUser == rock && handComp == paper) {
        printf("\nComputer wins!\n");
    }
    else if (handUser == rock && handComp == scissors) {
        printf("\nUser wins!\n");
    }
    else if (handUser == paper && handComp == scissors) {
        printf("\nComputer wins!\n");
    }
    else if (handUser == paper && handComp == rock) {
        printf("\n%s beats %s. \n", handUser, handComp);
        printf("\nUser wins!\n");
    }
    else if (handUser == scissors && handComp == rock) {
        printf("\nComputer wins!\n");
    }
    else if (handUser == scissors && handComp == paper) {
        printf("\nUser wins!\n");
    }
    else {
        //else if failure catch. This should never be reached, but will fail safely.
        printf("\n!Application error. Please alert the programmer!\n");
        return 0;
    }


    //End program
    printf("\nThank you for playing!\n");
    return 0;
}