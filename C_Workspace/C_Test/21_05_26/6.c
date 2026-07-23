#include<stdio.h>

void change(int *,int *,int *);

int main()
{
        int a=1,b=2,c=3;
	printf("%d %d %d \n",a,b,c);
        change(&a,&b,&c);
}

void change(int *x,int *y,int *z)
{
       	
	int o=4;
	int *ch=&o;
	*z=*ch;
        printf("%d %d %d\n",*x,*y,*z);
}
