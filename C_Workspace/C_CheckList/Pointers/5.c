
// Program to count vowels and consonants in a string using pointer.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    char *ptr;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0') {
        char ch = tolower(*ptr);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        ptr++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
