//Write a function to add two matrices and store result in third matrix. 

#include<stdio.h>
int add(int a[2][2],int b[2][2],int c[2][2])
{
	int i,j;
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main()
{
	int a[2][2],b[2][2];
	int c[2][2];
	printf("Enter elements for matrix A:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements for matrix B:\n");
	for(int i=0;i<2;i++)
        {
                for(int j=0;j<2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	printf("The addition of two matrices is: \n");
	add(a, b, c);
	for(int i=0;i<2;i++)
        {
                for(int j=0;j<2;j++)
                {
                        printf("%d\t",c[i][j]);
                }
        }
	return 0;
}

