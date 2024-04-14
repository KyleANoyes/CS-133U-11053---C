// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Kyle Noyes
# Assignment:       10
# Date:             March 17th, 2024
# Description:      This program will read a file of numbers and sum the rows
# Input:            numbers.txt
# Output:           output.txt ints, various state messages for user
#******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    FILE* inFile = NULL;
    FILE* outFile = NULL;
    int fileData1[250];
    int fileData2[250];
    int arrSize;
    int i;
    int calcResult;

    printf("Welcome to my Sum of Numbers Program!\n");
    printf("\nReading from text file...\n");

    // Check inFile exist
    inFile = fopen("numbers.txt", "r");
    // Check outFile exist
    outFile = fopen("output.txt", "w");

    if (inFile == NULL || outFile == NULL) {
        printf("\nThis file could not be opened.\n");
    }
    else {
        // Clear current data in output
        fprintf(outFile, "");

        // Get array size
        fscanf(inFile, "%d", &arrSize);

        // Construct data arrays
        for (i = 0; i < arrSize ; i++) {
            fscanf(inFile, "%d %d", &fileData1[i], &fileData2[i]);
        }

        // Process data calculations; output to file in series
        for (i = 0; i < arrSize; i++) {
            calcResult = fileData1[i] + fileData2[i];
            fprintf(outFile, "%d ", calcResult);
        }

        // Repeat loop for user display outpute
        printf("\nHere is your output also written to output.txt\n\n");
        for (i = 0; i < arrSize; i++) {
            calcResult = fileData1[i] + fileData2[i];
            printf("%d ", calcResult);
        }

        printf("\n\nThank you for using my program!\n");
    }

    // Close files. Leave outside of the else in case we catch a NULL case
    fclose(inFile);
    fclose(outFile);

    return 0;
}