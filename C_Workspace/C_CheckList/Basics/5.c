//Program to find largest number among three numbers.
#include <stdio.h>

int main() 
{
    float a,b,c;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Enter the number:");
    scanf("%f",&b);
    printf("Enter the number:");
    scanf("%f",&c);    
    if(a>b && a>c)
    {
    printf("%.2f is greater than %.2f %.2f",a,b,c);
    }
    else if(b>a && b>c)
    {
    printf("%.2f is greater than %.2f %.2f",b,a,c);
    }
    else
    {
    printf("%.2f is greater than %.2f %.2f",c,a,b);
    }
}
