/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program:Print the following pattern 
* Sample Input :5
* Sample output :Enter number:5
*
*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*
*/


#include<stdio.h>
int main()
{
	int i,j,n;//declaring inputs
	printf("Enter number:");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//loop until pattern is printed
	{
		for(j=1;j<=i;j++)//loop until pattern is printed
		{
			if((i+j)%2==0)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}

	return 0;
}

