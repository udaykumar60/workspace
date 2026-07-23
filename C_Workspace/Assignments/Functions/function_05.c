//Write a function that swaps two numbers using pointers (call by reference). //
#include<stdio.h>
int swap(int *a, int *b)
{
	int temp=0;
	
	temp= *a;
	*a=*b;
	*b=temp;

	printf("After swapping the numbers are:  %d %d ",*a,*b);
	printf("\n");
}
int main()
{
	int a,b;
	printf("Enter  a and b for swap : ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);

	return 0;
}



