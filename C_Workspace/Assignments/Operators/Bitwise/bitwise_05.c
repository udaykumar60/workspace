#include<stdio.h>
int main()
{
	//Swap two numbers using the XOR operator (without the third variable).//
	int a,b;
	printf("enter the values of a and b \n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The values of a and b after swapping are : %d %d \n",a,b);
	return 0;
}

