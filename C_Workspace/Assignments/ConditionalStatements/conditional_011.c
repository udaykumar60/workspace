#include<stdio.h>
int main()
{
	//Write a program to check if a number is between 1 and 100 using if statement.//
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	if(n>1 && n<101)
		printf("%d is in betwen 1-100 \n",n);
	else
		printf("%d is not in between 1-100 \n",n);
}
