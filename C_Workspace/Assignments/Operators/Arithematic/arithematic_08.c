#include<stdio.h>
int main()
{
	//Swap two numbers without using third variable (usingarithmetic operators).//
	
	int a,b;
	printf("Enter the values of a and b \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapping two variables withut 3rd variable we get : %d %d \n", a,b);

	
}
