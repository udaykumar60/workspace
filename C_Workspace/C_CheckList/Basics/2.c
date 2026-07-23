//Program to find sum and average of two numbers.
#include <stdio.h>

int main() 
{
    int a,b;
    float sum=0,avg=0;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the vale of b:");
    scanf("%d",&b);
    sum=a+b;
    avg=sum/2;
    printf("the sum of two numbers is : %.2f",sum);
    printf("\nThe average of two numbers is : %.2f",avg);
    return 0;
}
