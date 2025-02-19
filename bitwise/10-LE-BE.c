/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: WAP to convert Little endian integer to Big endian integer 
* Sample Input :
* Sample output :

Enter number 
aabbccdd
ddccbbaa
*
*/


#include<stdio.h>
int main()
{
	int x;                             //declaring inputs             
	printf("Enter number \n");
	scanf("%x",&x);                //reading inputs
	
	x=(x&0x000000ff)<<24 | (x&0xff000000)>>24 | (x&0x00ff0000)>>8| (x&0x0000ff00)<<8;          //converting LE to BE
	printf("%x",x);
	printf("\n");

	return 0;
}

