#include<stdio.h>
int main()
{
	int *p=0;
	int a=10;
	p=&a;
	int **q;
	*q=p;
	printf("%d",**q);
	return 0;
}

