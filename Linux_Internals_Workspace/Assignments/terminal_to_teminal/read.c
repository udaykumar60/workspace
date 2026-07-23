#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
	int fd;
	char buf[100];
	fd=open("/home/yash/Workspace/WorkSpace/Linux_Internals_Workspace/Assignments/terminal_to_teminal/rw", O_RDONLY);
	while(1)
	{
		int rd=read(fd,buf,sizeof(buf));
		if(rd<=0 || strncmp(buf,"exit",4)==0)
		{
			break;
		}
		printf("Received: %s", buf);
	}
	close(fd);
	return 0;
}

