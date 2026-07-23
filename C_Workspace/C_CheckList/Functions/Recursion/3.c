//C program to count digits of a number using recursion.
#include <stdio.h>

int digit(int);

int digit(int n)
{
    int count=1;
    if(n==0)
    {
        return 0;
    }
    return count+digit(n/10);
}

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x==0)
    {
    printf("The number of digits in %d are 0",x);
    }
    else
    {
        printf("The number of digits in %d are %d",x,digit(x));
    }
    return 0;
}
