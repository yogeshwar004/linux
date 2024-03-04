#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    pid_t pid=fork();
    if(pid<0)
    {
        printf("Fork Failed");
        exit(0);
    }
    else if(pid==0)
    {
        printf("Child process");
        execlp("ls","ls","-l",NULL);
        exit(0);
    }
    else
    {
        wait(NULL);
        printf("Child Complete");
        exit(0);
    }
}