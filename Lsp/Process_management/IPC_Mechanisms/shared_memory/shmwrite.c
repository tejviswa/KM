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
#include<unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>


int main()
{
	key_t key = 64;   //creating key to use between the sender and reciever

	int shmid=shmget(key,1024,IPC_CREAT|0666);   //creating shared memory id if dosen't exist with permissions
	if(shmid<0)
	{
		perror("shmid fail");
		return 1;
	}
	char *ptr =shmat(shmid,0,0);    //attaching the shared memory to current process
	if(ptr<0)
	{
		perror("shmat fail");
		return 1;
	}
	read(0,ptr,10);       //read from user and store in address created shared memory
	shmdt(ptr);    //detaching the shared memory to current process
	return 0;
}

