#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("write.txt", "w");

    if(fp == NULL){
        printf("error opening file ");
        return 1;
    }

    fprintf(fp, "hello Worlds \n");
    fprintf(fp, "Hello Phytec \n");

    fclose(fp);
    printf("Data Written Successfully \n");
    return 0;
}