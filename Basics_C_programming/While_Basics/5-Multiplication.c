/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 26-09-2024
* Program:Write a program to multiply two numbers without using * operator.
* Sample Input : 2 5
*
* Sample output :Enter input numbers:2 5
* 				10
*
*/


#include<stdio.h>
int main()
{
	int a=0,i=1,n1,n2,ret;//declaring inputs
	printf("Enter two numbers\n");
	ret=scanf("%d%d",&n1,&n2);//reading inputs
	if(ret!=2)//error handling
	{
		printf("Enter numbers only\n");
		return 1;
	}
	if(n2<0)//checking condition
	{
		while(0>n2)//loop for negative numbers
		{
			a=a+n1;
			n2++;
		}
		printf("%d\n",a*-1);
	}
	else
	{
	while(i<=n2)//loop for positive numbers
	{
		a=a+n1;
		i++;
	}
	
	printf("%d\n",a);
	}
	return 0;
}

