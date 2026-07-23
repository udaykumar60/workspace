#include<stdio.h>
int main()
{
	//Write a program to declare a 1D array of 10 integers, input values from user, and print them//

	int arr[10];
	printf("Enter the numbers: \n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("the elements in the array :\n");
	for(int i=0;i<10;i++)
        {
                        printf("%d \n",arr[i]);
         } 
	return 0;

}
