//C program to toggle case of all characters of string.
#include <stdio.h>

int main() 
{
    char s[50];
    int u,l;
    printf("Enter a string to toggle case of all characters of string.:");
    scanf("%s",s);
    printf("\nOriginal String: %s",s);
    printf("\nUpdated String: ");
    for (int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            u=s[i]+32;
            printf("%c",u);
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            l=s[i]-32;
            printf("%c",l);
        }
        else
        {
            printf("SPECIAL CHARACTERS:%c\n",s[i]);
        }
    }
    return 0;
}
