/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: WAP whether a number is a power of 2 or not?
* Sample Input :
* Sample output :
* Enter number: 5
It's not a power of 2
Enter number: 8
Given number is power of 2

*
*/


#include<stdio.h>
int main()
{
	int x,c=0;                    //decalring inputs
	printf("Enter number: ");
	scanf("%x",&x);                 //reading inputs
	if(x&(x-1))                          //AND operation with the previous number gives 1 means its not a power of 2
		printf("Not a power of 2\n");
	else printf("Power of 2\n");             //else it's a power of 2

	while(x!=0)                             
	{
		if(x&0x01)                        //ANDing the number  with 01
			c++;                             //and incrementing
		x=x>>1;
	}
	if(c==1)                                  //if no of 1's greater than 1 means its not power of 2 else it's power of 2
		printf("Given number is power of 2\n");
	else
		printf("It's not a power of 2\n");

	return 0;
}

