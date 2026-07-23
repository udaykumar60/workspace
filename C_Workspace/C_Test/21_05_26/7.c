#include<stdio.h>

void sq(int *);

int main()
{
        int a=10;
        sq(&a);
}

void sq(int *z)
{
        int y=0;
        y=(*z)*(*z);
        printf("%d\n",y);
}
