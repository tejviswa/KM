/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/select.h>
#include<linux/input.h>
int main()
{
	int kbd_fd,ret,mouse_fd;
	char buff[60];
	fd_set read_fd;

	FD_ZERO(&read_fd);

	struct input_event temp;


	kbd_fd=open("/dev/input/event2",O_RDONLY);
	mouse_fd=open("/dev/input/event4",O_RDONLY);

	while(1)
	{
		FD_SET(kbd_fd,&read_fd);
		FD_SET(mouse_fd,&read_fd);
		ret=select(FD_SETSIZE,&read_fd,NULL,NULL,0);
		printf("select ret val:%d\n",ret);

		if(FD_ISSET(kbd_fd,&read_fd))
		{
			ret=read(kbd_fd,&temp,sizeof(temp));

			printf("code:%d\nvalue:%d\ntype:%d\ntime:%ld\n",temp.code,temp.value,temp.type,temp.time.tv_sec);
		}
		if(FD_ISSET(mouse_fd,&read_fd))
		{
			ret=read(mouse_fd,&temp,sizeof(temp));

			printf("code:%d\nvalue:%d\ntype:%d\ntime:%ld\n",temp.code,temp.value,temp.type,temp.time.tv_sec);
		}
	
	}
	return 0;
}

