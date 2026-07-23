//Program to calculate X^N (X to the power of N) using pow function.
#include <stdio.h>
#include <math.h>
int main() 
{
    float x,n,result;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Enter the value of power:");
    scanf("%f",&n);
    result=pow(x,n);
    printf("The power of %.2f to %.2f is : %.2f",n,x,result);
    return 0;
}
