//C program to print Table of an Integer Number using User Define Functions.
#include <stdio.h>

int Table(int);

int Table(int p)
{
    for(int i=1;i<=12;i++)
    {
        printf("\n%d x %d = %d",p,i,p*i);
    }
}

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    Table(a);
    return 0;
}
