/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
void printbinary(int x,int s)
{
	int n,i;
	n=8*s;
	for(i=n;i>=0;i--)
	{
		if(x&(0x01<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}



int main()
{
	char y;
	int x;
	printf("Enter number:");
	scanf("%x",&x);
	printbinary(x,sizeof(y));

	return 0;
}

