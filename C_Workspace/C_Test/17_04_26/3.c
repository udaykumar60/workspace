// VOTE ELIGIBILITY //
#include <stdio.h>

int main() {
    
    int n; // Variable to store age
    printf("enter the age to find eligibility : ");
    scanf("%d",&n); // Take age input from the user

    // Check if the age is 18 or older
    if(n >= 18)
    {
        // If age is 18+, the person can vote
        printf("ELIGIBLE TO VOTE \n");
    }
    else
    {
        // If age is less than 18, the person cannot vote
        printf("NOT ELIGIBLE TO VOTE \n");
    }
    
    return 0; // End of program
}
