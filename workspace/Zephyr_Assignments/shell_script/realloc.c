i#include<stdio.h>
#include<stdlib.h>
int main(){
        int *p,n,i,*temp;
        printf("\n Enter How many elements: ");
        scanf("%d",&n);
        p = (int *) malloc (n*sizeof(int));
        if (p==NULL){
                fprintf(stderr,"\n Fail to alloct memory\n");
                exit(1);
        }
        printf("Memory Allocted at: %x ",p);
        printf("Intial Values \n");
        for (i=0;i<n;i++)
                printf("%d ",p[i]);
                for(i=0;i<n;i++)
                        p[i] = i+1;
                printf("\n");
                for(i=0;i<n;i++)
                        printf("%d ",p[i]);
                printf("\n");
		temp = realloc(p,(n*sizeof(int))+10);
			p = temp;
		n+=10;
}
