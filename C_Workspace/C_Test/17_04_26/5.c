// NUMBER CHECK //
#include <stdio.h>

int main() {
    
    int n, count = 0;
    printf("enter the number: ");
    scanf("%d", &n);

    // Check if the number is positive, negative, or zero
    if(n > 0)
    {
        printf("POSITIVE \n");
    }
    else if(n < 0)
    {
        printf("NEGATIVE \n");
    }
    else
    {
        printf("ZERO \n");
    }

    // Check if the number is even or odd
    if(n % 2 == 0)
    {
        printf("EVEN \n");
    }
    else 
    {
        printf("ODD \n");
    }

    // Check if the number can be divided by 2, 3, and 5
    if(n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
    {
        printf("THE NUMBER IS DIVISIBLE BY 2,3,5 \n");
    }
    else
    {
        printf("THE NUMBER IS NOT DIVISIBLE BY 2,3,5 \n");
    }

    // Flip the sign of n to handle negative numbers for the count
    int temp = -n;

    // Determine digit count based on the range of the temp variable
    if (temp < 10) 
        count = 1;
    else if (temp < 100) 
        count = 2;
    else if (temp < 1000) 
        count = 3;
    else if (temp < 10000) 
        count = 4;
    else if (temp < 100000) 
        count = 5;
    else 
        count = 6;
    
    printf("COUNT : %d ", count);
    
    return 0; // End of program
}
