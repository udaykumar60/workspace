//REPLACE 2,5,9 with '@'//
#include <stdio.h>

int main() 
{
    // A string containing a sequence of numbers
    char a[] = "12345678910";
    
    // Loop through the string until the null terminator '\0'
    for(int i = 0; a[i] != '\0'; i++)
    {
        // Check if the current character is '2', '5', or '9'
        // Note: We use single quotes '' because these are characters, not integers
        if(a[i] == '2' || a[i] == '5' || a[i] == '9')
        {
            a[i] = '@'; // Replace the character with '@'
        }
    }
    
    // Print the modified string: 1@34@678@10
    printf("%s\t", a);

    return 0;
}
