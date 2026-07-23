//read character from file and print it to the console
#include <stdio.h>

int main(){
    FILE *fp;
    int ch;

    fp = fopen("write.txt", "r");

    if(fp == NULL){
        printf("error opening file\n");
        return 1;
    }

    ch = fgetc(fp);

    if(ch != EOF){
        printf("%c\n", ch);
    }

    fclose(fp);
    return 0;
}