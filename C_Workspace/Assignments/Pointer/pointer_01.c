#include<stdio.h>
int main()
{
	int x=50;
	int *p=&x;
	printf("%d\n",*p);
	printf("The data in the address of the variable\n");
	printf("%p\n",p);
	printf("the address of the variable \n");
	return 0;
}

