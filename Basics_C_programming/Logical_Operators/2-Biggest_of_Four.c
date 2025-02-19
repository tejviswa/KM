/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:Read 4 numbers and print biggest of 4 
* Sample Input : 25 64 01 98
* Sample output :Enter 4 digits: 25 64 01 98
*				98 is biggest
*/


#include<stdio.h>
int main()
{
	int num1,num2,num3,num4;//declaring inputs
	printf("Enter 4 digits\n");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);//reading inputs
	if(num1>num2 && num1>num2 && num1>num3 && num1>num4)//checking condition
		printf("%d is biggest\n",num1);
	else if(num2>num3 && num2>num4)//checking condition
		printf("%d is biggest\n",num2);
	else if(num3>num4)//checking condition
		printf("%d is biggest\n",num3);
	else
		printf("%d is biggest\n",num4);
	return 0;
}

