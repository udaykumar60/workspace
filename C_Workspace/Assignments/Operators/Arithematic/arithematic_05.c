#include<stdio.h>
int main()
{
 	//Write a program to reverse a number using arithmetic operators//
	int rem,n,m;
	int rev=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem = n % 10;
		rev=rem+(rev*10);
	 	n/=10;
	}
	printf("The reserve of number %d is :%d \n",m,rev);
	return 0;

	}
