/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program: Print the following pattern using loops 
* Sample Input :5
* Sample output :Enter number:5
5 
4 4 
3 3 3 
2 2 2 2 
1 1 1 1 1 

*
*/


#include<stdio.h>
int main()
{
	int i,j,n,a;//declairng inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	a=n;
	for(i=1;i<=n;i++)//checking condition untill pattern printed
	{
		for(j=1;j<=i;j++)//loop for pattern printing
		{
			printf("%d ",a);
		}
		a--;
		printf("\n");
	}

	return 0;
}

