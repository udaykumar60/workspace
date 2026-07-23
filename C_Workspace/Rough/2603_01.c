#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(int i=0;i<=12;i++)
	{
		printf("\n %d x %d = %d \n ",n,i,(n*i));
	}
	return 0;
}

