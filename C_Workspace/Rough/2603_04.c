#include<stdio.h>
void type(int n)
{
	int m;
	m=(float)n;
	printf("%d \n",m);
}
int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	type(n);
}


