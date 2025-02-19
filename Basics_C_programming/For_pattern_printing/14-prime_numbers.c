/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Write a program to print all prime numbers between 2 given integers.
  Sample Input : 10 20
* Sample output :Enter numbers: 10 20
* 				Prime numbers between 10&20 are:11 13 17 19
*
*/


#include<stdio.h>
int main()
{
	int i,j,n1,n2;//declairing inputs
	printf("Enter numbers:");
	scanf("%d%d",&n1,&n2);//reading inputs
	
	for(i=n1;i<=n2;i++)//repeating loop for the given range
	{
		for(j=2;j<=(i/2);j++)//loop for checking the number is prime or not
		{
			if((i%j)==0)
			{
				break;
			}
		}
		
		if(j==(i/2)+1)
		{
			printf("%d ",i);
		}
		
	}
	printf("\n");	

	return 0;
}

