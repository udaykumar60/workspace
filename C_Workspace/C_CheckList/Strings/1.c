//C program to print string one by one characters using loop.
#include <stdio.h>

int main() 
{
    char s[50];
    printf("Enter the string:");
    scanf("%s",s);
    for (int i=0;s[i]!='\0';i++)
    {
        printf("%c\n",s[i]);
    }
    return 0;
}
