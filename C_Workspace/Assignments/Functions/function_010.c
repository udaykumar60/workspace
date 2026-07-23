//Write a recursive function to print Fibonacci series up to n terms. 
#include<stdio.h>

int feb(int x)
{
	int a=0,b=1;
	int c=a+b;
	printf("The febnocci series is %d %d",a,b);
	for (int i=3;i<x;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf(" %d ",c);
	}

}
int main()
{
	feb(5);
	return 0;
	
}

