/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:Biggest of two numbers 
* Sample Input :2 4
* Sample output :Enter 2 numbers: 2 4
* 				 4 is biggest 
*
*/


#include<stdio.h>
int main()
{
	int num1,num2;//declaring inputs
	printf("Enter 2 numbers\n");
	scanf("%d%d",&num1,&num2);//reading inputs
	(num1>num2)?printf("%d is biggest\n",num1):printf("%d is biggest\n",num2);//checking condition
	return 0;
}

