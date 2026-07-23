#include<stdio.h>
int main()
{
	//Count number of 1s (set bits) in a number.//
	int count=0,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(n>0)
	{
		if((n&1)==1)
		{
			count++;
		}
		n=n>>1;
	}
	printf("The number of 1's in ina given number is :%d \n",count);
	return 0;
}

