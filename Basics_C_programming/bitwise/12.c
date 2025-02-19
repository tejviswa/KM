/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-10-2024
* Program:WAP Check if the 20th bit of a 32-bit integer is on or off?
* Sample Input :
* Sample output :
* 
Enter number
45657845
20th bit is not set
 
Enter number
fffffff
20th bit is set

*/


#include<stdio.h>
int main()
{
	int x;                         //declaring inputs
	printf("Enter number\n");
	scanf("%x",&x);                  //reading inputs
	x=x&0x00100000;                   //doing AND operation with 20th bit 1
	if(x)
		printf("20th bit is set\n");
	else 
		printf("20th bit is not set\n");

	return 0;
}

