/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program:Using  for,while and do while print the following pattern. 
* Sample Input :5
* Sample output :Enter number: 5
*
*
*/





//------------------ Using for loop----------------
#if 0
#include<stdio.h>
int main()
{
	int i,j,n;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//loop for printing pattern
	{
		for(j=1;j<=n;j++)
		{
			if(j>i)
				break;
			else printf(" * ");
		}
		printf("\n");
	}

	return 0;
}
#endif

//==================Using while loop===============
#if 0
#include<stdio.h>
int main()
{
	int i=1,j=1,n;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&n);reading input
	while(i<=n)//loop until pattern is printed
	{
		j=1;
		while(j<=i)
		{
			printf(" * ");
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
#endif

#if 1
#include<stdio.h>
int main()
{
	int i=1,j=1,n;//declaring inputs
	printf("Enter number \n");
	scanf("%d",&n);reading inputs
	do
	{
		j=1;
		do
		{
			printf(" * ");
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=n);
	return 0;
}
#endif




