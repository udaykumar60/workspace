#include<stdio.h>
int main()
{
	//Check whether a number is multiple of 2 OR 5//
	int n;
	printf("Enter the value of .n \n");
	scanf("%d",&n);
	if(n%2==0)
		printf("%d is a multipleof 2 \n",n);
	else if(n%5==0)
		printf("%dis a multiple of 5 \n",n);
	else 
		printf("%d is neither a multiple of 2 nor a multiple of 5 \n",n);
	return 0;
}
