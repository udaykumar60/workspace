//Write a function to reverse a string using pointers.
#include<stdio.h>
#include<string.h>

void string(char *a)
{
    char *ptr=0;
    ptr=&a[strlen(a)-1];
    for(int i=strlen(a)-1;i>=0;i--)
    {
        printf("%c",ptr[-(strlen(a)-1-i)]);
    }
}

int main()
{
    char a[50]="HELLO";
    printf("the reverse of the string is ");
    string(a);
    printf("\n");
    return 0;
}
