#include<stdio.h>

void ed(int *);

int main()
{
        int a=1;
        ed(&a);
}

void ed(int *z)
{
	if(*z%2==0)
		printf("EVEN\n");
	else
		printf("ODD\n");

}
