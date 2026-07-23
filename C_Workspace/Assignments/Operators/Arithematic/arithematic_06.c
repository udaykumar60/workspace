#include<stdio.h>
int main ()
{
	//Find sum of digits of a number.//
	int m,i,n,rem;
	int rev=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev+rem;
		n/=10;
	}
	printf("The sum the number %d is :%d \n",m,rev);
	return 0;
	}

