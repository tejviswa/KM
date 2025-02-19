/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of head & tail command?
* Sample Input :./myhead main.h myhead.c

* Sample output :
* ==> main.h <==
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdlib.h>
#include<errno.h>

==> myhead.c <==

* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of head & tail command?
* Sample Input :
* Sample output :
*
*/



#include"main.h"
int lines,words,chars,opt,no;

int main(int argc,char *argv[])
{
	int fd,i,c=0,w=0,cc=0,word=0;
	char ch;//buff[1024];
	if(!(argv[1]))
	{
		printf("%s: missing file operands\nTry 'head --help' for more information.\n",argv[0]);
		exit(0);
	}

	 while ((opt = getopt(argc, argv, "clw")) != -1)
	 {
		 switch(opt)
		 {
			 case 'c':chars=1;break;
			 case 'l':lines=1;break;
			 case 'w':words=1;break;
		 }
	 }


	for(i=optind;i<argc;i++)     //for multiple command line arguments
	{
		fd = open(argv[i], O_RDONLY);
		if(fd<0)
		{
			perror("Open fail");
			printf("Error no:%d\n",errno);
			exit(0);
		}
	/*	if(argc >=3)
		{
			printf("==> %s <==\n",argv[i]);
		}*/
		while(read(fd,&ch,1) == 1)
		{
			if(ch =='\n')
			{
				c++;
			}
			if(ch == ' ' || ch == '\n' ||ch == '\t' )
			{	
				if(word)    //if ch is space we need to check before or after there is charcater or not for a perfect word count.
				{
					w++;
					word=0;
				}
			}
			else                //so first checking for spaces and before its charactere eor not then only updating
			{
				word=1;
			}
			cc++;
		}
		if(optind != 1)
		{
			if(lines)
			{
				printf("%d ",c);
			}
			if(words)
			{
				printf("%d ",w);
			}
			if(chars)
			{
				printf("%d ",cc);
			}
			printf("%s\n",argv[i]);
		}
		else
		{
			printf(" %d %d %d %s\n",c,w,cc,argv[i]);
		}
	}
	exit(0);
}
