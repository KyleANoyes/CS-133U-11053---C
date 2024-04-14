#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    char userChoice = "y";
    char fileName[256] = "";
    int lengthPreCat = 0;
    int lengthPostCat = 0;
    int keepGoing = 0;
    int i = 0;

    printf("\nHello! Welcome to this file name encoder\n");

    while (userChoice != 'Q' && userChoice != 'q') {
        printf("\n-----------------------------------------------------\n");
        printf("Please choose an option from the list below\n");
        printf("Type the letter in parenthesis to select this option\n");
        printf("\n(E) - Develop a file name based on a series of questions\n");
        printf("(Q) - Quit this program\n");

        printf("\nInput menu selection: ");
        scanf(" %c", &userChoice);

        if (userChoice == 'e' || userChoice == 'E') {
            printf("\nYou have entered the encode mode.\n");
            printf("\nPlease answer the following questions. Once completed\n");
            printf("this program will print a complete file name\n");

            do {
                keepGoing = 0;
                lengthPreCat = strlen(fileName);

                printf("\nPlease enter your last name: ");
                scanf("%s", &fileName[lengthPreCat]);

                lengthPostCat = strlen(fileName);
                for (i = lengthPreCat; i < lengthPostCat; i++) {
                    if (isalpha(fileName[i]) == false && (isdigit(fileName[i]) == false)) {
                        keepGoing = 1;
                    }
                    if (isalpha(fileName[i]) == true) {
                        fileName[i] = tolower(fileName[i]);
                    }
                }

                // Clears out bad data if any is detected. Prompts for restart
                // Adds trailing data to array
                if (keepGoing == 1) {
                    printf("\nFile name can only contain A-Z and 0-9 characters. Please try again\n");
                    for (i = lengthPreCat; i < lengthPostCat; i++) {
                        fileName[i] = '\0';
                    }
                }
                else {
                    fileName[lengthPostCat] = '_';
                    fileName[lengthPostCat + 1] = '\0';
                }


            } while (keepGoing != 0);

            do {
                keepGoing = 0;
                lengthPreCat = strlen(fileName);

                printf("\nPlease enter your first name: ");
                scanf("%s", &fileName[lengthPreCat]);

                lengthPostCat = strlen(fileName);
                for (i = lengthPreCat; i < lengthPostCat; i++) {
                    if (isalpha(fileName[i]) == false && (isdigit(fileName[i]) == false)) {
                        keepGoing = 1;
                    }
                    else {
                        fileName[i] = tolower(fileName[i]);
                    }
                }

                // Clears out bad data if any is detected. Prompts for restart
                // Adds trailing data to array
                if (keepGoing == 1) {
                    printf("\nFile name can only contain A-Z and 0-9 characters. Please try again\n");
                    for (i = lengthPreCat; i < lengthPostCat; i++) {
                        fileName[i] = '\0';
                    }
                }
                else {
                    fileName[lengthPostCat] = '_';
                    fileName[lengthPostCat + 1] = '\0';
                }


            } while (keepGoing != 0);

            do {
                keepGoing = 0;
                lengthPreCat = strlen(fileName);

                printf("\nWas your assignment late? (y/n): ");
                scanf("%s", &fileName[lengthPreCat]);

                lengthPostCat = strlen(fileName);
                for (i = lengthPreCat; i < lengthPostCat; i++) {
                    if (isalpha(fileName[i]) == false && (isdigit(fileName[i]) == false)) {
                        keepGoing = 1;
                    }
                    if (isalpha(fileName[i]) == true) {
                        fileName[i] = tolower(fileName[i]);
                    }
                }

                // Clears out bad data if any is detected. Prompts for restart
                // Adds trailing data to array
                if (keepGoing == 1) {
                    printf("\nFile name can only contain A-Z and 0-9 characters. Please try again\n");
                    for (i = lengthPreCat; i < lengthPostCat; i++) {
                        fileName[i] = '\0';
                    }
                }
                // This is really messy... but it fits in the spirit of the assignment.
                // Data purge always before data write for safety
                else {
                    if (fileName[lengthPreCat] == 'y' || fileName[lengthPreCat] == 'Y') {
                        for (i = lengthPreCat; i < lengthPostCat; i++) {
                            fileName[i] = '\0';
                        }
                        fileName[lengthPreCat] = 'L';
                        fileName[lengthPreCat + 1] = 'A';
                        fileName[lengthPreCat + 2] = 'T';
                        fileName[lengthPreCat + 3] = 'E';
                        fileName[lengthPreCat + 4] = '_';
                        }
                    else {
                        for (i = lengthPreCat; i < lengthPostCat; i++) {
                            fileName[i] = '\0';
                        }
                    }
                }


            } while (keepGoing != 0);

            do {
                keepGoing = 0;
                lengthPreCat = strlen(fileName);

                printf("\nWhat is your student ID? (ie: 123-45-6789): ");
                scanf("%s", &fileName[lengthPreCat]);

                lengthPostCat = strlen(fileName);
                for (i = lengthPreCat; i < lengthPostCat; i++) {
                    if (isalpha(fileName[i]) == false && (isdigit(fileName[i]) == false)) {
                        if (fileName[i] != '-') {
                            keepGoing = 1;
                        }
                    }
                    if (isalpha(fileName[i]) == true) {
                        fileName[i] = tolower(fileName[i]);
                    }
                }

                // Clears out bad data if any is detected. Prompts for restart
                // Adds trailing data to array
                if (keepGoing == 1) {
                    printf("\nFile name can only contain A-Z, 0-9 characters, and dashes. Please try again\n");
                    for (i = lengthPreCat; i < lengthPostCat; i++) {
                        fileName[i] = '\0';
                    }
                }
                else {
                    fileName[lengthPostCat] = '_';
                    fileName[lengthPostCat + 1] = '\0';
                }


            } while (keepGoing != 0);

            do {
                keepGoing = 0;
                lengthPreCat = strlen(fileName);

                printf("\nEnter the submission time using a 24 hour format (ie: 14:37): ");
                scanf("%s", &fileName[lengthPreCat]);

                lengthPostCat = strlen(fileName);
                for (i = lengthPreCat; i < lengthPostCat; i++) {
                    if (isalpha(fileName[i]) == false && (isdigit(fileName[i]) == false) && fileName[i] != ':') {
                        keepGoing = 1;
                    }
                    if (isalpha(fileName[i]) == true) {
                        fileName[i] = tolower(fileName[i]);
                    }
                }

                // Clears out bad data if any is detected. Prompts for restart
                // Adds trailing data to array
                if (keepGoing == 1) {
                    printf("\nFile name can only contain A-Z, 0-9 characters, and colons. Please try again\n");
                    for (i = lengthPreCat; i < lengthPostCat; i++) {
                        fileName[i] = '\0';
                    }
                }
                else {
                    fileName[lengthPostCat] = '_';
                    fileName[lengthPostCat + 1] = '\0';
                }


            } while (keepGoing != 0);

            do {
                keepGoing = 0;
                lengthPreCat = strlen(fileName);

                printf("\nplease enter the file name (ie: unit.py): ");
                scanf("%s", &fileName[lengthPreCat]);

                lengthPostCat = strlen(fileName);
                for (i = lengthPreCat; i < lengthPostCat; i++) {
                    if (isalpha(fileName[i]) == false && (isdigit(fileName[i]) == false) && fileName[i] != '.') {
                        keepGoing = 1;
                    }
                    if (isalpha(fileName[i]) == true) {
                        fileName[i] = tolower(fileName[i]);
                    }

                }

                // Clears out bad data if any is detected. Prompts for restart
                // Adds trailing data to array
                if (keepGoing == 1) {
                    printf("\nFile name can only contain A-Z, 0-9 characters, and periods. Please try again\n");
                    for (i = lengthPreCat; i < lengthPostCat; i++) {
                        fileName[i] = '\0';
                    }
                }
                else {
                    fileName[lengthPostCat + 1] = '\0';
                }

            } while (keepGoing != 0);

            lengthPostCat = strlen(fileName);
            if (lengthPostCat > 100) {
                printf("\n!WARNING: The encoded file name exceeds the maximum allowed limit of 100 characters!\n");
                printf("It is highly recommended to restart this tool and shorten inputs where possible.\n");
            }

            printf("\nFile name: %s\n", fileName);
        }
        else if (userChoice != 'Q' && userChoice != 'q') {
            printf("\nGiven input was invalid. Please type the option name within the parentheses\n");
        }
    }

    printf("\nThank you for using my program! Good bye :)\n");
    
    return 0;
}