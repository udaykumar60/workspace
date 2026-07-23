//void pointer//

#include<stdio.h>

int main()
{

	int a=5;
	char b='c';
	void *p;

        p=&a;
        printf("%d\n",*(int*)p);
        printf("%p\n",p);

       // ++p;

	p=&b;
        printf("%c\n",*(char*)p);
        printf("%p\n",p);

	return 0;
}
