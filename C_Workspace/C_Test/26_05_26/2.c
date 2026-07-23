//Fibnocci till nth term //

#include<stdio.h>

void feb(int n);

int main()
{
	int a;
	printf("Enter the number for febnocci series:");
	scanf("%d",&a);
	feb(a);
}


void feb(int n)
{
	int a=0,b=1,nxt;
	printf("%d %d ",a,b);
	for(int i=2;i<n;i++)
	{
		nxt=a+b;
		printf("%d ",nxt);
		a=b;
		b=nxt;
	}
	printf("\n");
}

