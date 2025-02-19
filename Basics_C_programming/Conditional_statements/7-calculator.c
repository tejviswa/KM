/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-09-2024
* Program:Calculator take 2 numbers and perform operations (+-/%*)
* Sample Input :3+4
* Sample output :
* Enter two numbers and the arithmetoc operand: 3+4
* 3+4=7
*
*/


#include<stdio.h>
int main()
{
	char operand;//declaring operand
	int num1,num2;//declaring 2 numbers
	printf("Enter two numbers and the operand: ");
	scanf("%d %c%d",&num1,&operand,&num2);//read input values
	
	if(operand =='+') //checking operand is + or not
	{
		printf("%d+%d=%d\n",num1,num2,num1+num2);
	}
	else if(operand =='-') //checking operand is - or not
	{
		printf(" %d-%d=%d\n",num1,num2,num1-num2);
	}
	else if(operand =='*') //checking operans is * or not
	{
		printf("%d*%d=%d\n",num1,num2,num1*num2);
	}
	else if( operand=='/') //checking operand is / or not
	{
		if(num2==0)//checking condition
		{
			printf("Denominator not be 0\n");
		}
		else
		{
			printf("%d/%d=%d\n",num1,num2,num1/num2);
		}
			
	}
	else if(operand =='%') //checking operand is % or not
	{
		if(num2==0)//checking condition
		{
			printf("Denominator not be 0\n");
		}
		else
		{
			printf("%d %% %d=%d\n",num1,num2,num1%num2);
		}
	}

	return 0;
}

