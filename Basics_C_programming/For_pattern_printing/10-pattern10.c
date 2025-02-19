/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 30-09-2024
* Program:Print the pattern usig loops 
* Sample Input :5
* Sample output :ENter number: 5
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
*
*/


#include<stdio.h>
int main()
{
	int i,j,n,a;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&n);//reading inputs
	for(i=1;i<=n;i++)//checking loop condition until pattern is printed
	{
		a=n;
		for(j=1;j<=i;j++)//checking condiiton until pattern is printed
		{
			printf("%d ",a);
			a--;
		}
		printf("\n");
	}

	return 0;
}
