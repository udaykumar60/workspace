//C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.
#include <stdio.h>

int array(int [],int);

int array(int p[],int q)
{
    int c=0;
    printf("Sum of all Array Elements are:");
    for(int i=0;i<q;i++)
    {
        c=c+p[i];
    }
    printf(" %d",c);
}

int main()
{
    int n;
    printf("Enter the range:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    array(a,n);
    return 0;
}
