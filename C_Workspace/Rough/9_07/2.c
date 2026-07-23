#include<fcntl.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	int create;
	int count,rd;
	char buf[15]="Hello world";
	char buff[15];
	create=open("./hello.txt",O_CREAT|O_RDONLY);
	if(create<0)
	{
		printf("Failed to create a file :\n");
	}
	else
	{
		printf("the file is created successfully: \n");
	}
	count=write(create,buf,15);
	if(count<0)
	{
		printf("Write operation failed\n");
	}
	else
	{
		printf("Write operation successful\n");
	}
	rd=read(create,buff,12);
	if(rd<0)
	{
		printf("Read operation failed\n");
	}
	else
	{
		printf("read oeration successful\n");
	}
	printf("%s",buff);
	printf("\n");


}
