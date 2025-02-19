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
void seperate(unsigned int x)
{
	int a,b;
	a=(x&(0xfff00000))>>20;
	printf("%x\n",a);

	b=x&(0x000fffff);
	printf("%x\n",b);
}





int main()
{
	unsigned int x;
	printf("Enter value\n");
	scanf("%x",&x);
	seperate(x);

	return 0;
}

