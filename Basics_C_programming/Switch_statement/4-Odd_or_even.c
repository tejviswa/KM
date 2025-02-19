/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-09-2024
* Program: Program to check whether a number is odd or even 
* Sample Input : 64
* Sample output :Enter number: 64
* 				Even
*
*/


#include<stdio.h>
int main()
{
	int a,num;//declaring inputs
	printf("Enter number\n");
	a=scanf("%d",&num);//reading inputs
	//printf("%d\n",a);
	if(a==1)
	{
	num=num%2;//checking for odd or even
	switch(num)//if remainder 0 print even otherwise print odd
	{
		case 0:printf("Even\n");
			   break;
		case 1:printf("Odd\n");
			   break;
	}
	}
	else printf("Enter number only\n");
	return 0;
}

