//Program to count digits, spaces, special characters, alphabets in a string.

#include <stdio.h>

void lower_upper();

void lower_upper(char x[])
{
    int a,n,special,space;
    a=space=special=n=0;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90 || x[i]>=97 && x[i]<=122)
        {
            a++;
        }
        else if(x[i]>='1' && x[i]<='9')
        {
           n++;
        } 
        else if(x[i]==' ')
        {
            space++;
        }
        else
        {
            special++;
        }
    }
    printf("\nalphabets Count:%d",a);
    printf("\ndigits Count:%d",n);
    printf("\nSpace Count:%d",space);
    printf("\nSpecial characters Count:%d",special);
    
}

int main() 
{
    char s[50];
    printf("Enter the string: ");
    scanf("%[^\n]", s);
    lower_upper(s);
    return 0;
}
