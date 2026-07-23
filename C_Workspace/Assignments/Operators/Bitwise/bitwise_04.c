#include<stdio.h>
int main()
{
	//Write a program to divide a number by 2 using the right shift operator.//
	int n,m;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	m=n>>1;
	printf("The Right shift of %d is :%d \n",n,m);

	return 0;
}

