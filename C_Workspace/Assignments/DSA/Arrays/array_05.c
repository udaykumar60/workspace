#include<stdio.h>

//Positive and Negative number //

void integer(int a[],int n)
{
	int countp=0;
	int countn=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			countp++;
		}
		else
		{
			countn++;
		}
	}
	printf("\nThe number of positive numbers are :%d\n",countp)
	printf("\nThe number of negative number are :%d\n",countn);
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
        integer(a,n);

        return 0;
}

