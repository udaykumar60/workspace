//C Program to find factorial of a number.
#include <stdio.h>

int main() 
{
    int num;
    int res=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("the Factorial of the number %d is:");
    for(int i=1;i<=num;i++)
    {
        res=(num*i);
    }
    printf("%d",res);
    return 0;
}
