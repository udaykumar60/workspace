#include<stdio.h>
int main()
{
	//Write a program to find sum of digits of a number using while loop.//
	int n,m,rem,sum=0;
	printf("enter the number \n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		sum=rem+sum;
		n=n/10;
	}
	printf("The sum of %d is %d \n",m,sum);
	return 0;
}
