#include<stdio.h>
#define AVERAGE(a,b,c) (((a)+(b)+(c))/3)
int main()
{
	//Write a macro-AVERAGE(a,b,c) to calculate an average of three numbers.//
	int a,b,c;
	printf("Enter the values of a , b , c \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("The average value of %d %d %d is: %d \n",a,b,c,AVERAGE(a,b,c));
	return 0;
}
