/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of head & tail command?
* Sample Input :./myhead main.h myhead.c

* Sample output :

*/


#include"main.h"
int main(int argc,char *argv[])
{
	int fd,i,c=0;
	char ch;//buff[1024];
	if(!(argv[1]))
	{
		printf("%s: missing file operands\nTry 'head --help' for more information.\n",argv[0]);
		exit(0);
	}

	for(i=1;i<argc;i++)     //for multiple command line arguments
	{
		fd = open(argv[i], O_RDONLY);
		if(fd<0)
		{
			perror("Open fail");
			printf("Error no:%d\n",errno);
			exit(0);
		}
		if(argc >=3)
		{
			printf("==> %s <==\n",argv[i]);
		}
		while(read(fd,&ch,1) == 1)
		{
			if(ch =='\n')
			{
				c++;
			}
			write(1,&ch,1);
			if(c==10)
			{
				close(fd);
				break;
			}
		}
		c=0;
	}

	exit(0);

}

