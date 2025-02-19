/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 31-01-2025
* Program: exmaple program on execve() system call
* Sample Input :
* Sample output :
*
* Syntax: int execve(const char *filename,char *const argv[],char *const envp[]);
*
* RETURN values:
* 		SUCCESS --dosen't return any value
* 		ERROR   --returns -1
*
*
*/


#include<stdio.h>
#include<unistd.h>
char *const ps_argv[]={"ps","-eaf",0};
int main()
{
	int ret;
	printf("Start\n");
	getchar();
	ret=execve("/bin/ps",ps_argv,NULL);
	if(ret<0)
	{
		printf("fail");
	}
	printf("End\n");

	return 0;
}

