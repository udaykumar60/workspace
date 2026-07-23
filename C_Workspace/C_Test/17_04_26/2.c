// SEASONS USING SWITCH //
#include <stdio.h>

int main() {
    
    int n;
    printf("enter the number to find the season : ");
    scanf("%d",&n);

    // Check the month number to decide the season
    switch(n)
    {
        // Months 2, 3, 4, 5, and 6 are Summer
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("SUMMER \n");
            break; // Stop here if it's Summer

        // Months 7, 8, and 9 are Rainy
        case 7:
        case 8:
        case 9:
            printf("RAINY \n");
            break; // Stop here if it's Rainy

        // Months 1, 10, 11, and 12 are Winter
        case 1:
        case 10:
        case 11:
        case 12:
            printf("WINTER \n");
            break; // Stop here if it's Winter

        // If the number is not between 1 and 12
        default:
            printf("INVALID");
    }
    
    return 0; // End of program
}
