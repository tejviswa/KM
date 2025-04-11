/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-01-2025
* Program:  Write a system program to continuously read data from the keyboard and mouse data (type of event, code, value and timestamp) until Ctrl+C is pressed.
* Sample Input :
* Sample output :
Select device:
[1].Keyboard
[2].Mouse Buttons
[3].Mouse Integration
[4].Externel device
1
Name of device:AT Translated Set 2 keyboard
code:4
value:28
type:4
time:1738127056
*
*/


#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

#include<utime.h>

#include<sys/ioctl.h>

#include<linux/input.h>


#include<linux/kd.h>

int main()
{
	int fd,ret,d;
	struct input_event temp;
	char buff2[40];
	printf("Select device:\n[1].Keyboard\n[2].Mouse Buttons\n[3].Mouse Integration\n[4].Externel device\n");
	scanf("%d",&d);
	if(d==1)
		fd=open("/dev/input/event2",O_RDONLY|O_NONBLOCK);
	else if(d==2)
		fd=open("/dev/input/event4",O_RDONLY|O_NONBLOCK);
	else if(d==3)
		fd=open("/dev/input/event6",O_RDONLY|O_NONBLOCK);
	else if(d==4)
		fd=open("/dev/input/event7",O_RDONLY|O_NONBLOCK);
	else
	{
		printf("select from available devices only\n");
		exit(0);
	}
	if(fd<0)
	{
		perror("IOctl  fail");
		exit(0);
	}
	ret=ioctl(fd,EVIOCGNAME(sizeof(buff2)),buff2);
	if(ret<0)
	{
		perror("ioctl fail");
		exit(0);
	}
	printf("Name of device:%s\n",buff2);
	while(1)
	{
		ret=read(fd,&temp,sizeof(temp));
		if(ret<0)
		{
			perror("read fail");
			exit(0);
		}	
		printf("code:%d\nvalue:%d\ntype:%d\ntime:%ld\n",temp.code,temp.value,temp.type,temp.time.tv_sec);

	}
	return 0;
}

