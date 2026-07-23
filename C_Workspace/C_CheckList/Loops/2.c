//C Program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit.
#include <stdio.h>

int main() 
{
    int num;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0) {
            printf("%d is POSITIVE.\n", num);
        } else if (num < 0) {
            printf("%d is NEGATIVE.\n", num);
        } else {
            printf("The number is ZERO.\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } 
    while (choice == 'y' || choice == 'Y');
    {
    printf("Program terminated.\n");
    return 0;
    }
}
