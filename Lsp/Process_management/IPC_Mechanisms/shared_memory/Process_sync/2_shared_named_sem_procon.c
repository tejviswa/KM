/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-02-2025
* Program: Write a program to create producer and consumer threads. The producer thread should fill a global buffer with the letters ABCDE, and the consumer thread should consume from the global buffer and transfer the items to a local buffer using a counter global variable, without using any thread-safety methods.	
* Sample Input :
* Sample output :
*Pro: ABCDE
Con: ABCDE
Pro: ABCDE
Con: ABCDE

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

char buff[5];
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
	pid_t pid;	
	signal(SIGINT,terminate);
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
		exit(1);
	}
	
	pid=fork();

	if(pid)                //producer(parent)
	{
		int i=0;
		char ch='A';
		int shmid=shmget(key,10,IPC_CREAT|0666);
		char *ptr=shmat(shmid,0,0);	

		while(1)
		{
			sem_wait(prod_lock);          //initial prod lock 1
			for(i=0;i<5;i++)
			{
				ptr[i]=ch;
				ch++;
			}						//produced data
			ch='A';
			printf("Pro:%s\n",ptr);
			sem_post(cons_lock);
		}

	}
	else if(pid==0)                          //consumer(child)
	{
		int i;
		char data[5];
	
		int shmid=shmget(key,10,IPC_CREAT|0666);
		char *ptr2=shmat(shmid,0,0);

		while(1)
		{
			sem_wait(cons_lock);

			printf("  Con:%s\n",ptr2);         //consumed data

			sem_post(prod_lock);

		}       

	}


	exit(EXIT_SUCCESS);
}




