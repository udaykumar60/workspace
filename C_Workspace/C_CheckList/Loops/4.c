//C Program to find sum of first N natural number, N must be taken by the user.
#include <stdio.h>

int main() 
{
    int num;
    int sum=0;
    printf("Enter a number to print sum of first N natural number: ");
    scanf("%d", &num);
    printf("Sum of first N natural number is:");
    for(int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
