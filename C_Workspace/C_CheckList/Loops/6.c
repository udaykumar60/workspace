//C program to print all even and odd numbers from 1 to N.
#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number to print all even and odd numbers from 1 to N: ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            printf("\n%d is an Even Number ",i);
        }
    }
    printf("\n");
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            printf("\n%d is an Odd Number ",i);
        }
    }
    return 0;
}
