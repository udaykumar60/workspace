#include<stdio.h>
int main()
{
	//Prpgram to convert int to float explicitly//
	int a,b,c;
	float d;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
        d=(float)a/b;
	c=a/b;
	printf("the value of %d and %d in interger is: %d \n",a,b,c);
	printf("The value of %d and %d in float is : %f \n",a,b,d);
	
	return 0;
}

	
