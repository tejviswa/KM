/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program: Biggest of three numbers
* Sample Input :2 5 7
* Sample output :Enter  3 numbers:2 5 7
*					7 is biggest
*
*/


#include<stdio.h>
int main()
{
	int num1,num2,num3,big;// declaringing inputs
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);//reading inputs

	big=num1;//assigning num1 to variable big
	big=big>num2?big:num2;//checking condition
	big=big>num3?big:num3;//checking condition
	printf("%d is biggest\n",big);

	return 0;
}

