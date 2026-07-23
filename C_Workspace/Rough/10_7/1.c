#include<stdio.h>
#include<string.h>

int main()
{
	char buf[15];
	strcpy(buf,"Hello World\n");
	write(1,buf,strlen(buf));
}
