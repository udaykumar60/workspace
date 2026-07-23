//C program to print all prime numbers from 1 to N.
#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number to print all prime numbers from 1 to N: ");
    scanf("%d", &num);
    printf("Prime numbers from 1 to N: ");
    for(int i=2;i<=num;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
