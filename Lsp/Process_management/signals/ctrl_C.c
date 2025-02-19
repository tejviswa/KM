/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 11-02-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void ouch(int sig)
{
	printf("OUCH! - I got signal %d\n", sig);
//	(void) signal(SIGINT, SIG_DFL);
}

int main()
{
	(void) signal(SIGINT, ouch);
	while(1) {
		printf("Hello World!\n");
		sleep(1);
	}
}
