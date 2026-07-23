//Program to convert string into lower and upper case without using library function.
#include <stdio.h>

void ccase();

void ccase(char x[])
{
    char y[50];
    char z[50];
    int count=0;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
        {
            y[i]=x[i]+32;
        }
        else if(x[i]>=97 && x[i]<=122)
        {
            y[i]=x[i];
        }    
        else
        {
            y[i]=x[i];
        }
    }
        for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
        {
            z[i]=x[i];
        }
        else if(x[i]>=97 && x[i]<=122)
        {
            z[i]=x[i]-32;
        }    
        else
        {
            z[i]=x[i];
        }
    }
    printf("\nLowercase String: %s",y);
    printf("\nUppercase String: %s",z);
}
int main() 
{
    char s[50];
    printf("Enter the string:");
    scanf("%s",s);
    printf("\nOriginal String:%s",s);
    ccase(s);
    return 0;
}

