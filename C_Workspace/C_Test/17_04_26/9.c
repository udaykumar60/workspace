// FIBONACCI AND SUM //
#include <stdio.h>

int main() {
    
    int n;
    int sum = 0; // Stores the total sum of the sequence
    int a = 0, b = 1; // Starting numbers of Fibonacci
    int fib;
    
    printf("enter the range: ");
    scanf("%d", &n); // n determines how many terms to print
    
    printf("The fibonacci numbers are: ");
    
    // Loop runs from 0 to n to generate the sequence
    for(int i = 0; i <= n; i++)
    {
        printf("%d\t", a); // Print the current number
        sum = sum + a;    // Add the current number to the total sum
        
        fib = a + b;      // Calculate the next number
        a = b;            // Move the value of b into a
        b = fib;          // Move the new sum into b
    }
    
    printf("\nThe sum of the fibonacci is : %d \n", sum);
    
    return 0; // End of program
}
