#include<stdio.h>
int main()
{
	//Check whether the number is between 10 and 20.
	int a;
	printf("entee the number \n");
	scanf("%d",&a);
	if(a>=10 && a <=20)
		printf("%d lies between 10 and 20\n",a);
	else
		printf("%d doesnot mlie between 10 amd 20 \n",a);
	return 0;
}

