/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-02-2025
* Program: 
* Sample Input :
* Sample output :

 int shmctl(int shmid, int cmd, struct shmid_ds *buf);

DESCRIPTION
       shmctl()  performs  the  control operation specified by cmd on
       the System V shared memory segment whose identifier  is  given
       in shmid.
IPC_RMID  Mark  the segment to be destroyed.  The segment will
                 actually be destroyed only after  the  last  process
                 detaches it.
 
 *
*/


#include<stdio.h>
 #include <sys/ipc.h>
       #include <sys/shm.h>


int main()
{
	key_t key = 64;        //same key that used for shmwrite
	
	int shmid=shmget(key,0,0);          //generating message identifier
	if(shmid<0)
	{
		perror("shmid fail");
		return 1;
	}
	int i = shmctl(shmid,IPC_RMID,0);            //for removing the shared memory we use IPC_RMID cmd in shared memory control sytem call along with shmid
	if(i<0)
	{
		perror("shmctl fail");
		return 1;
	}
	return 0;
}

