#include<stdio.h>
int main()
{
	//Write a program to reverse a number using while loop//
	int n,rem,rev=0;
	printf("Enter the number \n");
	scanf("%d",&n);
	int m=n;
	while(n>0)
	{
		rem=n%10;
		rev=rem+(rev*10);
		n=n/10;	
	}
	printf("The reverse of number %d is %d \n",m,rev);
	return 0;
}

