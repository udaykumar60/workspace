//C program to print all upper case and lower case alphabets.
#include <stdio.h>

int main() 
{
    printf("Print all upper case and lower case alphabets");
    printf("\nUPPERCASE:");
    for (int i=65;i<=90;i++)
    {
        printf("%c ",i);
    }
    printf("\nLOWERCASE:");
    for (int j=97;j<=122;j++)
    {
        printf("%c ",j);
    }    return 0;
}
