#include<stdio.h>
#include<unistd.h>
int main(){
pid_t frk;
//printf("Hello Uday:%d  \n",getpid());
frk=fork();
if (frk > 0){
printf("I am from child: %d \n",getpid());
}
else{
printf("i am parent: %d \n",getpid());
}
//getchar();
}
