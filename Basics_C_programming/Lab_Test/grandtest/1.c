/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 02-11-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number\n");
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			if(i==1)
				printf("$# ");
			else
			{
				if(i%2==0)
				{
					printf("$");
					for(j=0;j<i;j++)
					{
						printf("#");
					}
					printf(" ");
				}
				else
					printf("$# ");
			}
		}
	}
	else
		printf("ENter number greater than 0\n");
	printf("\n");

	return 0;
}

