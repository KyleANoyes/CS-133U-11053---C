#include <stdio.h>
#include <time.h>

int main(void) {

    //Declarations
    int randomNum;
    char handComp[256] = "";
    char handUser[256] = "";
    char userInput[256] = "";
    char rockL[256] = "rock";
    char rockU[256] = "Rock";
    char paperL[256] = "paper";
    char paperU[256] = "Paper";
    char scissorsL[256] = "scissors";
    char scissorsU[256] = "Scissors";


    //Input
    printf("Lets play Rock, Paper, Scissors!\n");

    printf("\nPlease type \"Rock\", \"Paper\", or \"Scissors\" to choose your hand.\n");
    printf("Note: You can type \"R\", \"P\", or \"S\" too.\n");

    printf("\nPlease choose your Hand: ");
    scanf("%s", userInput);


    //Input validation and Sanitation
    //I am assuming the user entered rm -rf /* so rebuilding with known-safe values
    if (("%c", userInput[0]) == ("%c", rockL[0]) || ("%c", userInput[0]) == ("%c", rockU[0])) {
        //This is a really silly solution, but I don't know how else to construct
        // these strings without referencing Chapter 6 material :(
        handUser[0] = ("%c", rockU[0]);
        handUser[1] = ("%c", rockU[1]);
        handUser[2] = ("%c", rockU[2]);
        handUser[3] = ("%c", rockU[3]);
    }
    else if (("%c", userInput[0]) == ("%c", paperL[0]) || ("%c", userInput[0]) == ("%c", paperU[0])) {
        handUser[0] = ("%c", paperU[0]);
        handUser[1] = ("%c", paperU[1]);
        handUser[2] = ("%c", paperU[2]);
        handUser[3] = ("%c", paperU[3]);
        handUser[4] = ("%c", paperU[4]);
    }
    else if (("%c", userInput[0]) == ("%c", scissorsL[0]) || ("%c", userInput[0]) == ("%c", scissorsU[0])) {
        handUser[0] = ("%c", scissorsU[0]);
        handUser[1] = ("%c", scissorsU[1]);
        handUser[2] = ("%c", scissorsU[2]);
        handUser[3] = ("%c", scissorsU[3]);
        handUser[4] = ("%c", scissorsU[4]);
        handUser[5] = ("%c", scissorsU[5]);
        handUser[6] = ("%c", scissorsU[6]);
        handUser[7] = ("%c", scissorsU[7]);
    }
    else {
        //Input is invalid or I was a dummy. Probably the latter, but 
        // this will catch rogue data too
        printf("\n%s is not a valid input.", userInput);
        printf("\nPlease run the program again.\n");
        return 0;
    }
    printf("\nYou have chosen: %s!\n", handUser);


    //Generate computer choice
    srand((int)time(0));
    randomNum = rand() % 3;
    if (randomNum == 0) {
        //Again with the silly, but hey, it works.
        //I could cheat and just do [0] given following logic, but 
        // this is a more readable pattern
        handComp[0] = ("%c", rockU[0]);
        handComp[1] = ("%c", rockU[1]);
        handComp[2] = ("%c", rockU[2]);
        handComp[3] = ("%c", rockU[3]);
    }
    else if (randomNum == 1) {
        handComp[0] = ("%c", paperU[0]);
        handComp[1] = ("%c", paperU[1]);
        handComp[2] = ("%c", paperU[2]);
        handComp[3] = ("%c", paperU[3]);
        handComp[4] = ("%c", paperU[4]);
    }
    else if (randomNum == 2) {
        handComp[0] = ("%c", scissorsU[0]);
        handComp[1] = ("%c", scissorsU[1]);
        handComp[2] = ("%c", scissorsU[2]);
        handComp[3] = ("%c", scissorsU[3]);
        handComp[4] = ("%c", scissorsU[4]);
        handComp[5] = ("%c", scissorsU[5]);
        handComp[6] = ("%c", scissorsU[6]);
        handComp[7] = ("%c", scissorsU[7]);
    }
    else {
        //else if failure catch. This should never be reached, but will 
        // fail safely. Allows for scalability too
        printf("!Catostrophic failiure. How did you even manage this!?!\n");
        return 0;
    }
    printf("The computer has chosen: %s\n", handComp);


    //Check play conditions
    //Not a huge fan of these string checks, but works for now
    if (handUser[0] == handComp[0]) {
        printf("\nYou both chose %s. It's a tie!\n", handUser);
    }
    else if (handUser[0] == rockU[0] && handComp[0] == paperU[0]) {
        printf("\n%s beats %s. \n", handComp, handUser);
        printf("The computer has won!\n");
    }
    else if (handUser[0] == rockU[0] && handComp[0] == scissorsU[0]) {
        printf("\n%s beats %s. \n", handUser, handComp);
        printf("Congratulations, you won!\n");
    }
    else if (handUser[0] == paperU[0] && handComp[0] == scissorsU[0]) {
        printf("\n%s beats %s. \n", handComp, handUser);
        printf("The computer has won!\n");
    }
    else if (handUser[0] == paperU[0] && handComp[0] == rockU[0]) {
        printf("\n%s beats %s. \n", handUser, handComp);
        printf("Congratulations, you won!\n");
    }
    else if (handUser[0] == scissorsU[0] && handComp[0] == rockU[0]) {
        printf("\n%s beats %s. \n", handComp, handUser);
        printf("The computer has won!\n");
    }
    else if (handUser[0] == scissorsU[0] && handComp[0] == paperU[0]) {
        printf("\n%s beats %s. \n", handUser, handComp);
        printf("Congratulations, you won!\n");
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