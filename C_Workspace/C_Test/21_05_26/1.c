#include<stdio.h>

void  swap(int *,int *);

int main()
{
	int a=10,b=5;
	printf("%d %d \n",a,b);
	swap(&a,&b);
}

void swap(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("%d %d \n",*x,*y);
}

