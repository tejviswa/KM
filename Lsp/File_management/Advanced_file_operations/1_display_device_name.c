/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-01-2025
* Program: Write a system program to print the names of the input devices located in the /dev/input folder?

* Sample Input   :sudo ./a.out /dev/input/event2
* Sample output  :Name of device:AT Translated Set 2 keyboard
*
*/


#include"../main.h"
#include<linux/kd.h>

int main(int argc,char *argv[])
{
	int fd,ret,i;
	char buff[50];
	struct input_event temp;
	for(i=1;i<argc;i++)
	{
		fd=open(argv[i],O_RDWR);
		if(fd<0)
		{
			perror("IOctl  fail");
			exit(0);
		}
		//ret=ioctl(fd, KDSETLED, LED_NUM|LED_CAP|LED_SCR);
		ret=ioctl(fd,EVIOCGNAME(sizeof(buff)),buff);
		if(ret<0)
		{
			perror("ioctl fail");
			exit(0);
		}
		printf("Name of device:%s\n",buff);
		}
	close(fd);
	if(ret<0)
        {
            perror("close fail");
        }


	return 0;
}

