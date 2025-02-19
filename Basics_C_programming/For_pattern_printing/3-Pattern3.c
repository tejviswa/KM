/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Print the pattern using for,while and do while 
* Sample Input :5
* Sample output :Enter number:5
*
*
*
*/

#if 0
#include<stdio.h>
int main()
{
	int i,k,j,n;//declairng inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//checking condition for printing pattern
	{
		for(k=1;k<i;k++)
		{

			printf("  ");
		}

		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
#endif


#if 0
#include<stdio.h>
int main()
{
	int i=1,j,n,k;//declaring and initializing inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	while(i<=n)//checking condition for the loop
	{
	    j=i;
		k=1;
		while(k<i)
		{
			printf("  ");
			k++;
		}
		while(j<=n)
		{
			printf("* ");
			j++;
		}
		
		printf("\n");
		i++;
	}
	return 0;
}
#endif

#if 1
#include<stdio.h>
int main()
{
	int i=1,j,k,n;//declaring inputs and initializing
	printf("Enter number\n");
	scanf("%d",&n);//reading input
	do//loop for printing pattern
	{
		j=i;
		k=1;
			do
			{
				printf("  ");
				k++;
			}while(k<i);
			do
			{
				printf("* ");
				j++;
			}while(j<=n);
		i++;
		printf("\n");
	}while(i<=n);
	return 0;
}
#endif


