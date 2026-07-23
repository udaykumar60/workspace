//C Program to check number is palindrome or not.
#include <stdio.h>
#include<math.h>

int main()
{
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n,pal=0,p;
    while(n>0)
    {
        p=n%10;
        pal=pal*10+p;
        n=n/10;
    }
    if(pal==m)
    {
        printf("%d is palindrome ",m);
    }
    else
    {
        printf("%d is not palindrome ",m);
    }
    return 0;
}
