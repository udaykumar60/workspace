#include<stdio.h>
int main()
{
	//Write a program to classify a number as zero, positive, or negative using if-else-if.//
	int n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	if(n>0)
		printf("%d is a positive number \n",n);
	else if (n<0)
		printf("%d is a negative number \n",n);
	else
		printf("%d is a zero number  \n",n);
	return 0;


}

