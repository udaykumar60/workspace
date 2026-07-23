#include <stdio.h>

int main() 
{
    int choice, num;
    printf("=========== EVEN / ODD CHECKER ===========\n");
    printf("1. Check if Even\n2. Check if Odd\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        printf("Enter the number: ");
        scanf("%d", &num);
    }

    switch(choice)
    {
        case 1:
            if (num % 2 == 0)
                printf("%d is an EVEN number.\n", num);
            else
                printf("%d is NOT an even number (it is odd).\n", num);
            break;
            
        case 2:
            if (num % 2 != 0)
                printf("%d is an ODD number.\n", num);
            else
                printf("%d is NOT an odd number (it is even).\n", num);
            break;
            
        default:
            printf("INVALID CHOICE. Please enter 1 or 2.\n");
    }
    return 0;
}
