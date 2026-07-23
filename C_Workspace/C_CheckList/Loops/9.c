//C program to print all leap years from 1 to N.
#include <stdio.h>
#include<math.h>
int main() 
{
    int n;
    printf("Enter the n to print all leap years from 1 to N:");
    scanf("%d",&n);
    printf("\n");
    for (int i=1;i<=n;i++)
    {
        if(i%400==0)
        {
            printf("%d is a Leap Year",i);
            printf("\n");
        }
        else
        {
            if(i%4==0 && i%100!=0)
            {
                printf("%d is a Leap Year",i);
                printf("\n");
            }
        }
    }
    return 0;
}
