//C program to read weekday number and print weekday name using switch.

#include <stdio.h>

int main() 
{
    int c;
    printf("enter the weekday number:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("SUNDAY");
        break;
        case 2:
        printf("MONNDAY");
        break;
        case 3:
        printf("TUESDAY");
        break;
        case 4:
        printf("WEDNESDAY");
        break;
        case 5:
        printf("THURSDAY");
        break;
        case 6:
        printf("FRIDAY");
        break;
        case 7:
        printf("SATURDAY");
        break;
        default:
        printf("INVALID CHOICE");
    }
    return 0;
}
