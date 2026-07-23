//WAP to print Decimal to binary//
#include <stdio.h>

int main() 
{
    int a, b, n, sum = 0;

    // Ask user for the binary number (e.g., 1011)
    printf("Binary:");
    scanf("%d", &a);

    // Ask how many digits are in that number (e.g., 4)
    printf("Digits in a binary :");
    scanf("%d", &n);

    // Loop through each digit from right to left
    // Note: Usually, for n digits, the loop should run from i=0 to i < n
    for(int i = 0; i < n; i++)
    {
        // 1. Get the last digit (the rightmost number) using remainder
        b = a % 10;            

        /* 2. Convert the digit to its decimal value.
           (1 << i) is a bitwise trick that calculates 2 to the power of i.
           If i=0, it's 1. If i=1, it's 2. If i=2, it's 4, and so on.
        */
        sum = sum + (b * (1 << i)); 

        // 3. Remove the last digit by dividing by 10 to prepare for the next loop
        a = a / 10;            
    }
    
    // Print the final decimal result
    printf("Decimal value: %d", sum);       
    
    return 0;
}
