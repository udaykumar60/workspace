//C program to find sum of all digits using recursion.
#include <stdio.h>

int sum(int);

int sum(int n)
{
    int count=n%10;
    if(n==0)
    {
        return 0;
    }
    else
    {
        return count+sum(n/10);
    }
}

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x==0)
    {
    printf("The sum of digits in %d are 0",x);
    }
    else
    {
        printf("The sum of digits in %d are %d",x,sum(x));
    }
    return 0;
}
