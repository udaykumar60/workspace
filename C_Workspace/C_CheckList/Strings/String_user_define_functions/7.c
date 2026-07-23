//Program to split string by space into words.
#include <stdio.h>

void space(char x[])
{
    printf("\nSplit String:");
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",x[i]);
        }
    }
}

int main() 
{
    char s[50];
    printf("Enter the string: ");
    //%[^\n] to read strings with spaces
    scanf("%[^\n]", s);
    printf("Original String: %s", s);
    space(s);
    return 0;
}
