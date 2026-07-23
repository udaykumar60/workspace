#include<stdio.h>

void inc(int *);

int main()
{
	int a=1;   
     	inc(&a);
}

void inc(int *z)
{
	int y=0;
	y=++(*z);
	printf("%d\n",y);
}


