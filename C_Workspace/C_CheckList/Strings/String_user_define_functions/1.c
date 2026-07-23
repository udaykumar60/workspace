//Program to calculate length of the string.
#include <stdio.h>

void len();

void len(char x[])
{
    int count=0;
    for(int i=0;x[i]!='\0';i++)
    {
        count++;
    }
    printf("the length of the string is : %d",count);
}
int main() 
t
    char s[50];
    printf("Enter the string:");
    scanf("%s",s);
    len(s);
    return 0;
}
