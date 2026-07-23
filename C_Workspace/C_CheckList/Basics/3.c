//Program to calculate simple interest.
#include <stdio.h>

int main() 
{
    int a;
    float b,c,d;
    printf("Enter the value of Principal amount:");
    scanf("%d",&a);
    printf("Enter the value of Annual interest rate:");
    scanf("%f",&b);
    printf("Enter the value of Time (in years):");
    scanf("%f",&c);
    d=a*b*c;
    printf("the simple interest. is : %.2f",d);
    return 0;
}
