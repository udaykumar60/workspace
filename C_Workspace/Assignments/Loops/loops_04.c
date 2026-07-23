#include<stdio.h>
int main()
{
	//Write a program to find factorial of a number using for loop.//
	long int fact=1,n;
	printf("Enter the value of n \n");
	scanf ("%ld",&n);
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
		printf("the factorial of %ld number is %ld \n",n,fact);
	
	return 0;
}
