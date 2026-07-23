//Program to toggle each character in a string.
#include <stdio.h>

void toggle();

void toggle(char x[])
{
    char y[50];
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
        {
            y[i]=x[i]+32;
        }
        else if(x[i]>=97 && x[i]<=122)
        {
            y[i]=x[i]-32;
        }    
        else
        {
            y[i]=x[i];
        }
    }
    printf("\nToggled String:%s",y);
}

int main() 
{
    char s[50];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("Original String: %s", s);
    toggle(s);
    return 0;
}
