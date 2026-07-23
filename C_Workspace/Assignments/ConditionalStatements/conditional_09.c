#include<stdio.h>
int main()
{
	//Write a program to find the maximum of two numbers using ternary operator.//
	int a,b;
	int max;
	printf("Enter the value of a and b \n");
	scanf ("%d%d",&a,&b);
	max = (a>b) ? a : b ;
	printf("%d greater than %d and %d \n",max,a,b);

	return 0;
}

