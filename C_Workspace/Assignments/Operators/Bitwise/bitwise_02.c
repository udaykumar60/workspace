#include<stdio.h>
int main()
{
	//Write a program to find out whether a number is even or odd using a bitwise operator.//
	int n,m;
	printf("Enter the number \n");		
	scanf("%d",&n);
	m=n & 1;
	if (m==0)
		printf("%d is an even number \n",n);
	else
		printf(" %d is an odd number \n",n);

	return  0;
}
