#include<stdio.h>
int main()
{
        int x=50;
        int *p=&x;
	int **y=&p;
        printf("%d\n",*p);
        printf("%d\n",**y);
        
        return 0;
}

