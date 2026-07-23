#include<stdio.h>
int main()
{
	//Write a program to check if a number is prime using while loop.//
	int n,i=1,count=0;
	printf("Enter the number \n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
	i++;
	}
	if(count==2)
		printf("%d is a prime number \n",n);
	else
		printf("%d is not a prime number \n",n);

	return 0;
}
