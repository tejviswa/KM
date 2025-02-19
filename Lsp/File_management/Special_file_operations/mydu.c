/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include "../main.h"
int main(int argc, char *argv[])
{
	int i,fd;
	long int d;
	float f;
	struct stat du;

	for(i=1;i<argc;i++)
	{
		fd=open(argv[i],O_RDONLY);

		fstat(fd,&du);

		if(!(du.st_size/4096))
		{
			d=4;
		}
		if(argv[1][1]=='h')
		{
			f=((du.st_size));

		}

		if(du.st_size%4096 != 0)
		{
			d=((du.st_size/4096)+1)*4; 
		}

		printf("%ld\t%s\n",d,argv[i]);
		close(fd);
	}

	return 0;
}

