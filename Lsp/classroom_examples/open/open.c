/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
	int fd;
	char buff[50]={"tejo prapulla\n Viswanadhuni"};

	fd=open("open.txt",O_RDWR|O_CREAT,0666);
	if(fd==-1)
	{
		printf("File not created\n");
	}
	else
	{
		printf("file opened\n");
		write(fd,buff,strlen(buff));
		close(fd);
	}



	return 0;
}

