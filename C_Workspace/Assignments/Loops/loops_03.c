#include<stdio.h>
int main()
{
	//Write a program to calculate sum of first N natural numbers using do-while loop.//
	int n,sum=0,i=0;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);{
		printf("the sum of first n natural numbers is %d \n",sum);
	}
	return 0;
}
