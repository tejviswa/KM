/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 03-10-2024
* Program: Printing pattern without using nested loops 
* Sample Input :5
* Sample output :Enter number: 5
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
	int i=1,j=1,n;//declaring inputs
	printf("Enter number: ");
	scanf("%d",&n);//reading inputs
	while(i<=n)//loop for printing pattern
	{
		if(j<=i)//checking condition
		{
			printf("* ");
			j++;
		}
		else
		{
			j=1;
			i++;
			printf("\n");
		}
	}
	return 0;
}

