//C program to print fibonacci series using recursion.
#include <stdio.h>

int fib(int);

int fib(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main() 
{
    int x;
    printf("Enter the number to find the fibonacci:");
    scanf("%d",&x);
    printf("the fibonacci series is:");
    for (int i=0;i<x;i++)
    {
        printf("%d ",fib(i));
    }
    
}
