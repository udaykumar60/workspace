#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
	int fd;
	char buf[100];
	fd=open("/home/yash/Workspace/WorkSpace/Linux_Internals_Workspace/Assignments/terminal_to_teminal/rw", O_WRONLY);
	printf("Enter  the message :");
	while(1)
	{
		fgets(buf,sizeof(buf),stdin);
		write(fd,buf,strlen(buf)+1);
		if(strncmp(buf,"exit",4)==0)
		{
			break;
		}	
	}
		close(fd);
		return 0;
}
