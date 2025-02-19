/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 26-09-2024
* Program: Write a program to read a number n, and print sum of all numbers from 1 to n.
* Sample Input :10
* Sample output :Enter a number: 10
* 				10
*
*/


#include<stdio.h>
int main()
{
	int i=1,sum=0,n,ret;//declaring inputs
	printf("Enter a number\n");
	ret=scanf("%d",&n);//reading inputs
	if(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		return 1;
	}
	if(n<0)//checkig for negative numbers
	{
		while(i>=n)//repating loop for upto n
		{
			sum+=i;
			i--;
		}
		printf("Sum is %d\n",sum-1);
	}
	else//for positive numbers
	{

		while(i<=n)//loop until n
		{
			sum+=i;
			i++;
		}
	printf("Sum is %d\n",sum);
	}
	return 0;
}

