/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Print the following pattern
* Sample Input :5
* Sample output :Enter number:5
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*
*/


#include<stdio.h>
int main()
{
	int i,j,k,n;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	
	for(i=1;i<=n;i++)//checking condition for printing the pattern for 1st half
	{
		for(j=1;j<=n-i;j++)//loop until spaces are is printed
		{
			printf("  ");
		}
		for(k=1;k<=(i*2)-1;k++)//loop for printed *
		{
			printf(" *");
		}
		printf("\n");
	}
	
	

	for(i=n-1;i>=1;i--)//loop for printing second half
	{
	
			
		for(j=1;j<=n-i;j++)//loop for printing spaces
		{
			printf("  ");
		}
		for(k=1;k<=(i*2)-1;k++)//loop for printing *
		{
			printf(" *");
		}
		printf("\n");
	}


	return 0;
}

