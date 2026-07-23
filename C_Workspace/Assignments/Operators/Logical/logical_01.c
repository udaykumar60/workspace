#include<stdio.h>
int main()
{
	//Check whether a number is divisible by both 3 and 7//
	int a;
	printf("enter the value of a \n");
	scanf("%d",&a);
	if(a%3==0 && a%7==0)
		printf("%d is divisible by both 3 and 7 \n",a);
	else
		printf("%d is not divisible by both 3 and 7\n",a);

	return 0;
}
