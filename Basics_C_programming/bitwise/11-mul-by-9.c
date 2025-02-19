/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-10-2024
* Program: WAP multiply a number by 9 using bit shift.
* Sample Input :
* Sample output :
*
Enter number:3
3 x 9 is 27

Enter number:5
5 x 9 is 45

*
*/


#include<stdio.h>
int main()
{
	int x,y;                        //declaring inputs
	printf("Enter number:");
	scanf("%x",&x);                      //reading inputs

	y=(x<<3)+x;                            //for mul with 9 left shift number by 3 times and add the number
	printf("%d x 9 is %d\n",x,y);
	return 0;
}

