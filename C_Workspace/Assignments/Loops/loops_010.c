#include<stdio.h>
int main()
{
	//Write a program to print a star pattern (right triangle) using nested for loop.//
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


