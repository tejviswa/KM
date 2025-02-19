/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program: Calculator program to read two numbers and one character(+,-,*,/,%) and perform appropraite operations.
* Sample Input :2
* 				5
* 				4
* Sample output :Enter n number:2
* 				 Enter 2 numbers:5
* 				 				 4
* 				 Enter a character(+-/%*):+
* 				 Result of 5+4 is 9
* 				 Enter 2 numbers:4
* 				 			     3
*				 Enter a character(+-/%*):-
*				 Result of 4-3 is 1 
*
*/


#include<stdio.h>
int main()
{
	int i=1,n,n1,n2,ret;//declaring inputs
	char ch;//declaring operator
	printf("Enter n number: \n");
	ret=scanf("%d",&n);
	while(ret!=1)//error handling
	{
		printf("Enter numbers only \n");
		getchar();
		ret=scanf("%d",&n);
	}
	while(i<=n)//loop 
	{
		printf("Enter %d numbers: \n",n);
		ret=scanf("%d %d",&n1,&n2);
		while(ret!=2)//error handling
		{
			printf("Enter numbers only");
			getchar();
			ret=scanf("%d %d",&n1,&n2);
		}
		printf("Enter a character (+/*-%) : \n");
		scanf(" %c",&ch);//reading operator
		switch(ch)//checking the operator and perform approprite operation
		{
			case '+':printf("Result of %d+%d is %d \n",n1,n2,n1+n2);
					 break;

			case '-':printf("Result of %d%c%d is %d \n",n1,ch,n2,n1-n2);
					 break;
			case '*':printf("Result of %d%c%d is %d \n",n1,ch,n2,n1*n2);
					 break;
			case '/':if(n2>0)//checking condition if denominator is 0
					 
					 printf("Result of %d %c%d is %0.2f \n",n1,ch,n2,(float)n1-n2);
					 else
					 printf("Num 2 must be >0\n");
					 break;
			case '%':if(n2>0)//checking condiiton if denominator is 0
					 
					 printf("Result of %d%c%d is %d \n",n1,ch,n2,n1-n2);
					 else
					 printf("Num  2 must be > 0 \n");
					 break;
			default:printf("Enter valid character \n");break;
		}
		i++;
	}

	return 0;
}

