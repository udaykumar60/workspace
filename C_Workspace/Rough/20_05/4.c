//Function pointers//
#include<stdio.h>

int sum(int *,int *);

int main()
{
	int a=10,b=20,result=0;
	result=sum(&a,&b);
	printf("%d \n",result);
	printf("%d\n",a);

}

int sum (int *x,int *y)
{
	*x=*x+*y;
}

