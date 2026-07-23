//C Program to print tables from numbers 1 to 20.
#include <stdio.h>

int main() 
{
    printf("========= Tables from numbers 1 to 20 ==========\n\n");
    for(int i=1;i<=20;i++)
    {
        for(int j=1;j<=12;j++)
        {
            printf("%d x %d = %d",i,j,i*j);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
