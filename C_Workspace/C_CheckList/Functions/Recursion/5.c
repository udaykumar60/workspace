//C program to calculate length of the string using recursion.
#include <stdio.h>

int length();

int length(char n[])
{
    int i=1;
    if(n[0]=='\0')
    {
        return 0;
    }
    else
    {
        return i+length(n+1);
    }
}

int main()
{
    char x[50];
    printf("Enter the string:");
    scanf("%s",x);
    printf("The length of the string %s are %d",x,length(x));
    return 0;
}
