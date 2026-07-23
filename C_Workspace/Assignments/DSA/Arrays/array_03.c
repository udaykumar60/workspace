#include<stdio.h>

//Find the average of the array//

void avg(int a[],int n)
{
	int avg=0,sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	
	}
	avg=sum/n;
	
	printf("The average of the elements in the arrat are : %d \n",avg);
}

int main()
{
	int n;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int a[n];
	printf("Elements in the array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg(a,n);

	return 0;
}

