/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 23-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<unistd.h>
int main()
{
	int d;
	char buff[10];
	printf("Enter number \n");
	scanf("%d",&d);
	printf("Number:%d\n",d);

	write(1,"Enter number\n",14);
	read(0,buff,3);
	write(1,"Num:333",4);
	write(1,buff,3);

	return 0;
}

