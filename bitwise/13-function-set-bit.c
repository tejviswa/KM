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
#define mask ~((~0)<<n)<<p-n+1
int functionsetbit(unsigned x,int p,int n,unsigned y)
{
	int z;
	z=(x&(~mask))|(y<<p-n+1)&mask;
	return z;
}

int main()
{
	unsigned x,y,n,p,r;
	printf("Enter numbers ");
	scanf("%x %x",&x,&y);
	printf("Enter bit position: \n");
	scanf("%d",&p);
	printf("Enter no of bits to shift:\n");
	scanf("%d",&n);
	r=functionsetbit(x,p,n,y);
	printf("Result is %x\n",r);

	return 0;
}

