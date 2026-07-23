//C program to replace all vowels with star (*) and consonants with hash (#) of string.
#include <stdio.h>
#include <ctype.h>

int main() 
{
    char s[50];
    printf("Enter a string: ");
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++) 
    {
        char lower = tolower(s[i]);

        // Check if it is a vowel
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            printf("*");
        }
        // Check if it is a consonant (an alphabet letter that is not a vowel)
        else if(lower >= 'a' && lower <= 'z') 
        {
            printf("#");
        }
        // If it's not an alphabet (digits, symbols), print as is
        else 
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}

