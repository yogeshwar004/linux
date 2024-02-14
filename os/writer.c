#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	int fd;
	char buf[1024];
	char*myfifo="/tmp/myfifo";
	mkfifo(myfifo,0666);
	printf("run Reader process to read the FIFO file\n");
	fd=open(myfifo,O_WRONLY);
	write(fd,"Hello",sizeof("HELLO"));
	close(fd);
	unlink(myfifo);
	return 0;
}
