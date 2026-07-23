#include<stdio.h>
int main()
{
	//Check whether a number lies between 50 and 100./
	int a;
	printf("enter the value \n");
	scanf("%d",&a);
	if(a>=50 &&a<=100)
		printf("%d lies between 50 and 100 \n",a);
	else
		printf("%d does not lie between 50 and 100\n",a);
	 return 0;
	 
}

