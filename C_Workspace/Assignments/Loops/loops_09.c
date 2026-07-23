#include<stdio.h>
int main()
{
	//Write a program to print multiplication table of a number using nested for loop. //
	int n,i,j,m;
	printf("Emter the number \n");
	scanf("%d",&n);
	for(i=n;i<=n;i++)
	{
		for(j=1;j<=12;j++)
		{
			m=i*j;
			printf("%d x %d = %d \n",i,j,m);

		}
	printf("\n");
	}
	return 0;

}
