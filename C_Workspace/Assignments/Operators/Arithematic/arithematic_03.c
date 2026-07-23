#include<stdio.h>
int main()
{
	//Calculate simple interest using arithmetic operators.//
	int p,t,r,SI;
	printf("Enter the principal amount value \n");
	scanf("%d",&p);
	printf("Enter the rate of interest \n");
	scanf("%d",&t);
	printf("Enter the time in years \n");
	scanf("%d",&r);
	SI=(p*t*r)/100;
	printf("The Simple interst for the principal amount %d and rateof interest %d and time in years %d is: %d \n",p,t,r,SI);
	return 0;
}
