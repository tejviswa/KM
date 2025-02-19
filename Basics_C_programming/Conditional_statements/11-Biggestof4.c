/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: read and print biggest of 4 numbers
* Sample Input : 95 98 55 65
* Sample output :Enter 4 digits: 98 78 65 32
* 98 is biggest
*
*/


#include<stdio.h>
int main()
{
	int num1,num2,num3,num4;//declaring inputs
	printf("Enter 4 digits: \n");
	scanf(" %d %d %d %d",&num1,&num2,&num3,&num4);//reading inputs
	if(num1>num2)//checking condition
	{
		if(num1>num3)//checking condition
		{
			if(num1>num4)//checking condition
			{
				printf("%d is Biggest \n",num1);
			}
			else
			{
				printf("%d is biggest \n",num4);
			}
		}
		else
		{
			if(num3>num4)//checking condition
			{

				printf("%d is biggest\n",num3);
			}
			else 
			{
				printf("%d is biggest\n",num4);
			}
		}
	}
	else
	{
		if(num2>num3)//checking condition
		{
			if(num2>num4)//checking  condition
			{
				printf("%d is biggest\n",num2);
			}
			else
			{
				printf("%d is biggest\n",num4);
			}
		}
		else
		{
			if(num3>num4)//checking condition
			{
				printf("%d is biggest\n",num3);
			}
			else
			{
				printf("%d is biggest\n",num4);
			}
		}
	}



return 0;
}
