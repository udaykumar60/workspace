#include<stdio.h>
int main()
{
	//WAP to copy one array to another using pointers.//
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	int cpy[n];
	printf("Enter the vales in the array :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int *pt=arr;
	int *cp=cpy;
	for(int i=0;i<n;i++)
	{
		*( cp + i) = *( pt +i );
		printf("%d \t",*(cp+i));
	}
	printf("\n");
	return 0;
}

