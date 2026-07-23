//Swap of two nos using pointer//

#include<stdio.h>

int swap(int *,int *);

int main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("Swap of numbers is : %d %d ",a,b);
}

int swap(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}

	
