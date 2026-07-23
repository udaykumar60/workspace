#include<stdio.h>
int main()
{
	//WAP to add two numbers using pointers.//
	int x,y;
	int *a,*b;
	printf("Enter the values of two number : ");
	scanf("%d%d",&x,&y);
	printf("\n");
	a=&x;
	b=&y;
	printf("The sum of two values using pointer is : %d",(*a+*b));
	printf("\n");
	return 0;
}
