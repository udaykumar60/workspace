#include<stdio.h>
int main()
{
	//Write a program to search for an element in an array using linear search. //
	int n,count=0;
	int arr[5]={1,2,3,4,5};
	printf("enter the value of n for liner search \n");
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
		if(n==arr[i])
		{
			printf("The element is found \n");
			count+=1;
			break;
		}
	}

	if(count == 0)
	{
		printf("the element is not found \n");
 	}
	return 0;

}


