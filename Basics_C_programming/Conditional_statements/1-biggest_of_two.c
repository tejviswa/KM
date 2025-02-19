/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program:Read two numbers and print biggest of two numbers
* Sample Input :5 6
* Sample output :Enter two numbers: 5 6
* Biggest  number is 6
*
*/


#include<stdio.h>
int main()
{
	int num1,num2;//declaring inputs
	printf("Enter two  numbers: \n");
	scanf("%d%d",&num1,&num2);//read two numbers
	if(num1>num2)//condition checking
		printf("Biggest number is %d\n",num1);
	else
		printf("Biggest number is %d\n",num2);
	return 0;
}

