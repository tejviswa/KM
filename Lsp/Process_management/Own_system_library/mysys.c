
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int mysys(const char *command )
{
	pid_t pid;
	int status;
	int ret;
	
	pid = fork();
	if (pid < 0)
    {
        perror("fork");
        return -1;
    }
	else if (pid == 0) //child
	{
		execl("/bin/sh","sh","-c",command, NULL);
	}
	else //parent waiting untill child terminates
	{
		ret=wait (&status);
		
		printf("child id:%d\n",ret);
	}
}
