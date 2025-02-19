/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program:Read 3 numbers and print biggest of them 
* Sample Input :56 65 64
* Sample output :Enter 3 numbers: 56 65 64
* 65 is biggest
*
*/


#include<stdio.h>
int main()
{
	int num1,num2,num3;//declaring inputs
	printf("Enter 3 numbers \n");
	scanf("%d%d%d",&num1,&num2,&num3);//reading inputs
	if(num1>num2)//checking conditon
	{
		if(num1>num3)//checking condition
		{
			printf("%d is biggest\n",num1);
		}
		else
		{
			printf("%d is biggest\n",num3);
		}


		
	}
	else if(num2>num3)//checking condition
	{
		printf("%d is biggest\n",num2);
	}
	else
	{
		printf("%d is biggest\n",num3);
	}
	 
	return 0;
}

