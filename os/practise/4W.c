#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
    int fd;
    char buf[1024];
    char *myfifo="/tmp/myfifo";
    mkfifo(myfifo,0666);
    printf("\nRun Reader Process to read the fifo file\n");
    fd=open(myfifo,O_WRONLY);
    write(fd,"Hello",sizeof("Hello"));
    close(fd);
    unlink(myfifo);
    return 0;
}