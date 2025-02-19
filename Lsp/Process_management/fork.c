/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 31-01-2025
* Program: 
* Sample Input :
* Sample output :
process id:9292
parent id:9021
process id:9293
parent id:9292
*
*/


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#if 0
int main()
{
	
	printf("Start\n");
	getchar();
	if(fork())
	{
		printf("process id:%d\n",getpid());
		printf("parent id:%d\n",getppid());
	}
	else
	{
		printf("process id:%d\n",getpid());
		printf("parent id:%d\n",getppid());
	}


	return 0;
}
#endif

int main()
{
	fork();
	fork();
	printf("Hello\n");
	fork();
	getchar();
	//printf("world\n");
}
