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
int count_bits(int x)
{
	int c=0;
	while(x!=0)
	{
		x=x>>1;
		if(x)
			c++;
	}
	return c;
}

int main()
{
	int x,c;
	printf("Enter number");
	scanf("%x",&x);
	c=count_bits(x);
	printf("No of 1's in given number is :%d\n",c);

	return 0;
}

