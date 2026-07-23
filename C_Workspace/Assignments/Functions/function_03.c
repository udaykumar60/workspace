//Write a function to check if a number is prime and return 1 or 0.//
#include<stdio.h>
int prime(int a)
{
	int count=0;
	int i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==2)
		printf("%d is a prime number \n",a);
	else
		printf("%d is not a prime number \n",a);

}
int main()
{
	int num;
	printf("Enter a number to check if its prime or not :");
	scanf("%d",&num);
	prime(num);
	return 0;
}

