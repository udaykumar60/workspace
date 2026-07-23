#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n,i;

	printf("Enter the no.of elemets:");
	scanf("%d",&n);
	p= (int *) malloc (n*sizeof(int));
	if(p==NULL)
	{
		printf(stderr,"\nFailed");
	}
	printf("memoery allocated : %p", p);
	printf("\nIntial values: \n");
	for (int i=0;i<n;i++)
		printf("%d",p[i]);
        for (int i=0;i<n;i++)
                p[i]=i+1;
	printf("\n");
        for (int i=0;i<n;i++)
                printf("%d",p[i]);
	printf("\n");
}
