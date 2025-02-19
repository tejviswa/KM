/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/

#include "main.h"

int main(int argc,char *argv[])
{
	char c; 
	int in, out;
	in = open(argv[1], O_RDONLY); 
	out = open(argv[2], O_WRONLY|O_CREAT,0666);
	while(read(in,&c,1) == 1)
		write(out,&c,1);
	exit(0); 
}

