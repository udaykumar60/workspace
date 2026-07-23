//Program to multiply two numbers using plus operator.
#include<stdio.h>
int main() 
{
    int a,b,res=0;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b); 
    for(int i=0;i<b;i++)
    {
        res=res+a;
    }
    printf("Multiply two numbers using plus operator %d and %d is: %d",a,b,res);
    return 0;
}
