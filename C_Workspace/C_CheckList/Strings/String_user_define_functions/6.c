//Program to reverse a string.
#include <stdio.h>

void rev(char x[])
{
    char z[100];
    int count=0,i=0;
    while(x[count] != '\0')
    {
        count++;
    }
    for(int j=count-1;j>=0;j--)
    {
        z[i]=x[j];
        i++;
    }
    z[i]='\0';
    printf("\nReverse String: %s", z);
}

int main() 
{
    char s[50];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("Original String: %s", s);
    rev(s);
    return 0;
}
