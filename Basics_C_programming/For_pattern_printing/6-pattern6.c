/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: print the following pattern
* Sample Input :5
* Sample output :5
* 
*1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

*
*
*/


#include<stdio.h>
int main()
{
	int i,j,n;//declaring inputs
	printf("Enter number:");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//checking condition for loop
	{
		for(j=1;j<=i;j++)//checking condition for loop pattern printing
		{
			printf(" %d",i);
		}
		printf("\n");	
	}
	return 0;
}

