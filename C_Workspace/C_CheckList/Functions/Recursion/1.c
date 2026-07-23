//C program to find factorial using recursion.
#include <stdio.h>

int fact();

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main() 
{
    int x;
    printf("Enter the number to find the factorial:");
    scanf("%d",&x);
    printf("the Factorial of %d is: %d",x,fact(x));
}
