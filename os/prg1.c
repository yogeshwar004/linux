#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid<0)
	{
		printf("Fork failed");
		exit(0);
	}
	else if(pid==0)
	{
		printf("Child Process");
		execlp("ls","ls","-l",NULL);
		exit(0);
	}
	else
	{
		wait(NULL);
		printf("Child Complete\n");
		exit(0);
	}
}
