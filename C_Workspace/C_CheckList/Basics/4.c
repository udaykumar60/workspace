//Program to check whether number is EVEN or ODD.
#include <stdio.h>

int main() 
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("%d is Even",a);
    }
    else
    {
    printf("%d is Odd",a);    
    }

}
