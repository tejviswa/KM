/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Print the following pattern using for,while and do while 
* Sample Input :5
* Sample output : Enter number:5
*
*
*
*
*
*/


#if 0
#include<stdio.h>
int main()
{
	int i,j,n;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	for(i=n;i>=1;i--)//checking condition for loop
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
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
	int i,j=1,n;//declaring inputs and initializing
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	i=n;
	while(i>=1)//checking condition for loop
	{
		j=1;
		while(j<=i)
		{
			printf(" * ");
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
#endif

#if 1
#include<stdio.h>
int main()
{
	int i,j=1,n;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	i=n;
	do//loop for printing the pattern
	{
		j=1;
		do
		{
			printf(" * ");
			j++;
		}while(j<=i);
		printf("\n");
		i--;
		
	}while(i>=1);
	return 0;
}

#endif
	

