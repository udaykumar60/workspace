#include<stdio.h>
int main()
{
	//Check whether a number is powered by 2 using a bitwise operator.//
	int n;
	printf("enter the value of n \n");
	scanf("%d",&n);
	if ((n&1)==0)
		printf("%d is a number powered by 2 \n",n);
	else
		printf("%d is not a number oewered by 2\n",n);		
	
	return 0;
}
