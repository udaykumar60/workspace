//

#include<stdio.h>

int main()
{
	int* p;
	int  a=10,b=7;

	p=&a;
	printf("%d\n",*p);
	printf("%p\n",p);

	p++;

        p=&b;
        printf("%d\n",*p);
        printf("%p\n",p);
	
	return 0;
}
