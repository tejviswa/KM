/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:Read anumber from the user and print its multiplication table. 
* Sample Input :2 2 5
* Sample output :
* 				Enter n number: 2
				Enter x number: 2
				2*1 =2
				2*2 =4
				2*3 =6
				2*4 =8
				2*5 =10
				2*6 =12
				2*7 =14
				2*8 =16
				2*9 =18
				2*10 =20
				Enter x number: 5
				5*1 =5
				5*2 =10
				5*3 =15
				5*4 =20
				5*5 =25
				5*6 =30
				5*7 =35
				5*8 =40
				5*9 =45
				5*10 =50
*
*/


#include<stdio.h>
int main()
{
	int i=1,j=1,n,n1=10,x,ret;//declaring inputs
	printf("Enter n number\n");
	ret=scanf("%d",&n);//reading inputs
	while(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&n);
	}
	while(i<=n)//loop until n times
	{
		printf("Enter a number which table you want to print: ");
		scanf("%d",&x);
		while(j<=n1)//loop until printing 10 multiples
		{
			printf("%d*%d=%d \n",x,j,x*j);
			j++;
		}
		j=1;//reinitializing j with 1  for next table
		i++;
	}

	return 0;
}

