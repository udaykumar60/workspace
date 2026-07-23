// EVEN NUMBER WITH IN RANGE //
#include <stdio.h>

int main() {
    
    int n;
    printf("enter the number: ");
    scanf("%d",&n); // Take the range limit from user
    
    printf("Even number with in n are : ");
    
    // Start a loop from 1 and go up to n
    for(int i=1; i<=n; i++)
    {
        // Check if the current number 'i' is divisible by 2
        if(i%2==0)
        {
            // If remainder is 0, it's even, so print it
            printf("%d \t",i);
        }
    }
    
    return 0; // End of program
}
