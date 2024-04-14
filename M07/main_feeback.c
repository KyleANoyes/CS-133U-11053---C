#include <stdio.h>
#include <string.h>

double getMilesPerGallon(void)
{
    double mpg;
    printf("Enter the miles per gallon: ");
    scanf(" %lf", &mpg);
    while (mpg <= 0)
    {
        printf("not valid try again: ");
        scanf(" %lf", &mpg);
    }
    return mpg;
}

double getDollarsPerGallon(void)
{
    double dpg;
    printf("Enter the dollars per gallon: ");
    scanf(" %lf", &dpg);
    while (dpg <= 0)
    {
        printf("not valid try again: ");
        scanf(" %lf", &dpg);
    }
    return dpg;
}

double getMiles(void)
{
    double miles;
    printf("Enter total miles driven: ");
    scanf(" %lf", &miles);
    while (miles <= 0)
    {
        printf("not valid try again: ");
        scanf(" %lf", &miles);
    }
    return miles;
}

double calcDrivingCost(double milesPerGallon, double dollarsPerGallon, double miles)
{
    double drivingCost;
    drivingCost = (miles / milesPerGallon) * dollarsPerGallon;
    return drivingCost;
}


// Move to the bottom of the program so all functions can initialize correctly before executing program
int main(void) {
    double milesPerGallon;
    double dollarsPerGallon;
    double miles;
    char userChar;

    printf("Welcome to the driving cost calculator!\n\n");

    do {
        milesPerGallon = getMilesPerGallon();
        dollarsPerGallon = getDollarsPerGallon();
        miles = getMiles();
        printf("The cost of driving is $%.2lf\n\n", calcDrivingCost(milesPerGallon, dollarsPerGallon, miles));
        printf("Enter 'c' if you would like to calculate again: ");
        scanf(" %c", &userChar);
    } while (userChar == 'c' || userChar == 'C');

    printf("\nThank you for using the driving cost calculator!\n");

    return 0;
}