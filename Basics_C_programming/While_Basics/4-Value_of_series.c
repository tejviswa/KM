/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 26-09-2024
* Program:Write a program to print the value of series 1-1/2+1/3...1/n
* Sample Input :5
* Sample output :Enter number:5
* 				Value is 0.78
*
*/


#include<stdio.h>
int main()
{
	int i=1,n,ret;//declaring inputs
	float res=0;
	printf("Enter number\n");
	ret=scanf("%d",&n);//error handling while reading inputs
	if (ret==0)
	{
		printf("Invalid input\n");
		return 1;
	}
	if(n<0)//checking condition if number is less than 0
	{
		while(0>n)//loop until n number
		{
			if(n%2==-1)
				res=res+(float)1/n;
			else
				res=res-(float)1/n;
			n++;
		}
		printf("value is %f\n)",res);
	}

	else
	{
		while(i<=n)//for positive number
		{
			if(i%2==1)//checking condiiton for pattern
			{
				res=res+(float)1/i;
			}	
			else
			{
				res=res-(float)1/i;
			}
			i++;
		}
		printf("value is %f\n",res);
	}
	return 0;
}

