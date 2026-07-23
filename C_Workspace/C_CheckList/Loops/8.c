//C program to print square, cube and square root of all numbers from 1 to N.
#include <stdio.h>
#include<math.h>
int main() 
{
    int n;
    printf("Enter the n value to print square, cube and square root of all numbers from 1 to N:");
    scanf("%d",&n);
    printf("\n");
    for (int i=1;i<=n;i++)
    {
        float r=0;
        r=i*i;
        printf("Squares from 1 to %d are: %.2f ",n,r);
        printf("\n");
    }
    printf("\n");
    for (int j=1;j<=n;j++)
    {
        float r=0;
        r=j*j*j;
        printf("Cubes from 1 to %d are: %.2f ",n,r);
        printf("\n");
    }
    printf("\n");
    for (int k=1;k<=n;k++)
    {
        float r=0;
        r=sqrt(k);
        printf("SquareRoot from 1 to %d are: %.2f ",n,r);
        printf("\n");
    }    
    return 0;
}
