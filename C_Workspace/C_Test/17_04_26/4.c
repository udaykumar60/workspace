// SALARY BONUS //
#include <stdio.h>

int main() {
    
    int n; // Variable to store years of experience
    printf("enter the experience: ");
    scanf("%d",&n); // Take input from the user

    // Check if experience is between 11 and 24 years
    if(n>10 && n<25)
    {
        printf("30%% Bonus \n");
    }
    // Check if experience is 10 years or less
    else if(n<=10)
    {
        printf("20%% Bonus \n");
    }
    // For anyone with 25 years of experience or more
    else
    {
        printf("5%% Bonus \n");
    }
    
    return 0; // Exit program
}
