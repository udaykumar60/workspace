// GCD & LCM //
#include <stdio.h>

int main() {
    int n, m, a, b, gcd, lcm;

    printf("Enter the two numbers for GCD & LCM :");
    scanf("%d%d", &n, &m); // Take two numbers as input

    // Store original values in a and b to keep n and m for LCM calculation
    a = n;
    b = m;

    // Euclidean Algorithm: Find GCD by taking remainders
    while(b > 0)
    {
        int temp = b;
        b = a % b; // Get the remainder
        a = temp;  // Shift values
    }

    gcd = a; // The last non-zero value is the GCD
    lcm = (n * m / gcd); // Formula: (n * m) = GCD * LCM

    printf("\nThe GCD is:%d\nThe LCM is:%d\n", gcd, lcm);
    
    return 0; // End of program
}
