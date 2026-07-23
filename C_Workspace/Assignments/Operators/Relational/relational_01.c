#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: \n");
	scanf("%d",&a);
	if(a>0)
		printf("%d is a positive number \n",a);
	else if (a<0)
		printf("%d is a negative number \n",a);
	else
		printf("%d is a zero number \n",a);

	return 0;
}
