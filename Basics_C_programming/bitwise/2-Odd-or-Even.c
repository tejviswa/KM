/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: WAP whether a number is ODD or EVEN using bitwise.
* Sample Input :
* Sample output :
Enter number: 5
Odd number
Enter number: 8
Even number
*
*/


#include<stdio.h>
int main()
{
	int n;                            //declaring inputs
	printf("Enter number: ");
	scanf("%d",&n);                   //reading inputs
	if(n&0x01)                           //if number becomes not 0 its ODD
		printf("Odd number\n");
	else printf("Even number\n");         //or else its EVen

	return 0;
}

