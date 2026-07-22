#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"
int main(){
	int a,b;
	printf("Enter the a value: ");
	scanf("%d",&a);
	printf("Enter the b value: ");
	scanf("%d",&b);
		printf("\nAdtion of two numbers: %d\n",add(a,b));
	        printf("Subtraction of two numbers: %d\n",sub(a,b));       
	       	printf("Multiplication of two numbers: %d\n",mul(a,b));       
	       	printf("Division of two numbers: %d\n",division(a,b));
		return 0;
}
