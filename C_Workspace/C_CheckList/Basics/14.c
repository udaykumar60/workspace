//Program to calculate HCF of two numbers.
#include<stdio.h>
int main() 
{
    int a,b,rem;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b); 
    int x=a;
    int y=b;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("HCF of two numbers %d and %d is:%d",x,y,a);
    return 0;
}
