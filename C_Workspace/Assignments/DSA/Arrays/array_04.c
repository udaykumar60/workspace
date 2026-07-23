#include<stdio.h>
//Count the nuber of even and odd  umber s//


void count(int a[], int n)
{
	int counte=0;
	int counto=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]&1)
		{
			counto++;
		}
		else
		{
			counte++;
		}
	}
	printf("\nThe number of even numbers are :%d\n",counte);
	printf("\nthe number of odd numbers are :%d\n",counto);
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
        count(a,n);

        return 0;
}

