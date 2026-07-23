//Program to find the difference of two numbers.
#include <stdio.h>
#include <math.h>
int main() 
{
    float x,n,result;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Enter the value of y:");
    scanf("%f",&n);
    result=(x-n);
    printf("The difference btw of %.2f to %.2f is : %.2f",x,n,result);
    return 0;
}
