//C Program to count digits in a numbers.
#include <stdio.h>
#include<math.h>

int main()
{
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n;
    while(n>0)
    {
        count++;
        n/=10;
    }
    printf("The Digits in th number %d is %d",m,count);
    return 0;
}
