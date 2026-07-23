//C program to print all VOWEL and CONSONANT characters separately.
#include <stdio.h>
#include <ctype.h>

int main() 
{
    char s[50];
    printf("Enter the string:");
    scanf("%s",s);
    for (int i=0;s[i]!='\0';i++)
    {
        char lower = tolower(s[i]);
        if((lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'))
        {
            printf("Vowel:%c\n",s[i]);
        }
        else
        {
            printf("Consonant:%c\n",s[i]);
        }
    }
    return 0;
}
