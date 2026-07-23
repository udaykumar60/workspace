//Program to copy one string to another.
#include <stdio.h>

void len();

void len(char x[])
{
    char y[50];
    int count=0;
    for(int i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    printf("\nOriginal String:%s",x);
    printf("\nString Copy: %s",y);
}
int main() 
{
    char s[50];
    printf("Enter the string:");
    scanf("%s",s);
    len(s);
    return 0;
}
