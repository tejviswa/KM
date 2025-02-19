/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:Read 3 numbers and print biggest of 3
* Sample Input : 42 64 24
* Sample output :Enter 3 numbers:42 64 24
*				 64 is biggest
*/


#include<stdio.h>
int main()
{
	int num1,num2,num3;//declaring inputs
	printf("Enter 3 numbers \n");
	scanf("%d%d%d",&num1,&num2,&num3);//reading inputs
	if(num1>num2 && num1>num3)//checking condition
		printf("%d is biggest\n",num1);
	else if (num2>num3)//checking condition
		printf("%d is biggest\n",num2);
	else
		printf("%d is biggest\n",num3);

	return 0;
}

