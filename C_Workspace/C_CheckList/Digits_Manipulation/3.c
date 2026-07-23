//C Program to check number is prime or not.
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int count=0;
    if(n<2)
    {
        printf("%d is not Prime Number",n);
    }
    return 0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is Prime Number",n);
    }
    else
    {
        printf("%d is not Prime Number",n);
    }
    return 0;
}
