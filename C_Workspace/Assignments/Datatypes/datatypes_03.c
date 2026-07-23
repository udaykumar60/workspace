#include<stdio.h>
int main()
{

	int a,b,sum,sub,mul;
	float div,mod;
	printf("Enter the values of a and b");
	scanf(" %d %d",&a,&b);
	sum=a+b;
	sub=a-b;
        mul=a*b;
        div=a/b;
	mod=a%b;
	printf("THe sum of %d and %d is %d \n",a,b,sum);
	printf("The sub of %d and %d is %d \n",a,b,sub);
	printf("The mul of %d and %d is %d \n",a,b,mul);
	printf("The div of %d and %d is %f \n",a,b,div);
        printf("The mod of %d and %d is %f \n",a,b,mod);
}	

