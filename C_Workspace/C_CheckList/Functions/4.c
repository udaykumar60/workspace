//C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.
#include <stdio.h>

int String(char []);

int String(char p[])
{
    int c=0;
    printf("Length of the String is:");
    for(int i=0;p[i]!='\0';i++)
    {
        c++;
    }
    printf(" %d",c);
}

int main()
{
    char a[50];
    printf("Enter the string:");
    scanf("%s",a);
    String(a);
    return 0;
}
