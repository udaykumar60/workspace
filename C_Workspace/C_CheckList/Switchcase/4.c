//C program to design calculator with basic operations using switch.
#include <stdio.h>
#include <math.h>

int main() 
{
    int c;
    float a, b; 
    printf("=========== SIMPLE CALCULATOR ===========\n");
    printf("1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.POWER\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    if (c >= 1 && c <= 5) {
        printf("Enter the values of 1st and 2nd numbers: ");
        scanf("%f %f", &a, &b);
    }
    switch(c)
    {
        case 1:
            printf("ADDITION is: %.2f\n", a + b);
            break;
        case 2:
            printf("SUBTRACTION is: %.2f\n", a - b);
            break;
        case 3:
            printf("MULTIPLICATION is: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("DIVISION is: %.2f\n", a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;
        case 5:
            printf("POWER (%.2f^%.2f) is: %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("INVALID CHOICE\n");
    }
    return 0;
}
