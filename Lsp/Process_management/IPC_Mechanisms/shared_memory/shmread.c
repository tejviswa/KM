/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-02-2025
* Program: 
* Sample Input :
* Sample output :
*syntax:
int shmget(key_t key, size_t size, int shmflg);

DESCRIPTION:
shmget()  returns the identifier of the System V shared memory
       segment associated with the value of the argument key.  It may
       be  used  either to obtain the identifier of a previously cre‐
       ated shared memory segment.

RETURN VALUE
       On success, a valid shared memory identifier is returned.   On
       error, -1 is returned, and errno is set to indicate the error.



SYNTAX: void *shmat(int shmid, const void *shmaddr, int shmflg);
shmat() attaches the System V shared memory segment identified
       by shmid to the address space of  the  calling  process. 
    
	
SYNTAX: int shmdt(const void *shmaddr);
shmdt()  detaches  the  shared  memory  segment located at the
       address specified by shmaddr from the  address  space  of  the
       calling process.


*/


#include<stdio.h>
#include<unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>


int main()
{
	key_t key = 64;    //same shared key should be used to access data from sender
	char buff[11];                  //buffer to recieve data
	int shmid=shmget(key,0,0);         //generating shmid from the key,no need of creation here as already created by sender
	if(shmid<0)
	{
		perror("shmid fail");
		return 1;
	}
	char *ptr =shmat(shmid,0,0);       //attching the shared memory to current process
	if(ptr<0)
	{
		perror("shmat fail");
		return 1;
	}
	
	write(1,ptr,10);        //writing the data from the shared memory to the screen
	shmdt(ptr);           //detaching the shared memory to the current process
	return 0;
}

