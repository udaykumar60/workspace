#include<stdio.h>
int main()
{
	//Write a program to count digits in a number using do-while loop.//
	int n,rem,m;
	int count=0;
	printf("Enter The number \n");
	scanf("%d",&n);
	m=n;
	do{
		rem=n%10;
		count++;
		n=n/10;
	}
	while(n>0);
	printf("The number of digits in %d is %d \n",m,count);
	return 0;
}
