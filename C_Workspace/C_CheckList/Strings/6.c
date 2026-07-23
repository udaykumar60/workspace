//C program to reverse string in same variable, without using another string variable to reverse.
#include <stdio.h>
#include <string.h>

int main() 
{
    char s[50];
    printf("Enter a string: ");
    scanf("%s", s);
    int len = strlen(s);
    for(int i = 0; i < len / 2; i++) 
    {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("Reversed String: %s", s);
    return 0;
}

