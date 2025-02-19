/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Print the pattern using loops 
* Sample Input :5
* Sample output :Enter number: 5
* 1
* 2 3
* 4 5 6
* 7 8 9 10
* 11 12 13 14 15
*
*/


#include<stdio.h>
int main()
{
int i,j,n,a;//declaring inputs
	printf("Enter number: ");
	scanf("%d",&n);//reading inputs
	a=1;
	for(i=1;i<=n;i++)//checking condition for printing pattern
	{
		for(j=1;j<=i;j++)//loop until pattern is printed
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}

	return 0;
}

