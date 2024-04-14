#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
const double PI = M_PI;
const double LOAD_FACTOR = 0.698;

int main(void) {

    // Declarations and initializations
    double beanHeight = 0.0;
    double beanWidth = 0.0;
    double beanVol = 0.0;
    double beanVolMax = 0.0;
    int beanEst = 0;
    double beanEstMax = 0.0;
    double beanTotal = 0;
    int jarVol = 0;
    int jarVolMax = 0;
    char userInputStr[256] = "";
    double runCount = 0.0;

    // Initial input always yes - starts while loop
    userInputStr[0] = ("%c", "y"[0]);

    printf("Welcome to my estimator for Jellybeans-in-the-jar!\n");

    // Program run loop
    while (("%c", userInputStr[0]) == ("%c", "y"[0]) || ("%c", userInputStr[0]) == ("%c", "Y"[0])) {
        // Clear and set null data
        beanHeight = 0.0;
        beanWidth = 0.0;
        beanEst = 0.0;
        
        // Intro block
        printf("\nPlease enter the Length and Height of the Jellybean in CM.\n");
        printf("Data must be separated by a space (ie: 2.1 3.4): ");
        
        // Data input
        // Space seperates the two double inputs
        scanf("%lf%lf", &beanHeight, &beanWidth);
        printf("Given Jellybean height: %0.2lf\n", beanHeight);
        printf("Given Jellybean Width: %0.2lf\n", beanWidth);

        printf("\nPlease enter the jar size in ml: ");
        scanf("%d", &jarVol);
        printf("Given jar volume: %d\n", jarVol);

        // Calculations
        beanVol = (5 * PI * beanHeight * pow(beanWidth, 2)) / 24;
        beanEst = (jarVol * LOAD_FACTOR) / beanVol;
        beanTotal = beanTotal + beanEst;
        printf("\nEstimated number of beans in the jar: %d\n", beanEst);

        // Ref. video is for C++, not C. Using same logic
        // principles demonstrated in the video.
        if (beanVol > beanVolMax) {
            beanVolMax = beanVol;
        }
        if (beanEst > beanEstMax) {
            beanEstMax = beanEst;
            jarVolMax = jarVol;
        }

        // Check for new run
        printf("\nWould you like to run this program again? (Yes/No): ");
        scanf("%s", &userInputStr);
        runCount = runCount + 1;


    }
    printf("\nTotal entries given: %.0lf\n", runCount);
    printf("The average number of Jellybeans was: %0.2lf\n", (beanTotal / runCount));
    printf("The biggest Jellybean was: %0.2lf cm^3\n", beanVolMax);
    printf("The jar size for the largest Jellybean est. was: %dml\n", jarVolMax);
    
    printf("\nThanks for using this calculator!\n");

    return 0;
}