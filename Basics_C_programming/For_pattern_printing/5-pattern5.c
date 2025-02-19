/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Using while,dowhile and for loops print following pattern.
* Sample Input : 5
*  
* Sample output : Enter number:5
* 		 *
        * *
       * * *
      * * * *
     * * * * *

*
*/

#if 0
#include<stdio.h>
int main()
{
	int i,j,n;//declaring innputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//checking condition and repeating loop until pattern is printed
	{
		for(j=1;j<=n;j++)
		{
			if(i+j<=n)
				printf(" ");
			else
				printf(" *");
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
	int i=1,j=1,n;//declairng inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	while(i<=n)//loop unitil pattern is printed
	{
		j=1;
		while(j<=n)
		{
			if((i+j)<=n)
				printf(" ");
			else printf(" *");
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
	int i=1,j=1,n;//declaring inputs and initializing inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	do//loop until pattern is printed
	{
		j=1;
		do
		{
			if(i+j<=n)
				printf(" ");
			else 
				printf(" *");
			j++;
		}while(j<=n);
		i++;
		printf("\n");
	}while(i<=n);
	return 0;
}
#endif
