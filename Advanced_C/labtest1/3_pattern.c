/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 12-12-2024
* Program:  priniting patterns
* Sample Input :
* Sample output :
*Enter no of rows and columns
5
7
 1 0 1 0 1 0 1
 0 1 0 1 0 1 0
 1 0 1 0 1 0 1
 0 1 0 1 0 1 0
 1 0 1 0 1 0 1

*/


#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter no of rows and columns\n");
	scanf("%d%d",&r,&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i+j)%2==0)
				printf(" 1");
			else 
				printf(" 0");
		}
		printf("\n");
	}

	return 0;
}

