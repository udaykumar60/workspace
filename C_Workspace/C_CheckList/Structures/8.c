
//C Program to add two distances in feet and inches using structure.

#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    printf("Enter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // If inches >= 12, convert to feet
    if (sum.inches >= 12.0) {
        sum.feet = sum.feet + 1;
        sum.inches = sum.inches - 12.0;
    }

    printf("\nSum = %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
