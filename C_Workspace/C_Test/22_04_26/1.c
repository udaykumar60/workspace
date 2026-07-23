//REPLACE STRING FROM LOWERCASE TO UPPERCASE//
#include <stdio.h>
#include <ctype.h> // Required for isupper, tolower, and toupper functions

int main() {
    
    // Original string with mixed case
    char a[] = "i AM yASWANTH"; 
    
    // Loop through the string until the null terminator '\0' is reached
    for(int i = 0; a[i] != '\0'; i++)
    {
        // If the character is currently Uppercase
        if(isupper(a[i]))
        {
            a[i] = tolower(a[i]); // Change it to Lowercase
        }
        // If the character is lowercase (or a space/symbol)
        else
        {
            a[i] = toupper(a[i]); // Change it to Uppercase
        }
    }
    
    // Print the modified string: "I am Yaswanth"
    printf("%s\n", a);

    return 0;
}
