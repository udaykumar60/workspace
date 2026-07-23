#include<stdio.h>
int main()
{
	//Swap using a 3rd variable//
	int a,b,c;
	printf("enter the values of a and b \n");
	scanf("%d%d",&a,&b);
	printf("Before swapping is : %d %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping is: %d %d \n",a,b);
}	
