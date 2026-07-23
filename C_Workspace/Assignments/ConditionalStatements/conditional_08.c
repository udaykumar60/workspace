#include<stdio.h>
int main()
{
	//Write a program to check if a number is divisible by both 3 and 5 using logical operators inside if.//
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
		printf("%d is divisible by both 3 and 5 \n",n);
	else
		printf("%d is not divible by 3 and 5 \n",n);

	return 0;
}
