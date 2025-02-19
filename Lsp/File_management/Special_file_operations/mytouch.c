/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-01-2025
* Program: Write a system programming your own version of touch command?
* Sample Input :
* Sample output :
*
*/

#include "../main.h"
int main(int argc,char *argv[])
{
	int fd,i;

	for(i=1;i<argc;i++)
	{
		fd=open(argv[i],O_RDWR);
		if(fd<0)
		{
			fd1=creat(argv[i],0666);//creating empty file with read and write permissions 

			if(fd1<0)
			{
				perror("");
				exit(0);
			}
		}
		utime(argv[1],NULL); //used to assign the current time to the file with using NULL
	}
	return 0;
}

