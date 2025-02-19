/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 26-09-2024
* Program: Write a program  to read a number n and print the factorial of n.
* Sample Input :5
* Sample output :Enter number: 5
* 				Factorial is 120
*
*/


#include<stdio.h>
int main()
{
	int f=1,n,ret;//declaring inputs
	printf("Enter number\n");
	ret=scanf("%d",&n);//reading inputs
	if(ret!=1)//error handling
	{
		printf("Invalid inputs\n");
		return 1;
	}
	if(n<0)//checking for negative numbers
	{
		while(n<0)//repeating loop for n times for factorial
		{
			f*=n;
			n++;
		}
		printf("Factorial is %d\n",f);
	}
	else//if number greater than 0
	{
	while(n>0)//repeating loop for n times for factorial
	{
		f*=n;
		n--;
	}
	printf("Factorial is %d\n",f);
	}
	return 0;
}

