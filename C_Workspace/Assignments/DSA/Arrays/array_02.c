#include<stdio.h>

//Print all elements of an array//

void all(int a[],int n)
{
	printf("All the elements in the array are: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main()
{
	int n=5;
	int a[5]={1,2,8,5,6};
	all(a,n);

	return 0;

}

