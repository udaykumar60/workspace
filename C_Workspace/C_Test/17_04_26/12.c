//TRIANGLE VALIDITY//
#include <stdio.h>

int main() 
{
    // Setting up variables to hold our three angles and the total
    int a, b, c, sum = 0;

    // Ask the user to type in the three angles
    printf("Enter the angles in a triangle: ");
    
    // Grab the three numbers the user types in
    scanf("%d%d%d", &b, &a, &c);

    // Add them all up to see what we're working with
    sum = a + b + c;

    // A triangle is only real if the angles add up to exactly 180 degrees
    if (sum == 180) 
    {
        printf("VALID TRIANGLE\n");
    } 
    else 
    {
        printf("NOT A VALID TRIANGLE\n");
    }

    return 0; // End of the program.
}
