#include<stdio.h>
int main()
{
	int i,n,c;
	int a=0,b=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf(" The febnocci series is :%d %d",a,b);
	c=a+b;
	for(i=3;i<=n;i++)
	{
		printf(" %d",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}

