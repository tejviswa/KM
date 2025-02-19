/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-01-2025
* Program: when SW_UP blink LED in Beaglebone black ,when SW_DN Off led
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<string.h>
#include"../main.h"
int main()
{
	int fd,fd1,s_fd,fd3;
	char ch;
	struct input_event temp;
	
	fd=open("/sys/class/gpio/export",O_WRONLY);
	write(fd,"10",2);
	
	s_fd=open("/dev/input/event0",O_RDWR);
	
	fd1=open("/sys/class/gpio/gpio10/direction",O_RDWR);
	write(fd1,"out",3);

	fd3=open("/sys/class/gpio/gpio10/value",O_RDWR);
	while(1)
	{
		read(s_fd,&temp,sizeof(temp));
		if(temp.code == 115)
		{
			write(fd3,"1",1);
		}
		else if(temp.code == 114)
		{
			write(fd3,"0",1);
		}
	}



	/*	fd4=open("/sys/class/gpio/gpio11/direction",O_RDWR);
		write(fd,"in",2);

		fd2=open("/sys/class/gpio/gpio11/value",O_RDWR);
		while(1)
		{
		lseek(fd2,0,SEEK_SET);
		read(fd2,&ch,1);
		if(ch == '1')
		{
			write(fd3,"1",1);
		}
	}
	
*/
	close(fd);
	close(fd1);
	//close(fd2);
	close(fd3);


	return 0;
}

