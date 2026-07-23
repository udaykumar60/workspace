#include<stdio.h>
int add(int a , int b)
{
	return a+b;
}
void sub(int a, int b)
{
	printf("Sub is %d \n",(a-b));
}
int mul()
{
	int a=10,b=5;
	return a*b;
	}
void div()
{
	int a=4,b=2;
	printf("Div is %d \n",(a/b));
}
int main()
{
	int n=mul();
	printf("Add is %d \n",add(5,5));
	sub(8,5);
	printf("Mul is %d \n",n);
	div();
	return 0;
}

