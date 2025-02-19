/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 31-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
//#include"../File_management/main.h"
#include<errno.h>



int mysys(const char *command )
{
    pid_t pid;

    pid = fork();
    if (pid == 0) //child
    {
        execl("/bin/sh","sh","-c",command, NULL);
    }
    else //waiting untill child terminate
    {
        wait (NULL);
    }
}


int main()
{
	char buff[30];
	while(1)
	{
		write(1,"$ ",2);
		int ret = read(0,buff,sizeof(buff));
		if(ret < 0)
		{
			perror("error:");
			exit(0);
		}
		buff[ret]='\0';
		mysys(buff);
		if(!(strcmp(buff,"exit\n")))
		{
			exit(0);
		}

	}
	return 0;
}

