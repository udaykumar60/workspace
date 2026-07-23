#include<stdio.h>
int main()
{
	//Write a program to merge two sorted arrays into one sorted array.//
	int a[5]={1,2,3,4,5,};
	int b[5]={9,8,7,6,10};
	int c[10];
	int i,j,temp;
	for(i=0;i<5;i++)
		c[i]=a[i];
	for(i=0;i<5;i++)
		c[i+5]=b[i];
	for (i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	printf("The addition of two dorted into a single sorted array is :  \n");
	for (i=0;i<10;i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}

	 
