#include <stdio.h>
#include <stdlib.h> // Required for the abs() (absolute value) function

int main() {
    // An array of 10 numbers to check
    int a[3] = {45, 12, 89};

    /* THE MATH LOGIC:
       To find Max of x and y: ((x + y) + |x - y|) / 2
       To find Min of x and y: ((x + y) - |x - y|) / 2
       
       Example: x=10, y=2
       Max: (12 + 8) / 2 = 10
       Min: (12 - 8) / 2 = 2
    */

    // Stage 1: Compare the first two numbers (index 0 and 1)
    int max = ((a[0] + a[1]) + abs(a[0] - a[1])) / 2;
    int min = ((a[0] + a[1]) - abs(a[0] - a[1])) / 2;

    // Stage 2: Compare previous max/min with the 3rd number (index 2)
    max = ((max + a[2]) + abs(max - a[2])) / 2;
    min = ((min + a[2]) - abs(min - a[2])) / 2;
    // Print the final results
    printf("Final Maximum: %d\n", max);
    printf("Final Minimum: %d\n", min);

    return 0;
