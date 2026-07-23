//C Program to reverse a number (for exampleinput: 1234, output: 4321).
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n;
    int rev=0,rem=0;
    while(n>0)
    {
        rem=n%10;
        rev=rem+(rev*10);
        n=n/10;
    }
    printf("THr Reverse of %d is %d",m,rev1);
    return 0;
}
