//Program to concatenate two strings without using library function.
#include <stdio.h>

void concat();

void concat(char x[],char y[])
{
    char z[100];
    int count=0,con=0;
    int i=0,j=0;
    while(x[i]!='\0')
    {
        z[i]=x[i];
        i++;
    }
    while(y[j]!='\0')
    {
        z[i+j]=y[j];
        j++;
    }
    z[i+j]='\0';
    printf("\nConcatenates String: %s",z);
}
int main() 
{
    char s[50];
    char t[50];
    printf("Enter the string-1:");
    scanf("%s",s);
    printf("Enter the string-2:");
    scanf("%s",t);    
    printf("Original String-1:%s",s);
    printf("\nOriginal String-2:%s",t);
    concat(s,t);
    return 0;
}
