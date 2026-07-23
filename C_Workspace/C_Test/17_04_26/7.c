// FACTORIAL USING WHILE LOOP //
#include <stdio.h>

int main() {
    
    int n, fact = 1; // 'fact' must start at 1 for multiplication
    printf("enter the number: ");
    scanf("%d", &n);
    
    // The loop continues as long as n is greater than 0
    while(n > 0)
    {
        fact = fact * n; // Multiply current factorial by n
        n--; // Decrease n by 1 in each step
    }
    
    printf("The factorial is : %d \n", fact);
    
    return 0; // End of program
}
