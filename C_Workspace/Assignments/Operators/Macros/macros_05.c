#include<stdio.h>
#define CUBE(x) ((x)*(x)*(x))
int main()
{
	//Write a macro-CUBE(x) and test it with expressions.//
	int a,b;
	printf("enter teh value of b\n");
	scanf("%d",&b);
	a=CUBE(b);
	printf("CUBE(%d) is %d \n",b,a);
	return 0;
	}

