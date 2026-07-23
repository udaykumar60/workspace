#include <stdio.h>
#include <ctype.h>

int main() 
{
    char s[50];
    printf("Enter a string: ");
    scanf("%s", s);
    
    printf("Original: %s\n", s);
    printf("Converted (Toggle Case): ");
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]))
            printf("%c", tolower(s[i]));
        else if (islower(s[i]))
            printf("%c", toupper(s[i]));
        else
            printf("%c", s[i]); // Print special characters as they are
    }
    
    return 0;
}
