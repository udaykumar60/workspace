#include<stdio.h>
int main()
{ 
	//Create a simple calculator using logical operators.//
	char ch;
	float a,b;
	printf("Select the options: * + - / \n");
	scanf(" %c",&ch);
	printf("Enter the values of two number \n");
	scanf("%f%f",&a,&b);
	if(ch =='*')
		printf("The Multiplication of two numbers is: %f \n",a*b);
	else if(ch =='-')
                printf("The Subtraction of two numbers is: %f \n",a-b);
	else if(ch == '+')
                printf("The Addtion of two number is: %f\n",a+b);
	else if(ch == '/')
		printf("The Division of two numbers is: %f \n",a/b);
	else
		printf("Invalid choice\n");
	return 0;
}

