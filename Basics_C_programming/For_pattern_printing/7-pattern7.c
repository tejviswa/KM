/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program:Print the following pattern 
* Sample Input :5
* Sample output :5
*
*1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

*
*/


#include<stdio.h>
int main()
{
	int i,j,n;//declaring inputs
	printf("Enter number:");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//loop for printing pattern
	{
		for(j=1;j<=i;j++)//loop for pattern printing
		{
			printf(" %d",j);
		}
		printf("\n");
	}

	return 0;
}

