/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#define TRUE 1
#define FALSE 0
int testbit(short int x,int y)
{
	if(y>=0||y<=15)
	{
		if(x&(0x01<<y))
			return TRUE;
		else 
			return FALSE;
	}
	else 
		return FALSE;
}



int main()
{
	 int x,y,r;
	printf("Enter number\n");
	scanf("%x",&x);
	printf("Enter bit position\n");
	scanf("%d",&y);
	r=testbit(x,y);
	if(r)
		printf("Bit is ON\n");
	else printf("Bit is OFF\n");


	return 0;
}

