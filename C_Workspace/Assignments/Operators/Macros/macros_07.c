#include<stdio.h>
#define MIN(a,b) ((a)<(b)) ? a : b
int main()
{
	//Define a macro-MIN(a,b) using a conditional operator?//
	int a,b,c;
	printf("enter the values of a and b \n");
	scanf("%d%d",&a,&b);
	printf("Mininum of %d and %d is : %d \n",a,b,MIN(a,b));
	return 0;
}












































	
