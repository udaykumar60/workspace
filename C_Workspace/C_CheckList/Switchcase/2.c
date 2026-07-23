//C program to read gender (M/F) and print corresponding gender using switch.

#include <stdio.h>

int main() 
{
    char c;
    printf("M/F");
    printf("\nEnter the choice:");
    scanf("%c",&c);
    switch(c)
    {
        case 'M':
        case 'm':
        printf("MALE");
        break;
        case 'F':
        case 'f':
        printf("FEMALE");
        break;;
        default:
        printf("INVALID CHOICE");
    }
    return 0;
}
