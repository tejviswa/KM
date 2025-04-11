/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-02-2025
* Program:  WAP producer process and consumer process synchronization using Shared Memory, fork() and signals.
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

int shmid;
//removing the shared memory using shmctl IPC_RMID
void rmid()
{
	int shmid=shmget(key,0,0);
	
	int i = shmctl(shmid,IPC_RMID,0);  //for removing the shared memory we use IPC_RMID cmd in shared memory control sytem call along with shmid
	if(i<0)
	{
		perror("shmctl fail");
		
	}

}

pid_t pid;

void pro(int sig)
{
	char *ptr= shmat(shmid,0,0);                    //attacching memory to current process
	if(ptr<0)
	{
		perror("shmat fail");
		exit(1);
	}
	read(0,ptr,20);                         //reading data from user to shared memory
	shmdt(ptr);                         //detaching memory to current process
	printf("producer produced\n");
	kill(pid,SIGUSR1);                   //sending signal to consumer to consume data from shared memory

}






int main()
{
	
	(void) signal(SIGUSR2,pro);

	
	shmid=shmget(key,1024,IPC_CREAT|0666);
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
		case 0: //while(1){                          //consumer(child) 
		
				execl("shmread","shmread",0,(char*)0);
		
				printf("wadacdfz");
				break;

		default:while(1){pause();}                           //producer(parent)
			
	}
	
	return 0;
}

