#include<stdio.h>
int sum(int n)
{
	int a,sum=0;
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n/=10;
	}
	printf("%d \n",sum);
}
int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	sum(n);
}


