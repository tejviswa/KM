/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program: Read two numbers from the user and print all numbers in reverse order.
* Sample Input : 10 20 
* Sample output :20 19 18 17 16 15 14 13 12 11 10
*
*/


#include<stdio.h>
int main()
{
	int n1,n2,ret; //declaring inputs
	printf("Enter numbers\n");
	ret=scanf("%d%d",&n1,&n2);//reading inputs
	if(n1<n2)//checking condition 
	{
		while(n1<=n2)//repeating loop untill range of numbers
		{
			printf(" %d",n2);
			n2--;
		}
		printf("\n");
	}
	else if(n1>n2)//checking condtion
	{
		while(n1>=n2)//repeating loop untill range of numbers
		{
			printf(" %d",n2);
			n2++;
		}
		printf("\n");
	}
	else
		printf("Both are same\n");

	return 0;
}

