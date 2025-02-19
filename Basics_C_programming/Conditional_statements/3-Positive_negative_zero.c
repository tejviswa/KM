/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: To check the given  number is positve or negative or 0
* Sample Input :-8
* Sample output :Enter number: -8
* Number is Negative
*
*/


#include<stdio.h>
int main()
{
	int num;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&num);//reading inputs
	if(num==0)//checking condition
		printf("Number is 0\n");
	else if (num>0)//checking condition
		printf("Number is postive\n");
	else
		printf("Number is Negative\n");
	return 0;
}

