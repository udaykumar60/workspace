#include<stdio.h>
int main()
{
	//Check whether a number is divisible by 5 and 11.//
	int a;
	printf("enter the value of a\n");
	scanf("%d",&a);
	if (a%5==0 && a%11==0)
		printf("%d is divisible by both 5 and 11 \n",a);
	else 
		printf("%d is not divisible by 5 and 11 \n",a);
	return 0;
}
