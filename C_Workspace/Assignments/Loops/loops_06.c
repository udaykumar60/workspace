#include<stdio.h>
int main()
{
	//Write a program to print Fibonacci series up to N terms using for loop.//
	int i,n;
	int a=0,b=1,c;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("The febnocci series is : %d%d",a,b);
	for (i=3;i<=n;i++)
	{
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
	}
	printf("\n");
	return 0;
}
