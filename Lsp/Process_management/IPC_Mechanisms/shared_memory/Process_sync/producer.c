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
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<semaphore.h>
#include<signal.h>
 #include <fcntl.h>           /* For O_* constants */
       #include <sys/stat.h>        /* For mode constants */
       #include <semaphore.h>

 #include <sys/ipc.h>
       #include <sys/shm.h>
key_t key=64;

sem_t *prod_lock,*cons_lock;
void terminate(int sig)
{
	printf("I got a signal for terminate, for terminate CTRL+C\n");
	sem_unlink("producer1");
	sem_unlink("consumer1");
	signal(SIGINT,SIG_DFL);
}

int main()
{
//	signal(SIGINT,terminate);
	prod_lock=sem_open("producer1",O_CREAT,0666,1);
	if(prod_lock==NULL)
	{
		perror("semaphore1");
		exit(0);
	}
	cons_lock=sem_open("consumer1",O_CREAT,0666,0);
	if(cons_lock==NULL)
	{
		perror("semaphore2");
		exit(0);
	}


	int i=0;
	char ch='A';
	int shmid=shmget(key,30,IPC_CREAT|0666);
	char *ptr=shmat(shmid,0,0);	

	while(1)
	{
		sem_wait(prod_lock);          //initial prod lock 1
	/*	for(i=0;i<5;i++)
		{
			ptr[i]=ch;
			ch++;
		}						//produced data
		ch='A';
		printf("Pro:%s\n",ptr);*/
		read(0,ptr,10);
		sem_post(cons_lock);
	}


	return 0;
}

