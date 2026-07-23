//C Program to check number is perfect square or not.
#include <stdio.h>
#include <math.h>

int main() 
{
    int n,sq;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n<0) 
    {
        printf("%d is not a perfect square (as its a negative number).\n", n);
    } 
    else 
    {
        sq=sqrt(n);
        if (sq*sq==n) 
        {
            printf("%d is a perfect square.\n", n);
        } 
        else 
        {
            printf("%d is not a perfect square.\n", n);
        }
    }

    return 0;
}
