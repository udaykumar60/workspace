#include<stdio.h>
int main()
{
	//Write a program to declare and initialize a 2D array (3×4) and print it in matrix form.//
	int a[3][4];
	int i,j;
	for (i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<3;i++)
	{
                for(j=0;j<4;j++)
		{

			printf("%d\t",a[i][j]);
		}

	 	printf("\n");
	}
	return 0;

}
