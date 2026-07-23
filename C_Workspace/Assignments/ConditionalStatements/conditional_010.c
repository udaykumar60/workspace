#include<stdio.h>
int main()
{
	//Write a program to check if a person is eligible to vote (age ≥ 18) using ternary operator.//
	int n;
	char *age;
	printf("Enter the age \n");
	scanf("%d",&n);
	age=(n>=18) ? "Yes" : "No";
	printf("Is the person eligible for vote : %s \n",age);

	return 0;
}
