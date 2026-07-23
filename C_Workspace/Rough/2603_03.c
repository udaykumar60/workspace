#include<stdio.h>
int reverse(int n)
{
	int rev=0,rem;
	int m=n;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
	}
	printf("%d %d \n",m,rev);
}
int main()
{
	int n;
	printf("Enter n \n");
	scanf("%d",&n);
	reverse(n);
}
