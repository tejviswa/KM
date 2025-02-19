/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:Read two numbers from the user and print all odd numbers between those numbers and then all even numbers. 
* Sample Input :10 20
* Sample output :even numbers: 10 12 14 16 18 20
* 				Odd numbers: 11 13 15 17 19
*
*/


#include<stdio.h>
int main()
{
	int a,n1,n2,ret;//declaring inputs
	printf("Enter 2 numbers\n");
	ret=scanf("%d%d",&n1,&n2);//reading inputs
	while(ret!=2)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d%d",&n1,&n2);
	}
	a=n1;//moving the 1st read number to variable a so that it can be compared further for Even
	if(n1<n2)//checking condition
	{
		
		printf("Even numbers:");
		while(n1<=n2)//loop untill all even numbers are printed
		{

			if(n1%2==0)//checking number is even or not
			{
				printf(" %d",n1);
			}
			n1++;
		}
		printf("\nOdd numbers:");
		n1=a;//moving the 1st read number to n1 so that it can again compared for Odd
		while(n1<=n2)//loop untill all odd numbers are printed
		{
			if(n1%2==1)//checking odd or not
			{
				printf(" %d",n1);
			}
			n1++;
		}
		
		printf("\n");
		n1=a;
	}
	else if(n1>n2)//checking condition
	{
		
		printf("Even numbers:");
		while(n1>=n2)//loop until all even numbers are printed
		{

			if(n1%2==0)//checking even or not
			{
				printf(" %d",n1);
			}
			n1--;
		}
		n1=a;
		printf("\nOdd numbers:");
		
		while(n1>=n2)//loop until all odd numbers are printed
		{
			if(n1%2==1)//checking odd or not
			{
				printf(" %d",n1);
			}
			n1--;
		}
		printf("\n");
	}

	return 0;
}

