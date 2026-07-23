#include<stdio.h>
int main()
{
	//Write a program to perform bitwise AND OR XOR on two integers.//
	int a,b;
	int c,d,e;
	printf("Enter the values of a , b \n");
	scanf("%d %d",&a,&b);
	c=a&b;
	d=a|b;
	e=a^b;
	printf("The AND operation of %d and %d is : %d \n",a,b,c);
	printf("The OF operation of %d and %d is: %d \n", a,b,d);
	printf("The XOR operation of %d and %d is : %d \n",a,b,e);
	return 0;
}
