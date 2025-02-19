/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:Read two numbers from the user and print all serial numbers between those numbers. 
* Sample Input :10 20
* Sample output :10 11 12 13 14 15 16 17 18 19 20
*
*/


#include<stdio.h>
int main()
{
	int n1,n2,ret;//declaring inputs
	printf("Enter two numbers to print numbers between them:");
	ret=scanf("%d %d",&n1,&n2);//reading inputs
	while(ret!=2)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d %d",&n1,&n2);
	}
	if(n1<n2)//checking condition
	{
		while(n1<=n2)//loop until all the numbers are printed in the range
		{
			printf(" %d",n1);
			n1++;
		}
	}
	else if(n1>n2)//checking condition
	{
		while(n1>=n2)//loop until all numbers are printed in the range
		{
			printf(" %d",n1);
			n1--;
		}
	}
	else
		printf("Both numbers are equal\n");
	printf("\n");


	return 0;
}

