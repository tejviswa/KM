/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: WAP implements addition functionality without using ADD('+') Operator.   
* Sample Input :
* Sample output :
Enter numbers
8 7
Addition result is 15
*
*/


#include<stdio.h>
int main()
{
	int a,b,x;                              //declaring inputs
	printf("Enter numbers\n");
	scanf("%d %d",&a,&b);                  //reading inputs
	x=(a-(~b))-1;                          //addition
	printf("Addition result is %d\n",x);       //printing result

	return 0;
}

