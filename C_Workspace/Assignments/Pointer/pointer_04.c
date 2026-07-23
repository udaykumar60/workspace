//WAP to swap two numbers using the Call by Reference method (pointers).//
#include<stdio.h>
int main()
{
	int x,y;
	int *a=&x;
	int *b=&y;
	int *temp=0;
	printf("Enter the values before swap : ");
	scanf("%d%d",&x,&y);
	temp=a;
	a=b;
	b=temp;
	printf("\nThe values after swap are : %d %d ",*a,*b);
        printf("\n");
	return 0;
}

