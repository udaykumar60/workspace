#include<stdio.h>
int main()
{
	//Write a program to find the sum of all elements in a 2D array (matrix).//
	int a[3][4];
	int i,j;
	int sum=0;
	for (i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<3;i++)
	{
                for(j=0;j<4;j++)
		{

			sum=sum+a[i][j];
		}

	 	
	}
	 printf("the sum of all the elements in an array is %d ",sum);
	return 0;

}

