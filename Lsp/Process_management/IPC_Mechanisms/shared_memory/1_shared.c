/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-02-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
 #include <unistd.h>
  #include <signal.h>
 #include <sys/ipc.h>
       #include <sys/shm.h>
#include<stdlib.h>

key_t key =64;

void pro(int sig)
{
	printf("consumer cosumed\n");
}

void con(int sig)
{
	printf("producer produced\n");
}

int main()
{
	
	(void) signal(SIGUSR2,pro);
	(void) signal(SIGUSR1,con);

	pid_t pid;

	char *ptr,*ptr2;
	
	int shmid=shmget(key,1024,IPC_CREAT|0666);
	if(shmid<0)
	{
		perror("shmid error");
		return 1;
	}
	
	pid=fork();

	switch(pid)
	{
		case -1:perror(" fork error");
				exit(1);break;
		case 0:                      //consumer(child) 
				pause();             //waiting for signal from producer
				ptr2=shmat(shmid,0,0);   //attching memory to current process
				write(1,ptr2,20);        //writing the consumed data to screen from shared memory 
				shmdt(ptr2);           //detaching memory to current process
				kill(getppid(),SIGUSR2);  //sending signal to producer that data is consumed
				break;
		default:                     //producer
				ptr= shmat(shmid,0,0);  //attacching memory to current process
				read(0,ptr,20);   //reading data from user to shared memory
				
				shmdt(ptr);    //detaching memory to current process
				kill(pid,SIGUSR1);    //sending signal to consumer to consume data from shared memory
				pause();break;      //waiting for signal from consumer that it has consumed data from shared memory

	}
	
	return 0;
}

