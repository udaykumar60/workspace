//C program to count upper case, lower case and special characters in a string.
#include <stdio.h>

int main() 
{
    char s[50];
    printf("Enter the string:");
    scanf("%s",s);
    for (int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            printf("UPPERCASE:%c\n",s[i]);
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            printf("LOWERCASE:%c\n",s[i]);
        }
        else
        {
            printf("SPECIAL CHARACTERS:%c\n",s[i]);
        }
    }
    return 0;
}
