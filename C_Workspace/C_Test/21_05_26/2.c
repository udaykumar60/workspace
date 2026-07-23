#include<stdio.h>

void  add(int *,int *,int *);

int main()
{
        int a=10,b=5,c=5;
        printf("%d %d %d\n",a,b,c);
        add(&a,&b,&c);
}

void add(int *x,int *y,int *z)
{
        int sum=0,t_sum=0;
        sum=*x+*y;
        t_sum=sum+*z;
        printf("%d\n",t_sum);
}


