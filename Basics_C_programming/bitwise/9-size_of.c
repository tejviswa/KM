/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program:WAP to implement the sizeof operation using the bitwise operator.   
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	char a;
	int c=0;
	a=25;
	while(a)
	{
		a=a<<1;
		c++;
	}

	printf(" size is %d \n",c/8);
	

	return 0;
}

