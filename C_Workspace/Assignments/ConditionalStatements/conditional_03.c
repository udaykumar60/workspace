#include<stdio.h>
int main()
{
	//Write a program to find the largest of three numbers using if-else-if ladder.//
	int a,b,c;
	printf("Enter the values of a , b , c \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("%d is greater than %d and %d \n",a,b,c);
	else if(b>c && b>a)
		printf("%d is greater than %d and %d \n",b,a,c);
	else
		printf("%d is greater than %d and %d \n",c,a,b);
	return 0;
}
