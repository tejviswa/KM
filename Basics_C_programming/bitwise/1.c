/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: Write a program to Set, clear and toggle a particular bit using bit wise operator?
* Sample Input :
* Sample output :
Enter number :
5
Enter bit position:6
After set the value is 45
After clear the value is 5
After toggle the value is 45
*
*/


#include<stdio.h>
int main()
{
	int n,p;                             //declaring inputs
	printf("Enter number :\n");
	scanf("%x",&n);                     //reading number in hex
	printf("Enter bit position:");
	scanf("%d",&p);                    //reading bit position
	printf("After set the value is %x\n",n|(0x01<<p));         
	printf("After clear the value is %x\n",n&~(0x01<<p));
	printf("After toggle the value is %x\n",n^(0x01<<p));

	return 0;
}

