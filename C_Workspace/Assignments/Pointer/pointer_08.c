#include<stdio.h>
int main()
{
	//WAP to sort an array using pointers (Pointer to Array).//
	int n;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	int arr[n];
	int temp=0;
	printf("Enter the elements in the array : ");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int *p1=&arr[i];
			int *p2=&arr[j];
			
			if(*p1>*p2)
			{
				temp=*p1;
				*p1=*p2;
				*p2=temp;
			}
		}
	}
	printf("The sorted array using pointers is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


	
