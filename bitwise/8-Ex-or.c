/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-10-2024
* Program: WAP implements XOR functionality without using XOR(^) operator.
* Sample Input :
* Sample output :
Enter two numbers :2 2
Ex-or of numbers is 0
Enter two numbers :3 4
Ex-or of numbers is 7
Enter two numbers :4 5
Ex-or of numbers is 1
*
*/


#include<stdio.h>
int main()
{
	int a,b,x;                              //declaring inputs
	printf("Enter two numbers :");
	scanf("%x %x",&a,&b);                     //reading numbers
	x=((~a)&b)|(a&(~b));                          //Ex-or operation
	printf("Ex-or of numbers is %x\n",x);

	return 0;
}

