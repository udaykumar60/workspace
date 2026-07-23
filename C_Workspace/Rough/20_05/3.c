//size of pointers//
#include<stdio.h>
int main()
{
	int a=10;
	char b='h';
	float c=1.025;
	int *p=&a;
	int *q=&b;
	int *r=&c;
	printf("%ld \n %ld \n %ld\n",sizeof(*q),sizeof(*q),sizeof(*r));
	return 0;
}
