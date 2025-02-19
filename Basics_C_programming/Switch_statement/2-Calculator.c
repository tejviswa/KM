/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-09-2024
* Program:Write a calculator program using switch case. 
* Sample Input :6+4
* Sample output :Enter two numbers and operator in format (n1 operator n2): 6+4
* 				10
*
*/


#include<stdio.h>
int main()
{
	int a,num1,num2;//declaring inputs
	char ch;//declaring inputs
	printf("Enter two numbers and operators in format( n1 operator n2)\n");
	a=scanf("%d %c%d",&num1,&ch,&num2);//reading inputs
//	if((num1>=0000 && num1<=9999))
	

	if(a==3)//checking for valid inputs
	{
	//printf("%d\n",a);
	switch(ch)//checking conditions of each operator
	{
		case '+':printf("%d\n",num1+num2);
				 break;
		case '-':printf("%d\n",num1-num2);
				 break;
		case '*':printf("%d\n",num1*num2);
				 break;
		case '/':
				 if(num2>0)         //num2 must not be 0
					 printf("%d\n",num1/num2);
				 else
					 printf("denominator must not be 0\n");
				 break;

		case '%':
				 if(num2>0)         //num2 must not be 0
					 printf("%d\n",num1%num2);
				 else
					 printf("denominator must not be 0\n");
				 break;
		default:printf("Invalid operator\n");

	}
	}
	else printf("Enter inputs as per formats\n");
							 
	return 0;
}

