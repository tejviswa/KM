/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 31-01-2025
* Program:WAP your own version of system library?
* Sample Input :
* Sample output :
*
* ./mysys ls -l
Start
total 24
-rwxrwxr-x 1 km km 8672 Feb  1 16:52 a.out
-rw-rw-r-- 1 km km  531 Feb  1 16:50 main.c
-rw-rw-r-- 1 km km  514 Feb  1 16:38 mysys.c
-rw-rw-r-- 1 km km   24 Jan 31 21:36 s.h
child id:3248
end

root      3432     2  0 17:23 ?        00:00:00 [kworker/1:4]
root      3433     2  0 17:23 ?        00:00:00 [kworker/1:5]
root      3437     2  0 17:23 ?        00:00:00 [loop24]
km        3473  2319  0 17:24 pts/2    00:00:00 ps -eaf
km        3474  2319  0 17:24 pts/2    00:00:00 tail -5
*/


#include<stdio.h>
#include"s.h"
#include<string.h>
#include<stdlib.h>

//void mysys(const char*);

int main(int argc,char *argv[] )
{	
	int i;
	char command[20];

	printf("Start\n");

	if(argc > 1)             //for multiple command line arguments
	{
		for(i=1;i<argc;i++)
		{
			strcat(command,argv[i]);
			strcat(command," ");
		}
		mysys(command);
	}
	else
		mysys(argv[1]);

	printf("end\n");
	return 0;
}

