#include<stdio.h>
int main()
{
	//Write a program to take two integers and perform all arithmetic operations.//
	int a,b;
	int add,sub,mul;
	float div,mod;
	printf("Enter the values of a and  b \n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=(float)a/(float)b;
	mod=a%b;
	printf("Add of %d and %d is : %d \n",a,b,add);
	printf("Sub of %d and %d is : %d \n",a,b,sub);
	printf("Mul of %d and %d is : %d \n",a,b,mul);
	printf("Div of %d and %d is : %f \n",a,b,div);
	printf("Mod of %d and %d is : %f \n",a,b,mod);

	return 0;

}
	
