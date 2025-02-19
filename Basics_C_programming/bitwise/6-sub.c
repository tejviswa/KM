/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: WAP implements subtraction functionality without using SUB('-') Operator.  
* Sample Input :
* Sample output :
* ENter two numbers
4 7
Subtraction result is -3

*
*/


#include<stdio.h>
int main()
{
	int a,b,x;                    //decalring inputs
	printf("ENter two numbers\n");
	scanf("%d %d",&a,&b);                 //reading inputs
	x=a+(~b+1);                            //subtraction
	printf("Subtraction result is %d\n",x);

	return 0;
}

