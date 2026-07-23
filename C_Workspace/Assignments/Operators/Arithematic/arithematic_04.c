#include<stdio.h>
#include<math.h>
int main()
{
	// Calculate compound interest.//
	float p,t,r,n,A,CI;	
	printf("Enter the principal amount \n");
	scanf("%f", &p);
	printf("Enter the rate of interest \n");
	scanf("%f",&r);
	printf("Enter the time duration \n");
	scanf("%f",&t);
	printf("Enter the compounding interest \n");
	scanf("%f",&n);
	A = p * pow((1 + r / n), n * t);
	CI=A-p;
	printf("The TOtal Amount is :%f \n",A);
	printf("The compount Interst for the given values are : %f \n",CI);
	return 0;
}

