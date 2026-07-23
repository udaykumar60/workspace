#include<stdio.h>
int main()
{
	//Compare two numbers and print the greater number.//
	float a,b;
	printf("ente rthe value of a : \n");
	scanf("%f",&a);
	printf("Enter the value of b: \n");
	scanf("%f",&b);
	if(a>b)
		printf("%f is greater than %f \n",a,b);
	else
		printf("%f is greater than %f \n",b,a);

	return 0;
}
