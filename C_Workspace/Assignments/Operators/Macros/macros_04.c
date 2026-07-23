#include<stdio.h>
#define SQUARE(x) ((x)*(x))
int main()
{
	//Write a macro-SQUARE(x) to compute square of a number and test it with: SQUARE (5), SQUARE (2+3)//
	int a,b;
	a=SQUARE(5);
	b=SQUARE(2+3);
	printf("Square(5) is :%d \n",a);
	printf("Square(2+3) is : %d \n",b);
	return 0;
}
