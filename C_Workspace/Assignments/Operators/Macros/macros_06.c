#include<stdio.h>
#define MAX(a,b) ((a),(b))
int main()
{
	//Define a macro-MAX(a,b) to return a maximum of two numbers.//
	int a,b,c;
	printf("Ente rthe value of a and b \n");
	scanf("%d%d",&a,&b);
	c=MAX(a,b);
	printf("Maximum of two number is :%d \n",c);
	return 0;
}
