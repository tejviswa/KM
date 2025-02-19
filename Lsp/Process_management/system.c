/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 31-01-2025
* Program:Example program on system() call 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	printf("start\n");
	system("ps -eaf");
	getchar();
	printf("end\n");

	return 0;
}

