/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-02-2025
* Program: 
* Sample Input :
* Sample output :
*
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
 #include <sys/types.h>

#define _GNU_SOURCE
int main()
{
	int data_processed;
	int file_pipes[2];
	const char some_data[] = "123";
	char buffer[BUFSIZ + 1];
	pid_t fork_result;
	memset(buffer, '\0', sizeof(buffer));
	if (pipe2(file_pipes,O_NONBLOCK) == 0) {
		fork_result = fork();
		if(fork_result==0)
		{
			getchar();
			read(file_pipes[0],buffer,BUFSIZ);
			printf("Read %s\n",buffer);
			exit(EXIT_SUCCESS);
		}
		else
		{
			write(file_pipes[1],"123",3);
		}
	}
}


		
