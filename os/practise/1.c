#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    pid_t pid;
    pid=fork();
    if(pid<0)
    {
        printf("Fork failed\n");
        exit(1);
    }
    else if(pid==0)
    {
        printf("Child process\n");
        execlp("ls","ls","-l",NULL);
    }
    else
    {
        wait(NULL);
        printf("Child Complete\n");
        exit(0);
    }
}