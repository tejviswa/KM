/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-01-2025
* Program: blink LED in Beaglebone black 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<string.h>
#include"../main.h"
int main()
{
	int fd,fd1,fd2;
	char ch[10];
	fd=open("/sys/class/gpio/export",O_WRONLY);
	write(fd,"10",2);


	fd1=open("/sys/class/gpio/gpio10/direction",O_RDWR);
	
	write(fd1,"out",3);
	
	fd2=open("/sys/class/gpio/gpio10/value",O_RDWR);
	
	while(1)
	{
		write(fd2,"0",1);
		sleep(1);
		write(fd2,"1",1);
		sleep(1);
	}

	close(fd);
	close(fd1);
	close(fd2);


	return 0;
}

