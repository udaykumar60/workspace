//C Program to check number is Armstrong or not.
#include <stdio.h>
#include<math.h>

int main()
{
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n,o=n,arm=0,a;
    while(o>0)
    {
        count++;
        o=o/10;
    }
    while(n>0)
    {
        a=n%10;
        arm=pow(a,count)+arm;
        n=n/10;
    }
    if(arm==m)
    {
        printf("%d is Armstrong ",m);
    }
    else
    {
        printf("%d is not Armstrong ",m);
    }
    return 0;
}
