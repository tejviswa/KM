/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of cp command?
* Sample Input :
* Sample output :
*
*/


#include "main.h"

int main(int argc,char *argv[])
{
	char buff[1024]; 
	int fd1,fd2;
	if(!(argv[1]))
	{
		printf("%s: missing file operand\nTry 'cp --help' for more information.\n",argv[0]);
		exit(0);
	}
	if(!(argv[2]))
	{
		printf("%s: missing destination file operand after '%s'\nTry 'cp --help' for more information.\n",argv[0],argv[1]);
		exit(0);
	}
	
	
	fd1 = open(argv[1], O_RDONLY);
	if(fd1<0)
	{
		perror("Open fail");
		printf("Error no:%d\n",errno);
		exit(0);
	}

	fd2 = open(argv[2], O_WRONLY|O_CREAT,0666);
	if(fd2<0)
	{
		perror("Open fail");
		printf("Error no:%d\n",errno);
		exit(0);
	}
	
	while(read(fd1,buff,sizeof(buff)) > 0)
		write(fd2,buff,strlen(buff));
	exit(0);    
}


