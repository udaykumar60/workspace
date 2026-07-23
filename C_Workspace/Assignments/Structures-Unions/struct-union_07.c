//WAP to demonstrate the memory difference between a Structure and a Union.
#include<stdio.h>

struct diff
{
	int a;
	double y;
};

union deff
{
	int a;
	double y;
};

int main()
{
	struct diff d;
	union deff c;
	printf("the size of the struction is : %zu bytes \n",sizeof(d));
	printf("the size of the union is : %zu bytes \n",sizeof(c));

	return 0;
}
