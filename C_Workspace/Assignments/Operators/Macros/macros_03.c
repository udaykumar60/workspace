#include<stdio.h>
#define DISCOUNT 10
int main()
{
	//Define a macro-DISCOUNT with value 10 and calculate discounted price of a product.//
	float  oriamt,disamt,finalamt;
	printf("Enter the Original Amount of the product \n");
	scanf("%f",&oriamt);
	disamt=oriamt*(DISCOUNT/100.0);
	finalamt=oriamt-disamt;
	printf("The Discounted price of an product is :%.2f \n",disamt);
	printf("The Final Amount is :%.2f \n",finalamt);
}
