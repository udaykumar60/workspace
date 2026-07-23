#include <stdio.h>

int main(){
    FILE *fp;
    char line[200];

    fp = fopen("write.txt", "r");

    printf("------ file content ------\n");
    while(fgets(line, sizeof(line), fp)){
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}