/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of cat command?
* Sample Input :
* Sample output :
*
*/


#include "main.h"
int main(int argc,char *argv[])
{
	int fd,r,i;
	char buff[1024];    //block size 1Kb
	if(!(argv[1]))              //if operand not given in command line printing error message
	{
		printf("%s: missing file operand\nTry 'cat --help' for more information.\n",argv[0]);
		exit(0);
	}
	


	for(i=1;i<argc;i++)     //for multiple command line arguments
	{
		fd = open(argv[i], O_RDONLY);
		if(fd<0)
		{	
			write(1,argv[0],strlen(argv[0]));      //for printing error messages
			write(1,": ",2);
			write(1,argv[i],strlen(argv[i]));	
			perror(" ");                          //printing error type
			printf("Error no:%d\n",errno);			//errno is global variable declared in errno.h
			continue;
		}

			while(read(fd,buff,sizeof(buff)) > 0)  //reading block from the file and writing the buffer onto the screen upto end of file
			{
							write(1,buff,strlen(buff));
			}
	}
	exit(0);

}

