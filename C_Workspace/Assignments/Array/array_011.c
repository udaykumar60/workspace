#include<stdio.h>
int main()
{
	//Write a program to transpose a 3×3 matrix.//
	int a[3][3];
	int transpose[3][3];
	int i,j;
	for (i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<3;i++)
	{
                for(j=0;j<3;j++)
		{

			transpose[j][i]=a[i][j];
		}

	 }
	for (i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {

                        printf("%d\t",a[i][j]);
                }

                printf("\n");
        }
	printf("\n \n ");

	for (i=0;i<3;i++)
	{
                for(j=0;j<3;j++)
		{

			printf("%d\t",transpose[i][j]);
		}

	 	printf("\n");
	}
	return 0;
}
