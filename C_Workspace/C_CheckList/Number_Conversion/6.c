
// Question: C program to convert number from Octal to Decimal.

#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, i = 0, rem;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        rem = octal % 10;
        decimal = decimal + rem * pow(8, i);
        octal = octal / 10;
        i++;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}
