// *** |Remove before submission ***
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
// *** Remove before submission| ***

#include <stdio.h>

int main(void) {
    double userInputDub = 0.0;
    int userInputInt = 0;
    char userInputStr[256] = "";
    int stockID[99];
    // Using int, but can be changed to Char in chapter 6.
    // Seperating the stock list to avoid messy data handling in future changes
    int stockName[99];
    double stockPriceNow[99];
    double stockPriceStart[99];
    int parseID = 0;
    double parsePriceNow = 0.0;
    double parsePriceStart = 0.0;
    int keepGoing = 0;
    int didRun = 0;
    int i = 0;


    printf("\nHello! Welcome to this stock tracking program!");

    while (userInputStr[255] != ("%c", "q"[0])) {
        // Clear dangerous data
        keepGoing = 0;
        didRun = 0;
        userInputDub = 0;
        userInputInt = 0;
        userInputStr[0] = "";

        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
        printf("\nMain menu\n");
        printf("Please select one of the options below by entering the option name or first letter\n");
        printf("\nCreate - Create new stock data for any ID\n");
        printf("Delete - Remove stock data for a given ID\n");
        printf("Update - Update a currently existing stock price\n");
        printf("PriceFilter - Display all stock data above a given price\n");
        printf("ShowAll - Display all recorded stock data\n");
        printf("Quit - Terminate the program\n");

        printf("\nPlease enter selection: ");
        scanf("%s", &userInputStr[0]);

        // Creation menu
        if (("%c", userInputStr[0]) == ("%c", "c"[0]) || ("%c", userInputStr[0]) == ("%c", "C"[0])) {
            didRun = 1;
            printf("\nYou have entered the Stock Creation menu.\n");
            printf("\nPlease enter an ID greater-than or equal to 0 and less than 100: ");
            scanf("%d", &userInputInt);

            if (userInputInt >= 0 && userInputInt < 100) {
                if (stockID[userInputInt] != 1) {
                    parseID = userInputInt;
                    printf("\nSelected ID: %d\n", parseID);

                    printf("Please enter the stock price: ");
                    scanf("%lf", &userInputDub);

                    if (userInputDub >= 0) {
                        parsePriceNow = userInputDub;
                        parsePriceStart = userInputDub;
                        printf("\nStock price successfully set to $%0.2lf \n", parsePriceNow);

                        printf("\nCreated data: \n");
                        printf("Stock Name: %d -- Current Price: %0.2lf\n", parseID, parsePriceNow);

                        stockID[parseID] = 1;
                        stockName[parseID] = parseID;
                        stockPriceNow[parseID] = parsePriceNow;
                        stockPriceStart[parseID] = parsePriceStart;
                    }
                    else {
                        printf("\nStock price can not be lower than zero.\n");
                        keepGoing = 1;
                    }
                }
                else {
                    printf("\nID already exist. Please use the Update or Remove function\n");
                    keepGoing = 1;
                }
            }
            else {
                printf("\nInput must be equal to or greater than 0 and less than 100.\n");
                keepGoing = 1;
            }
        }

        
        // Update menu
        if (("%c", userInputStr[0]) == ("%c", "u"[0]) || ("%c", userInputStr[0]) == ("%c", "U"[0])) {
            didRun = 1;
            printf("\nYou have entered the Stock Update menu.\n");
            printf("\nPlease enter the 2 digit Stock ID you would like to update: ");
            scanf("%d", &userInputInt);

            if (userInputInt >= 0 && userInputInt < 100) {
                if (stockID[userInputInt] == 1) {
                    parseID = userInputInt;
                    printf("\nSelected ID: %d\n", parseID);
                    printf("Current price: %0.2lf - - Starting price: %0.2lf\n", stockPriceNow[parseID], stockPriceStart[parseID]);

                    printf("\nPlease enter a new current price: ");
                    scanf("%lf", &parsePriceNow);
                    if (parsePriceNow >= 0) {
                        stockPriceNow[parseID] = parsePriceNow;
                        printf("Stock %d price update to: $%0.2lf successfully.\n", parseID, parsePriceNow);
                    }
                    else {
                        printf("\nInput must be equal to or greater than 0.\n");
                        keepGoing = 1;
                    }
                }
                else {
                    printf("\nNo data exist for this ID. Please use the creation menu.\n");
                    keepGoing = 1;
                }
            }
            else {
                printf("\nInput must be equal to or greater than 0 and less than 100.\n");
                keepGoing = 1;
            }
        }


        // Delete menu
        if (("%c", userInputStr[0]) == ("%c", "d"[0]) || ("%c", userInputStr[0]) == ("%c", "D"[0])) {
            didRun = 1;
            printf("\nYou have entered the Stock deletion menu.\n");
            printf("\nPlease enter the 2 digit Stock ID you would like to delete\n");
            printf("or enter 100 to leave this menu: ");
            scanf("%d", &userInputInt);

            if (userInputInt >= 0 && userInputInt < 100) {
                stockID[userInputInt] = 0;
                stockName[userInputInt] = 0;
                stockPriceNow[userInputInt] = 0;
                stockPriceStart[userInputInt] = 0;

                printf("\nAll data for Stock %d successfully deleted.\n", userInputInt);
            }
            else if (userInputInt == 100) {
                printf("\nSuccessfully terminating deletion sequence.\n");
            }
            else {
                printf("\nInput must be equal to or greater than 0 and less or equal to 100.");
            }

        }


        // Price filter menu
        if (("%c", userInputStr[0]) == ("%c", "p"[0]) || ("%c", userInputStr[0]) == ("%c", "P"[0])) {
            didRun = 1;
            printf("\nYou have entered the Stock filter display menu.\n");
            printf("\nPlease enter the filter price to display all stocks at or above\n");
            printf("this specified price: ");
            scanf("%lf", &userInputDub);

            if (userInputDub >= 0) {
                for (i = 0; i < 100; ++i) {
                    if (stockPriceNow[i] >= userInputDub) {
                        printf("\nStock %d -- Stock price now: %0.2lf - Stock price start: %0.2lf\n", stockName[i], stockPriceNow[i], stockPriceStart[i]);
                    }
                }
                printf("\nAll data successfully parsed\n");
            }
            else {
                printf("\nInput must be equal to or greater than 0.\n");
                keepGoing = 1;
            }
        }


        // Show all menu
        if (("%c", userInputStr[0]) == ("%c", "s"[0]) || ("%c", userInputStr[0]) == ("%c", "S"[0])) {
            didRun = 1;
            for (i = 0; i < 100; ++i) {
                if (stockID[i] == 1) {
                    printf("\nStock %d -- Stock price now: %0.2lf - Stock price start: %0.2lf\n", stockName[i], stockPriceNow[i], stockPriceStart[i]);
                }
            }
            printf("All data successfully displayed\n");
        }


        // Quit menu
        if (("%c", userInputStr[0]) == ("%c", "q"[0]) || ("%c", userInputStr[0]) == ("%c", "Q"[0])) {
            didRun = 1;
            userInputStr[0] = "";
            printf("\nPlease retype Quit to confirm: ");
            scanf("%s", &userInputStr[0]);

            if (("%c", userInputStr[0]) == ("%c", "q"[0]) || ("%c", userInputStr[0]) == ("%c", "Q"[0])) {
                userInputStr[255] = ("%c", "q"[0]);
            }
            else {
                printf("Program end sequence successfully terminated. Returning to the main menu.\n");
            }
        }


        // Error handling
        if (keepGoing != 0) {
            printf("Changes successfully discarded. Returning to the main menu.\n");
        }

        if (didRun != 1) {
            printf("\n%s is not a valid option. Returning to the main menu.\n", userInputStr);
        }
    }

    // End program message
    printf("\nProgram is now ending. Thank you for using my tracking tool!\n");

    return 0;
}