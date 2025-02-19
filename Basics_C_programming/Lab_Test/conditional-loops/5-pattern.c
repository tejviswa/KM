/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 03-10-2024
* Program:To print the given pattern 
* Sample Input :
* Sample output :

* 
* *
* * *
* * * *
* * * * *

*
*/


#include<stdio.h>
int main()
{
	int i,j,n;//declaring i and j values for loop
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//outer loop
	{
		for(j=1;j<=i;j++)//inner loop
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

