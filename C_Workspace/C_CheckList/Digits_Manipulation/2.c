//C Program to calculate SUM & PRODUCT of all digits.
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n;
    int sum,pro=1,rem;
    sum=rem=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        if(rem!=0)
        {
            pro=pro*rem;
        }
        n=n/10;
    }
    printf("The Sum of %d is %d\nThe Product of %d is %d\n",m,sum,m,pro);
    return 0;
}
