//C program to find SUM and AVERAGE of two integer Numbers using User Define Function
#include <stdio.h>

int sum_avg(int , int);

int sum_avg(int p , int q )
{
    int x,y;
    x=p+q;
    y=x/2;
    printf("The Sum of %d , %d is : %d",p,q,x);
    printf("\nThe Avg of %d , %d is : %d",p,q,y);
}

int main()
{
    int a,b;
    printf("Enter the numbers a,b:");
    scanf("%d %d",&a,&b);
    sum_avg(a,b);
    return 0;
}
