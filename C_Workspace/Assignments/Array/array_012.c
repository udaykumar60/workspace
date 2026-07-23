#include<stdio.h>
int main()
{
	//Write a program to find the sum of all elements in a 2D array (matrix).//
	int a[3][3];
	int b[3][3];
	int i,j;
	int sum[3][3];;
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	for (i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

	printf("\n");
	for (i=0;i<3;i++)
	{
                for(j=0;j<3;j++)
		{

			sum[i][j]=a[i][j]+b[i][j];
		}

	 	
	}
	printf("The sum of the two matrices is :\n");
	
	for (i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {

                        printf(" %d\t ",sum[i][j]);
                }
	printf("\n");
                
        }

	return 0;
}


