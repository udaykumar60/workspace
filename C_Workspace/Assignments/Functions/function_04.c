//Write a function to calculate factorial of a number using recursion.//
#include<stdio.h>
int fact(int a)
{
	int f;
	if (a==0 || a==1)
		return 1;
	else
		f=a*fact(a-1);
		return f;
}

int main()
{
	int num;
	printf("Enter the number to find factorial : ");
	scanf("%d",&num);
	printf("\nThe factorial of the number %d is %d  ",num,fact(num));
        return 0;
}
