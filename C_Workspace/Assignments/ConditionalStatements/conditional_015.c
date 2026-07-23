#include<stdio.h>
int main()
{
	//Write a program to calculate electricity bill based on units consumed (0–50: ₹0.50/unit, 51–150: ₹0.75/unit, >150: ₹1.20/unit) using if-else-if.//
	float n;
	printf("Enter the units \n");
	scanf("%f",&n);
	if(n>=0 && n<=50)
		printf("Your electricity bill for %.3f units is %.3f \n",n,(n*0.50));
	else if(n>=51 && n<=150)
		printf("Your electricity bill for %.3f units is %.3f \n",n,(n*0.75));
	else 
		printf("Your electricity bill for %.3f units is %.3f \n",n,(n*1.20));
	return 0;
}
