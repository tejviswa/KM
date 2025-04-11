/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-02-2025
* Program: 
* Sample Input :
* Sample output :
*
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	int res = mkfifo("my_fifo", 0777);
	if (res == 0) printf("FIFO created\n");
	exit(EXIT_SUCCESS);
}
