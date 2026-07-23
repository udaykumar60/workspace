//C program to find occurrence of a character in the string.
#include <stdio.h>

int main() 
{
    char s[50];
    char c;
    int count=0;
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Enter a character to find occurrence: ");
    scanf(" %c",&c);
    for(int i = 0; s[i]!='\0'; i++) 
    {
        if(c==s[i])
        {
            count++;
        }
    }
    printf("%c occured in the string %d times",c,count);
    return 0;
}

