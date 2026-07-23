#include<stdio.h>
int main()
{
	//Swapping without a 3rd variable//
	int a,b;
	printf("Enter the values of a and b \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapping two variables withut 3rd variable we get : %d %d \n", a,b);

	return 0;
}

			
