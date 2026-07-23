#include <stdio.h>

int main(){
    FILE *fp;
    //append file 
    fp = fopen("write.txt", "a");
    if(fp == NULL){
        printf("error opening file \n");
        return 1;
    }

    fprintf(fp , "Hello Phytec \n");
    fprintf(fp , "Hello World \n");
    fprintf(fp , "Hello C \n");
    fprintf(fp, "hello adithya \n");
    fclose(fp);
}