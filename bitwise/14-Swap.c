/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-10-2024
* Program: WAP Swap any two numbers using bitwise operators. How does it work?
* Sample Input :
* Sample output :
Enter two numbers :5 2
Before swap a=5,b=2
After swap a=2,b=5
Enter two numbers :45 89
Before swap a=45,b=89
After swap a=89,b=45

*/


#include<stdio.h>
int main()
{
	int a,b;                                   //declaring inputs
	printf("Enter two numbers :");              
	scanf("%x %x",&a,&b);                        //reading inputs
	printf("Before swap a=%x,b=%x\n",a,b);
	a=a^b;
	b=a^b;                                      //swaping numbers
	a=a^b;
	printf("After swap a=%x,b=%x\n",a,b);       //printing after swap

	return 0;
}

