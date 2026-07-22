#include<stdio.h>
#include<stdlib.h>

main(){
int pid,fd;
fd = creat("newfile",0);
pid = fork();
printf("Hai");
if(pid==0){
        write(fd,"Hai Iam child",17);
        printf("Child process message printed\n");
        printf("pid is %d\n",getpid());
        exit(0);
}
else{
        sleep(20);
        write(fd,"Hai Iam Parent",17);
        printf("Parent process Message printed\n");
        printf("pid is %d\n",getpid());
}
}

