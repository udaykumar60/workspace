#include<stdio.h>

//Factors of a Number//


int factor(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\nCount :%d \n",count);
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	factor(n);
	return 0;
}
